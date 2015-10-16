#ifndef FEDER_DATAFEED_MULTI_SERVICE_HH
#define FEDER_DATAFEED_MULTI_SERVICE_HH

#include <set>
#include <string>

#include "soil/Config.hh"

namespace feder
{

class DataFeedMultiServiceCallback
{
 public:

  virtual void onRtnMarketData() = 0;

  virtual void onRspError(int errord_id, const std::string& error_msg)= 0;
  
  virtual ~DataFeedMultiServiceCallback() {}
};

class DataFeedMultiService
{
 public:

  virtual void registerCallback(DataFeedMultiServiceCallback* callback) = 0;
  
  virtual ~DataFeedMultiService() {}
  
  static soil::Options* createOptions();
  
  static DataFeedMultiService* createService(soil::Options* cfg);

};  

}; 

#endif 
