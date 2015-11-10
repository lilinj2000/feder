#ifndef FEDER_DATAFEED_TCP_SERVICE_IMPL_HH
#define FEDER_DATAFEED_TCP_SERVICE_IMPL_HH

#include <atomic>

#include "soil/STimer.hh"
#include "soil/MsgQueue.hh"

#include "feder/DataFeedTCPService.hh"
#include "USTPFtdcMduserApi.h"

namespace feder
{
class DataFeedTCPOptions;
class DataFeedSpiImpl;

class DataFeedTCPServiceImpl : public DataFeedTCPService
{
 public:
		
  DataFeedTCPServiceImpl(soil::Options* options, DataFeedTCPServiceCallback* callback);
		
  virtual ~DataFeedTCPServiceImpl();

  virtual std::string getVersion(int& major, int& minor);

  virtual std::string getTradingDay();

  virtual void subMarketData(const InstrumentSet& instruments);

  virtual void unsubMarketData(const InstrumentSet& instruments);

  void login();

  void wait(const std::string& hint="");
  
  void notify();

  void pushData(DepthMarketData* data);

  inline
  void msgCallback(const DepthMarketData* msg)
  {
    if( callback_ )
      callback_->onRtnMarketData( msg );
  }
  
 protected:
  
 private:
  DataFeedTCPOptions* options_;
  
  CUstpFtdcMduserApi* md_api_;
  
  std::unique_ptr<DataFeedSpiImpl> md_spi_;

  DataFeedTCPServiceCallback* callback_;
  
  std::atomic_int request_id_;

  std::unique_ptr<soil::STimer> cond_;

  std::unique_ptr<soil::MsgQueue<DepthMarketData, DataFeedTCPServiceImpl> > md_queue_;
};


}; // namesapce feder

#endif 
