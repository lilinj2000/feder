#include "DataFeedTCPServiceImpl.hh"
#include "DataFeedSpiImpl.hh"
#include "DataFeedTCPOptions.hh"
#include "FederLog.hh"
#include "USTPFtdcUserApiStructPrint.hh"

#include "boost/shared_array.hpp"

namespace feder
{

DataFeedTCPServiceImpl::DataFeedTCPServiceImpl(soil::Options* options, DataFeedTCPServiceCallback* callback) :
    md_api_(NULL),
    callback_(callback)
{
  FEDER_TRACE <<"DataFeedTCPServiceImpl::DataFeedTCPServiceImpl()" ;

  cond_.reset( soil::Condition::create() );

  md_queue_.reset( new soil::MsgQueue<DepthMarketData, DataFeedTCPServiceImpl>(this) );
  
  options_ = dynamic_cast<DataFeedTCPOptions*>(options);

  md_api_ = CUstpFtdcMduserApi::CreateFtdcMduserApi( options_->flow_path.data()) ;
  
  md_spi_.reset( new DataFeedSpiImpl(this) );
  
  md_api_->RegisterSpi( md_spi_.get() );

  md_api_-> SubscribeMarketDataTopic (101, USTP_TERT_QUICK);
  // md_api_-> SubscribeMarketDataTopic (110, USTP_TERT_RESTART);

  md_api_->RegisterFront( const_cast<char*>(options_->front_address.data()) );

  md_api_->Init();

  wait("login");
}

DataFeedTCPServiceImpl::~DataFeedTCPServiceImpl()
{
  FEDER_TRACE <<"DataFeedTCPServiceImpl::~DataFeedTCPServiceImpl()" ;
  
  md_api_->RegisterSpi(NULL);

  md_api_->Release();

  md_api_ = NULL;

}

std::string DataFeedTCPServiceImpl::getVersion(int& major, int& minor)
{
  FEDER_TRACE <<"DataFeedTCPServiceImpl::getVersion()";

  std::string version = md_api_->GetVersion(major, minor);

  FEDER_INFO <<"version: " <<version
            <<", major=" <<major
            <<", minor=" <<minor;

  return version;
}

std::string DataFeedTCPServiceImpl::getTradingDay()
{
  FEDER_TRACE <<"DataFeedTCPServiceImpl::getTradingDay()";

  std::string trading_day = md_api_->GetTradingDay();

  FEDER_INFO <<"trading_day: " <<trading_day;

  return trading_day;
}

void DataFeedTCPServiceImpl::subMarketData(const InstrumentSet& instruments)
{
  FEDER_TRACE <<"DataFeedTCPServiceImpl::subMarketData()" ;

  int size = instruments.size();

  boost::shared_array<char*> pp_instrus(new char*[size]);

  InstrumentSet::const_iterator i_iter = instruments.begin();

  int i=0;
  for(; i_iter!=instruments.end(); i_iter++)
  {
    FEDER_INFO <<"sub instrument: " <<*i_iter;
    
    pp_instrus[i++] = const_cast<char *>(&(*i_iter)[0u]);
  }
    
  md_api_->SubMarketData(pp_instrus.get(), size);
  
}

void DataFeedTCPServiceImpl::unsubMarketData(const InstrumentSet& instruments)
{
  FEDER_TRACE <<"DataFeedTCPServiceImpl::unsubMarketData()" ;
    
}

void DataFeedTCPServiceImpl::login()
{
  FEDER_TRACE <<"DataFeedTCPServiceImpl::login()" ;

  CUstpFtdcReqUserLoginField req;
  memset(&req, 0x0, sizeof(req));

  strncpy( req.UserID, options_->user_id.data(), sizeof(req.UserID) );
  strncpy( req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID) );
  strncpy( req.Password, options_->password.data(), sizeof(req.Password) );

  FEDER_PDU <<req;
  
  int ret = md_api_->ReqUserLogin(&req, ++request_id_);
  if( ret!=0 )
  {
    FEDER_ERROR <<"return code " <<ret;
    throw std::runtime_error("login failed.");
  }
}

void DataFeedTCPServiceImpl::wait(const std::string& hint)
{
  if( cond_->wait(2000) )
  {
    if( !hint.empty() )
      throw std::runtime_error(hint + " time out");
  }
}

void DataFeedTCPServiceImpl::notify()
{
  cond_->notifyAll();
}

void DataFeedTCPServiceImpl::pushData(DepthMarketData* data)
{
  md_queue_->pushMsg( data );
}

soil::Options* DataFeedTCPService::createOptions()
{
  return new DataFeedTCPOptions();
}

DataFeedTCPService* DataFeedTCPService::createService(soil::Options* options, DataFeedTCPServiceCallback* callback)
{
  return new DataFeedTCPServiceImpl(options, callback);
}

}
