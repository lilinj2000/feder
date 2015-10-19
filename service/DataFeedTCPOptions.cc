#include "DataFeedTCPOptions.hh"

#include <fstream>
#include <iostream>
#include <boost/program_options.hpp>

namespace feder
{

DataFeedTCPOptions::DataFeedTCPOptions():
    options_("DataFeedTCPOptions")
{
  namespace po = boost::program_options;

  options_.add_options()
      ("feder_tcp.flow_path", po::value<std::string>(&flow_path), 
       "flow path")
      ("feder_tcp.front_address", po::value<std::string>(&front_address), 
       "front address")
      ("feder_tcp.broker_id", po::value<std::string>(&broker_id), 
       "broker id")
      ("feder_tcp.user_id", po::value<std::string>(&user_id), 
       "user id")
      ("feder_tcp.password", po::value<std::string>(&password), 
       "password")
      ;

  return;
  
}

DataFeedTCPOptions::~DataFeedTCPOptions()
{
}

po::options_description* DataFeedTCPOptions::configOptions()
{
  return &options_;
}

};  // namespace feder
