#ifndef FEDER_DATAFEED_SPI_IMPL_HH
#define FEDER_DATAFEED_SPI_IMPL_HH

#include <memory>
#include "USTPFtdcMduserApi.h"


namespace feder
{

class DataFeedTCPServiceImpl;
class FederUtil;

class DataFeedSpiImpl : public CUstpFtdcMduserSpi
{
 public:
		
  DataFeedSpiImpl(DataFeedTCPServiceImpl* service);
		
  virtual ~DataFeedSpiImpl();

  // interface from CUstpFtdcMduserSpi
  virtual void OnFrontConnected();
  
  virtual void OnFrontDisconnected(int nReason);

  virtual void OnHeartBeatWarning(int nTimeLapse);

  virtual void OnPackageStart(int nTopicID, int nSequenceNo);

  virtual void OnPackageEnd(int nTopicID, int nSequenceNo);
  
  virtual void OnRspError(CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspUserLogin(CUstpFtdcRspUserLoginField *pRspUserLogin, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
  
  virtual void OnRspUserLogout(CUstpFtdcRspUserLogoutField *pRspUserLogout, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
  
  virtual void OnRspSubscribeTopic(CUstpFtdcDisseminationField *pDissemination, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspQryTopic(CUstpFtdcDisseminationField *pDissemination, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRtnDepthMarketData(CUstpFtdcDepthMarketDataField *pDepthMarketData);

  virtual void OnRspSubMarketData(CUstpFtdcSpecificInstrumentField *pSpecificInstrument, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

  virtual void OnRspUnSubMarketData(CUstpFtdcSpecificInstrumentField *pSpecificInstrument, CUstpFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

 protected:

  void checkRspInfo(CUstpFtdcRspInfoField *pRspInfo);

 private:

  DataFeedTCPServiceImpl* service_;

  std::auto_ptr<FederUtil> util_;
  
};

}; // namesapce feder

#endif
