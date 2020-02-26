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
 *            Module: BswM
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BswM_Cfg.h
 *   Generation Time: 2016-04-27 16:00:33
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/


#if !defined(BSWM_CFG_H)
#define BSWM_CFG_H

/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
#include "Std_Types.h"
#include "BswM_ComM.h"
#include "BswM_CanSM.h"
#include "BswM_EcuM.h"
#include "BswM_NvM.h"


/* -----------------------------------------------------------------------------
    &&&~ GENERAL DEFINES
 ----------------------------------------------------------------------------- */
#ifndef BSWM_USE_DUMMY_FUNCTIONS
#define BSWM_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyFunction */
#endif
#ifndef BSWM_USE_DUMMY_STATEMENT
#define BSWM_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatement */
#endif
#ifndef BSWM_DUMMY_STATEMENT
#define BSWM_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef BSWM_DUMMY_STATEMENT_CONST
#define BSWM_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef BSWM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define BSWM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef BSWM_ATOMIC_VARIABLE_ACCESS
#define BSWM_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef BSWM_PROCESSOR_CANOEEMU
#define BSWM_PROCESSOR_CANOEEMU
#endif
#ifndef BSWM_COMP_ANSI
#define BSWM_COMP_ANSI
#endif
#ifndef BSWM_GEN_GENERATOR_MSR
#define BSWM_GEN_GENERATOR_MSR
#endif
#ifndef BSWM_CPUTYPE_BITORDER_LSB2MSB
#define BSWM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/BitOrder */
#endif
#ifndef BSWM_CONFIGURATION_VARIANT_PRECOMPILE
#define BSWM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef BSWM_CONFIGURATION_VARIANT_LINKTIME
#define BSWM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef BSWM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define BSWM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef BSWM_CONFIGURATION_VARIANT
#define BSWM_CONFIGURATION_VARIANT BSWM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef BSWM_POSTBUILD_VARIANT_SUPPORT
#define BSWM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#if !defined (BSWM_DUMMY_STATEMENT)
# define BSWM_DUMMY_STATEMENT(statement) (void)statement
#endif

/* -----------------------------------------------------------------------------
    &&&~ CONFIGURATION DEFINES
 ----------------------------------------------------------------------------- */

/* START of Checksum include for */
/* START of Checksum include for - SysService_Asr4BswMCfg5PrecompileCRC */

#define BSWM_DEV_ERROR_DETECT                STD_ON
#define BSWM_DEV_ERROR_REPORT                STD_ON
#define BSWM_MODE_CHECK                      STD_ON
#define BSWM_ENABLE_CANSM                    STD_ON
#define BSWM_ENABLE_FRSM                     STD_OFF
#define BSWM_ENABLE_LINSM                    STD_OFF
#define BSWM_ENABLE_ETHSM                    STD_OFF
#define BSWM_ENABLE_LINTP                    STD_OFF
#define BSWM_ENABLE_DCM                      STD_OFF
#define BSWM_ENABLE_NVM                      STD_ON
#define BSWM_ENABLE_ECUM                     STD_ON
#define BSWM_ENABLE_COMM                     STD_ON
#define BSWM_ENABLE_J1939DCM                 STD_OFF
#define BSWM_ENABLE_J1939NM                  STD_OFF
#define BSWM_ENABLE_SD                       STD_OFF
#define BSWM_ENABLE_NM                       STD_OFF
#define BSWM_ENABLE_PDUR                     STD_OFF
#define BSWM_ENABLE_WDGM                     STD_OFF
#define BSWM_ENABLE_RULE_CONTROL             STD_OFF
#define BSWM_VERSION_INFO_API                STD_OFF
#define BSWM_COMM_PNC_SUPPORT                STD_OFF
#define BSWM_CHANNEL_COUNT                   1U
#define BSWM_WAKEUP_SOURCE_COUNT             6U
#define BSWM_IPDU_GROUP_CONTROL              STD_ON
#define BSWM_ECUM_MODE_HANDLING              STD_OFF
#define BSWM_IPDUGROUPVECTORSIZE             1U

/* END of Checksum include for - SysService_Asr4BswMCfg5PrecompileCRC */

/* END of Checksum include for */

/* -----------------------------------------------------------------------------
    &&&~ RULE DEFINES
 ----------------------------------------------------------------------------- */
#define BswMConf_BswMRule_BswMRule_EcuShutdown (0) 
#define BswMConf_BswMRule_CC_CAN00_f26020e5_RX_DM (2) 
#define BswMConf_BswMRule_CC_CAN00_f26020e5_RX (1) 
#define BswMConf_BswMRule_CC_CAN00_f26020e5_TX (3) 
#define BswMConf_BswMRule_ESH_PrepToWait (8) 
#define BswMConf_BswMRule_ESH_WaitToShutdown (11) 
#define BswMConf_BswMRule_ESH_WaitToWakeup (12) 
#define BswMConf_BswMRule_ESH_RunToPostRun (9) 
#define BswMConf_BswMRule_ESH_WakeupToRun (14) 
#define BswMConf_BswMRule_ESH_WakeupToPrep (13) 
#define BswMConf_BswMRule_ESH_InitToWakeup (5) 
#define BswMConf_BswMRule_ESH_DemInit (4) 
#define BswMConf_BswMRule_ESH_RunToPostRunNested (10) 
#define BswMConf_BswMRule_ESH_PostRunNested (7) 
#define BswMConf_BswMRule_ESH_PostRun (6) 


/* -----------------------------------------------------------------------------
    &&&~ GENERIC DEFINES
 ----------------------------------------------------------------------------- */
#define BSWM_GENERIC_ESH_State               230U 
#define BSWM_GENERIC_ESH_DemInitStatus       231U 
#define BSWM_GENERIC_ESH_ComMPendingRequests 232U 

#define BSWM_GENERICVALUE_ESH_State_ESH_INIT                               0x0000U 
#define BSWM_GENERICVALUE_ESH_State_ESH_POST_RUN                           0x0002U 
#define BSWM_GENERICVALUE_ESH_State_ESH_PREP_SHUTDOWN                      0x0003U 
#define BSWM_GENERICVALUE_ESH_State_ESH_RUN                                0x0001U 
#define BSWM_GENERICVALUE_ESH_State_ESH_SHUTDOWN                           0x0005U 
#define BSWM_GENERICVALUE_ESH_State_ESH_WAIT_FOR_NVM                       0x0004U 
#define BSWM_GENERICVALUE_ESH_State_ESH_WAKEUP                             0x0006U 
#define BSWM_GENERICVALUE_ESH_DemInitStatus_DEM_INITIALIZED                0x0000U 
#define BSWM_GENERICVALUE_ESH_DemInitStatus_DEM_NOT_INITIALIZED            0x0001U 
#define BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_NO_REQUEST      0x0000U 
#define BSWM_GENERICVALUE_ESH_ComMPendingRequests_ESH_COMM_PENDING_REQUEST 0x0001U 


/* -----------------------------------------------------------------------------
    &&&~ TIMER DEFINES
 ----------------------------------------------------------------------------- */
#define BSWM_TMR_ESH_SelfRunRequestTimer     2U 
#define BSWM_TMR_ESH_NvM_WriteAllTimer       1U 
#define BSWM_TMR_ESH_NvM_CancelWriteAllTimer 0U 


/* -----------------------------------------------------------------------------
    &&&~ TYPEDEF
 ----------------------------------------------------------------------------- */

typedef uint8 BswM_UserDomainType; /* user domain: CanSM, LinSM... */

/* It is possible to configure any user number from 0 to 65535 */
typedef uint16 BswM_UserType;
typedef uint16 BswM_ModeType;
typedef uint8 BswM_HandleType;
typedef P2FUNC (BswM_HandleType, BSWM_CODE, BswM_RuleTableFctPtrType)(void);
typedef P2FUNC (Std_ReturnType, BSWM_CODE, BswM_ActionListFuncType)(void);

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  BswMPCDataSwitches  BswM Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define BSWM_ACTIONLISTQUEUE                                          STD_ON
#define BSWM_ACTIONLISTS                                              STD_ON
#define BSWM_FCTPTROFACTIONLISTS                                      STD_ON
#define BSWM_CANSMCHANNELMAPPING                                      STD_ON
#define BSWM_EXTERNALIDOFCANSMCHANNELMAPPING                          STD_ON
#define BSWM_IMMEDIATEUSERENDIDXOFCANSMCHANNELMAPPING                 STD_ON
#define BSWM_IMMEDIATEUSERSTARTIDXOFCANSMCHANNELMAPPING               STD_ON
#define BSWM_IMMEDIATEUSERUSEDOFCANSMCHANNELMAPPING                   STD_ON
#define BSWM_INITVALUEOFCANSMCHANNELMAPPING                           STD_ON
#define BSWM_CANSMCHANNELSTATE                                        STD_ON
#define BSWM_COMMCHANNELMAPPING                                       STD_ON
#define BSWM_EXTERNALIDOFCOMMCHANNELMAPPING                           STD_ON
#define BSWM_IMMEDIATEUSERENDIDXOFCOMMCHANNELMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserEndIdx' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfComMChannelMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFCOMMCHANNELMAPPING                STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserStartIdx' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfComMChannelMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_IMMEDIATEUSERUSEDOFCOMMCHANNELMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_ComMChannelMapping.ImmediateUserUsed' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfComMChannelMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_INITVALUEOFCOMMCHANNELMAPPING                            STD_ON
#define BSWM_COMMCHANNELSTATE                                         STD_ON
#define BSWM_COMMPNCMAPPING                                           STD_OFF  /**< Deactivateable: 'BswM_ComMPncMapping' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_EXTERNALIDOFCOMMPNCMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_ComMPncMapping.ExternalId' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFCOMMPNCMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_ComMPncMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFCOMMPNCMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_ComMPncMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFCOMMPNCMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_ComMPncMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_INITVALUEOFCOMMPNCMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_ComMPncMapping.InitValue' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_COMMPNCSTATE                                             STD_OFF  /**< Deactivateable: 'BswM_ComMPncState' Reason: 'No Mode Request for BswMComMPncRequest configured.' */
#define BSWM_DCMAPPLUPDATEMAPPING                                     STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMapping' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFDCMAPPLUPDATEMAPPING                STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFDCMAPPLUPDATEMAPPING              STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFDCMAPPLUPDATEMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_INITVALUEOFDCMAPPLUPDATEMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateMapping.InitValue' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_DCMAPPLUPDATESTATE                                       STD_OFF  /**< Deactivateable: 'BswM_DcmApplUpdateState' Reason: 'No Mode Request for BswMDcmApplicationUpdatedIndication configured.' */
#define BSWM_DCMCOMMAPPING                                            STD_OFF  /**< Deactivateable: 'BswM_DcmComMapping' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_EXTERNALIDOFDCMCOMMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_DcmComMapping.ExternalId' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFDCMCOMMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_DcmComMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFDCMCOMMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_DcmComMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFDCMCOMMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_DcmComMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_INITVALUEOFDCMCOMMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_DcmComMapping.InitValue' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_DCMCOMSTATE                                              STD_OFF  /**< Deactivateable: 'BswM_DcmComState' Reason: 'No Mode Request for BswMDcmComModeRequest configured.' */
#define BSWM_DEFERREDRULES                                            STD_ON
#define BSWM_RULESIDXOFDEFERREDRULES                                  STD_ON
#define BSWM_ECUMMODEMAPPING                                          STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMapping' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFECUMMODEMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFECUMMODEMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFECUMMODEMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_INITVALUEOFECUMMODEMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_EcuMModeMapping.InitValue' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_ECUMMODESTATE                                            STD_OFF  /**< Deactivateable: 'BswM_EcuMModeState' Reason: 'No Mode Request for BswMEcuMIndication configured.' */
#define BSWM_ECUMRUNREQUESTMAPPING                                    STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_EXTERNALIDOFECUMRUNREQUESTMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.ExternalId' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFECUMRUNREQUESTMAPPING               STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFECUMRUNREQUESTMAPPING             STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFECUMRUNREQUESTMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_INITVALUEOFECUMRUNREQUESTMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestMapping.InitValue' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_ECUMRUNREQUESTSTATE                                      STD_OFF  /**< Deactivateable: 'BswM_EcuMRunRequestState' Reason: 'No Mode Request for BswMEcuMRUNRequestIndication configured.' */
#define BSWM_ECUMWAKEUPMAPPING                                        STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_EXTERNALIDOFECUMWAKEUPMAPPING                            STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.ExternalId' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFECUMWAKEUPMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFECUMWAKEUPMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFECUMWAKEUPMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_INITVALUEOFECUMWAKEUPMAPPING                             STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupMapping.InitValue' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_ECUMWAKEUPSTATE                                          STD_OFF  /**< Deactivateable: 'BswM_EcuMWakeupState' Reason: 'No Mode Request for BswMEcuMWakeupSource configured.' */
#define BSWM_ETHSMMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_EthSMMapping' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_EXTERNALIDOFETHSMMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_EthSMMapping.ExternalId' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFETHSMMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_EthSMMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFETHSMMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_EthSMMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFETHSMMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_EthSMMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_INITVALUEOFETHSMMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_EthSMMapping.InitValue' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_ETHSMSTATE                                               STD_OFF  /**< Deactivateable: 'BswM_EthSMState' Reason: 'No Mode Request for BswMEthSMIndication configured.' */
#define BSWM_FINALMAGICNUMBER                                         STD_OFF  /**< Deactivateable: 'BswM_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_FRSMMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_EXTERNALIDOFFRSMMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.ExternalId' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFFRSMMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFFRSMMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFFRSMMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_INITVALUEOFFRSMMAPPING                                   STD_OFF  /**< Deactivateable: 'BswM_FrSMMapping.InitValue' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_FRSMSTATE                                                STD_OFF  /**< Deactivateable: 'BswM_FrSMState' Reason: 'No Mode Request for BswMFrSMIndication configured.' */
#define BSWM_GENERICMAPPING                                           STD_ON
#define BSWM_EXTERNALIDOFGENERICMAPPING                               STD_ON
#define BSWM_IMMEDIATEUSERENDIDXOFGENERICMAPPING                      STD_ON
#define BSWM_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING                    STD_ON
#define BSWM_IMMEDIATEUSERUSEDOFGENERICMAPPING                        STD_ON
#define BSWM_INITVALUEOFGENERICMAPPING                                STD_ON
#define BSWM_GENERICSTATE                                             STD_ON
#define BSWM_IMMEDIATEUSER                                            STD_ON
#define BSWM_FORCEDOFIMMEDIATEUSER                                    STD_OFF  /**< Deactivateable: 'BswM_ImmediateUser.Forced' Reason: 'the value of BswM_ForcedOfImmediateUser is always 'false' due to this, the array is deactivated.' */
#define BSWM_MASKEDBITSOFIMMEDIATEUSER                                STD_ON
#define BSWM_ONINITOFIMMEDIATEUSER                                    STD_ON
#define BSWM_RULESINDENDIDXOFIMMEDIATEUSER                            STD_ON
#define BSWM_RULESINDSTARTIDXOFIMMEDIATEUSER                          STD_ON
#define BSWM_RULESINDUSEDOFIMMEDIATEUSER                              STD_ON
#define BSWM_INITDATAHASHCODE                                         STD_OFF  /**< Deactivateable: 'BswM_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_INITIALIZED                                              STD_ON
#define BSWM_J1939DCMMAPPING                                          STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFJ1939DCMMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFJ1939DCMMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFJ1939DCMMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_INITVALUEOFJ1939DCMMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_J1939DcmMapping.InitValue' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_J1939DCMSTATE                                            STD_OFF  /**< Deactivateable: 'BswM_J1939DcmState' Reason: 'No Mode Request for BswMJ1939DcmBroadcastStatus configured.' */
#define BSWM_J1939NMMAPPING                                           STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_EXTERNALIDOFJ1939NMMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.ExternalId' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFJ1939NMMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFJ1939NMMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFJ1939NMMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_INITVALUEOFJ1939NMMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_J1939NmMapping.InitValue' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_J1939NMSTATE                                             STD_OFF  /**< Deactivateable: 'BswM_J1939NmState' Reason: 'No Mode Request for BswMJ1939NmIndication configured.' */
#define BSWM_LINSMMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_EXTERNALIDOFLINSMMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.ExternalId' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINSMMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINSMMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINSMMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_INITVALUEOFLINSMMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_LinSMMapping.InitValue' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_LINSMSTATE                                               STD_OFF  /**< Deactivateable: 'BswM_LinSMState' Reason: 'No Mode Request for BswMLinSMIndication configured.' */
#define BSWM_LINSCHEDULEENDMAPPING                                    STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_EXTERNALIDOFLINSCHEDULEENDMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.ExternalId' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINSCHEDULEENDMAPPING               STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINSCHEDULEENDMAPPING             STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINSCHEDULEENDMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_INITVALUEOFLINSCHEDULEENDMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndMapping.InitValue' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_LINSCHEDULEENDSTATE                                      STD_OFF  /**< Deactivateable: 'BswM_LinScheduleEndState' Reason: 'No Mode Request for BswMLinScheduleEndNotification configured.' */
#define BSWM_LINSCHEDULEMAPPING                                       STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_EXTERNALIDOFLINSCHEDULEMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.ExternalId' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINSCHEDULEMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINSCHEDULEMAPPING                STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINSCHEDULEMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_INITVALUEOFLINSCHEDULEMAPPING                            STD_OFF  /**< Deactivateable: 'BswM_LinScheduleMapping.InitValue' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_LINSCHEDULESTATE                                         STD_OFF  /**< Deactivateable: 'BswM_LinScheduleState' Reason: 'No Mode Request for BswMLinScheduleIndication configured.' */
#define BSWM_LINTPMAPPING                                             STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_EXTERNALIDOFLINTPMAPPING                                 STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.ExternalId' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFLINTPMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFLINTPMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFLINTPMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_INITVALUEOFLINTPMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_LinTPMapping.InitValue' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_LINTPSTATE                                               STD_OFF  /**< Deactivateable: 'BswM_LinTPState' Reason: 'No Mode Request for BswMLinTpModeRequest configured.' */
#define BSWM_MODENOTIFICATIONMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMapping' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define BSWM_IMMEDIATEUSERENDIDXOFMODENOTIFICATIONMAPPING             STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMapping.ImmediateUserEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFMODENOTIFICATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMapping.ImmediateUserStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define BSWM_IMMEDIATEUSERUSEDOFMODENOTIFICATIONMAPPING               STD_OFF  /**< Deactivateable: 'BswM_ModeNotificationMapping.ImmediateUserUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define BSWM_MODEREQUESTMAPPING                                       STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMapping' Reason: 'No Mode Request for BswMSwcModeRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFMODEREQUESTMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSwcModeRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFMODEREQUESTMAPPING                STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSwcModeRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFMODEREQUESTMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_ModeRequestMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMSwcModeRequest configured.' */
#define BSWM_MODEREQUESTQUEUE                                         STD_ON
#define BSWM_NMMAPPING                                                STD_OFF  /**< Deactivateable: 'BswM_NmMapping' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_EXTERNALIDOFNMMAPPING                                    STD_OFF  /**< Deactivateable: 'BswM_NmMapping.ExternalId' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFNMMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_NmMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFNMMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_NmMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFNMMAPPING                             STD_OFF  /**< Deactivateable: 'BswM_NmMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_INITVALUEOFNMMAPPING                                     STD_OFF  /**< Deactivateable: 'BswM_NmMapping.InitValue' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_NMSTATE                                                  STD_OFF  /**< Deactivateable: 'BswM_NmState' Reason: 'No Mode Request for BswMNmIndication configured.' */
#define BSWM_NVMBLOCKMAPPING                                          STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_EXTERNALIDOFNVMBLOCKMAPPING                              STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.ExternalId' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFNVMBLOCKMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFNVMBLOCKMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFNVMBLOCKMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_INITVALUEOFNVMBLOCKMAPPING                               STD_OFF  /**< Deactivateable: 'BswM_NvMBlockMapping.InitValue' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_NVMBLOCKSTATE                                            STD_OFF  /**< Deactivateable: 'BswM_NvMBlockState' Reason: 'No Mode Request for BswMNvMRequest configured.' */
#define BSWM_NVMJOBMAPPING                                            STD_ON
#define BSWM_EXTERNALIDOFNVMJOBMAPPING                                STD_ON
#define BSWM_IMMEDIATEUSERENDIDXOFNVMJOBMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping.ImmediateUserEndIdx' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfNvMJobMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFNVMJOBMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping.ImmediateUserStartIdx' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfNvMJobMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_IMMEDIATEUSERUSEDOFNVMJOBMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_NvMJobMapping.ImmediateUserUsed' Reason: 'the optional indirection is deactivated because ImmediateUserUsedOfNvMJobMapping is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define BSWM_INITVALUEOFNVMJOBMAPPING                                 STD_ON
#define BSWM_NVMJOBSTATE                                              STD_ON
#define BSWM_PDURRXINDICATIONMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_EXTERNALIDOFPDURRXINDICATIONMAPPING                      STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.ExternalId' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURRXINDICATIONMAPPING             STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURRXINDICATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURRXINDICATIONMAPPING               STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_INITVALUEOFPDURRXINDICATIONMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.InitValue' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_PDURRXINDICATIONSTATEIDXOFPDURRXINDICATIONMAPPING        STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationMapping.PduRRxIndicationStateIdx' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_PDURRXINDICATIONSTATE                                    STD_OFF  /**< Deactivateable: 'BswM_PduRRxIndicationState' Reason: 'No Mode Request for BswMPduRRxIndication configured.' */
#define BSWM_PDURTPRXINDICATIONMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_EXTERNALIDOFPDURTPRXINDICATIONMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTPRXINDICATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTPRXINDICATIONMAPPING         STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTPRXINDICATIONMAPPING             STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_INITVALUEOFPDURTPRXINDICATIONMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.InitValue' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_PDURTPRXINDICATIONSTATEIDXOFPDURTPRXINDICATIONMAPPING    STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationMapping.PduRTpRxIndicationStateIdx' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_PDURTPRXINDICATIONSTATE                                  STD_OFF  /**< Deactivateable: 'BswM_PduRTpRxIndicationState' Reason: 'No Mode Request for BswMPduRTpRxIndication configured.' */
#define BSWM_PDURTPSTARTOFRECEPTIONMAPPING                            STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_EXTERNALIDOFPDURTPSTARTOFRECEPTIONMAPPING                STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTPSTARTOFRECEPTIONMAPPING       STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTPSTARTOFRECEPTIONMAPPING     STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTPSTARTOFRECEPTIONMAPPING         STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_INITVALUEOFPDURTPSTARTOFRECEPTIONMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.InitValue' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_PDURTPSTARTOFRECEPTIONSTATEIDXOFPDURTPSTARTOFRECEPTIONMAPPING STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionMapping.PduRTpStartOfReceptionStateIdx' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_PDURTPSTARTOFRECEPTIONSTATE                              STD_OFF  /**< Deactivateable: 'BswM_PduRTpStartOfReceptionState' Reason: 'No Mode Request for BswMPduRTpStartOfReception configured.' */
#define BSWM_PDURTPTXCONFIRMATIONMAPPING                              STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_EXTERNALIDOFPDURTPTXCONFIRMATIONMAPPING                  STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTPTXCONFIRMATIONMAPPING         STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTPTXCONFIRMATIONMAPPING       STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTPTXCONFIRMATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_INITVALUEOFPDURTPTXCONFIRMATIONMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.InitValue' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_PDURTPTXCONFIRMATIONSTATEIDXOFPDURTPTXCONFIRMATIONMAPPING STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationMapping.PduRTpTxConfirmationStateIdx' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_PDURTPTXCONFIRMATIONSTATE                                STD_OFF  /**< Deactivateable: 'BswM_PduRTpTxConfirmationState' Reason: 'No Mode Request for BswMPduRTpTxConfirmation configured.' */
#define BSWM_PDURTRANSMITMAPPING                                      STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_EXTERNALIDOFPDURTRANSMITMAPPING                          STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTRANSMITMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTRANSMITMAPPING               STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTRANSMITMAPPING                   STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_INITVALUEOFPDURTRANSMITMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.InitValue' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_PDURTRANSMITSTATEIDXOFPDURTRANSMITMAPPING                STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitMapping.PduRTransmitStateIdx' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_PDURTRANSMITSTATE                                        STD_OFF  /**< Deactivateable: 'BswM_PduRTransmitState' Reason: 'No Mode Request for BswMPduRTransmit configured.' */
#define BSWM_PDURTXCONFIRMATIONMAPPING                                STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_EXTERNALIDOFPDURTXCONFIRMATIONMAPPING                    STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.ExternalId' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFPDURTXCONFIRMATIONMAPPING           STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFPDURTXCONFIRMATIONMAPPING         STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFPDURTXCONFIRMATIONMAPPING             STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_INITVALUEOFPDURTXCONFIRMATIONMAPPING                     STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.InitValue' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_PDURTXCONFIRMATIONSTATEIDXOFPDURTXCONFIRMATIONMAPPING    STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationMapping.PduRTxConfirmationStateIdx' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_PDURTXCONFIRMATIONSTATE                                  STD_OFF  /**< Deactivateable: 'BswM_PduRTxConfirmationState' Reason: 'No Mode Request for BswMPduRTxConfirmation configured.' */
#define BSWM_RULESTATES                                               STD_ON
#define BSWM_RULES                                                    STD_ON
#define BSWM_FCTPTROFRULES                                            STD_ON
#define BSWM_IDOFRULES                                                STD_ON
#define BSWM_INITOFRULES                                              STD_ON
#define BSWM_RULESIND                                                 STD_ON
#define BSWM_SDCLIENTSERVICEMAPPING                                   STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_EXTERNALIDOFSDCLIENTSERVICEMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.ExternalId' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFSDCLIENTSERVICEMAPPING              STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFSDCLIENTSERVICEMAPPING            STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFSDCLIENTSERVICEMAPPING                STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_INITVALUEOFSDCLIENTSERVICEMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceMapping.InitValue' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_SDCLIENTSERVICESTATE                                     STD_OFF  /**< Deactivateable: 'BswM_SdClientServiceState' Reason: 'No Mode Request for BswMSdClientServiceCurrentState configured.' */
#define BSWM_SDCONSUMEDEVENTMAPPING                                   STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_EXTERNALIDOFSDCONSUMEDEVENTMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.ExternalId' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFSDCONSUMEDEVENTMAPPING              STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFSDCONSUMEDEVENTMAPPING            STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFSDCONSUMEDEVENTMAPPING                STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_INITVALUEOFSDCONSUMEDEVENTMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventMapping.InitValue' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_SDCONSUMEDEVENTSTATE                                     STD_OFF  /**< Deactivateable: 'BswM_SdConsumedEventState' Reason: 'No Mode Request for BswMSdConsumedEventGroupCurrentState configured.' */
#define BSWM_SDEVENTHANDLERMAPPING                                    STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_EXTERNALIDOFSDEVENTHANDLERMAPPING                        STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.ExternalId' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFSDEVENTHANDLERMAPPING               STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFSDEVENTHANDLERMAPPING             STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFSDEVENTHANDLERMAPPING                 STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_INITVALUEOFSDEVENTHANDLERMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerMapping.InitValue' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_SDEVENTHANDLERSTATE                                      STD_OFF  /**< Deactivateable: 'BswM_SdEventHandlerState' Reason: 'No Mode Request for BswMSdEventHandlerCurrentState configured.' */
#define BSWM_SIZEOFACTIONLISTQUEUE                                    STD_ON
#define BSWM_SIZEOFACTIONLISTS                                        STD_ON
#define BSWM_SIZEOFCANSMCHANNELMAPPING                                STD_ON
#define BSWM_SIZEOFCANSMCHANNELSTATE                                  STD_ON
#define BSWM_SIZEOFCOMMCHANNELMAPPING                                 STD_ON
#define BSWM_SIZEOFCOMMCHANNELSTATE                                   STD_ON
#define BSWM_SIZEOFDEFERREDRULES                                      STD_ON
#define BSWM_SIZEOFGENERICMAPPING                                     STD_ON
#define BSWM_SIZEOFGENERICSTATE                                       STD_ON
#define BSWM_SIZEOFIMMEDIATEUSER                                      STD_ON
#define BSWM_SIZEOFMODEREQUESTQUEUE                                   STD_ON
#define BSWM_SIZEOFNVMJOBMAPPING                                      STD_ON
#define BSWM_SIZEOFNVMJOBSTATE                                        STD_ON
#define BSWM_SIZEOFRULESTATES                                         STD_ON
#define BSWM_SIZEOFRULES                                              STD_ON
#define BSWM_SIZEOFRULESIND                                           STD_ON
#define BSWM_SIZEOFTIMERSTATE                                         STD_ON
#define BSWM_SIZEOFTIMERVALUE                                         STD_ON
#define BSWM_TIMERSTATE                                               STD_ON
#define BSWM_TIMERVALUE                                               STD_ON
#define BSWM_WDGMMAPPING                                              STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_EXTERNALIDOFWDGMMAPPING                                  STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.ExternalId' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_IMMEDIATEUSERENDIDXOFWDGMMAPPING                         STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.ImmediateUserEndIdx' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_IMMEDIATEUSERSTARTIDXOFWDGMMAPPING                       STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.ImmediateUserStartIdx' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_IMMEDIATEUSERUSEDOFWDGMMAPPING                           STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.ImmediateUserUsed' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_INITVALUEOFWDGMMAPPING                                   STD_OFF  /**< Deactivateable: 'BswM_WdgMMapping.InitValue' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_WDGMSTATE                                                STD_OFF  /**< Deactivateable: 'BswM_WdgMState' Reason: 'No Mode Request for BswMWdgMRequestPartitionReset configured.' */
#define BSWM_PCCONFIG                                                 STD_ON
#define BSWM_ACTIONLISTQUEUEOFPCCONFIG                                STD_ON
#define BSWM_ACTIONLISTSOFPCCONFIG                                    STD_ON
#define BSWM_CANSMCHANNELMAPPINGOFPCCONFIG                            STD_ON
#define BSWM_CANSMCHANNELSTATEOFPCCONFIG                              STD_ON
#define BSWM_COMMCHANNELMAPPINGOFPCCONFIG                             STD_ON
#define BSWM_COMMCHANNELSTATEOFPCCONFIG                               STD_ON
#define BSWM_DEFERREDRULESOFPCCONFIG                                  STD_ON
#define BSWM_FINALMAGICNUMBEROFPCCONFIG                               STD_OFF  /**< Deactivateable: 'BswM_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_GENERICMAPPINGOFPCCONFIG                                 STD_ON
#define BSWM_GENERICSTATEOFPCCONFIG                                   STD_ON
#define BSWM_IMMEDIATEUSEROFPCCONFIG                                  STD_ON
#define BSWM_INITDATAHASHCODEOFPCCONFIG                               STD_OFF  /**< Deactivateable: 'BswM_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define BSWM_INITIALIZEDOFPCCONFIG                                    STD_ON
#define BSWM_MODEREQUESTQUEUEOFPCCONFIG                               STD_ON
#define BSWM_NVMJOBMAPPINGOFPCCONFIG                                  STD_ON
#define BSWM_NVMJOBSTATEOFPCCONFIG                                    STD_ON
#define BSWM_RULESTATESOFPCCONFIG                                     STD_ON
#define BSWM_RULESINDOFPCCONFIG                                       STD_ON
#define BSWM_RULESOFPCCONFIG                                          STD_ON
#define BSWM_SIZEOFACTIONLISTQUEUEOFPCCONFIG                          STD_ON
#define BSWM_SIZEOFACTIONLISTSOFPCCONFIG                              STD_ON
#define BSWM_SIZEOFCANSMCHANNELMAPPINGOFPCCONFIG                      STD_ON
#define BSWM_SIZEOFCANSMCHANNELSTATEOFPCCONFIG                        STD_ON
#define BSWM_SIZEOFCOMMCHANNELMAPPINGOFPCCONFIG                       STD_ON
#define BSWM_SIZEOFCOMMCHANNELSTATEOFPCCONFIG                         STD_ON
#define BSWM_SIZEOFDEFERREDRULESOFPCCONFIG                            STD_ON
#define BSWM_SIZEOFGENERICMAPPINGOFPCCONFIG                           STD_ON
#define BSWM_SIZEOFGENERICSTATEOFPCCONFIG                             STD_ON
#define BSWM_SIZEOFIMMEDIATEUSEROFPCCONFIG                            STD_ON
#define BSWM_SIZEOFMODEREQUESTQUEUEOFPCCONFIG                         STD_ON
#define BSWM_SIZEOFNVMJOBMAPPINGOFPCCONFIG                            STD_ON
#define BSWM_SIZEOFNVMJOBSTATEOFPCCONFIG                              STD_ON
#define BSWM_SIZEOFRULESTATESOFPCCONFIG                               STD_ON
#define BSWM_SIZEOFRULESINDOFPCCONFIG                                 STD_ON
#define BSWM_SIZEOFRULESOFPCCONFIG                                    STD_ON
#define BSWM_SIZEOFTIMERSTATEOFPCCONFIG                               STD_ON
#define BSWM_SIZEOFTIMERVALUEOFPCCONFIG                               STD_ON
#define BSWM_TIMERSTATEOFPCCONFIG                                     STD_ON
#define BSWM_TIMERVALUEOFPCCONFIG                                     STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCMinNumericValueDefines  BswM Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define BSWM_MIN_ACTIONLISTQUEUE                                      0U
#define BSWM_MIN_MODEREQUESTQUEUE                                     0U
#define BSWM_MIN_RULESTATES                                           0U
#define BSWM_MIN_TIMERSTATE                                           0U
#define BSWM_MIN_TIMERVALUE                                           0UL
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCMaxNumericValueDefines  BswM Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define BSWM_MAX_ACTIONLISTQUEUE                                      255U
#define BSWM_MAX_MODEREQUESTQUEUE                                     255U
#define BSWM_MAX_RULESTATES                                           255U
#define BSWM_MAX_TIMERSTATE                                           255U
#define BSWM_MAX_TIMERVALUE                                           4294967295UL
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCNoReferenceDefines  BswM No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define BSWM_NO_IMMEDIATEUSERENDIDXOFCANSMCHANNELMAPPING              255U
#define BSWM_NO_IMMEDIATEUSERSTARTIDXOFCANSMCHANNELMAPPING            255U
#define BSWM_NO_IMMEDIATEUSERENDIDXOFGENERICMAPPING                   255U
#define BSWM_NO_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING                 255U
#define BSWM_NO_RULESINDENDIDXOFIMMEDIATEUSER                         255U
#define BSWM_NO_RULESINDSTARTIDXOFIMMEDIATEUSER                       255U
#define BSWM_NO_IDOFRULES                                             255U
#define BSWM_NO_RULESIND                                              255U
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCMaskedBitDefines  BswM Masked Bit Defines (PRE_COMPILE)
  \brief  These defines are masks to extract packed boolean data.
  \{
*/ 
#define BSWM_ONINITOFIMMEDIATEUSER_MASK                               0x02U
#define BSWM_RULESINDUSEDOFIMMEDIATEUSER_MASK                         0x01U
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCIsReducedToDefineDefines  BswM Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define BSWM_ISDEF_FCTPTROFACTIONLISTS                                STD_OFF
#define BSWM_ISDEF_EXTERNALIDOFCANSMCHANNELMAPPING                    STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERENDIDXOFCANSMCHANNELMAPPING           STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERSTARTIDXOFCANSMCHANNELMAPPING         STD_ON
#define BSWM_ISDEF_IMMEDIATEUSERUSEDOFCANSMCHANNELMAPPING             STD_ON
#define BSWM_ISDEF_INITVALUEOFCANSMCHANNELMAPPING                     STD_ON
#define BSWM_ISDEF_EXTERNALIDOFCOMMCHANNELMAPPING                     STD_ON
#define BSWM_ISDEF_INITVALUEOFCOMMCHANNELMAPPING                      STD_ON
#define BSWM_ISDEF_RULESIDXOFDEFERREDRULES                            STD_OFF
#define BSWM_ISDEF_EXTERNALIDOFGENERICMAPPING                         STD_OFF
#define BSWM_ISDEF_IMMEDIATEUSERENDIDXOFGENERICMAPPING                STD_OFF
#define BSWM_ISDEF_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING              STD_OFF
#define BSWM_ISDEF_IMMEDIATEUSERUSEDOFGENERICMAPPING                  STD_OFF
#define BSWM_ISDEF_INITVALUEOFGENERICMAPPING                          STD_OFF
#define BSWM_ISDEF_MASKEDBITSOFIMMEDIATEUSER                          STD_OFF
#define BSWM_ISDEF_ONINITOFIMMEDIATEUSER                              STD_OFF
#define BSWM_ISDEF_RULESINDENDIDXOFIMMEDIATEUSER                      STD_OFF
#define BSWM_ISDEF_RULESINDSTARTIDXOFIMMEDIATEUSER                    STD_OFF
#define BSWM_ISDEF_RULESINDUSEDOFIMMEDIATEUSER                        STD_OFF
#define BSWM_ISDEF_EXTERNALIDOFNVMJOBMAPPING                          STD_ON
#define BSWM_ISDEF_INITVALUEOFNVMJOBMAPPING                           STD_ON
#define BSWM_ISDEF_FCTPTROFRULES                                      STD_OFF
#define BSWM_ISDEF_IDOFRULES                                          STD_OFF
#define BSWM_ISDEF_INITOFRULES                                        STD_ON
#define BSWM_ISDEF_RULESIND                                           STD_OFF
#define BSWM_ISDEF_ACTIONLISTQUEUEOFPCCONFIG                          STD_ON
#define BSWM_ISDEF_ACTIONLISTSOFPCCONFIG                              STD_ON
#define BSWM_ISDEF_CANSMCHANNELMAPPINGOFPCCONFIG                      STD_ON
#define BSWM_ISDEF_CANSMCHANNELSTATEOFPCCONFIG                        STD_ON
#define BSWM_ISDEF_COMMCHANNELMAPPINGOFPCCONFIG                       STD_ON
#define BSWM_ISDEF_COMMCHANNELSTATEOFPCCONFIG                         STD_ON
#define BSWM_ISDEF_DEFERREDRULESOFPCCONFIG                            STD_ON
#define BSWM_ISDEF_GENERICMAPPINGOFPCCONFIG                           STD_ON
#define BSWM_ISDEF_GENERICSTATEOFPCCONFIG                             STD_ON
#define BSWM_ISDEF_IMMEDIATEUSEROFPCCONFIG                            STD_ON
#define BSWM_ISDEF_INITIALIZEDOFPCCONFIG                              STD_ON
#define BSWM_ISDEF_MODEREQUESTQUEUEOFPCCONFIG                         STD_ON
#define BSWM_ISDEF_NVMJOBMAPPINGOFPCCONFIG                            STD_ON
#define BSWM_ISDEF_NVMJOBSTATEOFPCCONFIG                              STD_ON
#define BSWM_ISDEF_RULESTATESOFPCCONFIG                               STD_ON
#define BSWM_ISDEF_RULESINDOFPCCONFIG                                 STD_ON
#define BSWM_ISDEF_RULESOFPCCONFIG                                    STD_ON
#define BSWM_ISDEF_TIMERSTATEOFPCCONFIG                               STD_ON
#define BSWM_ISDEF_TIMERVALUEOFPCCONFIG                               STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCEqualsAlwaysToDefines  BswM Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define BSWM_EQ2_FCTPTROFACTIONLISTS                                  
#define BSWM_EQ2_EXTERNALIDOFCANSMCHANNELMAPPING                      ComMConf_ComMChannel_CAN00_f26020e5
#define BSWM_EQ2_IMMEDIATEUSERENDIDXOFCANSMCHANNELMAPPING             1U
#define BSWM_EQ2_IMMEDIATEUSERSTARTIDXOFCANSMCHANNELMAPPING           0U
#define BSWM_EQ2_IMMEDIATEUSERUSEDOFCANSMCHANNELMAPPING               TRUE
#define BSWM_EQ2_INITVALUEOFCANSMCHANNELMAPPING                       CANSM_BSWM_NO_COMMUNICATION
#define BSWM_EQ2_EXTERNALIDOFCOMMCHANNELMAPPING                       ComMConf_ComMChannel_CAN00_f26020e5
#define BSWM_EQ2_INITVALUEOFCOMMCHANNELMAPPING                        COMM_NO_COMMUNICATION
#define BSWM_EQ2_RULESIDXOFDEFERREDRULES                              
#define BSWM_EQ2_EXTERNALIDOFGENERICMAPPING                           
#define BSWM_EQ2_IMMEDIATEUSERENDIDXOFGENERICMAPPING                  
#define BSWM_EQ2_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING                
#define BSWM_EQ2_IMMEDIATEUSERUSEDOFGENERICMAPPING                    
#define BSWM_EQ2_INITVALUEOFGENERICMAPPING                            
#define BSWM_EQ2_MASKEDBITSOFIMMEDIATEUSER                            
#define BSWM_EQ2_ONINITOFIMMEDIATEUSER                                
#define BSWM_EQ2_RULESINDENDIDXOFIMMEDIATEUSER                        
#define BSWM_EQ2_RULESINDSTARTIDXOFIMMEDIATEUSER                      
#define BSWM_EQ2_RULESINDUSEDOFIMMEDIATEUSER                          
#define BSWM_EQ2_EXTERNALIDOFNVMJOBMAPPING                            13
#define BSWM_EQ2_INITVALUEOFNVMJOBMAPPING                             NVM_REQ_OK
#define BSWM_EQ2_FCTPTROFRULES                                        
#define BSWM_EQ2_IDOFRULES                                            
#define BSWM_EQ2_INITOFRULES                                          BSWM_FALSE
#define BSWM_EQ2_RULESIND                                             
#define BSWM_EQ2_ACTIONLISTQUEUEOFPCCONFIG                            BswM_ActionListQueue.raw
#define BSWM_EQ2_ACTIONLISTSOFPCCONFIG                                BswM_ActionLists
#define BSWM_EQ2_CANSMCHANNELMAPPINGOFPCCONFIG                        BswM_CanSMChannelMapping
#define BSWM_EQ2_CANSMCHANNELSTATEOFPCCONFIG                          BswM_CanSMChannelState.raw
#define BSWM_EQ2_COMMCHANNELMAPPINGOFPCCONFIG                         BswM_ComMChannelMapping
#define BSWM_EQ2_COMMCHANNELSTATEOFPCCONFIG                           BswM_ComMChannelState.raw
#define BSWM_EQ2_DEFERREDRULESOFPCCONFIG                              BswM_DeferredRules
#define BSWM_EQ2_GENERICMAPPINGOFPCCONFIG                             BswM_GenericMapping
#define BSWM_EQ2_GENERICSTATEOFPCCONFIG                               BswM_GenericState.raw
#define BSWM_EQ2_IMMEDIATEUSEROFPCCONFIG                              BswM_ImmediateUser
#define BSWM_EQ2_INITIALIZEDOFPCCONFIG                                BswM_Initialized
#define BSWM_EQ2_MODEREQUESTQUEUEOFPCCONFIG                           BswM_ModeRequestQueue.raw
#define BSWM_EQ2_NVMJOBMAPPINGOFPCCONFIG                              BswM_NvMJobMapping
#define BSWM_EQ2_NVMJOBSTATEOFPCCONFIG                                BswM_NvMJobState.raw
#define BSWM_EQ2_RULESTATESOFPCCONFIG                                 BswM_RuleStates
#define BSWM_EQ2_RULESINDOFPCCONFIG                                   BswM_RulesInd
#define BSWM_EQ2_RULESOFPCCONFIG                                      BswM_Rules
#define BSWM_EQ2_TIMERSTATEOFPCCONFIG                                 BswM_TimerState.raw
#define BSWM_EQ2_TIMERVALUEOFPCCONFIG                                 BswM_TimerValue.raw
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCSymbolicInitializationPointers  BswM Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define BswM_Config_Ptr                                               NULL_PTR  /**< symbolic identifier which shall be used to initialize 'BswM' */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCInitializationSymbols  BswM Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define BswM_Config                                                   NULL_PTR  /**< symbolic identifier which could be used to initialize 'BswM */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGeneral  BswM General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define BSWM_CHECK_INIT_POINTER                                       STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define BSWM_FINAL_MAGIC_NUMBER                                       0x2A1EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of BswM */
#define BSWM_INDIVIDUAL_POSTBUILD                                     STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'BswM' is not configured to be postbuild capable. */
#define BSWM_INIT_DATA                                                BSWM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define BSWM_INIT_DATA_HASH_CODE                                      -1130544141L  /**< the precompile constant to validate the initialization structure at initialization time of BswM with a hashcode. The seed value is '0x2A1EU' */
#define BSWM_USE_ECUM_BSW_ERROR_HOOK                                  STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define BSWM_USE_INIT_POINTER                                         STD_OFF  /**< STD_ON if the init pointer BswM shall be used. */
/** 
  \}
*/ 



/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  BswMPBDataSwitches  BswM Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define BSWM_PBCONFIG                                                 STD_OFF  /**< Deactivateable: 'BswM_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define BSWM_LTCONFIGIDXOFPBCONFIG                                    STD_OFF  /**< Deactivateable: 'BswM_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define BSWM_PCCONFIGIDXOFPBCONFIG                                    STD_OFF  /**< Deactivateable: 'BswM_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 



/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/* PRQA S 0639, 0779 PRECOMPILEGLOBALDATATYPES */ /* MD_MSR_1.1_639, MD_BswM_0779 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  BswMPCIterableTypes  BswM Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate BswM_ActionLists */
typedef uint8_least BswM_ActionListsIterType;

/**   \brief  type used to iterate BswM_CanSMChannelMapping */
typedef uint8_least BswM_CanSMChannelMappingIterType;

/**   \brief  type used to iterate BswM_ComMChannelMapping */
typedef uint8_least BswM_ComMChannelMappingIterType;

/**   \brief  type used to iterate BswM_DeferredRules */
typedef uint8_least BswM_DeferredRulesIterType;

/**   \brief  type used to iterate BswM_GenericMapping */
typedef uint8_least BswM_GenericMappingIterType;

/**   \brief  type used to iterate BswM_ImmediateUser */
typedef uint8_least BswM_ImmediateUserIterType;

/**   \brief  type used to iterate BswM_NvMJobMapping */
typedef uint8_least BswM_NvMJobMappingIterType;

/**   \brief  type used to iterate BswM_Rules */
typedef uint8_least BswM_RulesIterType;

/**   \brief  type used to iterate BswM_RulesInd */
typedef uint8_least BswM_RulesIndIterType;

/**   \brief  type used to iterate BswM_TimerState */
typedef uint8_least BswM_TimerStateIterType;

/**   \brief  type used to iterate BswM_TimerValue */
typedef uint8_least BswM_TimerValueIterType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCIterableTypesWithSizeRelations  BswM Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate BswM_ActionListQueue */
typedef BswM_ActionListsIterType BswM_ActionListQueueIterType;

/**   \brief  type used to iterate BswM_CanSMChannelState */
typedef BswM_CanSMChannelMappingIterType BswM_CanSMChannelStateIterType;

/**   \brief  type used to iterate BswM_ComMChannelState */
typedef BswM_ComMChannelMappingIterType BswM_ComMChannelStateIterType;

/**   \brief  type used to iterate BswM_GenericState */
typedef BswM_GenericMappingIterType BswM_GenericStateIterType;

/**   \brief  type used to iterate BswM_ModeRequestQueue */
typedef BswM_ImmediateUserIterType BswM_ModeRequestQueueIterType;

/**   \brief  type used to iterate BswM_NvMJobState */
typedef BswM_NvMJobMappingIterType BswM_NvMJobStateIterType;

/**   \brief  type used to iterate BswM_RuleStates */
typedef BswM_RulesIterType BswM_RuleStatesIterType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCValueTypes  BswM Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for BswM_ActionListQueue */
typedef uint8 BswM_ActionListQueueType;

/**   \brief  value based type definition for BswM_ExternalIdOfCanSMChannelMapping */
typedef uint32 BswM_ExternalIdOfCanSMChannelMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserEndIdxOfCanSMChannelMapping */
typedef uint8 BswM_ImmediateUserEndIdxOfCanSMChannelMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserStartIdxOfCanSMChannelMapping */
typedef uint8 BswM_ImmediateUserStartIdxOfCanSMChannelMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserUsedOfCanSMChannelMapping */
typedef boolean BswM_ImmediateUserUsedOfCanSMChannelMappingType;

/**   \brief  value based type definition for BswM_ExternalIdOfComMChannelMapping */
typedef uint32 BswM_ExternalIdOfComMChannelMappingType;

/**   \brief  value based type definition for BswM_RulesIdxOfDeferredRules */
typedef uint8 BswM_RulesIdxOfDeferredRulesType;

/**   \brief  value based type definition for BswM_ExternalIdOfGenericMapping */
typedef uint32 BswM_ExternalIdOfGenericMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserEndIdxOfGenericMapping */
typedef uint8 BswM_ImmediateUserEndIdxOfGenericMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserStartIdxOfGenericMapping */
typedef uint8 BswM_ImmediateUserStartIdxOfGenericMappingType;

/**   \brief  value based type definition for BswM_ImmediateUserUsedOfGenericMapping */
typedef boolean BswM_ImmediateUserUsedOfGenericMappingType;

/**   \brief  value based type definition for BswM_MaskedBitsOfImmediateUser */
typedef uint8 BswM_MaskedBitsOfImmediateUserType;

/**   \brief  value based type definition for BswM_OnInitOfImmediateUser */
typedef boolean BswM_OnInitOfImmediateUserType;

/**   \brief  value based type definition for BswM_RulesIndEndIdxOfImmediateUser */
typedef uint8 BswM_RulesIndEndIdxOfImmediateUserType;

/**   \brief  value based type definition for BswM_RulesIndStartIdxOfImmediateUser */
typedef uint8 BswM_RulesIndStartIdxOfImmediateUserType;

/**   \brief  value based type definition for BswM_RulesIndUsedOfImmediateUser */
typedef boolean BswM_RulesIndUsedOfImmediateUserType;

/**   \brief  value based type definition for BswM_Initialized */
typedef boolean BswM_InitializedType;

/**   \brief  value based type definition for BswM_ModeRequestQueue */
typedef uint8 BswM_ModeRequestQueueType;

/**   \brief  value based type definition for BswM_ExternalIdOfNvMJobMapping */
typedef uint32 BswM_ExternalIdOfNvMJobMappingType;

/**   \brief  value based type definition for BswM_RuleStates */
typedef uint8 BswM_RuleStatesType;

/**   \brief  value based type definition for BswM_IdOfRules */
typedef uint8 BswM_IdOfRulesType;

/**   \brief  value based type definition for BswM_InitOfRules */
typedef uint8 BswM_InitOfRulesType;

/**   \brief  value based type definition for BswM_RulesInd */
typedef uint8 BswM_RulesIndType;

/**   \brief  value based type definition for BswM_SizeOfActionListQueue */
typedef uint8 BswM_SizeOfActionListQueueType;

/**   \brief  value based type definition for BswM_SizeOfActionLists */
typedef uint8 BswM_SizeOfActionListsType;

/**   \brief  value based type definition for BswM_SizeOfCanSMChannelMapping */
typedef uint8 BswM_SizeOfCanSMChannelMappingType;

/**   \brief  value based type definition for BswM_SizeOfCanSMChannelState */
typedef uint8 BswM_SizeOfCanSMChannelStateType;

/**   \brief  value based type definition for BswM_SizeOfComMChannelMapping */
typedef uint8 BswM_SizeOfComMChannelMappingType;

/**   \brief  value based type definition for BswM_SizeOfComMChannelState */
typedef uint8 BswM_SizeOfComMChannelStateType;

/**   \brief  value based type definition for BswM_SizeOfDeferredRules */
typedef uint8 BswM_SizeOfDeferredRulesType;

/**   \brief  value based type definition for BswM_SizeOfGenericMapping */
typedef uint8 BswM_SizeOfGenericMappingType;

/**   \brief  value based type definition for BswM_SizeOfGenericState */
typedef uint8 BswM_SizeOfGenericStateType;

/**   \brief  value based type definition for BswM_SizeOfImmediateUser */
typedef uint8 BswM_SizeOfImmediateUserType;

/**   \brief  value based type definition for BswM_SizeOfModeRequestQueue */
typedef uint8 BswM_SizeOfModeRequestQueueType;

/**   \brief  value based type definition for BswM_SizeOfNvMJobMapping */
typedef uint8 BswM_SizeOfNvMJobMappingType;

/**   \brief  value based type definition for BswM_SizeOfNvMJobState */
typedef uint8 BswM_SizeOfNvMJobStateType;

/**   \brief  value based type definition for BswM_SizeOfRuleStates */
typedef uint8 BswM_SizeOfRuleStatesType;

/**   \brief  value based type definition for BswM_SizeOfRules */
typedef uint8 BswM_SizeOfRulesType;

/**   \brief  value based type definition for BswM_SizeOfRulesInd */
typedef uint8 BswM_SizeOfRulesIndType;

/**   \brief  value based type definition for BswM_SizeOfTimerState */
typedef uint8 BswM_SizeOfTimerStateType;

/**   \brief  value based type definition for BswM_SizeOfTimerValue */
typedef uint8 BswM_SizeOfTimerValueType;

/**   \brief  value based type definition for BswM_TimerState */
typedef uint8 BswM_TimerStateType;

/**   \brief  value based type definition for BswM_TimerValue */
typedef uint32 BswM_TimerValueType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCStructTypes  BswM Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in BswM_ActionLists */
typedef struct sBswM_ActionListsType
{
  BswM_ActionListFuncType FctPtrOfActionLists;  /**< Pointer to the array list function. */
} BswM_ActionListsType;

/**   \brief  type used in BswM_CanSMChannelMapping */
typedef struct sBswM_CanSMChannelMappingType
{
  uint8 BswM_CanSMChannelMappingNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_CanSMChannelMappingType;

/**   \brief  type used in BswM_ComMChannelMapping */
typedef struct sBswM_ComMChannelMappingType
{
  uint8 BswM_ComMChannelMappingNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_ComMChannelMappingType;

/**   \brief  type used in BswM_DeferredRules */
typedef struct sBswM_DeferredRulesType
{
  BswM_RulesIdxOfDeferredRulesType RulesIdxOfDeferredRules;  /**< the index of the 1:1 relation pointing to BswM_Rules */
} BswM_DeferredRulesType;

/**   \brief  type used in BswM_GenericMapping */
typedef struct sBswM_GenericMappingType
{
  BswM_ExternalIdOfGenericMappingType ExternalIdOfGenericMapping;  /**< External id of BswMGenericRequest. */
  BswM_ImmediateUserEndIdxOfGenericMappingType ImmediateUserEndIdxOfGenericMapping;  /**< the end index of the 0:n relation pointing to BswM_ImmediateUser */
  BswM_ImmediateUserStartIdxOfGenericMappingType ImmediateUserStartIdxOfGenericMapping;  /**< the start index of the 0:n relation pointing to BswM_ImmediateUser */
  BswM_ModeType InitValueOfGenericMapping;  /**< Initialization value of port. */
} BswM_GenericMappingType;

/**   \brief  type used in BswM_ImmediateUser */
typedef struct sBswM_ImmediateUserType
{
  BswM_MaskedBitsOfImmediateUserType MaskedBitsOfImmediateUser;  /**< contains bitcoded the boolean data of BswM_OnInitOfImmediateUser, BswM_RulesIndUsedOfImmediateUser */
  BswM_RulesIndEndIdxOfImmediateUserType RulesIndEndIdxOfImmediateUser;  /**< the end index of the 0:n relation pointing to BswM_RulesInd */
  BswM_RulesIndStartIdxOfImmediateUserType RulesIndStartIdxOfImmediateUser;  /**< the start index of the 0:n relation pointing to BswM_RulesInd */
} BswM_ImmediateUserType;

/**   \brief  type used in BswM_NvMJobMapping */
typedef struct sBswM_NvMJobMappingType
{
  uint8 BswM_NvMJobMappingNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_NvMJobMappingType;

/**   \brief  type used in BswM_Rules */
typedef struct sBswM_RulesType
{
  BswM_IdOfRulesType IdOfRules;  /**< External id of rule. */
  BswM_RuleTableFctPtrType FctPtrOfRules;  /**< Pointer to the rule function which does the arbitration. */
} BswM_RulesType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCSymbolicStructTypes  BswM Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to BswM_ActionListQueue */
typedef struct sBswM_ActionListQueueStructTag
{
  BswM_ActionListQueueType AL_INIT_AL_Initialize[1];
  BswM_ActionListQueueType AL_BswMActionList_EcuShutdown[1];
  BswM_ActionListQueueType AL_CC_AL_CAN00_f26020e5_Disable_DM[1];
  BswM_ActionListQueueType AL_CC_AL_CAN00_f26020e5_Enable_DM[1];
  BswM_ActionListQueueType AL_CC_AL_CAN00_f26020e5_RX_Disable[1];
  BswM_ActionListQueueType AL_CC_AL_CAN00_f26020e5_RX_EnableNoinit[1];
  BswM_ActionListQueueType AL_CC_AL_CAN00_f26020e5_TX_Disable[1];
  BswM_ActionListQueueType AL_CC_AL_CAN00_f26020e5_TX_EnableNoinit[1];
  BswM_ActionListQueueType AL_ESH_AL_PrepShutdownToWaitForNvM[1];
  BswM_ActionListQueueType AL_ESH_AL_WaitForNvMToShutdown[1];
  BswM_ActionListQueueType AL_ESH_AL_WaitForNvMWakeup[1];
  BswM_ActionListQueueType AL_ESH_AL_RunToPostRun[1];
  BswM_ActionListQueueType AL_ESH_AL_PostRunToRun[1];
  BswM_ActionListQueueType AL_ESH_AL_PostRunToPrepShutdown[1];
  BswM_ActionListQueueType AL_ESH_AL_WakeupToRun[1];
  BswM_ActionListQueueType AL_ESH_AL_WakeupToPrep[1];
  BswM_ActionListQueueType AL_ESH_AL_InitToWakeup[1];
  BswM_ActionListQueueType AL_ESH_AL_DemInit[1];
  BswM_ActionListQueueType AL_ESH_AL_ExitRun[1];
  BswM_ActionListQueueType AL_ESH_AL_ExitPostRun[1];
} sBswM_ActionListQueueStructType;

/**   \brief  type to be used as symbolic data element access to BswM_CanSMChannelState */
typedef struct sBswM_CanSMChannelStateStructTag
{
  CanSM_BswMCurrentStateType MRP_CC_CanSMIndication_CAN00_f26020e5[1];
} sBswM_CanSMChannelStateStructType;

/**   \brief  type to be used as symbolic data element access to BswM_ComMChannelState */
typedef struct sBswM_ComMChannelStateStructTag
{
  ComM_ModeType MRP_ESH_ComMIndication_CAN00_f26020e5[1];
} sBswM_ComMChannelStateStructType;

/**   \brief  type to be used as symbolic data element access to BswM_GenericState */
typedef struct sBswM_GenericStateStructTag
{
  BswM_ModeType MRP_ESH_ComMPendingRequests[1];
  BswM_ModeType MRP_ESH_DemInitStatus[1];
  BswM_ModeType MRP_ESH_State[1];
} sBswM_GenericStateStructType;

/**   \brief  type to be used as symbolic data element access to BswM_ModeRequestQueue */
typedef struct sBswM_ModeRequestQueueStructTag
{
  BswM_ModeRequestQueueType MRP_CC_CanSMIndication_CAN00_f26020e5[1];
  BswM_ModeRequestQueueType MRP_ESH_DemInitStatus[1];
  BswM_ModeRequestQueueType MRP_ESH_State[1];
} sBswM_ModeRequestQueueStructType;

/**   \brief  type to be used as symbolic data element access to BswM_NvMJobState */
typedef struct sBswM_NvMJobStateStructTag
{
  NvM_RequestResultType MRP_ESH_NvMIndication[1];
} sBswM_NvMJobStateStructType;

/**   \brief  type to be used as symbolic data element access to BswM_TimerState */
typedef struct sBswM_TimerStateStructTag
{
  BswM_TimerStateType MRP_ESH_NvM_CancelWriteAllTimer[1];
  BswM_TimerStateType MRP_ESH_NvM_WriteAllTimer[1];
  BswM_TimerStateType MRP_ESH_SelfRunRequestTimer[1];
} sBswM_TimerStateStructType;

/**   \brief  type to be used as symbolic data element access to BswM_TimerValue */
typedef struct sBswM_TimerValueStructTag
{
  BswM_TimerValueType MRP_ESH_NvM_CancelWriteAllTimer[1];
  BswM_TimerValueType MRP_ESH_NvM_WriteAllTimer[1];
  BswM_TimerValueType MRP_ESH_SelfRunRequestTimer[1];
} sBswM_TimerValueStructType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCUnionIndexAndSymbolTypes  BswM Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access BswM_ActionListQueue in an index and symbol based style. */
typedef union uBswM_ActionListQueueTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  BswM_ActionListQueueType raw[20];
  sBswM_ActionListQueueStructType str;
} uBswM_ActionListQueueType;

/**   \brief  type to access BswM_CanSMChannelState in an index and symbol based style. */
typedef union uBswM_CanSMChannelStateTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  CanSM_BswMCurrentStateType raw[1];
  sBswM_CanSMChannelStateStructType str;
} uBswM_CanSMChannelStateType;

/**   \brief  type to access BswM_ComMChannelState in an index and symbol based style. */
typedef union uBswM_ComMChannelStateTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  ComM_ModeType raw[1];
  sBswM_ComMChannelStateStructType str;
} uBswM_ComMChannelStateType;

/**   \brief  type to access BswM_GenericState in an index and symbol based style. */
typedef union uBswM_GenericStateTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  BswM_ModeType raw[3];
  sBswM_GenericStateStructType str;
} uBswM_GenericStateType;

/**   \brief  type to access BswM_ModeRequestQueue in an index and symbol based style. */
typedef union uBswM_ModeRequestQueueTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  BswM_ModeRequestQueueType raw[3];
  sBswM_ModeRequestQueueStructType str;
} uBswM_ModeRequestQueueType;

/**   \brief  type to access BswM_NvMJobState in an index and symbol based style. */
typedef union uBswM_NvMJobStateTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  NvM_RequestResultType raw[1];
  sBswM_NvMJobStateStructType str;
} uBswM_NvMJobStateType;

/**   \brief  type to access BswM_TimerState in an index and symbol based style. */
typedef union uBswM_TimerStateTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  BswM_TimerStateType raw[3];
  sBswM_TimerStateStructType str;
} uBswM_TimerStateType;

/**   \brief  type to access BswM_TimerValue in an index and symbol based style. */
typedef union uBswM_TimerValueTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  BswM_TimerValueType raw[3];
  sBswM_TimerValueStructType str;
} uBswM_TimerValueType;

/** 
  \}
*/ 

/** 
  \defgroup  BswMPCRootValueTypes  BswM Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in BswM_PCConfig */
typedef struct sBswM_PCConfigType
{
  uint8 BswM_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} BswM_PCConfigType;

typedef BswM_PCConfigType BswM_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/* PRQA L:PRECOMPILEGLOBALDATATYPES */

/* PRQA S 0639, 0779 POSTBUILDGLOBALDATATYPES */ /* MD_MSR_1.1_639, MD_BswM_0779 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/* PRQA L:POSTBUILDGLOBALDATATYPES */

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/* PRQA S 3451 EXTERNDECLARATIONS */ /* MD_BswM_3451 */ 

/* PRQA L:EXTERNDECLARATIONS */




/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
&&&~ USER CALLOUT DECLARATIONS
----------------------------------------------------------------------------- */
extern FUNC(void, BSWM_CODE) BswM_INIT_NvMReadAll(void);
extern FUNC(void, BSWM_CODE) BswM_ESH_OnEnterWaitForNvm(void);
extern FUNC(void, BSWM_CODE) BswM_ESH_OnEnterShutdown(void);
extern FUNC(void, BSWM_CODE) BswM_ESH_OnEnterWakeup(void);
extern FUNC(void, BSWM_CODE) BswM_ESH_OnEnterPostRun(void);
extern FUNC(void, BSWM_CODE) BswM_ESH_OnEnterRun(void);
extern FUNC(void, BSWM_CODE) BswM_ESH_OnEnterPrepShutdown(void);
extern FUNC(void, BSWM_CODE) ESH_ComM_CheckPendingRequests(void);

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#endif /* BSWM_CFG_H */

