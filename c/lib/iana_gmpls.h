/*
 *  Copyright (c) 2008-2018
 *      Nells.K.S <https://google.com/+NellsKS>
 *
 *  All rights reserved.
 */
//set ts=4 sw=4

#ifndef __IANA_GMPLS_H__
#	define __IANA_GMPLS_H__

#	ifdef __cplusplus
extern "C" {
#	endif



enum
{
    /* enums for column gmplsEncoding */
    gmplsEncoding_notGmpls_c = 0,
    gmplsEncoding_packet_c = 1,
    gmplsEncoding_ethernet_c = 2,
    gmplsEncoding_ansiEtsiPdh_c = 3,
    gmplsEncoding_sdhSonet_c = 5,
    gmplsEncoding_digitalWrapper_c = 7,
    gmplsEncoding_lambda_c = 8,
    gmplsEncoding_fiber_c = 9,
    gmplsEncoding_fiberChannel_c = 11,
    gmplsEncoding_digitalPath_c = 12,
    gmplsEncoding_opticalChannel_c = 13,
    gmplsEncoding_line_c = 14,

    /* enums for column gmplsSwitching */
    gmplsSwitching_unknown_c = 0,
    gmplsSwitching_psc1_c = 1,
    gmplsSwitching_psc2_c = 2,
    gmplsSwitching_psc3_c = 3,
    gmplsSwitching_psc4_c = 4,
    gmplsSwitching_evpl_c = 30,
    gmplsSwitching_pbb_c = 40,
    gmplsSwitching_l2sc_c = 51,
    gmplsSwitching_tdm_c = 100,
    gmplsSwitching_otntdm_c = 110,
    gmplsSwitching_dcsc_c = 125,
    gmplsSwitching_lsc_c = 150,
    gmplsSwitching_wsonlsc_c = 151,
    gmplsSwitching_fsc_c = 200,

    /* enums for column gmplsGPid */
    gmplsGPid_unknown_c = 0,
    gmplsGPid_asynchE4_c = 5,
    gmplsGPid_asynchDS3T3_c = 6,
    gmplsGPid_asynchE3_c = 7,
    gmplsGPid_bitsynchE3_c = 8,
    gmplsGPid_bytesynchE3_c = 9,
    gmplsGPid_asynchDS2T2_c = 10,
    gmplsGPid_bitsynchDS2T2_c = 11,
    gmplsGPid_reservedByRFC3471first_c = 12,
    gmplsGPid_asynchE1_c = 13,
    gmplsGPid_bytesynchE1_c = 14,
    gmplsGPid_bytesynch31ByDS0_c = 15,
    gmplsGPid_asynchDS1T1_c = 16,
    gmplsGPid_bitsynchDS1T1_c = 17,
    gmplsGPid_bytesynchDS1T1_c = 18,
    gmplsGPid_vc1vc12_c = 19,
    gmplsGPid_reservedByRFC3471second_c = 20,
    gmplsGPid_reservedByRFC3471third_c = 21,
    gmplsGPid_ds1SFAsynch_c = 22,
    gmplsGPid_ds1ESFAsynch_c = 23,
    gmplsGPid_ds3M23Asynch_c = 24,
    gmplsGPid_ds3CBitParityAsynch_c = 25,
    gmplsGPid_vtLovc_c = 26,
    gmplsGPid_stsSpeHovc_c = 27,
    gmplsGPid_posNoScramble16BitCrc_c = 28,
    gmplsGPid_posNoScramble32BitCrc_c = 29,
    gmplsGPid_posScramble16BitCrc_c = 30,
    gmplsGPid_posScramble32BitCrc_c = 31,
    gmplsGPid_atm_c = 32,
    gmplsGPid_ethernet_c = 33,
    gmplsGPid_sdhSonet_c = 34,
    gmplsGPid_digitalwrapper_c = 36,
    gmplsGPid_lambda_c = 37,
    gmplsGPid_ansiEtsiPdh_c = 38,
    gmplsGPid_lapsSdh_c = 40,
    gmplsGPid_fddi_c = 41,
    gmplsGPid_dqdb_c = 42,
    gmplsGPid_fiberChannel3_c = 43,
    gmplsGPid_hdlc_c = 44,
    gmplsGPid_ethernetV2DixOnly_c = 45,
    gmplsGPid_ethernet802dot3Only_c = 46,
    gmplsGPid_g709ODUj_c = 47,
    gmplsGPid_g709OTUk_c = 48,
    gmplsGPid_g709CBRorCBRa_c = 49,
    gmplsGPid_g709CBRb_c = 50,
    gmplsGPid_g709BSOT_c = 51,
    gmplsGPid_g709BSNT_c = 52,
    gmplsGPid_gfpIPorPPP_c = 53,
    gmplsGPid_gfpEthernetMAC_c = 54,
    gmplsGPid_gfpEthernetPHY_c = 55,
    gmplsGPid_g709ESCON_c = 56,
    gmplsGPid_g709FICON_c = 57,
    gmplsGPid_g709FiberChannel_c = 58,
    gmplsGPid_framedGFP_c = 59,
    gmplsGPid_sTM1_c = 60,
    gmplsGPid_sTM4_c = 61,
    gmplsGPid_infiniBand_c = 62,
    gmplsGPid_sDI_c = 63,
    gmplsGPid_sDI1point001_c = 64,
    gmplsGPid_dVBASI_c = 65,
    gmplsGPid_g709ODU125G_c = 66,
    gmplsGPid_g709ODUAny_c = 67,
    gmplsGPid_nullTest_c = 68,
    gmplsGPid_randomTest_c = 69,
    gmplsGPid_sixtyfourB66BGFPFEthernet_c = 70,

    /* enums for column gmplsAdminStatus */
    gmplsAdminStatus_reflect_c = 0,
    gmplsAdminStatus_reserved1_c = 1,
    gmplsAdminStatus_reserved2_c = 2,
    gmplsAdminStatus_reserved3_c = 3,
    gmplsAdminStatus_reserved4_c = 4,
    gmplsAdminStatus_reserved5_c = 5,
    gmplsAdminStatus_reserved6_c = 6,
    gmplsAdminStatus_reserved7_c = 7,
    gmplsAdminStatus_reserved8_c = 8,
    gmplsAdminStatus_reserved9_c = 9,
    gmplsAdminStatus_reserved10_c = 10,
    gmplsAdminStatus_reserved11_c = 11,
    gmplsAdminStatus_reserved12_c = 12,
    gmplsAdminStatus_reserved13_c = 13,
    gmplsAdminStatus_reserved14_c = 14,
    gmplsAdminStatus_reserved15_c = 15,
    gmplsAdminStatus_reserved16_c = 16,
    gmplsAdminStatus_reserved17_c = 17,
    gmplsAdminStatus_reserved18_c = 18,
    gmplsAdminStatus_reserved19_c = 19,
    gmplsAdminStatus_reserved20_c = 20,
    gmplsAdminStatus_reserved21_c = 21,
    gmplsAdminStatus_reserved22_c = 22,
    gmplsAdminStatus_oamFlowsEnabled_c = 23,
    gmplsAdminStatus_oamAlarmsEnabled_c = 24,
    gmplsAdminStatus_handover_c = 25,
    gmplsAdminStatus_lockout_c = 26,
    gmplsAdminStatus_inhibitAlarmCommunication_c = 27,
    gmplsAdminStatus_callControl_c = 28,
    gmplsAdminStatus_testing_c = 29,
    gmplsAdminStatus_administrativelyDown_c = 30,
    gmplsAdminStatus_deleteInProgress_c = 31,
};



#	ifdef __cplusplus
}
#	endif

#endif	// __IANA_GMPLS_H__
