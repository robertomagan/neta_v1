/*****************************************************************************
 *
 * Copyright (C) 2002 Uppsala University.
 * Copyright (C) 2006 Malaga University.
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors: Bj�n Wiberg <bjorn.wiberg@home.se>
 * Authors: Alfonso Ariza Quintana.<aarizaq@uma.ea>
 *
 *****************************************************************************/
//
// Copyright (C) 2013 and modified by NESG (Network Engineering and Security Group), http://nesg.ugr.es,
// - Gabriel Maciá Fernández (gmacia@ugr.es)
// - Leovigildo Sánchez Casado (sancale@ugr.es)
// - Rafael A. Rodríguez Gómez (rodgom@ugr.es)
// - Roberto Magán Carrión (rmagan@ugr.es)
// - Pedro García Teodoro (pgteodor@ugr.es)
// - José Camacho Páez (josecamacho@ugr.es)
// - Jesús E. Díaz Verdejo (jedv@ugr.es)
//


#ifndef NA_AODV_UU_H
#define NA_AODV_UU_H

/* Constants for interface queue packet buffering/dropping */
#define IFQ_BUFFER 0
#define IFQ_DROP 1
#define IFQ_DROP_BY_DEST 2
#define PKT_ENC 0x1       /* Packet is encapsulated */
#define PKT_DEC 0x2 /* Packet arrived at GW and has been decapsulated (and
* should therefore be routed to the Internet */
// #define CONFIG_GATEWAY
// #define DEBUG_HELLO

#ifndef NS_PORT
#define NS_PORT
#endif
#ifndef OMNETPP
#define OMNETPP
#endif

/* This is a C++ port of AODV-UU for ns-2 */
#ifndef NS_PORT
#error "To compile the ported version, NS_PORT must be defined!"
#endif /* NS_PORT */

#ifndef AODV_USE_STL
#define AODV_USE_STL
#endif

#ifndef AODV_USE_STL_RT
#define AODV_USE_STL_RT
#endif

#define AODV_GLOBAL_STATISTISTIC

/* Global definitions and lib functions */
#include "NA_aodv-uu/NA_params.h"
#include "NA_aodv-uu/NA_defs_aodv.h"

/* System-dependent datatypes */
/* Needed by some network-related datatypes */
#include "ManetRoutingBase.h"
#include "NA_aodv-uu/NA_list.h"
#include "NA_aodv_msg_struct.h"
#include "ICMPAccess.h"
#include "Ieee80211Frame_m.h"


/* Forward declaration needed to be able to reference the class */
class NA_AODVUU;



#ifndef IP_BROADCAST
#define IP_BROADCAST ((u_int32_t) 0xffffffff)
#endif /* !IP_BROADCAST */

/* Extract global data types, defines and global declarations */
#undef NS_NO_GLOBALS
#define NS_NO_DECLARATIONS

#include "NA_aodv-uu/NA_timer_queue_aodv.h"
#include "NA_aodv-uu/NA_aodv_hello.h"
#include "NA_aodv-uu/NA_aodv_rerr.h"
#include "NA_aodv-uu/NA_aodv_rrep.h"
#include "NA_aodv-uu/NA_aodv_rreq.h"
#include "NA_aodv-uu/NA_aodv_socket.h"
#include "NA_aodv-uu/NA_aodv_timeout.h"
#include "NA_aodv-uu/NA_debug_aodv.h"
#include "NA_aodv-uu/NA_routing_table.h"
#include "NA_aodv-uu/NA_seek_list.h"
#include "NA_aodv-uu/NA_locality.h"

#include "NA_packet_queue_omnet.h"

#undef NS_NO_DECLARATIONS

/* In omnet we don't care about byte order */
#undef ntohl
#define ntohl(x) x
#undef htonl
#define htonl(x) x
#undef htons
#define htons(x) x
#undef ntohs
#define ntohs(x) x

/* NETATTACKS */
//#include <omnetpp.h>
#include "common/log/NA_NesgLog.h"
#include "NA_HackedModule.h"
#include "NA_SinkholeMessage_m.h"
// ---------------


/**
 * @brief ADOVUU hacked module
 *
 * @details To implement an attack is usually needed to modify the AODVUU related files and its owner methods.
 * Each piece of code modified is labeled with a specific tags. For example, for sinkhole attack these are the following:
 *
 * @code
 * \// BEGIN NA_SINKHOLE - <username>
 *
 *     <code modified to implement sinkhole>
 *
 * \// END NA_SINKHOLE - <username>
 * @endcode
 *
 * Attacks implemented and the corresponding files modified:
 * <table border="1">
 *   <tr>  <th>Attack</th> <th>Modified files</th> </tr>
 *   <tr>
 *      <td>Sinkhole</td>
 *      <td>NA_aodv_rreq, NA_aodv_uu_omnet</td>
 *   </tr>
 * </table>
 *
 * @see NA_HackedModule, NA_aodv_rreq
 *
 * @author Leovigildo Sánchez Casado, sancale@ugr.es
 * @date 01/22/2013
 *
 */
class NA_AODVUU : public ManetRoutingBase, public NA_HackedModule
{

  private:

    /**
     * Log reference
     */
    NA_NesgLog log;

    // BEGIN NA_SINKHOLE - sancale
    /**
     * Flag to activate sinkhole attack
     */
    bool sinkholeAttackIsActive;

    /**
     * Probability for sinkhole packets when sinkhole attack is active.
     */
    double sinkholeAttackProbability;

    /**
     * Sink only if the attacker DO know the route.
     */
    bool sinkOnlyWhenRouteInTable;

    /**
     * Number of false RREP sent.
     */
    long numSents;

    /**
     * Sequence number for the simulation. Implemented as a pointer to allow random distributions values
     */
    ParPtr seqnoAdded;

    /**
    * Sequence number for the simulation. Implemented as a pointer to allow random distributions values
    */
    int numHops;

    // END NA_SINKHOLE - sancale

    char nodeName[50];
    ICMPAccess icmpAccess;
    bool useIndex;
    bool isRoot;
    uint32_t costStatic;
    uint32_t costMobile;
    bool useHover;
    bool propagateProactive;
    struct timer proactive_rreq_timer;
    long proactive_rreq_timeout;
    bool isBroadcast (ManetAddress add)
    {
        if (this->isInMacLayer() && add==ManetAddress(MACAddress::BROADCAST_ADDRESS))
             return true;
        if (!this->isInMacLayer() && add==ManetAddress(IPv4Address::ALLONES_ADDRESS))
            return true;
        return false;
    }
    // cMessage  messageEvent;
    typedef std::multimap<simtime_t, struct timer*> AodvTimerMap;
    AodvTimerMap aodvTimerMap;
    typedef std::map<ManetAddress, struct rt_table*> AodvRtTableMap;
    AodvRtTableMap aodvRtTableMap;


  public:
    static int  log_file_fd;
    static bool log_file_fd_init;
    NA_AODVUU() {isRoot = false; is_init = false; log_file_fd_init = false; sendMessageEvent = new cMessage();/*&messageEvent;*/}
    ~NA_AODVUU();

    void packetFailed(IPv4Datagram *p);
    void packetFailedMac(Ieee80211DataFrame *);

    // Routing information access
    virtual uint32_t getRoute(const ManetAddress &,std::vector<ManetAddress> &);
    virtual bool getNextHop(const ManetAddress &,ManetAddress &add,int &iface,double &);
    virtual bool isProactive();
    virtual void setRefreshRoute(const ManetAddress &destination, const ManetAddress & nextHop,bool isReverse);
    virtual bool setRoute(const ManetAddress & destination,const ManetAddress &nextHop,const int &ifaceIndex,const int &hops,const ManetAddress &mask=ManetAddress::ZERO);
    virtual bool setRoute(const ManetAddress & destination,const ManetAddress &nextHop,const char *ifaceName,const int &hops,const ManetAddress &mask=ManetAddress::ZERO);

    /* NETATTACKS */
    void handleMessageFromAttackController(cMessage *msg);
    // ---------------

  protected:
    bool is_init;
    void drop (cPacket *p,int cause = 0)
    {
        delete p;
        // icmpAccess.get()->sendErrorMessage(p, ICMP_DESTINATION_UNREACHABLE, cause);
    }
    int startAODVUUAgent();
    void scheduleNextEvent();
    const char *if_indextoname(int, char *);
    IPv4Datagram *pkt_encapsulate(IPv4Datagram *, IPv4Address);
    IPv4Datagram *pkt_decapsulate(IPv4Datagram *);
    virtual void handleMessage(cMessage *msg);
    virtual void finish();

    int numInitStages() const  {return 5;}
    void initialize(int stage);


    cMessage * sendMessageEvent;

    void recvAODVUUPacket(cMessage * p);
    void processPacket(IPv4Datagram *,unsigned int);

    int initialized;
    int  node_id;
    IPv4Address *gateWayAddress;

    int NS_DEV_NR;
    int NS_IFINDEX;
    // cModule *ipmod;

    /*
      Extract method declarations (and occasionally, variables)
      from header files
    */
#define NS_NO_GLOBALS
#undef NS_NO_DECLARATIONS

#undef NA_AODV_NEIGHBOR_H
#include "NA_aodv-uu/NA_aodv_neighbor.h"

#undef NA_AODV_HELLO_H
#include "NA_aodv-uu/NA_aodv_hello.h"

#undef NA_AODV_RERR_H
#include "NA_aodv-uu/NA_aodv_rerr.h"

#undef NA_AODV_RREP_H
#include "NA_aodv-uu/NA_aodv_rrep.h"

#undef NA_AODV_RREQ_H
#include "NA_aodv-uu/NA_aodv_rreq.h"

#undef NA_AODV_SOCKET_H
#include "NA_aodv-uu/NA_aodv_socket.h"

#undef NA_AODV_TIMEOUT_H
#include "NA_aodv-uu/NA_aodv_timeout.h"

#undef NA_DEBUG_H
#include "NA_aodv-uu/NA_debug_aodv.h"

#undef NA_ROUTING_TABLE_H
#include "NA_aodv-uu/NA_routing_table.h"

#undef NA_SEEK_LIST_H
#include "NA_aodv-uu/NA_seek_list.h"

#undef NA_TIMER_QUEUE_H
#include "NA_aodv-uu/NA_timer_queue_aodv.h"

#undef NA_LOCALITY_H
#include "NA_aodv-uu/NA_locality.h"

#undef NA_PACKET_QUEUE_H
#include "NA_packet_queue_omnet.h"

#undef NS_NO_GLOBALS

    /* (Previously global) variables from main.c */
    int log_to_file;
    int rt_log_interval;
    int unidir_hack;
    int rreq_gratuitous;
    int expanding_ring_search;
    int internet_gw_mode;
    int local_repair;
    int receive_n_hellos;
    int hello_jittering;
    int optimized_hellos;
    int ratelimit;
    int llfeedback;
    char *progname;
    int wait_on_reboot;
    struct timer worb_timer;

    /* Parameters that are dynamic configuration values: */
    int active_route_timeout;
    int ttl_start;
    int delete_period;

    /* From aodv_hello.c */
    struct timer hello_timer;
#ifndef AODV_USE_STL
    /* From aodv_rreq.c */
    list_t rreqRecords;
#define rreq_records this->rreqRecords
    list_t rreqBlacklist;
#define  rreq_blacklist this->rreqBlacklist

    /* From seek_list.c */
    list_t seekHead;
#define seekhead this->seekHead

    /* From timer_queue_aodv.c */
    list_t timeList;
#define TQ this->timeList
#else
    typedef std::vector <rreq_record *>RreqRecords;
    typedef std::map <ManetAddress, struct blacklist *>RreqBlacklist;
    typedef std::map <ManetAddress, seek_list_t*>SeekHead;

    RreqRecords rreq_records;
    RreqBlacklist rreq_blacklist;
    SeekHead seekhead;
#endif
    /* From debug.c */
// int  log_file_fd;
    int log_rt_fd;
    int log_nmsgs;
    int debug;
    struct timer rt_log_timer;

    /* From defs.h */
    struct host_info this_host;
    struct dev_info dev_ifindex (int);
    struct dev_info dev_nr(int);
    unsigned int dev_indices[MAX_NR_INTERFACES];

//  inline int ifindex2devindex(unsigned int ifindex);
    int ifindex2devindex(unsigned int ifindex);
#ifdef AODV_GLOBAL_STATISTISTIC
    static bool iswrite;
    static int totalSend;
    static int totalRreqSend;
    static int totalRreqRec;
    static int totalRrepSend;
    static int totalRrepRec;
    static int totalRrepAckSend;
    static int totalRrepAckRec;
    static int totalRerrSend;
    static int totalRerrRec;
#else
    bool iswrite;
    int totalSend;
    int totalRreqSend;
    int totalRreqRec;
    int totalRrepSend;
    int totalRrepRec;
    int totalRrepAckSend;
    int totalRrepAckRec;
    int totalRerrSend;
    int totalRerrRec;
#endif
// used for break link notification
    //virtual void processPromiscuous(const cObject *details){};
    virtual void processLinkBreak(const cObject *details);
    //virtual void processFullPromiscuous(const cObject *details){}
    virtual bool isOurType(cPacket *);
    virtual bool getDestAddress(cPacket *,ManetAddress &);


};

#if 0
/* From defs.h (needs the AODVUU class declaration) */
inline int NS_CLASS ifindex2devindex(unsigned int ifindex)
{
    int i;

    for (i = 0; i < this_host.nif; i++)
        if (dev_indices[i] == ifindex)
            return i;

    return -1;
}
#endif
#endif /* AODV_UU_H */
