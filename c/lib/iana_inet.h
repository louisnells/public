/*
 *  Copyright (c) 2008-2018
 *      Nells.K.S <https://google.com/+NellsKS>
 *
 *  All rights reserved.
 */
//set ts=4 sw=4

#ifndef ___IANA_INET_H__
#	define ___IANA_INET_H__

#	ifdef __cplusplus
extern "C" {
#	endif



#include <stdint.h>


enum {
	AddressFamily_other_c = 0,
	AddressFamily_ipV4_c = 1,
	AddressFamily_ipV6_c = 2,
	AddressFamily_nsap_c = 3,
	AddressFamily_hdlc_c = 4,
	AddressFamily_bbn1822_c = 5,
	AddressFamily_all802_c = 6,
	AddressFamily_e163_c = 7,
	AddressFamily_e164_c = 8,
	AddressFamily_f69_c = 9,
	AddressFamily_x121_c = 10,
	AddressFamily_ipx_c = 11,
	AddressFamily_appleTalk_c = 12,
	AddressFamily_decnetIV_c = 13,
	AddressFamily_banyanVines_c = 14,
	AddressFamily_e164withNsap_c = 15,
	AddressFamily_dns_c = 16,
	AddressFamily_distinguishedName_c = 17,
	AddressFamily_asNumber_c = 18,
	AddressFamily_xtpOverIpv4_c = 19,
	AddressFamily_xtpOverIpv6_c = 20,
	AddressFamily_xtpNativeModeXTP_c = 21,
	AddressFamily_fibreChannelWWPN_c = 22,
	AddressFamily_fibreChannelWWNN_c = 23,
	AddressFamily_gwid_c = 24,
	AddressFamily_afi_c = 25,
	AddressFamily_reserved_c = 65535,
};

enum
{
	InetAddressType_unknown_c = 0,
	InetAddressType_ipv4_c = 1,
	InetAddressType_ipv6_c = 2,
	InetAddressType_ipv4z_c = 3,
	InetAddressType_ipv6z_c = 4,
	InetAddressType_dns_c = 16,
	
	InetVersion_unknown_c = 0,
	InetVersion_ipv4_c = 1,
	InetVersion_ipv6_c = 2,
};

enum
{
	IpRouteProtocol_other_c = 1,
	IpRouteProtocol_local_c = 2,
	IpRouteProtocol_netmgmt_c = 3,
	IpRouteProtocol_icmp_c = 4,
	IpRouteProtocol_egp_c = 5,
	IpRouteProtocol_ggp_c = 6,
	IpRouteProtocol_hello_c = 7,
	IpRouteProtocol_rip_c = 8,
	IpRouteProtocol_isIs_c = 9,
	IpRouteProtocol_esIs_c = 10,
	IpRouteProtocol_ciscoIgrp_c = 11,
	IpRouteProtocol_bbnSpfIgp_c = 12,
	IpRouteProtocol_ospf_c = 13,
	IpRouteProtocol_bgp_c = 14,
	IpRouteProtocol_idpr_c = 15,
	IpRouteProtocol_ciscoEigrp_c = 16,
	IpRouteProtocol_dvmrp_c = 17,
};

enum
{
	IpMRouteProtocol_other_c = 1,
	IpMRouteProtocol_local_c = 2,
	IpMRouteProtocol_netmgmt_c = 3,
	IpMRouteProtocol_dvmrp_c = 4,
	IpMRouteProtocol_mospf_c = 5,
	IpMRouteProtocol_pimSparseDense_c = 6,
	IpMRouteProtocol_cbt_c = 7,
	IpMRouteProtocol_pimSparseMode_c = 8,
	IpMRouteProtocol_pimDenseMode_c = 9,
	IpMRouteProtocol_igmpOnly_c = 10,
	IpMRouteProtocol_bgmp_c = 11,
	IpMRouteProtocol_msdp_c = 12,
};



#	ifdef __cplusplus
}
#	endif

#endif	// ___IANA_INET_H__
