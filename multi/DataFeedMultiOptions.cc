#include "DataFeedMultiOptions.hh"

#include <fstream>
#include <iostream>
#include <boost/program_options.hpp>

namespace feder
{

DataFeedMultiOptions::DataFeedMultiOptions():
    options_("DataFeedMultiOptions")
{
  namespace po = boost::program_options;

  options_.add_options()
      ("datafeed_multi.front_address", po::value<std::string>(&front_address), 
       "front address")
      ("datafeed_multi.user_id", po::value<std::string>(&user_id), 
       "user id")
      ("datafeed_multi.password", po::value<std::string>(&password), 
       "password")
      ("datafeed_multi.topic_id", po::value<int>(&topic_id), 
       "topic id")
      ("datafeed_multi.host_ip", po::value<std::string>(&host_ip), 
       "host ip")
      ("datafeed_multi.host_mac", po::value<std::string>(&host_mac), 
       "host mac")
      ("datafeed_multi.timeout", po::value<int>(&timeout), 
       "timeout")

      ;

  return;
  
}

DataFeedMultiOptions::~DataFeedMultiOptions()
{
}

po::options_description* DataFeedMultiOptions::configOptions()
{
  return &options_;
}


}; 
