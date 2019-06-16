/*
 *  Copyright (c) 2008-2018
 *      Nells.K.S <https://google.com/+NellsKS>
 *
 *  All rights reserved.
 */
//set ts=4 sw=4

#ifndef __IEEE802_H__
#	define __IEEE802_H__

#	ifdef __cplusplus
extern "C" {
#	endif



enum
{
	lsap_null_c                               = 0x00,
	lsap_llcSublayerMgtIndividual_c           = 0x02,
	lsap_llcSublayerMgtGroup_c                = 0x03,
	lsap_snaPathControlIndividual_c           = 0x04,
	lsap_snaPathControlGroup_c                = 0x05,
	lsap_dodIp_c                              = 0x06,
	lsap_prowayLan_c                          = 0x0E,
	lsap_texasInstrument_c                    = 0x18,
	lsap_ieee8021Stp_c                        = 0x42,
	lsap_eiaRs511_c                           = 0x4E,
	lsap_isiIp_c                              = 0x5E,
	lsap_iso8208_c                            = 0x7E,
	lsap_xeroxNetworkSystems_c                = 0x80,
	lsap_bacnetEthernet_c                     = 0x82,
	lsap_nestar_c                             = 0x86,
	lsap_prowayLanIec955_c                    = 0x8E,
	lsap_arp_c                                = 0x98,
	lsap_rde_c                                = 0xA6,
	lsap_snap_c                               = 0xAA,
	lsap_banyanVines_c                        = 0xBC,
	lsap_novellNetware_c                      = 0xE0,
	lsap_ibmNetbios_c                         = 0xF0,
	lsap_ibmLanManagementIndividual_c         = 0xF4,
	lsap_ibmLanManagementGroup_c              = 0xF5,
	lsap_ibmRemoteProgramLoad_c               = 0xF8,
	lsap_ungermannBass_c                      = 0xFA,
	lsap_isoClnsIs8473_c                      = 0xFE,
	lsap_globalDsap_c                         = 0xFF,
	
	etherType_ieee8023LengthMin_c                  = 0x0000,
	etherType_xeroxPup_c                           = 0x0200,
	etherType_pupAddrTrans1_c                      = 0x0201,
	etherType_nixdorf_c                            = 0x0400,
	etherType_ieee8023LengthMax_c                  = 0x05DC,
	etherType_xeroxNsIdp_c                         = 0x0600,
	etherType_dlog1_c                              = 0x0660,
	etherType_dlog2_c                              = 0x0661,
	etherType_ipv4_c                               = 0x0800,
	etherType_x75Internet_c                        = 0x0801,
	etherType_nbsInternet_c                        = 0x0802,
	etherType_ecmaInternet_c                       = 0x0803,
	etherType_chaosnet_c                           = 0x0804,
	etherType_x25Level3_c                          = 0x0805,
	etherType_arp_c                                = 0x0806,
	etherType_xnsCompatability_c                   = 0x0807,
	etherType_frameRelayArp_c                      = 0x0808,
	etherType_symbolicsPrivate1_c                  = 0x081C,
	etherType_xyplex1Min_c                         = 0x0888,
	etherType_xyplex1Max_c                         = 0x088A,
	etherType_ungermannBassNetDebugr_c             = 0x0900,
	etherType_xeroxIeee8023Pup_c                   = 0x0A00,
	etherType_pupAddrTrans2_c                      = 0x0A01,
	etherType_banyanVines_c                        = 0x0BAD,
	etherType_vinesLoopback_c                      = 0x0BAE,
	etherType_vinesEcho_c                          = 0x0BAF,
	etherType_berkeleyTrailerNego_c                = 0x1000,
	etherType_berkeleyTrailerEncapIpMin_c          = 0x1001,
	etherType_berkeleyTrailerEncapIpMax_c          = 0x100F,
	etherType_validSystems_c                       = 0x1600,
	etherType_trill_c                              = 0x22F3,
	etherType_l2IsIs_c                             = 0x22F4,
	etherType_pcsBasicBlockProtocol_c              = 0x4242,
	etherType_bbnSimnet_c                          = 0x5208,
	etherType_decUnassigned1_c                     = 0x6000,
	etherType_decMopDumpLoad_c                     = 0x6001,
	etherType_decMopRemoteConsole_c                = 0x6002,
	etherType_decDecnetPhaseIvRoute_c              = 0x6003,
	etherType_decLat_c                             = 0x6004,
	etherType_decDiagnosticProtocol_c              = 0x6005,
	etherType_decCustomerProtocol_c                = 0x6006,
	etherType_decLavcSca_c                         = 0x6007,
	etherType_decUnassigned2Min_c                  = 0x6008,
	etherType_decUnassigned2Max_c                  = 0x6009,
	etherType_3ComCorporationMin_c                 = 0x6010,
	etherType_3ComCorporationMax_c                 = 0x6014,
	etherType_transEtherBridging_c                 = 0x6558,
	etherType_rawFrameRelay_c                      = 0x6559,
	etherType_ungermannBassDownload_c              = 0x7000,
	etherType_ungermannBassDiaLoop_c               = 0x7002,
	etherType_lrtMin_c                             = 0x7020,
	etherType_lrtMax_c                             = 0x7029,
	etherType_proteon_c                            = 0x7030,
	etherType_cabletron_c                          = 0x7034,
	etherType_cronusVln_c                          = 0x8003,
	etherType_cronusDirect_c                       = 0x8004,
	etherType_hpProbe_c                            = 0x8005,
	etherType_nestar_c                             = 0x8006,
	etherType_att1_c                               = 0x8008,
	etherType_excelan_c                            = 0x8010,
	etherType_sgiDiagnostics_c                     = 0x8013,
	etherType_sgiNetworkGames_c                    = 0x8014,
	etherType_sgiReserved_c                        = 0x8015,
	etherType_sgiBounceServer_c                    = 0x8016,
	etherType_apolloDomain_c                       = 0x8019,
	etherType_tymshare_c                           = 0x802E,
	etherType_tiganInc_c                           = 0x802F,
	etherType_rarp_c                               = 0x8035,
	etherType_aeonicSystems_c                      = 0x8036,
	etherType_decLanbridge_c                       = 0x8038,
	etherType_decUnassigned3Min_c                  = 0x8039,
	etherType_decUnassigned3Max_c                  = 0x803C,
	etherType_decEthernetEncryption_c              = 0x803D,
	etherType_decUnassigned4_c                     = 0x803E,
	etherType_decLanTrafficMonitor_c               = 0x803F,
	etherType_decUnassigned5Min_c                  = 0x8040,
	etherType_decUnassigned5Max_c                  = 0x8042,
	etherType_planningResearchCorp_c               = 0x8044,
	etherType_att2_c                               = 0x8046,
	etherType_att3_c                               = 0x8047,
	etherType_experdata_c                          = 0x8049,
	etherType_stanfordVKernelExp_c                 = 0x805B,
	etherType_stanfordVKernelProd_c                = 0x805C,
	etherType_evansSutherland_c                    = 0x805D,
	etherType_littleMachines_c                     = 0x8060,
	etherType_counterpointComputers1_c             = 0x8062,
	etherType_univOfMassAmherst1_c                 = 0x8065,
	etherType_univOfMassAmherst2_c                 = 0x8066,
	etherType_veecoIntegratedAuto_c                = 0x8067,
	etherType_generalDynamics_c                    = 0x8068,
	etherType_att4_c                               = 0x8069,
	etherType_autophon_c                           = 0x806A,
	etherType_comdesign_c                          = 0x806C,
	etherType_computgraphicCorp_c                  = 0x806D,
	etherType_landmarkGraphicsCorpMin_c            = 0x806E,
	etherType_landmarkGraphicsCorpMax_c            = 0x8077,
	etherType_matra_c                              = 0x807A,
	etherType_danskDataElektronik_c                = 0x807B,
	etherType_meritInternodal_c                    = 0x807C,
	etherType_vitalinkCommunicationsMin_c          = 0x807D,
	etherType_vitalinkCommunicationsMax_c          = 0x807F,
	etherType_vitalinkTranslanIii_c                = 0x8080,
	etherType_counterpointComputers2Min_c          = 0x8081,
	etherType_counterpointComputers2Max_c          = 0x8083,
	etherType_appletalk_c                          = 0x809B,
	etherType_datability1Min_c                     = 0x809C,
	etherType_datability1Max_c                     = 0x809E,
	etherType_spiderSystemsLtd_c                   = 0x809F,
	etherType_nixdorfComputers_c                   = 0x80A3,
	etherType_siemensGammasonicsIncMin_c           = 0x80A4,
	etherType_siemensGammasonicsIncMax_c           = 0x80B3,
	etherType_dcaDataExchangeClusterMin_c          = 0x80C0,
	etherType_dcaDataExchangeClusterMax_c          = 0x80C3,
	etherType_banyanSystems1_c                     = 0x80C4,
	etherType_banyanSystems2_c                     = 0x80C5,
	etherType_pacerSoftware_c                      = 0x80C6,
	etherType_applitekCorporation_c                = 0x80C7,
	etherType_intergraphCorporationMin_c           = 0x80C8,
	etherType_intergraphCorporationMax_c           = 0x80CC,
	etherType_harrisCorporationMin_c               = 0x80CD,
	etherType_harrisCorporationMax_c               = 0x80CE,
	etherType_taylorInstrumentMin_c                = 0x80CF,
	etherType_taylorInstrumentMax_c                = 0x80D2,
	etherType_rosemountCorporationMin_c            = 0x80D3,
	etherType_rosemountCorporationMax_c            = 0x80D4,
	etherType_ibmSnaServiceOnEther_c               = 0x80D5,
	etherType_varianAssociates_c                   = 0x80DD,
	etherType_integratedSolutionsTrfsMin_c         = 0x80DE,
	etherType_integratedSolutionsTrfsMax_c         = 0x80DF,
	etherType_allenBradleyMin_c                    = 0x80E0,
	etherType_allenBradleyMax_c                    = 0x80E3,
	etherType_datability2Min_c                     = 0x80E4,
	etherType_datability2Max_c                     = 0x80F0,
	etherType_retix_c                              = 0x80F2,
	etherType_appletalkAarp_c                      = 0x80F3,
	etherType_kineticsMin_c                        = 0x80F4,
	etherType_kineticsMax_c                        = 0x80F5,
	etherType_apolloComputer_c                     = 0x80F7,
	etherType_wellfleetCommunications1_c           = 0x80FF,
	etherType_ieee8021QCTag_c                      = 0x8100,
	etherType_wellfleetCommunications2Min_c        = 0x8101,
	etherType_wellfleetCommunications2Max_c        = 0x8103,
	etherType_symbolicsPrivate2Min_c               = 0x8107,
	etherType_symbolicsPrivate2Max_c               = 0x8109,
	etherType_hayesMicrocomputers_c                = 0x8130,
	etherType_vgLaboratorySystems_c                = 0x8131,
	etherType_bridgeCommunicationsMin_c            = 0x8132,
	etherType_bridgeCommunicationsMax_c            = 0x8136,
	etherType_novellIncMin_c                       = 0x8137,
	etherType_novellIncMax_c                       = 0x8138,
	etherType_ktiMin_c                             = 0x8139,
	etherType_ktiMax_c                             = 0x813D,
	etherType_logicraft_c                          = 0x8148,
	etherType_networkComputingDevices_c            = 0x8149,
	etherType_alphaMicro_c                         = 0x814A,
	etherType_snmp_c                               = 0x814C,
	etherType_biin1_c                              = 0x814D,
	etherType_biin2_c                              = 0x814E,
	etherType_technicallyEliteConcept_c            = 0x814F,
	etherType_rationalCorp_c                       = 0x8150,
	etherType_qualcomm1Min_c                       = 0x8151,
	etherType_qualcomm1Max_c                       = 0x8153,
	etherType_computerProtocolPtyLtdMin_c          = 0x815C,
	etherType_computerProtocolPtyLtdMax_c          = 0x815E,
	etherType_charlesRiverDataSystem1Min_c         = 0x8164,
	etherType_charlesRiverDataSystem1Max_c         = 0x8166,
	etherType_xtp_c                                = 0x817D,
	etherType_sgiTimeWarnerProp_c                  = 0x817E,
	etherType_hippiFpEncapsulation_c               = 0x8180,
	etherType_stpHippiSt_c                         = 0x8181,
	etherType_reservedForHippi64001_c              = 0x8182,
	etherType_reservedForHippi64002_c              = 0x8183,
	etherType_siliconGraphicsPropMin_c             = 0x8184,
	etherType_siliconGraphicsPropMax_c             = 0x818C,
	etherType_motorolaComputer_c                   = 0x818D,
	etherType_qualcomm2Min_c                       = 0x819A,
	etherType_qualcomm2Max_c                       = 0x81A3,
	etherType_araiBunkichi_c                       = 0x81A4,
	etherType_radNetworkDevicesMin_c               = 0x81A5,
	etherType_radNetworkDevicesMax_c               = 0x81AE,
	etherType_xyplex2Min_c                         = 0x81B7,
	etherType_xyplex2Max_c                         = 0x81B9,
	etherType_apricotComputersMin_c                = 0x81CC,
	etherType_apricotComputersMax_c                = 0x81D5,
	etherType_artisoftMin_c                        = 0x81D6,
	etherType_artisoftMax_c                        = 0x81DD,
	etherType_polygonMin_c                         = 0x81E6,
	etherType_polygonMax_c                         = 0x81EF,
	etherType_comsatLabsMin_c                      = 0x81F0,
	etherType_comsatLabsMax_c                      = 0x81F2,
	etherType_saicMin_c                            = 0x81F3,
	etherType_saicMax_c                            = 0x81F5,
	etherType_vgAnalyticalMin_c                    = 0x81F6,
	etherType_vgAnalyticalMax_c                    = 0x81F8,
	etherType_quantumSoftwareMin_c                 = 0x8203,
	etherType_quantumSoftwareMax_c                 = 0x8205,
	etherType_ascomBankingSystemsMin_c             = 0x8221,
	etherType_ascomBankingSystemsMax_c             = 0x8222,
	etherType_advancedEncryptionSysteMin_c         = 0x823E,
	etherType_advancedEncryptionSysteMax_c         = 0x8240,
	etherType_charlesRiverDataSystem2Min_c         = 0x8263,
	etherType_charlesRiverDataSystem2Max_c         = 0x826A,
	etherType_athenaProgrammingMin_c               = 0x827F,
	etherType_athenaProgrammingMax_c               = 0x8282,
	etherType_instIndInfoTechMin_c                 = 0x829A,
	etherType_instIndInfoTechMax_c                 = 0x829B,
	etherType_taurusControlsMin_c                  = 0x829C,
	etherType_taurusControlsMax_c                  = 0x82AB,
	etherType_walkerRicherQuinnMin_c               = 0x82AC,
	etherType_walkerRicherQuinnMax_c               = 0x8693,
	etherType_ideaCourierMin_c                     = 0x8694,
	etherType_ideaCourierMax_c                     = 0x869D,
	etherType_computerNetworkTechMin_c             = 0x869E,
	etherType_computerNetworkTechMax_c             = 0x86A1,
	etherType_gatewayCommunicationsMin_c           = 0x86A3,
	etherType_gatewayCommunicationsMax_c           = 0x86AC,
	etherType_sectra_c                             = 0x86DB,
	etherType_ipv6_c                               = 0x86DD,
	etherType_deltaControls_c                      = 0x86DE,
	etherType_atomic_c                             = 0x86DF,
	etherType_landisGyrPowersMin_c                 = 0x86E0,
	etherType_landisGyrPowersMax_c                 = 0x86EF,
	etherType_motorolaMin_c                        = 0x8700,
	etherType_motorolaMax_c                        = 0x8710,
	etherType_tcpIpCompression_c                   = 0x876B,
	etherType_ipAutonomousSystems_c                = 0x876C,
	etherType_secureData_c                         = 0x876D,
	etherType_ieee8023Epon_c                       = 0x8808,
	etherType_ieee8023SlowProtocols_c              = 0x8809,
	etherType_ppp_c                                = 0x880B,
	etherType_gsmp_c                               = 0x880C,
	etherType_mpls_c                               = 0x8847,
	etherType_mplsUpstreamAssignedLabel_c          = 0x8848,
	etherType_mcap_c                               = 0x8861,
	etherType_pppoeDiscovery_c                     = 0x8863,
	etherType_pppoeSession_c                       = 0x8864,
	etherType_ieee8021X_c                          = 0x888E,
	etherType_ieee8021QSTag_c                      = 0x88A8,
	etherType_ieee802LocalExp1_c                   = 0x88B5,
	etherType_ieee802LocalExp2_c                   = 0x88B6,
	etherType_ieee802OuiExt_c                      = 0x88B7,
	etherType_ieee80211PreAuth_c                   = 0x88C7,
	etherType_ieee8021AbLldp_c                     = 0x88CC,
	etherType_ieee8021AeMacSec_c                   = 0x88E5,
	etherType_ieee8021QITag_c                      = 0x88E7,
	etherType_ieee8021QMvrp_c                      = 0x88F5,
	etherType_ieee8021QMmrp_c                      = 0x88F6,
	etherType_ieee80211R_c                         = 0x890D,
	etherType_ieee80221_c                          = 0x8917,
	etherType_ieee8021Qbe_c                        = 0x8929,
	etherType_trillFineGrainedLabeling_c           = 0x893B,
	etherType_ieee8021Qbg_c                        = 0x8940,
	etherType_trillRbridgeChannel_c                = 0x8946,
	etherType_geonetworkingEtsiEn30263641_c        = 0x8947,
	etherType_invisibleSoftwareMin_c               = 0x8A96,
	etherType_invisibleSoftwareMax_c               = 0x8A97,
	etherType_loopback_c                           = 0x9000,
	etherType_3ComBridgeXnsSysMgmt_c               = 0x9001,
	etherType_3ComBridgeTcpIpSys_c                 = 0x9002,
	etherType_3ComBridgeLoopDetect_c               = 0x9003,
	etherType_lowpanEncapsulation_c                = 0xA0ED,
	etherType_bbnVitalLanbridgeCache_c             = 0xFF00,
	etherType_iscBunkerRamoMin_c                   = 0xFF00,
	etherType_iscBunkerRamoMax_c                   = 0xFF0F,
	etherType_reserved_c                           = 0xFFFF,
	
	IeeeSlowProtocolsType_unused_c		= 0x00,
	IeeeSlowProtocolsType_lacp_c		= 0x01,
	IeeeSlowProtocolsType_marker_c		= 0x02,
	IeeeSlowProtocolsType_oam_c			= 0x03,
	IeeeSlowProtocolsType_ossp_c		= 0x0A,
	
	oui_cisco_c                              = 0x00000C,
	oui_fujitsu_c                            = 0x00000E,
	oui_next_c                               = 0x00000F,
	oui_sytek_c                              = 0x000010,
	oui_cabletron_c                          = 0x00001D,
	oui_diab_c                               = 0x000020,
	oui_visualTechnology_c                   = 0x000022,
	oui_trw_c                                = 0x00002A,
	oui_gptLimited_c                         = 0x000032,
	oui_sKoch_c                              = 0x00005A,
	oui_iana_c                               = 0x00005E,
	oui_netscoutSystemsInc1_c                = 0x000065,
	oui_mips_c                               = 0x00006B,
	oui_interphaseCorporation_c              = 0x000077,
	oui_ardent_c                             = 0x00007A,
	oui_crayCommunicationsAS_c               = 0x000080,
	oui_caymanSystemsGatorbox_c              = 0x000089,
	oui_proteon_c                            = 0x000093,
	oui_ameristarTechnology_c                = 0x00009F,
	oui_wellfleet_c                          = 0x0000A2,
	oui_networkApplicationTechnology_c       = 0x0000A3,
	oui_netscoutSystemsInc2_c                = 0x0000A6,
	oui_ncdXTerminals_c                      = 0x0000A7,
	oui_networkSystems_c                     = 0x0000A9,
	oui_xeroxXeroxMachines_c                 = 0x0000AA,
	oui_cimlinc_c                            = 0x0000B3,
	oui_doveFastnet_c                        = 0x0000B7,
	oui_allenBradley_c                       = 0x0000BC,
	oui_westernDigital_c                     = 0x0000C0,
	oui_farallonPhoneNetCard_c               = 0x0000C5,
	oui_hpIntelligentNetworksOperation_c     = 0x0000C6,
	oui_altos_c                              = 0x0000C8,
	oui_emulexTerminalServers_c              = 0x0000C9,
	oui_develcon_c                           = 0x0000D0,
	oui_dartmouthCollegeNedRouter_c          = 0x0000D7,
	oui_3ComNovellPs2_c                      = 0x0000D8,
	oui_gould_c                              = 0x0000DD,
	oui_unigraph_c                           = 0x0000DE,
	oui_acerCounterpoint_c                   = 0x0000E2,
	oui_alantec_c                            = 0x0000EF,
	oui_highLevelHardvareOrionUk_c           = 0x0000FD,
	oui_bbn1_c                               = 0x000102,
	oui_blazenet_c                           = 0x0010D1,
	oui_kabel_c                              = 0x001700,
	oui_cubix_c                              = 0x002094,
	oui_3Com_c                               = 0x0020AF,
	oui_victron_c                            = 0x0020C9,
	oui_imac_c                               = 0x00802B,
	oui_xylogicsInc_c                        = 0x00802D,
	oui_ericsson_c                           = 0x008037,
	oui_wyseTechnologyLinkTechnologies_c     = 0x008064,
	oui_netscoutSystemsInc3_c                = 0x00808C,
	oui_ieee8021Committee_c                  = 0x0080C2,
	oui_shiva_c                              = 0x0080D3,
	oui_atmForum_c                           = 0x00A03E,
	oui_intel_c                              = 0x00AA00,
	oui_ungermannBass1_c                     = 0x00DD00,
	oui_ungermannBass2_c                     = 0x00DD01,
	oui_bbn2_c                               = 0x020406,
	oui_racalInterlan_c                      = 0x020701,
	oui_satelcomMegapacUk_c                  = 0x026086,
	oui_3ComIbmPcImagenValidCisco_c          = 0x02608C,
	oui_cmcMasscompSiliconGraphicsPrimeExl_c = 0x02CF1F,
	oui_3ComBridge_c                         = 0x080002,
	oui_acc_c                                = 0x080003,
	oui_symbolics_c                          = 0x080005,
	oui_bbn3_c                               = 0x080008,
	oui_hewlettPackard_c                     = 0x080009,
	oui_nestarSystems_c                      = 0x08000A,
	oui_unisys_c                             = 0x08000B,
	oui_tektronixInc_c                       = 0x080011,
	oui_excelanBbnButterflyMasscompSiliconGraphics_c = 0x080014,
	oui_nsc_c                                = 0x080017,
	oui_dataGeneral1_c                       = 0x08001A,
	oui_dataGeneral2_c                       = 0x08001B,
	oui_apollo_c                             = 0x08001E,
	oui_sunMachines_c                        = 0x080020,
	oui_nbi_c                                = 0x080022,
	oui_cdc_c                                = 0x080025,
	oui_norskDataNord_c                      = 0x080026,
	oui_pcsComputerSystemsGmbh_c             = 0x080027,
	oui_tiExplorer_c                         = 0x080028,
	oui_dec_c                                = 0x08002B,
	oui_metaphor_c                           = 0x08002E,
	oui_primeComputer_c                      = 0x08002F,
	oui_intergraphCaeStations_c              = 0x080036,
	oui_fujiXerox_c                          = 0x080037,
	oui_bull_c                               = 0x080038,
	oui_spiderSystems_c                      = 0x080039,
	oui_dcaDigitalCommAssoc_c                = 0x080041,
	oui_xylogics_c                           = 0x080045,
	oui_sony_c                               = 0x080046,
	oui_sequent_c                            = 0x080047,
	oui_univation_c                          = 0x080049,
	oui_encore_c                             = 0x08004C,
	oui_bicc_c                               = 0x08004E,
	oui_stanfordUniversity_c                 = 0x080056,
	oui_decsystem20_c                        = 0x080058,
	oui_ibm_c                                = 0x08005A,
	oui_comdesign_c                          = 0x080067,
	oui_ridge_c                              = 0x080068,
	oui_siliconGraphics_c                    = 0x080069,
	oui_concurrentMasscomp_c                 = 0x08006E,
	oui_dde_c                                = 0x080075,
	oui_vitalinkTranslanIii_c                = 0x08007C,
	oui_xios_c                               = 0x080080,
	oui_imagenQms_c                          = 0x080086,
	oui_xyplexTerminalServers_c              = 0x080087,
	oui_kinetics_c                           = 0x080089,
	oui_pyramid_c                            = 0x08008B,
	oui_xyvisionMachines_c                   = 0x08008D,
	oui_retixIncBridges_c                    = 0x080090,
	oui_hds_c                                = 0x484453,
	oui_atT_c                                = 0x800010,
	oui_decObsolete1_c                       = 0xAA0000,
	oui_decObsolete2_c                       = 0xAA0001,
	oui_decObsolete3_c                       = 0xAA0002,
	oui_decGlobalPhysicalAddress_c           = 0xAA0003,
	oui_decLocalLogicalAddress_c             = 0xAA0004,
};



#	ifdef __cplusplus
}
#	endif

#endif	// __IEEE802_H__