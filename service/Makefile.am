AUTOMAKE_OPTIONS = foreign

lib_LTLIBRARIES = libdatafeed.la
libdatafeed_la_SOURCES = DataFeedMultiOptions.cc DataFeedMultiServiceImpl.cc\
			 DataFeedTCPOptions.cc \
			 DataFeedTCPServiceImpl.cc \
			 DataFeedSpiImpl.cc \
			 FederUtil.cc

libdatafeed_la_CPPFLAGS = -I$(top_srcdir) \
			$(BOOST_CPPFLAGS) \
			$(DATAFEED_MULTI_CPPFLAGS) \
			$(DATAFEED_TCP_CPPFLAGS) \
			$(SOIL_CPPFLAGS)

libdatafeed_la_LIBADD = $(DATAFEED_MULTI_LIBADD) \
		$(DATAFEED_TCP_LIBADD) \
		$(BOOST_LIBADD) \
		$(SOIL_LIBADD)

libdatafeed_la_LDFLAGS = \
	-no-undefined -version-info \
	$(LT_CURRENT):$(LT_REVISION):$(LT_AGE) \
	-release $(LT_RELEASE)

# header files
noinst_HEADERS = DataFeedMultiOptions.hh \
		 UstpApiStructPrint.hh \
		 DataFeedMultiServiceImpl.hh \
		 FederLog.hh \
		 DataFeedTCPOptions.hh \
		 DataFeedTCPServiceImpl.hh \
		 DataFeedSpiImpl.hh \
		 FederUtil.hh



