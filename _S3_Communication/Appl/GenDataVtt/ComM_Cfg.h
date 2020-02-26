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
 *            Module: ComM
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: ComM_Cfg.h
 *   Generation Time: 2016-04-25 12:46:42
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/


#if !defined(COMM_CFG_H)
#define COMM_CFG_H

/* -----------------------------------------------------------------------------
    &&&~ INCLUDES
 ----------------------------------------------------------------------------- */

#include "ComM_Types.h"

/* -----------------------------------------------------------------------------
    &&&~ CONFIGURATION DEFINES
 ----------------------------------------------------------------------------- */

#ifndef COMM_USE_DUMMY_FUNCTIONS
#define COMM_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyFunction */
#endif
#ifndef COMM_USE_DUMMY_STATEMENT
#define COMM_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatement */
#endif
#ifndef COMM_DUMMY_STATEMENT
#define COMM_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef COMM_DUMMY_STATEMENT_CONST
#define COMM_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef COMM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define COMM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef COMM_ATOMIC_VARIABLE_ACCESS
#define COMM_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef COMM_PROCESSOR_CANOEEMU
#define COMM_PROCESSOR_CANOEEMU
#endif
#ifndef COMM_COMP_ANSI
#define COMM_COMP_ANSI
#endif
#ifndef COMM_GEN_GENERATOR_MSR
#define COMM_GEN_GENERATOR_MSR
#endif
#ifndef COMM_CPUTYPE_BITORDER_LSB2MSB
#define COMM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/BitOrder */
#endif
#ifndef COMM_CONFIGURATION_VARIANT_PRECOMPILE
#define COMM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef COMM_CONFIGURATION_VARIANT_LINKTIME
#define COMM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef COMM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define COMM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef COMM_CONFIGURATION_VARIANT
#define COMM_CONFIGURATION_VARIANT COMM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef COMM_POSTBUILD_VARIANT_SUPPORT
#define COMM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif

#ifndef COMM_DEV_ERROR_DETECT
#define COMM_DEV_ERROR_DETECT STD_ON
#endif
#ifndef COMM_DEV_ERROR_REPORT
#define COMM_DEV_ERROR_REPORT STD_ON
#endif

#define COMM_VERSION_INFO_API                           STD_ON

#define COMM_MODE_LIMITATION                            STD_OFF
#define COMM_WAKEUP_INHIBITION                          STD_OFF
#define COMM_PNC_SUPPORT                                STD_OFF
#define COMM_PNC_ACTIVE_COORD                           STD_OFF

#define COMM_NM_SUPPORT                                 STD_ON
#define COMM_NM_GW_EXT_ENABLED                          STD_OFF
#define COMM_SILENT_MODE_SUPPORT                        STD_ON
#define COMM_KEEP_AWAKE_CHANNELS_SUPPORT                STD_ON
#define COMM_BUS_TYPE_INTERNAL_PRESENT                  STD_OFF
#define COMM_BUS_TYPE_FR_PRESENT                        STD_OFF

#define COMM_FULL_COMM_REQUEST_NOTIF                    STD_OFF
#define COMM_MAX_NUMBER_OF_USERS                        1U
#define COMM_DCM_INDICATION                             STD_OFF
#define COMM_J1939NM_SUPPORT                            STD_OFF

#define COMM_SYNCHRONOUS_WAKE_UP                        STD_ON

#define COMM_ACTIVE_CHANNEL                             1U
#define COMM_NVM_SUPPORT                                STD_OFF




/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  ComMPCDataSwitches  ComM Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define COMM_ACTIVEPNCCOMMODE                                         STD_OFF  /**< Deactivateable: 'ComM_ActivePncComMode' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COMM_BUSPNCCOMMODEREQ                                         STD_OFF  /**< Deactivateable: 'ComM_BusPncComModeReq' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COMM_CHANNEL                                                  STD_ON
#define COMM_BUSTYPEOFCHANNEL                                         STD_ON
#define COMM_ENABLEDOFCHANNEL                                         STD_OFF  /**< Deactivateable: 'ComM_Channel.Enabled' Reason: 'the value of ComM_EnabledOfChannel is always 'true' due to this, the array is deactivated.' */
#define COMM_GWTYPEOFCHANNEL                                          STD_ON
#define COMM_INHIBITIONINITVALUEOFCHANNEL                             STD_ON
#define COMM_J1939SUPPORTOFCHANNEL                                    STD_ON
#define COMM_MINFULLCOMTIMEOFCHANNEL                                  STD_OFF  /**< Deactivateable: 'ComM_Channel.MinFullComTime' Reason: 'the value of ComM_MinFullComTimeOfChannel is always '0' due to this, the array is deactivated.' */
#define COMM_NMLIGHTDURATIONOFCHANNEL                                 STD_OFF  /**< Deactivateable: 'ComM_Channel.NmLightDuration' Reason: 'the value of ComM_NmLightDurationOfChannel is always '0' due to this, the array is deactivated.' */
#define COMM_NMLIGHTSILENTDURATIONOFCHANNEL                           STD_OFF  /**< Deactivateable: 'ComM_Channel.NmLightSilentDuration' Reason: 'the value of ComM_NmLightSilentDurationOfChannel is always '0' due to this, the array is deactivated.' */
#define COMM_NMTYPEOFCHANNEL                                          STD_ON
#define COMM_PNCNMREQUESTOFCHANNEL                                    STD_OFF  /**< Deactivateable: 'ComM_Channel.PncNmRequest' Reason: 'PNC Support is disabled' */
#define COMM_CHANNELPB                                                STD_ON
#define COMM_USERREQFULLCOMENDIDXOFCHANNELPB                          STD_ON
#define COMM_USERREQFULLCOMSTARTIDXOFCHANNELPB                        STD_ON
#define COMM_USERREQFULLCOMUSEDOFCHANNELPB                            STD_ON
#define COMM_FINALMAGICNUMBER                                         STD_OFF  /**< Deactivateable: 'ComM_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define COMM_FULLCOMREQUESTERS                                        STD_ON
#define COMM_INITDATAHASHCODE                                         STD_OFF  /**< Deactivateable: 'ComM_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define COMM_LASTSTATECHANGE                                          STD_OFF  /**< Deactivateable: 'ComM_LastStateChange' Reason: 'No user mode Notification configured.' */
#define COMM_PNC                                                      STD_OFF  /**< Deactivateable: 'ComM_Pnc' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_CLEARMASKOFPNC                                           STD_OFF  /**< Deactivateable: 'ComM_Pnc.ClearMask' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_PNCIDOFPNC                                               STD_OFF  /**< Deactivateable: 'ComM_Pnc.PncId' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_SETMASKOFPNC                                             STD_OFF  /**< Deactivateable: 'ComM_Pnc.SetMask' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_PNCCHANNELMAPPING                                        STD_OFF  /**< Deactivateable: 'ComM_PncChannelMapping' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COMM_PNCPSLEEPTIMER                                           STD_OFF  /**< Deactivateable: 'ComM_PncPSleepTimer' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COMM_PNCPB                                                    STD_OFF  /**< Deactivateable: 'ComM_PncPb' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_PNCCHANNELMAPPINGENDIDXOFPNCPB                           STD_OFF  /**< Deactivateable: 'ComM_PncPb.PncChannelMappingEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_PNCCHANNELMAPPINGSTARTIDXOFPNCPB                         STD_OFF  /**< Deactivateable: 'ComM_PncPb.PncChannelMappingStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_PNCCHANNELMAPPINGUSEDOFPNCPB                             STD_OFF  /**< Deactivateable: 'ComM_PncPb.PncChannelMappingUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_PNCSIGNALINDENDIDXOFPNCPB                                STD_OFF  /**< Deactivateable: 'ComM_PncPb.PncSignalIndEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_PNCSIGNALINDSTARTIDXOFPNCPB                              STD_OFF  /**< Deactivateable: 'ComM_PncPb.PncSignalIndStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_PNCSIGNALINDUSEDOFPNCPB                                  STD_OFF  /**< Deactivateable: 'ComM_PncPb.PncSignalIndUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_SIGNALBYTEINDEXOFPNCPB                                   STD_OFF  /**< Deactivateable: 'ComM_PncPb.SignalByteIndex' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_SYSTEMUSEROFPNCPB                                        STD_OFF  /**< Deactivateable: 'ComM_PncPb.SystemUser' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_USERREQPNCFULLCOMENDIDXOFPNCPB                           STD_OFF  /**< Deactivateable: 'ComM_PncPb.UserReqPncFullComEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_USERREQPNCFULLCOMSTARTIDXOFPNCPB                         STD_OFF  /**< Deactivateable: 'ComM_PncPb.UserReqPncFullComStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_PNCSIGNAL                                                STD_OFF  /**< Deactivateable: 'ComM_PncSignal' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_BUSTYPEIDOFPNCSIGNAL                                     STD_OFF  /**< Deactivateable: 'ComM_PncSignal.BusTypeId' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_CHANNELIDXOFPNCSIGNAL                                    STD_OFF  /**< Deactivateable: 'ComM_PncSignal.ChannelIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_CHANNELUSEDOFPNCSIGNAL                                   STD_OFF  /**< Deactivateable: 'ComM_PncSignal.ChannelUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_PNCSIGNALVALUESENDIDXOFPNCSIGNAL                         STD_OFF  /**< Deactivateable: 'ComM_PncSignal.PncSignalValuesEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_PNCSIGNALVALUESSTARTIDXOFPNCSIGNAL                       STD_OFF  /**< Deactivateable: 'ComM_PncSignal.PncSignalValuesStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_PNCSIGNALVALUESUSEDOFPNCSIGNAL                           STD_OFF  /**< Deactivateable: 'ComM_PncSignal.PncSignalValuesUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_TYPEOFPNCSIGNAL                                          STD_OFF  /**< Deactivateable: 'ComM_PncSignal.Type' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_PNCSIGNALIND                                             STD_OFF  /**< Deactivateable: 'ComM_PncSignalInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COMM_PNCSIGNALVALUES                                          STD_OFF  /**< Deactivateable: 'ComM_PncSignalValues' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COMM_SIZEOFCHANNEL                                            STD_ON
#define COMM_SIZEOFCHANNELPB                                          STD_ON
#define COMM_SIZEOFFULLCOMREQUESTERS                                  STD_ON
#define COMM_SIZEOFUSER                                               STD_ON
#define COMM_SIZEOFUSERBYTEMASK                                       STD_ON
#define COMM_SIZEOFUSERREQFULLCOM                                     STD_ON
#define COMM_USER                                                     STD_ON
#define COMM_PNCUSEROFUSER                                            STD_ON
#define COMM_USERBYTEMASKENDIDXOFUSER                                 STD_ON
#define COMM_USERBYTEMASKSTARTIDXOFUSER                               STD_ON
#define COMM_USERBYTEMASKUSEDOFUSER                                   STD_ON
#define COMM_USERPNCBYTEMASKENDIDXOFUSER                              STD_OFF  /**< Deactivateable: 'ComM_User.UserPncByteMaskEndIdx' Reason: 'the optional indirection is deactivated because UserPncByteMaskUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COMM_USERPNCBYTEMASKSTARTIDXOFUSER                            STD_OFF  /**< Deactivateable: 'ComM_User.UserPncByteMaskStartIdx' Reason: 'the optional indirection is deactivated because UserPncByteMaskUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COMM_USERPNCBYTEMASKUSEDOFUSER                                STD_OFF  /**< Deactivateable: 'ComM_User.UserPncByteMaskUsed' Reason: 'the optional indirection is deactivated because UserPncByteMaskUsedOfUser is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COMM_USERBYTEMASK                                             STD_ON
#define COMM_CHANNELOFUSERBYTEMASK                                    STD_ON
#define COMM_CLEARMASKOFUSERBYTEMASK                                  STD_ON
#define COMM_SETMASKOFUSERBYTEMASK                                    STD_ON
#define COMM_USERREQFULLCOMIDXOFUSERBYTEMASK                          STD_ON
#define COMM_USERMODENOTIFUNC                                         STD_OFF  /**< Deactivateable: 'ComM_UserModeNotiFunc' Reason: 'No user mode Notification configured.' */
#define COMM_USERPNCBYTEMASK                                          STD_OFF  /**< Deactivateable: 'ComM_UserPncByteMask' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_CLEARMASKOFUSERPNCBYTEMASK                               STD_OFF  /**< Deactivateable: 'ComM_UserPncByteMask.ClearMask' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_PNCIDOFUSERPNCBYTEMASK                                   STD_OFF  /**< Deactivateable: 'ComM_UserPncByteMask.PncID' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_SETMASKOFUSERPNCBYTEMASK                                 STD_OFF  /**< Deactivateable: 'ComM_UserPncByteMask.SetMask' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_USERREQPNCFULLCOMIDXOFUSERPNCBYTEMASK                    STD_OFF  /**< Deactivateable: 'ComM_UserPncByteMask.UserReqPncFullComIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COMM_USERREQFULLCOM                                           STD_ON
#define COMM_USERREQPNCFULLCOM                                        STD_OFF  /**< Deactivateable: 'ComM_UserReqPncFullCom' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COMM_PCCONFIG                                                 STD_ON
#define COMM_CHANNELOFPCCONFIG                                        STD_ON
#define COMM_CHANNELPBOFPCCONFIG                                      STD_ON
#define COMM_FINALMAGICNUMBEROFPCCONFIG                               STD_OFF  /**< Deactivateable: 'ComM_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define COMM_FULLCOMREQUESTERSOFPCCONFIG                              STD_ON
#define COMM_INITDATAHASHCODEOFPCCONFIG                               STD_OFF  /**< Deactivateable: 'ComM_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define COMM_SIZEOFCHANNELOFPCCONFIG                                  STD_ON
#define COMM_SIZEOFCHANNELPBOFPCCONFIG                                STD_ON
#define COMM_SIZEOFFULLCOMREQUESTERSOFPCCONFIG                        STD_ON
#define COMM_SIZEOFUSERBYTEMASKOFPCCONFIG                             STD_ON
#define COMM_SIZEOFUSEROFPCCONFIG                                     STD_ON
#define COMM_SIZEOFUSERREQFULLCOMOFPCCONFIG                           STD_ON
#define COMM_USERBYTEMASKOFPCCONFIG                                   STD_ON
#define COMM_USEROFPCCONFIG                                           STD_ON
#define COMM_USERREQFULLCOMOFPCCONFIG                                 STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCMinNumericValueDefines  ComM Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define COMM_MIN_FULLCOMREQUESTERS                                    0U
#define COMM_MIN_PNCPSLEEPTIMER                                       0U
#define COMM_MIN_PNCSIGNALVALUES                                      0U
#define COMM_MIN_USERREQFULLCOM                                       0U
#define COMM_MIN_USERREQPNCFULLCOM                                    0U
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCMaxNumericValueDefines  ComM Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define COMM_MAX_FULLCOMREQUESTERS                                    255U
#define COMM_MAX_PNCPSLEEPTIMER                                       65535U
#define COMM_MAX_PNCSIGNALVALUES                                      255U
#define COMM_MAX_USERREQFULLCOM                                       255U
#define COMM_MAX_USERREQPNCFULLCOM                                    255U
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCNoReferenceDefines  ComM No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define COMM_NO_USERREQFULLCOMENDIDXOFCHANNELPB                       255U
#define COMM_NO_USERREQFULLCOMSTARTIDXOFCHANNELPB                     255U
#define COMM_NO_PNCCHANNELMAPPINGENDIDXOFPNCPB                        255U
#define COMM_NO_PNCCHANNELMAPPINGSTARTIDXOFPNCPB                      255U
#define COMM_NO_PNCSIGNALINDENDIDXOFPNCPB                             255U
#define COMM_NO_PNCSIGNALINDSTARTIDXOFPNCPB                           255U
#define COMM_NO_CHANNELIDXOFPNCSIGNAL                                 255U
#define COMM_NO_PNCSIGNALVALUESENDIDXOFPNCSIGNAL                      255U
#define COMM_NO_PNCSIGNALVALUESSTARTIDXOFPNCSIGNAL                    255U
#define COMM_NO_PNCSIGNALIND                                          255U
#define COMM_NO_USERBYTEMASKENDIDXOFUSER                              255U
#define COMM_NO_USERBYTEMASKSTARTIDXOFUSER                            255U
#define COMM_NO_USERPNCBYTEMASKENDIDXOFUSER                           255U
#define COMM_NO_USERPNCBYTEMASKSTARTIDXOFUSER                         255U
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCEnumExistsDefines  ComM Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define COMM_EXISTS_NOT_USED_IN_THIS_VARIANT_NMTYPEOFCHANNEL          STD_OFF
#define COMM_EXISTS_FULL_NMTYPEOFCHANNEL                              STD_ON
#define COMM_EXISTS_PASSIVE_NMTYPEOFCHANNEL                           STD_OFF
#define COMM_EXISTS_LIGHT_NMTYPEOFCHANNEL                             STD_OFF
#define COMM_EXISTS_NONE_NMTYPEOFCHANNEL                              STD_OFF
#define COMM_EXISTS_EIRA_RX_TYPEOFPNCSIGNAL                           STD_OFF
#define COMM_EXISTS_EIRA_TX_TYPEOFPNCSIGNAL                           STD_OFF
#define COMM_EXISTS_ERA_RX_TYPEOFPNCSIGNAL                            STD_OFF
#define COMM_EXISTS_NOT_USED_IN_THIS_VARIANT_TYPEOFPNCSIGNAL          STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCEnumDefines  ComM Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define COMM_NOT_USED_IN_THIS_VARIANT_NMTYPEOFCHANNEL                 0x00U
#define COMM_FULL_NMTYPEOFCHANNEL                                     0x01U
#define COMM_PASSIVE_NMTYPEOFCHANNEL                                  0x02U
#define COMM_LIGHT_NMTYPEOFCHANNEL                                    0x03U
#define COMM_NONE_NMTYPEOFCHANNEL                                     0x04U
#define COMM_EIRA_RX_TYPEOFPNCSIGNAL                                  0x00U
#define COMM_EIRA_TX_TYPEOFPNCSIGNAL                                  0x01U
#define COMM_ERA_RX_TYPEOFPNCSIGNAL                                   0x02U
#define COMM_NOT_USED_IN_THIS_VARIANT_TYPEOFPNCSIGNAL                 0x03U
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCIsReducedToDefineDefines  ComM Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define COMM_ISDEF_BUSTYPEOFCHANNEL                                   STD_OFF
#define COMM_ISDEF_ENABLEDOFCHANNEL                                   STD_OFF
#define COMM_ISDEF_GWTYPEOFCHANNEL                                    STD_OFF
#define COMM_ISDEF_INHIBITIONINITVALUEOFCHANNEL                       STD_OFF
#define COMM_ISDEF_J1939SUPPORTOFCHANNEL                              STD_OFF
#define COMM_ISDEF_MINFULLCOMTIMEOFCHANNEL                            STD_OFF
#define COMM_ISDEF_NMLIGHTDURATIONOFCHANNEL                           STD_OFF
#define COMM_ISDEF_NMLIGHTSILENTDURATIONOFCHANNEL                     STD_OFF
#define COMM_ISDEF_NMTYPEOFCHANNEL                                    STD_OFF
#define COMM_ISDEF_PNCNMREQUESTOFCHANNEL                              STD_OFF
#define COMM_ISDEF_USERREQFULLCOMENDIDXOFCHANNELPB                    STD_OFF
#define COMM_ISDEF_USERREQFULLCOMSTARTIDXOFCHANNELPB                  STD_OFF
#define COMM_ISDEF_USERREQFULLCOMUSEDOFCHANNELPB                      STD_OFF
#define COMM_ISDEF_CLEARMASKOFPNC                                     STD_OFF
#define COMM_ISDEF_PNCIDOFPNC                                         STD_OFF
#define COMM_ISDEF_SETMASKOFPNC                                       STD_OFF
#define COMM_ISDEF_PNCCHANNELMAPPING                                  STD_OFF
#define COMM_ISDEF_PNCCHANNELMAPPINGENDIDXOFPNCPB                     STD_OFF
#define COMM_ISDEF_PNCCHANNELMAPPINGSTARTIDXOFPNCPB                   STD_OFF
#define COMM_ISDEF_PNCCHANNELMAPPINGUSEDOFPNCPB                       STD_OFF
#define COMM_ISDEF_PNCSIGNALINDENDIDXOFPNCPB                          STD_OFF
#define COMM_ISDEF_PNCSIGNALINDSTARTIDXOFPNCPB                        STD_OFF
#define COMM_ISDEF_PNCSIGNALINDUSEDOFPNCPB                            STD_OFF
#define COMM_ISDEF_SIGNALBYTEINDEXOFPNCPB                             STD_OFF
#define COMM_ISDEF_SYSTEMUSEROFPNCPB                                  STD_OFF
#define COMM_ISDEF_USERREQPNCFULLCOMENDIDXOFPNCPB                     STD_OFF
#define COMM_ISDEF_USERREQPNCFULLCOMSTARTIDXOFPNCPB                   STD_OFF
#define COMM_ISDEF_BUSTYPEIDOFPNCSIGNAL                               STD_OFF
#define COMM_ISDEF_CHANNELIDXOFPNCSIGNAL                              STD_OFF
#define COMM_ISDEF_CHANNELUSEDOFPNCSIGNAL                             STD_OFF
#define COMM_ISDEF_PNCSIGNALVALUESENDIDXOFPNCSIGNAL                   STD_OFF
#define COMM_ISDEF_PNCSIGNALVALUESSTARTIDXOFPNCSIGNAL                 STD_OFF
#define COMM_ISDEF_PNCSIGNALVALUESUSEDOFPNCSIGNAL                     STD_OFF
#define COMM_ISDEF_TYPEOFPNCSIGNAL                                    STD_OFF
#define COMM_ISDEF_PNCSIGNALIND                                       STD_OFF
#define COMM_ISDEF_PNCUSEROFUSER                                      STD_OFF
#define COMM_ISDEF_USERBYTEMASKENDIDXOFUSER                           STD_OFF
#define COMM_ISDEF_USERBYTEMASKSTARTIDXOFUSER                         STD_OFF
#define COMM_ISDEF_USERBYTEMASKUSEDOFUSER                             STD_OFF
#define COMM_ISDEF_USERPNCBYTEMASKENDIDXOFUSER                        STD_OFF
#define COMM_ISDEF_USERPNCBYTEMASKSTARTIDXOFUSER                      STD_OFF
#define COMM_ISDEF_USERPNCBYTEMASKUSEDOFUSER                          STD_OFF
#define COMM_ISDEF_CHANNELOFUSERBYTEMASK                              STD_OFF
#define COMM_ISDEF_CLEARMASKOFUSERBYTEMASK                            STD_OFF
#define COMM_ISDEF_SETMASKOFUSERBYTEMASK                              STD_OFF
#define COMM_ISDEF_USERREQFULLCOMIDXOFUSERBYTEMASK                    STD_OFF
#define COMM_ISDEF_USERMODENOTIFUNC                                   STD_OFF
#define COMM_ISDEF_CLEARMASKOFUSERPNCBYTEMASK                         STD_OFF
#define COMM_ISDEF_PNCIDOFUSERPNCBYTEMASK                             STD_OFF
#define COMM_ISDEF_SETMASKOFUSERPNCBYTEMASK                           STD_OFF
#define COMM_ISDEF_USERREQPNCFULLCOMIDXOFUSERPNCBYTEMASK              STD_OFF
#define COMM_ISDEF_CHANNELOFPCCONFIG                                  STD_ON
#define COMM_ISDEF_CHANNELPBOFPCCONFIG                                STD_ON
#define COMM_ISDEF_FINALMAGICNUMBEROFPCCONFIG                         STD_OFF
#define COMM_ISDEF_FULLCOMREQUESTERSOFPCCONFIG                        STD_ON
#define COMM_ISDEF_INITDATAHASHCODEOFPCCONFIG                         STD_OFF
#define COMM_ISDEF_USERBYTEMASKOFPCCONFIG                             STD_ON
#define COMM_ISDEF_USEROFPCCONFIG                                     STD_ON
#define COMM_ISDEF_USERREQFULLCOMOFPCCONFIG                           STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCEqualsAlwaysToDefines  ComM Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define COMM_EQ2_BUSTYPEOFCHANNEL                                     
#define COMM_EQ2_ENABLEDOFCHANNEL                                     
#define COMM_EQ2_GWTYPEOFCHANNEL                                      
#define COMM_EQ2_INHIBITIONINITVALUEOFCHANNEL                         
#define COMM_EQ2_J1939SUPPORTOFCHANNEL                                
#define COMM_EQ2_MINFULLCOMTIMEOFCHANNEL                              
#define COMM_EQ2_NMLIGHTDURATIONOFCHANNEL                             
#define COMM_EQ2_NMLIGHTSILENTDURATIONOFCHANNEL                       
#define COMM_EQ2_NMTYPEOFCHANNEL                                      
#define COMM_EQ2_PNCNMREQUESTOFCHANNEL                                
#define COMM_EQ2_USERREQFULLCOMENDIDXOFCHANNELPB                      
#define COMM_EQ2_USERREQFULLCOMSTARTIDXOFCHANNELPB                    
#define COMM_EQ2_USERREQFULLCOMUSEDOFCHANNELPB                        
#define COMM_EQ2_CLEARMASKOFPNC                                       
#define COMM_EQ2_PNCIDOFPNC                                           
#define COMM_EQ2_SETMASKOFPNC                                         
#define COMM_EQ2_PNCCHANNELMAPPING                                    
#define COMM_EQ2_PNCCHANNELMAPPINGENDIDXOFPNCPB                       
#define COMM_EQ2_PNCCHANNELMAPPINGSTARTIDXOFPNCPB                     
#define COMM_EQ2_PNCCHANNELMAPPINGUSEDOFPNCPB                         
#define COMM_EQ2_PNCSIGNALINDENDIDXOFPNCPB                            
#define COMM_EQ2_PNCSIGNALINDSTARTIDXOFPNCPB                          
#define COMM_EQ2_PNCSIGNALINDUSEDOFPNCPB                              
#define COMM_EQ2_SIGNALBYTEINDEXOFPNCPB                               
#define COMM_EQ2_SYSTEMUSEROFPNCPB                                    
#define COMM_EQ2_USERREQPNCFULLCOMENDIDXOFPNCPB                       
#define COMM_EQ2_USERREQPNCFULLCOMSTARTIDXOFPNCPB                     
#define COMM_EQ2_BUSTYPEIDOFPNCSIGNAL                                 
#define COMM_EQ2_CHANNELIDXOFPNCSIGNAL                                
#define COMM_EQ2_CHANNELUSEDOFPNCSIGNAL                               
#define COMM_EQ2_PNCSIGNALVALUESENDIDXOFPNCSIGNAL                     
#define COMM_EQ2_PNCSIGNALVALUESSTARTIDXOFPNCSIGNAL                   
#define COMM_EQ2_PNCSIGNALVALUESUSEDOFPNCSIGNAL                       
#define COMM_EQ2_TYPEOFPNCSIGNAL                                      
#define COMM_EQ2_PNCSIGNALIND                                         
#define COMM_EQ2_PNCUSEROFUSER                                        
#define COMM_EQ2_USERBYTEMASKENDIDXOFUSER                             
#define COMM_EQ2_USERBYTEMASKSTARTIDXOFUSER                           
#define COMM_EQ2_USERBYTEMASKUSEDOFUSER                               
#define COMM_EQ2_USERPNCBYTEMASKENDIDXOFUSER                          
#define COMM_EQ2_USERPNCBYTEMASKSTARTIDXOFUSER                        
#define COMM_EQ2_USERPNCBYTEMASKUSEDOFUSER                            
#define COMM_EQ2_CHANNELOFUSERBYTEMASK                                
#define COMM_EQ2_CLEARMASKOFUSERBYTEMASK                              
#define COMM_EQ2_SETMASKOFUSERBYTEMASK                                
#define COMM_EQ2_USERREQFULLCOMIDXOFUSERBYTEMASK                      
#define COMM_EQ2_USERMODENOTIFUNC                                     
#define COMM_EQ2_CLEARMASKOFUSERPNCBYTEMASK                           
#define COMM_EQ2_PNCIDOFUSERPNCBYTEMASK                               
#define COMM_EQ2_SETMASKOFUSERPNCBYTEMASK                             
#define COMM_EQ2_USERREQPNCFULLCOMIDXOFUSERPNCBYTEMASK                
#define COMM_EQ2_CHANNELOFPCCONFIG                                    ComM_Channel
#define COMM_EQ2_CHANNELPBOFPCCONFIG                                  ComM_ChannelPb
#define COMM_EQ2_FINALMAGICNUMBEROFPCCONFIG                           
#define COMM_EQ2_FULLCOMREQUESTERSOFPCCONFIG                          ComM_FullComRequesters
#define COMM_EQ2_INITDATAHASHCODEOFPCCONFIG                           
#define COMM_EQ2_USERBYTEMASKOFPCCONFIG                               ComM_UserByteMask
#define COMM_EQ2_USEROFPCCONFIG                                       ComM_User
#define COMM_EQ2_USERREQFULLCOMOFPCCONFIG                             ComM_UserReqFullCom
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCSymbolicInitializationPointers  ComM Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define ComM_Config_Ptr                                               NULL_PTR  /**< symbolic identifier which shall be used to initialize 'ComM' */
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCInitializationSymbols  ComM Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define ComM_Config                                                   NULL_PTR  /**< symbolic identifier which could be used to initialize 'ComM */
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCGeneral  ComM General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define COMM_CHECK_INIT_POINTER                                       STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define COMM_FINAL_MAGIC_NUMBER                                       0x0C1EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of ComM */
#define COMM_INDIVIDUAL_POSTBUILD                                     STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'ComM' is not configured to be postbuild capable. */
#define COMM_INIT_DATA                                                COMM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define COMM_INIT_DATA_HASH_CODE                                      -355350248L  /**< the precompile constant to validate the initialization structure at initialization time of ComM with a hashcode. The seed value is '0x0C1EU' */
#define COMM_USE_ECUM_BSW_ERROR_HOOK                                  STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define COMM_USE_INIT_POINTER                                         STD_OFF  /**< STD_ON if the init pointer ComM shall be used. */
/** 
  \}
*/ 



/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  ComMPCIterableTypes  ComM Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate ComM_Channel */
typedef uint8_least ComM_ChannelIterType;

/**   \brief  type used to iterate ComM_ChannelPb */
typedef uint8_least ComM_ChannelPbIterType;

/**   \brief  type used to iterate ComM_FullComRequesters */
typedef uint8_least ComM_FullComRequestersIterType;

/**   \brief  type used to iterate ComM_User */
typedef uint8_least ComM_UserIterType;

/**   \brief  type used to iterate ComM_UserByteMask */
typedef uint8_least ComM_UserByteMaskIterType;

/**   \brief  type used to iterate ComM_UserReqFullCom */
typedef uint8_least ComM_UserReqFullComIterType;

/** 
  \}
*/ 

/** 
  \defgroup  ComMPCIterableTypesWithSizeRelations  ComM Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCValueTypes  ComM Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for ComM_GwTypeOfChannel */
typedef uint8 ComM_GwTypeOfChannelType;

/**   \brief  value based type definition for ComM_InhibitionInitValueOfChannel */
typedef uint8 ComM_InhibitionInitValueOfChannelType;

/**   \brief  value based type definition for ComM_J1939SupportOfChannel */
typedef boolean ComM_J1939SupportOfChannelType;

/**   \brief  value based type definition for ComM_NmTypeOfChannel */
typedef uint8 ComM_NmTypeOfChannelType;

/**   \brief  value based type definition for ComM_UserReqFullComEndIdxOfChannelPb */
typedef uint8 ComM_UserReqFullComEndIdxOfChannelPbType;

/**   \brief  value based type definition for ComM_UserReqFullComStartIdxOfChannelPb */
typedef uint8 ComM_UserReqFullComStartIdxOfChannelPbType;

/**   \brief  value based type definition for ComM_UserReqFullComUsedOfChannelPb */
typedef boolean ComM_UserReqFullComUsedOfChannelPbType;

/**   \brief  value based type definition for ComM_FullComRequesters */
typedef uint8 ComM_FullComRequestersType;

/**   \brief  value based type definition for ComM_SizeOfChannel */
typedef uint8 ComM_SizeOfChannelType;

/**   \brief  value based type definition for ComM_SizeOfChannelPb */
typedef uint8 ComM_SizeOfChannelPbType;

/**   \brief  value based type definition for ComM_SizeOfFullComRequesters */
typedef uint8 ComM_SizeOfFullComRequestersType;

/**   \brief  value based type definition for ComM_SizeOfUser */
typedef uint8 ComM_SizeOfUserType;

/**   \brief  value based type definition for ComM_SizeOfUserByteMask */
typedef uint8 ComM_SizeOfUserByteMaskType;

/**   \brief  value based type definition for ComM_SizeOfUserReqFullCom */
typedef uint8 ComM_SizeOfUserReqFullComType;

/**   \brief  value based type definition for ComM_PncUserOfUser */
typedef boolean ComM_PncUserOfUserType;

/**   \brief  value based type definition for ComM_UserByteMaskEndIdxOfUser */
typedef uint8 ComM_UserByteMaskEndIdxOfUserType;

/**   \brief  value based type definition for ComM_UserByteMaskStartIdxOfUser */
typedef uint8 ComM_UserByteMaskStartIdxOfUserType;

/**   \brief  value based type definition for ComM_UserByteMaskUsedOfUser */
typedef boolean ComM_UserByteMaskUsedOfUserType;

/**   \brief  value based type definition for ComM_ChannelOfUserByteMask */
typedef uint8 ComM_ChannelOfUserByteMaskType;

/**   \brief  value based type definition for ComM_ClearMaskOfUserByteMask */
typedef uint8 ComM_ClearMaskOfUserByteMaskType;

/**   \brief  value based type definition for ComM_SetMaskOfUserByteMask */
typedef uint8 ComM_SetMaskOfUserByteMaskType;

/**   \brief  value based type definition for ComM_UserReqFullComIdxOfUserByteMask */
typedef uint8 ComM_UserReqFullComIdxOfUserByteMaskType;

/**   \brief  value based type definition for ComM_UserReqFullCom */
typedef uint8 ComM_UserReqFullComType;

/** 
  \}
*/ 

/** 
  \defgroup  ComMPCStructTypes  ComM Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in ComM_Channel */
typedef struct sComM_ChannelType
{
  ComM_BusType BusTypeOfChannel;  /**< The channel bus type */
  ComM_J1939SupportOfChannelType J1939SupportOfChannel;  /**< Decides if the channel supports J1939 */
  ComM_GwTypeOfChannelType GwTypeOfChannel;  /**< The partial network gateway type, relevant for channels attached to coordinated partial networks */
  ComM_InhibitionInitValueOfChannelType InhibitionInitValueOfChannel;  /**< Initial value of the inhibition status of the channel */
  ComM_NmTypeOfChannelType NmTypeOfChannel;  /**< The Network Management type fo the channel */
} ComM_ChannelType;

/**   \brief  type used in ComM_ChannelPb */
typedef struct sComM_ChannelPbType
{
  ComM_UserReqFullComEndIdxOfChannelPbType UserReqFullComEndIdxOfChannelPb;  /**< the end index of the 0:n relation pointing to ComM_UserReqFullCom */
  ComM_UserReqFullComStartIdxOfChannelPbType UserReqFullComStartIdxOfChannelPb;  /**< the start index of the 0:n relation pointing to ComM_UserReqFullCom */
} ComM_ChannelPbType;

/**   \brief  type used in ComM_User */
typedef struct sComM_UserType
{
  ComM_PncUserOfUserType PncUserOfUser;  /**< decides if a user is a partial network user or a direct channel user */
  ComM_UserByteMaskEndIdxOfUserType UserByteMaskEndIdxOfUser;  /**< the end index of the 0:n relation pointing to ComM_UserByteMask */
  ComM_UserByteMaskStartIdxOfUserType UserByteMaskStartIdxOfUser;  /**< the start index of the 0:n relation pointing to ComM_UserByteMask */
} ComM_UserType;

/**   \brief  type used in ComM_UserByteMask */
typedef struct sComM_UserByteMaskType
{
  ComM_ChannelOfUserByteMaskType ChannelOfUserByteMask;  /**< ID of the channel which is requested by this entry. */
  ComM_ClearMaskOfUserByteMaskType ClearMaskOfUserByteMask;  /**< Clear-mask for clearing the bit which corresponds to this user */
  ComM_SetMaskOfUserByteMaskType SetMaskOfUserByteMask;  /**< Set-mask for setting the bit which corresponds to this user */
  ComM_UserReqFullComIdxOfUserByteMaskType UserReqFullComIdxOfUserByteMask;  /**< the index of the 1:1 relation pointing to ComM_UserReqFullCom */
} ComM_UserByteMaskType;

/** 
  \}
*/ 

/** 
  \defgroup  ComMPCRootPointerTypes  ComM Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point to arrays.
  \{
*/ 
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCRootValueTypes  ComM Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in ComM_PCConfig */
typedef struct sComM_PCConfigType
{
  uint8 ComM_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} ComM_PCConfigType;

typedef ComM_PCConfigType ComM_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 




#endif /* COMM_CFG_H */

