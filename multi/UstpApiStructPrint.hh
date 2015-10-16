#ifndef USTP_API_STRUCT_PRINT_HH
#define USTP_API_STRUCT_PRINT_HH

#include <ostream>
#include "UstpApiStruct.h"

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpRspInfo const& aRspInfo)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpRspInfo\": {" <<std::endl;
    os <<"        \"ErrorID\": \"" <<aRspInfo.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aRspInfo.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcReqUserLoginField const& aFtdcReqUserLoginField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcReqUserLoginField\": {" <<std::endl;
    os <<"        \"UserID\": \"" <<aFtdcReqUserLoginField.UserID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aFtdcReqUserLoginField.Password  <<"\"," <<std::endl;
    os <<"        \"TopicID\": \"" <<aFtdcReqUserLoginField.TopicID  <<"\"," <<std::endl;
    os <<"        \"IP\": \"" <<aFtdcReqUserLoginField.IP  <<"\"," <<std::endl;
    os <<"        \"Mac\": \"" <<aFtdcReqUserLoginField.Mac  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcDepthMarketDataField const& aFtdcDepthMarketDataField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcDepthMarketDataField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aFtdcDepthMarketDataField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementGroupID\": \"" <<aFtdcDepthMarketDataField.SettlementGroupID  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aFtdcDepthMarketDataField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"PreSettlementPrice\": \"" <<aFtdcDepthMarketDataField.PreSettlementPrice  <<"\"," <<std::endl;
    os <<"        \"PreClosePrice\": \"" <<aFtdcDepthMarketDataField.PreClosePrice  <<"\"," <<std::endl;
    os <<"        \"PreOpenInterest\": \"" <<aFtdcDepthMarketDataField.PreOpenInterest  <<"\"," <<std::endl;
    os <<"        \"PreDelta\": \"" <<aFtdcDepthMarketDataField.PreDelta  <<"\"," <<std::endl;
    os <<"        \"OpenPrice\": \"" <<aFtdcDepthMarketDataField.OpenPrice  <<"\"," <<std::endl;
    os <<"        \"HighestPrice\": \"" <<aFtdcDepthMarketDataField.HighestPrice  <<"\"," <<std::endl;
    os <<"        \"LowestPrice\": \"" <<aFtdcDepthMarketDataField.LowestPrice  <<"\"," <<std::endl;
    os <<"        \"ClosePrice\": \"" <<aFtdcDepthMarketDataField.ClosePrice  <<"\"," <<std::endl;
    os <<"        \"UpperLimitPrice\": \"" <<aFtdcDepthMarketDataField.UpperLimitPrice  <<"\"," <<std::endl;
    os <<"        \"LowerLimitPrice\": \"" <<aFtdcDepthMarketDataField.LowerLimitPrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aFtdcDepthMarketDataField.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"CurrDelta\": \"" <<aFtdcDepthMarketDataField.CurrDelta  <<"\"," <<std::endl;
    os <<"        \"LastPrice\": \"" <<aFtdcDepthMarketDataField.LastPrice  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aFtdcDepthMarketDataField.Volume  <<"\"," <<std::endl;
    os <<"        \"Turnover\": \"" <<aFtdcDepthMarketDataField.Turnover  <<"\"," <<std::endl;
    os <<"        \"OpenInterest\": \"" <<aFtdcDepthMarketDataField.OpenInterest  <<"\"," <<std::endl;
    os <<"        \"BidPrice1\": \"" <<aFtdcDepthMarketDataField.BidPrice1  <<"\"," <<std::endl;
    os <<"        \"BidVolume1\": \"" <<aFtdcDepthMarketDataField.BidVolume1  <<"\"," <<std::endl;
    os <<"        \"AskPrice1\": \"" <<aFtdcDepthMarketDataField.AskPrice1  <<"\"," <<std::endl;
    os <<"        \"AskVolume1\": \"" <<aFtdcDepthMarketDataField.AskVolume1  <<"\"," <<std::endl;
    os <<"        \"BidPrice2\": \"" <<aFtdcDepthMarketDataField.BidPrice2  <<"\"," <<std::endl;
    os <<"        \"BidVolume2\": \"" <<aFtdcDepthMarketDataField.BidVolume2  <<"\"," <<std::endl;
    os <<"        \"BidPrice3\": \"" <<aFtdcDepthMarketDataField.BidPrice3  <<"\"," <<std::endl;
    os <<"        \"BidVolume3\": \"" <<aFtdcDepthMarketDataField.BidVolume3  <<"\"," <<std::endl;
    os <<"        \"AskPrice2\": \"" <<aFtdcDepthMarketDataField.AskPrice2  <<"\"," <<std::endl;
    os <<"        \"AskVolume2\": \"" <<aFtdcDepthMarketDataField.AskVolume2  <<"\"," <<std::endl;
    os <<"        \"AskPrice3\": \"" <<aFtdcDepthMarketDataField.AskPrice3  <<"\"," <<std::endl;
    os <<"        \"AskVolume3\": \"" <<aFtdcDepthMarketDataField.AskVolume3  <<"\"," <<std::endl;
    os <<"        \"BidPrice4\": \"" <<aFtdcDepthMarketDataField.BidPrice4  <<"\"," <<std::endl;
    os <<"        \"BidVolume4\": \"" <<aFtdcDepthMarketDataField.BidVolume4  <<"\"," <<std::endl;
    os <<"        \"BidPrice5\": \"" <<aFtdcDepthMarketDataField.BidPrice5  <<"\"," <<std::endl;
    os <<"        \"BidVolume5\": \"" <<aFtdcDepthMarketDataField.BidVolume5  <<"\"," <<std::endl;
    os <<"        \"AskPrice4\": \"" <<aFtdcDepthMarketDataField.AskPrice4  <<"\"," <<std::endl;
    os <<"        \"AskVolume4\": \"" <<aFtdcDepthMarketDataField.AskVolume4  <<"\"," <<std::endl;
    os <<"        \"AskPrice5\": \"" <<aFtdcDepthMarketDataField.AskPrice5  <<"\"," <<std::endl;
    os <<"        \"AskVolume5\": \"" <<aFtdcDepthMarketDataField.AskVolume5  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aFtdcDepthMarketDataField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aFtdcDepthMarketDataField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"UpdateMillisec\": \"" <<aFtdcDepthMarketDataField.UpdateMillisec  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

#endif
