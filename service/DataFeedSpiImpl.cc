#include "DataFeedSpiImpl.hh"
#include "FederLog.hh"
#include "DataFeedTCPServiceImpl.hh"
#include "FederUtil.hh"
#include "USTPFtdcUserApiStructPrint.hh"

#include <stdexcept>
#include <sstream>

namespace feder
{

DataFeedSpiImpl::DataFeedSpiImpl(DataFeedTCPServiceImpl* service) :
    service_(service)
{
  FEDER_TRACE <<"DataFeedSpiImpl::DataFeedSpiImpl()" ;

  util_.reset( new FederUtil() );
}

DataFeedSpiImpl::~DataFeedSpiImpl()
{
  FEDER_TRACE <<"DataFeedSpiImpl::~DataFeedSpiImpl()" ;
}

void DataFeedSpiImpl::OnFrontConnected()
{
  FEDER_TRACE <<"DataFeedSpiImpl::OnFrontConnected()" ;

  service_->login();
}

void DataFeedSpiImpl::OnFrontDisconnected(int nReason)
{
  FEDER_TRACE <<"DataFeedSpiImpl::OnFrontDisconnected()" ;
  
  FEDER_ERROR << "--->>> Reason = " <<std::hex  <<nReason ;
}
		
void DataFeedSpiImpl::OnHeartBeatWarning(int nTimeLapse)
{
  FEDER_TRACE <<"DataFeedSpiImpl::OnHeartBeatWarning()" ;
  
  FEDER_ERROR << "--->>> nTimerLapse = " << nTimeLapse ;
}

void DataFeedSpiImpl::OnPackageStart(int nTopicID, int nSequenceNo)
{
  FEDER_TRACE <<"DataFeedSpiImpl::OnPackageStart()";

  FEDER_DEBUG <<"nTopicID - " <<nTopicID
             <<" nSequenceNo - " <<nSequenceNo;
}

void DataFeedSpiImpl::OnPackageEnd(int nTopicID, int nSequenceNo)
{
  FEDER_TRACE <<"DataFeedSpiImpl::OnPackageEnd()";

  FEDER_DEBUG <<"nTopicID - " <<nTopicID
             <<" nSequenceNo - " <<nSequenceNo;

}

void DataFeedSpiImpl::OnRspError(CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  FEDER_TRACE <<"DataFeedSpiImpl::OnRspError()" ;
}

void DataFeedSpiImpl::OnRspUserLogin(CUstpFtdcRspUserLoginField *pRspUserLogin, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  FEDER_TRACE <<"DataFeedSpiImpl::OnRspUserLogin()" ;

  try
  {
    checkRspInfo(pRspInfo);

    FEDER_PDU <<*pRspUserLogin;

    service_->notify();
  }
  catch( ... )
  {
  }
}

void DataFeedSpiImpl::OnRspUserLogout(CUstpFtdcRspUserLogoutField *pRspUserLogout, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  FEDER_TRACE <<"DataFeedSpiImpl::OnRspUserLogout()" ;
}

void DataFeedSpiImpl::OnRspSubscribeTopic(CUstpFtdcDisseminationField *pDissemination, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  FEDER_TRACE <<"DataFeedSpiImpl::OnRspSubscribeTopic()";
  
}

void DataFeedSpiImpl::OnRspQryTopic(CUstpFtdcDisseminationField *pDissemination, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  FEDER_TRACE <<"DataFeedSpiImpl::OnRspQryTopic()";
}

void DataFeedSpiImpl::OnRtnDepthMarketData(CUstpFtdcDepthMarketDataField *pDepthMarketData)
{
  FEDER_TRACE <<"DataFeedSpiImpl::OnRtnDepthMarketData()";

  // FEDER_PDU <<*pDepthMarketData;

  DepthMarketData* data = util_->toDepthMarketData( pDepthMarketData );

  service_->pushData( data );
}

void DataFeedSpiImpl::OnRspSubMarketData(CUstpFtdcSpecificInstrumentField *pSpecificInstrument, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  FEDER_TRACE <<"DataFeedSpiImpl::OnRspSubMarketData()" ;

  try
  {
    checkRspInfo(pRspInfo);

    FEDER_PDU <<*pSpecificInstrument;
  }
  catch( ... )
  {
  }
}

void DataFeedSpiImpl::OnRspUnSubMarketData(CUstpFtdcSpecificInstrumentField *pSpecificInstrument, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  FEDER_TRACE <<"DataFeedSpiImpl::OnRspUnSubMarketData()" ;
  
}


void DataFeedSpiImpl::checkRspInfo(CUstpFtdcRspInfoField *pRspInfo)
{
  FEDER_TRACE <<"DataFeedSpiImpl::checkRspInfo()" ;

  if( pRspInfo )
    FEDER_PDU <<*pRspInfo ;
  
  bool result = ((pRspInfo) && (pRspInfo->ErrorID != 0));
  
  if (result)
  {
    std::stringstream err_stream;
    err_stream <<"ErrorID=" <<pRspInfo->ErrorID <<","
               <<"ErrorMsg=" <<pRspInfo->ErrorMsg;
    
    FEDER_ERROR << err_stream.str();

    throw std::runtime_error(err_stream.str());
  }
  
}



} // namespace feder
