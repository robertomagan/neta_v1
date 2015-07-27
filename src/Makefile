#
# OMNeT++/OMNEST Makefile for netattacks
#
# This file was generated with the command:
#  opp_makemake -f --deep -I../../inet/src/linklayer/ethernet -I../../inet/src/linklayer/ieee80211/radio -I../../inet/src/networklayer/common -I../../inet/src/networklayer/icmpv6 -I../../inet/src -I../../inet/src/world/obstacles -I../../inet/src/networklayer/xmipv6 -I../../inet/src/mobility -I../../inet/src/networklayer/manetrouting/base -I../../inet/src/networklayer/contract -I../../inet/src/linklayer/ieee80211/mgmt -I../../inet/src/util -I../../inet/src/transport/contract -I../../inet/src/linklayer/radio/propagation -I../../inet/src/linklayer/ieee80211/radio/errormodel -I../../inet/src/world/powercontrol -I../../inet/src/linklayer/radio -I../../inet/src/util/headerserializers/tcp -I../../inet/src/networklayer/ipv4 -I../../inet/src/util/headerserializers/ipv4 -I../../inet/src/base -I../../inet/src/util/headerserializers -I../../inet/src/world/radio -I../../inet/src/linklayer/ieee80211/mac -I../../inet/src/networklayer/ipv6 -I../../inet/src/transport/sctp -I../../inet/src/util/headerserializers/udp -I../../inet/src/networklayer/ipv6tunneling -I../../inet/src/battery/models -I../../inet/src/applications/pingapp -I../../inet/src/linklayer/contract -I../../inet/src/util/headerserializers/sctp -I../../inet/src/networklayer/arp -I../../inet/src/transport/tcp_common -I../../inet/src/transport/udp -I../../inet/src/applications/udpapp -L../../inet/out/$(CONFIGNAME)/src -linet -DWITH_TCP_COMMON -DWITH_TCP_INET -DWITH_IPv4 -DWITH_IPv6 -DWITH_xMIPv6 -DWITH_UDP -DWITH_RTP -DWITH_SCTP -DWITH_ETHERNET -DWITH_PPP -DWITH_EXT_IF -DWITH_MPLS -DWITH_OSPFv2 -DWITH_BGPv4 -DWITH_MANET -DWITH_DHCP -DINET_IMPORT -KINET_PROJ=../../inet
#

# Name of target to be created (-o option)
TARGET = netattacks$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../../inet/src/linklayer/ethernet \
    -I../../inet/src/linklayer/ieee80211/radio \
    -I../../inet/src/networklayer/common \
    -I../../inet/src/networklayer/icmpv6 \
    -I../../inet/src \
    -I../../inet/src/world/obstacles \
    -I../../inet/src/networklayer/xmipv6 \
    -I../../inet/src/mobility \
    -I../../inet/src/networklayer/manetrouting/base \
    -I../../inet/src/networklayer/contract \
    -I../../inet/src/linklayer/ieee80211/mgmt \
    -I../../inet/src/util \
    -I../../inet/src/transport/contract \
    -I../../inet/src/linklayer/radio/propagation \
    -I../../inet/src/linklayer/ieee80211/radio/errormodel \
    -I../../inet/src/world/powercontrol \
    -I../../inet/src/linklayer/radio \
    -I../../inet/src/util/headerserializers/tcp \
    -I../../inet/src/networklayer/ipv4 \
    -I../../inet/src/util/headerserializers/ipv4 \
    -I../../inet/src/base \
    -I../../inet/src/util/headerserializers \
    -I../../inet/src/world/radio \
    -I../../inet/src/linklayer/ieee80211/mac \
    -I../../inet/src/networklayer/ipv6 \
    -I../../inet/src/transport/sctp \
    -I../../inet/src/util/headerserializers/udp \
    -I../../inet/src/networklayer/ipv6tunneling \
    -I../../inet/src/battery/models \
    -I../../inet/src/applications/pingapp \
    -I../../inet/src/linklayer/contract \
    -I../../inet/src/util/headerserializers/sctp \
    -I../../inet/src/networklayer/arp \
    -I../../inet/src/transport/tcp_common \
    -I../../inet/src/transport/udp \
    -I../../inet/src/applications/udpapp \
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
LIBS = -L../../inet/out/$(CONFIGNAME)/src  -linet
LIBS += -Wl,-rpath,`abspath ../../inet/out/$(CONFIGNAME)/src`

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
INET_PROJ=../../inet

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
	$(Q)$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f netattacks netattacks.exe libnetattacks.so libnetattacks.a libnetattacks.dll libnetattacks.dylib
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
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ControlManetRouting_m.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
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
	$(INET_PROJ)/src/applications/udpapp/UDPBasicBurst.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddressResolver.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INET_PROJ)/src/transport/contract/UDPSocket.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/applications/udpapp/NA_UDPBasicBurst.h
$O/hackedmodules/networklayer/ipv4/NA_IPv4.o: hackedmodules/networklayer/ipv4/NA_IPv4.cc \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ControlManetRouting_m.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	attacks/controlmessages/delayAttack/NA_DelayMessage_m.h \
	attacks/controlmessages/droppingAttack/NA_DroppingMessage_m.h \
	common/log/NA_NesgLog.h \
	common/utils/NA_Utils.h \
	hackedmodules/NA_HackedModule.h \
	hackedmodules/networklayer/ipv4/NA_IPv4.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.cc \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6ControlInfo.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6ControlInfo_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket_m.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.cc \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct.h \
	hackedmodules/networklayer/manetrouting/aodv/NA_aodv_msg_struct_m.h
$O/hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.o: hackedmodules/networklayer/manetrouting/aodv/NA_aodv_uu_omnet.cc \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6ControlInfo.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6ControlInfo_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ControlManetRouting_m.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket_m.h \
	$(INET_PROJ)/src/util/FWMath.h \
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
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h \
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
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h \
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
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h \
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
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h \
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
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h \
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
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddressResolver.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h \
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
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h \
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
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h \
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
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h \
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
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h \
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
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h \
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
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h \
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
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h \
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

