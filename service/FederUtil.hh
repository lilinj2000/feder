#ifndef FEDER_UTIL_HH
#define FEDER_UTIL_HH

#include "feder/FederDef.hh"
#include "USTPFtdcUserApiStruct.h"

namespace feder
{

class FederUtil
{
 public:
  FederUtil();

  ~FederUtil();

  DepthMarketData* toDepthMarketData(CUstpFtdcDepthMarketDataField *pData);
  
};

};

#endif
