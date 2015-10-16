#include "DataFeedMultiServiceImpl.hh"
#include "DataFeedMultiOptions.hh"
#include "DataFeedLog.hh"
#include "UstpApiStructPrint.hh"

#include "UstpMdApi.h"

namespace feder
{

DataFeedMultiServiceImpl::DataFeedMultiServiceImpl(soil::Options* options):
    options_(NULL),
    handle_(NULL)
{
  DATAFEED_TRACE <<"DataFeedMultiServiceImpl::DataFeedMultiServiceImpl()";

  options_ = dynamic_cast<DataFeedMultiOptions*>(options);

  CUstpRspInfo rspInfo;
  memset(&rspInfo, 0x0, sizeof(rspInfo));
  
  if( !InitAPI(options_->timeout, &rspInfo) )
  {
    DATAFEED_ERROR <<"InitAPI error !!!" <<std::endl
                   <<rspInfo;

    throw std::runtime_error("InitAPI failed.");
  }

  RegisterFront(const_cast<char*>(options_->front_address.data()));

  if( !ConnectFront(&rspInfo) )
  {
    DATAFEED_ERROR <<"ConnectFront error !!!" <<std::endl
                   <<rspInfo;

    throw std::runtime_error("ConnectFront failed.");
  }

  login();
  
}


DataFeedMultiServiceImpl::~DataFeedMultiServiceImpl()
{
  DATAFEED_TRACE <<"DataFeedMultiServiceImpl::~DataFeedMultiServiceImpl";
}

void DataFeedMultiServiceImpl::registerCallback(DataFeedMultiServiceCallback* callback)
{
  DATAFEED_TRACE <<"DataFeedMultiServiceImpl::registerCallback";
}

void DataFeedMultiServiceImpl::login()
{
  DATAFEED_TRACE <<"DataFeedMultiServiceImpl::login";

  CUstpFtdcReqUserLoginField req;
  memset(&req, 0x0, sizeof(req));

  strncpy(req.UserID, options_->user_id.data(), sizeof(req.UserID));
  strncpy(req.Password, options_->password.data(), sizeof(req.Password));
  req.TopicID = options_->topic_id;
  strncpy(req.IP, options_->host_ip.data(), sizeof(req.IP));
  strncpy(req.Mac, options_->host_mac.data(), sizeof(req.Mac));

  DATAFEED_INFO <<req;

  CUstpRspInfo rspInfo;
  memset(&rspInfo, 0x0, sizeof(rspInfo));
  
  if( !ReqUserLogin(&req, true, handle_, &rspInfo) )
  {
    DATAFEED_ERROR <<"login error !!!" <<std::endl
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
