#ifndef FEDER_DATAFEED_TCP_SERVICE_HH
#define FEDER_DATAFEED_TCP_SERVICE_HH

#include <set>
#include <string>

#include "soil/Config.hh"
#include "feder/FederDef.hh"

namespace feder
{

class DataFeedTCPServiceCallback
{
 public:

  virtual void onRspSubMarketData(const std::string& instru, bool success) = 0;

  virtual void onRspUnsubMarketData(const std::string& instru, bool success) = 0;

  virtual void onRtnMarketData(const DepthMarketData*) = 0;

  virtual void onRspError(int errord_id, const std::string& error_msg)= 0;
  
  virtual ~DataFeedTCPServiceCallback() {}
};

typedef std::set<std::string> InstrumentSet;

class DataFeedTCPService
{
 public:

  virtual std::string getVersion(int& major, int& minor) = 0;

  virtual std::string getTradingDay() = 0;
  
  virtual void subMarketData(const InstrumentSet& instruments) = 0;

  virtual void unsubMarketData(const InstrumentSet& instruments) = 0;
  
  virtual ~DataFeedTCPService() {}

  static soil::Options* createOptions();

  static DataFeedTCPService* createService(soil::Options* options, DataFeedTCPServiceCallback* callback);

};  

}; 

#endif 
