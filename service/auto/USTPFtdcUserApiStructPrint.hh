#ifndef USTP_FTDC_USERAPI_STRUCT_PRINT_HH
#define USTP_FTDC_USERAPI_STRUCT_PRINT_HH

#include <ostream>
#include "USTPFtdcUserApiStruct.h"

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcReqUserLoginField const& aReqUserLoginField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcReqUserLoginField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aReqUserLoginField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aReqUserLoginField.UserID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqUserLoginField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aReqUserLoginField.Password  <<"\"," <<std::endl;
    os <<"        \"UserProductInfo\": \"" <<aReqUserLoginField.UserProductInfo  <<"\"," <<std::endl;
    os <<"        \"InterfaceProductInfo\": \"" <<aReqUserLoginField.InterfaceProductInfo  <<"\"," <<std::endl;
    os <<"        \"ProtocolInfo\": \"" <<aReqUserLoginField.ProtocolInfo  <<"\"," <<std::endl;
    os <<"        \"IPAddress\": \"" <<aReqUserLoginField.IPAddress  <<"\"," <<std::endl;
    os <<"        \"MacAddress\": \"" <<aReqUserLoginField.MacAddress  <<"\"," <<std::endl;
    os <<"        \"DataCenterID\": \"" <<aReqUserLoginField.DataCenterID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcRspUserLoginField const& aRspUserLoginField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcRspUserLoginField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aRspUserLoginField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspUserLoginField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aRspUserLoginField.UserID  <<"\"," <<std::endl;
    os <<"        \"LoginTime\": \"" <<aRspUserLoginField.LoginTime  <<"\"," <<std::endl;
    os <<"        \"MaxOrderLocalID\": \"" <<aRspUserLoginField.MaxOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"TradingSystemName\": \"" <<aRspUserLoginField.TradingSystemName  <<"\"," <<std::endl;
    os <<"        \"DataCenterID\": \"" <<aRspUserLoginField.DataCenterID  <<"\"," <<std::endl;
    os <<"        \"PrivateFlowSize\": \"" <<aRspUserLoginField.PrivateFlowSize  <<"\"," <<std::endl;
    os <<"        \"UserFlowSize\": \"" <<aRspUserLoginField.UserFlowSize  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcReqUserLogoutField const& aReqUserLogoutField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcReqUserLogoutField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqUserLogoutField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aReqUserLogoutField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcRspUserLogoutField const& aRspUserLogoutField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcRspUserLogoutField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspUserLogoutField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aRspUserLogoutField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcForceUserExitField const& aForceUserExitField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcForceUserExitField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aForceUserExitField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aForceUserExitField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcUserPasswordUpdateField const& aUserPasswordUpdateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcUserPasswordUpdateField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aUserPasswordUpdateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aUserPasswordUpdateField.UserID  <<"\"," <<std::endl;
    os <<"        \"OldPassword\": \"" <<aUserPasswordUpdateField.OldPassword  <<"\"," <<std::endl;
    os <<"        \"NewPassword\": \"" <<aUserPasswordUpdateField.NewPassword  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcInputOrderField const& aInputOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcInputOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInputOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInputOrderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aInputOrderField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInputOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aInputOrderField.UserID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInputOrderField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"UserOrderLocalID\": \"" <<aInputOrderField.UserOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"OrderPriceType\": \"" <<aInputOrderField.OrderPriceType  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aInputOrderField.Direction  <<"\"," <<std::endl;
    os <<"        \"OffsetFlag\": \"" <<aInputOrderField.OffsetFlag  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aInputOrderField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"LimitPrice\": \"" <<aInputOrderField.LimitPrice  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aInputOrderField.Volume  <<"\"," <<std::endl;
    os <<"        \"TimeCondition\": \"" <<aInputOrderField.TimeCondition  <<"\"," <<std::endl;
    os <<"        \"GTDDate\": \"" <<aInputOrderField.GTDDate  <<"\"," <<std::endl;
    os <<"        \"VolumeCondition\": \"" <<aInputOrderField.VolumeCondition  <<"\"," <<std::endl;
    os <<"        \"MinVolume\": \"" <<aInputOrderField.MinVolume  <<"\"," <<std::endl;
    os <<"        \"StopPrice\": \"" <<aInputOrderField.StopPrice  <<"\"," <<std::endl;
    os <<"        \"ForceCloseReason\": \"" <<aInputOrderField.ForceCloseReason  <<"\"," <<std::endl;
    os <<"        \"IsAutoSuspend\": \"" <<aInputOrderField.IsAutoSuspend  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aInputOrderField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"UserCustom\": \"" <<aInputOrderField.UserCustom  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcOrderActionField const& aOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcOrderActionField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aOrderActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aOrderActionField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aOrderActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aOrderActionField.UserID  <<"\"," <<std::endl;
    os <<"        \"UserOrderActionLocalID\": \"" <<aOrderActionField.UserOrderActionLocalID  <<"\"," <<std::endl;
    os <<"        \"UserOrderLocalID\": \"" <<aOrderActionField.UserOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ActionFlag\": \"" <<aOrderActionField.ActionFlag  <<"\"," <<std::endl;
    os <<"        \"LimitPrice\": \"" <<aOrderActionField.LimitPrice  <<"\"," <<std::endl;
    os <<"        \"VolumeChange\": \"" <<aOrderActionField.VolumeChange  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcMemDbField const& aMemDbField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcMemDbField\": {" <<std::endl;
    os <<"        \"MemTableName\": \"" <<aMemDbField.MemTableName  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcRspInfoField const& aRspInfoField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcRspInfoField\": {" <<std::endl;
    os <<"        \"ErrorID\": \"" <<aRspInfoField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aRspInfoField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcQryOrderField const& aQryOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcQryOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQryOrderField.UserID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryOrderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aQryOrderField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryOrderField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcQryTradeField const& aQryTradeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcQryTradeField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryTradeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQryTradeField.UserID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryTradeField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryTradeField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"TradeID\": \"" <<aQryTradeField.TradeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryTradeField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcQryInstrumentField const& aQryInstrumentField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcQryInstrumentField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryInstrumentField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ProductID\": \"" <<aQryInstrumentField.ProductID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryInstrumentField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcRspInstrumentField const& aRspInstrumentField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcRspInstrumentField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aRspInstrumentField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ProductID\": \"" <<aRspInstrumentField.ProductID  <<"\"," <<std::endl;
    os <<"        \"ProductName\": \"" <<aRspInstrumentField.ProductName  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aRspInstrumentField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"InstrumentName\": \"" <<aRspInstrumentField.InstrumentName  <<"\"," <<std::endl;
    os <<"        \"DeliveryYear\": \"" <<aRspInstrumentField.DeliveryYear  <<"\"," <<std::endl;
    os <<"        \"DeliveryMonth\": \"" <<aRspInstrumentField.DeliveryMonth  <<"\"," <<std::endl;
    os <<"        \"MaxLimitOrderVolume\": \"" <<aRspInstrumentField.MaxLimitOrderVolume  <<"\"," <<std::endl;
    os <<"        \"MinLimitOrderVolume\": \"" <<aRspInstrumentField.MinLimitOrderVolume  <<"\"," <<std::endl;
    os <<"        \"MaxMarketOrderVolume\": \"" <<aRspInstrumentField.MaxMarketOrderVolume  <<"\"," <<std::endl;
    os <<"        \"MinMarketOrderVolume\": \"" <<aRspInstrumentField.MinMarketOrderVolume  <<"\"," <<std::endl;
    os <<"        \"VolumeMultiple\": \"" <<aRspInstrumentField.VolumeMultiple  <<"\"," <<std::endl;
    os <<"        \"PriceTick\": \"" <<aRspInstrumentField.PriceTick  <<"\"," <<std::endl;
    os <<"        \"Currency\": \"" <<aRspInstrumentField.Currency  <<"\"," <<std::endl;
    os <<"        \"LongPosLimit\": \"" <<aRspInstrumentField.LongPosLimit  <<"\"," <<std::endl;
    os <<"        \"ShortPosLimit\": \"" <<aRspInstrumentField.ShortPosLimit  <<"\"," <<std::endl;
    os <<"        \"LowerLimitPrice\": \"" <<aRspInstrumentField.LowerLimitPrice  <<"\"," <<std::endl;
    os <<"        \"UpperLimitPrice\": \"" <<aRspInstrumentField.UpperLimitPrice  <<"\"," <<std::endl;
    os <<"        \"PreSettlementPrice\": \"" <<aRspInstrumentField.PreSettlementPrice  <<"\"," <<std::endl;
    os <<"        \"InstrumentStatus\": \"" <<aRspInstrumentField.InstrumentStatus  <<"\"," <<std::endl;
    os <<"        \"CreateDate\": \"" <<aRspInstrumentField.CreateDate  <<"\"," <<std::endl;
    os <<"        \"OpenDate\": \"" <<aRspInstrumentField.OpenDate  <<"\"," <<std::endl;
    os <<"        \"ExpireDate\": \"" <<aRspInstrumentField.ExpireDate  <<"\"," <<std::endl;
    os <<"        \"StartDelivDate\": \"" <<aRspInstrumentField.StartDelivDate  <<"\"," <<std::endl;
    os <<"        \"EndDelivDate\": \"" <<aRspInstrumentField.EndDelivDate  <<"\"," <<std::endl;
    os <<"        \"BasisPrice\": \"" <<aRspInstrumentField.BasisPrice  <<"\"," <<std::endl;
    os <<"        \"IsTrading\": \"" <<aRspInstrumentField.IsTrading  <<"\"," <<std::endl;
    os <<"        \"UnderlyingInstrID\": \"" <<aRspInstrumentField.UnderlyingInstrID  <<"\"," <<std::endl;
    os <<"        \"UnderlyingMultiple\": \"" <<aRspInstrumentField.UnderlyingMultiple  <<"\"," <<std::endl;
    os <<"        \"PositionType\": \"" <<aRspInstrumentField.PositionType  <<"\"," <<std::endl;
    os <<"        \"StrikePrice\": \"" <<aRspInstrumentField.StrikePrice  <<"\"," <<std::endl;
    os <<"        \"OptionsType\": \"" <<aRspInstrumentField.OptionsType  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcInstrumentStatusField const& aInstrumentStatusField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcInstrumentStatusField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInstrumentStatusField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ProductID\": \"" <<aInstrumentStatusField.ProductID  <<"\"," <<std::endl;
    os <<"        \"ProductName\": \"" <<aInstrumentStatusField.ProductName  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInstrumentStatusField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"InstrumentName\": \"" <<aInstrumentStatusField.InstrumentName  <<"\"," <<std::endl;
    os <<"        \"DeliveryYear\": \"" <<aInstrumentStatusField.DeliveryYear  <<"\"," <<std::endl;
    os <<"        \"DeliveryMonth\": \"" <<aInstrumentStatusField.DeliveryMonth  <<"\"," <<std::endl;
    os <<"        \"MaxLimitOrderVolume\": \"" <<aInstrumentStatusField.MaxLimitOrderVolume  <<"\"," <<std::endl;
    os <<"        \"MinLimitOrderVolume\": \"" <<aInstrumentStatusField.MinLimitOrderVolume  <<"\"," <<std::endl;
    os <<"        \"MaxMarketOrderVolume\": \"" <<aInstrumentStatusField.MaxMarketOrderVolume  <<"\"," <<std::endl;
    os <<"        \"MinMarketOrderVolume\": \"" <<aInstrumentStatusField.MinMarketOrderVolume  <<"\"," <<std::endl;
    os <<"        \"VolumeMultiple\": \"" <<aInstrumentStatusField.VolumeMultiple  <<"\"," <<std::endl;
    os <<"        \"PriceTick\": \"" <<aInstrumentStatusField.PriceTick  <<"\"," <<std::endl;
    os <<"        \"Currency\": \"" <<aInstrumentStatusField.Currency  <<"\"," <<std::endl;
    os <<"        \"LongPosLimit\": \"" <<aInstrumentStatusField.LongPosLimit  <<"\"," <<std::endl;
    os <<"        \"ShortPosLimit\": \"" <<aInstrumentStatusField.ShortPosLimit  <<"\"," <<std::endl;
    os <<"        \"LowerLimitPrice\": \"" <<aInstrumentStatusField.LowerLimitPrice  <<"\"," <<std::endl;
    os <<"        \"UpperLimitPrice\": \"" <<aInstrumentStatusField.UpperLimitPrice  <<"\"," <<std::endl;
    os <<"        \"PreSettlementPrice\": \"" <<aInstrumentStatusField.PreSettlementPrice  <<"\"," <<std::endl;
    os <<"        \"InstrumentStatus\": \"" <<aInstrumentStatusField.InstrumentStatus  <<"\"," <<std::endl;
    os <<"        \"CreateDate\": \"" <<aInstrumentStatusField.CreateDate  <<"\"," <<std::endl;
    os <<"        \"OpenDate\": \"" <<aInstrumentStatusField.OpenDate  <<"\"," <<std::endl;
    os <<"        \"ExpireDate\": \"" <<aInstrumentStatusField.ExpireDate  <<"\"," <<std::endl;
    os <<"        \"StartDelivDate\": \"" <<aInstrumentStatusField.StartDelivDate  <<"\"," <<std::endl;
    os <<"        \"EndDelivDate\": \"" <<aInstrumentStatusField.EndDelivDate  <<"\"," <<std::endl;
    os <<"        \"BasisPrice\": \"" <<aInstrumentStatusField.BasisPrice  <<"\"," <<std::endl;
    os <<"        \"IsTrading\": \"" <<aInstrumentStatusField.IsTrading  <<"\"," <<std::endl;
    os <<"        \"UnderlyingInstrID\": \"" <<aInstrumentStatusField.UnderlyingInstrID  <<"\"," <<std::endl;
    os <<"        \"UnderlyingMultiple\": \"" <<aInstrumentStatusField.UnderlyingMultiple  <<"\"," <<std::endl;
    os <<"        \"PositionType\": \"" <<aInstrumentStatusField.PositionType  <<"\"," <<std::endl;
    os <<"        \"StrikePrice\": \"" <<aInstrumentStatusField.StrikePrice  <<"\"," <<std::endl;
    os <<"        \"OptionsType\": \"" <<aInstrumentStatusField.OptionsType  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcQryInvestorAccountField const& aQryInvestorAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcQryInvestorAccountField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryInvestorAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQryInvestorAccountField.UserID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryInvestorAccountField.InvestorID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcRspInvestorAccountField const& aRspInvestorAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcRspInvestorAccountField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspInvestorAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aRspInvestorAccountField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aRspInvestorAccountField.AccountID  <<"\"," <<std::endl;
    os <<"        \"PreBalance\": \"" <<aRspInvestorAccountField.PreBalance  <<"\"," <<std::endl;
    os <<"        \"Deposit\": \"" <<aRspInvestorAccountField.Deposit  <<"\"," <<std::endl;
    os <<"        \"Withdraw\": \"" <<aRspInvestorAccountField.Withdraw  <<"\"," <<std::endl;
    os <<"        \"FrozenMargin\": \"" <<aRspInvestorAccountField.FrozenMargin  <<"\"," <<std::endl;
    os <<"        \"FrozenFee\": \"" <<aRspInvestorAccountField.FrozenFee  <<"\"," <<std::endl;
    os <<"        \"FrozenPremium\": \"" <<aRspInvestorAccountField.FrozenPremium  <<"\"," <<std::endl;
    os <<"        \"Fee\": \"" <<aRspInvestorAccountField.Fee  <<"\"," <<std::endl;
    os <<"        \"CloseProfit\": \"" <<aRspInvestorAccountField.CloseProfit  <<"\"," <<std::endl;
    os <<"        \"PositionProfit\": \"" <<aRspInvestorAccountField.PositionProfit  <<"\"," <<std::endl;
    os <<"        \"Available\": \"" <<aRspInvestorAccountField.Available  <<"\"," <<std::endl;
    os <<"        \"LongFrozenMargin\": \"" <<aRspInvestorAccountField.LongFrozenMargin  <<"\"," <<std::endl;
    os <<"        \"ShortFrozenMargin\": \"" <<aRspInvestorAccountField.ShortFrozenMargin  <<"\"," <<std::endl;
    os <<"        \"LongMargin\": \"" <<aRspInvestorAccountField.LongMargin  <<"\"," <<std::endl;
    os <<"        \"ShortMargin\": \"" <<aRspInvestorAccountField.ShortMargin  <<"\"," <<std::endl;
    os <<"        \"ReleaseMargin\": \"" <<aRspInvestorAccountField.ReleaseMargin  <<"\"," <<std::endl;
    os <<"        \"DynamicRights\": \"" <<aRspInvestorAccountField.DynamicRights  <<"\"," <<std::endl;
    os <<"        \"TodayInOut\": \"" <<aRspInvestorAccountField.TodayInOut  <<"\"," <<std::endl;
    os <<"        \"Margin\": \"" <<aRspInvestorAccountField.Margin  <<"\"," <<std::endl;
    os <<"        \"Premium\": \"" <<aRspInvestorAccountField.Premium  <<"\"," <<std::endl;
    os <<"        \"Risk\": \"" <<aRspInvestorAccountField.Risk  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcQryUserInvestorField const& aQryUserInvestorField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcQryUserInvestorField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryUserInvestorField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQryUserInvestorField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcRspUserInvestorField const& aRspUserInvestorField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcRspUserInvestorField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspUserInvestorField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aRspUserInvestorField.UserID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aRspUserInvestorField.InvestorID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcQryTradingCodeField const& aQryTradingCodeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcQryTradingCodeField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryTradingCodeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQryTradingCodeField.UserID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryTradingCodeField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryTradingCodeField.ExchangeID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcRspTradingCodeField const& aRspTradingCodeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcRspTradingCodeField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspTradingCodeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aRspTradingCodeField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aRspTradingCodeField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aRspTradingCodeField.ClientID  <<"\"," <<std::endl;
    os <<"        \"ClientRight\": \"" <<aRspTradingCodeField.ClientRight  <<"\"," <<std::endl;
    os <<"        \"IsActive\": \"" <<aRspTradingCodeField.IsActive  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcQryExchangeField const& aQryExchangeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcQryExchangeField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryExchangeField.ExchangeID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcRspExchangeField const& aRspExchangeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcRspExchangeField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aRspExchangeField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ExchangeName\": \"" <<aRspExchangeField.ExchangeName  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcQryInvestorPositionField const& aQryInvestorPositionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcQryInvestorPositionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryInvestorPositionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQryInvestorPositionField.UserID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryInvestorPositionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryInvestorPositionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryInvestorPositionField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcRspInvestorPositionField const& aRspInvestorPositionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcRspInvestorPositionField\": {" <<std::endl;
    os <<"        \"InvestorID\": \"" <<aRspInvestorPositionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspInvestorPositionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aRspInvestorPositionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aRspInvestorPositionField.ClientID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aRspInvestorPositionField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aRspInvestorPositionField.Direction  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aRspInvestorPositionField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"UsedMargin\": \"" <<aRspInvestorPositionField.UsedMargin  <<"\"," <<std::endl;
    os <<"        \"Position\": \"" <<aRspInvestorPositionField.Position  <<"\"," <<std::endl;
    os <<"        \"PositionCost\": \"" <<aRspInvestorPositionField.PositionCost  <<"\"," <<std::endl;
    os <<"        \"YdPosition\": \"" <<aRspInvestorPositionField.YdPosition  <<"\"," <<std::endl;
    os <<"        \"YdPositionCost\": \"" <<aRspInvestorPositionField.YdPositionCost  <<"\"," <<std::endl;
    os <<"        \"FrozenMargin\": \"" <<aRspInvestorPositionField.FrozenMargin  <<"\"," <<std::endl;
    os <<"        \"FrozenPosition\": \"" <<aRspInvestorPositionField.FrozenPosition  <<"\"," <<std::endl;
    os <<"        \"FrozenClosing\": \"" <<aRspInvestorPositionField.FrozenClosing  <<"\"," <<std::endl;
    os <<"        \"FrozenPremium\": \"" <<aRspInvestorPositionField.FrozenPremium  <<"\"," <<std::endl;
    os <<"        \"LastTradeID\": \"" <<aRspInvestorPositionField.LastTradeID  <<"\"," <<std::endl;
    os <<"        \"LastOrderLocalID\": \"" <<aRspInvestorPositionField.LastOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"Currency\": \"" <<aRspInvestorPositionField.Currency  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcQryComplianceParamField const& aQryComplianceParamField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcQryComplianceParamField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryComplianceParamField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQryComplianceParamField.UserID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryComplianceParamField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryComplianceParamField.ExchangeID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcRspComplianceParamField const& aRspComplianceParamField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcRspComplianceParamField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspComplianceParamField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aRspComplianceParamField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aRspComplianceParamField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aRspComplianceParamField.ClientID  <<"\"," <<std::endl;
    os <<"        \"DailyMaxOrder\": \"" <<aRspComplianceParamField.DailyMaxOrder  <<"\"," <<std::endl;
    os <<"        \"DailyMaxOrderAction\": \"" <<aRspComplianceParamField.DailyMaxOrderAction  <<"\"," <<std::endl;
    os <<"        \"DailyMaxErrorOrder\": \"" <<aRspComplianceParamField.DailyMaxErrorOrder  <<"\"," <<std::endl;
    os <<"        \"DailyMaxOrderVolume\": \"" <<aRspComplianceParamField.DailyMaxOrderVolume  <<"\"," <<std::endl;
    os <<"        \"DailyMaxOrderActionVolume\": \"" <<aRspComplianceParamField.DailyMaxOrderActionVolume  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcQryUserField const& aQryUserField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcQryUserField\": {" <<std::endl;
    os <<"        \"StartUserID\": \"" <<aQryUserField.StartUserID  <<"\"," <<std::endl;
    os <<"        \"EndUserID\": \"" <<aQryUserField.EndUserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcUserField const& aUserField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcUserField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aUserField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aUserField.UserID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aUserField.Password  <<"\"," <<std::endl;
    os <<"        \"IsActive\": \"" <<aUserField.IsActive  <<"\"," <<std::endl;
    os <<"        \"UserName\": \"" <<aUserField.UserName  <<"\"," <<std::endl;
    os <<"        \"UserType\": \"" <<aUserField.UserType  <<"\"," <<std::endl;
    os <<"        \"Department\": \"" <<aUserField.Department  <<"\"," <<std::endl;
    os <<"        \"GrantFuncSet\": \"" <<aUserField.GrantFuncSet  <<"\"," <<std::endl;
    os <<"        \"SetUserID\": \"" <<aUserField.SetUserID  <<"\"," <<std::endl;
    os <<"        \"CommandDate\": \"" <<aUserField.CommandDate  <<"\"," <<std::endl;
    os <<"        \"CommandTime\": \"" <<aUserField.CommandTime  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcQryInvestorFeeField const& aQryInvestorFeeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcQryInvestorFeeField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryInvestorFeeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQryInvestorFeeField.UserID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryInvestorFeeField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryInvestorFeeField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryInvestorFeeField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcInvestorFeeField const& aInvestorFeeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcInvestorFeeField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInvestorFeeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aInvestorFeeField.ClientID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInvestorFeeField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInvestorFeeField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ProductID\": \"" <<aInvestorFeeField.ProductID  <<"\"," <<std::endl;
    os <<"        \"OpenFeeRate\": \"" <<aInvestorFeeField.OpenFeeRate  <<"\"," <<std::endl;
    os <<"        \"OpenFeeAmt\": \"" <<aInvestorFeeField.OpenFeeAmt  <<"\"," <<std::endl;
    os <<"        \"OffsetFeeRate\": \"" <<aInvestorFeeField.OffsetFeeRate  <<"\"," <<std::endl;
    os <<"        \"OffsetFeeAmt\": \"" <<aInvestorFeeField.OffsetFeeAmt  <<"\"," <<std::endl;
    os <<"        \"OTFeeRate\": \"" <<aInvestorFeeField.OTFeeRate  <<"\"," <<std::endl;
    os <<"        \"OTFeeAmt\": \"" <<aInvestorFeeField.OTFeeAmt  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcQryInvestorMarginField const& aQryInvestorMarginField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcQryInvestorMarginField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryInvestorMarginField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQryInvestorMarginField.UserID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryInvestorMarginField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryInvestorMarginField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryInvestorMarginField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcInvestorMarginField const& aInvestorMarginField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcInvestorMarginField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInvestorMarginField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aInvestorMarginField.ClientID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInvestorMarginField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInvestorMarginField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ProductID\": \"" <<aInvestorMarginField.ProductID  <<"\"," <<std::endl;
    os <<"        \"LongMarginRate\": \"" <<aInvestorMarginField.LongMarginRate  <<"\"," <<std::endl;
    os <<"        \"LongMarginAmt\": \"" <<aInvestorMarginField.LongMarginAmt  <<"\"," <<std::endl;
    os <<"        \"ShortMarginRate\": \"" <<aInvestorMarginField.ShortMarginRate  <<"\"," <<std::endl;
    os <<"        \"ShortMarginAmt\": \"" <<aInvestorMarginField.ShortMarginAmt  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcMDUserField const& aMDUserField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcMDUserField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aMDUserField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aMDUserField.UserID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aMDUserField.Password  <<"\"," <<std::endl;
    os <<"        \"IsActive\": \"" <<aMDUserField.IsActive  <<"\"," <<std::endl;
    os <<"        \"UserName\": \"" <<aMDUserField.UserName  <<"\"," <<std::endl;
    os <<"        \"UserType\": \"" <<aMDUserField.UserType  <<"\"," <<std::endl;
    os <<"        \"AllowedIP\": \"" <<aMDUserField.AllowedIP  <<"\"," <<std::endl;
    os <<"        \"AllowedMac\": \"" <<aMDUserField.AllowedMac  <<"\"," <<std::endl;
    os <<"        \"ValidityBegin\": \"" <<aMDUserField.ValidityBegin  <<"\"," <<std::endl;
    os <<"        \"ValidityEnd\": \"" <<aMDUserField.ValidityEnd  <<"\"," <<std::endl;
    os <<"        \"SetUserID\": \"" <<aMDUserField.SetUserID  <<"\"," <<std::endl;
    os <<"        \"CommandDate\": \"" <<aMDUserField.CommandDate  <<"\"," <<std::endl;
    os <<"        \"CommandTime\": \"" <<aMDUserField.CommandTime  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcTradeField const& aTradeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcTradeField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aTradeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aTradeField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aTradeField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aTradeField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"SeatID\": \"" <<aTradeField.SeatID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aTradeField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aTradeField.ClientID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aTradeField.UserID  <<"\"," <<std::endl;
    os <<"        \"TradeID\": \"" <<aTradeField.TradeID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aTradeField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"UserOrderLocalID\": \"" <<aTradeField.UserOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aTradeField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aTradeField.Direction  <<"\"," <<std::endl;
    os <<"        \"OffsetFlag\": \"" <<aTradeField.OffsetFlag  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aTradeField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"TradePrice\": \"" <<aTradeField.TradePrice  <<"\"," <<std::endl;
    os <<"        \"TradeVolume\": \"" <<aTradeField.TradeVolume  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aTradeField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"ClearingPartID\": \"" <<aTradeField.ClearingPartID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcOrderField const& aOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aOrderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aOrderField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aOrderField.UserID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aOrderField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"UserOrderLocalID\": \"" <<aOrderField.UserOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"OrderPriceType\": \"" <<aOrderField.OrderPriceType  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aOrderField.Direction  <<"\"," <<std::endl;
    os <<"        \"OffsetFlag\": \"" <<aOrderField.OffsetFlag  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aOrderField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"LimitPrice\": \"" <<aOrderField.LimitPrice  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aOrderField.Volume  <<"\"," <<std::endl;
    os <<"        \"TimeCondition\": \"" <<aOrderField.TimeCondition  <<"\"," <<std::endl;
    os <<"        \"GTDDate\": \"" <<aOrderField.GTDDate  <<"\"," <<std::endl;
    os <<"        \"VolumeCondition\": \"" <<aOrderField.VolumeCondition  <<"\"," <<std::endl;
    os <<"        \"MinVolume\": \"" <<aOrderField.MinVolume  <<"\"," <<std::endl;
    os <<"        \"StopPrice\": \"" <<aOrderField.StopPrice  <<"\"," <<std::endl;
    os <<"        \"ForceCloseReason\": \"" <<aOrderField.ForceCloseReason  <<"\"," <<std::endl;
    os <<"        \"IsAutoSuspend\": \"" <<aOrderField.IsAutoSuspend  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aOrderField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"UserCustom\": \"" <<aOrderField.UserCustom  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aOrderField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aOrderField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aOrderField.ClientID  <<"\"," <<std::endl;
    os <<"        \"SeatID\": \"" <<aOrderField.SeatID  <<"\"," <<std::endl;
    os <<"        \"InsertTime\": \"" <<aOrderField.InsertTime  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aOrderField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"OrderSource\": \"" <<aOrderField.OrderSource  <<"\"," <<std::endl;
    os <<"        \"OrderStatus\": \"" <<aOrderField.OrderStatus  <<"\"," <<std::endl;
    os <<"        \"CancelTime\": \"" <<aOrderField.CancelTime  <<"\"," <<std::endl;
    os <<"        \"CancelUserID\": \"" <<aOrderField.CancelUserID  <<"\"," <<std::endl;
    os <<"        \"VolumeTraded\": \"" <<aOrderField.VolumeTraded  <<"\"," <<std::endl;
    os <<"        \"VolumeRemain\": \"" <<aOrderField.VolumeRemain  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcFlowMessageCancelField const& aFlowMessageCancelField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcFlowMessageCancelField\": {" <<std::endl;
    os <<"        \"SequenceSeries\": \"" <<aFlowMessageCancelField.SequenceSeries  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aFlowMessageCancelField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"DataCenterID\": \"" <<aFlowMessageCancelField.DataCenterID  <<"\"," <<std::endl;
    os <<"        \"StartSequenceNo\": \"" <<aFlowMessageCancelField.StartSequenceNo  <<"\"," <<std::endl;
    os <<"        \"EndSequenceNo\": \"" <<aFlowMessageCancelField.EndSequenceNo  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcDisseminationField const& aDisseminationField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcDisseminationField\": {" <<std::endl;
    os <<"        \"SequenceSeries\": \"" <<aDisseminationField.SequenceSeries  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aDisseminationField.SequenceNo  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcInvestorAccountDepositResField const& aInvestorAccountDepositResField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcInvestorAccountDepositResField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInvestorAccountDepositResField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aInvestorAccountDepositResField.UserID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInvestorAccountDepositResField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aInvestorAccountDepositResField.AccountID  <<"\"," <<std::endl;
    os <<"        \"AccountSeqNo\": \"" <<aInvestorAccountDepositResField.AccountSeqNo  <<"\"," <<std::endl;
    os <<"        \"Amount\": \"" <<aInvestorAccountDepositResField.Amount  <<"\"," <<std::endl;
    os <<"        \"AmountDirection\": \"" <<aInvestorAccountDepositResField.AmountDirection  <<"\"," <<std::endl;
    os <<"        \"Available\": \"" <<aInvestorAccountDepositResField.Available  <<"\"," <<std::endl;
    os <<"        \"Balance\": \"" <<aInvestorAccountDepositResField.Balance  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcInputQuoteField const& aInputQuoteField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcInputQuoteField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInputQuoteField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInputQuoteField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInputQuoteField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aInputQuoteField.UserID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInputQuoteField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"QuoteSysID\": \"" <<aInputQuoteField.QuoteSysID  <<"\"," <<std::endl;
    os <<"        \"UserQuoteLocalID\": \"" <<aInputQuoteField.UserQuoteLocalID  <<"\"," <<std::endl;
    os <<"        \"QuoteLocalID\": \"" <<aInputQuoteField.QuoteLocalID  <<"\"," <<std::endl;
    os <<"        \"BidVolume\": \"" <<aInputQuoteField.BidVolume  <<"\"," <<std::endl;
    os <<"        \"BidOffsetFlag\": \"" <<aInputQuoteField.BidOffsetFlag  <<"\"," <<std::endl;
    os <<"        \"BidHedgeFlag\": \"" <<aInputQuoteField.BidHedgeFlag  <<"\"," <<std::endl;
    os <<"        \"BidPrice\": \"" <<aInputQuoteField.BidPrice  <<"\"," <<std::endl;
    os <<"        \"AskVolume\": \"" <<aInputQuoteField.AskVolume  <<"\"," <<std::endl;
    os <<"        \"AskOffsetFlag\": \"" <<aInputQuoteField.AskOffsetFlag  <<"\"," <<std::endl;
    os <<"        \"AskHedgeFlag\": \"" <<aInputQuoteField.AskHedgeFlag  <<"\"," <<std::endl;
    os <<"        \"AskPrice\": \"" <<aInputQuoteField.AskPrice  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aInputQuoteField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"UserCustom\": \"" <<aInputQuoteField.UserCustom  <<"\"," <<std::endl;
    os <<"        \"BidUserOrderLocalID\": \"" <<aInputQuoteField.BidUserOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"AskUserOrderLocalID\": \"" <<aInputQuoteField.AskUserOrderLocalID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcRtnQuoteField const& aRtnQuoteField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcRtnQuoteField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRtnQuoteField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aRtnQuoteField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aRtnQuoteField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aRtnQuoteField.UserID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aRtnQuoteField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"QuoteSysID\": \"" <<aRtnQuoteField.QuoteSysID  <<"\"," <<std::endl;
    os <<"        \"UserQuoteLocalID\": \"" <<aRtnQuoteField.UserQuoteLocalID  <<"\"," <<std::endl;
    os <<"        \"QuoteLocalID\": \"" <<aRtnQuoteField.QuoteLocalID  <<"\"," <<std::endl;
    os <<"        \"BidVolume\": \"" <<aRtnQuoteField.BidVolume  <<"\"," <<std::endl;
    os <<"        \"BidOffsetFlag\": \"" <<aRtnQuoteField.BidOffsetFlag  <<"\"," <<std::endl;
    os <<"        \"BidHedgeFlag\": \"" <<aRtnQuoteField.BidHedgeFlag  <<"\"," <<std::endl;
    os <<"        \"BidPrice\": \"" <<aRtnQuoteField.BidPrice  <<"\"," <<std::endl;
    os <<"        \"AskVolume\": \"" <<aRtnQuoteField.AskVolume  <<"\"," <<std::endl;
    os <<"        \"AskOffsetFlag\": \"" <<aRtnQuoteField.AskOffsetFlag  <<"\"," <<std::endl;
    os <<"        \"AskHedgeFlag\": \"" <<aRtnQuoteField.AskHedgeFlag  <<"\"," <<std::endl;
    os <<"        \"AskPrice\": \"" <<aRtnQuoteField.AskPrice  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aRtnQuoteField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"UserCustom\": \"" <<aRtnQuoteField.UserCustom  <<"\"," <<std::endl;
    os <<"        \"BidUserOrderLocalID\": \"" <<aRtnQuoteField.BidUserOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"AskUserOrderLocalID\": \"" <<aRtnQuoteField.AskUserOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"BidOrderSysID\": \"" <<aRtnQuoteField.BidOrderSysID  <<"\"," <<std::endl;
    os <<"        \"AskOrderSysID\": \"" <<aRtnQuoteField.AskOrderSysID  <<"\"," <<std::endl;
    os <<"        \"QuoteStatus\": \"" <<aRtnQuoteField.QuoteStatus  <<"\"," <<std::endl;
    os <<"        \"InsertTime\": \"" <<aRtnQuoteField.InsertTime  <<"\"," <<std::endl;
    os <<"        \"CancelTime\": \"" <<aRtnQuoteField.CancelTime  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aRtnQuoteField.TradeTime  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcQuoteActionField const& aQuoteActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcQuoteActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQuoteActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQuoteActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQuoteActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQuoteActionField.UserID  <<"\"," <<std::endl;
    os <<"        \"QuoteSysID\": \"" <<aQuoteActionField.QuoteSysID  <<"\"," <<std::endl;
    os <<"        \"UserQuoteLocalID\": \"" <<aQuoteActionField.UserQuoteLocalID  <<"\"," <<std::endl;
    os <<"        \"UserQuoteActionLocalID\": \"" <<aQuoteActionField.UserQuoteActionLocalID  <<"\"," <<std::endl;
    os <<"        \"ActionFlag\": \"" <<aQuoteActionField.ActionFlag  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aQuoteActionField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"UserCustom\": \"" <<aQuoteActionField.UserCustom  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcReqForQuoteField const& aReqForQuoteField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcReqForQuoteField\": {" <<std::endl;
    os <<"        \"ReqForQuoteID\": \"" <<aReqForQuoteField.ReqForQuoteID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqForQuoteField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aReqForQuoteField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aReqForQuoteField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aReqForQuoteField.UserID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aReqForQuoteField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aReqForQuoteField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"ReqForQuoteTime\": \"" <<aReqForQuoteField.ReqForQuoteTime  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcMarketDataBaseField const& aMarketDataBaseField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcMarketDataBaseField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aMarketDataBaseField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementGroupID\": \"" <<aMarketDataBaseField.SettlementGroupID  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aMarketDataBaseField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"PreSettlementPrice\": \"" <<aMarketDataBaseField.PreSettlementPrice  <<"\"," <<std::endl;
    os <<"        \"PreClosePrice\": \"" <<aMarketDataBaseField.PreClosePrice  <<"\"," <<std::endl;
    os <<"        \"PreOpenInterest\": \"" <<aMarketDataBaseField.PreOpenInterest  <<"\"," <<std::endl;
    os <<"        \"PreDelta\": \"" <<aMarketDataBaseField.PreDelta  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcMarketDataStaticField const& aMarketDataStaticField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcMarketDataStaticField\": {" <<std::endl;
    os <<"        \"OpenPrice\": \"" <<aMarketDataStaticField.OpenPrice  <<"\"," <<std::endl;
    os <<"        \"HighestPrice\": \"" <<aMarketDataStaticField.HighestPrice  <<"\"," <<std::endl;
    os <<"        \"LowestPrice\": \"" <<aMarketDataStaticField.LowestPrice  <<"\"," <<std::endl;
    os <<"        \"ClosePrice\": \"" <<aMarketDataStaticField.ClosePrice  <<"\"," <<std::endl;
    os <<"        \"UpperLimitPrice\": \"" <<aMarketDataStaticField.UpperLimitPrice  <<"\"," <<std::endl;
    os <<"        \"LowerLimitPrice\": \"" <<aMarketDataStaticField.LowerLimitPrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aMarketDataStaticField.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"CurrDelta\": \"" <<aMarketDataStaticField.CurrDelta  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcMarketDataLastMatchField const& aMarketDataLastMatchField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcMarketDataLastMatchField\": {" <<std::endl;
    os <<"        \"LastPrice\": \"" <<aMarketDataLastMatchField.LastPrice  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aMarketDataLastMatchField.Volume  <<"\"," <<std::endl;
    os <<"        \"Turnover\": \"" <<aMarketDataLastMatchField.Turnover  <<"\"," <<std::endl;
    os <<"        \"OpenInterest\": \"" <<aMarketDataLastMatchField.OpenInterest  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcMarketDataBestPriceField const& aMarketDataBestPriceField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcMarketDataBestPriceField\": {" <<std::endl;
    os <<"        \"BidPrice1\": \"" <<aMarketDataBestPriceField.BidPrice1  <<"\"," <<std::endl;
    os <<"        \"BidVolume1\": \"" <<aMarketDataBestPriceField.BidVolume1  <<"\"," <<std::endl;
    os <<"        \"AskPrice1\": \"" <<aMarketDataBestPriceField.AskPrice1  <<"\"," <<std::endl;
    os <<"        \"AskVolume1\": \"" <<aMarketDataBestPriceField.AskVolume1  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcMarketDataBid23Field const& aMarketDataBid23Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcMarketDataBid23Field\": {" <<std::endl;
    os <<"        \"BidPrice2\": \"" <<aMarketDataBid23Field.BidPrice2  <<"\"," <<std::endl;
    os <<"        \"BidVolume2\": \"" <<aMarketDataBid23Field.BidVolume2  <<"\"," <<std::endl;
    os <<"        \"BidPrice3\": \"" <<aMarketDataBid23Field.BidPrice3  <<"\"," <<std::endl;
    os <<"        \"BidVolume3\": \"" <<aMarketDataBid23Field.BidVolume3  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcMarketDataAsk23Field const& aMarketDataAsk23Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcMarketDataAsk23Field\": {" <<std::endl;
    os <<"        \"AskPrice2\": \"" <<aMarketDataAsk23Field.AskPrice2  <<"\"," <<std::endl;
    os <<"        \"AskVolume2\": \"" <<aMarketDataAsk23Field.AskVolume2  <<"\"," <<std::endl;
    os <<"        \"AskPrice3\": \"" <<aMarketDataAsk23Field.AskPrice3  <<"\"," <<std::endl;
    os <<"        \"AskVolume3\": \"" <<aMarketDataAsk23Field.AskVolume3  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcMarketDataBid45Field const& aMarketDataBid45Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcMarketDataBid45Field\": {" <<std::endl;
    os <<"        \"BidPrice4\": \"" <<aMarketDataBid45Field.BidPrice4  <<"\"," <<std::endl;
    os <<"        \"BidVolume4\": \"" <<aMarketDataBid45Field.BidVolume4  <<"\"," <<std::endl;
    os <<"        \"BidPrice5\": \"" <<aMarketDataBid45Field.BidPrice5  <<"\"," <<std::endl;
    os <<"        \"BidVolume5\": \"" <<aMarketDataBid45Field.BidVolume5  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcMarketDataAsk45Field const& aMarketDataAsk45Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcMarketDataAsk45Field\": {" <<std::endl;
    os <<"        \"AskPrice4\": \"" <<aMarketDataAsk45Field.AskPrice4  <<"\"," <<std::endl;
    os <<"        \"AskVolume4\": \"" <<aMarketDataAsk45Field.AskVolume4  <<"\"," <<std::endl;
    os <<"        \"AskPrice5\": \"" <<aMarketDataAsk45Field.AskPrice5  <<"\"," <<std::endl;
    os <<"        \"AskVolume5\": \"" <<aMarketDataAsk45Field.AskVolume5  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcMarketDataUpdateTimeField const& aMarketDataUpdateTimeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcMarketDataUpdateTimeField\": {" <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aMarketDataUpdateTimeField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aMarketDataUpdateTimeField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"UpdateMillisec\": \"" <<aMarketDataUpdateTimeField.UpdateMillisec  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcDepthMarketDataField const& aDepthMarketDataField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcDepthMarketDataField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aDepthMarketDataField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementGroupID\": \"" <<aDepthMarketDataField.SettlementGroupID  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aDepthMarketDataField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"PreSettlementPrice\": \"" <<aDepthMarketDataField.PreSettlementPrice  <<"\"," <<std::endl;
    os <<"        \"PreClosePrice\": \"" <<aDepthMarketDataField.PreClosePrice  <<"\"," <<std::endl;
    os <<"        \"PreOpenInterest\": \"" <<aDepthMarketDataField.PreOpenInterest  <<"\"," <<std::endl;
    os <<"        \"PreDelta\": \"" <<aDepthMarketDataField.PreDelta  <<"\"," <<std::endl;
    os <<"        \"OpenPrice\": \"" <<aDepthMarketDataField.OpenPrice  <<"\"," <<std::endl;
    os <<"        \"HighestPrice\": \"" <<aDepthMarketDataField.HighestPrice  <<"\"," <<std::endl;
    os <<"        \"LowestPrice\": \"" <<aDepthMarketDataField.LowestPrice  <<"\"," <<std::endl;
    os <<"        \"ClosePrice\": \"" <<aDepthMarketDataField.ClosePrice  <<"\"," <<std::endl;
    os <<"        \"UpperLimitPrice\": \"" <<aDepthMarketDataField.UpperLimitPrice  <<"\"," <<std::endl;
    os <<"        \"LowerLimitPrice\": \"" <<aDepthMarketDataField.LowerLimitPrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aDepthMarketDataField.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"CurrDelta\": \"" <<aDepthMarketDataField.CurrDelta  <<"\"," <<std::endl;
    os <<"        \"LastPrice\": \"" <<aDepthMarketDataField.LastPrice  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aDepthMarketDataField.Volume  <<"\"," <<std::endl;
    os <<"        \"Turnover\": \"" <<aDepthMarketDataField.Turnover  <<"\"," <<std::endl;
    os <<"        \"OpenInterest\": \"" <<aDepthMarketDataField.OpenInterest  <<"\"," <<std::endl;
    os <<"        \"BidPrice1\": \"" <<aDepthMarketDataField.BidPrice1  <<"\"," <<std::endl;
    os <<"        \"BidVolume1\": \"" <<aDepthMarketDataField.BidVolume1  <<"\"," <<std::endl;
    os <<"        \"AskPrice1\": \"" <<aDepthMarketDataField.AskPrice1  <<"\"," <<std::endl;
    os <<"        \"AskVolume1\": \"" <<aDepthMarketDataField.AskVolume1  <<"\"," <<std::endl;
    os <<"        \"BidPrice2\": \"" <<aDepthMarketDataField.BidPrice2  <<"\"," <<std::endl;
    os <<"        \"BidVolume2\": \"" <<aDepthMarketDataField.BidVolume2  <<"\"," <<std::endl;
    os <<"        \"BidPrice3\": \"" <<aDepthMarketDataField.BidPrice3  <<"\"," <<std::endl;
    os <<"        \"BidVolume3\": \"" <<aDepthMarketDataField.BidVolume3  <<"\"," <<std::endl;
    os <<"        \"AskPrice2\": \"" <<aDepthMarketDataField.AskPrice2  <<"\"," <<std::endl;
    os <<"        \"AskVolume2\": \"" <<aDepthMarketDataField.AskVolume2  <<"\"," <<std::endl;
    os <<"        \"AskPrice3\": \"" <<aDepthMarketDataField.AskPrice3  <<"\"," <<std::endl;
    os <<"        \"AskVolume3\": \"" <<aDepthMarketDataField.AskVolume3  <<"\"," <<std::endl;
    os <<"        \"BidPrice4\": \"" <<aDepthMarketDataField.BidPrice4  <<"\"," <<std::endl;
    os <<"        \"BidVolume4\": \"" <<aDepthMarketDataField.BidVolume4  <<"\"," <<std::endl;
    os <<"        \"BidPrice5\": \"" <<aDepthMarketDataField.BidPrice5  <<"\"," <<std::endl;
    os <<"        \"BidVolume5\": \"" <<aDepthMarketDataField.BidVolume5  <<"\"," <<std::endl;
    os <<"        \"AskPrice4\": \"" <<aDepthMarketDataField.AskPrice4  <<"\"," <<std::endl;
    os <<"        \"AskVolume4\": \"" <<aDepthMarketDataField.AskVolume4  <<"\"," <<std::endl;
    os <<"        \"AskPrice5\": \"" <<aDepthMarketDataField.AskPrice5  <<"\"," <<std::endl;
    os <<"        \"AskVolume5\": \"" <<aDepthMarketDataField.AskVolume5  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aDepthMarketDataField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aDepthMarketDataField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"UpdateMillisec\": \"" <<aDepthMarketDataField.UpdateMillisec  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CUstpFtdcSpecificInstrumentField const& aSpecificInstrumentField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CUstpFtdcSpecificInstrumentField\": {" <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aSpecificInstrumentField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

#endif
