#ifndef FEDER_DATAFEED_MULTI_SERVICEIMPL_HH
#define FEDER_DATAFEED_MULTI_SERVICEIMPL_HH

#include "feder/DataFeedMultiService.hh"

namespace feder
{

class DataFeedMultiOptions;

class DataFeedMultiServiceImpl : public DataFeedMultiService
{
 public:

  DataFeedMultiServiceImpl(soil::Options* options);

  virtual ~DataFeedMultiServiceImpl();
  
  virtual void registerCallback(DataFeedMultiServiceCallback* callback);
  
  static soil::Options* createOptions();
  
  static DataFeedMultiService* createService(soil::Options* options);

 protected:
  void login();

  
 private:
  DataFeedMultiOptions* options_;

  void* handle_;

};  

}; 

#endif 
