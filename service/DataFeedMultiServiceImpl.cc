#include "DataFeedMultiServiceImpl.hh"
#include "DataFeedMultiOptions.hh"
#include "FederLog.hh"
#include "UstpApiStructPrint.hh"

#include "UstpMdApi.h"

namespace feder
{

DataFeedMultiServiceImpl::DataFeedMultiServiceImpl(soil::Options* options):
    options_(NULL),
    handle_(NULL)
{
  FEDER_TRACE <<"DataFeedMultiServiceImpl::DataFeedMultiServiceImpl()";

  options_ = dynamic_cast<DataFeedMultiOptions*>(options);

  CUstpRspInfo rspInfo;
  memset(&rspInfo, 0x0, sizeof(rspInfo));
  
  if( !InitAPI(options_->timeout, &rspInfo) )
  {
    FEDER_ERROR <<"InitAPI error !!!" <<std::endl
                   <<rspInfo;

    throw std::runtime_error("InitAPI failed.");
  }

  RegisterFront(const_cast<char*>(options_->front_address.data()));

  if( !ConnectFront(&rspInfo) )
  {
    FEDER_ERROR <<"ConnectFront error !!!" <<std::endl
                   <<rspInfo;

    throw std::runtime_error("ConnectFront failed.");
  }

  login();
  
}


DataFeedMultiServiceImpl::~DataFeedMultiServiceImpl()
{
  FEDER_TRACE <<"DataFeedMultiServiceImpl::~DataFeedMultiServiceImpl";
}

void DataFeedMultiServiceImpl::registerCallback(DataFeedMultiServiceCallback* callback)
{
  FEDER_TRACE <<"DataFeedMultiServiceImpl::registerCallback";
}

void DataFeedMultiServiceImpl::login()
{
  FEDER_TRACE <<"DataFeedMultiServiceImpl::login";

  CUstpFtdcReqUserLoginField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.UserID, options_->user_id.data(), sizeof(req.UserID));
  strncpy(req.Password, options_->password.data(), sizeof(req.Password));
  req.TopicID = options_->topic_id;
  strncpy(req.IP, options_->host_ip.data(), sizeof(req.IP));
  strncpy(req.Mac, options_->host_mac.data(), sizeof(req.Mac));

  FEDER_INFO <<req;

  CUstpRspInfo rspInfo;
  memset(&rspInfo, 0x0, sizeof(rspInfo));
  
  if( !ReqUserLogin(&req, true, handle_, &rspInfo) )
  {
    FEDER_ERROR <<"login error !!!" <<std::endl
                   <<rspInfo;

    throw std::runtime_error("login failed.");
  }
}

soil::Options* DataFeedMultiService::createOptions()
{
  return new DataFeedMultiOptions();
}

DataFeedMultiService* DataFeedMultiService::createService(soil::Options* options)
{
  return new DataFeedMultiServiceImpl(options);
}

};
