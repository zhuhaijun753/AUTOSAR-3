/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: CanNm
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanNm_Cfg.h
 *   Generation Time: 2016-03-17 09:06:54
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/


#if !defined (CANNM_CFG_H)
# define CANNM_CFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_CSL_0779 */

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "ComStack_Types.h"
#include "NmStack_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define CANNM_NUMBER_OF_CANNM_CHANNELS        1U
/* Symbolic name defines for CanNmTxPdus */



/**
 * \defgroup CanNmHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define CanNmConf_CanNmTxPdu_msg_nm_MyECU_oCAN00_3abd61be           0
/**\} */

/* Symbolic name defines for CanNmTxUserDataPdus */



/* Symbolic name defines for CanNmRxPdus */



/**
 * \defgroup CanNmHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define CanNmConf_CanNmRxPdu_CAN00_CAN_17d0077e_RxPdu_2d241a48      0
/**\} */

/* Options */
#define CANNM_BUS_LOAD_REDUCTION_ENABLED                STD_OFF
#define CANNM_IMMEDIATE_TXCONF_ENABLED                  STD_OFF
#define CANNM_USER_DATA_ENABLED                         STD_OFF
#define CANNM_NODE_DETECTION_ENABLED                    STD_OFF
#define CANNM_NODE_ID_ENABLED                           STD_OFF
#define CANNM_PASSIVE_MODE_ENABLED                      STD_OFF
#define CANNM_VERSION_INFO_API                          STD_OFF
#define CANNM_DISABLE_TX_ERR_REPORT                     STD_OFF
#define CANNM_COM_CONTROL_ENABLED                       STD_OFF
#define CANNM_IMMEDIATE_RESTART_ENABLED                 STD_OFF
#define CANNM_PDU_RX_INDICATION_ENABLED                 STD_OFF
#define CANNM_STATE_CHANGE_IND_ENABLED                  STD_OFF
#define CANNM_REMOTE_SLEEP_IND_ENABLED                  STD_OFF
#define CANNM_BUS_SYNCHRONIZATION_ENABLED               STD_OFF
#define CANNM_REPEAT_MSG_IND_ENABLED                    STD_OFF
#define CANNM_COM_USER_DATA_SUPPORT                     STD_OFF
#define CANNM_COORDINATOR_SYNC_SUPPORT                  STD_OFF
#define CANNM_RUNTIME_MEASUREMENT_SUPPORT               STD_OFF
#define CANNM_PDUR_CANNM_TXCONFIRMATION                 STD_OFF
#define CANNM_CAR_WUP_RX_FEATURE_ENABLED                STD_OFF
#define CANNM_CAR_WUP_FILTER_FEATURE_ENABLED            STD_OFF
#define CANNM_IMMEDIATE_NM_TX_FEATURE_ENABLED           STD_OFF
#define CANNM_ACTIVE_WUP_BIT_FEATURE_ENABLED            STD_OFF
#define CANNM_PN_FEATURE_ENABLED                        STD_OFF
#define CANNM_PN_ERA_CALC_FEATURE_ENABLED               STD_OFF
#define CANNM_PN_EIRA_CALC_FEATURE_ENABLED              STD_OFF
#define CANNM_PN_TX_TIMEOUT_EXCEPTION_FEATURE_ENABLED   STD_OFF
#define CANNM_BUSNM_SPECIFIC_PDU_RX_INDICATION_ENABLED  STD_OFF
#define CANNM_ALLOW_TRIGGERED_MSG_TRANSMISSION          STD_OFF

/* Integration */


#define CANNM_EXPECTED_GENERATOR_COMPATIBILITY_VERSION  0x0600U


/* Invalid Channel Handle */
#define CANNM_INVALID_CHANNEL  0xFFu

/* Pdu CBV / NID Position Defines */
#define CANNM_PDU_OFF          0xFFu
#define CANNM_PDU_BYTE_0       0x00u
#define CANNM_PDU_BYTE_1       0x01u

/* PN Calculation */
#if ( CANNM_PN_EIRA_CALC_FEATURE_ENABLED == STD_ON ) || ( CANNM_PN_ERA_CALC_FEATURE_ENABLED == STD_ON )
# define CANNM_PN_CALC_FEATURE_ENABLED
# define CANNM_PN_CLUSTERS_PER_BYTE 8u
#endif

#if defined (CANNM_ISDEF_PNEIRACALCENABLED)
#else
# define CANNM_ISDEF_PNEIRACALCENABLED                     STD_ON
#endif

#if defined (CANNM_ISDEF_PNINFOLENGTH)
#else
# define CANNM_ISDEF_PNINFOLENGTH                          STD_ON
#endif

#define CANNM_CANIF_RANGE_CONFIG_DLC_CHECK
/**********************************************************************************************************************
    General Defines
**********************************************************************************************************************/
#ifndef CANNM_DEV_ERROR_DETECT
#define CANNM_DEV_ERROR_DETECT STD_ON
#endif
#ifndef CANNM_DEV_ERROR_REPORT
#define CANNM_DEV_ERROR_REPORT STD_ON
#endif
#ifndef CANNM_USE_DUMMY_FUNCTIONS
#define CANNM_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyFunction */
#endif
#ifndef CANNM_USE_DUMMY_STATEMENT
#define CANNM_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatement */
#endif
#ifndef CANNM_DUMMY_STATEMENT
#define CANNM_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CANNM_DUMMY_STATEMENT_CONST
#define CANNM_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CANNM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CANNM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef CANNM_ATOMIC_VARIABLE_ACCESS
#define CANNM_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef CANNM_PROCESSOR_CANOEEMU
#define CANNM_PROCESSOR_CANOEEMU
#endif
#ifndef CANNM_COMP_ANSI
#define CANNM_COMP_ANSI
#endif
#ifndef CANNM_GEN_GENERATOR_MSR
#define CANNM_GEN_GENERATOR_MSR
#endif
#ifndef CANNM_CPUTYPE_BITORDER_LSB2MSB
#define CANNM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/BitOrder */
#endif
#ifndef CANNM_CONFIGURATION_VARIANT_PRECOMPILE
#define CANNM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef CANNM_CONFIGURATION_VARIANT_LINKTIME
#define CANNM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef CANNM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define CANNM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef CANNM_CONFIGURATION_VARIANT
#define CANNM_CONFIGURATION_VARIANT CANNM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef CANNM_POSTBUILD_VARIANT_SUPPORT
#define CANNM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif
 

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanNmPCDataSwitches  CanNm Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANNM_CHANNELCONFIG                                           STD_ON
#define CANNM_ACTIVEWAKEUPBITENABLEDOFCHANNELCONFIG                   STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.ActiveWakeUpBitEnabled' Reason: 'ActiveWakeupBitFeature is disabled' */
#define CANNM_ALLMESSAGESKEEPAWAKEOFCHANNELCONFIG                     STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.AllMessagesKeepAwake' Reason: 'PN feature is disabled' */
#define CANNM_BUSLOADREDUCTIONACTIVEOFCHANNELCONFIG                   STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.BusLoadReductionActive' Reason: 'BusLoadReduction is disabled' */
#define CANNM_CARWAKEUPBITMASKOFCHANNELCONFIG                         STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.CarWakeUpBitMask' Reason: 'CarWupRx is disabled' */
#define CANNM_CARWAKEUPBYTEPOSITIONOFCHANNELCONFIG                    STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.CarWakeUpBytePosition' Reason: 'CarWupRx is disabled' */
#define CANNM_CARWAKEUPFILTERENABLEDOFCHANNELCONFIG                   STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.CarWakeUpFilterEnabled' Reason: 'CarWupFilterFeature is disabled' */
#define CANNM_CARWAKEUPFILTERNODEIDOFCHANNELCONFIG                    STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.CarWakeUpFilterNodeId' Reason: 'CarWupFilterFeature is disabled' */
#define CANNM_CARWAKEUPRXENABLEDOFCHANNELCONFIG                       STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.CarWakeUpRxEnabled' Reason: 'CarWupRx is disabled' */
#define CANNM_CHANNELIDOFCHANNELCONFIG                                STD_ON
#define CANNM_IMMEDIATENMCYCLETIMEOFCHANNELCONFIG                     STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.ImmediateNmCycleTime' Reason: 'ImmediateNmTxFeature is disabled' */
#define CANNM_IMMEDIATENMTRANSMISSIONSOFCHANNELCONFIG                 STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.ImmediateNmTransmissions' Reason: 'ImmediateNmTxFeature is disabled' */
#define CANNM_MSGCYCLETIMEOFCHANNELCONFIG                             STD_ON
#define CANNM_MSGTIMEOUTTIMEOFCHANNELCONFIG                           STD_ON
#define CANNM_PDUCBVPOSITIONOFCHANNELCONFIG                           STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.PduCbvPosition' Reason: '' */
#define CANNM_PDUNIDPOSITIONOFCHANNELCONFIG                           STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.PduNidPosition' Reason: '' */
#define CANNM_PNCALLTXTIMEOUTEXCEPTIONOFCHANNELCONFIG                 STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.PnCallTxTimeoutException' Reason: 'PN feature is disabled' */
#define CANNM_PNERACALCENABLEDOFCHANNELCONFIG                         STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.PnEraCalcEnabled' Reason: 'EraCalcFeature is disabled' */
#define CANNM_PNERARXPDUIDOFCHANNELCONFIG                             STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.PnEraRxPduId' Reason: 'EraCalcFeature is disabled' */
#define CANNM_PNHANDLEMULTIPLENETWORKREQUESTOFCHANNELCONFIG           STD_OFF  /**< Deactivateable: 'CanNm_ChannelConfig.PnHandleMultipleNetworkRequest' Reason: 'PN feature is disabled' */
#define CANNM_REMOTESLEEPINDTIMEOFCHANNELCONFIG                       STD_ON
#define CANNM_REPEATMESSAGETIMEOFCHANNELCONFIG                        STD_ON
#define CANNM_TIMEOUTTIMEOFCHANNELCONFIG                              STD_ON
#define CANNM_USERDATALENGTHOFCHANNELCONFIG                           STD_ON
#define CANNM_WAITBUSSLEEPTIMEOFCHANNELCONFIG                         STD_ON
#define CANNM_COMMSTATE                                               STD_ON
#define CANNM_COORDREADYTOSLEEPSTATE                                  STD_ON
#define CANNM_FINALMAGICNUMBER                                        STD_OFF  /**< Deactivateable: 'CanNm_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CANNM_GENERATORCOMPATIBILITYVERSION                           STD_OFF  /**< Deactivateable: 'CanNm_GeneratorCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define CANNM_IMMEDIATENMMSGCOUNT                                     STD_OFF  /**< Deactivateable: 'CanNm_ImmediateNmMsgCount' Reason: 'ImmediateNmTxFeature is disabled' */
#define CANNM_INITDATAHASHCODE                                        STD_OFF  /**< Deactivateable: 'CanNm_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CANNM_MODULEINITIALIZED                                       STD_ON
#define CANNM_MSGCONFIRMATIONFLAG                                     STD_ON
#define CANNM_MSGINDICATIONFLAG                                       STD_ON
#define CANNM_MSGREQUEST                                              STD_OFF  /**< Deactivateable: 'CanNm_MsgRequest' Reason: 'ComUserDataSupport is disabled' */
#define CANNM_MSGTIMEOUTTIMER                                         STD_ON
#define CANNM_MSGTIMER                                                STD_ON
#define CANNM_NETWORKRESTARTFLAG                                      STD_ON
#define CANNM_PBCHANNELCONFIG                                         STD_ON
#define CANNM_ALLOWTRIGGEREDMSGTRANSMISSIONOFPBCHANNELCONFIG          STD_OFF  /**< Deactivateable: 'CanNm_PbChannelConfig.AllowTriggeredMsgTransmission' Reason: 'Triggered Message Transmission is disabled' */
#define CANNM_MSGCYCLEOFFSETOFPBCHANNELCONFIG                         STD_ON
#define CANNM_MSGREDUCEDTIMEOFPBCHANNELCONFIG                         STD_OFF  /**< Deactivateable: 'CanNm_PbChannelConfig.MsgReducedTime' Reason: 'BusLoadReduction is disabled' */
#define CANNM_NODEIDOFPBCHANNELCONFIG                                 STD_OFF  /**< Deactivateable: 'CanNm_PbChannelConfig.NodeId' Reason: '' */
#define CANNM_PDULENGTHOFPBCHANNELCONFIG                              STD_ON
#define CANNM_PNCLUSTERREQEXTENDIDXOFPBCHANNELCONFIG                  STD_OFF  /**< Deactivateable: 'CanNm_PbChannelConfig.PnClusterReqExtEndIdx' Reason: 'EraCalcFeature is disabled' */
#define CANNM_PNCLUSTERREQEXTLENGTHOFPBCHANNELCONFIG                  STD_OFF  /**< Deactivateable: 'CanNm_PbChannelConfig.PnClusterReqExtLength' Reason: 'EraCalcFeature is disabled' */
#define CANNM_PNCLUSTERREQEXTSTARTIDXOFPBCHANNELCONFIG                STD_OFF  /**< Deactivateable: 'CanNm_PbChannelConfig.PnClusterReqExtStartIdx' Reason: 'EraCalcFeature is disabled' */
#define CANNM_PNCLUSTERREQEXTUSEDOFPBCHANNELCONFIG                    STD_OFF  /**< Deactivateable: 'CanNm_PbChannelConfig.PnClusterReqExtUsed' Reason: 'EraCalcFeature is disabled' */
#define CANNM_PNENABLEDOFPBCHANNELCONFIG                              STD_OFF  /**< Deactivateable: 'CanNm_PbChannelConfig.PnEnabled' Reason: '' */
#define CANNM_RXMESSAGEDATAENDIDXOFPBCHANNELCONFIG                    STD_OFF  /**< Deactivateable: 'CanNm_PbChannelConfig.RxMessageDataEndIdx' Reason: 'RxMessageDataBuffer is disabled' */
#define CANNM_RXMESSAGEDATALENGTHOFPBCHANNELCONFIG                    STD_OFF  /**< Deactivateable: 'CanNm_PbChannelConfig.RxMessageDataLength' Reason: 'RxMessageDataBuffer is disabled' */
#define CANNM_RXMESSAGEDATASTARTIDXOFPBCHANNELCONFIG                  STD_OFF  /**< Deactivateable: 'CanNm_PbChannelConfig.RxMessageDataStartIdx' Reason: 'RxMessageDataBuffer is disabled' */
#define CANNM_RXMESSAGEDATAUSEDOFPBCHANNELCONFIG                      STD_OFF  /**< Deactivateable: 'CanNm_PbChannelConfig.RxMessageDataUsed' Reason: 'RxMessageDataBuffer is disabled' */
#define CANNM_TXMESSAGEDATAENDIDXOFPBCHANNELCONFIG                    STD_ON
#define CANNM_TXMESSAGEDATALENGTHOFPBCHANNELCONFIG                    STD_ON
#define CANNM_TXMESSAGEDATASTARTIDXOFPBCHANNELCONFIG                  STD_ON
#define CANNM_TXMESSAGEDATAUSEDOFPBCHANNELCONFIG                      STD_ON
#define CANNM_TXPDUIDOFPBCHANNELCONFIG                                STD_ON
#define CANNM_TXUSERDATAPDUIDOFPBCHANNELCONFIG                        STD_OFF  /**< Deactivateable: 'CanNm_PbChannelConfig.TxUserDataPduId' Reason: 'ComUserDataSupport is disabled' */
#define CANNM_USERDATAPDUENDPOSOFPBCHANNELCONFIG                      STD_ON
#define CANNM_USERDATAPDUSTARTPOSOFPBCHANNELCONFIG                    STD_ON
#define CANNM_PDUIDTOCHINDEX                                          STD_OFF  /**< Deactivateable: 'CanNm_PduIdToChIndex' Reason: 'PB-S is not active or channel reference is invariant over all channels' */
#define CANNM_PNCLUSTERREQ                                            STD_OFF  /**< Deactivateable: 'CanNm_PnClusterReq' Reason: 'EiraCalcFeature is disabled' */
#define CANNM_PNCLUSTERREQEXT                                         STD_OFF  /**< Deactivateable: 'CanNm_PnClusterReqExt' Reason: 'EraCalcFeature is disabled' */
#define CANNM_PNCLUSTERREQEXTNEW                                      STD_OFF  /**< Deactivateable: 'CanNm_PnClusterReqExtNew' Reason: 'EraCalcFeature is disabled' */
#define CANNM_PNCLUSTERREQNEW                                         STD_OFF  /**< Deactivateable: 'CanNm_PnClusterReqNew' Reason: 'EiraCalcFeature is disabled' */
#define CANNM_PNCLUSTERRESETTIMER                                     STD_OFF  /**< Deactivateable: 'CanNm_PnClusterResetTimer' Reason: 'EiraCalcFeature is disabled' */
#define CANNM_PNCLUSTERRESETTIMEREXT                                  STD_OFF  /**< Deactivateable: 'CanNm_PnClusterResetTimerExt' Reason: 'EraCalcFeature is disabled' */
#define CANNM_PNEIRACALCENABLED                                       STD_OFF  /**< Deactivateable: 'CanNm_PnEiraCalcEnabled' Reason: 'ConfigVariant is Pre-Compile or EiraCalcFeature is disabled' */
#define CANNM_PNEIRARXPDUID                                           STD_OFF  /**< Deactivateable: 'CanNm_PnEiraRxPduId' Reason: 'EiraCalcFeature is disabled' */
#define CANNM_PNFILTERMASK                                            STD_OFF  /**< Deactivateable: 'CanNm_PnFilterMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define CANNM_PNINFOLENGTH                                            STD_OFF  /**< Deactivateable: 'CanNm_PnInfoLength' Reason: 'PN feature is disabled' */
#define CANNM_PNINFOOFFSET                                            STD_OFF  /**< Deactivateable: 'CanNm_PnInfoOffset' Reason: 'PN feature is disabled' */
#define CANNM_PNMESSAGEFILTERENABLED                                  STD_OFF  /**< Deactivateable: 'CanNm_PnMessageFilterEnabled' Reason: 'PN feature is disabled' */
#define CANNM_PNRESETTIME                                             STD_OFF  /**< Deactivateable: 'CanNm_PnResetTime' Reason: 'Neither EiraCalcFeature nor EraCalcFeature enabled' */
#define CANNM_REMOTESLEEPINDSTATE                                     STD_OFF  /**< Deactivateable: 'CanNm_RemoteSleepIndState' Reason: 'RemoteSleepIndEnabled is disabled' */
#define CANNM_REMOTESLEEPTIMER                                        STD_OFF  /**< Deactivateable: 'CanNm_RemoteSleepTimer' Reason: 'RemoteSleepIndEnabled is disabled' */
#define CANNM_REPEATMSGBITINDFLAG                                     STD_OFF  /**< Deactivateable: 'CanNm_RepeatMsgBitIndFlag' Reason: 'NodeDetection is disabled' */
#define CANNM_REPEATMSGREQFLAG                                        STD_OFF  /**< Deactivateable: 'CanNm_RepeatMsgReqFlag' Reason: 'NodeDetection is disabled' */
#define CANNM_REPEATMSGTIMER                                          STD_ON
#define CANNM_RXMESSAGEDATA                                           STD_OFF  /**< Deactivateable: 'CanNm_RxMessageData' Reason: 'RxMessageDataBuffer is disabled' */
#define CANNM_SIZEOFCHANNELCONFIG                                     STD_ON
#define CANNM_SIZEOFCOMMSTATE                                         STD_ON
#define CANNM_SIZEOFCOORDREADYTOSLEEPSTATE                            STD_ON
#define CANNM_SIZEOFMSGCONFIRMATIONFLAG                               STD_ON
#define CANNM_SIZEOFMSGINDICATIONFLAG                                 STD_ON
#define CANNM_SIZEOFMSGTIMEOUTTIMER                                   STD_ON
#define CANNM_SIZEOFMSGTIMER                                          STD_ON
#define CANNM_SIZEOFNETWORKRESTARTFLAG                                STD_ON
#define CANNM_SIZEOFPBCHANNELCONFIG                                   STD_ON
#define CANNM_SIZEOFREPEATMSGTIMER                                    STD_ON
#define CANNM_SIZEOFSYSTONMCHIND                                      STD_ON
#define CANNM_SIZEOFTIMEOUTTIMER                                      STD_ON
#define CANNM_SIZEOFTXCONTROLSTATE                                    STD_ON
#define CANNM_SIZEOFTXCONTROLSTATEREQUEST                             STD_ON
#define CANNM_SIZEOFTXMESSAGEDATA                                     STD_ON
#define CANNM_SIZEOFWAITBUSSLEEPTIMER                                 STD_ON
#define CANNM_SYSTONMCHIND                                            STD_ON
#define CANNM_TIMEOUTTIMER                                            STD_ON
#define CANNM_TXCONTROLSTATE                                          STD_ON
#define CANNM_TXCONTROLSTATEREQUEST                                   STD_ON
#define CANNM_TXMESSAGEDATA                                           STD_ON
#define CANNM_WAITBUSSLEEPTIMER                                       STD_ON
#define CANNM_PCCONFIG                                                STD_ON
#define CANNM_CHANNELCONFIGOFPCCONFIG                                 STD_ON
#define CANNM_COMMSTATEOFPCCONFIG                                     STD_ON
#define CANNM_COORDREADYTOSLEEPSTATEOFPCCONFIG                        STD_ON
#define CANNM_FINALMAGICNUMBEROFPCCONFIG                              STD_OFF  /**< Deactivateable: 'CanNm_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CANNM_GENERATORCOMPATIBILITYVERSIONOFPCCONFIG                 STD_OFF  /**< Deactivateable: 'CanNm_PCConfig.GeneratorCompatibilityVersion' Reason: 'Variant is not VARIANT-POST-BUILD-LOADABLE' */
#define CANNM_INITDATAHASHCODEOFPCCONFIG                              STD_OFF  /**< Deactivateable: 'CanNm_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CANNM_MODULEINITIALIZEDOFPCCONFIG                             STD_ON
#define CANNM_MSGCONFIRMATIONFLAGOFPCCONFIG                           STD_ON
#define CANNM_MSGINDICATIONFLAGOFPCCONFIG                             STD_ON
#define CANNM_MSGTIMEOUTTIMEROFPCCONFIG                               STD_ON
#define CANNM_MSGTIMEROFPCCONFIG                                      STD_ON
#define CANNM_NETWORKRESTARTFLAGOFPCCONFIG                            STD_ON
#define CANNM_PBCHANNELCONFIGOFPCCONFIG                               STD_ON
#define CANNM_PNEIRACALCENABLEDOFPCCONFIG                             STD_OFF  /**< Deactivateable: 'CanNm_PCConfig.PnEiraCalcEnabled' Reason: 'ConfigVariant is Pre-Compile or EiraCalcFeature is disabled' */
#define CANNM_PNEIRARXPDUIDOFPCCONFIG                                 STD_OFF  /**< Deactivateable: 'CanNm_PCConfig.PnEiraRxPduId' Reason: 'EiraCalcFeature is disabled' */
#define CANNM_PNINFOLENGTHOFPCCONFIG                                  STD_OFF  /**< Deactivateable: 'CanNm_PCConfig.PnInfoLength' Reason: 'PN feature is disabled' */
#define CANNM_PNINFOOFFSETOFPCCONFIG                                  STD_OFF  /**< Deactivateable: 'CanNm_PCConfig.PnInfoOffset' Reason: 'PN feature is disabled' */
#define CANNM_PNRESETTIMEOFPCCONFIG                                   STD_OFF  /**< Deactivateable: 'CanNm_PCConfig.PnResetTime' Reason: 'Neither EiraCalcFeature nor EraCalcFeature enabled' */
#define CANNM_REPEATMSGTIMEROFPCCONFIG                                STD_ON
#define CANNM_SIZEOFCHANNELCONFIGOFPCCONFIG                           STD_ON
#define CANNM_SIZEOFCOMMSTATEOFPCCONFIG                               STD_ON
#define CANNM_SIZEOFCOORDREADYTOSLEEPSTATEOFPCCONFIG                  STD_ON
#define CANNM_SIZEOFMSGCONFIRMATIONFLAGOFPCCONFIG                     STD_ON
#define CANNM_SIZEOFMSGINDICATIONFLAGOFPCCONFIG                       STD_ON
#define CANNM_SIZEOFMSGTIMEOUTTIMEROFPCCONFIG                         STD_ON
#define CANNM_SIZEOFMSGTIMEROFPCCONFIG                                STD_ON
#define CANNM_SIZEOFNETWORKRESTARTFLAGOFPCCONFIG                      STD_ON
#define CANNM_SIZEOFPBCHANNELCONFIGOFPCCONFIG                         STD_ON
#define CANNM_SIZEOFREPEATMSGTIMEROFPCCONFIG                          STD_ON
#define CANNM_SIZEOFSYSTONMCHINDOFPCCONFIG                            STD_ON
#define CANNM_SIZEOFTIMEOUTTIMEROFPCCONFIG                            STD_ON
#define CANNM_SIZEOFTXCONTROLSTATEOFPCCONFIG                          STD_ON
#define CANNM_SIZEOFTXCONTROLSTATEREQUESTOFPCCONFIG                   STD_ON
#define CANNM_SIZEOFTXMESSAGEDATAOFPCCONFIG                           STD_ON
#define CANNM_SIZEOFWAITBUSSLEEPTIMEROFPCCONFIG                       STD_ON
#define CANNM_SYSTONMCHINDOFPCCONFIG                                  STD_ON
#define CANNM_TIMEOUTTIMEROFPCCONFIG                                  STD_ON
#define CANNM_TXCONTROLSTATEOFPCCONFIG                                STD_ON
#define CANNM_TXCONTROLSTATEREQUESTOFPCCONFIG                         STD_ON
#define CANNM_TXMESSAGEDATAOFPCCONFIG                                 STD_ON
#define CANNM_WAITBUSSLEEPTIMEROFPCCONFIG                             STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCMinNumericValueDefines  CanNm Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define CANNM_MIN_COMMSTATE                                           0U
#define CANNM_MIN_COORDREADYTOSLEEPSTATE                              0U
#define CANNM_MIN_MSGTIMEOUTTIMER                                     0U
#define CANNM_MIN_MSGTIMER                                            0U
#define CANNM_MIN_NETWORKRESTARTFLAG                                  0U
#define CANNM_MIN_REPEATMSGTIMER                                      0U
#define CANNM_MIN_TIMEOUTTIMER                                        0U
#define CANNM_MIN_TXCONTROLSTATE                                      0U
#define CANNM_MIN_TXCONTROLSTATEREQUEST                               0U
#define CANNM_MIN_TXMESSAGEDATA                                       0U
#define CANNM_MIN_WAITBUSSLEEPTIMER                                   0U
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCMaxNumericValueDefines  CanNm Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define CANNM_MAX_COMMSTATE                                           255U
#define CANNM_MAX_COORDREADYTOSLEEPSTATE                              255U
#define CANNM_MAX_MSGTIMEOUTTIMER                                     65535U
#define CANNM_MAX_MSGTIMER                                            65535U
#define CANNM_MAX_NETWORKRESTARTFLAG                                  255U
#define CANNM_MAX_REPEATMSGTIMER                                      65535U
#define CANNM_MAX_TIMEOUTTIMER                                        65535U
#define CANNM_MAX_TXCONTROLSTATE                                      255U
#define CANNM_MAX_TXCONTROLSTATEREQUEST                               255U
#define CANNM_MAX_TXMESSAGEDATA                                       255U
#define CANNM_MAX_WAITBUSSLEEPTIMER                                   65535U
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCNoReferenceDefines  CanNm No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define CANNM_NO_TXMESSAGEDATAENDIDXOFPBCHANNELCONFIG                 255U
#define CANNM_NO_TXMESSAGEDATASTARTIDXOFPBCHANNELCONFIG               255U
#define CANNM_NO_TXPDUIDOFPBCHANNELCONFIG                             255U
#define CANNM_NO_SYSTONMCHIND                                         255U
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCIsReducedToDefineDefines  CanNm Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define CANNM_ISDEF_CHANNELIDOFCHANNELCONFIG                          STD_OFF
#define CANNM_ISDEF_MSGCYCLETIMEOFCHANNELCONFIG                       STD_OFF
#define CANNM_ISDEF_MSGTIMEOUTTIMEOFCHANNELCONFIG                     STD_OFF
#define CANNM_ISDEF_REMOTESLEEPINDTIMEOFCHANNELCONFIG                 STD_OFF
#define CANNM_ISDEF_REPEATMESSAGETIMEOFCHANNELCONFIG                  STD_OFF
#define CANNM_ISDEF_TIMEOUTTIMEOFCHANNELCONFIG                        STD_OFF
#define CANNM_ISDEF_USERDATALENGTHOFCHANNELCONFIG                     STD_OFF
#define CANNM_ISDEF_WAITBUSSLEEPTIMEOFCHANNELCONFIG                   STD_OFF
#define CANNM_ISDEF_MSGCYCLEOFFSETOFPBCHANNELCONFIG                   STD_OFF
#define CANNM_ISDEF_PDULENGTHOFPBCHANNELCONFIG                        STD_OFF
#define CANNM_ISDEF_TXMESSAGEDATAENDIDXOFPBCHANNELCONFIG              STD_OFF
#define CANNM_ISDEF_TXMESSAGEDATALENGTHOFPBCHANNELCONFIG              STD_OFF
#define CANNM_ISDEF_TXMESSAGEDATASTARTIDXOFPBCHANNELCONFIG            STD_OFF
#define CANNM_ISDEF_TXMESSAGEDATAUSEDOFPBCHANNELCONFIG                STD_OFF
#define CANNM_ISDEF_TXPDUIDOFPBCHANNELCONFIG                          STD_OFF
#define CANNM_ISDEF_USERDATAPDUENDPOSOFPBCHANNELCONFIG                STD_OFF
#define CANNM_ISDEF_USERDATAPDUSTARTPOSOFPBCHANNELCONFIG              STD_OFF
#define CANNM_ISDEF_SYSTONMCHIND                                      STD_OFF
#define CANNM_ISDEF_CHANNELCONFIGOFPCCONFIG                           STD_ON
#define CANNM_ISDEF_COMMSTATEOFPCCONFIG                               STD_ON
#define CANNM_ISDEF_COORDREADYTOSLEEPSTATEOFPCCONFIG                  STD_ON
#define CANNM_ISDEF_MODULEINITIALIZEDOFPCCONFIG                       STD_ON
#define CANNM_ISDEF_MSGCONFIRMATIONFLAGOFPCCONFIG                     STD_ON
#define CANNM_ISDEF_MSGINDICATIONFLAGOFPCCONFIG                       STD_ON
#define CANNM_ISDEF_MSGTIMEOUTTIMEROFPCCONFIG                         STD_ON
#define CANNM_ISDEF_MSGTIMEROFPCCONFIG                                STD_ON
#define CANNM_ISDEF_NETWORKRESTARTFLAGOFPCCONFIG                      STD_ON
#define CANNM_ISDEF_PBCHANNELCONFIGOFPCCONFIG                         STD_ON
#define CANNM_ISDEF_REPEATMSGTIMEROFPCCONFIG                          STD_ON
#define CANNM_ISDEF_SYSTONMCHINDOFPCCONFIG                            STD_ON
#define CANNM_ISDEF_TIMEOUTTIMEROFPCCONFIG                            STD_ON
#define CANNM_ISDEF_TXCONTROLSTATEOFPCCONFIG                          STD_ON
#define CANNM_ISDEF_TXCONTROLSTATEREQUESTOFPCCONFIG                   STD_ON
#define CANNM_ISDEF_TXMESSAGEDATAOFPCCONFIG                           STD_ON
#define CANNM_ISDEF_WAITBUSSLEEPTIMEROFPCCONFIG                       STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCEqualsAlwaysToDefines  CanNm Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define CANNM_EQ2_CHANNELIDOFCHANNELCONFIG                            
#define CANNM_EQ2_MSGCYCLETIMEOFCHANNELCONFIG                         
#define CANNM_EQ2_MSGTIMEOUTTIMEOFCHANNELCONFIG                       
#define CANNM_EQ2_REMOTESLEEPINDTIMEOFCHANNELCONFIG                   
#define CANNM_EQ2_REPEATMESSAGETIMEOFCHANNELCONFIG                    
#define CANNM_EQ2_TIMEOUTTIMEOFCHANNELCONFIG                          
#define CANNM_EQ2_USERDATALENGTHOFCHANNELCONFIG                       
#define CANNM_EQ2_WAITBUSSLEEPTIMEOFCHANNELCONFIG                     
#define CANNM_EQ2_MSGCYCLEOFFSETOFPBCHANNELCONFIG                     
#define CANNM_EQ2_PDULENGTHOFPBCHANNELCONFIG                          
#define CANNM_EQ2_TXMESSAGEDATAENDIDXOFPBCHANNELCONFIG                
#define CANNM_EQ2_TXMESSAGEDATALENGTHOFPBCHANNELCONFIG                
#define CANNM_EQ2_TXMESSAGEDATASTARTIDXOFPBCHANNELCONFIG              
#define CANNM_EQ2_TXMESSAGEDATAUSEDOFPBCHANNELCONFIG                  
#define CANNM_EQ2_TXPDUIDOFPBCHANNELCONFIG                            
#define CANNM_EQ2_USERDATAPDUENDPOSOFPBCHANNELCONFIG                  
#define CANNM_EQ2_USERDATAPDUSTARTPOSOFPBCHANNELCONFIG                
#define CANNM_EQ2_SYSTONMCHIND                                        
#define CANNM_EQ2_CHANNELCONFIGOFPCCONFIG                             CanNm_ChannelConfig
#define CANNM_EQ2_COMMSTATEOFPCCONFIG                                 CanNm_CommState.raw
#define CANNM_EQ2_COORDREADYTOSLEEPSTATEOFPCCONFIG                    CanNm_CoordReadyToSleepState.raw
#define CANNM_EQ2_MODULEINITIALIZEDOFPCCONFIG                         CanNm_ModuleInitialized
#define CANNM_EQ2_MSGCONFIRMATIONFLAGOFPCCONFIG                       CanNm_MsgConfirmationFlag.raw
#define CANNM_EQ2_MSGINDICATIONFLAGOFPCCONFIG                         CanNm_MsgIndicationFlag.raw
#define CANNM_EQ2_MSGTIMEOUTTIMEROFPCCONFIG                           CanNm_MsgTimeoutTimer.raw
#define CANNM_EQ2_MSGTIMEROFPCCONFIG                                  CanNm_MsgTimer.raw
#define CANNM_EQ2_NETWORKRESTARTFLAGOFPCCONFIG                        CanNm_NetworkRestartFlag.raw
#define CANNM_EQ2_PBCHANNELCONFIGOFPCCONFIG                           CanNm_PbChannelConfig
#define CANNM_EQ2_REPEATMSGTIMEROFPCCONFIG                            CanNm_RepeatMsgTimer.raw
#define CANNM_EQ2_SYSTONMCHINDOFPCCONFIG                              CanNm_SysToNmChInd
#define CANNM_EQ2_TIMEOUTTIMEROFPCCONFIG                              CanNm_TimeoutTimer.raw
#define CANNM_EQ2_TXCONTROLSTATEOFPCCONFIG                            CanNm_TxControlState.raw
#define CANNM_EQ2_TXCONTROLSTATEREQUESTOFPCCONFIG                     CanNm_TxControlStateRequest.raw
#define CANNM_EQ2_TXMESSAGEDATAOFPCCONFIG                             CanNm_TxMessageData.raw
#define CANNM_EQ2_WAITBUSSLEEPTIMEROFPCCONFIG                         CanNm_WaitBusSleepTimer.raw
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCSymbolicInitializationPointers  CanNm Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define CanNm_Config_Ptr                                              NULL_PTR  /**< symbolic identifier which shall be used to initialize 'CanNm' */
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCInitializationSymbols  CanNm Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define CanNm_Config                                                  NULL_PTR  /**< symbolic identifier which could be used to initialize 'CanNm */
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCGeneral  CanNm General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define CANNM_CHECK_INIT_POINTER                                      STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define CANNM_FINAL_MAGIC_NUMBER                                      0x1F1EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of CanNm */
#define CANNM_INDIVIDUAL_POSTBUILD                                    STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'CanNm' is not configured to be postbuild capable. */
#define CANNM_INIT_DATA                                               CANNM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define CANNM_INIT_DATA_HASH_CODE                                     -1574694752L  /**< the precompile constant to validate the initialization structure at initialization time of CanNm with a hashcode. The seed value is '0x1F1EU' */
#define CANNM_USE_ECUM_BSW_ERROR_HOOK                                 STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define CANNM_USE_INIT_POINTER                                        STD_OFF  /**< STD_ON if the init pointer CanNm shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanNmPBDataSwitches  CanNm Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CANNM_PBCONFIG                                                STD_OFF  /**< Deactivateable: 'CanNm_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANNM_LTCONFIGIDXOFPBCONFIG                                   STD_OFF  /**< Deactivateable: 'CanNm_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CANNM_PCCONFIGIDXOFPBCONFIG                                   STD_OFF  /**< Deactivateable: 'CanNm_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanNmPCGetConstantDuplicatedRootDataMacros  CanNm Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define CanNm_GetChannelConfigOfPCConfig()                            CanNm_ChannelConfig  /**< the pointer to CanNm_ChannelConfig */
#define CanNm_GetCommStateOfPCConfig()                                CanNm_CommState.raw  /**< the pointer to CanNm_CommState */
#define CanNm_GetCoordReadyToSleepStateOfPCConfig()                   CanNm_CoordReadyToSleepState.raw  /**< the pointer to CanNm_CoordReadyToSleepState */
#define CanNm_GetModuleInitializedOfPCConfig()                        CanNm_ModuleInitialized  /**< the pointer to CanNm_ModuleInitialized */
#define CanNm_GetMsgConfirmationFlagOfPCConfig()                      CanNm_MsgConfirmationFlag.raw  /**< the pointer to CanNm_MsgConfirmationFlag */
#define CanNm_GetMsgIndicationFlagOfPCConfig()                        CanNm_MsgIndicationFlag.raw  /**< the pointer to CanNm_MsgIndicationFlag */
#define CanNm_GetMsgTimeoutTimerOfPCConfig()                          CanNm_MsgTimeoutTimer.raw  /**< the pointer to CanNm_MsgTimeoutTimer */
#define CanNm_GetMsgTimerOfPCConfig()                                 CanNm_MsgTimer.raw  /**< the pointer to CanNm_MsgTimer */
#define CanNm_GetNetworkRestartFlagOfPCConfig()                       CanNm_NetworkRestartFlag.raw  /**< the pointer to CanNm_NetworkRestartFlag */
#define CanNm_GetPbChannelConfigOfPCConfig()                          CanNm_PbChannelConfig  /**< the pointer to CanNm_PbChannelConfig */
#define CanNm_GetRepeatMsgTimerOfPCConfig()                           CanNm_RepeatMsgTimer.raw  /**< the pointer to CanNm_RepeatMsgTimer */
#define CanNm_GetSizeOfChannelConfigOfPCConfig()                      1U  /**< the number of accomplishable value elements in CanNm_ChannelConfig */
#define CanNm_GetSizeOfPbChannelConfigOfPCConfig()                    1U  /**< the number of accomplishable value elements in CanNm_PbChannelConfig */
#define CanNm_GetSizeOfSysToNmChIndOfPCConfig()                       1U  /**< the number of accomplishable value elements in CanNm_SysToNmChInd */
#define CanNm_GetSizeOfTxMessageDataOfPCConfig()                      8U  /**< the number of accomplishable value elements in CanNm_TxMessageData */
#define CanNm_GetSysToNmChIndOfPCConfig()                             CanNm_SysToNmChInd  /**< the pointer to CanNm_SysToNmChInd */
#define CanNm_GetTimeoutTimerOfPCConfig()                             CanNm_TimeoutTimer.raw  /**< the pointer to CanNm_TimeoutTimer */
#define CanNm_GetTxControlStateOfPCConfig()                           CanNm_TxControlState.raw  /**< the pointer to CanNm_TxControlState */
#define CanNm_GetTxControlStateRequestOfPCConfig()                    CanNm_TxControlStateRequest.raw  /**< the pointer to CanNm_TxControlStateRequest */
#define CanNm_GetTxMessageDataOfPCConfig()                            CanNm_TxMessageData.raw  /**< the pointer to CanNm_TxMessageData */
#define CanNm_GetWaitBusSleepTimerOfPCConfig()                        CanNm_WaitBusSleepTimer.raw  /**< the pointer to CanNm_WaitBusSleepTimer */
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCGetDuplicatedRootDataMacros  CanNm Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define CanNm_GetSizeOfCommStateOfPCConfig()                          CanNm_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in CanNm_CommState */
#define CanNm_GetSizeOfCoordReadyToSleepStateOfPCConfig()             CanNm_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in CanNm_CoordReadyToSleepState */
#define CanNm_GetSizeOfMsgConfirmationFlagOfPCConfig()                CanNm_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in CanNm_MsgConfirmationFlag */
#define CanNm_GetSizeOfMsgIndicationFlagOfPCConfig()                  CanNm_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in CanNm_MsgIndicationFlag */
#define CanNm_GetSizeOfMsgTimeoutTimerOfPCConfig()                    CanNm_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in CanNm_MsgTimeoutTimer */
#define CanNm_GetSizeOfMsgTimerOfPCConfig()                           CanNm_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in CanNm_MsgTimer */
#define CanNm_GetSizeOfNetworkRestartFlagOfPCConfig()                 CanNm_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in CanNm_NetworkRestartFlag */
#define CanNm_GetSizeOfRepeatMsgTimerOfPCConfig()                     CanNm_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in CanNm_RepeatMsgTimer */
#define CanNm_GetSizeOfTimeoutTimerOfPCConfig()                       CanNm_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in CanNm_TimeoutTimer */
#define CanNm_GetSizeOfTxControlStateOfPCConfig()                     CanNm_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in CanNm_TxControlState */
#define CanNm_GetSizeOfTxControlStateRequestOfPCConfig()              CanNm_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in CanNm_TxControlStateRequest */
#define CanNm_GetSizeOfWaitBusSleepTimerOfPCConfig()                  CanNm_GetSizeOfChannelConfigOfPCConfig()  /**< the number of accomplishable value elements in CanNm_WaitBusSleepTimer */
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCGetDataMacros  CanNm Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define CanNm_GetChannelIdOfChannelConfig(Index)                      ((NetworkHandleType)CanNm_GetChannelConfigOfPCConfig()[(Index)].ChannelIdOfChannelConfig)
#define CanNm_GetMsgCycleTimeOfChannelConfig(Index)                   (CanNm_GetChannelConfigOfPCConfig()[(Index)].MsgCycleTimeOfChannelConfig)
#define CanNm_GetMsgTimeoutTimeOfChannelConfig(Index)                 (CanNm_GetChannelConfigOfPCConfig()[(Index)].MsgTimeoutTimeOfChannelConfig)
#define CanNm_GetRemoteSleepIndTimeOfChannelConfig(Index)             (CanNm_GetChannelConfigOfPCConfig()[(Index)].RemoteSleepIndTimeOfChannelConfig)
#define CanNm_GetRepeatMessageTimeOfChannelConfig(Index)              (CanNm_GetChannelConfigOfPCConfig()[(Index)].RepeatMessageTimeOfChannelConfig)
#define CanNm_GetTimeoutTimeOfChannelConfig(Index)                    (CanNm_GetChannelConfigOfPCConfig()[(Index)].TimeoutTimeOfChannelConfig)
#define CanNm_GetUserDataLengthOfChannelConfig(Index)                 (CanNm_GetChannelConfigOfPCConfig()[(Index)].UserDataLengthOfChannelConfig)
#define CanNm_GetWaitBusSleepTimeOfChannelConfig(Index)               (CanNm_GetChannelConfigOfPCConfig()[(Index)].WaitBusSleepTimeOfChannelConfig)
#define CanNm_GetCommState(Index)                                     (CanNm_GetCommStateOfPCConfig()[(Index)])
#define CanNm_GetCoordReadyToSleepState(Index)                        (CanNm_GetCoordReadyToSleepStateOfPCConfig()[(Index)])
#define CanNm_IsModuleInitialized()                                   ((CanNm_GetModuleInitializedOfPCConfig()) != FALSE)
#define CanNm_IsMsgConfirmationFlag(Index)                            ((CanNm_GetMsgConfirmationFlagOfPCConfig()[(Index)]) != FALSE)
#define CanNm_IsMsgIndicationFlag(Index)                              ((CanNm_GetMsgIndicationFlagOfPCConfig()[(Index)]) != FALSE)
#define CanNm_GetMsgTimeoutTimer(Index)                               (CanNm_GetMsgTimeoutTimerOfPCConfig()[(Index)])
#define CanNm_GetMsgTimer(Index)                                      (CanNm_GetMsgTimerOfPCConfig()[(Index)])
#define CanNm_GetNetworkRestartFlag(Index)                            (CanNm_GetNetworkRestartFlagOfPCConfig()[(Index)])
#define CanNm_GetMsgCycleOffsetOfPbChannelConfig(Index)               (CanNm_GetPbChannelConfigOfPCConfig()[(Index)].MsgCycleOffsetOfPbChannelConfig)
#define CanNm_GetPduLengthOfPbChannelConfig(Index)                    (CanNm_GetPbChannelConfigOfPCConfig()[(Index)].PduLengthOfPbChannelConfig)
#define CanNm_GetTxMessageDataEndIdxOfPbChannelConfig(Index)          (CanNm_GetPbChannelConfigOfPCConfig()[(Index)].TxMessageDataEndIdxOfPbChannelConfig)
#define CanNm_GetTxMessageDataLengthOfPbChannelConfig(Index)          (CanNm_GetPbChannelConfigOfPCConfig()[(Index)].TxMessageDataLengthOfPbChannelConfig)
#define CanNm_GetTxMessageDataStartIdxOfPbChannelConfig(Index)        (CanNm_GetPbChannelConfigOfPCConfig()[(Index)].TxMessageDataStartIdxOfPbChannelConfig)
#define CanNm_GetTxPduIdOfPbChannelConfig(Index)                      (CanNm_GetPbChannelConfigOfPCConfig()[(Index)].TxPduIdOfPbChannelConfig)
#define CanNm_GetUserDataPduEndPosOfPbChannelConfig(Index)            (CanNm_GetPbChannelConfigOfPCConfig()[(Index)].UserDataPduEndPosOfPbChannelConfig)
#define CanNm_GetUserDataPduStartPosOfPbChannelConfig(Index)          (CanNm_GetPbChannelConfigOfPCConfig()[(Index)].UserDataPduStartPosOfPbChannelConfig)
#define CanNm_GetRepeatMsgTimer(Index)                                (CanNm_GetRepeatMsgTimerOfPCConfig()[(Index)])
#define CanNm_GetSysToNmChInd(Index)                                  (CanNm_GetSysToNmChIndOfPCConfig()[(Index)])
#define CanNm_GetTimeoutTimer(Index)                                  (CanNm_GetTimeoutTimerOfPCConfig()[(Index)])
#define CanNm_GetTxControlState(Index)                                (CanNm_GetTxControlStateOfPCConfig()[(Index)])
#define CanNm_GetTxControlStateRequest(Index)                         (CanNm_GetTxControlStateRequestOfPCConfig()[(Index)])
#define CanNm_GetTxMessageData(Index)                                 (CanNm_GetTxMessageDataOfPCConfig()[(Index)])
#define CanNm_GetWaitBusSleepTimer(Index)                             (CanNm_GetWaitBusSleepTimerOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCGetDeduplicatedDataMacros  CanNm Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define CanNm_IsTxMessageDataUsedOfPbChannelConfig(Index)             (((boolean)(CanNm_GetTxMessageDataLengthOfPbChannelConfig(Index) != 0)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to CanNm_TxMessageData */
#define CanNm_GetSizeOfChannelConfig()                                CanNm_GetSizeOfChannelConfigOfPCConfig()
#define CanNm_GetSizeOfCommState()                                    CanNm_GetSizeOfCommStateOfPCConfig()
#define CanNm_GetSizeOfCoordReadyToSleepState()                       CanNm_GetSizeOfCoordReadyToSleepStateOfPCConfig()
#define CanNm_GetSizeOfMsgConfirmationFlag()                          CanNm_GetSizeOfMsgConfirmationFlagOfPCConfig()
#define CanNm_GetSizeOfMsgIndicationFlag()                            CanNm_GetSizeOfMsgIndicationFlagOfPCConfig()
#define CanNm_GetSizeOfMsgTimeoutTimer()                              CanNm_GetSizeOfMsgTimeoutTimerOfPCConfig()
#define CanNm_GetSizeOfMsgTimer()                                     CanNm_GetSizeOfMsgTimerOfPCConfig()
#define CanNm_GetSizeOfNetworkRestartFlag()                           CanNm_GetSizeOfNetworkRestartFlagOfPCConfig()
#define CanNm_GetSizeOfPbChannelConfig()                              CanNm_GetSizeOfPbChannelConfigOfPCConfig()
#define CanNm_GetSizeOfRepeatMsgTimer()                               CanNm_GetSizeOfRepeatMsgTimerOfPCConfig()
#define CanNm_GetSizeOfSysToNmChInd()                                 CanNm_GetSizeOfSysToNmChIndOfPCConfig()
#define CanNm_GetSizeOfTimeoutTimer()                                 CanNm_GetSizeOfTimeoutTimerOfPCConfig()
#define CanNm_GetSizeOfTxControlState()                               CanNm_GetSizeOfTxControlStateOfPCConfig()
#define CanNm_GetSizeOfTxControlStateRequest()                        CanNm_GetSizeOfTxControlStateRequestOfPCConfig()
#define CanNm_GetSizeOfTxMessageData()                                CanNm_GetSizeOfTxMessageDataOfPCConfig()
#define CanNm_GetSizeOfWaitBusSleepTimer()                            CanNm_GetSizeOfWaitBusSleepTimerOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCSetDataMacros  CanNm Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define CanNm_SetCommState(Index, Value)                              CanNm_GetCommStateOfPCConfig()[(Index)] = (Value)
#define CanNm_SetCoordReadyToSleepState(Index, Value)                 CanNm_GetCoordReadyToSleepStateOfPCConfig()[(Index)] = (Value)
#define CanNm_SetModuleInitialized(Value)                             CanNm_GetModuleInitializedOfPCConfig() = (Value)
#define CanNm_SetMsgConfirmationFlag(Index, Value)                    CanNm_GetMsgConfirmationFlagOfPCConfig()[(Index)] = (Value)
#define CanNm_SetMsgIndicationFlag(Index, Value)                      CanNm_GetMsgIndicationFlagOfPCConfig()[(Index)] = (Value)
#define CanNm_SetMsgTimeoutTimer(Index, Value)                        CanNm_GetMsgTimeoutTimerOfPCConfig()[(Index)] = (Value)
#define CanNm_SetMsgTimer(Index, Value)                               CanNm_GetMsgTimerOfPCConfig()[(Index)] = (Value)
#define CanNm_SetNetworkRestartFlag(Index, Value)                     CanNm_GetNetworkRestartFlagOfPCConfig()[(Index)] = (Value)
#define CanNm_SetRepeatMsgTimer(Index, Value)                         CanNm_GetRepeatMsgTimerOfPCConfig()[(Index)] = (Value)
#define CanNm_SetTimeoutTimer(Index, Value)                           CanNm_GetTimeoutTimerOfPCConfig()[(Index)] = (Value)
#define CanNm_SetTxControlState(Index, Value)                         CanNm_GetTxControlStateOfPCConfig()[(Index)] = (Value)
#define CanNm_SetTxControlStateRequest(Index, Value)                  CanNm_GetTxControlStateRequestOfPCConfig()[(Index)] = (Value)
#define CanNm_SetTxMessageData(Index, Value)                          CanNm_GetTxMessageDataOfPCConfig()[(Index)] = (Value)
#define CanNm_SetWaitBusSleepTimer(Index, Value)                      CanNm_GetWaitBusSleepTimerOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCGetAddressOfDataMacros  CanNm Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define CanNm_GetAddrTxMessageData(Index)                             &CanNm_GetTxMessageData(Index)
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCHasMacros  CanNm Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define CanNm_HasChannelConfig()                                      (TRUE != FALSE)
#define CanNm_HasChannelIdOfChannelConfig()                           (TRUE != FALSE)
#define CanNm_HasMsgCycleTimeOfChannelConfig()                        (TRUE != FALSE)
#define CanNm_HasMsgTimeoutTimeOfChannelConfig()                      (TRUE != FALSE)
#define CanNm_HasRemoteSleepIndTimeOfChannelConfig()                  (TRUE != FALSE)
#define CanNm_HasRepeatMessageTimeOfChannelConfig()                   (TRUE != FALSE)
#define CanNm_HasTimeoutTimeOfChannelConfig()                         (TRUE != FALSE)
#define CanNm_HasUserDataLengthOfChannelConfig()                      (TRUE != FALSE)
#define CanNm_HasWaitBusSleepTimeOfChannelConfig()                    (TRUE != FALSE)
#define CanNm_HasCommState()                                          (TRUE != FALSE)
#define CanNm_HasCoordReadyToSleepState()                             (TRUE != FALSE)
#define CanNm_HasModuleInitialized()                                  (TRUE != FALSE)
#define CanNm_HasMsgConfirmationFlag()                                (TRUE != FALSE)
#define CanNm_HasMsgIndicationFlag()                                  (TRUE != FALSE)
#define CanNm_HasMsgTimeoutTimer()                                    (TRUE != FALSE)
#define CanNm_HasMsgTimer()                                           (TRUE != FALSE)
#define CanNm_HasNetworkRestartFlag()                                 (TRUE != FALSE)
#define CanNm_HasPbChannelConfig()                                    (TRUE != FALSE)
#define CanNm_HasMsgCycleOffsetOfPbChannelConfig()                    (TRUE != FALSE)
#define CanNm_HasPduLengthOfPbChannelConfig()                         (TRUE != FALSE)
#define CanNm_HasTxMessageDataEndIdxOfPbChannelConfig()               (TRUE != FALSE)
#define CanNm_HasTxMessageDataLengthOfPbChannelConfig()               (TRUE != FALSE)
#define CanNm_HasTxMessageDataStartIdxOfPbChannelConfig()             (TRUE != FALSE)
#define CanNm_HasTxMessageDataUsedOfPbChannelConfig()                 (TRUE != FALSE)
#define CanNm_HasTxPduIdOfPbChannelConfig()                           (TRUE != FALSE)
#define CanNm_HasUserDataPduEndPosOfPbChannelConfig()                 (TRUE != FALSE)
#define CanNm_HasUserDataPduStartPosOfPbChannelConfig()               (TRUE != FALSE)
#define CanNm_HasRepeatMsgTimer()                                     (TRUE != FALSE)
#define CanNm_HasSizeOfChannelConfig()                                (TRUE != FALSE)
#define CanNm_HasSizeOfCommState()                                    (TRUE != FALSE)
#define CanNm_HasSizeOfCoordReadyToSleepState()                       (TRUE != FALSE)
#define CanNm_HasSizeOfMsgConfirmationFlag()                          (TRUE != FALSE)
#define CanNm_HasSizeOfMsgIndicationFlag()                            (TRUE != FALSE)
#define CanNm_HasSizeOfMsgTimeoutTimer()                              (TRUE != FALSE)
#define CanNm_HasSizeOfMsgTimer()                                     (TRUE != FALSE)
#define CanNm_HasSizeOfNetworkRestartFlag()                           (TRUE != FALSE)
#define CanNm_HasSizeOfPbChannelConfig()                              (TRUE != FALSE)
#define CanNm_HasSizeOfRepeatMsgTimer()                               (TRUE != FALSE)
#define CanNm_HasSizeOfSysToNmChInd()                                 (TRUE != FALSE)
#define CanNm_HasSizeOfTimeoutTimer()                                 (TRUE != FALSE)
#define CanNm_HasSizeOfTxControlState()                               (TRUE != FALSE)
#define CanNm_HasSizeOfTxControlStateRequest()                        (TRUE != FALSE)
#define CanNm_HasSizeOfTxMessageData()                                (TRUE != FALSE)
#define CanNm_HasSizeOfWaitBusSleepTimer()                            (TRUE != FALSE)
#define CanNm_HasSysToNmChInd()                                       (TRUE != FALSE)
#define CanNm_HasTimeoutTimer()                                       (TRUE != FALSE)
#define CanNm_HasTxControlState()                                     (TRUE != FALSE)
#define CanNm_HasTxControlStateRequest()                              (TRUE != FALSE)
#define CanNm_HasTxMessageData()                                      (TRUE != FALSE)
#define CanNm_HasWaitBusSleepTimer()                                  (TRUE != FALSE)
#define CanNm_HasPCConfig()                                           (TRUE != FALSE)
#define CanNm_HasChannelConfigOfPCConfig()                            (TRUE != FALSE)
#define CanNm_HasCommStateOfPCConfig()                                (TRUE != FALSE)
#define CanNm_HasCoordReadyToSleepStateOfPCConfig()                   (TRUE != FALSE)
#define CanNm_HasModuleInitializedOfPCConfig()                        (TRUE != FALSE)
#define CanNm_HasMsgConfirmationFlagOfPCConfig()                      (TRUE != FALSE)
#define CanNm_HasMsgIndicationFlagOfPCConfig()                        (TRUE != FALSE)
#define CanNm_HasMsgTimeoutTimerOfPCConfig()                          (TRUE != FALSE)
#define CanNm_HasMsgTimerOfPCConfig()                                 (TRUE != FALSE)
#define CanNm_HasNetworkRestartFlagOfPCConfig()                       (TRUE != FALSE)
#define CanNm_HasPbChannelConfigOfPCConfig()                          (TRUE != FALSE)
#define CanNm_HasRepeatMsgTimerOfPCConfig()                           (TRUE != FALSE)
#define CanNm_HasSizeOfChannelConfigOfPCConfig()                      (TRUE != FALSE)
#define CanNm_HasSizeOfCommStateOfPCConfig()                          (TRUE != FALSE)
#define CanNm_HasSizeOfCoordReadyToSleepStateOfPCConfig()             (TRUE != FALSE)
#define CanNm_HasSizeOfMsgConfirmationFlagOfPCConfig()                (TRUE != FALSE)
#define CanNm_HasSizeOfMsgIndicationFlagOfPCConfig()                  (TRUE != FALSE)
#define CanNm_HasSizeOfMsgTimeoutTimerOfPCConfig()                    (TRUE != FALSE)
#define CanNm_HasSizeOfMsgTimerOfPCConfig()                           (TRUE != FALSE)
#define CanNm_HasSizeOfNetworkRestartFlagOfPCConfig()                 (TRUE != FALSE)
#define CanNm_HasSizeOfPbChannelConfigOfPCConfig()                    (TRUE != FALSE)
#define CanNm_HasSizeOfRepeatMsgTimerOfPCConfig()                     (TRUE != FALSE)
#define CanNm_HasSizeOfSysToNmChIndOfPCConfig()                       (TRUE != FALSE)
#define CanNm_HasSizeOfTimeoutTimerOfPCConfig()                       (TRUE != FALSE)
#define CanNm_HasSizeOfTxControlStateOfPCConfig()                     (TRUE != FALSE)
#define CanNm_HasSizeOfTxControlStateRequestOfPCConfig()              (TRUE != FALSE)
#define CanNm_HasSizeOfTxMessageDataOfPCConfig()                      (TRUE != FALSE)
#define CanNm_HasSizeOfWaitBusSleepTimerOfPCConfig()                  (TRUE != FALSE)
#define CanNm_HasSysToNmChIndOfPCConfig()                             (TRUE != FALSE)
#define CanNm_HasTimeoutTimerOfPCConfig()                             (TRUE != FALSE)
#define CanNm_HasTxControlStateOfPCConfig()                           (TRUE != FALSE)
#define CanNm_HasTxControlStateRequestOfPCConfig()                    (TRUE != FALSE)
#define CanNm_HasTxMessageDataOfPCConfig()                            (TRUE != FALSE)
#define CanNm_HasWaitBusSleepTimerOfPCConfig()                        (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCIncrementDataMacros  CanNm Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define CanNm_IncCommState(Index)                                     CanNm_GetCommState(Index)++
#define CanNm_IncCoordReadyToSleepState(Index)                        CanNm_GetCoordReadyToSleepState(Index)++
#define CanNm_IncMsgTimeoutTimer(Index)                               CanNm_GetMsgTimeoutTimer(Index)++
#define CanNm_IncMsgTimer(Index)                                      CanNm_GetMsgTimer(Index)++
#define CanNm_IncNetworkRestartFlag(Index)                            CanNm_GetNetworkRestartFlag(Index)++
#define CanNm_IncRepeatMsgTimer(Index)                                CanNm_GetRepeatMsgTimer(Index)++
#define CanNm_IncTimeoutTimer(Index)                                  CanNm_GetTimeoutTimer(Index)++
#define CanNm_IncTxControlState(Index)                                CanNm_GetTxControlState(Index)++
#define CanNm_IncTxControlStateRequest(Index)                         CanNm_GetTxControlStateRequest(Index)++
#define CanNm_IncTxMessageData(Index)                                 CanNm_GetTxMessageData(Index)++
#define CanNm_IncWaitBusSleepTimer(Index)                             CanNm_GetWaitBusSleepTimer(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCDecrementDataMacros  CanNm Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define CanNm_DecCommState(Index)                                     CanNm_GetCommState(Index)--
#define CanNm_DecCoordReadyToSleepState(Index)                        CanNm_GetCoordReadyToSleepState(Index)--
#define CanNm_DecMsgTimeoutTimer(Index)                               CanNm_GetMsgTimeoutTimer(Index)--
#define CanNm_DecMsgTimer(Index)                                      CanNm_GetMsgTimer(Index)--
#define CanNm_DecNetworkRestartFlag(Index)                            CanNm_GetNetworkRestartFlag(Index)--
#define CanNm_DecRepeatMsgTimer(Index)                                CanNm_GetRepeatMsgTimer(Index)--
#define CanNm_DecTimeoutTimer(Index)                                  CanNm_GetTimeoutTimer(Index)--
#define CanNm_DecTxControlState(Index)                                CanNm_GetTxControlState(Index)--
#define CanNm_DecTxControlStateRequest(Index)                         CanNm_GetTxControlStateRequest(Index)--
#define CanNm_DecTxMessageData(Index)                                 CanNm_GetTxMessageData(Index)--
#define CanNm_DecWaitBusSleepTimer(Index)                             CanNm_GetWaitBusSleepTimer(Index)--
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/

/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/* PRQA S 3453 3 */ /* MD_MSR_19.7 */
#define CanNm_GetNmState(Index)        CanNm_NmState[(Index)]
#define CanNm_SetNmState(Index, Value) CanNm_NmState[(Index)] = (Value)

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  CanNmPCIterableTypes  CanNm Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate CanNm_ChannelConfig */
typedef uint8_least CanNm_ChannelConfigIterType;

/**   \brief  type used to iterate CanNm_PbChannelConfig */
typedef uint8_least CanNm_PbChannelConfigIterType;

/**   \brief  type used to iterate CanNm_SysToNmChInd */
typedef uint8_least CanNm_SysToNmChIndIterType;

/**   \brief  type used to iterate CanNm_TxMessageData */
typedef uint8_least CanNm_TxMessageDataIterType;

/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCIterableTypesWithSizeRelations  CanNm Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate CanNm_CommState */
typedef CanNm_ChannelConfigIterType CanNm_CommStateIterType;

/**   \brief  type used to iterate CanNm_CoordReadyToSleepState */
typedef CanNm_ChannelConfigIterType CanNm_CoordReadyToSleepStateIterType;

/**   \brief  type used to iterate CanNm_MsgConfirmationFlag */
typedef CanNm_ChannelConfigIterType CanNm_MsgConfirmationFlagIterType;

/**   \brief  type used to iterate CanNm_MsgIndicationFlag */
typedef CanNm_ChannelConfigIterType CanNm_MsgIndicationFlagIterType;

/**   \brief  type used to iterate CanNm_MsgTimeoutTimer */
typedef CanNm_ChannelConfigIterType CanNm_MsgTimeoutTimerIterType;

/**   \brief  type used to iterate CanNm_MsgTimer */
typedef CanNm_ChannelConfigIterType CanNm_MsgTimerIterType;

/**   \brief  type used to iterate CanNm_NetworkRestartFlag */
typedef CanNm_ChannelConfigIterType CanNm_NetworkRestartFlagIterType;

/**   \brief  type used to iterate CanNm_RepeatMsgTimer */
typedef CanNm_ChannelConfigIterType CanNm_RepeatMsgTimerIterType;

/**   \brief  type used to iterate CanNm_TimeoutTimer */
typedef CanNm_ChannelConfigIterType CanNm_TimeoutTimerIterType;

/**   \brief  type used to iterate CanNm_TxControlState */
typedef CanNm_ChannelConfigIterType CanNm_TxControlStateIterType;

/**   \brief  type used to iterate CanNm_TxControlStateRequest */
typedef CanNm_ChannelConfigIterType CanNm_TxControlStateRequestIterType;

/**   \brief  type used to iterate CanNm_WaitBusSleepTimer */
typedef CanNm_ChannelConfigIterType CanNm_WaitBusSleepTimerIterType;

/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCValueTypes  CanNm Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for CanNm_ChannelIdOfChannelConfig */
typedef uint8 CanNm_ChannelIdOfChannelConfigType;

/**   \brief  value based type definition for CanNm_MsgCycleTimeOfChannelConfig */
typedef uint8 CanNm_MsgCycleTimeOfChannelConfigType;

/**   \brief  value based type definition for CanNm_MsgTimeoutTimeOfChannelConfig */
typedef uint8 CanNm_MsgTimeoutTimeOfChannelConfigType;

/**   \brief  value based type definition for CanNm_RemoteSleepIndTimeOfChannelConfig */
typedef uint8 CanNm_RemoteSleepIndTimeOfChannelConfigType;

/**   \brief  value based type definition for CanNm_RepeatMessageTimeOfChannelConfig */
typedef uint8 CanNm_RepeatMessageTimeOfChannelConfigType;

/**   \brief  value based type definition for CanNm_TimeoutTimeOfChannelConfig */
typedef uint8 CanNm_TimeoutTimeOfChannelConfigType;

/**   \brief  value based type definition for CanNm_UserDataLengthOfChannelConfig */
typedef uint8 CanNm_UserDataLengthOfChannelConfigType;

/**   \brief  value based type definition for CanNm_WaitBusSleepTimeOfChannelConfig */
typedef uint8 CanNm_WaitBusSleepTimeOfChannelConfigType;

/**   \brief  value based type definition for CanNm_CommState */
typedef uint8 CanNm_CommStateType;

/**   \brief  value based type definition for CanNm_CoordReadyToSleepState */
typedef uint8 CanNm_CoordReadyToSleepStateType;

/**   \brief  value based type definition for CanNm_ModuleInitialized */
typedef boolean CanNm_ModuleInitializedType;

/**   \brief  value based type definition for CanNm_MsgConfirmationFlag */
typedef boolean CanNm_MsgConfirmationFlagType;

/**   \brief  value based type definition for CanNm_MsgIndicationFlag */
typedef boolean CanNm_MsgIndicationFlagType;

/**   \brief  value based type definition for CanNm_MsgTimeoutTimer */
typedef uint16 CanNm_MsgTimeoutTimerType;

/**   \brief  value based type definition for CanNm_MsgTimer */
typedef uint16 CanNm_MsgTimerType;

/**   \brief  value based type definition for CanNm_NetworkRestartFlag */
typedef uint8 CanNm_NetworkRestartFlagType;

/**   \brief  value based type definition for CanNm_MsgCycleOffsetOfPbChannelConfig */
typedef uint8 CanNm_MsgCycleOffsetOfPbChannelConfigType;

/**   \brief  value based type definition for CanNm_PduLengthOfPbChannelConfig */
typedef uint8 CanNm_PduLengthOfPbChannelConfigType;

/**   \brief  value based type definition for CanNm_TxMessageDataEndIdxOfPbChannelConfig */
typedef uint8 CanNm_TxMessageDataEndIdxOfPbChannelConfigType;

/**   \brief  value based type definition for CanNm_TxMessageDataLengthOfPbChannelConfig */
typedef uint8 CanNm_TxMessageDataLengthOfPbChannelConfigType;

/**   \brief  value based type definition for CanNm_TxMessageDataStartIdxOfPbChannelConfig */
typedef uint8 CanNm_TxMessageDataStartIdxOfPbChannelConfigType;

/**   \brief  value based type definition for CanNm_TxMessageDataUsedOfPbChannelConfig */
typedef boolean CanNm_TxMessageDataUsedOfPbChannelConfigType;

/**   \brief  value based type definition for CanNm_TxPduIdOfPbChannelConfig */
typedef uint8 CanNm_TxPduIdOfPbChannelConfigType;

/**   \brief  value based type definition for CanNm_UserDataPduEndPosOfPbChannelConfig */
typedef uint8 CanNm_UserDataPduEndPosOfPbChannelConfigType;

/**   \brief  value based type definition for CanNm_UserDataPduStartPosOfPbChannelConfig */
typedef uint8 CanNm_UserDataPduStartPosOfPbChannelConfigType;

/**   \brief  value based type definition for CanNm_RepeatMsgTimer */
typedef uint16 CanNm_RepeatMsgTimerType;

/**   \brief  value based type definition for CanNm_SizeOfChannelConfig */
typedef uint8 CanNm_SizeOfChannelConfigType;

/**   \brief  value based type definition for CanNm_SizeOfCommState */
typedef uint8 CanNm_SizeOfCommStateType;

/**   \brief  value based type definition for CanNm_SizeOfCoordReadyToSleepState */
typedef uint8 CanNm_SizeOfCoordReadyToSleepStateType;

/**   \brief  value based type definition for CanNm_SizeOfMsgConfirmationFlag */
typedef uint8 CanNm_SizeOfMsgConfirmationFlagType;

/**   \brief  value based type definition for CanNm_SizeOfMsgIndicationFlag */
typedef uint8 CanNm_SizeOfMsgIndicationFlagType;

/**   \brief  value based type definition for CanNm_SizeOfMsgTimeoutTimer */
typedef uint8 CanNm_SizeOfMsgTimeoutTimerType;

/**   \brief  value based type definition for CanNm_SizeOfMsgTimer */
typedef uint8 CanNm_SizeOfMsgTimerType;

/**   \brief  value based type definition for CanNm_SizeOfNetworkRestartFlag */
typedef uint8 CanNm_SizeOfNetworkRestartFlagType;

/**   \brief  value based type definition for CanNm_SizeOfPbChannelConfig */
typedef uint8 CanNm_SizeOfPbChannelConfigType;

/**   \brief  value based type definition for CanNm_SizeOfRepeatMsgTimer */
typedef uint8 CanNm_SizeOfRepeatMsgTimerType;

/**   \brief  value based type definition for CanNm_SizeOfSysToNmChInd */
typedef uint8 CanNm_SizeOfSysToNmChIndType;

/**   \brief  value based type definition for CanNm_SizeOfTimeoutTimer */
typedef uint8 CanNm_SizeOfTimeoutTimerType;

/**   \brief  value based type definition for CanNm_SizeOfTxControlState */
typedef uint8 CanNm_SizeOfTxControlStateType;

/**   \brief  value based type definition for CanNm_SizeOfTxControlStateRequest */
typedef uint8 CanNm_SizeOfTxControlStateRequestType;

/**   \brief  value based type definition for CanNm_SizeOfTxMessageData */
typedef uint8 CanNm_SizeOfTxMessageDataType;

/**   \brief  value based type definition for CanNm_SizeOfWaitBusSleepTimer */
typedef uint8 CanNm_SizeOfWaitBusSleepTimerType;

/**   \brief  value based type definition for CanNm_SysToNmChInd */
typedef uint8 CanNm_SysToNmChIndType;

/**   \brief  value based type definition for CanNm_TimeoutTimer */
typedef uint16 CanNm_TimeoutTimerType;

/**   \brief  value based type definition for CanNm_TxControlState */
typedef uint8 CanNm_TxControlStateType;

/**   \brief  value based type definition for CanNm_TxControlStateRequest */
typedef uint8 CanNm_TxControlStateRequestType;

/**   \brief  value based type definition for CanNm_TxMessageData */
typedef uint8 CanNm_TxMessageDataType;

/**   \brief  value based type definition for CanNm_WaitBusSleepTimer */
typedef uint16 CanNm_WaitBusSleepTimerType;

/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCStructTypes  CanNm Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in CanNm_ChannelConfig */
typedef struct sCanNm_ChannelConfigType
{
  CanNm_ChannelIdOfChannelConfigType ChannelIdOfChannelConfig;  /**< Channel ID configured for the respective instance of the NM. */
  CanNm_MsgCycleTimeOfChannelConfigType MsgCycleTimeOfChannelConfig;  /**< Period of a NM message [ms]. It determines the periodic rate in the periodic transmission mode. */
  CanNm_MsgTimeoutTimeOfChannelConfigType MsgTimeoutTimeOfChannelConfig;  /**< Transmission Timeout [ms] of NM message. If there is no transmission confirmation by the CAN Interface within this timeout, the CAN NM module shall give an error notification. */
  CanNm_RemoteSleepIndTimeOfChannelConfigType RemoteSleepIndTimeOfChannelConfig;  /**< Timeout for Remote Sleep Indication [ms]. */
  CanNm_RepeatMessageTimeOfChannelConfigType RepeatMessageTimeOfChannelConfig;  /**< Timeout for Repeat Message State [ms]. */
  CanNm_TimeoutTimeOfChannelConfigType TimeoutTimeOfChannelConfig;  /**< Timeout for the NM messages [ms]. */
  CanNm_UserDataLengthOfChannelConfigType UserDataLengthOfChannelConfig;  /**< Length of the User Data in the NM PDU */
  CanNm_WaitBusSleepTimeOfChannelConfigType WaitBusSleepTimeOfChannelConfig;  /**< Timeout for bus calm down phase [ms]. */
} CanNm_ChannelConfigType;

/**   \brief  type used in CanNm_PbChannelConfig */
typedef struct sCanNm_PbChannelConfigType
{
  CanNm_MsgCycleOffsetOfPbChannelConfigType MsgCycleOffsetOfPbChannelConfig;
  CanNm_PduLengthOfPbChannelConfigType PduLengthOfPbChannelConfig;
  CanNm_TxMessageDataEndIdxOfPbChannelConfigType TxMessageDataEndIdxOfPbChannelConfig;  /**< the end index of the 0:n relation pointing to CanNm_TxMessageData */
  CanNm_TxMessageDataLengthOfPbChannelConfigType TxMessageDataLengthOfPbChannelConfig;  /**< the number of relations pointing to CanNm_TxMessageData */
  CanNm_TxMessageDataStartIdxOfPbChannelConfigType TxMessageDataStartIdxOfPbChannelConfig;  /**< the start index of the 0:n relation pointing to CanNm_TxMessageData */
  CanNm_TxPduIdOfPbChannelConfigType TxPduIdOfPbChannelConfig;
  CanNm_UserDataPduEndPosOfPbChannelConfigType UserDataPduEndPosOfPbChannelConfig;
  CanNm_UserDataPduStartPosOfPbChannelConfigType UserDataPduStartPosOfPbChannelConfig;
} CanNm_PbChannelConfigType;

/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCSymbolicStructTypes  CanNm Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to CanNm_CommState */
typedef struct sCanNm_CommStateStructTag
{
  CanNm_CommStateType CAN00_f26020e5[1];
} sCanNm_CommStateStructType;

/**   \brief  type to be used as symbolic data element access to CanNm_CoordReadyToSleepState */
typedef struct sCanNm_CoordReadyToSleepStateStructTag
{
  CanNm_CoordReadyToSleepStateType CAN00_f26020e5[1];
} sCanNm_CoordReadyToSleepStateStructType;

/**   \brief  type to be used as symbolic data element access to CanNm_MsgConfirmationFlag */
typedef struct sCanNm_MsgConfirmationFlagStructTag
{
  CanNm_MsgConfirmationFlagType CAN00_f26020e5[1];
} sCanNm_MsgConfirmationFlagStructType;

/**   \brief  type to be used as symbolic data element access to CanNm_MsgIndicationFlag */
typedef struct sCanNm_MsgIndicationFlagStructTag
{
  CanNm_MsgIndicationFlagType CAN00_f26020e5[1];
} sCanNm_MsgIndicationFlagStructType;

/**   \brief  type to be used as symbolic data element access to CanNm_MsgTimeoutTimer */
typedef struct sCanNm_MsgTimeoutTimerStructTag
{
  CanNm_MsgTimeoutTimerType CAN00_f26020e5[1];
} sCanNm_MsgTimeoutTimerStructType;

/**   \brief  type to be used as symbolic data element access to CanNm_MsgTimer */
typedef struct sCanNm_MsgTimerStructTag
{
  CanNm_MsgTimerType CAN00_f26020e5[1];
} sCanNm_MsgTimerStructType;

/**   \brief  type to be used as symbolic data element access to CanNm_NetworkRestartFlag */
typedef struct sCanNm_NetworkRestartFlagStructTag
{
  CanNm_NetworkRestartFlagType CAN00_f26020e5[1];
} sCanNm_NetworkRestartFlagStructType;

/**   \brief  type to be used as symbolic data element access to CanNm_RepeatMsgTimer */
typedef struct sCanNm_RepeatMsgTimerStructTag
{
  CanNm_RepeatMsgTimerType CAN00_f26020e5[1];
} sCanNm_RepeatMsgTimerStructType;

/**   \brief  type to be used as symbolic data element access to CanNm_TimeoutTimer */
typedef struct sCanNm_TimeoutTimerStructTag
{
  CanNm_TimeoutTimerType CAN00_f26020e5[1];
} sCanNm_TimeoutTimerStructType;

/**   \brief  type to be used as symbolic data element access to CanNm_TxControlState */
typedef struct sCanNm_TxControlStateStructTag
{
  CanNm_TxControlStateType CAN00_f26020e5[1];
} sCanNm_TxControlStateStructType;

/**   \brief  type to be used as symbolic data element access to CanNm_TxControlStateRequest */
typedef struct sCanNm_TxControlStateRequestStructTag
{
  CanNm_TxControlStateRequestType CAN00_f26020e5[1];
} sCanNm_TxControlStateRequestStructType;

/**   \brief  type to be used as symbolic data element access to CanNm_TxMessageData */
typedef struct sCanNm_TxMessageDataStructTag
{
  CanNm_TxMessageDataType CAN00_CAN_17d0077e[8];
} sCanNm_TxMessageDataStructType;

/**   \brief  type to be used as symbolic data element access to CanNm_WaitBusSleepTimer */
typedef struct sCanNm_WaitBusSleepTimerStructTag
{
  CanNm_WaitBusSleepTimerType CAN00_f26020e5[1];
} sCanNm_WaitBusSleepTimerStructType;

/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCUnionIndexAndSymbolTypes  CanNm Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access CanNm_CommState in an index and symbol based style. */
typedef union uCanNm_CommStateTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanNm_CommStateType raw[1];
  sCanNm_CommStateStructType str;
} uCanNm_CommStateType;

/**   \brief  type to access CanNm_CoordReadyToSleepState in an index and symbol based style. */
typedef union uCanNm_CoordReadyToSleepStateTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanNm_CoordReadyToSleepStateType raw[1];
  sCanNm_CoordReadyToSleepStateStructType str;
} uCanNm_CoordReadyToSleepStateType;

/**   \brief  type to access CanNm_MsgConfirmationFlag in an index and symbol based style. */
typedef union uCanNm_MsgConfirmationFlagTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanNm_MsgConfirmationFlagType raw[1];
  sCanNm_MsgConfirmationFlagStructType str;
} uCanNm_MsgConfirmationFlagType;

/**   \brief  type to access CanNm_MsgIndicationFlag in an index and symbol based style. */
typedef union uCanNm_MsgIndicationFlagTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanNm_MsgIndicationFlagType raw[1];
  sCanNm_MsgIndicationFlagStructType str;
} uCanNm_MsgIndicationFlagType;

/**   \brief  type to access CanNm_MsgTimeoutTimer in an index and symbol based style. */
typedef union uCanNm_MsgTimeoutTimerTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanNm_MsgTimeoutTimerType raw[1];
  sCanNm_MsgTimeoutTimerStructType str;
} uCanNm_MsgTimeoutTimerType;

/**   \brief  type to access CanNm_MsgTimer in an index and symbol based style. */
typedef union uCanNm_MsgTimerTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanNm_MsgTimerType raw[1];
  sCanNm_MsgTimerStructType str;
} uCanNm_MsgTimerType;

/**   \brief  type to access CanNm_NetworkRestartFlag in an index and symbol based style. */
typedef union uCanNm_NetworkRestartFlagTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanNm_NetworkRestartFlagType raw[1];
  sCanNm_NetworkRestartFlagStructType str;
} uCanNm_NetworkRestartFlagType;

/**   \brief  type to access CanNm_RepeatMsgTimer in an index and symbol based style. */
typedef union uCanNm_RepeatMsgTimerTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanNm_RepeatMsgTimerType raw[1];
  sCanNm_RepeatMsgTimerStructType str;
} uCanNm_RepeatMsgTimerType;

/**   \brief  type to access CanNm_TimeoutTimer in an index and symbol based style. */
typedef union uCanNm_TimeoutTimerTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanNm_TimeoutTimerType raw[1];
  sCanNm_TimeoutTimerStructType str;
} uCanNm_TimeoutTimerType;

/**   \brief  type to access CanNm_TxControlState in an index and symbol based style. */
typedef union uCanNm_TxControlStateTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanNm_TxControlStateType raw[1];
  sCanNm_TxControlStateStructType str;
} uCanNm_TxControlStateType;

/**   \brief  type to access CanNm_TxControlStateRequest in an index and symbol based style. */
typedef union uCanNm_TxControlStateRequestTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanNm_TxControlStateRequestType raw[1];
  sCanNm_TxControlStateRequestStructType str;
} uCanNm_TxControlStateRequestType;

/**   \brief  type to access CanNm_TxMessageData in an index and symbol based style. */
typedef union uCanNm_TxMessageDataTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanNm_TxMessageDataType raw[8];
  sCanNm_TxMessageDataStructType str;
} uCanNm_TxMessageDataType;

/**   \brief  type to access CanNm_WaitBusSleepTimer in an index and symbol based style. */
typedef union uCanNm_WaitBusSleepTimerTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanNm_WaitBusSleepTimerType raw[1];
  sCanNm_WaitBusSleepTimerStructType str;
} uCanNm_WaitBusSleepTimerType;

/** 
  \}
*/ 

/** 
  \defgroup  CanNmPCRootValueTypes  CanNm Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in CanNm_PCConfig */
typedef struct sCanNm_PCConfigType
{
  uint8 CanNm_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} CanNm_PCConfigType;

typedef CanNm_PCConfigType CanNm_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanNm_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    CanNm_ChannelConfig
  \details
  Element               Description
  ChannelId             Channel ID configured for the respective instance of the NM.
  MsgCycleTime          Period of a NM message [ms]. It determines the periodic rate in the periodic transmission mode.
  MsgTimeoutTime        Transmission Timeout [ms] of NM message. If there is no transmission confirmation by the CAN Interface within this timeout, the CAN NM module shall give an error notification.
  RemoteSleepIndTime    Timeout for Remote Sleep Indication [ms].
  RepeatMessageTime     Timeout for Repeat Message State [ms].
  TimeoutTime           Timeout for the NM messages [ms].
  UserDataLength        Length of the User Data in the NM PDU
  WaitBusSleepTime      Timeout for bus calm down phase [ms].
*/ 
#define CANNM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanNm_ChannelConfigType, CANNM_CONST) CanNm_ChannelConfig[1];
#define CANNM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_PbChannelConfig
**********************************************************************************************************************/
/** 
  \var    CanNm_PbChannelConfig
  \details
  Element                  Description
  MsgCycleOffset       
  PduLength            
  TxMessageDataEndIdx      the end index of the 0:n relation pointing to CanNm_TxMessageData
  TxMessageDataLength      the number of relations pointing to CanNm_TxMessageData
  TxMessageDataStartIdx    the start index of the 0:n relation pointing to CanNm_TxMessageData
  TxPduId              
  UserDataPduEndPos    
  UserDataPduStartPos  
*/ 
#define CANNM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanNm_PbChannelConfigType, CANNM_CONST) CanNm_PbChannelConfig[1];
#define CANNM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_SysToNmChInd
**********************************************************************************************************************/
/** 
  \var    CanNm_SysToNmChInd
  \brief  Channel indirection: System Channel handle to NM channel handle
*/ 
#define CANNM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(CanNm_SysToNmChIndType, CANNM_CONST) CanNm_SysToNmChInd[1];
#define CANNM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_CommState
**********************************************************************************************************************/
/** 
  \var    CanNm_CommState
  \brief  Internal state for the application's need for communication.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCanNm_CommStateType, CANNM_VAR_NOINIT) CanNm_CommState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_CoordReadyToSleepState
**********************************************************************************************************************/
/** 
  \var    CanNm_CoordReadyToSleepState
  \brief  State for Rx of Coordinator Sleep Ready Bit:
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCanNm_CoordReadyToSleepStateType, CANNM_VAR_NOINIT) CanNm_CoordReadyToSleepState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_ModuleInitialized
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(CanNm_ModuleInitializedType, CANNM_VAR_ZERO_INIT) CanNm_ModuleInitialized;
#define CANNM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgConfirmationFlag
**********************************************************************************************************************/
/** 
  \var    CanNm_MsgConfirmationFlag
  \brief  Message Confirmation Flag
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCanNm_MsgConfirmationFlagType, CANNM_VAR_NOINIT) CanNm_MsgConfirmationFlag;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgIndicationFlag
**********************************************************************************************************************/
/** 
  \var    CanNm_MsgIndicationFlag
  \brief  Message Indication Flag
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCanNm_MsgIndicationFlagType, CANNM_VAR_NOINIT) CanNm_MsgIndicationFlag;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgTimeoutTimer
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCanNm_MsgTimeoutTimerType, CANNM_VAR_NOINIT) CanNm_MsgTimeoutTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_MsgTimer
**********************************************************************************************************************/
/** 
  \var    CanNm_MsgTimer
  \brief  Timer for NM message transmission.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCanNm_MsgTimerType, CANNM_VAR_NOINIT) CanNm_MsgTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_NetworkRestartFlag
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCanNm_NetworkRestartFlagType, CANNM_VAR_NOINIT) CanNm_NetworkRestartFlag;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_RepeatMsgTimer
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCanNm_RepeatMsgTimerType, CANNM_VAR_NOINIT) CanNm_RepeatMsgTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TimeoutTimer
**********************************************************************************************************************/
/** 
  \var    CanNm_TimeoutTimer
  \brief  Timer for NM Algorithm.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCanNm_TimeoutTimerType, CANNM_VAR_NOINIT) CanNm_TimeoutTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TxControlState
**********************************************************************************************************************/
/** 
  \var    CanNm_TxControlState
  \brief  Message transmission control state.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCanNm_TxControlStateType, CANNM_VAR_NOINIT) CanNm_TxControlState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TxControlStateRequest
**********************************************************************************************************************/
/** 
  \var    CanNm_TxControlStateRequest
  \brief  Message transmission control state request.
*/ 
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCanNm_TxControlStateRequestType, CANNM_VAR_NOINIT) CanNm_TxControlStateRequest;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_TxMessageData
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCanNm_TxMessageDataType, CANNM_VAR_NOINIT) CanNm_TxMessageData;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANNM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CanNm_WaitBusSleepTimer
**********************************************************************************************************************/
#define CANNM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCanNm_WaitBusSleepTimerType, CANNM_VAR_NOINIT) CanNm_WaitBusSleepTimer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define CANNM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/



#define CANNM_START_SEC_VAR_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"    /* PRQA S 5087 */      /* MD_MSR_19.1 */
/*lint -restore */
/* CANNM089: NM state for each channel */
extern VAR( Nm_StateType, CANNM_VAR_INIT ) CanNm_NmState[CANNM_NUMBER_OF_CANNM_CHANNELS]; /* PRQA S 3684 */ /* MD_CanNm_3684 */
#define CANNM_STOP_SEC_VAR_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"    /* PRQA S 5087 */      /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  END OF FILE: CanNm_Cfg.h
**********************************************************************************************************************/
#endif /* CANNM_CFG_H */

