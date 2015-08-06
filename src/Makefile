#
# OMNeT++/OMNEST Makefile for netattacks_v1
#
# This file was generated with the command:
#  opp_makemake -f --deep -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/world/radio -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/linklayer/common -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/applications/pingapp -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/networklayer/routing/aodv -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/networklayer/icmpv6 -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/linklayer/radio -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/transport/sctp -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/util/headerserializers/ipv6 -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/networklayer/ipv6 -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/networklayer/autorouting/ipv4 -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/applications/udpapp -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/util/headerserializers/sctp -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/linklayer/contract -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/linklayer/ieee80211/mac -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/battery/models -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/networklayer/ipv4 -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/linklayer/radio/propagation -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/transport/tcp_common -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/linklayer/ieee80211/radio -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/applications/common -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/util -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/util/headerserializers/tcp -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/networklayer/xmipv6 -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/networklayer/contract -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/mobility/contract -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/transport/contract -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/status -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/world/obstacles -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/util/headerserializers/udp -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/transport/udp -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/util/headerserializers/ipv4 -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/linklayer/ieee80211/radio/errormodel -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/base -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/networklayer/ipv6tunneling -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/networklayer/common -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/networklayer/arp -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/util/headerserializers -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/linklayer/ieee80211/mgmt -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/linklayer/ethernet -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/networklayer/manetrouting/base -I/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/src/networklayer/manetrouting/dsr -L/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25/out/$$\(CONFIGNAME\)/src -linet -DWITH_TCP_COMMON -DWITH_TCP_INET -DWITH_IPv4 -DWITH_IPv6 -DWITH_xMIPv6 -DWITH_UDP -DWITH_RTP -DWITH_SCTP -DWITH_ETHERNET -DWITH_PPP -DWITH_EXT_IF -DWITH_MPLS -DWITH_OSPFv2 -DWITH_BGPv4 -DWITH_MANET -DWITH_DHCP -DINET_IMPORT -KINET25_PROJ=/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25
#

# Name of target to be created (-o option)
TARGET = netattacks_v1$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I$(INET25_PROJ)/src/world/radio \
    -I$(INET25_PROJ)/src/linklayer/common \
    -I$(INET25_PROJ)/src/applications/pingapp \
    -I$(INET25_PROJ)/src/networklayer/routing/aodv \
    -I$(INET25_PROJ)/src/networklayer/icmpv6 \
    -I$(INET25_PROJ)/src/linklayer/radio \
    -I$(INET25_PROJ)/src/transport/sctp \
    -I$(INET25_PROJ)/src/util/headerserializers/ipv6 \
    -I$(INET25_PROJ)/src/networklayer/ipv6 \
    -I$(INET25_PROJ)/src/networklayer/autorouting/ipv4 \
    -I$(INET25_PROJ)/src/applications/udpapp \
    -I$(INET25_PROJ)/src/util/headerserializers/sctp \
    -I$(INET25_PROJ)/src/linklayer/contract \
    -I$(INET25_PROJ)/src/linklayer/ieee80211/mac \
    -I$(INET25_PROJ)/src/battery/models \
    -I$(INET25_PROJ)/src/networklayer/ipv4 \
    -I$(INET25_PROJ)/src/linklayer/radio/propagation \
    -I$(INET25_PROJ)/src/transport/tcp_common \
    -I$(INET25_PROJ)/src/linklayer/ieee80211/radio \
    -I$(INET25_PROJ)/src/applications/common \
    -I$(INET25_PROJ)/src/util \
    -I$(INET25_PROJ)/src/util/headerserializers/tcp \
    -I$(INET25_PROJ)/src \
    -I$(INET25_PROJ)/src/networklayer/xmipv6 \
    -I$(INET25_PROJ)/src/networklayer/contract \
    -I$(INET25_PROJ)/src/mobility/contract \
    -I$(INET25_PROJ)/src/transport/contract \
    -I$(INET25_PROJ)/src/status \
    -I$(INET25_PROJ)/src/world/obstacles \
    -I$(INET25_PROJ)/src/util/headerserializers/udp \
    -I$(INET25_PROJ)/src/transport/udp \
    -I$(INET25_PROJ)/src/util/headerserializers/ipv4 \
    -I$(INET25_PROJ)/src/linklayer/ieee80211/radio/errormodel \
    -I$(INET25_PROJ)/src/base \
    -I$(INET25_PROJ)/src/networklayer/ipv6tunneling \
    -I$(INET25_PROJ)/src/networklayer/common \
    -I$(INET25_PROJ)/src/networklayer/arp \
    -I$(INET25_PROJ)/src/util/headerserializers \
    -I$(INET25_PROJ)/src/linklayer/ieee80211/mgmt \
    -I$(INET25_PROJ)/src/linklayer/ethernet \
    -I$(INET25_PROJ)/src/networklayer/manetrouting/base \
    -I$(INET25_PROJ)/src/networklayer/manetrouting/dsr \
    -I. \
    -Iattacks \
    -Iattacks/controllers \
    -Iattacks/controllers/delayAttack \
    -Iattacks/controllers/droppingAttack \
    -Iattacks/controllers/sinkholeAttack \
    -Iattacks/controlmessages \
    -Iattacks/controlmessages/delayAttack \
    -Iattacks/controlmessages/droppingAttack \
    -Iattacks/controlmessages/sinkholeAttack \
    -Icommon \
    -Icommon/log \
    -Icommon/utils \
    -Ihackedmodules \
    -Ihackedmodules/applications \
    -Ihackedmodules/applications/udpapp \
    -Ihackedmodules/networklayer \
    -Ihackedmodules/networklayer/ipv4 \
    -Ihackedmodules/networklayer/manetrouting \
    -Ihackedmodules/networklayer/manetrouting/aodv \
    -Ihackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu \
    -Inodes

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L$(INET25_PROJ)/out/$(CONFIGNAME)/src  -linet
LIBS += -Wl,-rpath,`abspath $(INET25_PROJ)/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/attacks/controllers/NA_Attack.o \
    $O/attacks/controllers/delayAttack/NA_DelayAttack.o \
    $O/attacks/controllers/droppingAttack/NA_DroppingAttack.o \
    $O/attacks/controllers/sinkholeAttack/NA_SinkholeAttack.o \
    $O/common/log/NA_NesgLog.o \
    $O/common/utils/NA_Utils.o \
    $O/hackedmodules/NA_HackedModule.o \
    $O/hackedmodules/applications/udpapp/NA_UDPBasicBurst.o \
    $O/hackedmodules/networklayer/ipv4/NA_IPv4.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.o \
    $O/attacks/controlmessages/delayAttack/NA_DelayMessage_m.o \
    $O/attacks/controlmessages/droppingAttack/NA_DroppingMessage_m.o \
    $O/attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.o \
    $O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.o

# Message files
MSGFILES = \
    attacks/controlmessages/delayAttack/NA_DelayMessage.msg \
    attacks/controlmessages/droppingAttack/NA_DroppingMessage.msg \
    attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage.msg \
    hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.msg

# Other makefile variables (-K)
INET25_PROJ=/home/roberto/owncloud/OMNET/NETA_2/proyectos/inet25

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppmain$D $(USERIF_LIBS) $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS) \
    -DWITH_TCP_COMMON \
    -DWITH_TCP_INET \
    -DWITH_IPv4 \
    -DWITH_IPv6 \
    -DWITH_xMIPv6 \
    -DWITH_UDP \
    -DWITH_RTP \
    -DWITH_SCTP \
    -DWITH_ETHERNET \
    -DWITH_PPP \
    -DWITH_EXT_IF \
    -DWITH_MPLS \
    -DWITH_OSPFv2 \
    -DWITH_BGPv4 \
    -DWITH_MANET \
    -DWITH_DHCP \
    -DINET_IMPORT $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(Q)$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	@echo Creating executable: $@
	$(Q)$(CXX) $(LDFLAGS) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS)

.PHONY: all clean cleanall depend msgheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f netattacks_v1 netattacks_v1.exe libnetattacks_v1.so libnetattacks_v1.a libnetattacks_v1.dll libnetattacks_v1.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f attacks/*_m.cc attacks/*_m.h
	$(Q)-rm -f attacks/controllers/*_m.cc attacks/controllers/*_m.h
	$(Q)-rm -f attacks/controllers/delayAttack/*_m.cc attacks/controllers/delayAttack/*_m.h
	$(Q)-rm -f attacks/controllers/droppingAttack/*_m.cc attacks/controllers/droppingAttack/*_m.h
	$(Q)-rm -f attacks/controllers/sinkholeAttack/*_m.cc attacks/controllers/sinkholeAttack/*_m.h
	$(Q)-rm -f attacks/controlmessages/*_m.cc attacks/controlmessages/*_m.h
	$(Q)-rm -f attacks/controlmessages/delayAttack/*_m.cc attacks/controlmessages/delayAttack/*_m.h
	$(Q)-rm -f attacks/controlmessages/droppingAttack/*_m.cc attacks/controlmessages/droppingAttack/*_m.h
	$(Q)-rm -f attacks/controlmessages/sinkholeAttack/*_m.cc attacks/controlmessages/sinkholeAttack/*_m.h
	$(Q)-rm -f common/*_m.cc common/*_m.h
	$(Q)-rm -f common/log/*_m.cc common/log/*_m.h
	$(Q)-rm -f common/utils/*_m.cc common/utils/*_m.h
	$(Q)-rm -f hackedmodules/*_m.cc hackedmodules/*_m.h
	$(Q)-rm -f hackedmodules/applications/*_m.cc hackedmodules/applications/*_m.h
	$(Q)-rm -f hackedmodules/applications/udpapp/*_m.cc hackedmodules/applications/udpapp/*_m.h
	$(Q)-rm -f hackedmodules/networklayer/*_m.cc hackedmodules/networklayer/*_m.h
	$(Q)-rm -f hackedmodules/networklayer/ipv4/*_m.cc hackedmodules/networklayer/ipv4/*_m.h
	$(Q)-rm -f hackedmodules/networklayer/manetrouting/*_m.cc hackedmodules/networklayer/manetrouting/*_m.h
	$(Q)-rm -f hackedmodules/networklayer/manetrouting/aodv/*_m.cc hackedmodules/networklayer/manetrouting/aodv/*_m.h
	$(Q)-rm -f hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/*_m.cc hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/*_m.h
	$(Q)-rm -f nodes/*_m.cc nodes/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc attacks/*.cc attacks/controllers/*.cc attacks/controllers/delayAttack/*.cc attacks/controllers/droppingAttack/*.cc attacks/controllers/sinkholeAttack/*.cc attacks/controlmessages/*.cc attacks/controlmessages/delayAttack/*.cc attacks/controlmessages/droppingAttack/*.cc attacks/controlmessages/sinkholeAttack/*.cc common/*.cc common/log/*.cc common/utils/*.cc hackedmodules/*.cc hackedmodules/applications/*.cc hackedmodules/applications/udpapp/*.cc hackedmodules/networklayer/*.cc hackedmodules/networklayer/ipv4/*.cc hackedmodules/networklayer/manetrouting/*.cc hackedmodules/networklayer/manetrouting/aodv/*.cc hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/*.cc nodes/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/attacks/controllers/NA_Attack.o: attacks/controllers/NA_Attack.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	attacks/controllers/NA_Attack.h \
	attacks/controlmessages/delayAttack/NA_DelayMessage_m.h \
	attacks/controlmessages/droppingAttack/NA_DroppingMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/ipv4/NA_IPv4.h
$O/attacks/controllers/delayAttack/NA_DelayAttack.o: attacks/controllers/delayAttack/NA_DelayAttack.cc \
	attacks/controllers/NA_Attack.h \
	attacks/controllers/delayAttack/NA_DelayAttack.h \
	attacks/controlmessages/delayAttack/NA_DelayMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h
$O/attacks/controllers/droppingAttack/NA_DroppingAttack.o: attacks/controllers/droppingAttack/NA_DroppingAttack.cc \
	attacks/controllers/NA_Attack.h \
	attacks/controllers/droppingAttack/NA_DroppingAttack.h \
	attacks/controlmessages/droppingAttack/NA_DroppingMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h
$O/attacks/controllers/sinkholeAttack/NA_SinkholeAttack.o: attacks/controllers/sinkholeAttack/NA_SinkholeAttack.cc \
	attacks/controllers/NA_Attack.h \
	attacks/controllers/sinkholeAttack/NA_SinkholeAttack.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h
$O/attacks/controlmessages/delayAttack/NA_DelayMessage_m.o: attacks/controlmessages/delayAttack/NA_DelayMessage_m.cc \
	attacks/controlmessages/delayAttack/NA_DelayMessage_m.h
$O/attacks/controlmessages/droppingAttack/NA_DroppingMessage_m.o: attacks/controlmessages/droppingAttack/NA_DroppingMessage_m.cc \
	attacks/controlmessages/droppingAttack/NA_DroppingMessage_m.h
$O/attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.o: attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.cc \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h
$O/common/log/NA_NesgLog.o: common/log/NA_NesgLog.cc \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h
$O/common/utils/NA_Utils.o: common/utils/NA_Utils.cc \
	common/utils/NA_Utils.h
$O/hackedmodules/NA_HackedModule.o: hackedmodules/NA_HackedModule.cc \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h
$O/hackedmodules/applications/udpapp/NA_UDPBasicBurst.o: hackedmodules/applications/udpapp/NA_UDPBasicBurst.cc \
	$(INET25_PROJ)/src/applications/common/ApplicationBase.h \
	$(INET25_PROJ)/src/applications/udpapp/UDPBasicBurst.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/LifecycleOperation.h \
	$(INET25_PROJ)/src/base/NodeOperations.h \
	$(INET25_PROJ)/src/base/OperationalBase.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddressResolver.h \
	$(INET25_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INET25_PROJ)/src/transport/contract/UDPSocket.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/applications/udpapp/NA_UDPBasicBurst.h
$O/hackedmodules/networklayer/ipv4/NA_IPv4.o: hackedmodules/networklayer/ipv4/NA_IPv4.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	attacks/controlmessages/delayAttack/NA_DelayMessage_m.h \
	attacks/controlmessages/droppingAttack/NA_DroppingMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/ipv4/NA_IPv4.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.cc \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6ControlInfo.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6ControlInfo_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/transport/udp/UDPPacket.h \
	$(INET25_PROJ)/src/transport/udp/UDPPacket_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.cc \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/Coord.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET25_PROJ)/src/networklayer/arp/ARP.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6ControlInfo.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6ControlInfo_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ControlManetRouting_m.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/transport/udp/UDPPacket.h \
	$(INET25_PROJ)/src/transport/udp/UDPPacket_m.h \
	$(INET25_PROJ)/src/util/FWMath.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_defs_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_params.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.o: hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/Coord.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET25_PROJ)/src/networklayer/arp/ARP.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/util/FWMath.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_defs_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_params.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/Coord.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET25_PROJ)/src/networklayer/arp/ARP.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/util/FWMath.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_defs_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_params.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/Coord.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET25_PROJ)/src/networklayer/arp/ARP.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/util/FWMath.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_defs_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_params.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/Coord.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET25_PROJ)/src/networklayer/arp/ARP.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/util/FWMath.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_defs_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_params.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/Coord.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET25_PROJ)/src/networklayer/arp/ARP.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/util/FWMath.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_defs_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_params.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/Coord.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET25_PROJ)/src/networklayer/arp/ARP.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddressResolver.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/util/FWMath.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_defs_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_params.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/Coord.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET25_PROJ)/src/networklayer/arp/ARP.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/util/FWMath.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_defs_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_params.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/Coord.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET25_PROJ)/src/networklayer/arp/ARP.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/util/FWMath.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_defs_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_params.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/Coord.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET25_PROJ)/src/networklayer/arp/ARP.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/util/FWMath.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_defs_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_params.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.cc \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/Coord.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET25_PROJ)/src/networklayer/arp/ARP.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/util/FWMath.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_defs_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_params.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/Coord.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET25_PROJ)/src/networklayer/arp/ARP.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/util/FWMath.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_defs_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_params.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/Coord.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET25_PROJ)/src/networklayer/arp/ARP.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/util/FWMath.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_defs_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_params.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.cc \
	$(INET25_PROJ)/src/base/AbstractQueue.h \
	$(INET25_PROJ)/src/base/Compat.h \
	$(INET25_PROJ)/src/base/Coord.h \
	$(INET25_PROJ)/src/base/ILifecycle.h \
	$(INET25_PROJ)/src/base/INETDefs.h \
	$(INET25_PROJ)/src/base/INotifiable.h \
	$(INET25_PROJ)/src/base/ModuleAccess.h \
	$(INET25_PROJ)/src/base/NotificationBoard.h \
	$(INET25_PROJ)/src/base/NotifierConsts.h \
	$(INET25_PROJ)/src/base/ProtocolMap.h \
	$(INET25_PROJ)/src/base/QueueBase.h \
	$(INET25_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET25_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET25_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET25_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET25_PROJ)/src/networklayer/arp/ARP.h \
	$(INET25_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET25_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET25_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET25_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET25_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET25_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET25_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET25_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET25_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET25_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET25_PROJ)/src/util/FWMath.h \
	attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_hello.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_neighbor.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rerr.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rrep.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_rreq.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_socket.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_aodv_timeout.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_debug_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_defs_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_locality.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_params.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_routing_table.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_seek_list.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv-uu/NA_timer_queue_aodv.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_packet_queue_omnet.h

