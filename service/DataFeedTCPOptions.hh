#ifndef FEDER_DATAFEED_TCP_OPTIONS_HH
#define FEDER_DATAFEED_TCP_OPTIONS_HH

#include "soil/Config.hh"

#include <string>

namespace feder
{
namespace po = boost::program_options;

class DataFeedTCPOptions : public soil::Options
{
 public:

  DataFeedTCPOptions();
  
  virtual ~DataFeedTCPOptions();

  virtual po::options_description* configOptions();

  std::string flow_path;
  std::string front_address;
  
  std::string broker_id;
  std::string user_id;
  std::string password;

   private:

  boost::program_options::options_description options_;
};

}  // namespace feder


#endif 
