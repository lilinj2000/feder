#ifndef FEDER_DATAFEED_MULTI_OPTIONS_HH
#define FEDER_DATAFEED_MULTI_OPTIONS_HH

#include "soil/Config.hh"

#include <string>

namespace feder
{
namespace po = boost::program_options;

class DataFeedMultiOptions : public soil::Options
{
 public:

  DataFeedMultiOptions();
  
  virtual ~DataFeedMultiOptions();

  virtual po::options_description* cmdOptions();

  virtual po::options_description* configOptions();

  std::string front_address;
  std::string user_id;
  std::string password;
  int topic_id;
  std::string host_ip;
  std::string host_mac;

  int timeout;

  
 private:

  boost::program_options::options_description options_;
};

}


#endif 
