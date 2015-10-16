
#ifndef __DATA_STRUCT_H__
#define __DATA_STRUCT_H__

/////////////////////////////////////////�ֶ�����///////////////////////////////////
//�û�����
typedef char TUstpFtdcUserIDType[16];
//����
typedef char TUstpFtdcPasswordType[41];
///��������
typedef char TUstpFtdcDateType[9];
///�������������
typedef char TUstpFtdcSettlementGroupIDType[9];
///����������
typedef int TUstpFtdcSettlementIDType;
///�۸�����
typedef double TUstpFtdcPriceType;
///�����������
typedef double TUstpFtdcLargeVolumeType;
///��������
typedef double TUstpFtdcRatioType;
///��������
typedef int TUstpFtdcVolumeType;
///�ʽ�����
typedef double TUstpFtdcMoneyType;
///��Լ�������
typedef char TUstpFtdcInstrumentIDType[31];
///ʱ������
typedef char TUstpFtdcTimeType[9];
///����޸ĺ�������
typedef int TUstpFtdcMillisecType;
///�������
typedef int TUstpErrorID;
///������Ϣ
typedef char TUstpErrorMsg[80];
///�����
typedef int  TUstpTopicID;
///�û����նಥ����  
typedef char TUstpIP[40];
///�û����նಥmac  
typedef char TUstpMAC[40];
/////////////////////////////////////////�ṹ������///////////////////////////////////

// ��Ӧ��Ϣ��
struct CUstpRspInfo
{
	TUstpErrorID    ErrorID;                       //�������  
	TUstpErrorMsg   ErrorMsg;                      //������Ϣ
};

///�û���¼����
struct CUstpFtdcReqUserLoginField
{
	///�û�����
	TUstpFtdcUserIDType	UserID;
	///����
	TUstpFtdcPasswordType	Password;
	///�����
	TUstpTopicID TopicID;
	///�û����նಥIP  chenhui
	TUstpIP IP;
	///�û����նಥMAC  chenhui
	TUstpMAC Mac;
};


///�������
struct CUstpFtdcDepthMarketDataField
{
	///������
	TUstpFtdcDateType	TradingDay;
	///���������
	TUstpFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TUstpFtdcSettlementIDType	SettlementID;
	///�����
	TUstpFtdcPriceType	PreSettlementPrice;
	///������
	TUstpFtdcPriceType	PreClosePrice;
	///��ֲ���
	TUstpFtdcLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TUstpFtdcRatioType	PreDelta;
	///����
	TUstpFtdcPriceType	OpenPrice;
	///��߼�
	TUstpFtdcPriceType	HighestPrice;
	///��ͼ�
	TUstpFtdcPriceType	LowestPrice;
	///������
	TUstpFtdcPriceType	ClosePrice;
	///��ͣ���
	TUstpFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TUstpFtdcPriceType	LowerLimitPrice;
	///�����
	TUstpFtdcPriceType	SettlementPrice;
	///����ʵ��
	TUstpFtdcRatioType	CurrDelta;
	///���¼�
	TUstpFtdcPriceType	LastPrice;
	///����
	TUstpFtdcVolumeType	Volume;
	///�ɽ����
	TUstpFtdcMoneyType	Turnover;
	///�ֲ���
	TUstpFtdcLargeVolumeType	OpenInterest;
	///�����һ
	TUstpFtdcPriceType	BidPrice1;
	///������һ
	TUstpFtdcVolumeType	BidVolume1;
	///������һ
	TUstpFtdcPriceType	AskPrice1;
	///������һ
	TUstpFtdcVolumeType	AskVolume1;
	///����۶�
	TUstpFtdcPriceType	BidPrice2;
	///��������
	TUstpFtdcVolumeType	BidVolume2;
	///�������
	TUstpFtdcPriceType	BidPrice3;
	///��������
	TUstpFtdcVolumeType	BidVolume3;
	///�����۶�
	TUstpFtdcPriceType	AskPrice2;
	///��������
	TUstpFtdcVolumeType	AskVolume2;
	///��������
	TUstpFtdcPriceType	AskPrice3;
	///��������
	TUstpFtdcVolumeType	AskVolume3;
	///�������
	TUstpFtdcPriceType	BidPrice4;
	///��������
	TUstpFtdcVolumeType	BidVolume4;
	///�������
	TUstpFtdcPriceType	BidPrice5;
	///��������
	TUstpFtdcVolumeType	BidVolume5;
	///��������
	TUstpFtdcPriceType	AskPrice4;
	///��������
	TUstpFtdcVolumeType	AskVolume4;
	///��������
	TUstpFtdcPriceType	AskPrice5;
	///��������
	TUstpFtdcVolumeType	AskVolume5;
	///��Լ����
	TUstpFtdcInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TUstpFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TUstpFtdcMillisecType	UpdateMillisec;
};


#endif
