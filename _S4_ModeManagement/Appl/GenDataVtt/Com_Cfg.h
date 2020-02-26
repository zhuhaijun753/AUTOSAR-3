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
 *            Module: Com
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Cfg.h
 *   Generation Time: 2016-03-17 09:06:54
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/


#if !defined (COM_CFG_H)
# define COM_CFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_CSL_0779 */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
# include "Com_Types.h"
# include "Com_PBcfg.h"
# include "Com_Cbk.h"
# include "PduR_Cfg.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

#ifndef COM_USE_DUMMY_FUNCTIONS
#define COM_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyFunction */
#endif
#ifndef COM_USE_DUMMY_STATEMENT
#define COM_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatement */
#endif
#ifndef COM_DUMMY_STATEMENT
#define COM_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef COM_DUMMY_STATEMENT_CONST
#define COM_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef COM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define COM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef COM_ATOMIC_VARIABLE_ACCESS
#define COM_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef COM_PROCESSOR_CANOEEMU
#define COM_PROCESSOR_CANOEEMU
#endif
#ifndef COM_COMP_ANSI
#define COM_COMP_ANSI
#endif
#ifndef COM_GEN_GENERATOR_MSR
#define COM_GEN_GENERATOR_MSR
#endif
#ifndef COM_CPUTYPE_BITORDER_LSB2MSB
#define COM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/BitOrder */
#endif
#ifndef COM_CONFIGURATION_VARIANT_PRECOMPILE
#define COM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef COM_CONFIGURATION_VARIANT_LINKTIME
#define COM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef COM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define COM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef COM_CONFIGURATION_VARIANT
#define COM_CONFIGURATION_VARIANT COM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef COM_POSTBUILD_VARIANT_SUPPORT
#define COM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  ComPCDataSwitches  Com Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define COM_ALLSIGCNT                                                 STD_ON
#define COM_ALLSIGGRPCNT                                              STD_ON
#define COM_CBKINVFUNCPTR                                             STD_OFF  /**< Deactivateable: 'Com_CbkInvFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKRXACKFUNCPTR                                           STD_OFF  /**< Deactivateable: 'Com_CbkRxAckFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKRXTOUTFUNCPTR                                          STD_OFF  /**< Deactivateable: 'Com_CbkRxTOutFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKRXTOUTFUNCPTRIND                                       STD_OFF  /**< Deactivateable: 'Com_CbkRxTOutFuncPtrInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXACKDEFFUNCPTR                                        STD_OFF  /**< Deactivateable: 'Com_CbkTxAckDefFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXACKDEFFUNCPTRIND                                     STD_OFF  /**< Deactivateable: 'Com_CbkTxAckDefFuncPtrInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXACKIMFUNCPTR                                         STD_OFF  /**< Deactivateable: 'Com_CbkTxAckImFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXACKIMFUNCPTRIND                                      STD_OFF  /**< Deactivateable: 'Com_CbkTxAckImFuncPtrInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXERRFUNCPTR                                           STD_OFF  /**< Deactivateable: 'Com_CbkTxErrFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXERRFUNCPTRIND                                        STD_OFF  /**< Deactivateable: 'Com_CbkTxErrFuncPtrInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXTOUTFUNCPTR                                          STD_OFF  /**< Deactivateable: 'Com_CbkTxTOutFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CBKTXTOUTFUNCPTRIND                                       STD_OFF  /**< Deactivateable: 'Com_CbkTxTOutFuncPtrInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONFIGID                                                  STD_ON
#define COM_CONSTVALUEXINT16                                          STD_OFF  /**< Deactivateable: 'Com_ConstValueXInt16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUEXINT32                                          STD_OFF  /**< Deactivateable: 'Com_ConstValueXInt32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_CONSTVALUEXINT8                                           STD_ON
#define COM_CURRENTTXMODE                                             STD_ON
#define COM_CYCLETIMECNT                                              STD_ON
#define COM_CYCLICSENDREQUEST                                         STD_ON
#define COM_DEFERREDGWMAPPINGEVENT                                    STD_OFF  /**< Deactivateable: 'Com_DeferredGwMappingEvent' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_DEFERREDGWMAPPINGINFO                                     STD_OFF  /**< Deactivateable: 'Com_DeferredGwMappingInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXPDUINFOIDXOFDEFERREDGWMAPPINGINFO                       STD_OFF  /**< Deactivateable: 'Com_DeferredGwMappingInfo.RxPduInfoIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_DELAYTIMECNT                                              STD_ON
#define COM_FILTERINFO                                                STD_OFF  /**< Deactivateable: 'Com_FilterInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_APPLTYPEOFFILTERINFO                                      STD_OFF  /**< Deactivateable: 'Com_FilterInfo.ApplType' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERALGOOFFILTERINFO                                    STD_OFF  /**< Deactivateable: 'Com_FilterInfo.FilterAlgo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERPARAMIDXOFFILTERINFO                                STD_OFF  /**< Deactivateable: 'Com_FilterInfo.FilterParamIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERPARAMUSEDOFFILTERINFO                               STD_OFF  /**< Deactivateable: 'Com_FilterInfo.FilterParamUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_LENGTHOFFILTERINFO                                        STD_OFF  /**< Deactivateable: 'Com_FilterInfo.Length' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FINALMAGICNUMBER                                          STD_OFF  /**< Deactivateable: 'Com_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define COM_GWDESCRIPTIONACCESSINFO                                   STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo' Reason: 'Gateway description feature is not licensed' */
#define COM_DESTINATIONBYTEPOSITIONOFGWDESCRIPTIONACCESSINFO          STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.DestinationBytePosition' Reason: 'Gateway description feature is not licensed' */
#define COM_MASKLENGTHOFGWDESCRIPTIONACCESSINFO                       STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.MaskLength' Reason: 'Gateway description feature is not licensed' */
#define COM_SOURCEBYTEPOSITIONOFGWDESCRIPTIONACCESSINFO               STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.SourceBytePosition' Reason: 'Gateway description feature is not licensed' */
#define COM_SOURCEDESCRIPTIONMASKENDIDXOFGWDESCRIPTIONACCESSINFO      STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.SourceDescriptionMaskEndIdx' Reason: 'Gateway description feature is not licensed' */
#define COM_SOURCEDESCRIPTIONMASKSTARTIDXOFGWDESCRIPTIONACCESSINFO    STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.SourceDescriptionMaskStartIdx' Reason: 'Gateway description feature is not licensed' */
#define COM_SOURCEDESCRIPTIONMASKUSEDOFGWDESCRIPTIONACCESSINFO        STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.SourceDescriptionMaskUsed' Reason: 'Gateway description feature is not licensed' */
#define COM_TYPEOFGWDESCRIPTIONACCESSINFO                             STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.Type' Reason: 'Gateway description feature is not licensed' */
#define COM_TXPDUIDOFGWDESCRIPTIONACCESSINFO                          STD_OFF  /**< Deactivateable: 'Com_GwDescriptionAccessInfo.txPduId' Reason: 'Gateway description feature is not licensed' */
#define COM_GWEVENT                                                   STD_OFF  /**< Deactivateable: 'Com_GwEvent' Reason: 'The gateway is deactivated!' */
#define COM_GWGRPSIGMAPPING                                           STD_OFF  /**< Deactivateable: 'Com_GwGrpSigMapping' Reason: 'The gateway is deactivated!' */
#define COM_RXACCESSINFOIDXOFGWGRPSIGMAPPING                          STD_OFF  /**< Deactivateable: 'Com_GwGrpSigMapping.RxAccessInfoIdx' Reason: 'The gateway is deactivated!' */
#define COM_TXSIGIDOFGWGRPSIGMAPPING                                  STD_OFF  /**< Deactivateable: 'Com_GwGrpSigMapping.TxSigId' Reason: 'The gateway is deactivated!' */
#define COM_GWINFO                                                    STD_OFF  /**< Deactivateable: 'Com_GwInfo' Reason: 'The gateway is deactivated!' */
#define COM_GWSIGGRPMAPPINGENDIDXOFGWINFO                             STD_OFF  /**< Deactivateable: 'Com_GwInfo.GwSigGrpMappingEndIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWSIGGRPMAPPINGSTARTIDXOFGWINFO                           STD_OFF  /**< Deactivateable: 'Com_GwInfo.GwSigGrpMappingStartIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWSIGGRPMAPPINGUSEDOFGWINFO                               STD_OFF  /**< Deactivateable: 'Com_GwInfo.GwSigGrpMappingUsed' Reason: 'The gateway is deactivated!' */
#define COM_GWSIGMAPPINGENDIDXOFGWINFO                                STD_OFF  /**< Deactivateable: 'Com_GwInfo.GwSigMappingEndIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWSIGMAPPINGSTARTIDXOFGWINFO                              STD_OFF  /**< Deactivateable: 'Com_GwInfo.GwSigMappingStartIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWSIGMAPPINGUSEDOFGWINFO                                  STD_OFF  /**< Deactivateable: 'Com_GwInfo.GwSigMappingUsed' Reason: 'The gateway is deactivated!' */
#define COM_GWROUTINGTIMEOUTCOUNTER                                   STD_OFF  /**< Deactivateable: 'Com_GwRoutingTimeoutCounter' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_GWSIGGRPMAPPING                                           STD_OFF  /**< Deactivateable: 'Com_GwSigGrpMapping' Reason: 'The gateway is deactivated!' */
#define COM_GWGRPSIGMAPPINGENDIDXOFGWSIGGRPMAPPING                    STD_OFF  /**< Deactivateable: 'Com_GwSigGrpMapping.GwGrpSigMappingEndIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWGRPSIGMAPPINGSTARTIDXOFGWSIGGRPMAPPING                  STD_OFF  /**< Deactivateable: 'Com_GwSigGrpMapping.GwGrpSigMappingStartIdx' Reason: 'The gateway is deactivated!' */
#define COM_TXSIGGRPIDOFGWSIGGRPMAPPING                               STD_OFF  /**< Deactivateable: 'Com_GwSigGrpMapping.TxSigGrpId' Reason: 'The gateway is deactivated!' */
#define COM_GWSIGMAPPING                                              STD_OFF  /**< Deactivateable: 'Com_GwSigMapping' Reason: 'The gateway is deactivated!' */
#define COM_RXACCESSINFOIDXOFGWSIGMAPPING                             STD_OFF  /**< Deactivateable: 'Com_GwSigMapping.RxAccessInfoIdx' Reason: 'The gateway is deactivated!' */
#define COM_TXSIGIDOFGWSIGMAPPING                                     STD_OFF  /**< Deactivateable: 'Com_GwSigMapping.TxSigId' Reason: 'The gateway is deactivated!' */
#define COM_GWTIMEOUTINFO                                             STD_OFF  /**< Deactivateable: 'Com_GwTimeoutInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_GWROUTINGTIMEOUTFACTOROFGWTIMEOUTINFO                     STD_OFF  /**< Deactivateable: 'Com_GwTimeoutInfo.GwRoutingTimeoutFactor' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXPDUINFOIDXOFGWTIMEOUTINFO                               STD_OFF  /**< Deactivateable: 'Com_GwTimeoutInfo.TxPduInfoIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_GWTXPDUDESCRIPTIONINFO                                    STD_OFF  /**< Deactivateable: 'Com_GwTxPduDescriptionInfo' Reason: 'Gateway description feature is not licensed' */
#define COM_GWDESCRIPTIONACCESSINFOENDIDXOFGWTXPDUDESCRIPTIONINFO     STD_OFF  /**< Deactivateable: 'Com_GwTxPduDescriptionInfo.GwDescriptionAccessInfoEndIdx' Reason: 'Gateway description feature is not licensed' */
#define COM_GWDESCRIPTIONACCESSINFOSTARTIDXOFGWTXPDUDESCRIPTIONINFO   STD_OFF  /**< Deactivateable: 'Com_GwTxPduDescriptionInfo.GwDescriptionAccessInfoStartIdx' Reason: 'Gateway description feature is not licensed' */
#define COM_HANDLERXDEFERREDGWDESCRIPTION                             STD_OFF  /**< Deactivateable: 'Com_HandleRxDeferredGwDescription' Reason: 'Gateway description feature is not licensed' */
#define COM_HANDLERXPDUDEFERRED                                       STD_ON
#define COM_HANDLETXPDUDEFERRED                                       STD_ON
#define COM_IPDUGROUPINFO                                             STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOTOSUBIPDUGROUPSINDENDIDXOFIPDUGROUPINFO      STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.IPduGroupInfoToSubIPduGroupsIndEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOTOSUBIPDUGROUPSINDSTARTIDXOFIPDUGROUPINFO    STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.IPduGroupInfoToSubIPduGroupsIndStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOTOSUBIPDUGROUPSINDUSEDOFIPDUGROUPINFO        STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.IPduGroupInfoToSubIPduGroupsIndUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_INVALIDHNDOFIPDUGROUPINFO                                 STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.InvalidHnd' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_RXPDUINFOINDENDIDXOFIPDUGROUPINFO                         STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.RxPduInfoIndEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_RXPDUINFOINDSTARTIDXOFIPDUGROUPINFO                       STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.RxPduInfoIndStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_RXPDUINFOINDUSEDOFIPDUGROUPINFO                           STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.RxPduInfoIndUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_TXPDUINFOINDENDIDXOFIPDUGROUPINFO                         STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.TxPduInfoIndEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_TXPDUINFOINDSTARTIDXOFIPDUGROUPINFO                       STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.TxPduInfoIndStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_TXPDUINFOINDUSEDOFIPDUGROUPINFO                           STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfo.TxPduInfoIndUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOOFRXPDUINFOIND                               STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfoOfRxPduInfoInd' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOOFTXPDUINFOIND                               STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfoOfTxPduInfoInd' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPINFOTOSUBIPDUGROUPSIND                           STD_OFF  /**< Deactivateable: 'Com_IPduGroupInfoToSubIPduGroupsInd' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_IPDUGROUPSTATE                                            STD_OFF  /**< Deactivateable: 'Com_IPduGroupState' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComOptimizedIPduGroupHandling] is configured to 'false'' */
#define COM_INITDATAHASHCODE                                          STD_OFF  /**< Deactivateable: 'Com_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define COM_INITIALIZED                                               STD_ON
#define COM_PDUGRPCNT                                                 STD_ON
#define COM_PDUGRPVECTOR                                              STD_ON
#define COM_REPCNT                                                    STD_ON
#define COM_REPCYCLECNT                                               STD_ON
#define COM_RXACCESSINFO                                              STD_ON
#define COM_APPLTYPEOFRXACCESSINFO                                    STD_ON
#define COM_BITLENGTHOFRXACCESSINFO                                   STD_ON
#define COM_BITPOSITIONOFRXACCESSINFO                                 STD_ON
#define COM_BUFFERIDXOFRXACCESSINFO                                   STD_ON
#define COM_BUFFERUSEDOFRXACCESSINFO                                  STD_ON
#define COM_BUSACCOFRXACCESSINFO                                      STD_ON
#define COM_BYTELENGTHOFRXACCESSINFO                                  STD_ON
#define COM_BYTEPOSITIONOFRXACCESSINFO                                STD_ON
#define COM_GWINFOIDXOFRXACCESSINFO                                   STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.GwInfoIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWINFOUSEDOFRXACCESSINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.GwInfoUsed' Reason: 'The gateway is deactivated!' */
#define COM_INITVALUEIDXOFRXACCESSINFO                                STD_ON
#define COM_INITVALUEUSEDOFRXACCESSINFO                               STD_ON
#define COM_INVALIDHNDOFRXACCESSINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfRxAccessInfo is always 'false' due to this, the array is deactivated.' */
#define COM_MASKEDBITSOFRXACCESSINFO                                  STD_ON
#define COM_PDUIDOFRXACCESSINFO                                       STD_ON
#define COM_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO           STD_ON
#define COM_RXDATATIMEOUTSUBSTITUTIONVALUEUSEDOFRXACCESSINFO          STD_ON
#define COM_SHDBUFFERIDXOFRXACCESSINFO                                STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ShdBufferIdx' Reason: 'the optional indirection is deactivated because ShdBufferUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_SHDBUFFERUSEDOFRXACCESSINFO                               STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.ShdBufferUsed' Reason: 'the optional indirection is deactivated because ShdBufferUsedOfRxAccessInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_SIGNEXTREQUIREDOFRXACCESSINFO                             STD_OFF  /**< Deactivateable: 'Com_RxAccessInfo.SignExtRequired' Reason: 'the value of Com_SignExtRequiredOfRxAccessInfo is always 'false' due to this, the array is deactivated.' */
#define COM_STARTBYTEINPDUPOSITIONOFRXACCESSINFO                      STD_ON
#define COM_RXACCESSINFOIND                                           STD_ON
#define COM_RXACCESSINFOREPLACEGRPSIGIND                              STD_OFF  /**< Deactivateable: 'Com_RxAccessInfoReplaceGrpSigInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXACCESSINFOREPLACESIGIND                                 STD_OFF  /**< Deactivateable: 'Com_RxAccessInfoReplaceSigInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXDEFPDUBUFFER                                            STD_ON
#define COM_RXDEFERREDEVENTCACHE                                      STD_OFF  /**< Deactivateable: 'Com_RxDeferredEventCache' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDeferredEventCacheSupport] is configured to 'false'' */
#define COM_RXDLMONDIVISOR                                            STD_OFF  /**< Deactivateable: 'Com_RxDlMonDivisor' Reason: 'Timing domain and corresponding timing divisor are deactivated, because no value is configured for RxDlMonTimeBase.' */
#define COM_RXDLMONDIVISORCOUNTER                                     STD_ON
#define COM_RXDYNSIGNALLENGTH                                         STD_OFF  /**< Deactivateable: 'Com_RxDynSignalLength' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_RXDYNSIGNALTMPLENGTHFORSIGNALGROUPS                       STD_OFF  /**< Deactivateable: 'Com_RxDynSignalTmpLengthForSignalGroups' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_RXGRPSIGINFO                                              STD_OFF  /**< Deactivateable: 'Com_RxGrpSigInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERINFOIDXOFRXGRPSIGINFO                               STD_OFF  /**< Deactivateable: 'Com_RxGrpSigInfo.FilterInfoIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTERINFOUSEDOFRXGRPSIGINFO                              STD_OFF  /**< Deactivateable: 'Com_RxGrpSigInfo.FilterInfoUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_INVVALUEIDXOFRXGRPSIGINFO                                 STD_OFF  /**< Deactivateable: 'Com_RxGrpSigInfo.InvValueIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_INVVALUEUSEDOFRXGRPSIGINFO                                STD_OFF  /**< Deactivateable: 'Com_RxGrpSigInfo.InvValueUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXACCESSINFOIDXOFRXGRPSIGINFO                             STD_OFF  /**< Deactivateable: 'Com_RxGrpSigInfo.RxAccessInfoIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TMPBUFFERIDXOFRXGRPSIGINFO                                STD_OFF  /**< Deactivateable: 'Com_RxGrpSigInfo.TmpBufferIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TMPBUFFERUSEDOFRXGRPSIGINFO                               STD_OFF  /**< Deactivateable: 'Com_RxGrpSigInfo.TmpBufferUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXNEXTEVENTCACHEENTY                                      STD_OFF  /**< Deactivateable: 'Com_RxNextEventCacheEnty' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComDeferredEventCacheSupport] is configured to 'false'' */
#define COM_RXPDUCALLOUTFUNCPTR                                       STD_OFF  /**< Deactivateable: 'Com_RxPduCalloutFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXPDUDMSTATE                                              STD_OFF  /**< Deactivateable: 'Com_RxPduDmState' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXPDUGRPACTIVE                                            STD_ON
#define COM_RXPDUGRPINFO                                              STD_ON
#define COM_PDUGRPVECTORENDIDXOFRXPDUGRPINFO                          STD_ON
#define COM_PDUGRPVECTORSTARTIDXOFRXPDUGRPINFO                        STD_ON
#define COM_PDUGRPVECTORUSEDOFRXPDUGRPINFO                            STD_ON
#define COM_RXPDUINFO                                                 STD_ON
#define COM_GWINFOENDIDXOFRXPDUINFO                                   STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwInfoEndIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWINFOSTARTIDXOFRXPDUINFO                                 STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwInfoStartIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWINFOUSEDOFRXPDUINFO                                     STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwInfoUsed' Reason: 'The gateway is deactivated!' */
#define COM_GWTXPDUDESCRIPTIONINFOENDIDXOFRXPDUINFO                   STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwTxPduDescriptionInfoEndIdx' Reason: 'Gateway description feature is not licensed' */
#define COM_GWTXPDUDESCRIPTIONINFOSTARTIDXOFRXPDUINFO                 STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwTxPduDescriptionInfoStartIdx' Reason: 'Gateway description feature is not licensed' */
#define COM_GWTXPDUDESCRIPTIONINFOUSEDOFRXPDUINFO                     STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.GwTxPduDescriptionInfoUsed' Reason: 'Gateway description feature is not licensed' */
#define COM_HANDLERXDEFERREDGWDESCRIPTIONIDXOFRXPDUINFO               STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.HandleRxDeferredGwDescriptionIdx' Reason: 'Gateway description feature is not licensed' */
#define COM_HANDLERXDEFERREDGWDESCRIPTIONUSEDOFRXPDUINFO              STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.HandleRxDeferredGwDescriptionUsed' Reason: 'Gateway description feature is not licensed' */
#define COM_HANDLERXPDUDEFERREDIDXOFRXPDUINFO                         STD_ON
#define COM_HANDLERXPDUDEFERREDUSEDOFRXPDUINFO                        STD_ON
#define COM_IPDUGROUPINFOOFRXPDUINFOINDENDIDXOFRXPDUINFO              STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.IPduGroupInfoOfRxPduInfoIndEndIdx' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfRxPduInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFRXPDUINFOINDSTARTIDXOFRXPDUINFO            STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.IPduGroupInfoOfRxPduInfoIndStartIdx' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfRxPduInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFRXPDUINFOINDUSEDOFRXPDUINFO                STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.IPduGroupInfoOfRxPduInfoIndUsed' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfRxPduInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVALIDHNDOFRXPDUINFO                                     STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfRxPduInfo is always 'false' due to this, the array is deactivated.' */
#define COM_MASKEDBITSOFRXPDUINFO                                     STD_ON
#define COM_RXACCESSINFOINDENDIDXOFRXPDUINFO                          STD_ON
#define COM_RXACCESSINFOINDSTARTIDXOFRXPDUINFO                        STD_ON
#define COM_RXACCESSINFOINDUSEDOFRXPDUINFO                            STD_ON
#define COM_RXDEFPDUBUFFERENDIDXOFRXPDUINFO                           STD_ON
#define COM_RXDEFPDUBUFFERLENGTHOFRXPDUINFO                           STD_ON
#define COM_RXDEFPDUBUFFERSTARTIDXOFRXPDUINFO                         STD_ON
#define COM_RXDEFPDUBUFFERUSEDOFRXPDUINFO                             STD_ON
#define COM_RXPDUCALLOUTFUNCPTRIDXOFRXPDUINFO                         STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxPduCalloutFuncPtrIdx' Reason: 'the optional indirection is deactivated because RxPduCalloutFuncPtrUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXPDUCALLOUTFUNCPTRUSEDOFRXPDUINFO                        STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxPduCalloutFuncPtrUsed' Reason: 'the optional indirection is deactivated because RxPduCalloutFuncPtrUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGGRPINFOINDENDIDXOFRXPDUINFO                          STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxSigGrpInfoIndEndIdx' Reason: 'the optional indirection is deactivated because RxSigGrpInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO                        STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxSigGrpInfoIndStartIdx' Reason: 'the optional indirection is deactivated because RxSigGrpInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGGRPINFOINDUSEDOFRXPDUINFO                            STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxSigGrpInfoIndUsed' Reason: 'the optional indirection is deactivated because RxSigGrpInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXSIGINFOENDIDXOFRXPDUINFO                                STD_ON
#define COM_RXSIGINFOSTARTIDXOFRXPDUINFO                              STD_ON
#define COM_RXSIGINFOUSEDOFRXPDUINFO                                  STD_ON
#define COM_RXTOUTINFOIDXOFRXPDUINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxTOutInfoIdx' Reason: 'the optional indirection is deactivated because RxTOutInfoUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOINDENDIDXOFRXPDUINFO                            STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxTOutInfoIndEndIdx' Reason: 'the optional indirection is deactivated because RxTOutInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOINDSTARTIDXOFRXPDUINFO                          STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxTOutInfoIndStartIdx' Reason: 'the optional indirection is deactivated because RxTOutInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOINDUSEDOFRXPDUINFO                              STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxTOutInfoIndUsed' Reason: 'the optional indirection is deactivated because RxTOutInfoIndUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOUSEDOFRXPDUINFO                                 STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxTOutInfoUsed' Reason: 'the optional indirection is deactivated because RxTOutInfoUsedOfRxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTPINFOIDXOFRXPDUINFO                                    STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxTpInfoIdx' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_RXTPINFOUSEDOFRXPDUINFO                                   STD_OFF  /**< Deactivateable: 'Com_RxPduInfo.RxTpInfoUsed' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_RXPDUINFOIND                                              STD_OFF  /**< Deactivateable: 'Com_RxPduInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSHDBUFFERXINT16                                         STD_OFF  /**< Deactivateable: 'Com_RxShdBufferXInt16' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSHDBUFFERXINT32                                         STD_OFF  /**< Deactivateable: 'Com_RxShdBufferXInt32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSHDBUFFERXINT8                                          STD_OFF  /**< Deactivateable: 'Com_RxShdBufferXInt8' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERXINT16                                         STD_OFF  /**< Deactivateable: 'Com_RxSigBufferXInt16' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERXINT32                                         STD_OFF  /**< Deactivateable: 'Com_RxSigBufferXInt32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGBUFFERXINT8                                          STD_ON
#define COM_RXSIGGRPINFO                                              STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_ARRAYACCESSUSEDOFRXSIGGRPINFO                             STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ArrayAccessUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CBKINVFUNCPTRIDXOFRXSIGGRPINFO                            STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.CbkInvFuncPtrIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CBKINVFUNCPTRUSEDOFRXSIGGRPINFO                           STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.CbkInvFuncPtrUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CBKRXACKFUNCPTRIDXOFRXSIGGRPINFO                          STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.CbkRxAckFuncPtrIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CBKRXACKFUNCPTRUSEDOFRXSIGGRPINFO                         STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.CbkRxAckFuncPtrUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CONSTVALUEXINT8ENDIDXOFRXSIGGRPINFO                       STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueXInt8EndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CONSTVALUEXINT8LENGTHOFRXSIGGRPINFO                       STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueXInt8Length' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CONSTVALUEXINT8STARTIDXOFRXSIGGRPINFO                     STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueXInt8StartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CONSTVALUEXINT8USEDOFRXSIGGRPINFO                         STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ConstValueXInt8Used' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FILTEREVENTOFRXSIGGRPINFO                                 STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.FilterEvent' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_GWINFOIDXOFRXSIGGRPINFO                                   STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.GwInfoIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_GWINFOUSEDOFRXSIGGRPINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.GwInfoUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_INVEVENTOFRXSIGGRPINFO                                    STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.InvEvent' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_INVALIDHNDOFRXSIGGRPINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.InvalidHnd' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXGRPSIGINFOENDIDXOFRXSIGGRPINFO                          STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxGrpSigInfoEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXGRPSIGINFOSTARTIDXOFRXSIGGRPINFO                        STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxGrpSigInfoStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXPDUINFOIDXOFRXSIGGRPINFO                                STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxPduInfoIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXPDUINFOUSEDOFRXSIGGRPINFO                               STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxPduInfoUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXSHDBUFFERXINT8ENDIDXOFRXSIGGRPINFO                      STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxShdBufferXInt8EndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXSHDBUFFERXINT8LENGTHOFRXSIGGRPINFO                      STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxShdBufferXInt8Length' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXSHDBUFFERXINT8STARTIDXOFRXSIGGRPINFO                    STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxShdBufferXInt8StartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXSHDBUFFERXINT8USEDOFRXSIGGRPINFO                        STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxShdBufferXInt8Used' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXTOUTINFOIDXOFRXSIGGRPINFO                               STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxTOutInfoIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXTOUTINFOUSEDOFRXSIGGRPINFO                              STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.RxTOutInfoUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_SIGNALPROCESSINGOFRXSIGGRPINFO                            STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.SignalProcessing' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_STARTBYTEPOSITIONOFRXSIGGRPINFO                           STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.StartBytePosition' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_UBIDXOFRXSIGGRPINFO                                       STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.UbIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_UBMASKIDXOFRXSIGGRPINFO                                   STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.UbMaskIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_UBMASKUSEDOFRXSIGGRPINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.UbMaskUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_VALIDDLCOFRXSIGGRPINFO                                    STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfo.ValidDlc' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXSIGGRPINFOIND                                           STD_OFF  /**< Deactivateable: 'Com_RxSigGrpInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXSIGINFO                                                 STD_ON
#define COM_CBKINVFUNCPTRIDXOFRXSIGINFO                               STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.CbkInvFuncPtrIdx' Reason: 'the optional indirection is deactivated because CbkInvFuncPtrUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKINVFUNCPTRUSEDOFRXSIGINFO                              STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.CbkInvFuncPtrUsed' Reason: 'the optional indirection is deactivated because CbkInvFuncPtrUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKRXACKFUNCPTRIDXOFRXSIGINFO                             STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.CbkRxAckFuncPtrIdx' Reason: 'the optional indirection is deactivated because CbkRxAckFuncPtrUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKRXACKFUNCPTRUSEDOFRXSIGINFO                            STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.CbkRxAckFuncPtrUsed' Reason: 'the optional indirection is deactivated because CbkRxAckFuncPtrUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINFOIDXOFRXSIGINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.FilterInfoIdx' Reason: 'the optional indirection is deactivated because FilterInfoUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINFOUSEDOFRXSIGINFO                                 STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.FilterInfoUsed' Reason: 'the optional indirection is deactivated because FilterInfoUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_GWINFOIDXOFRXSIGINFO                                      STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.GwInfoIdx' Reason: 'The gateway is deactivated!' */
#define COM_GWINFOUSEDOFRXSIGINFO                                     STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.GwInfoUsed' Reason: 'The gateway is deactivated!' */
#define COM_INVVALUEIDXOFRXSIGINFO                                    STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.InvValueIdx' Reason: 'the optional indirection is deactivated because InvValueUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVVALUEUSEDOFRXSIGINFO                                   STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.InvValueUsed' Reason: 'the optional indirection is deactivated because InvValueUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXACCESSINFOIDXOFRXSIGINFO                                STD_ON
#define COM_RXTOUTINFOIDXOFRXSIGINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.RxTOutInfoIdx' Reason: 'the optional indirection is deactivated because RxTOutInfoUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_RXTOUTINFOUSEDOFRXSIGINFO                                 STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.RxTOutInfoUsed' Reason: 'the optional indirection is deactivated because RxTOutInfoUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_SIGNALPROCESSINGOFRXSIGINFO                               STD_ON
#define COM_UBIDXOFRXSIGINFO                                          STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.UbIdx' Reason: 'the value of Com_UbIdxOfRxSigInfo is always 'COM_NO_UBIDXOFRXSIGINFO' due to this, the array is deactivated.' */
#define COM_UBMASKIDXOFRXSIGINFO                                      STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.UbMaskIdx' Reason: 'the optional indirection is deactivated because UbMaskUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_UBMASKUSEDOFRXSIGINFO                                     STD_OFF  /**< Deactivateable: 'Com_RxSigInfo.UbMaskUsed' Reason: 'the optional indirection is deactivated because UbMaskUsedOfRxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_VALIDDLCOFRXSIGINFO                                       STD_ON
#define COM_RXTOUTCNT                                                 STD_OFF  /**< Deactivateable: 'Com_RxTOutCnt' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXTOUTINFO                                                STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CBKRXTOUTFUNCPTRINDENDIDXOFRXTOUTINFO                     STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.CbkRxTOutFuncPtrIndEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CBKRXTOUTFUNCPTRINDSTARTIDXOFRXTOUTINFO                   STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.CbkRxTOutFuncPtrIndStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CBKRXTOUTFUNCPTRINDUSEDOFRXTOUTINFO                       STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.CbkRxTOutFuncPtrIndUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FACTOROFRXTOUTINFO                                        STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.Factor' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FIRSTFACTOROFRXTOUTINFO                                   STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.FirstFactor' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXACCESSINFOREPLACEGRPSIGINDENDIDXOFRXTOUTINFO            STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceGrpSigIndEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXACCESSINFOREPLACEGRPSIGINDSTARTIDXOFRXTOUTINFO          STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceGrpSigIndStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXACCESSINFOREPLACEGRPSIGINDUSEDOFRXTOUTINFO              STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceGrpSigIndUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXACCESSINFOREPLACESIGINDENDIDXOFRXTOUTINFO               STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceSigIndEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXACCESSINFOREPLACESIGINDSTARTIDXOFRXTOUTINFO             STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceSigIndStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXACCESSINFOREPLACESIGINDUSEDOFRXTOUTINFO                 STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxAccessInfoReplaceSigIndUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXPDUINFOIDXOFRXTOUTINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxTOutInfo.RxPduInfoIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_RXTOUTINFOIND                                             STD_OFF  /**< Deactivateable: 'Com_RxTOutInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_RXTPBUFFER                                                STD_OFF  /**< Deactivateable: 'Com_RxTpBuffer' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_RXTPCONNECTIONSTATE                                       STD_OFF  /**< Deactivateable: 'Com_RxTpConnectionState' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_RXTPINFO                                                  STD_OFF  /**< Deactivateable: 'Com_RxTpInfo' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_BUFFERSIZEOFRXTPINFO                                      STD_OFF  /**< Deactivateable: 'Com_RxTpInfo.BufferSize' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_RXACCESSINFODYNSIGIDXOFRXTPINFO                           STD_OFF  /**< Deactivateable: 'Com_RxTpInfo.RxAccessInfoDynSigIdx' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_RXACCESSINFODYNSIGUSEDOFRXTPINFO                          STD_OFF  /**< Deactivateable: 'Com_RxTpInfo.RxAccessInfoDynSigUsed' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_RXTPBUFFERENDIDXOFRXTPINFO                                STD_OFF  /**< Deactivateable: 'Com_RxTpInfo.RxTpBufferEndIdx' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_RXTPBUFFERSTARTIDXOFRXTPINFO                              STD_OFF  /**< Deactivateable: 'Com_RxTpInfo.RxTpBufferStartIdx' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_RXTPBUFFERUSEDOFRXTPINFO                                  STD_OFF  /**< Deactivateable: 'Com_RxTpInfo.RxTpBufferUsed' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_RXTPSDULENGTH                                             STD_OFF  /**< Deactivateable: 'Com_RxTpSduLength' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_RXTPWRITTENBYTESCOUNTER                                   STD_OFF  /**< Deactivateable: 'Com_RxTpWrittenBytesCounter' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_SIGGRPEVENTFLAG                                           STD_OFF  /**< Deactivateable: 'Com_SigGrpEventFlag' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_SIZEOFCONSTVALUEXINT8                                     STD_ON
#define COM_SIZEOFCURRENTTXMODE                                       STD_ON
#define COM_SIZEOFCYCLETIMECNT                                        STD_ON
#define COM_SIZEOFCYCLICSENDREQUEST                                   STD_ON
#define COM_SIZEOFDELAYTIMECNT                                        STD_ON
#define COM_SIZEOFHANDLERXPDUDEFERRED                                 STD_ON
#define COM_SIZEOFHANDLETXPDUDEFERRED                                 STD_ON
#define COM_SIZEOFPDUGRPVECTOR                                        STD_ON
#define COM_SIZEOFREPCNT                                              STD_ON
#define COM_SIZEOFREPCYCLECNT                                         STD_ON
#define COM_SIZEOFRXACCESSINFO                                        STD_ON
#define COM_SIZEOFRXACCESSINFOIND                                     STD_ON
#define COM_SIZEOFRXDEFPDUBUFFER                                      STD_ON
#define COM_SIZEOFRXPDUGRPACTIVE                                      STD_ON
#define COM_SIZEOFRXPDUGRPINFO                                        STD_ON
#define COM_SIZEOFRXPDUINFO                                           STD_ON
#define COM_SIZEOFRXSIGBUFFERXINT8                                    STD_ON
#define COM_SIZEOFRXSIGINFO                                           STD_ON
#define COM_SIZEOFTRANSMITREQUEST                                     STD_ON
#define COM_SIZEOFTXMODEINFO                                          STD_ON
#define COM_SIZEOFTXMODETRUE                                          STD_ON
#define COM_SIZEOFTXPDUBUFFER                                         STD_ON
#define COM_SIZEOFTXPDUGRPACTIVE                                      STD_ON
#define COM_SIZEOFTXPDUGRPINFO                                        STD_ON
#define COM_SIZEOFTXPDUINFO                                           STD_ON
#define COM_SIZEOFTXPDUINITVALUE                                      STD_ON
#define COM_SIZEOFTXSDULENGTH                                         STD_ON
#define COM_SIZEOFTXSIGINFO                                           STD_ON
#define COM_SIZEOFWAITINGFORCONFIRMATION                              STD_ON
#define COM_SOURCEDESCRIPTIONMASK                                     STD_OFF  /**< Deactivateable: 'Com_SourceDescriptionMask' Reason: 'Gateway description feature is not licensed' */
#define COM_TMPRXBUFFER                                               STD_OFF  /**< Deactivateable: 'Com_TmpRxBuffer' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERXINT16                                      STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferXInt16' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERXINT32                                      STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferXInt32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TMPRXSHDBUFFERXINT8                                       STD_OFF  /**< Deactivateable: 'Com_TmpRxShdBufferXInt8' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TRANSMITREQUEST                                           STD_ON
#define COM_TXCYCLECOUNTERDIVISOR                                     STD_ON
#define COM_TXCYCLECOUNTERDIVISORCOUNTER                              STD_ON
#define COM_TXDLMONDIVISOR                                            STD_OFF  /**< Deactivateable: 'Com_TxDlMonDivisor' Reason: 'Timing domain and corresponding timing divisor are deactivated, because no value is configured for TxDlMonTimeBase.' */
#define COM_TXDLMONDIVISORCOUNTER                                     STD_ON
#define COM_TXDYNSIGNALLENGTH                                         STD_OFF  /**< Deactivateable: 'Com_TxDynSignalLength' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_TXFILTERINITSTATE                                         STD_OFF  /**< Deactivateable: 'Com_TxFilterInitState' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEXINT16                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueXInt16' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEXINT32                                   STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueXInt32' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERINITVALUEXINT8                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterInitValueXInt8' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEXINT16                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueXInt16' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEXINT32                                    STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueXInt32' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTEROLDVALUEXINT8                                     STD_OFF  /**< Deactivateable: 'Com_TxFilterOldValueXInt8' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXFILTERSTATE                                             STD_OFF  /**< Deactivateable: 'Com_TxFilterState' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXMODEFALSE                                               STD_OFF  /**< Deactivateable: 'Com_TxModeFalse' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_DIRECTOFTXMODEFALSE                                       STD_OFF  /**< Deactivateable: 'Com_TxModeFalse.Direct' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_PERIODICOFTXMODEFALSE                                     STD_OFF  /**< Deactivateable: 'Com_TxModeFalse.Periodic' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_REPCNTOFTXMODEFALSE                                       STD_OFF  /**< Deactivateable: 'Com_TxModeFalse.RepCnt' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_REPPERIODOFTXMODEFALSE                                    STD_OFF  /**< Deactivateable: 'Com_TxModeFalse.RepPeriod' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TIMEOFFSETOFTXMODEFALSE                                   STD_OFF  /**< Deactivateable: 'Com_TxModeFalse.TimeOffset' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TIMEPERIODOFTXMODEFALSE                                   STD_OFF  /**< Deactivateable: 'Com_TxModeFalse.TimePeriod' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXMODEINFO                                                STD_ON
#define COM_INITMODEOFTXMODEINFO                                      STD_ON
#define COM_INVALIDHNDOFTXMODEINFO                                    STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfTxModeInfo is always 'false' due to this, the array is deactivated.' */
#define COM_MASKEDBITSOFTXMODEINFO                                    STD_ON
#define COM_MINIMUMDELAYOFTXMODEINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.MinimumDelay' Reason: 'the value of Com_MinimumDelayOfTxModeInfo is always '0' due to this, the array is deactivated.' */
#define COM_TXFILTERINITSTATEENDIDXOFTXMODEINFO                       STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxFilterInitStateEndIdx' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITSTATESTARTIDXOFTXMODEINFO                     STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxFilterInitStateStartIdx' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITSTATEUSEDOFTXMODEINFO                         STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxFilterInitStateUsed' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXMODEFALSEIDXOFTXMODEINFO                                STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxModeFalseIdx' Reason: 'the optional indirection is deactivated because TxModeFalseUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXMODEFALSEUSEDOFTXMODEINFO                               STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxModeFalseUsed' Reason: 'the optional indirection is deactivated because TxModeFalseUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXMODETRUEIDXOFTXMODEINFO                                 STD_ON
#define COM_TXMODETRUEUSEDOFTXMODEINFO                                STD_ON
#define COM_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO             STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxSigInfoFilterInitValueIndEndIdx' Reason: 'the optional indirection is deactivated because TxSigInfoFilterInitValueIndUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO           STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxSigInfoFilterInitValueIndStartIdx' Reason: 'the optional indirection is deactivated because TxSigInfoFilterInitValueIndUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGINFOFILTERINITVALUEINDUSEDOFTXMODEINFO               STD_OFF  /**< Deactivateable: 'Com_TxModeInfo.TxSigInfoFilterInitValueIndUsed' Reason: 'the optional indirection is deactivated because TxSigInfoFilterInitValueIndUsedOfTxModeInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXMODETRUE                                                STD_ON
#define COM_DIRECTOFTXMODETRUE                                        STD_OFF  /**< Deactivateable: 'Com_TxModeTrue.Direct' Reason: 'the value of Com_DirectOfTxModeTrue is always 'false' due to this, the array is deactivated.' */
#define COM_PERIODICOFTXMODETRUE                                      STD_ON
#define COM_REPCNTOFTXMODETRUE                                        STD_OFF  /**< Deactivateable: 'Com_TxModeTrue.RepCnt' Reason: 'the value of Com_RepCntOfTxModeTrue is always '0' due to this, the array is deactivated.' */
#define COM_REPPERIODOFTXMODETRUE                                     STD_OFF  /**< Deactivateable: 'Com_TxModeTrue.RepPeriod' Reason: 'the value of Com_RepPeriodOfTxModeTrue is always '0' due to this, the array is deactivated.' */
#define COM_TIMEOFFSETOFTXMODETRUE                                    STD_OFF  /**< Deactivateable: 'Com_TxModeTrue.TimeOffset' Reason: 'the value of Com_TimeOffsetOfTxModeTrue is always '1' due to this, the array is deactivated.' */
#define COM_TIMEPERIODOFTXMODETRUE                                    STD_ON
#define COM_TXPDUBUFFER                                               STD_ON
#define COM_TXPDUCALLOUTFUNCPTR                                       STD_OFF  /**< Deactivateable: 'Com_TxPduCalloutFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXPDUGRPACTIVE                                            STD_ON
#define COM_TXPDUGRPINFO                                              STD_ON
#define COM_PDUGRPVECTORENDIDXOFTXPDUGRPINFO                          STD_ON
#define COM_PDUGRPVECTORSTARTIDXOFTXPDUGRPINFO                        STD_ON
#define COM_PDUGRPVECTORUSEDOFTXPDUGRPINFO                            STD_ON
#define COM_TXPDUINFO                                                 STD_ON
#define COM_CANCELLATIONSUPPORTOFTXPDUINFO                            STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CancellationSupport' Reason: '/ActiveEcuC/PduR/Com[0:PduRCancelTransmit] is configured to 'false'' */
#define COM_CBKTXACKDEFFUNCPTRINDENDIDXOFTXPDUINFO                    STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckDefFuncPtrIndEndIdx' Reason: 'the optional indirection is deactivated because CbkTxAckDefFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKDEFFUNCPTRINDSTARTIDXOFTXPDUINFO                  STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckDefFuncPtrIndStartIdx' Reason: 'the optional indirection is deactivated because CbkTxAckDefFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO                      STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckDefFuncPtrIndUsed' Reason: 'the optional indirection is deactivated because CbkTxAckDefFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKIMFUNCPTRINDENDIDXOFTXPDUINFO                     STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckImFuncPtrIndEndIdx' Reason: 'the optional indirection is deactivated because CbkTxAckImFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKIMFUNCPTRINDSTARTIDXOFTXPDUINFO                   STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckImFuncPtrIndStartIdx' Reason: 'the optional indirection is deactivated because CbkTxAckImFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXACKIMFUNCPTRINDUSEDOFTXPDUINFO                       STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxAckImFuncPtrIndUsed' Reason: 'the optional indirection is deactivated because CbkTxAckImFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXERRFUNCPTRINDENDIDXOFTXPDUINFO                       STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxErrFuncPtrIndEndIdx' Reason: 'the optional indirection is deactivated because CbkTxErrFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXERRFUNCPTRINDSTARTIDXOFTXPDUINFO                     STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxErrFuncPtrIndStartIdx' Reason: 'the optional indirection is deactivated because CbkTxErrFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO                         STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.CbkTxErrFuncPtrIndUsed' Reason: 'the optional indirection is deactivated because CbkTxErrFuncPtrIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CLRUBOFTXPDUINFO                                          STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.ClrUb' Reason: 'This array is deactivated, because no Tx I-PDUs with update-bits are configured.' */
#define COM_CONSTVALUEXINT8UBCLEARMASKENDIDXOFTXPDUINFO               STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.ConstValueXInt8UbClearMaskEndIdx' Reason: 'the optional indirection is deactivated because ConstValueXInt8UbClearMaskUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEXINT8UBCLEARMASKSTARTIDXOFTXPDUINFO             STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.ConstValueXInt8UbClearMaskStartIdx' Reason: 'the optional indirection is deactivated because ConstValueXInt8UbClearMaskUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_CONSTVALUEXINT8UBCLEARMASKUSEDOFTXPDUINFO                 STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.ConstValueXInt8UbClearMaskUsed' Reason: 'the optional indirection is deactivated because ConstValueXInt8UbClearMaskUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_EXTERNALIDOFTXPDUINFO                                     STD_ON
#define COM_GWTIMEOUTINFOIDXOFTXPDUINFO                               STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.GwTimeoutInfoIdx' Reason: 'the optional indirection is deactivated because GwTimeoutInfoUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_GWTIMEOUTINFOUSEDOFTXPDUINFO                              STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.GwTimeoutInfoUsed' Reason: 'the optional indirection is deactivated because GwTimeoutInfoUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFTXPDUINFOINDENDIDXOFTXPDUINFO              STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.IPduGroupInfoOfTxPduInfoIndEndIdx' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfTxPduInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFTXPDUINFOINDSTARTIDXOFTXPDUINFO            STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.IPduGroupInfoOfTxPduInfoIndStartIdx' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfTxPduInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_IPDUGROUPINFOOFTXPDUINFOINDUSEDOFTXPDUINFO                STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.IPduGroupInfoOfTxPduInfoIndUsed' Reason: 'the optional indirection is deactivated because IPduGroupInfoOfTxPduInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVALIDHNDOFTXPDUINFO                                     STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfTxPduInfo is always 'false' due to this, the array is deactivated.' */
#define COM_MASKEDBITSOFTXPDUINFO                                     STD_ON
#define COM_METADATALENGTHOFTXPDUINFO                                 STD_ON
#define COM_PDUWITHMETADATALENGTHOFTXPDUINFO                          STD_ON
#define COM_TXPDUBUFFERENDIDXOFTXPDUINFO                              STD_ON
#define COM_TXPDUBUFFERLENGTHOFTXPDUINFO                              STD_ON
#define COM_TXPDUBUFFERMETADATAENDIDXOFTXPDUINFO                      STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduBufferMetaDataEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] is configured to 'false'' */
#define COM_TXPDUBUFFERMETADATASTARTIDXOFTXPDUINFO                    STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduBufferMetaDataStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] is configured to 'false'' */
#define COM_TXPDUBUFFERMETADATAUSEDOFTXPDUINFO                        STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduBufferMetaDataUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] is configured to 'false'' */
#define COM_TXPDUBUFFERSTARTIDXOFTXPDUINFO                            STD_ON
#define COM_TXPDUBUFFERUSEDOFTXPDUINFO                                STD_ON
#define COM_TXPDUCALLOUTFUNCPTRIDXOFTXPDUINFO                         STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduCalloutFuncPtrIdx' Reason: 'the optional indirection is deactivated because TxPduCalloutFuncPtrUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXPDUCALLOUTFUNCPTRUSEDOFTXPDUINFO                        STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduCalloutFuncPtrUsed' Reason: 'the optional indirection is deactivated because TxPduCalloutFuncPtrUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXPDUINITVALUEENDIDXOFTXPDUINFO                           STD_ON
#define COM_TXPDUINITVALUEMETADATAENDIDXOFTXPDUINFO                   STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduInitValueMetaDataEndIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] is configured to 'false'' */
#define COM_TXPDUINITVALUEMETADATASTARTIDXOFTXPDUINFO                 STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduInitValueMetaDataStartIdx' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] is configured to 'false'' */
#define COM_TXPDUINITVALUEMETADATAUSEDOFTXPDUINFO                     STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduInitValueMetaDataUsed' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] is configured to 'false'' */
#define COM_TXPDUINITVALUESTARTIDXOFTXPDUINFO                         STD_ON
#define COM_TXPDUINITVALUEUSEDOFTXPDUINFO                             STD_ON
#define COM_TXPDUTTCALLOUTFUNCPTRIDXOFTXPDUINFO                       STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduTTCalloutFuncPtrIdx' Reason: 'the optional indirection is deactivated because TxPduTTCalloutFuncPtrUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXPDUTTCALLOUTFUNCPTRUSEDOFTXPDUINFO                      STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxPduTTCalloutFuncPtrUsed' Reason: 'the optional indirection is deactivated because TxPduTTCalloutFuncPtrUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGGRPINFOINDENDIDXOFTXPDUINFO                          STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxSigGrpInfoIndEndIdx' Reason: 'the optional indirection is deactivated because TxSigGrpInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO                        STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxSigGrpInfoIndStartIdx' Reason: 'the optional indirection is deactivated because TxSigGrpInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGGRPINFOINDUSEDOFTXPDUINFO                            STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxSigGrpInfoIndUsed' Reason: 'the optional indirection is deactivated because TxSigGrpInfoIndUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXTOUTINFOIDXOFTXPDUINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxTOutInfoIdx' Reason: 'the optional indirection is deactivated because TxTOutInfoUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXTOUTINFOUSEDOFTXPDUINFO                                 STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxTOutInfoUsed' Reason: 'the optional indirection is deactivated because TxTOutInfoUsedOfTxPduInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXTPINFOIDXOFTXPDUINFO                                    STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxTpInfoIdx' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_TXTPINFOUSEDOFTXPDUINFO                                   STD_OFF  /**< Deactivateable: 'Com_TxPduInfo.TxTpInfoUsed' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_TXPDUINFOIND                                              STD_OFF  /**< Deactivateable: 'Com_TxPduInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXPDUINITVALUE                                            STD_ON
#define COM_TXPDUTTCALLOUTFUNCPTR                                     STD_OFF  /**< Deactivateable: 'Com_TxPduTTCalloutFuncPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSDULENGTH                                               STD_ON
#define COM_TXSHDBUFFER                                               STD_OFF  /**< Deactivateable: 'Com_TxShdBuffer' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGGRPINFO                                              STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_ARRAYACCESSUSEDOFTXSIGGRPINFO                             STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.ArrayAccessUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_INVALIDHNDOFTXSIGGRPINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.InvalidHnd' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_PDUIDOFTXSIGGRPINFO                                       STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.PduId' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_PDUOFFSETOFTXSIGGRPINFO                                   STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.PduOffset' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_SIGGROUPONCHANGEOFFSETOFTXSIGGRPINFO                      STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGroupOnChangeOffset' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_SIGGROUPONCHANGESTARTPOSITIONOFTXSIGGRPINFO               STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGroupOnChangeStartPosition' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_SIGGROUPONCHANGEWITHOUTREPOFFSETOFTXSIGGRPINFO            STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGroupOnChangeWithoutRepOffset' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_SIGGROUPONCHANGEWITHOUTREPSTARTPOSITIONOFTXSIGGRPINFO     STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.SigGroupOnChangeWithoutRepStartPosition' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TRANSFERPROPERTYOFTXSIGGRPINFO                            STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TransferProperty' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSHDBUFFERENDIDXOFTXSIGGRPINFO                           STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxShdBufferEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSHDBUFFERLENGTHOFTXSIGGRPINFO                           STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxShdBufferLength' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSHDBUFFERSTARTIDXOFTXSIGGRPINFO                         STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxShdBufferStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSHDBUFFERUSEDOFTXSIGGRPINFO                             STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxShdBufferUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGGRPMASKENDIDXOFTXSIGGRPINFO                          STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpMaskEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGGRPMASKLENGTHOFTXSIGGRPINFO                          STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpMaskLength' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGGRPMASKSTARTIDXOFTXSIGGRPINFO                        STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpMaskStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGGRPMASKUSEDOFTXSIGGRPINFO                            STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpMaskUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEENDIDXOFTXSIGGRPINFO          STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGELENGTHOFTXSIGGRPINFO          STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeLength' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGESTARTIDXOFTXSIGGRPINFO        STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEUSEDOFTXSIGGRPINFO            STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPENDIDXOFTXSIGGRPINFO STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeWithoutRepEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPLENGTHOFTXSIGGRPINFO STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeWithoutRepLength' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPSTARTIDXOFTXSIGGRPINFO STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeWithoutRepStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPUSEDOFTXSIGGRPINFO  STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigGrpOnChangeMaskOnChangeWithoutRepUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGINFOINVVALUEINDENDIDXOFTXSIGGRPINFO                  STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigInfoInvValueIndEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGINFOINVVALUEINDSTARTIDXOFTXSIGGRPINFO                STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigInfoInvValueIndStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGINFOINVVALUEINDUSEDOFTXSIGGRPINFO                    STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxSigInfoInvValueIndUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXTOUTINFOIDXOFTXSIGGRPINFO                               STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxTOutInfoIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXTOUTINFOUSEDOFTXSIGGRPINFO                              STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.TxTOutInfoUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_UBIDXOFTXSIGGRPINFO                                       STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.UbIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_UBMASKIDXOFTXSIGGRPINFO                                   STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.UbMaskIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_UBMASKUSEDOFTXSIGGRPINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfo.UbMaskUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXSIGGRPINFOIND                                           STD_OFF  /**< Deactivateable: 'Com_TxSigGrpInfoInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGGRPMASK                                              STD_OFF  /**< Deactivateable: 'Com_TxSigGrpMask' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGGRPONCHANGEMASK                                      STD_OFF  /**< Deactivateable: 'Com_TxSigGrpOnChangeMask' Reason: '/ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] is configured to 'false'' */
#define COM_TXSIGINFO                                                 STD_ON
#define COM_APPLTYPEOFTXSIGINFO                                       STD_ON
#define COM_BITLENGTHOFTXSIGINFO                                      STD_ON
#define COM_BITPOSITIONOFTXSIGINFO                                    STD_ON
#define COM_BUSACCOFTXSIGINFO                                         STD_ON
#define COM_BYTELENGTHOFTXSIGINFO                                     STD_ON
#define COM_BYTEPOSITIONOFTXSIGINFO                                   STD_ON
#define COM_FILTERINFOIDXOFTXSIGINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.FilterInfoIdx' Reason: 'the optional indirection is deactivated because FilterInfoUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINFOUSEDOFTXSIGINFO                                 STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.FilterInfoUsed' Reason: 'the optional indirection is deactivated because FilterInfoUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINITVALUEIDXOFTXSIGINFO                             STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.FilterInitValueIdx' Reason: 'the optional indirection is deactivated because FilterInitValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_FILTERINITVALUEUSEDOFTXSIGINFO                            STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.FilterInitValueUsed' Reason: 'the optional indirection is deactivated because FilterInitValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVVALUEIDXOFTXSIGINFO                                    STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.InvValueIdx' Reason: 'the optional indirection is deactivated because InvValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVVALUEUSEDOFTXSIGINFO                                   STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.InvValueUsed' Reason: 'the optional indirection is deactivated because InvValueUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_INVALIDHNDOFTXSIGINFO                                     STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.InvalidHnd' Reason: 'the value of Com_InvalidHndOfTxSigInfo is always 'false' due to this, the array is deactivated.' */
#define COM_ONCHANGEIDXOFTXSIGINFO                                    STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.OnChangeIdx' Reason: 'the optional indirection is deactivated because OnChangeUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_ONCHANGEUSEDOFTXSIGINFO                                   STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.OnChangeUsed' Reason: 'the optional indirection is deactivated because OnChangeUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_PDUIDOFTXSIGINFO                                          STD_ON
#define COM_STARTBYTEINPDUPOSITIONOFTXSIGINFO                         STD_ON
#define COM_TRIGGEREDOFTXSIGINFO                                      STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.Triggered' Reason: 'the value of Com_TriggeredOfTxSigInfo is always 'false' due to this, the array is deactivated.' */
#define COM_TXFILTERINITSTATEIDXOFTXSIGINFO                           STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxFilterInitStateIdx' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXFILTERINITSTATEUSEDOFTXSIGINFO                          STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxFilterInitStateUsed' Reason: 'the optional indirection is deactivated because TxFilterInitStateUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGGRPINFOIDXOFTXSIGINFO                                STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxSigGrpInfoIdx' Reason: 'the optional indirection is deactivated because TxSigGrpInfoUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXSIGGRPINFOUSEDOFTXSIGINFO                               STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxSigGrpInfoUsed' Reason: 'the optional indirection is deactivated because TxSigGrpInfoUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXTOUTINFOIDXOFTXSIGINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxTOutInfoIdx' Reason: 'the optional indirection is deactivated because TxTOutInfoUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_TXTOUTINFOUSEDOFTXSIGINFO                                 STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.TxTOutInfoUsed' Reason: 'the optional indirection is deactivated because TxTOutInfoUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_UBIDXOFTXSIGINFO                                          STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.UbIdx' Reason: 'the value of Com_UbIdxOfTxSigInfo is always 'COM_NO_UBIDXOFTXSIGINFO' due to this, the array is deactivated.' */
#define COM_UBMASKIDXOFTXSIGINFO                                      STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.UbMaskIdx' Reason: 'the optional indirection is deactivated because UbMaskUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_UBMASKUSEDOFTXSIGINFO                                     STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.UbMaskUsed' Reason: 'the optional indirection is deactivated because UbMaskUsedOfTxSigInfo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define COM_WITHOUTREPOFTXSIGINFO                                     STD_OFF  /**< Deactivateable: 'Com_TxSigInfo.WithoutRep' Reason: 'the value of Com_WithoutRepOfTxSigInfo is always 'false' due to this, the array is deactivated.' */
#define COM_TXSIGINFOFILTERINITVALUEIND                               STD_OFF  /**< Deactivateable: 'Com_TxSigInfoFilterInitValueInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXSIGINFOINVVALUEIND                                      STD_OFF  /**< Deactivateable: 'Com_TxSigInfoInvValueInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXTOUTCNT                                                 STD_OFF  /**< Deactivateable: 'Com_TxTOutCnt' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define COM_TXTOUTINFO                                                STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CBKTXTOUTFUNCPTRINDENDIDXOFTXTOUTINFO                     STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo.CbkTxTOutFuncPtrIndEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CBKTXTOUTFUNCPTRINDSTARTIDXOFTXTOUTINFO                   STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo.CbkTxTOutFuncPtrIndStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_CBKTXTOUTFUNCPTRINDUSEDOFTXTOUTINFO                       STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo.CbkTxTOutFuncPtrIndUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_FACTOROFTXTOUTINFO                                        STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo.Factor' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_NONEMODEOFTXTOUTINFO                                      STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo.NoneMode' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXPDUINFOIDXOFTXTOUTINFO                                  STD_OFF  /**< Deactivateable: 'Com_TxTOutInfo.TxPduInfoIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define COM_TXTMPTPPDULENGTH                                          STD_OFF  /**< Deactivateable: 'Com_TxTmpTpPduLength' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_TXTPCONNECTIONSTATE                                       STD_OFF  /**< Deactivateable: 'Com_TxTpConnectionState' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_TXTPINFO                                                  STD_OFF  /**< Deactivateable: 'Com_TxTpInfo' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_BUFFERSIZEOFTXTPINFO                                      STD_OFF  /**< Deactivateable: 'Com_TxTpInfo.BufferSize' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_TXPDUBUFFERENDIDXOFTXTPINFO                               STD_OFF  /**< Deactivateable: 'Com_TxTpInfo.TxPduBufferEndIdx' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_TXPDUBUFFERLENGTHOFTXTPINFO                               STD_OFF  /**< Deactivateable: 'Com_TxTpInfo.TxPduBufferLength' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_TXPDUBUFFERSTARTIDXOFTXTPINFO                             STD_OFF  /**< Deactivateable: 'Com_TxTpInfo.TxPduBufferStartIdx' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_TXPDUBUFFERUSEDOFTXTPINFO                                 STD_OFF  /**< Deactivateable: 'Com_TxTpInfo.TxPduBufferUsed' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_TXSIGINFODYNSIGIDXOFTXTPINFO                              STD_OFF  /**< Deactivateable: 'Com_TxTpInfo.TxSigInfoDynSigIdx' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_TXSIGINFODYNSIGUSEDOFTXTPINFO                             STD_OFF  /**< Deactivateable: 'Com_TxTpInfo.TxSigInfoDynSigUsed' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_TXTPSDULENGTH                                             STD_OFF  /**< Deactivateable: 'Com_TxTpSduLength' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_TXTPWRITTENBYTESCOUNTER                                   STD_OFF  /**< Deactivateable: 'Com_TxTpWrittenBytesCounter' Reason: '/ActiveEcuC/PduR/Com[0:PduRTransportProtocol] is configured to 'false'' */
#define COM_WAITINGFORCONFIRMATION                                    STD_ON
#define COM_GWEVENTCACHE                                              STD_OFF  /**< Deactivateable: 'Com_gwEventCache' Reason: 'Gateway description feature is not licensed' */
#define COM_GWEVENTCACHEINDEX                                         STD_OFF  /**< Deactivateable: 'Com_gwEventCacheIndex' Reason: 'Gateway description feature is not licensed' */
#define COM_PCCONFIG                                                  STD_ON
#define COM_ALLSIGCNTOFPCCONFIG                                       STD_ON
#define COM_ALLSIGGRPCNTOFPCCONFIG                                    STD_ON
#define COM_CONFIGIDOFPCCONFIG                                        STD_ON
#define COM_CONSTVALUEXINT8OFPCCONFIG                                 STD_ON
#define COM_CURRENTTXMODEOFPCCONFIG                                   STD_ON
#define COM_CYCLETIMECNTOFPCCONFIG                                    STD_ON
#define COM_CYCLICSENDREQUESTOFPCCONFIG                               STD_ON
#define COM_DELAYTIMECNTOFPCCONFIG                                    STD_ON
#define COM_FINALMAGICNUMBEROFPCCONFIG                                STD_OFF  /**< Deactivateable: 'Com_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define COM_HANDLERXPDUDEFERREDOFPCCONFIG                             STD_ON
#define COM_HANDLETXPDUDEFERREDOFPCCONFIG                             STD_ON
#define COM_INITDATAHASHCODEOFPCCONFIG                                STD_OFF  /**< Deactivateable: 'Com_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define COM_INITIALIZEDOFPCCONFIG                                     STD_ON
#define COM_PDUGRPCNTOFPCCONFIG                                       STD_ON
#define COM_PDUGRPVECTOROFPCCONFIG                                    STD_ON
#define COM_REPCNTOFPCCONFIG                                          STD_ON
#define COM_REPCYCLECNTOFPCCONFIG                                     STD_ON
#define COM_RXACCESSINFOINDOFPCCONFIG                                 STD_ON
#define COM_RXACCESSINFOOFPCCONFIG                                    STD_ON
#define COM_RXDEFPDUBUFFEROFPCCONFIG                                  STD_ON
#define COM_RXDLMONDIVISORCOUNTEROFPCCONFIG                           STD_ON
#define COM_RXDLMONDIVISOROFPCCONFIG                                  STD_OFF  /**< Deactivateable: 'Com_PCConfig.RxDlMonDivisor' Reason: 'Timing domain and corresponding timing divisor are deactivated, because no value is configured for RxDlMonTimeBase.' */
#define COM_RXPDUGRPACTIVEOFPCCONFIG                                  STD_ON
#define COM_RXPDUGRPINFOOFPCCONFIG                                    STD_ON
#define COM_RXPDUINFOOFPCCONFIG                                       STD_ON
#define COM_RXSIGBUFFERXINT8OFPCCONFIG                                STD_ON
#define COM_RXSIGINFOOFPCCONFIG                                       STD_ON
#define COM_SIZEOFCONSTVALUEXINT8OFPCCONFIG                           STD_ON
#define COM_SIZEOFCURRENTTXMODEOFPCCONFIG                             STD_ON
#define COM_SIZEOFCYCLETIMECNTOFPCCONFIG                              STD_ON
#define COM_SIZEOFCYCLICSENDREQUESTOFPCCONFIG                         STD_ON
#define COM_SIZEOFDELAYTIMECNTOFPCCONFIG                              STD_ON
#define COM_SIZEOFHANDLERXPDUDEFERREDOFPCCONFIG                       STD_ON
#define COM_SIZEOFHANDLETXPDUDEFERREDOFPCCONFIG                       STD_ON
#define COM_SIZEOFPDUGRPVECTOROFPCCONFIG                              STD_ON
#define COM_SIZEOFREPCNTOFPCCONFIG                                    STD_ON
#define COM_SIZEOFREPCYCLECNTOFPCCONFIG                               STD_ON
#define COM_SIZEOFRXACCESSINFOINDOFPCCONFIG                           STD_ON
#define COM_SIZEOFRXACCESSINFOOFPCCONFIG                              STD_ON
#define COM_SIZEOFRXDEFPDUBUFFEROFPCCONFIG                            STD_ON
#define COM_SIZEOFRXPDUGRPACTIVEOFPCCONFIG                            STD_ON
#define COM_SIZEOFRXPDUGRPINFOOFPCCONFIG                              STD_ON
#define COM_SIZEOFRXPDUINFOOFPCCONFIG                                 STD_ON
#define COM_SIZEOFRXSIGBUFFERXINT8OFPCCONFIG                          STD_ON
#define COM_SIZEOFRXSIGINFOOFPCCONFIG                                 STD_ON
#define COM_SIZEOFTRANSMITREQUESTOFPCCONFIG                           STD_ON
#define COM_SIZEOFTXMODEINFOOFPCCONFIG                                STD_ON
#define COM_SIZEOFTXMODETRUEOFPCCONFIG                                STD_ON
#define COM_SIZEOFTXPDUBUFFEROFPCCONFIG                               STD_ON
#define COM_SIZEOFTXPDUGRPACTIVEOFPCCONFIG                            STD_ON
#define COM_SIZEOFTXPDUGRPINFOOFPCCONFIG                              STD_ON
#define COM_SIZEOFTXPDUINFOOFPCCONFIG                                 STD_ON
#define COM_SIZEOFTXPDUINITVALUEOFPCCONFIG                            STD_ON
#define COM_SIZEOFTXSDULENGTHOFPCCONFIG                               STD_ON
#define COM_SIZEOFTXSIGINFOOFPCCONFIG                                 STD_ON
#define COM_SIZEOFWAITINGFORCONFIRMATIONOFPCCONFIG                    STD_ON
#define COM_TRANSMITREQUESTOFPCCONFIG                                 STD_ON
#define COM_TXCYCLECOUNTERDIVISORCOUNTEROFPCCONFIG                    STD_ON
#define COM_TXCYCLECOUNTERDIVISOROFPCCONFIG                           STD_ON
#define COM_TXDLMONDIVISORCOUNTEROFPCCONFIG                           STD_ON
#define COM_TXDLMONDIVISOROFPCCONFIG                                  STD_OFF  /**< Deactivateable: 'Com_PCConfig.TxDlMonDivisor' Reason: 'Timing domain and corresponding timing divisor are deactivated, because no value is configured for TxDlMonTimeBase.' */
#define COM_TXMODEINFOOFPCCONFIG                                      STD_ON
#define COM_TXMODETRUEOFPCCONFIG                                      STD_ON
#define COM_TXPDUBUFFEROFPCCONFIG                                     STD_ON
#define COM_TXPDUGRPACTIVEOFPCCONFIG                                  STD_ON
#define COM_TXPDUGRPINFOOFPCCONFIG                                    STD_ON
#define COM_TXPDUINFOOFPCCONFIG                                       STD_ON
#define COM_TXPDUINITVALUEOFPCCONFIG                                  STD_ON
#define COM_TXSDULENGTHOFPCCONFIG                                     STD_ON
#define COM_TXSIGINFOOFPCCONFIG                                       STD_ON
#define COM_WAITINGFORCONFIRMATIONOFPCCONFIG                          STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  ComPCMinNumericValueDefines  Com Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define COM_MIN_CYCLETIMECNT                                          0U
#define COM_MIN_DEFERREDGWMAPPINGEVENT                                0U
#define COM_MIN_DELAYTIMECNT                                          0U
#define COM_MIN_GWROUTINGTIMEOUTCOUNTER                               0U
#define COM_MIN_HANDLERXDEFERREDGWDESCRIPTION                         0U
#define COM_MIN_HANDLERXPDUDEFERRED                                   0U
#define COM_MIN_REPCNT                                                0U
#define COM_MIN_REPCYCLECNT                                           0U
#define COM_MIN_RXDEFPDUBUFFER                                        0U
#define COM_MIN_RXDEFERREDEVENTCACHE                                  0U
#define COM_MIN_RXDLMONDIVISORCOUNTER                                 0U
#define COM_MIN_RXDYNSIGNALLENGTH                                     0U
#define COM_MIN_RXDYNSIGNALTMPLENGTHFORSIGNALGROUPS                   0U
#define COM_MIN_RXNEXTEVENTCACHEENTY                                  0U
#define COM_MIN_RXSHDBUFFERXINT16                                     0U
#define COM_MIN_RXSHDBUFFERXINT32                                     0UL
#define COM_MIN_RXSHDBUFFERXINT8                                      0U
#define COM_MIN_RXSIGBUFFERXINT16                                     0U
#define COM_MIN_RXSIGBUFFERXINT32                                     0UL
#define COM_MIN_RXSIGBUFFERXINT8                                      0U
#define COM_MIN_RXTOUTCNT                                             0U
#define COM_MIN_RXTPBUFFER                                            0U
#define COM_MIN_RXTPSDULENGTH                                         0U
#define COM_MIN_RXTPWRITTENBYTESCOUNTER                               0U
#define COM_MIN_SIGGRPEVENTFLAG                                       0U
#define COM_MIN_TMPRXBUFFER                                           0U
#define COM_MIN_TMPRXSHDBUFFERXINT16                                  0U
#define COM_MIN_TMPRXSHDBUFFERXINT32                                  0UL
#define COM_MIN_TMPRXSHDBUFFERXINT8                                   0U
#define COM_MIN_TXCYCLECOUNTERDIVISORCOUNTER                          0U
#define COM_MIN_TXDLMONDIVISORCOUNTER                                 0U
#define COM_MIN_TXDYNSIGNALLENGTH                                     0U
#define COM_MIN_TXFILTEROLDVALUEXINT16                                0U
#define COM_MIN_TXFILTEROLDVALUEXINT32                                0UL
#define COM_MIN_TXFILTEROLDVALUEXINT8                                 0U
#define COM_MIN_TXPDUBUFFER                                           0U
#define COM_MIN_TXSDULENGTH                                           0U
#define COM_MIN_TXSHDBUFFER                                           0U
#define COM_MIN_TXTOUTCNT                                             0U
#define COM_MIN_TXTMPTPPDULENGTH                                      0U
#define COM_MIN_TXTPSDULENGTH                                         0U
#define COM_MIN_TXTPWRITTENBYTESCOUNTER                               0U
#define COM_MIN_GWEVENTCACHE                                          0U
#define COM_MIN_GWEVENTCACHEINDEX                                     0U
/** 
  \}
*/ 

/** 
  \defgroup  ComPCMaxNumericValueDefines  Com Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define COM_MAX_CYCLETIMECNT                                          65535U
#define COM_MAX_DEFERREDGWMAPPINGEVENT                                65535U
#define COM_MAX_DELAYTIMECNT                                          65535U
#define COM_MAX_GWROUTINGTIMEOUTCOUNTER                               65535U
#define COM_MAX_HANDLERXDEFERREDGWDESCRIPTION                         65535U
#define COM_MAX_HANDLERXPDUDEFERRED                                   65535U
#define COM_MAX_REPCNT                                                65535U
#define COM_MAX_REPCYCLECNT                                           65535U
#define COM_MAX_RXDEFPDUBUFFER                                        255U
#define COM_MAX_RXDEFERREDEVENTCACHE                                  255U
#define COM_MAX_RXDLMONDIVISORCOUNTER                                 65535U
#define COM_MAX_RXDYNSIGNALLENGTH                                     65535U
#define COM_MAX_RXDYNSIGNALTMPLENGTHFORSIGNALGROUPS                   65535U
#define COM_MAX_RXNEXTEVENTCACHEENTY                                  255U
#define COM_MAX_RXSHDBUFFERXINT16                                     65535U
#define COM_MAX_RXSHDBUFFERXINT32                                     4294967295UL
#define COM_MAX_RXSHDBUFFERXINT8                                      255U
#define COM_MAX_RXSIGBUFFERXINT16                                     65535U
#define COM_MAX_RXSIGBUFFERXINT32                                     4294967295UL
#define COM_MAX_RXSIGBUFFERXINT8                                      255U
#define COM_MAX_RXTOUTCNT                                             65535U
#define COM_MAX_RXTPBUFFER                                            255U
#define COM_MAX_RXTPSDULENGTH                                         65535U
#define COM_MAX_RXTPWRITTENBYTESCOUNTER                               65535U
#define COM_MAX_SIGGRPEVENTFLAG                                       255U
#define COM_MAX_TMPRXBUFFER                                           255U
#define COM_MAX_TMPRXSHDBUFFERXINT16                                  65535U
#define COM_MAX_TMPRXSHDBUFFERXINT32                                  4294967295UL
#define COM_MAX_TMPRXSHDBUFFERXINT8                                   255U
#define COM_MAX_TXCYCLECOUNTERDIVISORCOUNTER                          65535U
#define COM_MAX_TXDLMONDIVISORCOUNTER                                 65535U
#define COM_MAX_TXDYNSIGNALLENGTH                                     65535U
#define COM_MAX_TXFILTEROLDVALUEXINT16                                65535U
#define COM_MAX_TXFILTEROLDVALUEXINT32                                4294967295UL
#define COM_MAX_TXFILTEROLDVALUEXINT8                                 255U
#define COM_MAX_TXPDUBUFFER                                           255U
#define COM_MAX_TXSDULENGTH                                           65535U
#define COM_MAX_TXSHDBUFFER                                           255U
#define COM_MAX_TXTOUTCNT                                             65535U
#define COM_MAX_TXTMPTPPDULENGTH                                      65535U
#define COM_MAX_TXTPSDULENGTH                                         65535U
#define COM_MAX_TXTPWRITTENBYTESCOUNTER                               65535U
#define COM_MAX_GWEVENTCACHE                                          255U
#define COM_MAX_GWEVENTCACHEINDEX                                     255U
/** 
  \}
*/ 

/** 
  \defgroup  ComPCNoReferenceDefines  Com No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define COM_NO_CBKRXTOUTFUNCPTRIND                                    65535U
#define COM_NO_CBKTXACKDEFFUNCPTRIND                                  65535U
#define COM_NO_CBKTXACKIMFUNCPTRIND                                   65535U
#define COM_NO_CBKTXERRFUNCPTRIND                                     65535U
#define COM_NO_CBKTXTOUTFUNCPTRIND                                    65535U
#define COM_NO_FILTERPARAMIDXOFFILTERINFO                             65535U
#define COM_NO_LENGTHOFFILTERINFO                                     65535U
#define COM_NO_SOURCEDESCRIPTIONMASKENDIDXOFGWDESCRIPTIONACCESSINFO   65535U
#define COM_NO_SOURCEDESCRIPTIONMASKSTARTIDXOFGWDESCRIPTIONACCESSINFO 65535U
#define COM_NO_GWSIGGRPMAPPINGENDIDXOFGWINFO                          65535U
#define COM_NO_GWSIGGRPMAPPINGSTARTIDXOFGWINFO                        65535U
#define COM_NO_GWSIGMAPPINGENDIDXOFGWINFO                             65535U
#define COM_NO_GWSIGMAPPINGSTARTIDXOFGWINFO                           65535U
#define COM_NO_IPDUGROUPINFOTOSUBIPDUGROUPSINDENDIDXOFIPDUGROUPINFO   65535U
#define COM_NO_IPDUGROUPINFOTOSUBIPDUGROUPSINDSTARTIDXOFIPDUGROUPINFO 65535U
#define COM_NO_RXPDUINFOINDENDIDXOFIPDUGROUPINFO                      65535U
#define COM_NO_RXPDUINFOINDSTARTIDXOFIPDUGROUPINFO                    65535U
#define COM_NO_TXPDUINFOINDENDIDXOFIPDUGROUPINFO                      65535U
#define COM_NO_TXPDUINFOINDSTARTIDXOFIPDUGROUPINFO                    65535U
#define COM_NO_IPDUGROUPINFOOFRXPDUINFOIND                            65535U
#define COM_NO_IPDUGROUPINFOOFTXPDUINFOIND                            65535U
#define COM_NO_IPDUGROUPINFOTOSUBIPDUGROUPSIND                        65535U
#define COM_NO_BUFFERIDXOFRXACCESSINFO                                255U
#define COM_NO_GWINFOIDXOFRXACCESSINFO                                65535U
#define COM_NO_INITVALUEIDXOFRXACCESSINFO                             255U
#define COM_NO_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO        255U
#define COM_NO_SHDBUFFERIDXOFRXACCESSINFO                             65535U
#define COM_NO_RXACCESSINFOIND                                        255U
#define COM_NO_RXACCESSINFOREPLACEGRPSIGIND                           65535U
#define COM_NO_RXACCESSINFOREPLACESIGIND                              65535U
#define COM_NO_FILTERINFOIDXOFRXGRPSIGINFO                            65535U
#define COM_NO_INVVALUEIDXOFRXGRPSIGINFO                              65535U
#define COM_NO_TMPBUFFERIDXOFRXGRPSIGINFO                             65535U
#define COM_NO_PDUGRPVECTORENDIDXOFRXPDUGRPINFO                       255U
#define COM_NO_PDUGRPVECTORSTARTIDXOFRXPDUGRPINFO                     255U
#define COM_NO_GWINFOENDIDXOFRXPDUINFO                                65535U
#define COM_NO_GWINFOSTARTIDXOFRXPDUINFO                              65535U
#define COM_NO_GWTXPDUDESCRIPTIONINFOENDIDXOFRXPDUINFO                65535U
#define COM_NO_GWTXPDUDESCRIPTIONINFOSTARTIDXOFRXPDUINFO              65535U
#define COM_NO_HANDLERXDEFERREDGWDESCRIPTIONIDXOFRXPDUINFO            65535U
#define COM_NO_HANDLERXPDUDEFERREDIDXOFRXPDUINFO                      255U
#define COM_NO_IPDUGROUPINFOOFRXPDUINFOINDENDIDXOFRXPDUINFO           65535U
#define COM_NO_IPDUGROUPINFOOFRXPDUINFOINDSTARTIDXOFRXPDUINFO         65535U
#define COM_NO_RXACCESSINFOINDENDIDXOFRXPDUINFO                       255U
#define COM_NO_RXACCESSINFOINDSTARTIDXOFRXPDUINFO                     255U
#define COM_NO_RXDEFPDUBUFFERENDIDXOFRXPDUINFO                        255U
#define COM_NO_RXDEFPDUBUFFERSTARTIDXOFRXPDUINFO                      255U
#define COM_NO_RXPDUCALLOUTFUNCPTRIDXOFRXPDUINFO                      65535U
#define COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO                       65535U
#define COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO                     65535U
#define COM_NO_RXSIGINFOENDIDXOFRXPDUINFO                             255U
#define COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO                           255U
#define COM_NO_RXTOUTINFOIDXOFRXPDUINFO                               65535U
#define COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO                         65535U
#define COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO                       65535U
#define COM_NO_RXTPINFOIDXOFRXPDUINFO                                 65535U
#define COM_NO_RXPDUINFOIND                                           65535U
#define COM_NO_CBKINVFUNCPTRIDXOFRXSIGGRPINFO                         65535U
#define COM_NO_CBKRXACKFUNCPTRIDXOFRXSIGGRPINFO                       65535U
#define COM_NO_CONSTVALUEXINT8ENDIDXOFRXSIGGRPINFO                    65535U
#define COM_NO_CONSTVALUEXINT8STARTIDXOFRXSIGGRPINFO                  65535U
#define COM_NO_GWINFOIDXOFRXSIGGRPINFO                                65535U
#define COM_NO_RXPDUINFOIDXOFRXSIGGRPINFO                             65535U
#define COM_NO_RXSHDBUFFERXINT8ENDIDXOFRXSIGGRPINFO                   65535U
#define COM_NO_RXSHDBUFFERXINT8STARTIDXOFRXSIGGRPINFO                 65535U
#define COM_NO_RXTOUTINFOIDXOFRXSIGGRPINFO                            65535U
#define COM_NO_UBIDXOFRXSIGGRPINFO                                    65535U
#define COM_NO_UBMASKIDXOFRXSIGGRPINFO                                65535U
#define COM_NO_RXSIGGRPINFOIND                                        65535U
#define COM_NO_CBKINVFUNCPTRIDXOFRXSIGINFO                            65535U
#define COM_NO_CBKRXACKFUNCPTRIDXOFRXSIGINFO                          65535U
#define COM_NO_FILTERINFOIDXOFRXSIGINFO                               65535U
#define COM_NO_GWINFOIDXOFRXSIGINFO                                   65535U
#define COM_NO_INVVALUEIDXOFRXSIGINFO                                 65535U
#define COM_NO_RXTOUTINFOIDXOFRXSIGINFO                               65535U
#define COM_NO_UBIDXOFRXSIGINFO                                       65535U
#define COM_NO_UBMASKIDXOFRXSIGINFO                                   65535U
#define COM_NO_CBKRXTOUTFUNCPTRINDENDIDXOFRXTOUTINFO                  65535U
#define COM_NO_CBKRXTOUTFUNCPTRINDSTARTIDXOFRXTOUTINFO                65535U
#define COM_NO_RXACCESSINFOREPLACEGRPSIGINDENDIDXOFRXTOUTINFO         65535U
#define COM_NO_RXACCESSINFOREPLACEGRPSIGINDSTARTIDXOFRXTOUTINFO       65535U
#define COM_NO_RXACCESSINFOREPLACESIGINDENDIDXOFRXTOUTINFO            65535U
#define COM_NO_RXACCESSINFOREPLACESIGINDSTARTIDXOFRXTOUTINFO          65535U
#define COM_NO_RXTOUTINFOIND                                          65535U
#define COM_NO_RXACCESSINFODYNSIGIDXOFRXTPINFO                        65535U
#define COM_NO_RXTPBUFFERENDIDXOFRXTPINFO                             65535U
#define COM_NO_RXTPBUFFERSTARTIDXOFRXTPINFO                           65535U
#define COM_NO_TXFILTERINITSTATEENDIDXOFTXMODEINFO                    65535U
#define COM_NO_TXFILTERINITSTATESTARTIDXOFTXMODEINFO                  65535U
#define COM_NO_TXMODEFALSEIDXOFTXMODEINFO                             65535U
#define COM_NO_TXMODETRUEIDXOFTXMODEINFO                              255U
#define COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO          65535U
#define COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO        65535U
#define COM_NO_PDUGRPVECTORENDIDXOFTXPDUGRPINFO                       255U
#define COM_NO_PDUGRPVECTORSTARTIDXOFTXPDUGRPINFO                     255U
#define COM_NO_CBKTXACKDEFFUNCPTRINDENDIDXOFTXPDUINFO                 65535U
#define COM_NO_CBKTXACKDEFFUNCPTRINDSTARTIDXOFTXPDUINFO               65535U
#define COM_NO_CBKTXACKIMFUNCPTRINDENDIDXOFTXPDUINFO                  65535U
#define COM_NO_CBKTXACKIMFUNCPTRINDSTARTIDXOFTXPDUINFO                65535U
#define COM_NO_CBKTXERRFUNCPTRINDENDIDXOFTXPDUINFO                    65535U
#define COM_NO_CBKTXERRFUNCPTRINDSTARTIDXOFTXPDUINFO                  65535U
#define COM_NO_CONSTVALUEXINT8UBCLEARMASKENDIDXOFTXPDUINFO            65535U
#define COM_NO_CONSTVALUEXINT8UBCLEARMASKSTARTIDXOFTXPDUINFO          65535U
#define COM_NO_GWTIMEOUTINFOIDXOFTXPDUINFO                            65535U
#define COM_NO_IPDUGROUPINFOOFTXPDUINFOINDENDIDXOFTXPDUINFO           65535U
#define COM_NO_IPDUGROUPINFOOFTXPDUINFOINDSTARTIDXOFTXPDUINFO         65535U
#define COM_NO_TXPDUBUFFERENDIDXOFTXPDUINFO                           255U
#define COM_NO_TXPDUBUFFERMETADATAENDIDXOFTXPDUINFO                   65535U
#define COM_NO_TXPDUBUFFERMETADATASTARTIDXOFTXPDUINFO                 65535U
#define COM_NO_TXPDUBUFFERSTARTIDXOFTXPDUINFO                         255U
#define COM_NO_TXPDUCALLOUTFUNCPTRIDXOFTXPDUINFO                      65535U
#define COM_NO_TXPDUINITVALUEENDIDXOFTXPDUINFO                        255U
#define COM_NO_TXPDUINITVALUEMETADATAENDIDXOFTXPDUINFO                65535U
#define COM_NO_TXPDUINITVALUEMETADATASTARTIDXOFTXPDUINFO              65535U
#define COM_NO_TXPDUINITVALUESTARTIDXOFTXPDUINFO                      255U
#define COM_NO_TXPDUTTCALLOUTFUNCPTRIDXOFTXPDUINFO                    65535U
#define COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO                       65535U
#define COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO                     65535U
#define COM_NO_TXTOUTINFOIDXOFTXPDUINFO                               65535U
#define COM_NO_TXTPINFOIDXOFTXPDUINFO                                 65535U
#define COM_NO_TXPDUINFOIND                                           65535U
#define COM_NO_TXSHDBUFFERENDIDXOFTXSIGGRPINFO                        65535U
#define COM_NO_TXSHDBUFFERSTARTIDXOFTXSIGGRPINFO                      65535U
#define COM_NO_TXSIGGRPMASKENDIDXOFTXSIGGRPINFO                       65535U
#define COM_NO_TXSIGGRPMASKSTARTIDXOFTXSIGGRPINFO                     65535U
#define COM_NO_TXSIGGRPONCHANGEMASKONCHANGEENDIDXOFTXSIGGRPINFO       65535U
#define COM_NO_TXSIGGRPONCHANGEMASKONCHANGESTARTIDXOFTXSIGGRPINFO     65535U
#define COM_NO_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPENDIDXOFTXSIGGRPINFO 65535U
#define COM_NO_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPSTARTIDXOFTXSIGGRPINFO 65535U
#define COM_NO_TXSIGINFOINVVALUEINDENDIDXOFTXSIGGRPINFO               65535U
#define COM_NO_TXSIGINFOINVVALUEINDSTARTIDXOFTXSIGGRPINFO             65535U
#define COM_NO_TXTOUTINFOIDXOFTXSIGGRPINFO                            65535U
#define COM_NO_UBIDXOFTXSIGGRPINFO                                    65535U
#define COM_NO_UBMASKIDXOFTXSIGGRPINFO                                65535U
#define COM_NO_TXSIGGRPINFOIND                                        65535U
#define COM_NO_FILTERINFOIDXOFTXSIGINFO                               65535U
#define COM_NO_FILTERINITVALUEIDXOFTXSIGINFO                          65535U
#define COM_NO_INVVALUEIDXOFTXSIGINFO                                 65535U
#define COM_NO_ONCHANGEIDXOFTXSIGINFO                                 65535U
#define COM_NO_TXFILTERINITSTATEIDXOFTXSIGINFO                        65535U
#define COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO                             65535U
#define COM_NO_TXTOUTINFOIDXOFTXSIGINFO                               65535U
#define COM_NO_UBIDXOFTXSIGINFO                                       65535U
#define COM_NO_UBMASKIDXOFTXSIGINFO                                   65535U
#define COM_NO_TXSIGINFOFILTERINITVALUEIND                            65535U
#define COM_NO_TXSIGINFOINVVALUEIND                                   65535U
#define COM_NO_CBKTXTOUTFUNCPTRINDENDIDXOFTXTOUTINFO                  65535U
#define COM_NO_CBKTXTOUTFUNCPTRINDSTARTIDXOFTXTOUTINFO                65535U
#define COM_NO_TXPDUBUFFERENDIDXOFTXTPINFO                            65535U
#define COM_NO_TXPDUBUFFERSTARTIDXOFTXTPINFO                          65535U
#define COM_NO_TXSIGINFODYNSIGIDXOFTXTPINFO                           65535U
/** 
  \}
*/ 

/** 
  \defgroup  ComPCEnumExistsDefines  Com Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define COM_EXISTS_BOOLEAN_APPLTYPEOFFILTERINFO                       STD_OFF
#define COM_EXISTS_UINT8_APPLTYPEOFFILTERINFO                         STD_OFF
#define COM_EXISTS_SINT8_APPLTYPEOFFILTERINFO                         STD_OFF
#define COM_EXISTS_UINT16_APPLTYPEOFFILTERINFO                        STD_OFF
#define COM_EXISTS_SINT16_APPLTYPEOFFILTERINFO                        STD_OFF
#define COM_EXISTS_UINT32_APPLTYPEOFFILTERINFO                        STD_OFF
#define COM_EXISTS_SINT32_APPLTYPEOFFILTERINFO                        STD_OFF
#define COM_EXISTS_UINT8_N_APPLTYPEOFFILTERINFO                       STD_OFF
#define COM_EXISTS_UINT8_DYN_APPLTYPEOFFILTERINFO                     STD_OFF
#define COM_EXISTS_NEVER_FILTERALGOOFFILTERINFO                       STD_OFF
#define COM_EXISTS_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO STD_OFF
#define COM_EXISTS_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO        STD_OFF
#define COM_EXISTS_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO         STD_OFF
#define COM_EXISTS_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO              STD_OFF
#define COM_EXISTS_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO               STD_OFF
#define COM_EXISTS_IMMEDIATE_PENDING_TYPEOFGWDESCRIPTIONACCESSINFO    STD_OFF
#define COM_EXISTS_IMMEDIATE_TRIGGERED_TYPEOFGWDESCRIPTIONACCESSINFO  STD_OFF
#define COM_EXISTS_IMMEDIATE_TRIGGERED_ONCHANGE_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF
#define COM_EXISTS_IMMEDIATE_TRIGGERED_ONCHANGE_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF
#define COM_EXISTS_IMMEDIATE_TRIGGERED_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF
#define COM_EXISTS_DEFERRED_PENDING_TYPEOFGWDESCRIPTIONACCESSINFO     STD_OFF
#define COM_EXISTS_DEFERRED_TRIGGERED_TYPEOFGWDESCRIPTIONACCESSINFO   STD_OFF
#define COM_EXISTS_DEFERRED_TRIGGERED_ONCHANGE_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF
#define COM_EXISTS_DEFERRED_TRIGGERED_ONCHANGE_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF
#define COM_EXISTS_DEFERRED_TRIGGERED_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO STD_OFF
#define COM_EXISTS_BOOLEAN_APPLTYPEOFRXACCESSINFO                     STD_ON
#define COM_EXISTS_UINT8_APPLTYPEOFRXACCESSINFO                       STD_OFF
#define COM_EXISTS_SINT8_APPLTYPEOFRXACCESSINFO                       STD_OFF
#define COM_EXISTS_UINT16_APPLTYPEOFRXACCESSINFO                      STD_OFF
#define COM_EXISTS_SINT16_APPLTYPEOFRXACCESSINFO                      STD_OFF
#define COM_EXISTS_UINT32_APPLTYPEOFRXACCESSINFO                      STD_OFF
#define COM_EXISTS_SINT32_APPLTYPEOFRXACCESSINFO                      STD_OFF
#define COM_EXISTS_UINT8_N_APPLTYPEOFRXACCESSINFO                     STD_OFF
#define COM_EXISTS_UINT8_DYN_APPLTYPEOFRXACCESSINFO                   STD_OFF
#define COM_EXISTS_NBIT_BUSACCOFRXACCESSINFO                          STD_ON
#define COM_EXISTS_BYTE_BUSACCOFRXACCESSINFO                          STD_OFF
#define COM_EXISTS_NBYTE_BUSACCOFRXACCESSINFO                         STD_OFF
#define COM_EXISTS_NBYTE_SW_BUSACCOFRXACCESSINFO                      STD_OFF
#define COM_EXISTS_NBITNBYTE_BUSACCOFRXACCESSINFO                     STD_OFF
#define COM_EXISTS_NBITNBYTE_SW_BUSACCOFRXACCESSINFO                  STD_OFF
#define COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO            STD_OFF
#define COM_EXISTS_IMMEDIATE_SIGNALPROCESSINGOFRXSIGGRPINFO           STD_OFF
#define COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO               STD_ON
#define COM_EXISTS_IMMEDIATE_SIGNALPROCESSINGOFRXSIGINFO              STD_OFF
#define COM_EXISTS_TRANSMIT_CLRUBOFTXPDUINFO                          STD_OFF
#define COM_EXISTS_TRIGGER_TRANSMIT_CLRUBOFTXPDUINFO                  STD_OFF
#define COM_EXISTS_NOT_USED_CLRUBOFTXPDUINFO                          STD_OFF
#define COM_EXISTS_CONFIRMATION_CLRUBOFTXPDUINFO                      STD_OFF
#define COM_EXISTS_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO             STD_OFF
#define COM_EXISTS_TRIGGERED_TRANSFERPROPERTYOFTXSIGGRPINFO           STD_OFF
#define COM_EXISTS_TRIGGERED_WITHOUT_REPETITION_TRANSFERPROPERTYOFTXSIGGRPINFO STD_OFF
#define COM_EXISTS_TRIGGERED_ON_CHANGE_TRANSFERPROPERTYOFTXSIGGRPINFO STD_OFF
#define COM_EXISTS_TRIGGERED_ON_CHANGE_WITHOUT_REPETITION_TRANSFERPROPERTYOFTXSIGGRPINFO STD_OFF
#define COM_EXISTS_BOOLEAN_APPLTYPEOFTXSIGINFO                        STD_ON
#define COM_EXISTS_UINT8_APPLTYPEOFTXSIGINFO                          STD_OFF
#define COM_EXISTS_SINT8_APPLTYPEOFTXSIGINFO                          STD_OFF
#define COM_EXISTS_UINT16_APPLTYPEOFTXSIGINFO                         STD_OFF
#define COM_EXISTS_SINT16_APPLTYPEOFTXSIGINFO                         STD_OFF
#define COM_EXISTS_UINT32_APPLTYPEOFTXSIGINFO                         STD_OFF
#define COM_EXISTS_SINT32_APPLTYPEOFTXSIGINFO                         STD_OFF
#define COM_EXISTS_UINT8_N_APPLTYPEOFTXSIGINFO                        STD_OFF
#define COM_EXISTS_UINT8_DYN_APPLTYPEOFTXSIGINFO                      STD_OFF
#define COM_EXISTS_NBIT_BUSACCOFTXSIGINFO                             STD_ON
#define COM_EXISTS_BYTE_BUSACCOFTXSIGINFO                             STD_OFF
#define COM_EXISTS_NBYTE_BUSACCOFTXSIGINFO                            STD_OFF
#define COM_EXISTS_NBYTE_SW_BUSACCOFTXSIGINFO                         STD_OFF
#define COM_EXISTS_NBITNBYTE_BUSACCOFTXSIGINFO                        STD_OFF
#define COM_EXISTS_NBITNBYTE_SW_BUSACCOFTXSIGINFO                     STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  ComPCEnumDefines  Com Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define COM_BOOLEAN_APPLTYPEOFFILTERINFO                              0x00U
#define COM_UINT8_APPLTYPEOFFILTERINFO                                0x01U
#define COM_SINT8_APPLTYPEOFFILTERINFO                                0x02U
#define COM_UINT16_APPLTYPEOFFILTERINFO                               0x03U
#define COM_SINT16_APPLTYPEOFFILTERINFO                               0x04U
#define COM_UINT32_APPLTYPEOFFILTERINFO                               0x05U
#define COM_SINT32_APPLTYPEOFFILTERINFO                               0x06U
#define COM_UINT8_N_APPLTYPEOFFILTERINFO                              0x07U
#define COM_UINT8_DYN_APPLTYPEOFFILTERINFO                            0x08U
#define COM_NEVER_FILTERALGOOFFILTERINFO                              0x05U
#define COM_MASKED_NEW_DIFFERS_MASKED_OLD_FILTERALGOOFFILTERINFO      0x00U
#define COM_MASKED_NEW_DIFFERS_X_FILTERALGOOFFILTERINFO               0x01U
#define COM_MASKED_NEW_EQUALS_X_FILTERALGOOFFILTERINFO                0x02U
#define COM_NEW_IS_OUTSIDE_FILTERALGOOFFILTERINFO                     0x03U
#define COM_NEW_IS_WITHIN_FILTERALGOOFFILTERINFO                      0x04U
#define COM_IMMEDIATE_PENDING_TYPEOFGWDESCRIPTIONACCESSINFO           0x08U
#define COM_IMMEDIATE_TRIGGERED_TYPEOFGWDESCRIPTIONACCESSINFO         0x0CU
#define COM_IMMEDIATE_TRIGGERED_ONCHANGE_TYPEOFGWDESCRIPTIONACCESSINFO 0x0EU
#define COM_IMMEDIATE_TRIGGERED_ONCHANGE_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO 0x0FU
#define COM_IMMEDIATE_TRIGGERED_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO 0x0DU
#define COM_DEFERRED_PENDING_TYPEOFGWDESCRIPTIONACCESSINFO            0x00U
#define COM_DEFERRED_TRIGGERED_TYPEOFGWDESCRIPTIONACCESSINFO          0x04U
#define COM_DEFERRED_TRIGGERED_ONCHANGE_TYPEOFGWDESCRIPTIONACCESSINFO 0x06U
#define COM_DEFERRED_TRIGGERED_ONCHANGE_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO 0x07U
#define COM_DEFERRED_TRIGGERED_WITHOUTREP_TYPEOFGWDESCRIPTIONACCESSINFO 0x05U
#define COM_INACTIVE_IPDUGROUPSTATE                                   0x00U
#define COM_ACTIVE_DMINACTIVE_IPDUGROUPSTATE                          0x01U
#define COM_ACTIVE_DMACTIVE_IPDUGROUPSTATE                            0x02U
#define COM_BOOLEAN_APPLTYPEOFRXACCESSINFO                            0x00U
#define COM_UINT8_APPLTYPEOFRXACCESSINFO                              0x01U
#define COM_SINT8_APPLTYPEOFRXACCESSINFO                              0x02U
#define COM_UINT16_APPLTYPEOFRXACCESSINFO                             0x03U
#define COM_SINT16_APPLTYPEOFRXACCESSINFO                             0x04U
#define COM_UINT32_APPLTYPEOFRXACCESSINFO                             0x05U
#define COM_SINT32_APPLTYPEOFRXACCESSINFO                             0x06U
#define COM_UINT8_N_APPLTYPEOFRXACCESSINFO                            0x07U
#define COM_UINT8_DYN_APPLTYPEOFRXACCESSINFO                          0x08U
#define COM_NBIT_BUSACCOFRXACCESSINFO                                 0x00U
#define COM_BYTE_BUSACCOFRXACCESSINFO                                 0x01U
#define COM_NBYTE_BUSACCOFRXACCESSINFO                                0x02U
#define COM_NBYTE_SW_BUSACCOFRXACCESSINFO                             0x03U
#define COM_NBITNBYTE_BUSACCOFRXACCESSINFO                            0x04U
#define COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO                         0x05U
#define COM_INACTIVE_RXPDUDMSTATE                                     0x00U
#define COM_ACTIVE_RXPDUDMSTATE                                       0x01U
#define COM_OCCURRED_RXPDUDMSTATE                                     0x03U
#define COM_OCCURRED_FLAG_RXPDUDMSTATE                                0x02U
#define COM_CLEAR_OCCURRED_FLAG_RXPDUDMSTATE                          0xFDU
#define COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO                   0x00U
#define COM_IMMEDIATE_SIGNALPROCESSINGOFRXSIGGRPINFO                  0x01U
#define COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO                      0x00U
#define COM_IMMEDIATE_SIGNALPROCESSINGOFRXSIGINFO                     0x01U
#define COM_READY_RXTPCONNECTIONSTATE                                 0x00U
#define COM_RECEPTION_STARTED_RXTPCONNECTIONSTATE                     0x01U
#define COM_COPYING_RXTPCONNECTIONSTATE                               0x02U
#define COM_WAITING_FOR_INDICATION_RXTPCONNECTIONSTATE                0x03U
#define COM_TP_ERROR_RXTPCONNECTIONSTATE                              0x04U
#define COM_TRANSMIT_CLRUBOFTXPDUINFO                                 0x00U
#define COM_TRIGGER_TRANSMIT_CLRUBOFTXPDUINFO                         0x01U
#define COM_NOT_USED_CLRUBOFTXPDUINFO                                 0x02U
#define COM_CONFIRMATION_CLRUBOFTXPDUINFO                             0x03U
#define COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO                    0x00U
#define COM_TRIGGERED_TRANSFERPROPERTYOFTXSIGGRPINFO                  0x01U
#define COM_TRIGGERED_WITHOUT_REPETITION_TRANSFERPROPERTYOFTXSIGGRPINFO 0x03U
#define COM_TRIGGERED_ON_CHANGE_TRANSFERPROPERTYOFTXSIGGRPINFO        0x05U
#define COM_TRIGGERED_ON_CHANGE_WITHOUT_REPETITION_TRANSFERPROPERTYOFTXSIGGRPINFO 0x07U
#define COM_BOOLEAN_APPLTYPEOFTXSIGINFO                               0x00U
#define COM_UINT8_APPLTYPEOFTXSIGINFO                                 0x01U
#define COM_SINT8_APPLTYPEOFTXSIGINFO                                 0x02U
#define COM_UINT16_APPLTYPEOFTXSIGINFO                                0x03U
#define COM_SINT16_APPLTYPEOFTXSIGINFO                                0x04U
#define COM_UINT32_APPLTYPEOFTXSIGINFO                                0x05U
#define COM_SINT32_APPLTYPEOFTXSIGINFO                                0x06U
#define COM_UINT8_N_APPLTYPEOFTXSIGINFO                               0x07U
#define COM_UINT8_DYN_APPLTYPEOFTXSIGINFO                             0x08U
#define COM_NBIT_BUSACCOFTXSIGINFO                                    0x00U
#define COM_BYTE_BUSACCOFTXSIGINFO                                    0x01U
#define COM_NBYTE_BUSACCOFTXSIGINFO                                   0x02U
#define COM_NBYTE_SW_BUSACCOFTXSIGINFO                                0x03U
#define COM_NBITNBYTE_BUSACCOFTXSIGINFO                               0x04U
#define COM_NBITNBYTE_SW_BUSACCOFTXSIGINFO                            0x05U
#define COM_READY_TXTPCONNECTIONSTATE                                 0x00U
#define COM_TRANSMISSION_STARTED_TXTPCONNECTIONSTATE                  0x01U
#define COM_COPYING_TXTPCONNECTIONSTATE                               0x02U
#define COM_WAITING_FOR_CONFIRMATION_TXTPCONNECTIONSTATE              0x03U
#define COM_TP_ERROR_TXTPCONNECTIONSTATE                              0x04U
/** 
  \}
*/ 

/** 
  \defgroup  ComPCMaskedBitDefines  Com Masked Bit Defines (PRE_COMPILE)
  \brief  These defines are masks to extract packed boolean data.
  \{
*/ 
#define COM_BUFFERUSEDOFRXACCESSINFO_MASK                             0x04U
#define COM_INITVALUEUSEDOFRXACCESSINFO_MASK                          0x02U
#define COM_RXDATATIMEOUTSUBSTITUTIONVALUEUSEDOFRXACCESSINFO_MASK     0x01U
#define COM_HANDLERXPDUDEFERREDUSEDOFRXPDUINFO_MASK                   0x08U
#define COM_RXACCESSINFOINDUSEDOFRXPDUINFO_MASK                       0x04U
#define COM_RXDEFPDUBUFFERUSEDOFRXPDUINFO_MASK                        0x02U
#define COM_RXSIGINFOUSEDOFRXPDUINFO_MASK                             0x01U
#define COM_INITMODEOFTXMODEINFO_MASK                                 0x02U
#define COM_TXMODETRUEUSEDOFTXMODEINFO_MASK                           0x01U
#define COM_TXPDUBUFFERUSEDOFTXPDUINFO_MASK                           0x02U
#define COM_TXPDUINITVALUEUSEDOFTXPDUINFO_MASK                        0x01U
/** 
  \}
*/ 

/** 
  \defgroup  ComPCIsReducedToDefineDefines  Com Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define COM_ISDEF_CBKINVFUNCPTR                                       STD_OFF
#define COM_ISDEF_CBKRXACKFUNCPTR                                     STD_OFF
#define COM_ISDEF_CBKRXTOUTFUNCPTR                                    STD_OFF
#define COM_ISDEF_CBKRXTOUTFUNCPTRIND                                 STD_OFF
#define COM_ISDEF_CBKTXACKDEFFUNCPTR                                  STD_OFF
#define COM_ISDEF_CBKTXACKDEFFUNCPTRIND                               STD_OFF
#define COM_ISDEF_CBKTXACKIMFUNCPTR                                   STD_OFF
#define COM_ISDEF_CBKTXACKIMFUNCPTRIND                                STD_OFF
#define COM_ISDEF_CBKTXERRFUNCPTR                                     STD_OFF
#define COM_ISDEF_CBKTXERRFUNCPTRIND                                  STD_OFF
#define COM_ISDEF_CBKTXTOUTFUNCPTR                                    STD_OFF
#define COM_ISDEF_CBKTXTOUTFUNCPTRIND                                 STD_OFF
#define COM_ISDEF_CONSTVALUEXINT16                                    STD_OFF
#define COM_ISDEF_CONSTVALUEXINT32                                    STD_OFF
#define COM_ISDEF_CONSTVALUEXINT8                                     STD_OFF
#define COM_ISDEF_RXPDUINFOIDXOFDEFERREDGWMAPPINGINFO                 STD_OFF
#define COM_ISDEF_APPLTYPEOFFILTERINFO                                STD_OFF
#define COM_ISDEF_FILTERALGOOFFILTERINFO                              STD_OFF
#define COM_ISDEF_FILTERPARAMIDXOFFILTERINFO                          STD_OFF
#define COM_ISDEF_FILTERPARAMUSEDOFFILTERINFO                         STD_OFF
#define COM_ISDEF_LENGTHOFFILTERINFO                                  STD_OFF
#define COM_ISDEF_DESTINATIONBYTEPOSITIONOFGWDESCRIPTIONACCESSINFO    STD_OFF
#define COM_ISDEF_MASKLENGTHOFGWDESCRIPTIONACCESSINFO                 STD_OFF
#define COM_ISDEF_SOURCEBYTEPOSITIONOFGWDESCRIPTIONACCESSINFO         STD_OFF
#define COM_ISDEF_SOURCEDESCRIPTIONMASKENDIDXOFGWDESCRIPTIONACCESSINFO STD_OFF
#define COM_ISDEF_SOURCEDESCRIPTIONMASKSTARTIDXOFGWDESCRIPTIONACCESSINFO STD_OFF
#define COM_ISDEF_SOURCEDESCRIPTIONMASKUSEDOFGWDESCRIPTIONACCESSINFO  STD_OFF
#define COM_ISDEF_TYPEOFGWDESCRIPTIONACCESSINFO                       STD_OFF
#define COM_ISDEF_TXPDUIDOFGWDESCRIPTIONACCESSINFO                    STD_OFF
#define COM_ISDEF_RXACCESSINFOIDXOFGWGRPSIGMAPPING                    STD_OFF
#define COM_ISDEF_TXSIGIDOFGWGRPSIGMAPPING                            STD_OFF
#define COM_ISDEF_GWSIGGRPMAPPINGENDIDXOFGWINFO                       STD_OFF
#define COM_ISDEF_GWSIGGRPMAPPINGSTARTIDXOFGWINFO                     STD_OFF
#define COM_ISDEF_GWSIGGRPMAPPINGUSEDOFGWINFO                         STD_OFF
#define COM_ISDEF_GWSIGMAPPINGENDIDXOFGWINFO                          STD_OFF
#define COM_ISDEF_GWSIGMAPPINGSTARTIDXOFGWINFO                        STD_OFF
#define COM_ISDEF_GWSIGMAPPINGUSEDOFGWINFO                            STD_OFF
#define COM_ISDEF_GWGRPSIGMAPPINGENDIDXOFGWSIGGRPMAPPING              STD_OFF
#define COM_ISDEF_GWGRPSIGMAPPINGSTARTIDXOFGWSIGGRPMAPPING            STD_OFF
#define COM_ISDEF_TXSIGGRPIDOFGWSIGGRPMAPPING                         STD_OFF
#define COM_ISDEF_RXACCESSINFOIDXOFGWSIGMAPPING                       STD_OFF
#define COM_ISDEF_TXSIGIDOFGWSIGMAPPING                               STD_OFF
#define COM_ISDEF_GWROUTINGTIMEOUTFACTOROFGWTIMEOUTINFO               STD_OFF
#define COM_ISDEF_TXPDUINFOIDXOFGWTIMEOUTINFO                         STD_OFF
#define COM_ISDEF_GWDESCRIPTIONACCESSINFOENDIDXOFGWTXPDUDESCRIPTIONINFO STD_OFF
#define COM_ISDEF_GWDESCRIPTIONACCESSINFOSTARTIDXOFGWTXPDUDESCRIPTIONINFO STD_OFF
#define COM_ISDEF_IPDUGROUPINFOTOSUBIPDUGROUPSINDENDIDXOFIPDUGROUPINFO STD_OFF
#define COM_ISDEF_IPDUGROUPINFOTOSUBIPDUGROUPSINDSTARTIDXOFIPDUGROUPINFO STD_OFF
#define COM_ISDEF_IPDUGROUPINFOTOSUBIPDUGROUPSINDUSEDOFIPDUGROUPINFO  STD_OFF
#define COM_ISDEF_INVALIDHNDOFIPDUGROUPINFO                           STD_OFF
#define COM_ISDEF_RXPDUINFOINDENDIDXOFIPDUGROUPINFO                   STD_OFF
#define COM_ISDEF_RXPDUINFOINDSTARTIDXOFIPDUGROUPINFO                 STD_OFF
#define COM_ISDEF_RXPDUINFOINDUSEDOFIPDUGROUPINFO                     STD_OFF
#define COM_ISDEF_TXPDUINFOINDENDIDXOFIPDUGROUPINFO                   STD_OFF
#define COM_ISDEF_TXPDUINFOINDSTARTIDXOFIPDUGROUPINFO                 STD_OFF
#define COM_ISDEF_TXPDUINFOINDUSEDOFIPDUGROUPINFO                     STD_OFF
#define COM_ISDEF_IPDUGROUPINFOOFRXPDUINFOIND                         STD_OFF
#define COM_ISDEF_IPDUGROUPINFOOFTXPDUINFOIND                         STD_OFF
#define COM_ISDEF_IPDUGROUPINFOTOSUBIPDUGROUPSIND                     STD_OFF
#define COM_ISDEF_PDUGRPVECTOR                                        STD_OFF
#define COM_ISDEF_APPLTYPEOFRXACCESSINFO                              STD_ON
#define COM_ISDEF_BITLENGTHOFRXACCESSINFO                             STD_ON
#define COM_ISDEF_BITPOSITIONOFRXACCESSINFO                           STD_OFF
#define COM_ISDEF_BUFFERIDXOFRXACCESSINFO                             STD_OFF
#define COM_ISDEF_BUFFERUSEDOFRXACCESSINFO                            STD_ON
#define COM_ISDEF_BUSACCOFRXACCESSINFO                                STD_ON
#define COM_ISDEF_BYTELENGTHOFRXACCESSINFO                            STD_ON
#define COM_ISDEF_BYTEPOSITIONOFRXACCESSINFO                          STD_ON
#define COM_ISDEF_GWINFOIDXOFRXACCESSINFO                             STD_OFF
#define COM_ISDEF_GWINFOUSEDOFRXACCESSINFO                            STD_OFF
#define COM_ISDEF_INITVALUEIDXOFRXACCESSINFO                          STD_ON
#define COM_ISDEF_INITVALUEUSEDOFRXACCESSINFO                         STD_ON
#define COM_ISDEF_INVALIDHNDOFRXACCESSINFO                            STD_OFF
#define COM_ISDEF_MASKEDBITSOFRXACCESSINFO                            STD_ON
#define COM_ISDEF_PDUIDOFRXACCESSINFO                                 STD_ON
#define COM_ISDEF_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO     STD_ON
#define COM_ISDEF_RXDATATIMEOUTSUBSTITUTIONVALUEUSEDOFRXACCESSINFO    STD_ON
#define COM_ISDEF_SHDBUFFERIDXOFRXACCESSINFO                          STD_OFF
#define COM_ISDEF_SHDBUFFERUSEDOFRXACCESSINFO                         STD_OFF
#define COM_ISDEF_SIGNEXTREQUIREDOFRXACCESSINFO                       STD_OFF
#define COM_ISDEF_STARTBYTEINPDUPOSITIONOFRXACCESSINFO                STD_ON
#define COM_ISDEF_RXACCESSINFOIND                                     STD_OFF
#define COM_ISDEF_RXACCESSINFOREPLACEGRPSIGIND                        STD_OFF
#define COM_ISDEF_RXACCESSINFOREPLACESIGIND                           STD_OFF
#define COM_ISDEF_FILTERINFOIDXOFRXGRPSIGINFO                         STD_OFF
#define COM_ISDEF_FILTERINFOUSEDOFRXGRPSIGINFO                        STD_OFF
#define COM_ISDEF_INVVALUEIDXOFRXGRPSIGINFO                           STD_OFF
#define COM_ISDEF_INVVALUEUSEDOFRXGRPSIGINFO                          STD_OFF
#define COM_ISDEF_RXACCESSINFOIDXOFRXGRPSIGINFO                       STD_OFF
#define COM_ISDEF_TMPBUFFERIDXOFRXGRPSIGINFO                          STD_OFF
#define COM_ISDEF_TMPBUFFERUSEDOFRXGRPSIGINFO                         STD_OFF
#define COM_ISDEF_RXPDUCALLOUTFUNCPTR                                 STD_OFF
#define COM_ISDEF_PDUGRPVECTORENDIDXOFRXPDUGRPINFO                    STD_ON
#define COM_ISDEF_PDUGRPVECTORSTARTIDXOFRXPDUGRPINFO                  STD_ON
#define COM_ISDEF_PDUGRPVECTORUSEDOFRXPDUGRPINFO                      STD_ON
#define COM_ISDEF_GWINFOENDIDXOFRXPDUINFO                             STD_OFF
#define COM_ISDEF_GWINFOSTARTIDXOFRXPDUINFO                           STD_OFF
#define COM_ISDEF_GWINFOUSEDOFRXPDUINFO                               STD_OFF
#define COM_ISDEF_GWTXPDUDESCRIPTIONINFOENDIDXOFRXPDUINFO             STD_OFF
#define COM_ISDEF_GWTXPDUDESCRIPTIONINFOSTARTIDXOFRXPDUINFO           STD_OFF
#define COM_ISDEF_GWTXPDUDESCRIPTIONINFOUSEDOFRXPDUINFO               STD_OFF
#define COM_ISDEF_HANDLERXDEFERREDGWDESCRIPTIONIDXOFRXPDUINFO         STD_OFF
#define COM_ISDEF_HANDLERXDEFERREDGWDESCRIPTIONUSEDOFRXPDUINFO        STD_OFF
#define COM_ISDEF_HANDLERXPDUDEFERREDIDXOFRXPDUINFO                   STD_ON
#define COM_ISDEF_HANDLERXPDUDEFERREDUSEDOFRXPDUINFO                  STD_ON
#define COM_ISDEF_IPDUGROUPINFOOFRXPDUINFOINDENDIDXOFRXPDUINFO        STD_OFF
#define COM_ISDEF_IPDUGROUPINFOOFRXPDUINFOINDSTARTIDXOFRXPDUINFO      STD_OFF
#define COM_ISDEF_IPDUGROUPINFOOFRXPDUINFOINDUSEDOFRXPDUINFO          STD_OFF
#define COM_ISDEF_INVALIDHNDOFRXPDUINFO                               STD_OFF
#define COM_ISDEF_MASKEDBITSOFRXPDUINFO                               STD_ON
#define COM_ISDEF_RXACCESSINFOINDENDIDXOFRXPDUINFO                    STD_ON
#define COM_ISDEF_RXACCESSINFOINDSTARTIDXOFRXPDUINFO                  STD_ON
#define COM_ISDEF_RXACCESSINFOINDUSEDOFRXPDUINFO                      STD_ON
#define COM_ISDEF_RXDEFPDUBUFFERENDIDXOFRXPDUINFO                     STD_ON
#define COM_ISDEF_RXDEFPDUBUFFERLENGTHOFRXPDUINFO                     STD_ON
#define COM_ISDEF_RXDEFPDUBUFFERSTARTIDXOFRXPDUINFO                   STD_ON
#define COM_ISDEF_RXDEFPDUBUFFERUSEDOFRXPDUINFO                       STD_ON
#define COM_ISDEF_RXPDUCALLOUTFUNCPTRIDXOFRXPDUINFO                   STD_OFF
#define COM_ISDEF_RXPDUCALLOUTFUNCPTRUSEDOFRXPDUINFO                  STD_OFF
#define COM_ISDEF_RXSIGGRPINFOINDENDIDXOFRXPDUINFO                    STD_OFF
#define COM_ISDEF_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO                  STD_OFF
#define COM_ISDEF_RXSIGGRPINFOINDUSEDOFRXPDUINFO                      STD_OFF
#define COM_ISDEF_RXSIGINFOENDIDXOFRXPDUINFO                          STD_ON
#define COM_ISDEF_RXSIGINFOSTARTIDXOFRXPDUINFO                        STD_ON
#define COM_ISDEF_RXSIGINFOUSEDOFRXPDUINFO                            STD_ON
#define COM_ISDEF_RXTOUTINFOIDXOFRXPDUINFO                            STD_OFF
#define COM_ISDEF_RXTOUTINFOINDENDIDXOFRXPDUINFO                      STD_OFF
#define COM_ISDEF_RXTOUTINFOINDSTARTIDXOFRXPDUINFO                    STD_OFF
#define COM_ISDEF_RXTOUTINFOINDUSEDOFRXPDUINFO                        STD_OFF
#define COM_ISDEF_RXTOUTINFOUSEDOFRXPDUINFO                           STD_OFF
#define COM_ISDEF_RXTPINFOIDXOFRXPDUINFO                              STD_OFF
#define COM_ISDEF_RXTPINFOUSEDOFRXPDUINFO                             STD_OFF
#define COM_ISDEF_RXPDUINFOIND                                        STD_OFF
#define COM_ISDEF_ARRAYACCESSUSEDOFRXSIGGRPINFO                       STD_OFF
#define COM_ISDEF_CBKINVFUNCPTRIDXOFRXSIGGRPINFO                      STD_OFF
#define COM_ISDEF_CBKINVFUNCPTRUSEDOFRXSIGGRPINFO                     STD_OFF
#define COM_ISDEF_CBKRXACKFUNCPTRIDXOFRXSIGGRPINFO                    STD_OFF
#define COM_ISDEF_CBKRXACKFUNCPTRUSEDOFRXSIGGRPINFO                   STD_OFF
#define COM_ISDEF_CONSTVALUEXINT8ENDIDXOFRXSIGGRPINFO                 STD_OFF
#define COM_ISDEF_CONSTVALUEXINT8LENGTHOFRXSIGGRPINFO                 STD_OFF
#define COM_ISDEF_CONSTVALUEXINT8STARTIDXOFRXSIGGRPINFO               STD_OFF
#define COM_ISDEF_CONSTVALUEXINT8USEDOFRXSIGGRPINFO                   STD_OFF
#define COM_ISDEF_FILTEREVENTOFRXSIGGRPINFO                           STD_OFF
#define COM_ISDEF_GWINFOIDXOFRXSIGGRPINFO                             STD_OFF
#define COM_ISDEF_GWINFOUSEDOFRXSIGGRPINFO                            STD_OFF
#define COM_ISDEF_INVEVENTOFRXSIGGRPINFO                              STD_OFF
#define COM_ISDEF_INVALIDHNDOFRXSIGGRPINFO                            STD_OFF
#define COM_ISDEF_RXGRPSIGINFOENDIDXOFRXSIGGRPINFO                    STD_OFF
#define COM_ISDEF_RXGRPSIGINFOSTARTIDXOFRXSIGGRPINFO                  STD_OFF
#define COM_ISDEF_RXPDUINFOIDXOFRXSIGGRPINFO                          STD_OFF
#define COM_ISDEF_RXPDUINFOUSEDOFRXSIGGRPINFO                         STD_OFF
#define COM_ISDEF_RXSHDBUFFERXINT8ENDIDXOFRXSIGGRPINFO                STD_OFF
#define COM_ISDEF_RXSHDBUFFERXINT8LENGTHOFRXSIGGRPINFO                STD_OFF
#define COM_ISDEF_RXSHDBUFFERXINT8STARTIDXOFRXSIGGRPINFO              STD_OFF
#define COM_ISDEF_RXSHDBUFFERXINT8USEDOFRXSIGGRPINFO                  STD_OFF
#define COM_ISDEF_RXTOUTINFOIDXOFRXSIGGRPINFO                         STD_OFF
#define COM_ISDEF_RXTOUTINFOUSEDOFRXSIGGRPINFO                        STD_OFF
#define COM_ISDEF_SIGNALPROCESSINGOFRXSIGGRPINFO                      STD_OFF
#define COM_ISDEF_STARTBYTEPOSITIONOFRXSIGGRPINFO                     STD_OFF
#define COM_ISDEF_UBIDXOFRXSIGGRPINFO                                 STD_OFF
#define COM_ISDEF_UBMASKIDXOFRXSIGGRPINFO                             STD_OFF
#define COM_ISDEF_UBMASKUSEDOFRXSIGGRPINFO                            STD_OFF
#define COM_ISDEF_VALIDDLCOFRXSIGGRPINFO                              STD_OFF
#define COM_ISDEF_RXSIGGRPINFOIND                                     STD_OFF
#define COM_ISDEF_CBKINVFUNCPTRIDXOFRXSIGINFO                         STD_OFF
#define COM_ISDEF_CBKINVFUNCPTRUSEDOFRXSIGINFO                        STD_OFF
#define COM_ISDEF_CBKRXACKFUNCPTRIDXOFRXSIGINFO                       STD_OFF
#define COM_ISDEF_CBKRXACKFUNCPTRUSEDOFRXSIGINFO                      STD_OFF
#define COM_ISDEF_FILTERINFOIDXOFRXSIGINFO                            STD_OFF
#define COM_ISDEF_FILTERINFOUSEDOFRXSIGINFO                           STD_OFF
#define COM_ISDEF_GWINFOIDXOFRXSIGINFO                                STD_OFF
#define COM_ISDEF_GWINFOUSEDOFRXSIGINFO                               STD_OFF
#define COM_ISDEF_INVVALUEIDXOFRXSIGINFO                              STD_OFF
#define COM_ISDEF_INVVALUEUSEDOFRXSIGINFO                             STD_OFF
#define COM_ISDEF_RXACCESSINFOIDXOFRXSIGINFO                          STD_OFF
#define COM_ISDEF_RXTOUTINFOIDXOFRXSIGINFO                            STD_OFF
#define COM_ISDEF_RXTOUTINFOUSEDOFRXSIGINFO                           STD_OFF
#define COM_ISDEF_SIGNALPROCESSINGOFRXSIGINFO                         STD_ON
#define COM_ISDEF_UBIDXOFRXSIGINFO                                    STD_OFF
#define COM_ISDEF_UBMASKIDXOFRXSIGINFO                                STD_OFF
#define COM_ISDEF_UBMASKUSEDOFRXSIGINFO                               STD_OFF
#define COM_ISDEF_VALIDDLCOFRXSIGINFO                                 STD_ON
#define COM_ISDEF_CBKRXTOUTFUNCPTRINDENDIDXOFRXTOUTINFO               STD_OFF
#define COM_ISDEF_CBKRXTOUTFUNCPTRINDSTARTIDXOFRXTOUTINFO             STD_OFF
#define COM_ISDEF_CBKRXTOUTFUNCPTRINDUSEDOFRXTOUTINFO                 STD_OFF
#define COM_ISDEF_FACTOROFRXTOUTINFO                                  STD_OFF
#define COM_ISDEF_FIRSTFACTOROFRXTOUTINFO                             STD_OFF
#define COM_ISDEF_RXACCESSINFOREPLACEGRPSIGINDENDIDXOFRXTOUTINFO      STD_OFF
#define COM_ISDEF_RXACCESSINFOREPLACEGRPSIGINDSTARTIDXOFRXTOUTINFO    STD_OFF
#define COM_ISDEF_RXACCESSINFOREPLACEGRPSIGINDUSEDOFRXTOUTINFO        STD_OFF
#define COM_ISDEF_RXACCESSINFOREPLACESIGINDENDIDXOFRXTOUTINFO         STD_OFF
#define COM_ISDEF_RXACCESSINFOREPLACESIGINDSTARTIDXOFRXTOUTINFO       STD_OFF
#define COM_ISDEF_RXACCESSINFOREPLACESIGINDUSEDOFRXTOUTINFO           STD_OFF
#define COM_ISDEF_RXPDUINFOIDXOFRXTOUTINFO                            STD_OFF
#define COM_ISDEF_RXTOUTINFOIND                                       STD_OFF
#define COM_ISDEF_BUFFERSIZEOFRXTPINFO                                STD_OFF
#define COM_ISDEF_RXACCESSINFODYNSIGIDXOFRXTPINFO                     STD_OFF
#define COM_ISDEF_RXACCESSINFODYNSIGUSEDOFRXTPINFO                    STD_OFF
#define COM_ISDEF_RXTPBUFFERENDIDXOFRXTPINFO                          STD_OFF
#define COM_ISDEF_RXTPBUFFERSTARTIDXOFRXTPINFO                        STD_OFF
#define COM_ISDEF_RXTPBUFFERUSEDOFRXTPINFO                            STD_OFF
#define COM_ISDEF_SOURCEDESCRIPTIONMASK                               STD_OFF
#define COM_ISDEF_TXFILTERINITSTATE                                   STD_OFF
#define COM_ISDEF_TXFILTERINITVALUEXINT16                             STD_OFF
#define COM_ISDEF_TXFILTERINITVALUEXINT32                             STD_OFF
#define COM_ISDEF_TXFILTERINITVALUEXINT8                              STD_OFF
#define COM_ISDEF_DIRECTOFTXMODEFALSE                                 STD_OFF
#define COM_ISDEF_PERIODICOFTXMODEFALSE                               STD_OFF
#define COM_ISDEF_REPCNTOFTXMODEFALSE                                 STD_OFF
#define COM_ISDEF_REPPERIODOFTXMODEFALSE                              STD_OFF
#define COM_ISDEF_TIMEOFFSETOFTXMODEFALSE                             STD_OFF
#define COM_ISDEF_TIMEPERIODOFTXMODEFALSE                             STD_OFF
#define COM_ISDEF_INITMODEOFTXMODEINFO                                STD_ON
#define COM_ISDEF_INVALIDHNDOFTXMODEINFO                              STD_OFF
#define COM_ISDEF_MASKEDBITSOFTXMODEINFO                              STD_ON
#define COM_ISDEF_MINIMUMDELAYOFTXMODEINFO                            STD_OFF
#define COM_ISDEF_TXFILTERINITSTATEENDIDXOFTXMODEINFO                 STD_OFF
#define COM_ISDEF_TXFILTERINITSTATESTARTIDXOFTXMODEINFO               STD_OFF
#define COM_ISDEF_TXFILTERINITSTATEUSEDOFTXMODEINFO                   STD_OFF
#define COM_ISDEF_TXMODEFALSEIDXOFTXMODEINFO                          STD_OFF
#define COM_ISDEF_TXMODEFALSEUSEDOFTXMODEINFO                         STD_OFF
#define COM_ISDEF_TXMODETRUEIDXOFTXMODEINFO                           STD_ON
#define COM_ISDEF_TXMODETRUEUSEDOFTXMODEINFO                          STD_ON
#define COM_ISDEF_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO       STD_OFF
#define COM_ISDEF_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO     STD_OFF
#define COM_ISDEF_TXSIGINFOFILTERINITVALUEINDUSEDOFTXMODEINFO         STD_OFF
#define COM_ISDEF_DIRECTOFTXMODETRUE                                  STD_OFF
#define COM_ISDEF_PERIODICOFTXMODETRUE                                STD_ON
#define COM_ISDEF_REPCNTOFTXMODETRUE                                  STD_OFF
#define COM_ISDEF_REPPERIODOFTXMODETRUE                               STD_OFF
#define COM_ISDEF_TIMEOFFSETOFTXMODETRUE                              STD_OFF
#define COM_ISDEF_TIMEPERIODOFTXMODETRUE                              STD_ON
#define COM_ISDEF_TXPDUCALLOUTFUNCPTR                                 STD_OFF
#define COM_ISDEF_PDUGRPVECTORENDIDXOFTXPDUGRPINFO                    STD_ON
#define COM_ISDEF_PDUGRPVECTORSTARTIDXOFTXPDUGRPINFO                  STD_ON
#define COM_ISDEF_PDUGRPVECTORUSEDOFTXPDUGRPINFO                      STD_ON
#define COM_ISDEF_CANCELLATIONSUPPORTOFTXPDUINFO                      STD_OFF
#define COM_ISDEF_CBKTXACKDEFFUNCPTRINDENDIDXOFTXPDUINFO              STD_OFF
#define COM_ISDEF_CBKTXACKDEFFUNCPTRINDSTARTIDXOFTXPDUINFO            STD_OFF
#define COM_ISDEF_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO                STD_OFF
#define COM_ISDEF_CBKTXACKIMFUNCPTRINDENDIDXOFTXPDUINFO               STD_OFF
#define COM_ISDEF_CBKTXACKIMFUNCPTRINDSTARTIDXOFTXPDUINFO             STD_OFF
#define COM_ISDEF_CBKTXACKIMFUNCPTRINDUSEDOFTXPDUINFO                 STD_OFF
#define COM_ISDEF_CBKTXERRFUNCPTRINDENDIDXOFTXPDUINFO                 STD_OFF
#define COM_ISDEF_CBKTXERRFUNCPTRINDSTARTIDXOFTXPDUINFO               STD_OFF
#define COM_ISDEF_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO                   STD_OFF
#define COM_ISDEF_CLRUBOFTXPDUINFO                                    STD_OFF
#define COM_ISDEF_CONSTVALUEXINT8UBCLEARMASKENDIDXOFTXPDUINFO         STD_OFF
#define COM_ISDEF_CONSTVALUEXINT8UBCLEARMASKSTARTIDXOFTXPDUINFO       STD_OFF
#define COM_ISDEF_CONSTVALUEXINT8UBCLEARMASKUSEDOFTXPDUINFO           STD_OFF
#define COM_ISDEF_EXTERNALIDOFTXPDUINFO                               STD_ON
#define COM_ISDEF_GWTIMEOUTINFOIDXOFTXPDUINFO                         STD_OFF
#define COM_ISDEF_GWTIMEOUTINFOUSEDOFTXPDUINFO                        STD_OFF
#define COM_ISDEF_IPDUGROUPINFOOFTXPDUINFOINDENDIDXOFTXPDUINFO        STD_OFF
#define COM_ISDEF_IPDUGROUPINFOOFTXPDUINFOINDSTARTIDXOFTXPDUINFO      STD_OFF
#define COM_ISDEF_IPDUGROUPINFOOFTXPDUINFOINDUSEDOFTXPDUINFO          STD_OFF
#define COM_ISDEF_INVALIDHNDOFTXPDUINFO                               STD_OFF
#define COM_ISDEF_MASKEDBITSOFTXPDUINFO                               STD_ON
#define COM_ISDEF_METADATALENGTHOFTXPDUINFO                           STD_ON
#define COM_ISDEF_PDUWITHMETADATALENGTHOFTXPDUINFO                    STD_ON
#define COM_ISDEF_TXPDUBUFFERENDIDXOFTXPDUINFO                        STD_ON
#define COM_ISDEF_TXPDUBUFFERLENGTHOFTXPDUINFO                        STD_ON
#define COM_ISDEF_TXPDUBUFFERMETADATAENDIDXOFTXPDUINFO                STD_OFF
#define COM_ISDEF_TXPDUBUFFERMETADATASTARTIDXOFTXPDUINFO              STD_OFF
#define COM_ISDEF_TXPDUBUFFERMETADATAUSEDOFTXPDUINFO                  STD_OFF
#define COM_ISDEF_TXPDUBUFFERSTARTIDXOFTXPDUINFO                      STD_ON
#define COM_ISDEF_TXPDUBUFFERUSEDOFTXPDUINFO                          STD_ON
#define COM_ISDEF_TXPDUCALLOUTFUNCPTRIDXOFTXPDUINFO                   STD_OFF
#define COM_ISDEF_TXPDUCALLOUTFUNCPTRUSEDOFTXPDUINFO                  STD_OFF
#define COM_ISDEF_TXPDUINITVALUEENDIDXOFTXPDUINFO                     STD_ON
#define COM_ISDEF_TXPDUINITVALUEMETADATAENDIDXOFTXPDUINFO             STD_OFF
#define COM_ISDEF_TXPDUINITVALUEMETADATASTARTIDXOFTXPDUINFO           STD_OFF
#define COM_ISDEF_TXPDUINITVALUEMETADATAUSEDOFTXPDUINFO               STD_OFF
#define COM_ISDEF_TXPDUINITVALUESTARTIDXOFTXPDUINFO                   STD_ON
#define COM_ISDEF_TXPDUINITVALUEUSEDOFTXPDUINFO                       STD_ON
#define COM_ISDEF_TXPDUTTCALLOUTFUNCPTRIDXOFTXPDUINFO                 STD_OFF
#define COM_ISDEF_TXPDUTTCALLOUTFUNCPTRUSEDOFTXPDUINFO                STD_OFF
#define COM_ISDEF_TXSIGGRPINFOINDENDIDXOFTXPDUINFO                    STD_OFF
#define COM_ISDEF_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO                  STD_OFF
#define COM_ISDEF_TXSIGGRPINFOINDUSEDOFTXPDUINFO                      STD_OFF
#define COM_ISDEF_TXTOUTINFOIDXOFTXPDUINFO                            STD_OFF
#define COM_ISDEF_TXTOUTINFOUSEDOFTXPDUINFO                           STD_OFF
#define COM_ISDEF_TXTPINFOIDXOFTXPDUINFO                              STD_OFF
#define COM_ISDEF_TXTPINFOUSEDOFTXPDUINFO                             STD_OFF
#define COM_ISDEF_TXPDUINFOIND                                        STD_OFF
#define COM_ISDEF_TXPDUINITVALUE                                      STD_OFF
#define COM_ISDEF_TXPDUTTCALLOUTFUNCPTR                               STD_OFF
#define COM_ISDEF_ARRAYACCESSUSEDOFTXSIGGRPINFO                       STD_OFF
#define COM_ISDEF_INVALIDHNDOFTXSIGGRPINFO                            STD_OFF
#define COM_ISDEF_PDUIDOFTXSIGGRPINFO                                 STD_OFF
#define COM_ISDEF_PDUOFFSETOFTXSIGGRPINFO                             STD_OFF
#define COM_ISDEF_SIGGROUPONCHANGEOFFSETOFTXSIGGRPINFO                STD_OFF
#define COM_ISDEF_SIGGROUPONCHANGESTARTPOSITIONOFTXSIGGRPINFO         STD_OFF
#define COM_ISDEF_SIGGROUPONCHANGEWITHOUTREPOFFSETOFTXSIGGRPINFO      STD_OFF
#define COM_ISDEF_SIGGROUPONCHANGEWITHOUTREPSTARTPOSITIONOFTXSIGGRPINFO STD_OFF
#define COM_ISDEF_TRANSFERPROPERTYOFTXSIGGRPINFO                      STD_OFF
#define COM_ISDEF_TXSHDBUFFERENDIDXOFTXSIGGRPINFO                     STD_OFF
#define COM_ISDEF_TXSHDBUFFERLENGTHOFTXSIGGRPINFO                     STD_OFF
#define COM_ISDEF_TXSHDBUFFERSTARTIDXOFTXSIGGRPINFO                   STD_OFF
#define COM_ISDEF_TXSHDBUFFERUSEDOFTXSIGGRPINFO                       STD_OFF
#define COM_ISDEF_TXSIGGRPMASKENDIDXOFTXSIGGRPINFO                    STD_OFF
#define COM_ISDEF_TXSIGGRPMASKLENGTHOFTXSIGGRPINFO                    STD_OFF
#define COM_ISDEF_TXSIGGRPMASKSTARTIDXOFTXSIGGRPINFO                  STD_OFF
#define COM_ISDEF_TXSIGGRPMASKUSEDOFTXSIGGRPINFO                      STD_OFF
#define COM_ISDEF_TXSIGGRPONCHANGEMASKONCHANGEENDIDXOFTXSIGGRPINFO    STD_OFF
#define COM_ISDEF_TXSIGGRPONCHANGEMASKONCHANGELENGTHOFTXSIGGRPINFO    STD_OFF
#define COM_ISDEF_TXSIGGRPONCHANGEMASKONCHANGESTARTIDXOFTXSIGGRPINFO  STD_OFF
#define COM_ISDEF_TXSIGGRPONCHANGEMASKONCHANGEUSEDOFTXSIGGRPINFO      STD_OFF
#define COM_ISDEF_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPENDIDXOFTXSIGGRPINFO STD_OFF
#define COM_ISDEF_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPLENGTHOFTXSIGGRPINFO STD_OFF
#define COM_ISDEF_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPSTARTIDXOFTXSIGGRPINFO STD_OFF
#define COM_ISDEF_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPUSEDOFTXSIGGRPINFO STD_OFF
#define COM_ISDEF_TXSIGINFOINVVALUEINDENDIDXOFTXSIGGRPINFO            STD_OFF
#define COM_ISDEF_TXSIGINFOINVVALUEINDSTARTIDXOFTXSIGGRPINFO          STD_OFF
#define COM_ISDEF_TXSIGINFOINVVALUEINDUSEDOFTXSIGGRPINFO              STD_OFF
#define COM_ISDEF_TXTOUTINFOIDXOFTXSIGGRPINFO                         STD_OFF
#define COM_ISDEF_TXTOUTINFOUSEDOFTXSIGGRPINFO                        STD_OFF
#define COM_ISDEF_UBIDXOFTXSIGGRPINFO                                 STD_OFF
#define COM_ISDEF_UBMASKIDXOFTXSIGGRPINFO                             STD_OFF
#define COM_ISDEF_UBMASKUSEDOFTXSIGGRPINFO                            STD_OFF
#define COM_ISDEF_TXSIGGRPINFOIND                                     STD_OFF
#define COM_ISDEF_TXSIGGRPMASK                                        STD_OFF
#define COM_ISDEF_TXSIGGRPONCHANGEMASK                                STD_OFF
#define COM_ISDEF_APPLTYPEOFTXSIGINFO                                 STD_ON
#define COM_ISDEF_BITLENGTHOFTXSIGINFO                                STD_ON
#define COM_ISDEF_BITPOSITIONOFTXSIGINFO                              STD_ON
#define COM_ISDEF_BUSACCOFTXSIGINFO                                   STD_ON
#define COM_ISDEF_BYTELENGTHOFTXSIGINFO                               STD_ON
#define COM_ISDEF_BYTEPOSITIONOFTXSIGINFO                             STD_ON
#define COM_ISDEF_FILTERINFOIDXOFTXSIGINFO                            STD_OFF
#define COM_ISDEF_FILTERINFOUSEDOFTXSIGINFO                           STD_OFF
#define COM_ISDEF_FILTERINITVALUEIDXOFTXSIGINFO                       STD_OFF
#define COM_ISDEF_FILTERINITVALUEUSEDOFTXSIGINFO                      STD_OFF
#define COM_ISDEF_INVVALUEIDXOFTXSIGINFO                              STD_OFF
#define COM_ISDEF_INVVALUEUSEDOFTXSIGINFO                             STD_OFF
#define COM_ISDEF_INVALIDHNDOFTXSIGINFO                               STD_OFF
#define COM_ISDEF_ONCHANGEIDXOFTXSIGINFO                              STD_OFF
#define COM_ISDEF_ONCHANGEUSEDOFTXSIGINFO                             STD_OFF
#define COM_ISDEF_PDUIDOFTXSIGINFO                                    STD_ON
#define COM_ISDEF_STARTBYTEINPDUPOSITIONOFTXSIGINFO                   STD_ON
#define COM_ISDEF_TRIGGEREDOFTXSIGINFO                                STD_OFF
#define COM_ISDEF_TXFILTERINITSTATEIDXOFTXSIGINFO                     STD_OFF
#define COM_ISDEF_TXFILTERINITSTATEUSEDOFTXSIGINFO                    STD_OFF
#define COM_ISDEF_TXSIGGRPINFOIDXOFTXSIGINFO                          STD_OFF
#define COM_ISDEF_TXSIGGRPINFOUSEDOFTXSIGINFO                         STD_OFF
#define COM_ISDEF_TXTOUTINFOIDXOFTXSIGINFO                            STD_OFF
#define COM_ISDEF_TXTOUTINFOUSEDOFTXSIGINFO                           STD_OFF
#define COM_ISDEF_UBIDXOFTXSIGINFO                                    STD_OFF
#define COM_ISDEF_UBMASKIDXOFTXSIGINFO                                STD_OFF
#define COM_ISDEF_UBMASKUSEDOFTXSIGINFO                               STD_OFF
#define COM_ISDEF_WITHOUTREPOFTXSIGINFO                               STD_OFF
#define COM_ISDEF_TXSIGINFOFILTERINITVALUEIND                         STD_OFF
#define COM_ISDEF_TXSIGINFOINVVALUEIND                                STD_OFF
#define COM_ISDEF_CBKTXTOUTFUNCPTRINDENDIDXOFTXTOUTINFO               STD_OFF
#define COM_ISDEF_CBKTXTOUTFUNCPTRINDSTARTIDXOFTXTOUTINFO             STD_OFF
#define COM_ISDEF_CBKTXTOUTFUNCPTRINDUSEDOFTXTOUTINFO                 STD_OFF
#define COM_ISDEF_FACTOROFTXTOUTINFO                                  STD_OFF
#define COM_ISDEF_NONEMODEOFTXTOUTINFO                                STD_OFF
#define COM_ISDEF_TXPDUINFOIDXOFTXTOUTINFO                            STD_OFF
#define COM_ISDEF_BUFFERSIZEOFTXTPINFO                                STD_OFF
#define COM_ISDEF_TXPDUBUFFERENDIDXOFTXTPINFO                         STD_OFF
#define COM_ISDEF_TXPDUBUFFERLENGTHOFTXTPINFO                         STD_OFF
#define COM_ISDEF_TXPDUBUFFERSTARTIDXOFTXTPINFO                       STD_OFF
#define COM_ISDEF_TXPDUBUFFERUSEDOFTXTPINFO                           STD_OFF
#define COM_ISDEF_TXSIGINFODYNSIGIDXOFTXTPINFO                        STD_OFF
#define COM_ISDEF_TXSIGINFODYNSIGUSEDOFTXTPINFO                       STD_OFF
#define COM_ISDEF_CONSTVALUEXINT8OFPCCONFIG                           STD_ON
#define COM_ISDEF_CURRENTTXMODEOFPCCONFIG                             STD_ON
#define COM_ISDEF_CYCLETIMECNTOFPCCONFIG                              STD_ON
#define COM_ISDEF_CYCLICSENDREQUESTOFPCCONFIG                         STD_ON
#define COM_ISDEF_DELAYTIMECNTOFPCCONFIG                              STD_ON
#define COM_ISDEF_FINALMAGICNUMBEROFPCCONFIG                          STD_OFF
#define COM_ISDEF_HANDLERXPDUDEFERREDOFPCCONFIG                       STD_ON
#define COM_ISDEF_HANDLETXPDUDEFERREDOFPCCONFIG                       STD_ON
#define COM_ISDEF_INITDATAHASHCODEOFPCCONFIG                          STD_OFF
#define COM_ISDEF_INITIALIZEDOFPCCONFIG                               STD_ON
#define COM_ISDEF_PDUGRPVECTOROFPCCONFIG                              STD_ON
#define COM_ISDEF_REPCNTOFPCCONFIG                                    STD_ON
#define COM_ISDEF_REPCYCLECNTOFPCCONFIG                               STD_ON
#define COM_ISDEF_RXACCESSINFOINDOFPCCONFIG                           STD_ON
#define COM_ISDEF_RXACCESSINFOOFPCCONFIG                              STD_ON
#define COM_ISDEF_RXDEFPDUBUFFEROFPCCONFIG                            STD_ON
#define COM_ISDEF_RXDLMONDIVISORCOUNTEROFPCCONFIG                     STD_ON
#define COM_ISDEF_RXDLMONDIVISOROFPCCONFIG                            STD_OFF
#define COM_ISDEF_RXPDUGRPACTIVEOFPCCONFIG                            STD_ON
#define COM_ISDEF_RXPDUGRPINFOOFPCCONFIG                              STD_ON
#define COM_ISDEF_RXPDUINFOOFPCCONFIG                                 STD_ON
#define COM_ISDEF_RXSIGBUFFERXINT8OFPCCONFIG                          STD_ON
#define COM_ISDEF_RXSIGINFOOFPCCONFIG                                 STD_ON
#define COM_ISDEF_TRANSMITREQUESTOFPCCONFIG                           STD_ON
#define COM_ISDEF_TXCYCLECOUNTERDIVISORCOUNTEROFPCCONFIG              STD_ON
#define COM_ISDEF_TXDLMONDIVISORCOUNTEROFPCCONFIG                     STD_ON
#define COM_ISDEF_TXDLMONDIVISOROFPCCONFIG                            STD_OFF
#define COM_ISDEF_TXMODEINFOOFPCCONFIG                                STD_ON
#define COM_ISDEF_TXMODETRUEOFPCCONFIG                                STD_ON
#define COM_ISDEF_TXPDUBUFFEROFPCCONFIG                               STD_ON
#define COM_ISDEF_TXPDUGRPACTIVEOFPCCONFIG                            STD_ON
#define COM_ISDEF_TXPDUGRPINFOOFPCCONFIG                              STD_ON
#define COM_ISDEF_TXPDUINFOOFPCCONFIG                                 STD_ON
#define COM_ISDEF_TXPDUINITVALUEOFPCCONFIG                            STD_ON
#define COM_ISDEF_TXSDULENGTHOFPCCONFIG                               STD_ON
#define COM_ISDEF_TXSIGINFOOFPCCONFIG                                 STD_ON
#define COM_ISDEF_WAITINGFORCONFIRMATIONOFPCCONFIG                    STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  ComPCEqualsAlwaysToDefines  Com Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define COM_EQ2_CBKINVFUNCPTR                                         
#define COM_EQ2_CBKRXACKFUNCPTR                                       
#define COM_EQ2_CBKRXTOUTFUNCPTR                                      
#define COM_EQ2_CBKRXTOUTFUNCPTRIND                                   
#define COM_EQ2_CBKTXACKDEFFUNCPTR                                    
#define COM_EQ2_CBKTXACKDEFFUNCPTRIND                                 
#define COM_EQ2_CBKTXACKIMFUNCPTR                                     
#define COM_EQ2_CBKTXACKIMFUNCPTRIND                                  
#define COM_EQ2_CBKTXERRFUNCPTR                                       
#define COM_EQ2_CBKTXERRFUNCPTRIND                                    
#define COM_EQ2_CBKTXTOUTFUNCPTR                                      
#define COM_EQ2_CBKTXTOUTFUNCPTRIND                                   
#define COM_EQ2_CONSTVALUEXINT16                                      
#define COM_EQ2_CONSTVALUEXINT32                                      
#define COM_EQ2_CONSTVALUEXINT8                                       
#define COM_EQ2_RXPDUINFOIDXOFDEFERREDGWMAPPINGINFO                   
#define COM_EQ2_APPLTYPEOFFILTERINFO                                  
#define COM_EQ2_FILTERALGOOFFILTERINFO                                
#define COM_EQ2_FILTERPARAMIDXOFFILTERINFO                            
#define COM_EQ2_FILTERPARAMUSEDOFFILTERINFO                           
#define COM_EQ2_LENGTHOFFILTERINFO                                    
#define COM_EQ2_DESTINATIONBYTEPOSITIONOFGWDESCRIPTIONACCESSINFO      
#define COM_EQ2_MASKLENGTHOFGWDESCRIPTIONACCESSINFO                   
#define COM_EQ2_SOURCEBYTEPOSITIONOFGWDESCRIPTIONACCESSINFO           
#define COM_EQ2_SOURCEDESCRIPTIONMASKENDIDXOFGWDESCRIPTIONACCESSINFO  
#define COM_EQ2_SOURCEDESCRIPTIONMASKSTARTIDXOFGWDESCRIPTIONACCESSINFO 
#define COM_EQ2_SOURCEDESCRIPTIONMASKUSEDOFGWDESCRIPTIONACCESSINFO    
#define COM_EQ2_TYPEOFGWDESCRIPTIONACCESSINFO                         
#define COM_EQ2_TXPDUIDOFGWDESCRIPTIONACCESSINFO                      
#define COM_EQ2_RXACCESSINFOIDXOFGWGRPSIGMAPPING                      
#define COM_EQ2_TXSIGIDOFGWGRPSIGMAPPING                              
#define COM_EQ2_GWSIGGRPMAPPINGENDIDXOFGWINFO                         
#define COM_EQ2_GWSIGGRPMAPPINGSTARTIDXOFGWINFO                       
#define COM_EQ2_GWSIGGRPMAPPINGUSEDOFGWINFO                           
#define COM_EQ2_GWSIGMAPPINGENDIDXOFGWINFO                            
#define COM_EQ2_GWSIGMAPPINGSTARTIDXOFGWINFO                          
#define COM_EQ2_GWSIGMAPPINGUSEDOFGWINFO                              
#define COM_EQ2_GWGRPSIGMAPPINGENDIDXOFGWSIGGRPMAPPING                
#define COM_EQ2_GWGRPSIGMAPPINGSTARTIDXOFGWSIGGRPMAPPING              
#define COM_EQ2_TXSIGGRPIDOFGWSIGGRPMAPPING                           
#define COM_EQ2_RXACCESSINFOIDXOFGWSIGMAPPING                         
#define COM_EQ2_TXSIGIDOFGWSIGMAPPING                                 
#define COM_EQ2_GWROUTINGTIMEOUTFACTOROFGWTIMEOUTINFO                 
#define COM_EQ2_TXPDUINFOIDXOFGWTIMEOUTINFO                           
#define COM_EQ2_GWDESCRIPTIONACCESSINFOENDIDXOFGWTXPDUDESCRIPTIONINFO 
#define COM_EQ2_GWDESCRIPTIONACCESSINFOSTARTIDXOFGWTXPDUDESCRIPTIONINFO 
#define COM_EQ2_IPDUGROUPINFOTOSUBIPDUGROUPSINDENDIDXOFIPDUGROUPINFO  
#define COM_EQ2_IPDUGROUPINFOTOSUBIPDUGROUPSINDSTARTIDXOFIPDUGROUPINFO 
#define COM_EQ2_IPDUGROUPINFOTOSUBIPDUGROUPSINDUSEDOFIPDUGROUPINFO    
#define COM_EQ2_INVALIDHNDOFIPDUGROUPINFO                             
#define COM_EQ2_RXPDUINFOINDENDIDXOFIPDUGROUPINFO                     
#define COM_EQ2_RXPDUINFOINDSTARTIDXOFIPDUGROUPINFO                   
#define COM_EQ2_RXPDUINFOINDUSEDOFIPDUGROUPINFO                       
#define COM_EQ2_TXPDUINFOINDENDIDXOFIPDUGROUPINFO                     
#define COM_EQ2_TXPDUINFOINDSTARTIDXOFIPDUGROUPINFO                   
#define COM_EQ2_TXPDUINFOINDUSEDOFIPDUGROUPINFO                       
#define COM_EQ2_IPDUGROUPINFOOFRXPDUINFOIND                           
#define COM_EQ2_IPDUGROUPINFOOFTXPDUINFOIND                           
#define COM_EQ2_IPDUGROUPINFOTOSUBIPDUGROUPSIND                       
#define COM_EQ2_PDUGRPVECTOR                                          
#define COM_EQ2_APPLTYPEOFRXACCESSINFO                                COM_BOOLEAN_APPLTYPEOFRXACCESSINFO
#define COM_EQ2_BITLENGTHOFRXACCESSINFO                               1U
#define COM_EQ2_BITPOSITIONOFRXACCESSINFO                             
#define COM_EQ2_BUFFERIDXOFRXACCESSINFO                               
#define COM_EQ2_BUFFERUSEDOFRXACCESSINFO                              TRUE
#define COM_EQ2_BUSACCOFRXACCESSINFO                                  COM_NBIT_BUSACCOFRXACCESSINFO
#define COM_EQ2_BYTELENGTHOFRXACCESSINFO                              0U
#define COM_EQ2_BYTEPOSITIONOFRXACCESSINFO                            0U
#define COM_EQ2_GWINFOIDXOFRXACCESSINFO                               
#define COM_EQ2_GWINFOUSEDOFRXACCESSINFO                              
#define COM_EQ2_INITVALUEIDXOFRXACCESSINFO                            0U
#define COM_EQ2_INITVALUEUSEDOFRXACCESSINFO                           TRUE
#define COM_EQ2_INVALIDHNDOFRXACCESSINFO                              
#define COM_EQ2_MASKEDBITSOFRXACCESSINFO                              0x07U
#define COM_EQ2_PDUIDOFRXACCESSINFO                                   ComConf_ComIPdu_msg_Receive_oCAN00_In
#define COM_EQ2_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO       0U
#define COM_EQ2_RXDATATIMEOUTSUBSTITUTIONVALUEUSEDOFRXACCESSINFO      TRUE
#define COM_EQ2_SHDBUFFERIDXOFRXACCESSINFO                            
#define COM_EQ2_SHDBUFFERUSEDOFRXACCESSINFO                           
#define COM_EQ2_SIGNEXTREQUIREDOFRXACCESSINFO                         
#define COM_EQ2_STARTBYTEINPDUPOSITIONOFRXACCESSINFO                  0U
#define COM_EQ2_RXACCESSINFOIND                                       
#define COM_EQ2_RXACCESSINFOREPLACEGRPSIGIND                          
#define COM_EQ2_RXACCESSINFOREPLACESIGIND                             
#define COM_EQ2_FILTERINFOIDXOFRXGRPSIGINFO                           
#define COM_EQ2_FILTERINFOUSEDOFRXGRPSIGINFO                          
#define COM_EQ2_INVVALUEIDXOFRXGRPSIGINFO                             
#define COM_EQ2_INVVALUEUSEDOFRXGRPSIGINFO                            
#define COM_EQ2_RXACCESSINFOIDXOFRXGRPSIGINFO                         
#define COM_EQ2_TMPBUFFERIDXOFRXGRPSIGINFO                            
#define COM_EQ2_TMPBUFFERUSEDOFRXGRPSIGINFO                           
#define COM_EQ2_RXPDUCALLOUTFUNCPTR                                   
#define COM_EQ2_PDUGRPVECTORENDIDXOFRXPDUGRPINFO                      1U
#define COM_EQ2_PDUGRPVECTORSTARTIDXOFRXPDUGRPINFO                    0U
#define COM_EQ2_PDUGRPVECTORUSEDOFRXPDUGRPINFO                        TRUE
#define COM_EQ2_GWINFOENDIDXOFRXPDUINFO                               
#define COM_EQ2_GWINFOSTARTIDXOFRXPDUINFO                             
#define COM_EQ2_GWINFOUSEDOFRXPDUINFO                                 
#define COM_EQ2_GWTXPDUDESCRIPTIONINFOENDIDXOFRXPDUINFO               
#define COM_EQ2_GWTXPDUDESCRIPTIONINFOSTARTIDXOFRXPDUINFO             
#define COM_EQ2_GWTXPDUDESCRIPTIONINFOUSEDOFRXPDUINFO                 
#define COM_EQ2_HANDLERXDEFERREDGWDESCRIPTIONIDXOFRXPDUINFO           
#define COM_EQ2_HANDLERXDEFERREDGWDESCRIPTIONUSEDOFRXPDUINFO          
#define COM_EQ2_HANDLERXPDUDEFERREDIDXOFRXPDUINFO                     0U
#define COM_EQ2_HANDLERXPDUDEFERREDUSEDOFRXPDUINFO                    TRUE
#define COM_EQ2_IPDUGROUPINFOOFRXPDUINFOINDENDIDXOFRXPDUINFO          
#define COM_EQ2_IPDUGROUPINFOOFRXPDUINFOINDSTARTIDXOFRXPDUINFO        
#define COM_EQ2_IPDUGROUPINFOOFRXPDUINFOINDUSEDOFRXPDUINFO            
#define COM_EQ2_INVALIDHNDOFRXPDUINFO                                 
#define COM_EQ2_MASKEDBITSOFRXPDUINFO                                 0x0FU
#define COM_EQ2_RXACCESSINFOINDENDIDXOFRXPDUINFO                      2U
#define COM_EQ2_RXACCESSINFOINDSTARTIDXOFRXPDUINFO                    0U
#define COM_EQ2_RXACCESSINFOINDUSEDOFRXPDUINFO                        TRUE
#define COM_EQ2_RXDEFPDUBUFFERENDIDXOFRXPDUINFO                       1U
#define COM_EQ2_RXDEFPDUBUFFERLENGTHOFRXPDUINFO                       1U
#define COM_EQ2_RXDEFPDUBUFFERSTARTIDXOFRXPDUINFO                     0U
#define COM_EQ2_RXDEFPDUBUFFERUSEDOFRXPDUINFO                         TRUE
#define COM_EQ2_RXPDUCALLOUTFUNCPTRIDXOFRXPDUINFO                     
#define COM_EQ2_RXPDUCALLOUTFUNCPTRUSEDOFRXPDUINFO                    
#define COM_EQ2_RXSIGGRPINFOINDENDIDXOFRXPDUINFO                      
#define COM_EQ2_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO                    
#define COM_EQ2_RXSIGGRPINFOINDUSEDOFRXPDUINFO                        
#define COM_EQ2_RXSIGINFOENDIDXOFRXPDUINFO                            2U
#define COM_EQ2_RXSIGINFOSTARTIDXOFRXPDUINFO                          0U
#define COM_EQ2_RXSIGINFOUSEDOFRXPDUINFO                              TRUE
#define COM_EQ2_RXTOUTINFOIDXOFRXPDUINFO                              
#define COM_EQ2_RXTOUTINFOINDENDIDXOFRXPDUINFO                        
#define COM_EQ2_RXTOUTINFOINDSTARTIDXOFRXPDUINFO                      
#define COM_EQ2_RXTOUTINFOINDUSEDOFRXPDUINFO                          
#define COM_EQ2_RXTOUTINFOUSEDOFRXPDUINFO                             
#define COM_EQ2_RXTPINFOIDXOFRXPDUINFO                                
#define COM_EQ2_RXTPINFOUSEDOFRXPDUINFO                               
#define COM_EQ2_RXPDUINFOIND                                          
#define COM_EQ2_ARRAYACCESSUSEDOFRXSIGGRPINFO                         
#define COM_EQ2_CBKINVFUNCPTRIDXOFRXSIGGRPINFO                        
#define COM_EQ2_CBKINVFUNCPTRUSEDOFRXSIGGRPINFO                       
#define COM_EQ2_CBKRXACKFUNCPTRIDXOFRXSIGGRPINFO                      
#define COM_EQ2_CBKRXACKFUNCPTRUSEDOFRXSIGGRPINFO                     
#define COM_EQ2_CONSTVALUEXINT8ENDIDXOFRXSIGGRPINFO                   
#define COM_EQ2_CONSTVALUEXINT8LENGTHOFRXSIGGRPINFO                   
#define COM_EQ2_CONSTVALUEXINT8STARTIDXOFRXSIGGRPINFO                 
#define COM_EQ2_CONSTVALUEXINT8USEDOFRXSIGGRPINFO                     
#define COM_EQ2_FILTEREVENTOFRXSIGGRPINFO                             
#define COM_EQ2_GWINFOIDXOFRXSIGGRPINFO                               
#define COM_EQ2_GWINFOUSEDOFRXSIGGRPINFO                              
#define COM_EQ2_INVEVENTOFRXSIGGRPINFO                                
#define COM_EQ2_INVALIDHNDOFRXSIGGRPINFO                              
#define COM_EQ2_RXGRPSIGINFOENDIDXOFRXSIGGRPINFO                      
#define COM_EQ2_RXGRPSIGINFOSTARTIDXOFRXSIGGRPINFO                    
#define COM_EQ2_RXPDUINFOIDXOFRXSIGGRPINFO                            
#define COM_EQ2_RXPDUINFOUSEDOFRXSIGGRPINFO                           
#define COM_EQ2_RXSHDBUFFERXINT8ENDIDXOFRXSIGGRPINFO                  
#define COM_EQ2_RXSHDBUFFERXINT8LENGTHOFRXSIGGRPINFO                  
#define COM_EQ2_RXSHDBUFFERXINT8STARTIDXOFRXSIGGRPINFO                
#define COM_EQ2_RXSHDBUFFERXINT8USEDOFRXSIGGRPINFO                    
#define COM_EQ2_RXTOUTINFOIDXOFRXSIGGRPINFO                           
#define COM_EQ2_RXTOUTINFOUSEDOFRXSIGGRPINFO                          
#define COM_EQ2_SIGNALPROCESSINGOFRXSIGGRPINFO                        
#define COM_EQ2_STARTBYTEPOSITIONOFRXSIGGRPINFO                       
#define COM_EQ2_UBIDXOFRXSIGGRPINFO                                   
#define COM_EQ2_UBMASKIDXOFRXSIGGRPINFO                               
#define COM_EQ2_UBMASKUSEDOFRXSIGGRPINFO                              
#define COM_EQ2_VALIDDLCOFRXSIGGRPINFO                                
#define COM_EQ2_RXSIGGRPINFOIND                                       
#define COM_EQ2_CBKINVFUNCPTRIDXOFRXSIGINFO                           
#define COM_EQ2_CBKINVFUNCPTRUSEDOFRXSIGINFO                          
#define COM_EQ2_CBKRXACKFUNCPTRIDXOFRXSIGINFO                         
#define COM_EQ2_CBKRXACKFUNCPTRUSEDOFRXSIGINFO                        
#define COM_EQ2_FILTERINFOIDXOFRXSIGINFO                              
#define COM_EQ2_FILTERINFOUSEDOFRXSIGINFO                             
#define COM_EQ2_GWINFOIDXOFRXSIGINFO                                  
#define COM_EQ2_GWINFOUSEDOFRXSIGINFO                                 
#define COM_EQ2_INVVALUEIDXOFRXSIGINFO                                
#define COM_EQ2_INVVALUEUSEDOFRXSIGINFO                               
#define COM_EQ2_RXACCESSINFOIDXOFRXSIGINFO                            
#define COM_EQ2_RXTOUTINFOIDXOFRXSIGINFO                              
#define COM_EQ2_RXTOUTINFOUSEDOFRXSIGINFO                             
#define COM_EQ2_SIGNALPROCESSINGOFRXSIGINFO                           COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO
#define COM_EQ2_UBIDXOFRXSIGINFO                                      
#define COM_EQ2_UBMASKIDXOFRXSIGINFO                                  
#define COM_EQ2_UBMASKUSEDOFRXSIGINFO                                 
#define COM_EQ2_VALIDDLCOFRXSIGINFO                                   1U
#define COM_EQ2_CBKRXTOUTFUNCPTRINDENDIDXOFRXTOUTINFO                 
#define COM_EQ2_CBKRXTOUTFUNCPTRINDSTARTIDXOFRXTOUTINFO               
#define COM_EQ2_CBKRXTOUTFUNCPTRINDUSEDOFRXTOUTINFO                   
#define COM_EQ2_FACTOROFRXTOUTINFO                                    
#define COM_EQ2_FIRSTFACTOROFRXTOUTINFO                               
#define COM_EQ2_RXACCESSINFOREPLACEGRPSIGINDENDIDXOFRXTOUTINFO        
#define COM_EQ2_RXACCESSINFOREPLACEGRPSIGINDSTARTIDXOFRXTOUTINFO      
#define COM_EQ2_RXACCESSINFOREPLACEGRPSIGINDUSEDOFRXTOUTINFO          
#define COM_EQ2_RXACCESSINFOREPLACESIGINDENDIDXOFRXTOUTINFO           
#define COM_EQ2_RXACCESSINFOREPLACESIGINDSTARTIDXOFRXTOUTINFO         
#define COM_EQ2_RXACCESSINFOREPLACESIGINDUSEDOFRXTOUTINFO             
#define COM_EQ2_RXPDUINFOIDXOFRXTOUTINFO                              
#define COM_EQ2_RXTOUTINFOIND                                         
#define COM_EQ2_BUFFERSIZEOFRXTPINFO                                  
#define COM_EQ2_RXACCESSINFODYNSIGIDXOFRXTPINFO                       
#define COM_EQ2_RXACCESSINFODYNSIGUSEDOFRXTPINFO                      
#define COM_EQ2_RXTPBUFFERENDIDXOFRXTPINFO                            
#define COM_EQ2_RXTPBUFFERSTARTIDXOFRXTPINFO                          
#define COM_EQ2_RXTPBUFFERUSEDOFRXTPINFO                              
#define COM_EQ2_SOURCEDESCRIPTIONMASK                                 
#define COM_EQ2_TXFILTERINITSTATE                                     
#define COM_EQ2_TXFILTERINITVALUEXINT16                               
#define COM_EQ2_TXFILTERINITVALUEXINT32                               
#define COM_EQ2_TXFILTERINITVALUEXINT8                                
#define COM_EQ2_DIRECTOFTXMODEFALSE                                   
#define COM_EQ2_PERIODICOFTXMODEFALSE                                 
#define COM_EQ2_REPCNTOFTXMODEFALSE                                   
#define COM_EQ2_REPPERIODOFTXMODEFALSE                                
#define COM_EQ2_TIMEOFFSETOFTXMODEFALSE                               
#define COM_EQ2_TIMEPERIODOFTXMODEFALSE                               
#define COM_EQ2_INITMODEOFTXMODEINFO                                  TRUE
#define COM_EQ2_INVALIDHNDOFTXMODEINFO                                
#define COM_EQ2_MASKEDBITSOFTXMODEINFO                                0x03U
#define COM_EQ2_MINIMUMDELAYOFTXMODEINFO                              
#define COM_EQ2_TXFILTERINITSTATEENDIDXOFTXMODEINFO                   
#define COM_EQ2_TXFILTERINITSTATESTARTIDXOFTXMODEINFO                 
#define COM_EQ2_TXFILTERINITSTATEUSEDOFTXMODEINFO                     
#define COM_EQ2_TXMODEFALSEIDXOFTXMODEINFO                            
#define COM_EQ2_TXMODEFALSEUSEDOFTXMODEINFO                           
#define COM_EQ2_TXMODETRUEIDXOFTXMODEINFO                             0U
#define COM_EQ2_TXMODETRUEUSEDOFTXMODEINFO                            TRUE
#define COM_EQ2_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO         
#define COM_EQ2_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO       
#define COM_EQ2_TXSIGINFOFILTERINITVALUEINDUSEDOFTXMODEINFO           
#define COM_EQ2_DIRECTOFTXMODETRUE                                    
#define COM_EQ2_PERIODICOFTXMODETRUE                                  TRUE
#define COM_EQ2_REPCNTOFTXMODETRUE                                    
#define COM_EQ2_REPPERIODOFTXMODETRUE                                 
#define COM_EQ2_TIMEOFFSETOFTXMODETRUE                                
#define COM_EQ2_TIMEPERIODOFTXMODETRUE                                1U
#define COM_EQ2_TXPDUCALLOUTFUNCPTR                                   
#define COM_EQ2_PDUGRPVECTORENDIDXOFTXPDUGRPINFO                      2U
#define COM_EQ2_PDUGRPVECTORSTARTIDXOFTXPDUGRPINFO                    1U
#define COM_EQ2_PDUGRPVECTORUSEDOFTXPDUGRPINFO                        TRUE
#define COM_EQ2_CANCELLATIONSUPPORTOFTXPDUINFO                        
#define COM_EQ2_CBKTXACKDEFFUNCPTRINDENDIDXOFTXPDUINFO                
#define COM_EQ2_CBKTXACKDEFFUNCPTRINDSTARTIDXOFTXPDUINFO              
#define COM_EQ2_CBKTXACKDEFFUNCPTRINDUSEDOFTXPDUINFO                  
#define COM_EQ2_CBKTXACKIMFUNCPTRINDENDIDXOFTXPDUINFO                 
#define COM_EQ2_CBKTXACKIMFUNCPTRINDSTARTIDXOFTXPDUINFO               
#define COM_EQ2_CBKTXACKIMFUNCPTRINDUSEDOFTXPDUINFO                   
#define COM_EQ2_CBKTXERRFUNCPTRINDENDIDXOFTXPDUINFO                   
#define COM_EQ2_CBKTXERRFUNCPTRINDSTARTIDXOFTXPDUINFO                 
#define COM_EQ2_CBKTXERRFUNCPTRINDUSEDOFTXPDUINFO                     
#define COM_EQ2_CLRUBOFTXPDUINFO                                      
#define COM_EQ2_CONSTVALUEXINT8UBCLEARMASKENDIDXOFTXPDUINFO           
#define COM_EQ2_CONSTVALUEXINT8UBCLEARMASKSTARTIDXOFTXPDUINFO         
#define COM_EQ2_CONSTVALUEXINT8UBCLEARMASKUSEDOFTXPDUINFO             
#define COM_EQ2_EXTERNALIDOFTXPDUINFO                                 PduRConf_PduRSrcPdu_SRC_Can_PT_msg_Transmit_0fb271d2_Out
#define COM_EQ2_GWTIMEOUTINFOIDXOFTXPDUINFO                           
#define COM_EQ2_GWTIMEOUTINFOUSEDOFTXPDUINFO                          
#define COM_EQ2_IPDUGROUPINFOOFTXPDUINFOINDENDIDXOFTXPDUINFO          
#define COM_EQ2_IPDUGROUPINFOOFTXPDUINFOINDSTARTIDXOFTXPDUINFO        
#define COM_EQ2_IPDUGROUPINFOOFTXPDUINFOINDUSEDOFTXPDUINFO            
#define COM_EQ2_INVALIDHNDOFTXPDUINFO                                 
#define COM_EQ2_MASKEDBITSOFTXPDUINFO                                 0x03U
#define COM_EQ2_METADATALENGTHOFTXPDUINFO                             0U
#define COM_EQ2_PDUWITHMETADATALENGTHOFTXPDUINFO                      1U
#define COM_EQ2_TXPDUBUFFERENDIDXOFTXPDUINFO                          1U
#define COM_EQ2_TXPDUBUFFERLENGTHOFTXPDUINFO                          1U
#define COM_EQ2_TXPDUBUFFERMETADATAENDIDXOFTXPDUINFO                  
#define COM_EQ2_TXPDUBUFFERMETADATASTARTIDXOFTXPDUINFO                
#define COM_EQ2_TXPDUBUFFERMETADATAUSEDOFTXPDUINFO                    
#define COM_EQ2_TXPDUBUFFERSTARTIDXOFTXPDUINFO                        0U
#define COM_EQ2_TXPDUBUFFERUSEDOFTXPDUINFO                            TRUE
#define COM_EQ2_TXPDUCALLOUTFUNCPTRIDXOFTXPDUINFO                     
#define COM_EQ2_TXPDUCALLOUTFUNCPTRUSEDOFTXPDUINFO                    
#define COM_EQ2_TXPDUINITVALUEENDIDXOFTXPDUINFO                       1U
#define COM_EQ2_TXPDUINITVALUEMETADATAENDIDXOFTXPDUINFO               
#define COM_EQ2_TXPDUINITVALUEMETADATASTARTIDXOFTXPDUINFO             
#define COM_EQ2_TXPDUINITVALUEMETADATAUSEDOFTXPDUINFO                 
#define COM_EQ2_TXPDUINITVALUESTARTIDXOFTXPDUINFO                     0U
#define COM_EQ2_TXPDUINITVALUEUSEDOFTXPDUINFO                         TRUE
#define COM_EQ2_TXPDUTTCALLOUTFUNCPTRIDXOFTXPDUINFO                   
#define COM_EQ2_TXPDUTTCALLOUTFUNCPTRUSEDOFTXPDUINFO                  
#define COM_EQ2_TXSIGGRPINFOINDENDIDXOFTXPDUINFO                      
#define COM_EQ2_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO                    
#define COM_EQ2_TXSIGGRPINFOINDUSEDOFTXPDUINFO                        
#define COM_EQ2_TXTOUTINFOIDXOFTXPDUINFO                              
#define COM_EQ2_TXTOUTINFOUSEDOFTXPDUINFO                             
#define COM_EQ2_TXTPINFOIDXOFTXPDUINFO                                
#define COM_EQ2_TXTPINFOUSEDOFTXPDUINFO                               
#define COM_EQ2_TXPDUINFOIND                                          
#define COM_EQ2_TXPDUINITVALUE                                        
#define COM_EQ2_TXPDUTTCALLOUTFUNCPTR                                 
#define COM_EQ2_ARRAYACCESSUSEDOFTXSIGGRPINFO                         
#define COM_EQ2_INVALIDHNDOFTXSIGGRPINFO                              
#define COM_EQ2_PDUIDOFTXSIGGRPINFO                                   
#define COM_EQ2_PDUOFFSETOFTXSIGGRPINFO                               
#define COM_EQ2_SIGGROUPONCHANGEOFFSETOFTXSIGGRPINFO                  
#define COM_EQ2_SIGGROUPONCHANGESTARTPOSITIONOFTXSIGGRPINFO           
#define COM_EQ2_SIGGROUPONCHANGEWITHOUTREPOFFSETOFTXSIGGRPINFO        
#define COM_EQ2_SIGGROUPONCHANGEWITHOUTREPSTARTPOSITIONOFTXSIGGRPINFO 
#define COM_EQ2_TRANSFERPROPERTYOFTXSIGGRPINFO                        
#define COM_EQ2_TXSHDBUFFERENDIDXOFTXSIGGRPINFO                       
#define COM_EQ2_TXSHDBUFFERLENGTHOFTXSIGGRPINFO                       
#define COM_EQ2_TXSHDBUFFERSTARTIDXOFTXSIGGRPINFO                     
#define COM_EQ2_TXSHDBUFFERUSEDOFTXSIGGRPINFO                         
#define COM_EQ2_TXSIGGRPMASKENDIDXOFTXSIGGRPINFO                      
#define COM_EQ2_TXSIGGRPMASKLENGTHOFTXSIGGRPINFO                      
#define COM_EQ2_TXSIGGRPMASKSTARTIDXOFTXSIGGRPINFO                    
#define COM_EQ2_TXSIGGRPMASKUSEDOFTXSIGGRPINFO                        
#define COM_EQ2_TXSIGGRPONCHANGEMASKONCHANGEENDIDXOFTXSIGGRPINFO      
#define COM_EQ2_TXSIGGRPONCHANGEMASKONCHANGELENGTHOFTXSIGGRPINFO      
#define COM_EQ2_TXSIGGRPONCHANGEMASKONCHANGESTARTIDXOFTXSIGGRPINFO    
#define COM_EQ2_TXSIGGRPONCHANGEMASKONCHANGEUSEDOFTXSIGGRPINFO        
#define COM_EQ2_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPENDIDXOFTXSIGGRPINFO 
#define COM_EQ2_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPLENGTHOFTXSIGGRPINFO 
#define COM_EQ2_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPSTARTIDXOFTXSIGGRPINFO 
#define COM_EQ2_TXSIGGRPONCHANGEMASKONCHANGEWITHOUTREPUSEDOFTXSIGGRPINFO 
#define COM_EQ2_TXSIGINFOINVVALUEINDENDIDXOFTXSIGGRPINFO              
#define COM_EQ2_TXSIGINFOINVVALUEINDSTARTIDXOFTXSIGGRPINFO            
#define COM_EQ2_TXSIGINFOINVVALUEINDUSEDOFTXSIGGRPINFO                
#define COM_EQ2_TXTOUTINFOIDXOFTXSIGGRPINFO                           
#define COM_EQ2_TXTOUTINFOUSEDOFTXSIGGRPINFO                          
#define COM_EQ2_UBIDXOFTXSIGGRPINFO                                   
#define COM_EQ2_UBMASKIDXOFTXSIGGRPINFO                               
#define COM_EQ2_UBMASKUSEDOFTXSIGGRPINFO                              
#define COM_EQ2_TXSIGGRPINFOIND                                       
#define COM_EQ2_TXSIGGRPMASK                                          
#define COM_EQ2_TXSIGGRPONCHANGEMASK                                  
#define COM_EQ2_APPLTYPEOFTXSIGINFO                                   COM_BOOLEAN_APPLTYPEOFTXSIGINFO
#define COM_EQ2_BITLENGTHOFTXSIGINFO                                  1U
#define COM_EQ2_BITPOSITIONOFTXSIGINFO                                0U
#define COM_EQ2_BUSACCOFTXSIGINFO                                     COM_NBIT_BUSACCOFTXSIGINFO
#define COM_EQ2_BYTELENGTHOFTXSIGINFO                                 0U
#define COM_EQ2_BYTEPOSITIONOFTXSIGINFO                               0U
#define COM_EQ2_FILTERINFOIDXOFTXSIGINFO                              
#define COM_EQ2_FILTERINFOUSEDOFTXSIGINFO                             
#define COM_EQ2_FILTERINITVALUEIDXOFTXSIGINFO                         
#define COM_EQ2_FILTERINITVALUEUSEDOFTXSIGINFO                        
#define COM_EQ2_INVVALUEIDXOFTXSIGINFO                                
#define COM_EQ2_INVVALUEUSEDOFTXSIGINFO                               
#define COM_EQ2_INVALIDHNDOFTXSIGINFO                                 
#define COM_EQ2_ONCHANGEIDXOFTXSIGINFO                                
#define COM_EQ2_ONCHANGEUSEDOFTXSIGINFO                               
#define COM_EQ2_PDUIDOFTXSIGINFO                                      ComConf_ComIPdu_msg_Transmit_oCAN00_Out
#define COM_EQ2_STARTBYTEINPDUPOSITIONOFTXSIGINFO                     0U
#define COM_EQ2_TRIGGEREDOFTXSIGINFO                                  
#define COM_EQ2_TXFILTERINITSTATEIDXOFTXSIGINFO                       
#define COM_EQ2_TXFILTERINITSTATEUSEDOFTXSIGINFO                      
#define COM_EQ2_TXSIGGRPINFOIDXOFTXSIGINFO                            
#define COM_EQ2_TXSIGGRPINFOUSEDOFTXSIGINFO                           
#define COM_EQ2_TXTOUTINFOIDXOFTXSIGINFO                              
#define COM_EQ2_TXTOUTINFOUSEDOFTXSIGINFO                             
#define COM_EQ2_UBIDXOFTXSIGINFO                                      
#define COM_EQ2_UBMASKIDXOFTXSIGINFO                                  
#define COM_EQ2_UBMASKUSEDOFTXSIGINFO                                 
#define COM_EQ2_WITHOUTREPOFTXSIGINFO                                 
#define COM_EQ2_TXSIGINFOFILTERINITVALUEIND                           
#define COM_EQ2_TXSIGINFOINVVALUEIND                                  
#define COM_EQ2_CBKTXTOUTFUNCPTRINDENDIDXOFTXTOUTINFO                 
#define COM_EQ2_CBKTXTOUTFUNCPTRINDSTARTIDXOFTXTOUTINFO               
#define COM_EQ2_CBKTXTOUTFUNCPTRINDUSEDOFTXTOUTINFO                   
#define COM_EQ2_FACTOROFTXTOUTINFO                                    
#define COM_EQ2_NONEMODEOFTXTOUTINFO                                  
#define COM_EQ2_TXPDUINFOIDXOFTXTOUTINFO                              
#define COM_EQ2_BUFFERSIZEOFTXTPINFO                                  
#define COM_EQ2_TXPDUBUFFERENDIDXOFTXTPINFO                           
#define COM_EQ2_TXPDUBUFFERLENGTHOFTXTPINFO                           
#define COM_EQ2_TXPDUBUFFERSTARTIDXOFTXTPINFO                         
#define COM_EQ2_TXPDUBUFFERUSEDOFTXTPINFO                             
#define COM_EQ2_TXSIGINFODYNSIGIDXOFTXTPINFO                          
#define COM_EQ2_TXSIGINFODYNSIGUSEDOFTXTPINFO                         
#define COM_EQ2_CONSTVALUEXINT8OFPCCONFIG                             Com_ConstValueXInt8
#define COM_EQ2_CURRENTTXMODEOFPCCONFIG                               Com_CurrentTxMode.raw
#define COM_EQ2_CYCLETIMECNTOFPCCONFIG                                Com_CycleTimeCnt.raw
#define COM_EQ2_CYCLICSENDREQUESTOFPCCONFIG                           Com_CyclicSendRequest.raw
#define COM_EQ2_DELAYTIMECNTOFPCCONFIG                                Com_DelayTimeCnt.raw
#define COM_EQ2_FINALMAGICNUMBEROFPCCONFIG                            
#define COM_EQ2_HANDLERXPDUDEFERREDOFPCCONFIG                         Com_HandleRxPduDeferred.raw
#define COM_EQ2_HANDLETXPDUDEFERREDOFPCCONFIG                         Com_HandleTxPduDeferred
#define COM_EQ2_INITDATAHASHCODEOFPCCONFIG                            
#define COM_EQ2_INITIALIZEDOFPCCONFIG                                 Com_Initialized
#define COM_EQ2_PDUGRPVECTOROFPCCONFIG                                Com_PduGrpVector
#define COM_EQ2_REPCNTOFPCCONFIG                                      Com_RepCnt.raw
#define COM_EQ2_REPCYCLECNTOFPCCONFIG                                 Com_RepCycleCnt.raw
#define COM_EQ2_RXACCESSINFOINDOFPCCONFIG                             Com_RxAccessInfoInd
#define COM_EQ2_RXACCESSINFOOFPCCONFIG                                Com_RxAccessInfo
#define COM_EQ2_RXDEFPDUBUFFEROFPCCONFIG                              Com_RxDefPduBuffer.raw
#define COM_EQ2_RXDLMONDIVISORCOUNTEROFPCCONFIG                       Com_RxDlMonDivisorCounter
#define COM_EQ2_RXDLMONDIVISOROFPCCONFIG                              
#define COM_EQ2_RXPDUGRPACTIVEOFPCCONFIG                              Com_RxPduGrpActive
#define COM_EQ2_RXPDUGRPINFOOFPCCONFIG                                Com_RxPduGrpInfo
#define COM_EQ2_RXPDUINFOOFPCCONFIG                                   Com_RxPduInfo
#define COM_EQ2_RXSIGBUFFERXINT8OFPCCONFIG                            Com_RxSigBufferXInt8.raw
#define COM_EQ2_RXSIGINFOOFPCCONFIG                                   Com_RxSigInfo
#define COM_EQ2_TRANSMITREQUESTOFPCCONFIG                             Com_TransmitRequest.raw
#define COM_EQ2_TXCYCLECOUNTERDIVISORCOUNTEROFPCCONFIG                Com_TxCycleCounterDivisorCounter
#define COM_EQ2_TXDLMONDIVISORCOUNTEROFPCCONFIG                       Com_TxDlMonDivisorCounter
#define COM_EQ2_TXDLMONDIVISOROFPCCONFIG                              
#define COM_EQ2_TXMODEINFOOFPCCONFIG                                  Com_TxModeInfo
#define COM_EQ2_TXMODETRUEOFPCCONFIG                                  Com_TxModeTrue
#define COM_EQ2_TXPDUBUFFEROFPCCONFIG                                 Com_TxPduBuffer.raw
#define COM_EQ2_TXPDUGRPACTIVEOFPCCONFIG                              Com_TxPduGrpActive
#define COM_EQ2_TXPDUGRPINFOOFPCCONFIG                                Com_TxPduGrpInfo
#define COM_EQ2_TXPDUINFOOFPCCONFIG                                   Com_TxPduInfo
#define COM_EQ2_TXPDUINITVALUEOFPCCONFIG                              Com_TxPduInitValue
#define COM_EQ2_TXSDULENGTHOFPCCONFIG                                 Com_TxSduLength
#define COM_EQ2_TXSIGINFOOFPCCONFIG                                   Com_TxSigInfo
#define COM_EQ2_WAITINGFORCONFIRMATIONOFPCCONFIG                      Com_WaitingForConfirmation
/** 
  \}
*/ 

/** 
  \defgroup  ComPCSymbolicInitializationPointers  Com Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define Com_Config_Ptr                                                NULL_PTR  /**< symbolic identifier which shall be used to initialize 'Com' */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCInitializationSymbols  Com Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define Com_Config                                                    NULL_PTR  /**< symbolic identifier which could be used to initialize 'Com */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGeneral  Com General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define COM_CHECK_INIT_POINTER                                        STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define COM_FINAL_MAGIC_NUMBER                                        0x321EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of Com */
#define COM_INDIVIDUAL_POSTBUILD                                      STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'Com' is not configured to be postbuild capable. */
#define COM_INIT_DATA                                                 COM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define COM_INIT_DATA_HASH_CODE                                       -2111758871L  /**< the precompile constant to validate the initialization structure at initialization time of Com with a hashcode. The seed value is '0x321EU' */
#define COM_USE_ECUM_BSW_ERROR_HOOK                                   STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define COM_USE_INIT_POINTER                                          STD_OFF  /**< STD_ON if the init pointer Com shall be used. */
/** 
  \}
*/ 



/* General */
#define COM_DEV_ERROR_DETECT                 STD_ON  /**< /ActiveEcuC/EcuC/EcucGeneral[0:EcuCSafeBswChecks] || /ActiveEcuC/Com/ComGeneral[0:ComConfigurationUseDet] */
#define COM_DEV_ERROR_REPORT                 STD_ON  /**< /ActiveEcuC/Com/ComGeneral[0:ComConfigurationUseDet] */
#define COM_TSI_TESTCODE                     STD_OFF
#define COM_RETRY_FAILED_TRANSMIT_REQUESTS   STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComRetryFailedTransmitRequests] */
#define COM_IPDUCALLOUT_USEPDUINFOPTR        STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComAdvancedIPduCallouts] */

/* Optimization */
#define COM_OFTENER_SHORTER                  0U
#define COM_FEWER_LONGER                     1U
#define COM_EXCLUSIVE_AREA_RX_USAGE          COM_FEWER_LONGER
#define COM_EXCLUSIVE_AREA_TX_USAGE          COM_FEWER_LONGER
#define COM_EXCLUSIVE_AREA_ROUTE_USAGE       COM_FEWER_LONGER
#define COM_RECEIVE_SIGNAL_MACRO_API         STD_OFF

/* API */
#define COM_COMMUNICATION_INTERFACE          STD_ON  /**< /ActiveEcuC/PduR/Com[0:PduRCommunicationInterface] */
#define COM_TRANSPORT_PROTOCOL               STD_OFF  /**< /ActiveEcuC/PduR/Com[0:PduRTransportProtocol] */

#define COM_TRIGGER_TRANSMIT_API             STD_OFF  /**< /ActiveEcuC/PduR/Com[0:PduRTriggertransmit] */
#define COM_TX_CONFIRMATION_API              STD_OFF  /**< /ActiveEcuC/PduR/Com[0:PduRTxConfirmation] */
#define COM_TRIGGER_IPDU_SEND_API            STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComTriggerIPDUSendApi] */
#define COM_TRIGGER_IPDU_SEND_WITH_META_DATA_API    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComMetaDataSupport] */
#define COM_SWITCH_IPDU_TX_MODE_API          STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComSwitchIpduTxModeApi] */
#define COM_MAIN_FUNCTION_ROUTE_SIGNALS_API  STD_OFF
#define COM_ENABLE_SIGNAL_GROUP_ARRAY_API    STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComEnableSignalGroupArrayApi] */

#define COM_IPDU_GROUP_CONTROL_API           STD_ON
#define COM_RECEPTION_DM_CONTROL_API         STD_ON

#define COM_IPDU_GROUP_START_API             STD_OFF
#define COM_IPDU_GROUP_STOP_API              STD_OFF
#define COM_ENABLE_RECEPTION_DM_API          STD_OFF
#define COM_DISABLE_RECEPTION_DM_API         STD_OFF

#define COM_DE_INIT_API                      STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComDeInitApi] */
#define COM_GET_STATUS_API                   STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComGetStatusApi] */
#define COM_VERSION_INFO_API                 STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComVersionInfoApi] */
#define COM_GENERATED_DESCRIPTION_ROUTING   STD_OFF  /**< /ActiveEcuC/Com/ComGeneral[0:ComDescriptionRoutingCodeGeneration] */

/* Com_TxModeHdlr */
#if ((COM_PERIODICOFTXMODETRUE == STD_OFF) && (COM_PERIODICOFTXMODEFALSE == STD_OFF))
# define COM_TXMODEHDLR_CYCLIC_TRANSMISSION               STD_OFF
#else
# define COM_TXMODEHDLR_CYCLIC_TRANSMISSION               STD_ON
#endif
#if ((COM_DIRECTOFTXMODETRUE == STD_OFF) && (COM_DIRECTOFTXMODEFALSE == STD_OFF))
# define COM_TXMODEHDLR_DIRECT_TRANSMISSION               STD_OFF
#else
# define COM_TXMODEHDLR_DIRECT_TRANSMISSION               STD_ON
#endif
#if ((COM_REPCNTOFTXMODETRUE == STD_OFF) && (COM_REPCNTOFTXMODEFALSE == STD_OFF))
# define COM_TXMODEHDLR_DIRECT_REPETITION                 STD_OFF
#else
# define COM_TXMODEHDLR_DIRECT_REPETITION                 STD_ON
#endif

#if ((COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO == STD_ON) || (COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO == STD_ON))
# define COM_EXISTS_DEFERRED_SIGNALPROCESSING             STD_ON
#else
# define COM_EXISTS_DEFERRED_SIGNALPROCESSING             STD_OFF
#endif

#if ((COM_EXISTS_IMMEDIATE_SIGNALPROCESSINGOFRXSIGGRPINFO == STD_ON) || (COM_EXISTS_IMMEDIATE_SIGNALPROCESSINGOFRXSIGINFO == STD_ON))
# define COM_EXISTS_IMMEDIATE_SIGNALPROCESSING            STD_ON
#else
# define COM_EXISTS_IMMEDIATE_SIGNALPROCESSING            STD_OFF
#endif

#define COM_LMGT_MAXIPDUGROUPVECTORBYTECNT                1U




/**
 * \defgroup ComHandleIdsComRxSig Handle IDs of handle space ComRxSig.
 * \brief Rx Signals
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComSignal_sig_State_RearLeftDoor_In                 0
#define ComConf_ComSignal_sig_State_RearRightDoor_In                1
/**\} */

/**
 * \defgroup ComHandleIdsComTxSig Handle IDs of handle space ComTxSig.
 * \brief Tx Signals
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComSignal_sig_RearInteriorLight_Out                 0
/**\} */







/**
 * \defgroup ComHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPduGroup_MyECU_oCAN00_Rx_fcef2243               0
#define ComConf_ComIPduGroup_MyECU_oCAN00_Tx_fcef2243               1
/**\} */

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
  \defgroup  ComPCGetRootDataMacros  Com Get Root Data Macros (PRE_COMPILE)
  \brief  These are used to get data pointers of root data.
  \{
*/ 
#define Com_GetFinalMagicNumberOfPCConfig()                           
#define Com_GetInitDataHashCodeOfPCConfig()                           
#define Com_GetRxDlMonDivisorOfPCConfig()                             
#define Com_GetTxDlMonDivisorOfPCConfig()                             
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGetConstantDuplicatedRootDataMacros  Com Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define Com_GetAllSigCntOfPCConfig()                                  3UL
#define Com_GetAllSigGrpCntOfPCConfig()                               0UL
#define Com_GetConfigIdOfPCConfig()                                   0UL  /**< DefinitionRef: /MICROSAR/Com/ComConfig/ComConfigurationId */
#define Com_GetConstValueXInt8OfPCConfig()                            Com_ConstValueXInt8  /**< the pointer to Com_ConstValueXInt8 */
#define Com_GetCurrentTxModeOfPCConfig()                              Com_CurrentTxMode.raw  /**< the pointer to Com_CurrentTxMode */
#define Com_GetCycleTimeCntOfPCConfig()                               Com_CycleTimeCnt.raw  /**< the pointer to Com_CycleTimeCnt */
#define Com_GetCyclicSendRequestOfPCConfig()                          Com_CyclicSendRequest.raw  /**< the pointer to Com_CyclicSendRequest */
#define Com_GetDelayTimeCntOfPCConfig()                               Com_DelayTimeCnt.raw  /**< the pointer to Com_DelayTimeCnt */
#define Com_GetHandleRxPduDeferredOfPCConfig()                        Com_HandleRxPduDeferred.raw  /**< the pointer to Com_HandleRxPduDeferred */
#define Com_GetHandleTxPduDeferredOfPCConfig()                        Com_HandleTxPduDeferred  /**< the pointer to Com_HandleTxPduDeferred */
#define Com_GetInitializedOfPCConfig()                                Com_Initialized  /**< the pointer to Com_Initialized */
#define Com_GetPduGrpCntOfPCConfig()                                  2UL
#define Com_GetPduGrpVectorOfPCConfig()                               Com_PduGrpVector  /**< the pointer to Com_PduGrpVector */
#define Com_GetRepCntOfPCConfig()                                     Com_RepCnt.raw  /**< the pointer to Com_RepCnt */
#define Com_GetRepCycleCntOfPCConfig()                                Com_RepCycleCnt.raw  /**< the pointer to Com_RepCycleCnt */
#define Com_GetRxAccessInfoIndOfPCConfig()                            Com_RxAccessInfoInd  /**< the pointer to Com_RxAccessInfoInd */
#define Com_GetRxAccessInfoOfPCConfig()                               Com_RxAccessInfo  /**< the pointer to Com_RxAccessInfo */
#define Com_GetRxDefPduBufferOfPCConfig()                             Com_RxDefPduBuffer.raw  /**< the pointer to Com_RxDefPduBuffer */
#define Com_GetRxDlMonDivisorCounterOfPCConfig()                      Com_RxDlMonDivisorCounter  /**< the pointer to Com_RxDlMonDivisorCounter */
#define Com_GetRxPduGrpActiveOfPCConfig()                             Com_RxPduGrpActive  /**< the pointer to Com_RxPduGrpActive */
#define Com_GetRxPduGrpInfoOfPCConfig()                               Com_RxPduGrpInfo  /**< the pointer to Com_RxPduGrpInfo */
#define Com_GetRxPduInfoOfPCConfig()                                  Com_RxPduInfo  /**< the pointer to Com_RxPduInfo */
#define Com_GetRxSigBufferXInt8OfPCConfig()                           Com_RxSigBufferXInt8.raw  /**< the pointer to Com_RxSigBufferXInt8 */
#define Com_GetRxSigInfoOfPCConfig()                                  Com_RxSigInfo  /**< the pointer to Com_RxSigInfo */
#define Com_GetSizeOfConstValueXInt8OfPCConfig()                      1U  /**< the number of accomplishable value elements in Com_ConstValueXInt8 */
#define Com_GetSizeOfHandleRxPduDeferredOfPCConfig()                  1U  /**< the number of accomplishable value elements in Com_HandleRxPduDeferred */
#define Com_GetSizeOfPduGrpVectorOfPCConfig()                         2U  /**< the number of accomplishable value elements in Com_PduGrpVector */
#define Com_GetSizeOfRxAccessInfoIndOfPCConfig()                      2U  /**< the number of accomplishable value elements in Com_RxAccessInfoInd */
#define Com_GetSizeOfRxAccessInfoOfPCConfig()                         2U  /**< the number of accomplishable value elements in Com_RxAccessInfo */
#define Com_GetSizeOfRxDefPduBufferOfPCConfig()                       1U  /**< the number of accomplishable value elements in Com_RxDefPduBuffer */
#define Com_GetSizeOfRxPduGrpInfoOfPCConfig()                         1U  /**< the number of accomplishable value elements in Com_RxPduGrpInfo */
#define Com_GetSizeOfRxPduInfoOfPCConfig()                            1U  /**< the number of accomplishable value elements in Com_RxPduInfo */
#define Com_GetSizeOfRxSigBufferXInt8OfPCConfig()                     2U  /**< the number of accomplishable value elements in Com_RxSigBufferXInt8 */
#define Com_GetSizeOfRxSigInfoOfPCConfig()                            2U  /**< the number of accomplishable value elements in Com_RxSigInfo */
#define Com_GetSizeOfTxModeInfoOfPCConfig()                           1U  /**< the number of accomplishable value elements in Com_TxModeInfo */
#define Com_GetSizeOfTxModeTrueOfPCConfig()                           1U  /**< the number of accomplishable value elements in Com_TxModeTrue */
#define Com_GetSizeOfTxPduBufferOfPCConfig()                          1U  /**< the number of accomplishable value elements in Com_TxPduBuffer */
#define Com_GetSizeOfTxPduGrpInfoOfPCConfig()                         1U  /**< the number of accomplishable value elements in Com_TxPduGrpInfo */
#define Com_GetSizeOfTxPduInfoOfPCConfig()                            1U  /**< the number of accomplishable value elements in Com_TxPduInfo */
#define Com_GetSizeOfTxPduInitValueOfPCConfig()                       1U  /**< the number of accomplishable value elements in Com_TxPduInitValue */
#define Com_GetSizeOfTxSigInfoOfPCConfig()                            1U  /**< the number of accomplishable value elements in Com_TxSigInfo */
#define Com_GetTransmitRequestOfPCConfig()                            Com_TransmitRequest.raw  /**< the pointer to Com_TransmitRequest */
#define Com_GetTxCycleCounterDivisorCounterOfPCConfig()               Com_TxCycleCounterDivisorCounter  /**< the pointer to Com_TxCycleCounterDivisorCounter */
#define Com_GetTxCycleCounterDivisorOfPCConfig()                      10U  /**< Divisor for DefinitionRef: /MICROSAR/Com/ComConfig/ComTimeBase/ComTxCycleCounterTimeBase */
#define Com_GetTxDlMonDivisorCounterOfPCConfig()                      Com_TxDlMonDivisorCounter  /**< the pointer to Com_TxDlMonDivisorCounter */
#define Com_GetTxModeInfoOfPCConfig()                                 Com_TxModeInfo  /**< the pointer to Com_TxModeInfo */
#define Com_GetTxModeTrueOfPCConfig()                                 Com_TxModeTrue  /**< the pointer to Com_TxModeTrue */
#define Com_GetTxPduBufferOfPCConfig()                                Com_TxPduBuffer.raw  /**< the pointer to Com_TxPduBuffer */
#define Com_GetTxPduGrpActiveOfPCConfig()                             Com_TxPduGrpActive  /**< the pointer to Com_TxPduGrpActive */
#define Com_GetTxPduGrpInfoOfPCConfig()                               Com_TxPduGrpInfo  /**< the pointer to Com_TxPduGrpInfo */
#define Com_GetTxPduInfoOfPCConfig()                                  Com_TxPduInfo  /**< the pointer to Com_TxPduInfo */
#define Com_GetTxPduInitValueOfPCConfig()                             Com_TxPduInitValue  /**< the pointer to Com_TxPduInitValue */
#define Com_GetTxSduLengthOfPCConfig()                                Com_TxSduLength  /**< the pointer to Com_TxSduLength */
#define Com_GetTxSigInfoOfPCConfig()                                  Com_TxSigInfo  /**< the pointer to Com_TxSigInfo */
#define Com_GetWaitingForConfirmationOfPCConfig()                     Com_WaitingForConfirmation  /**< the pointer to Com_WaitingForConfirmation */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGetDuplicatedRootDataMacros  Com Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define Com_GetSizeOfCurrentTxModeOfPCConfig()                        Com_GetSizeOfTxModeInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_CurrentTxMode */
#define Com_GetSizeOfCycleTimeCntOfPCConfig()                         Com_GetSizeOfTxModeInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_CycleTimeCnt */
#define Com_GetSizeOfCyclicSendRequestOfPCConfig()                    Com_GetSizeOfTxModeInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_CyclicSendRequest */
#define Com_GetSizeOfDelayTimeCntOfPCConfig()                         Com_GetSizeOfTxModeInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_DelayTimeCnt */
#define Com_GetSizeOfHandleTxPduDeferredOfPCConfig()                  Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_HandleTxPduDeferred */
#define Com_GetSizeOfRepCntOfPCConfig()                               Com_GetSizeOfTxModeInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RepCnt */
#define Com_GetSizeOfRepCycleCntOfPCConfig()                          Com_GetSizeOfTxModeInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RepCycleCnt */
#define Com_GetSizeOfRxPduGrpActiveOfPCConfig()                       Com_GetSizeOfRxPduGrpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_RxPduGrpActive */
#define Com_GetSizeOfTransmitRequestOfPCConfig()                      Com_GetSizeOfTxModeInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TransmitRequest */
#define Com_GetSizeOfTxPduGrpActiveOfPCConfig()                       Com_GetSizeOfTxPduGrpInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxPduGrpActive */
#define Com_GetSizeOfTxSduLengthOfPCConfig()                          Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_TxSduLength */
#define Com_GetSizeOfWaitingForConfirmationOfPCConfig()               Com_GetSizeOfTxPduInfoOfPCConfig()  /**< the number of accomplishable value elements in Com_WaitingForConfirmation */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGetDataMacros  Com Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Com_GetCbkInvFuncPtr(Index)                                   
#define Com_GetCbkRxAckFuncPtr(Index)                                 
#define Com_GetCbkRxTOutFuncPtr(Index)                                
#define Com_GetCbkRxTOutFuncPtrInd(Index)                             
#define Com_GetCbkTxAckDefFuncPtr(Index)                              
#define Com_GetCbkTxAckDefFuncPtrInd(Index)                           
#define Com_GetCbkTxAckImFuncPtr(Index)                               
#define Com_GetCbkTxAckImFuncPtrInd(Index)                            
#define Com_GetCbkTxErrFuncPtr(Index)                                 
#define Com_GetCbkTxErrFuncPtrInd(Index)                              
#define Com_GetCbkTxTOutFuncPtr(Index)                                
#define Com_GetCbkTxTOutFuncPtrInd(Index)                             
#define Com_GetConstValueXInt16(Index)                                
#define Com_GetConstValueXInt32(Index)                                
#define Com_GetConstValueXInt8(Index)                                 (Com_GetConstValueXInt8OfPCConfig()[(Index)])
#define Com_IsCurrentTxMode(Index)                                    ((Com_GetCurrentTxModeOfPCConfig()[(Index)]) != FALSE)
#define Com_GetCycleTimeCnt(Index)                                    (Com_GetCycleTimeCntOfPCConfig()[(Index)])
#define Com_IsCyclicSendRequest(Index)                                ((Com_GetCyclicSendRequestOfPCConfig()[(Index)]) != FALSE)
#define Com_GetDeferredGwMappingEvent(Index)                          
#define Com_GetRxPduInfoIdxOfDeferredGwMappingInfo(Index)             
#define Com_GetDelayTimeCnt(Index)                                    (Com_GetDelayTimeCntOfPCConfig()[(Index)])
#define Com_GetApplTypeOfFilterInfo(Index)                            
#define Com_GetFilterAlgoOfFilterInfo(Index)                          
#define Com_GetFilterParamIdxOfFilterInfo(Index)                      
#define Com_IsFilterParamUsedOfFilterInfo(Index)                      
#define Com_GetLengthOfFilterInfo(Index)                              
#define Com_GetDestinationBytePositionOfGwDescriptionAccessInfo(Index) 
#define Com_GetMaskLengthOfGwDescriptionAccessInfo(Index)             
#define Com_GetSourceBytePositionOfGwDescriptionAccessInfo(Index)     
#define Com_GetSourceDescriptionMaskEndIdxOfGwDescriptionAccessInfo(Index) 
#define Com_GetSourceDescriptionMaskStartIdxOfGwDescriptionAccessInfo(Index) 
#define Com_IsSourceDescriptionMaskUsedOfGwDescriptionAccessInfo(Index) 
#define Com_GetTypeOfGwDescriptionAccessInfo(Index)                   
#define Com_GettxPduIdOfGwDescriptionAccessInfo(Index)                
#define Com_IsGwEvent(Index)                                          
#define Com_GetRxAccessInfoIdxOfGwGrpSigMapping(Index)                
#define Com_GetTxSigIdOfGwGrpSigMapping(Index)                        
#define Com_GetGwSigGrpMappingEndIdxOfGwInfo(Index)                   
#define Com_GetGwSigGrpMappingStartIdxOfGwInfo(Index)                 
#define Com_IsGwSigGrpMappingUsedOfGwInfo(Index)                      
#define Com_GetGwSigMappingEndIdxOfGwInfo(Index)                      
#define Com_GetGwSigMappingStartIdxOfGwInfo(Index)                    
#define Com_IsGwSigMappingUsedOfGwInfo(Index)                         
#define Com_GetGwRoutingTimeoutCounter(Index)                         
#define Com_GetGwGrpSigMappingEndIdxOfGwSigGrpMapping(Index)          
#define Com_GetGwGrpSigMappingStartIdxOfGwSigGrpMapping(Index)        
#define Com_GetTxSigGrpIdOfGwSigGrpMapping(Index)                     
#define Com_GetRxAccessInfoIdxOfGwSigMapping(Index)                   
#define Com_GetTxSigIdOfGwSigMapping(Index)                           
#define Com_GetGwRoutingTimeoutFactorOfGwTimeoutInfo(Index)           
#define Com_GetTxPduInfoIdxOfGwTimeoutInfo(Index)                     
#define Com_GetGwDescriptionAccessInfoEndIdxOfGwTxPduDescriptionInfo(Index) 
#define Com_GetGwDescriptionAccessInfoStartIdxOfGwTxPduDescriptionInfo(Index) 
#define Com_GetHandleRxDeferredGwDescription(Index)                   
#define Com_GetHandleRxPduDeferred(Index)                             (Com_GetHandleRxPduDeferredOfPCConfig()[(Index)])
#define Com_IsHandleTxPduDeferred(Index)                              ((Com_GetHandleTxPduDeferredOfPCConfig()[(Index)]) != FALSE)
#define Com_GetIPduGroupInfoToSubIPduGroupsIndEndIdxOfIPduGroupInfo(Index) 
#define Com_GetIPduGroupInfoToSubIPduGroupsIndStartIdxOfIPduGroupInfo(Index) 
#define Com_IsIPduGroupInfoToSubIPduGroupsIndUsedOfIPduGroupInfo(Index) 
#define Com_IsInvalidHndOfIPduGroupInfo(Index)                        
#define Com_GetRxPduInfoIndEndIdxOfIPduGroupInfo(Index)               
#define Com_GetRxPduInfoIndStartIdxOfIPduGroupInfo(Index)             
#define Com_IsRxPduInfoIndUsedOfIPduGroupInfo(Index)                  
#define Com_GetTxPduInfoIndEndIdxOfIPduGroupInfo(Index)               
#define Com_GetTxPduInfoIndStartIdxOfIPduGroupInfo(Index)             
#define Com_IsTxPduInfoIndUsedOfIPduGroupInfo(Index)                  
#define Com_GetIPduGroupInfoOfRxPduInfoInd(Index)                     
#define Com_GetIPduGroupInfoOfTxPduInfoInd(Index)                     
#define Com_GetIPduGroupInfoToSubIPduGroupsInd(Index)                 
#define Com_GetIPduGroupState(Index)                                  
#define Com_IsInitialized()                                           ((Com_GetInitializedOfPCConfig()) != FALSE)
#define Com_GetRepCnt(Index)                                          (Com_GetRepCntOfPCConfig()[(Index)])
#define Com_GetRepCycleCnt(Index)                                     (Com_GetRepCycleCntOfPCConfig()[(Index)])
#define Com_GetGwInfoIdxOfRxAccessInfo(Index)                         
#define Com_IsGwInfoUsedOfRxAccessInfo(Index)                         
#define Com_IsInvalidHndOfRxAccessInfo(Index)                         
#define Com_GetShdBufferIdxOfRxAccessInfo(Index)                      
#define Com_IsShdBufferUsedOfRxAccessInfo(Index)                      
#define Com_IsSignExtRequiredOfRxAccessInfo(Index)                    
#define Com_GetRxAccessInfoReplaceGrpSigInd(Index)                    
#define Com_GetRxAccessInfoReplaceSigInd(Index)                       
#define Com_GetRxDefPduBuffer(Index)                                  (Com_GetRxDefPduBufferOfPCConfig()[(Index)])
#define Com_GetRxDeferredEventCache(Index)                            
#define Com_GetRxDlMonDivisorCounter()                                (Com_GetRxDlMonDivisorCounterOfPCConfig())
#define Com_GetRxDynSignalLength(Index)                               
#define Com_GetRxDynSignalTmpLengthForSignalGroups(Index)             
#define Com_GetFilterInfoIdxOfRxGrpSigInfo(Index)                     
#define Com_IsFilterInfoUsedOfRxGrpSigInfo(Index)                     
#define Com_GetInvValueIdxOfRxGrpSigInfo(Index)                       
#define Com_IsInvValueUsedOfRxGrpSigInfo(Index)                       
#define Com_GetRxAccessInfoIdxOfRxGrpSigInfo(Index)                   
#define Com_GetTmpBufferIdxOfRxGrpSigInfo(Index)                      
#define Com_IsTmpBufferUsedOfRxGrpSigInfo(Index)                      
#define Com_GetRxNextEventCacheEnty()                                 
#define Com_GetRxPduCalloutFuncPtr(Index)                             
#define Com_GetRxPduDmState(Index)                                    
#define Com_IsRxPduGrpActive(Index)                                   ((Com_GetRxPduGrpActiveOfPCConfig()[(Index)]) != FALSE)
#define Com_GetGwInfoEndIdxOfRxPduInfo(Index)                         
#define Com_GetGwInfoStartIdxOfRxPduInfo(Index)                       
#define Com_IsGwInfoUsedOfRxPduInfo(Index)                            
#define Com_GetGwTxPduDescriptionInfoEndIdxOfRxPduInfo(Index)         
#define Com_GetGwTxPduDescriptionInfoStartIdxOfRxPduInfo(Index)       
#define Com_IsGwTxPduDescriptionInfoUsedOfRxPduInfo(Index)            
#define Com_GetHandleRxDeferredGwDescriptionIdxOfRxPduInfo(Index)     
#define Com_IsHandleRxDeferredGwDescriptionUsedOfRxPduInfo(Index)     
#define Com_GetIPduGroupInfoOfRxPduInfoIndEndIdxOfRxPduInfo(Index)    
#define Com_GetIPduGroupInfoOfRxPduInfoIndStartIdxOfRxPduInfo(Index)  
#define Com_IsIPduGroupInfoOfRxPduInfoIndUsedOfRxPduInfo(Index)       
#define Com_IsInvalidHndOfRxPduInfo(Index)                            
#define Com_GetRxPduCalloutFuncPtrIdxOfRxPduInfo(Index)               
#define Com_IsRxPduCalloutFuncPtrUsedOfRxPduInfo(Index)               
#define Com_GetRxSigGrpInfoIndEndIdxOfRxPduInfo(Index)                
#define Com_GetRxSigGrpInfoIndStartIdxOfRxPduInfo(Index)              
#define Com_IsRxSigGrpInfoIndUsedOfRxPduInfo(Index)                   
#define Com_GetRxTOutInfoIdxOfRxPduInfo(Index)                        
#define Com_GetRxTOutInfoIndEndIdxOfRxPduInfo(Index)                  
#define Com_GetRxTOutInfoIndStartIdxOfRxPduInfo(Index)                
#define Com_IsRxTOutInfoIndUsedOfRxPduInfo(Index)                     
#define Com_IsRxTOutInfoUsedOfRxPduInfo(Index)                        
#define Com_GetRxTpInfoIdxOfRxPduInfo(Index)                          
#define Com_IsRxTpInfoUsedOfRxPduInfo(Index)                          
#define Com_GetRxPduInfoInd(Index)                                    
#define Com_GetRxShdBufferXInt16(Index)                               
#define Com_GetRxShdBufferXInt32(Index)                               
#define Com_GetRxShdBufferXInt8(Index)                                
#define Com_GetRxSigBufferXInt16(Index)                               
#define Com_GetRxSigBufferXInt32(Index)                               
#define Com_GetRxSigBufferXInt8(Index)                                (Com_GetRxSigBufferXInt8OfPCConfig()[(Index)])
#define Com_IsArrayAccessUsedOfRxSigGrpInfo(Index)                    
#define Com_GetCbkInvFuncPtrIdxOfRxSigGrpInfo(Index)                  
#define Com_IsCbkInvFuncPtrUsedOfRxSigGrpInfo(Index)                  
#define Com_GetCbkRxAckFuncPtrIdxOfRxSigGrpInfo(Index)                
#define Com_IsCbkRxAckFuncPtrUsedOfRxSigGrpInfo(Index)                
#define Com_GetConstValueXInt8EndIdxOfRxSigGrpInfo(Index)             
#define Com_GetConstValueXInt8LengthOfRxSigGrpInfo(Index)             
#define Com_GetConstValueXInt8StartIdxOfRxSigGrpInfo(Index)           
#define Com_IsConstValueXInt8UsedOfRxSigGrpInfo(Index)                
#define Com_IsFilterEventOfRxSigGrpInfo(Index)                        
#define Com_GetGwInfoIdxOfRxSigGrpInfo(Index)                         
#define Com_IsGwInfoUsedOfRxSigGrpInfo(Index)                         
#define Com_IsInvEventOfRxSigGrpInfo(Index)                           
#define Com_IsInvalidHndOfRxSigGrpInfo(Index)                         
#define Com_GetRxGrpSigInfoEndIdxOfRxSigGrpInfo(Index)                
#define Com_GetRxGrpSigInfoStartIdxOfRxSigGrpInfo(Index)              
#define Com_GetRxPduInfoIdxOfRxSigGrpInfo(Index)                      
#define Com_IsRxPduInfoUsedOfRxSigGrpInfo(Index)                      
#define Com_GetRxShdBufferXInt8EndIdxOfRxSigGrpInfo(Index)            
#define Com_GetRxShdBufferXInt8LengthOfRxSigGrpInfo(Index)            
#define Com_GetRxShdBufferXInt8StartIdxOfRxSigGrpInfo(Index)          
#define Com_IsRxShdBufferXInt8UsedOfRxSigGrpInfo(Index)               
#define Com_GetRxTOutInfoIdxOfRxSigGrpInfo(Index)                     
#define Com_IsRxTOutInfoUsedOfRxSigGrpInfo(Index)                     
#define Com_GetSignalProcessingOfRxSigGrpInfo(Index)                  
#define Com_GetStartBytePositionOfRxSigGrpInfo(Index)                 
#define Com_GetUbIdxOfRxSigGrpInfo(Index)                             
#define Com_GetUbMaskIdxOfRxSigGrpInfo(Index)                         
#define Com_IsUbMaskUsedOfRxSigGrpInfo(Index)                         
#define Com_GetValidDlcOfRxSigGrpInfo(Index)                          
#define Com_GetRxSigGrpInfoInd(Index)                                 
#define Com_GetCbkInvFuncPtrIdxOfRxSigInfo(Index)                     
#define Com_IsCbkInvFuncPtrUsedOfRxSigInfo(Index)                     
#define Com_GetCbkRxAckFuncPtrIdxOfRxSigInfo(Index)                   
#define Com_IsCbkRxAckFuncPtrUsedOfRxSigInfo(Index)                   
#define Com_GetFilterInfoIdxOfRxSigInfo(Index)                        
#define Com_IsFilterInfoUsedOfRxSigInfo(Index)                        
#define Com_GetGwInfoIdxOfRxSigInfo(Index)                            
#define Com_IsGwInfoUsedOfRxSigInfo(Index)                            
#define Com_GetInvValueIdxOfRxSigInfo(Index)                          
#define Com_IsInvValueUsedOfRxSigInfo(Index)                          
#define Com_GetRxTOutInfoIdxOfRxSigInfo(Index)                        
#define Com_IsRxTOutInfoUsedOfRxSigInfo(Index)                        
#define Com_GetUbIdxOfRxSigInfo(Index)                                
#define Com_GetUbMaskIdxOfRxSigInfo(Index)                            
#define Com_IsUbMaskUsedOfRxSigInfo(Index)                            
#define Com_GetRxTOutCnt(Index)                                       
#define Com_GetCbkRxTOutFuncPtrIndEndIdxOfRxTOutInfo(Index)           
#define Com_GetCbkRxTOutFuncPtrIndStartIdxOfRxTOutInfo(Index)         
#define Com_IsCbkRxTOutFuncPtrIndUsedOfRxTOutInfo(Index)              
#define Com_GetFactorOfRxTOutInfo(Index)                              
#define Com_GetFirstFactorOfRxTOutInfo(Index)                         
#define Com_GetRxAccessInfoReplaceGrpSigIndEndIdxOfRxTOutInfo(Index)  
#define Com_GetRxAccessInfoReplaceGrpSigIndStartIdxOfRxTOutInfo(Index) 
#define Com_IsRxAccessInfoReplaceGrpSigIndUsedOfRxTOutInfo(Index)     
#define Com_GetRxAccessInfoReplaceSigIndEndIdxOfRxTOutInfo(Index)     
#define Com_GetRxAccessInfoReplaceSigIndStartIdxOfRxTOutInfo(Index)   
#define Com_IsRxAccessInfoReplaceSigIndUsedOfRxTOutInfo(Index)        
#define Com_GetRxPduInfoIdxOfRxTOutInfo(Index)                        
#define Com_GetRxTOutInfoInd(Index)                                   
#define Com_GetRxTpBuffer(Index)                                      
#define Com_GetRxTpConnectionState(Index)                             
#define Com_GetBufferSizeOfRxTpInfo(Index)                            
#define Com_GetRxAccessInfoDynSigIdxOfRxTpInfo(Index)                 
#define Com_IsRxAccessInfoDynSigUsedOfRxTpInfo(Index)                 
#define Com_GetRxTpBufferEndIdxOfRxTpInfo(Index)                      
#define Com_GetRxTpBufferStartIdxOfRxTpInfo(Index)                    
#define Com_IsRxTpBufferUsedOfRxTpInfo(Index)                         
#define Com_GetRxTpSduLength(Index)                                   
#define Com_GetRxTpWrittenBytesCounter(Index)                         
#define Com_GetSigGrpEventFlag(Index)                                 
#define Com_GetSourceDescriptionMask(Index)                           
#define Com_GetTmpRxBuffer(Index)                                     
#define Com_GetTmpRxShdBufferXInt16(Index)                            
#define Com_GetTmpRxShdBufferXInt32(Index)                            
#define Com_GetTmpRxShdBufferXInt8(Index)                             
#define Com_IsTransmitRequest(Index)                                  ((Com_GetTransmitRequestOfPCConfig()[(Index)]) != FALSE)
#define Com_GetTxCycleCounterDivisorCounter()                         (Com_GetTxCycleCounterDivisorCounterOfPCConfig())
#define Com_GetTxDlMonDivisorCounter()                                (Com_GetTxDlMonDivisorCounterOfPCConfig())
#define Com_GetTxDynSignalLength(Index)                               
#define Com_IsTxFilterInitState(Index)                                
#define Com_GetTxFilterInitValueXInt16(Index)                         
#define Com_GetTxFilterInitValueXInt32(Index)                         
#define Com_GetTxFilterInitValueXInt8(Index)                          
#define Com_GetTxFilterOldValueXInt16(Index)                          
#define Com_GetTxFilterOldValueXInt32(Index)                          
#define Com_GetTxFilterOldValueXInt8(Index)                           
#define Com_IsTxFilterState(Index)                                    
#define Com_IsDirectOfTxModeFalse(Index)                              
#define Com_IsPeriodicOfTxModeFalse(Index)                            
#define Com_GetRepCntOfTxModeFalse(Index)                             
#define Com_GetRepPeriodOfTxModeFalse(Index)                          
#define Com_GetTimeOffsetOfTxModeFalse(Index)                         
#define Com_GetTimePeriodOfTxModeFalse(Index)                         
#define Com_IsInvalidHndOfTxModeInfo(Index)                           
#define Com_GetMinimumDelayOfTxModeInfo(Index)                        
#define Com_GetTxFilterInitStateEndIdxOfTxModeInfo(Index)             
#define Com_GetTxFilterInitStateStartIdxOfTxModeInfo(Index)           
#define Com_IsTxFilterInitStateUsedOfTxModeInfo(Index)                
#define Com_GetTxModeFalseIdxOfTxModeInfo(Index)                      
#define Com_IsTxModeFalseUsedOfTxModeInfo(Index)                      
#define Com_GetTxSigInfoFilterInitValueIndEndIdxOfTxModeInfo(Index)   
#define Com_GetTxSigInfoFilterInitValueIndStartIdxOfTxModeInfo(Index) 
#define Com_IsTxSigInfoFilterInitValueIndUsedOfTxModeInfo(Index)      
#define Com_IsDirectOfTxModeTrue(Index)                               
#define Com_GetRepCntOfTxModeTrue(Index)                              
#define Com_GetRepPeriodOfTxModeTrue(Index)                           
#define Com_GetTimeOffsetOfTxModeTrue(Index)                          
#define Com_GetTxPduBuffer(Index)                                     (Com_GetTxPduBufferOfPCConfig()[(Index)])
#define Com_GetTxPduCalloutFuncPtr(Index)                             
#define Com_IsTxPduGrpActive(Index)                                   ((Com_GetTxPduGrpActiveOfPCConfig()[(Index)]) != FALSE)
#define Com_IsCancellationSupportOfTxPduInfo(Index)                   
#define Com_GetCbkTxAckDefFuncPtrIndEndIdxOfTxPduInfo(Index)          
#define Com_GetCbkTxAckDefFuncPtrIndStartIdxOfTxPduInfo(Index)        
#define Com_IsCbkTxAckDefFuncPtrIndUsedOfTxPduInfo(Index)             
#define Com_GetCbkTxAckImFuncPtrIndEndIdxOfTxPduInfo(Index)           
#define Com_GetCbkTxAckImFuncPtrIndStartIdxOfTxPduInfo(Index)         
#define Com_IsCbkTxAckImFuncPtrIndUsedOfTxPduInfo(Index)              
#define Com_GetCbkTxErrFuncPtrIndEndIdxOfTxPduInfo(Index)             
#define Com_GetCbkTxErrFuncPtrIndStartIdxOfTxPduInfo(Index)           
#define Com_IsCbkTxErrFuncPtrIndUsedOfTxPduInfo(Index)                
#define Com_GetClrUbOfTxPduInfo(Index)                                
#define Com_GetConstValueXInt8UbClearMaskEndIdxOfTxPduInfo(Index)     
#define Com_GetConstValueXInt8UbClearMaskStartIdxOfTxPduInfo(Index)   
#define Com_IsConstValueXInt8UbClearMaskUsedOfTxPduInfo(Index)        
#define Com_GetGwTimeoutInfoIdxOfTxPduInfo(Index)                     
#define Com_IsGwTimeoutInfoUsedOfTxPduInfo(Index)                     
#define Com_GetIPduGroupInfoOfTxPduInfoIndEndIdxOfTxPduInfo(Index)    
#define Com_GetIPduGroupInfoOfTxPduInfoIndStartIdxOfTxPduInfo(Index)  
#define Com_IsIPduGroupInfoOfTxPduInfoIndUsedOfTxPduInfo(Index)       
#define Com_IsInvalidHndOfTxPduInfo(Index)                            
#define Com_GetTxPduBufferMetaDataEndIdxOfTxPduInfo(Index)            
#define Com_GetTxPduBufferMetaDataStartIdxOfTxPduInfo(Index)          
#define Com_IsTxPduBufferMetaDataUsedOfTxPduInfo(Index)               
#define Com_GetTxPduCalloutFuncPtrIdxOfTxPduInfo(Index)               
#define Com_IsTxPduCalloutFuncPtrUsedOfTxPduInfo(Index)               
#define Com_GetTxPduInitValueMetaDataEndIdxOfTxPduInfo(Index)         
#define Com_GetTxPduInitValueMetaDataStartIdxOfTxPduInfo(Index)       
#define Com_IsTxPduInitValueMetaDataUsedOfTxPduInfo(Index)            
#define Com_GetTxPduTTCalloutFuncPtrIdxOfTxPduInfo(Index)             
#define Com_IsTxPduTTCalloutFuncPtrUsedOfTxPduInfo(Index)             
#define Com_GetTxSigGrpInfoIndEndIdxOfTxPduInfo(Index)                
#define Com_GetTxSigGrpInfoIndStartIdxOfTxPduInfo(Index)              
#define Com_IsTxSigGrpInfoIndUsedOfTxPduInfo(Index)                   
#define Com_GetTxTOutInfoIdxOfTxPduInfo(Index)                        
#define Com_IsTxTOutInfoUsedOfTxPduInfo(Index)                        
#define Com_GetTxTpInfoIdxOfTxPduInfo(Index)                          
#define Com_IsTxTpInfoUsedOfTxPduInfo(Index)                          
#define Com_GetTxPduInfoInd(Index)                                    
#define Com_GetTxPduInitValue(Index)                                  (Com_GetTxPduInitValueOfPCConfig()[(Index)])
#define Com_GetTxPduTTCalloutFuncPtr(Index)                           
#define Com_GetTxSduLength(Index)                                     (Com_GetTxSduLengthOfPCConfig()[(Index)])
#define Com_GetTxShdBuffer(Index)                                     
#define Com_IsArrayAccessUsedOfTxSigGrpInfo(Index)                    
#define Com_IsInvalidHndOfTxSigGrpInfo(Index)                         
#define Com_GetPduIdOfTxSigGrpInfo(Index)                             
#define Com_GetPduOffsetOfTxSigGrpInfo(Index)                         
#define Com_GetSigGroupOnChangeOffsetOfTxSigGrpInfo(Index)            
#define Com_GetSigGroupOnChangeStartPositionOfTxSigGrpInfo(Index)     
#define Com_GetSigGroupOnChangeWithoutRepOffsetOfTxSigGrpInfo(Index)  
#define Com_GetSigGroupOnChangeWithoutRepStartPositionOfTxSigGrpInfo(Index) 
#define Com_GetTransferPropertyOfTxSigGrpInfo(Index)                  
#define Com_GetTxShdBufferEndIdxOfTxSigGrpInfo(Index)                 
#define Com_GetTxShdBufferLengthOfTxSigGrpInfo(Index)                 
#define Com_GetTxShdBufferStartIdxOfTxSigGrpInfo(Index)               
#define Com_IsTxShdBufferUsedOfTxSigGrpInfo(Index)                    
#define Com_GetTxSigGrpMaskEndIdxOfTxSigGrpInfo(Index)                
#define Com_GetTxSigGrpMaskLengthOfTxSigGrpInfo(Index)                
#define Com_GetTxSigGrpMaskStartIdxOfTxSigGrpInfo(Index)              
#define Com_IsTxSigGrpMaskUsedOfTxSigGrpInfo(Index)                   
#define Com_GetTxSigGrpOnChangeMaskOnChangeEndIdxOfTxSigGrpInfo(Index) 
#define Com_GetTxSigGrpOnChangeMaskOnChangeLengthOfTxSigGrpInfo(Index) 
#define Com_GetTxSigGrpOnChangeMaskOnChangeStartIdxOfTxSigGrpInfo(Index) 
#define Com_IsTxSigGrpOnChangeMaskOnChangeUsedOfTxSigGrpInfo(Index)   
#define Com_GetTxSigGrpOnChangeMaskOnChangeWithoutRepEndIdxOfTxSigGrpInfo(Index) 
#define Com_GetTxSigGrpOnChangeMaskOnChangeWithoutRepLengthOfTxSigGrpInfo(Index) 
#define Com_GetTxSigGrpOnChangeMaskOnChangeWithoutRepStartIdxOfTxSigGrpInfo(Index) 
#define Com_IsTxSigGrpOnChangeMaskOnChangeWithoutRepUsedOfTxSigGrpInfo(Index) 
#define Com_GetTxSigInfoInvValueIndEndIdxOfTxSigGrpInfo(Index)        
#define Com_GetTxSigInfoInvValueIndStartIdxOfTxSigGrpInfo(Index)      
#define Com_IsTxSigInfoInvValueIndUsedOfTxSigGrpInfo(Index)           
#define Com_GetTxTOutInfoIdxOfTxSigGrpInfo(Index)                     
#define Com_IsTxTOutInfoUsedOfTxSigGrpInfo(Index)                     
#define Com_GetUbIdxOfTxSigGrpInfo(Index)                             
#define Com_GetUbMaskIdxOfTxSigGrpInfo(Index)                         
#define Com_IsUbMaskUsedOfTxSigGrpInfo(Index)                         
#define Com_GetTxSigGrpInfoInd(Index)                                 
#define Com_GetTxSigGrpMask(Index)                                    
#define Com_GetTxSigGrpOnChangeMask(Index)                            
#define Com_GetFilterInfoIdxOfTxSigInfo(Index)                        
#define Com_IsFilterInfoUsedOfTxSigInfo(Index)                        
#define Com_GetFilterInitValueIdxOfTxSigInfo(Index)                   
#define Com_IsFilterInitValueUsedOfTxSigInfo(Index)                   
#define Com_GetInvValueIdxOfTxSigInfo(Index)                          
#define Com_IsInvValueUsedOfTxSigInfo(Index)                          
#define Com_IsInvalidHndOfTxSigInfo(Index)                            
#define Com_GetOnChangeIdxOfTxSigInfo(Index)                          
#define Com_IsOnChangeUsedOfTxSigInfo(Index)                          
#define Com_IsTriggeredOfTxSigInfo(Index)                             
#define Com_GetTxFilterInitStateIdxOfTxSigInfo(Index)                 
#define Com_IsTxFilterInitStateUsedOfTxSigInfo(Index)                 
#define Com_GetTxSigGrpInfoIdxOfTxSigInfo(Index)                      
#define Com_IsTxSigGrpInfoUsedOfTxSigInfo(Index)                      
#define Com_GetTxTOutInfoIdxOfTxSigInfo(Index)                        
#define Com_IsTxTOutInfoUsedOfTxSigInfo(Index)                        
#define Com_GetUbIdxOfTxSigInfo(Index)                                
#define Com_GetUbMaskIdxOfTxSigInfo(Index)                            
#define Com_IsUbMaskUsedOfTxSigInfo(Index)                            
#define Com_IsWithoutRepOfTxSigInfo(Index)                            
#define Com_GetTxSigInfoFilterInitValueInd(Index)                     
#define Com_GetTxSigInfoInvValueInd(Index)                            
#define Com_GetTxTOutCnt(Index)                                       
#define Com_GetCbkTxTOutFuncPtrIndEndIdxOfTxTOutInfo(Index)           
#define Com_GetCbkTxTOutFuncPtrIndStartIdxOfTxTOutInfo(Index)         
#define Com_IsCbkTxTOutFuncPtrIndUsedOfTxTOutInfo(Index)              
#define Com_GetFactorOfTxTOutInfo(Index)                              
#define Com_IsNoneModeOfTxTOutInfo(Index)                             
#define Com_GetTxPduInfoIdxOfTxTOutInfo(Index)                        
#define Com_GetTxTmpTpPduLength(Index)                                
#define Com_GetTxTpConnectionState(Index)                             
#define Com_GetBufferSizeOfTxTpInfo(Index)                            
#define Com_GetTxPduBufferEndIdxOfTxTpInfo(Index)                     
#define Com_GetTxPduBufferLengthOfTxTpInfo(Index)                     
#define Com_GetTxPduBufferStartIdxOfTxTpInfo(Index)                   
#define Com_IsTxPduBufferUsedOfTxTpInfo(Index)                        
#define Com_GetTxSigInfoDynSigIdxOfTxTpInfo(Index)                    
#define Com_IsTxSigInfoDynSigUsedOfTxTpInfo(Index)                    
#define Com_GetTxTpSduLength(Index)                                   
#define Com_GetTxTpWrittenBytesCounter(Index)                         
#define Com_IsWaitingForConfirmation(Index)                           ((Com_GetWaitingForConfirmationOfPCConfig()[(Index)]) != FALSE)
#define Com_GetgwEventCache(Index)                                    
#define Com_GetgwEventCacheIndex()                                    
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGetDeduplicatedDataMacros  Com Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Com_GetAllSigCnt()                                            Com_GetAllSigCntOfPCConfig()
#define Com_GetAllSigGrpCnt()                                         Com_GetAllSigGrpCntOfPCConfig()
#define Com_GetConfigId()                                             Com_GetConfigIdOfPCConfig()
#define Com_GetFinalMagicNumber()                                     
#define Com_GetInitDataHashCode()                                     
#define Com_GetPduGrpCnt()                                            Com_GetPduGrpCntOfPCConfig()
#define Com_GetPduGrpVector(Index)                                    ((Com_PduGrpVectorType)(((Index) + 1)))  /**< Contains an I-PDU-Group vector for each I-PDU, mapping the I-PDU to the corresponding I-PDU-Groups. ea:{{F15774B0-CB67-4b4c-A793-5F8E0CE5009D}} */
#define Com_GetApplTypeOfRxAccessInfo(Index)                          COM_BOOLEAN_APPLTYPEOFRXACCESSINFO  /**< Application data type. ea:{{E33B4863-9456-4cd2-84A1-94C89AF37A23}} */
#define Com_GetBitLengthOfRxAccessInfo(Index)                         1U  /**< Bit length of the signal or group signal. ea:{{646B1706-21D2-4b10-A5AC-A1113F297CD1}} */
#define Com_GetBitPositionOfRxAccessInfo(Index)                       ((Com_BitPositionOfRxAccessInfoType)((Index)))  /**< Bit position of the signal or group signal within the I-PDU. ea:{{180FD2F9-6CDB-48e4-9557-FD4DFCABF773}} */
#define Com_GetBufferIdxOfRxAccessInfo(Index)                         ((Com_BufferIdxOfRxAccessInfoType)((Index)))  /**< the index of the 0:1 relation pointing to Com_RxSigBufferXInt8,Com_RxSigBufferXInt16,Com_RxSigBufferXInt32 */
#define Com_IsBufferUsedOfRxAccessInfo(Index)                         (((TRUE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxSigBufferXInt8,Com_RxSigBufferXInt16,Com_RxSigBufferXInt32 */
#define Com_GetBusAccOfRxAccessInfo(Index)                            COM_NBIT_BUSACCOFRXACCESSINFO  /**< BUS access algorithm for signal or group signal packing / un-packing. ea:{{63C9F63A-D1F5-474c-A7B2-BD00E0CE2BF0}} */
#define Com_GetByteLengthOfRxAccessInfo(Index)                        0U  /**< Byte length of the signal or group signal. ea:{{646B1706-21D2-4b10-A5AC-A1113F297CD1}} */
#define Com_GetBytePositionOfRxAccessInfo(Index)                      0U  /**< Byte position of the signal or group signal within the I-PDU. ea:{{180FD2F9-6CDB-48e4-9557-FD4DFCABF773}} */
#define Com_GetInitValueIdxOfRxAccessInfo(Index)                      0U  /**< the index of the 0:1 relation pointing to Com_ConstValueXInt8,Com_ConstValueXInt16,Com_ConstValueXInt32 */
#define Com_IsInitValueUsedOfRxAccessInfo(Index)                      (((TRUE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueXInt8,Com_ConstValueXInt16,Com_ConstValueXInt32 */
#define Com_GetMaskedBitsOfRxAccessInfo(Index)                        0x07U  /**< contains bitcoded the boolean data of Com_BufferUsedOfRxAccessInfo, Com_InitValueUsedOfRxAccessInfo, Com_RxDataTimeoutSubstitutionValueUsedOfRxAccessInfo */
#define Com_GetPduIdOfRxAccessInfo(Index)                             ComConf_ComIPdu_msg_Receive_oCAN00_In  /**< ID of the corresponding Rx I-PDU. ea:{{A28B90E1-F27A-48c1-9EB3-0EAEB574C2D5}} */
#define Com_GetRxDataTimeoutSubstitutionValueIdxOfRxAccessInfo(Index) 0U  /**< the index of the 0:1 relation pointing to Com_ConstValueXInt8,Com_ConstValueXInt16,Com_ConstValueXInt32 */
#define Com_IsRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo(Index) (((TRUE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueXInt8,Com_ConstValueXInt16,Com_ConstValueXInt32 */
#define Com_GetStartByteInPduPositionOfRxAccessInfo(Index)            0U  /**< Start Byte position of the signal or group signal within the I-PDU. */
#define Com_GetRxAccessInfoInd(Index)                                 ((Com_RxAccessInfoIndType)((Index)))  /**< the indexes of the 1:1 sorted relation pointing to Com_RxAccessInfo */
#define Com_GetRxDlMonDivisor()                                       
#define Com_GetPduGrpVectorEndIdxOfRxPduGrpInfo(Index)                1U  /**< the end index of the 0:n relation pointing to Com_PduGrpVector */
#define Com_GetPduGrpVectorStartIdxOfRxPduGrpInfo(Index)              0U  /**< the start index of the 0:n relation pointing to Com_PduGrpVector */
#define Com_IsPduGrpVectorUsedOfRxPduGrpInfo(Index)                   (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_PduGrpVector */
#define Com_GetHandleRxPduDeferredIdxOfRxPduInfo(Index)               0U  /**< the index of the 0:1 relation pointing to Com_HandleRxPduDeferred */
#define Com_IsHandleRxPduDeferredUsedOfRxPduInfo(Index)               (((TRUE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_HandleRxPduDeferred */
#define Com_GetMaskedBitsOfRxPduInfo(Index)                           0x0FU  /**< contains bitcoded the boolean data of Com_HandleRxPduDeferredUsedOfRxPduInfo, Com_RxAccessInfoIndUsedOfRxPduInfo, Com_RxDefPduBufferUsedOfRxPduInfo, Com_RxSigInfoUsedOfRxPduInfo */
#define Com_GetRxAccessInfoIndEndIdxOfRxPduInfo(Index)                2U  /**< the end index of the 0:n relation pointing to Com_RxAccessInfoInd */
#define Com_GetRxAccessInfoIndStartIdxOfRxPduInfo(Index)              0U  /**< the start index of the 0:n relation pointing to Com_RxAccessInfoInd */
#define Com_IsRxAccessInfoIndUsedOfRxPduInfo(Index)                   (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxAccessInfoInd */
#define Com_GetRxDefPduBufferEndIdxOfRxPduInfo(Index)                 1U  /**< the end index of the 0:n relation pointing to Com_RxDefPduBuffer */
#define Com_GetRxDefPduBufferLengthOfRxPduInfo(Index)                 1U  /**< the number of relations pointing to Com_RxDefPduBuffer */
#define Com_GetRxDefPduBufferStartIdxOfRxPduInfo(Index)               0U  /**< the start index of the 0:n relation pointing to Com_RxDefPduBuffer */
#define Com_IsRxDefPduBufferUsedOfRxPduInfo(Index)                    (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxDefPduBuffer */
#define Com_GetRxSigInfoEndIdxOfRxPduInfo(Index)                      2U  /**< the end index of the 0:n relation pointing to Com_RxSigInfo */
#define Com_GetRxSigInfoStartIdxOfRxPduInfo(Index)                    0U  /**< the start index of the 0:n relation pointing to Com_RxSigInfo */
#define Com_IsRxSigInfoUsedOfRxPduInfo(Index)                         (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_RxSigInfo */
#define Com_GetRxAccessInfoIdxOfRxSigInfo(Index)                      ((Com_RxAccessInfoIdxOfRxSigInfoType)((Index)))  /**< the index of the 1:1 relation pointing to Com_RxAccessInfo */
#define Com_GetSignalProcessingOfRxSigInfo(Index)                     COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO
#define Com_GetValidDlcOfRxSigInfo(Index)                             1U  /**< Minimum length of PDU required to completely receive the signal or signal group. ea:{{0EAD864F-51F0-475a-A517-E3127ABAEBE4}} */
#define Com_GetSizeOfConstValueXInt8()                                Com_GetSizeOfConstValueXInt8OfPCConfig()
#define Com_GetSizeOfCurrentTxMode()                                  Com_GetSizeOfCurrentTxModeOfPCConfig()
#define Com_GetSizeOfCycleTimeCnt()                                   Com_GetSizeOfCycleTimeCntOfPCConfig()
#define Com_GetSizeOfCyclicSendRequest()                              Com_GetSizeOfCyclicSendRequestOfPCConfig()
#define Com_GetSizeOfDelayTimeCnt()                                   Com_GetSizeOfDelayTimeCntOfPCConfig()
#define Com_GetSizeOfHandleRxPduDeferred()                            Com_GetSizeOfHandleRxPduDeferredOfPCConfig()
#define Com_GetSizeOfHandleTxPduDeferred()                            Com_GetSizeOfHandleTxPduDeferredOfPCConfig()
#define Com_GetSizeOfPduGrpVector()                                   Com_GetSizeOfPduGrpVectorOfPCConfig()
#define Com_GetSizeOfRepCnt()                                         Com_GetSizeOfRepCntOfPCConfig()
#define Com_GetSizeOfRepCycleCnt()                                    Com_GetSizeOfRepCycleCntOfPCConfig()
#define Com_GetSizeOfRxAccessInfo()                                   Com_GetSizeOfRxAccessInfoOfPCConfig()
#define Com_GetSizeOfRxAccessInfoInd()                                Com_GetSizeOfRxAccessInfoIndOfPCConfig()
#define Com_GetSizeOfRxDefPduBuffer()                                 Com_GetSizeOfRxDefPduBufferOfPCConfig()
#define Com_GetSizeOfRxPduGrpActive()                                 Com_GetSizeOfRxPduGrpActiveOfPCConfig()
#define Com_GetSizeOfRxPduGrpInfo()                                   Com_GetSizeOfRxPduGrpInfoOfPCConfig()
#define Com_GetSizeOfRxPduInfo()                                      Com_GetSizeOfRxPduInfoOfPCConfig()
#define Com_GetSizeOfRxSigBufferXInt8()                               Com_GetSizeOfRxSigBufferXInt8OfPCConfig()
#define Com_GetSizeOfRxSigInfo()                                      Com_GetSizeOfRxSigInfoOfPCConfig()
#define Com_GetSizeOfTransmitRequest()                                Com_GetSizeOfTransmitRequestOfPCConfig()
#define Com_GetSizeOfTxModeInfo()                                     Com_GetSizeOfTxModeInfoOfPCConfig()
#define Com_GetSizeOfTxModeTrue()                                     Com_GetSizeOfTxModeTrueOfPCConfig()
#define Com_GetSizeOfTxPduBuffer()                                    Com_GetSizeOfTxPduBufferOfPCConfig()
#define Com_GetSizeOfTxPduGrpActive()                                 Com_GetSizeOfTxPduGrpActiveOfPCConfig()
#define Com_GetSizeOfTxPduGrpInfo()                                   Com_GetSizeOfTxPduGrpInfoOfPCConfig()
#define Com_GetSizeOfTxPduInfo()                                      Com_GetSizeOfTxPduInfoOfPCConfig()
#define Com_GetSizeOfTxPduInitValue()                                 Com_GetSizeOfTxPduInitValueOfPCConfig()
#define Com_GetSizeOfTxSduLength()                                    Com_GetSizeOfTxSduLengthOfPCConfig()
#define Com_GetSizeOfTxSigInfo()                                      Com_GetSizeOfTxSigInfoOfPCConfig()
#define Com_GetSizeOfWaitingForConfirmation()                         Com_GetSizeOfWaitingForConfirmationOfPCConfig()
#define Com_GetTxCycleCounterDivisor()                                Com_GetTxCycleCounterDivisorOfPCConfig()
#define Com_GetTxDlMonDivisor()                                       
#define Com_IsInitModeOfTxModeInfo(Index)                             (((TRUE)) != FALSE)  /**< Initial transmission mode selector of the Tx I-PDU. ea:{{EFF0A60B-2771-4765-B894-F5403EEFCFB9}} */
#define Com_GetMaskedBitsOfTxModeInfo(Index)                          0x03U  /**< contains bitcoded the boolean data of Com_InitModeOfTxModeInfo, Com_TxModeTrueUsedOfTxModeInfo */
#define Com_GetTxModeTrueIdxOfTxModeInfo(Index)                       0U  /**< the index of the 0:1 relation pointing to Com_TxModeTrue */
#define Com_IsTxModeTrueUsedOfTxModeInfo(Index)                       (((TRUE)) != FALSE)  /**< TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxModeTrue */
#define Com_IsPeriodicOfTxModeTrue(Index)                             (((TRUE)) != FALSE)  /**< TRUE if transmission mode contains a cyclic part. ea:{{6382A245-2644-4c2b-9B74-7F3545CA1FFD}} */
#define Com_GetTimePeriodOfTxModeTrue(Index)                          1U  /**< Cycle time factor. ea:{{0B150B17-8D3B-4066-BBEC-3E234415F1F2}} */
#define Com_GetPduGrpVectorEndIdxOfTxPduGrpInfo(Index)                2U  /**< the end index of the 0:n relation pointing to Com_PduGrpVector */
#define Com_GetPduGrpVectorStartIdxOfTxPduGrpInfo(Index)              1U  /**< the start index of the 0:n relation pointing to Com_PduGrpVector */
#define Com_IsPduGrpVectorUsedOfTxPduGrpInfo(Index)                   (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_PduGrpVector */
#define Com_GetExternalIdOfTxPduInfo(Index)                           PduRConf_PduRSrcPdu_SRC_Can_PT_msg_Transmit_0fb271d2_Out  /**< External ID used to call PduR_ComTransmit(). ea:{{2181D34E-EC05-425f-A841-874F4C346BB5}} */
#define Com_GetMaskedBitsOfTxPduInfo(Index)                           0x03U  /**< contains bitcoded the boolean data of Com_TxPduBufferUsedOfTxPduInfo, Com_TxPduInitValueUsedOfTxPduInfo */
#define Com_GetMetaDataLengthOfTxPduInfo(Index)                       0U  /**< Length of MetaData. */
#define Com_GetPduWithMetaDataLengthOfTxPduInfo(Index)                1U  /**< Length of Pdu with MetaData. */
#define Com_GetTxPduBufferEndIdxOfTxPduInfo(Index)                    1U  /**< the end index of the 0:n relation pointing to Com_TxPduBuffer */
#define Com_GetTxPduBufferLengthOfTxPduInfo(Index)                    1U  /**< the number of relations pointing to Com_TxPduBuffer */
#define Com_GetTxPduBufferStartIdxOfTxPduInfo(Index)                  0U  /**< the start index of the 0:n relation pointing to Com_TxPduBuffer */
#define Com_IsTxPduBufferUsedOfTxPduInfo(Index)                       (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduBuffer */
#define Com_GetTxPduInitValueEndIdxOfTxPduInfo(Index)                 1U  /**< the end index of the 0:n relation pointing to Com_TxPduInitValue */
#define Com_GetTxPduInitValueStartIdxOfTxPduInfo(Index)               0U  /**< the start index of the 0:n relation pointing to Com_TxPduInitValue */
#define Com_IsTxPduInitValueUsedOfTxPduInfo(Index)                    (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInitValue */
#define Com_GetApplTypeOfTxSigInfo(Index)                             COM_BOOLEAN_APPLTYPEOFTXSIGINFO  /**< Application data type. ea:{{E33B4863-9456-4cd2-84A1-94C89AF37A23}} */
#define Com_GetBitLengthOfTxSigInfo(Index)                            1U  /**< Bit length of the signal or group signal. ea:{{646B1706-21D2-4b10-A5AC-A1113F297CD1}} */
#define Com_GetBitPositionOfTxSigInfo(Index)                          0U  /**< Bit position of the signal or group signal within the I-PDU. ea:{{180FD2F9-6CDB-48e4-9557-FD4DFCABF773}} */
#define Com_GetBusAccOfTxSigInfo(Index)                               COM_NBIT_BUSACCOFTXSIGINFO  /**< BUS access algorithm for signal or group signal packing / un-packing. ea:{{63C9F63A-D1F5-474c-A7B2-BD00E0CE2BF0}} */
#define Com_GetByteLengthOfTxSigInfo(Index)                           0U  /**< Byte length of the signal or group signal. ea:{{646B1706-21D2-4b10-A5AC-A1113F297CD1}} */
#define Com_GetBytePositionOfTxSigInfo(Index)                         0U  /**< Byte position of the signal or group signal within the I-PDU. ea:{{180FD2F9-6CDB-48e4-9557-FD4DFCABF773}} */
#define Com_GetPduIdOfTxSigInfo(Index)                                ComConf_ComIPdu_msg_Transmit_oCAN00_Out  /**< ID of the corresponding Rx I-PDU. ea:{{A28B90E1-F27A-48c1-9EB3-0EAEB574C2D5}} */
#define Com_GetStartByteInPduPositionOfTxSigInfo(Index)               0U  /**< Start Byte position of the signal or group signal within the I-PDU. */
/** 
  \}
*/ 

/** 
  \defgroup  ComPCSetDataMacros  Com Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Com_SetCurrentTxMode(Index, Value)                            Com_GetCurrentTxModeOfPCConfig()[(Index)] = (Value)
#define Com_SetCycleTimeCnt(Index, Value)                             Com_GetCycleTimeCntOfPCConfig()[(Index)] = (Value)
#define Com_SetCyclicSendRequest(Index, Value)                        Com_GetCyclicSendRequestOfPCConfig()[(Index)] = (Value)
#define Com_SetDeferredGwMappingEvent(Index, Value)                   
#define Com_SetDelayTimeCnt(Index, Value)                             Com_GetDelayTimeCntOfPCConfig()[(Index)] = (Value)
#define Com_SetGwEvent(Index, Value)                                  
#define Com_SetGwRoutingTimeoutCounter(Index, Value)                  
#define Com_SetHandleRxDeferredGwDescription(Index, Value)            
#define Com_SetHandleRxPduDeferred(Index, Value)                      Com_GetHandleRxPduDeferredOfPCConfig()[(Index)] = (Value)
#define Com_SetHandleTxPduDeferred(Index, Value)                      Com_GetHandleTxPduDeferredOfPCConfig()[(Index)] = (Value)
#define Com_SetIPduGroupState(Index, Value)                           
#define Com_SetInitialized(Value)                                     Com_GetInitializedOfPCConfig() = (Value)
#define Com_SetRepCnt(Index, Value)                                   Com_GetRepCntOfPCConfig()[(Index)] = (Value)
#define Com_SetRepCycleCnt(Index, Value)                              Com_GetRepCycleCntOfPCConfig()[(Index)] = (Value)
#define Com_SetRxDefPduBuffer(Index, Value)                           Com_GetRxDefPduBufferOfPCConfig()[(Index)] = (Value)
#define Com_SetRxDeferredEventCache(Index, Value)                     
#define Com_SetRxDlMonDivisorCounter(Value)                           Com_GetRxDlMonDivisorCounterOfPCConfig() = (Value)
#define Com_SetRxDynSignalLength(Index, Value)                        
#define Com_SetRxDynSignalTmpLengthForSignalGroups(Index, Value)      
#define Com_SetRxNextEventCacheEnty(Value)                            
#define Com_SetRxPduDmState(Index, Value)                             
#define Com_SetRxPduGrpActive(Index, Value)                           Com_GetRxPduGrpActiveOfPCConfig()[(Index)] = (Value)
#define Com_SetRxShdBufferXInt16(Index, Value)                        
#define Com_SetRxShdBufferXInt32(Index, Value)                        
#define Com_SetRxShdBufferXInt8(Index, Value)                         
#define Com_SetRxSigBufferXInt16(Index, Value)                        
#define Com_SetRxSigBufferXInt32(Index, Value)                        
#define Com_SetRxSigBufferXInt8(Index, Value)                         Com_GetRxSigBufferXInt8OfPCConfig()[(Index)] = (Value)
#define Com_SetRxTOutCnt(Index, Value)                                
#define Com_SetRxTpBuffer(Index, Value)                               
#define Com_SetRxTpConnectionState(Index, Value)                      
#define Com_SetRxTpSduLength(Index, Value)                            
#define Com_SetRxTpWrittenBytesCounter(Index, Value)                  
#define Com_SetSigGrpEventFlag(Index, Value)                          
#define Com_SetTmpRxBuffer(Index, Value)                              
#define Com_SetTmpRxShdBufferXInt16(Index, Value)                     
#define Com_SetTmpRxShdBufferXInt32(Index, Value)                     
#define Com_SetTmpRxShdBufferXInt8(Index, Value)                      
#define Com_SetTransmitRequest(Index, Value)                          Com_GetTransmitRequestOfPCConfig()[(Index)] = (Value)
#define Com_SetTxCycleCounterDivisorCounter(Value)                    Com_GetTxCycleCounterDivisorCounterOfPCConfig() = (Value)
#define Com_SetTxDlMonDivisorCounter(Value)                           Com_GetTxDlMonDivisorCounterOfPCConfig() = (Value)
#define Com_SetTxDynSignalLength(Index, Value)                        
#define Com_SetTxFilterOldValueXInt16(Index, Value)                   
#define Com_SetTxFilterOldValueXInt32(Index, Value)                   
#define Com_SetTxFilterOldValueXInt8(Index, Value)                    
#define Com_SetTxFilterState(Index, Value)                            
#define Com_SetTxPduBuffer(Index, Value)                              Com_GetTxPduBufferOfPCConfig()[(Index)] = (Value)
#define Com_SetTxPduGrpActive(Index, Value)                           Com_GetTxPduGrpActiveOfPCConfig()[(Index)] = (Value)
#define Com_SetTxSduLength(Index, Value)                              Com_GetTxSduLengthOfPCConfig()[(Index)] = (Value)
#define Com_SetTxShdBuffer(Index, Value)                              
#define Com_SetTxTOutCnt(Index, Value)                                
#define Com_SetTxTmpTpPduLength(Index, Value)                         
#define Com_SetTxTpConnectionState(Index, Value)                      
#define Com_SetTxTpSduLength(Index, Value)                            
#define Com_SetTxTpWrittenBytesCounter(Index, Value)                  
#define Com_SetWaitingForConfirmation(Index, Value)                   Com_GetWaitingForConfirmationOfPCConfig()[(Index)] = (Value)
#define Com_SetgwEventCache(Index, Value)                             
#define Com_SetgwEventCacheIndex(Value)                               
/** 
  \}
*/ 

/** 
  \defgroup  ComPCGetAddressOfDataMacros  Com Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define Com_GetAddrConstValueXInt16(Index)                            
#define Com_GetAddrConstValueXInt32(Index)                            
#define Com_GetAddrConstValueXInt8(Index)                             &Com_GetConstValueXInt8(Index)
#define Com_GetAddrRxDefPduBuffer(Index)                              &Com_GetRxDefPduBuffer(Index)
#define Com_GetAddrRxShdBufferXInt16(Index)                           
#define Com_GetAddrRxShdBufferXInt32(Index)                           
#define Com_GetAddrRxShdBufferXInt8(Index)                            
#define Com_GetAddrRxSigBufferXInt16(Index)                           
#define Com_GetAddrRxSigBufferXInt32(Index)                           
#define Com_GetAddrRxSigBufferXInt8(Index)                            &Com_GetRxSigBufferXInt8(Index)
#define Com_GetAddrRxTpBuffer(Index)                                  
#define Com_GetAddrSourceDescriptionMask(Index)                       
#define Com_GetAddrTmpRxBuffer(Index)                                 
#define Com_GetAddrTmpRxShdBufferXInt16(Index)                        
#define Com_GetAddrTmpRxShdBufferXInt32(Index)                        
#define Com_GetAddrTmpRxShdBufferXInt8(Index)                         
#define Com_GetAddrTxFilterInitValueXInt16(Index)                     
#define Com_GetAddrTxFilterInitValueXInt32(Index)                     
#define Com_GetAddrTxFilterInitValueXInt8(Index)                      
#define Com_GetAddrTxFilterOldValueXInt16(Index)                      
#define Com_GetAddrTxFilterOldValueXInt32(Index)                      
#define Com_GetAddrTxFilterOldValueXInt8(Index)                       
#define Com_GetAddrTxPduBuffer(Index)                                 &Com_GetTxPduBuffer(Index)
#define Com_GetAddrTxPduInitValue(Index)                              &Com_GetTxPduInitValue(Index)
#define Com_GetAddrTxShdBuffer(Index)                                 
#define Com_GetAddrTxSigGrpMask(Index)                                
#define Com_GetAddrTxSigGrpOnChangeMask(Index)                        
/** 
  \}
*/ 

/** 
  \defgroup  ComPCHasMacros  Com Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Com_HasAllSigCnt()                                            (TRUE != FALSE)
#define Com_HasAllSigGrpCnt()                                         (TRUE != FALSE)
#define Com_HasCbkInvFuncPtr()                                        
#define Com_HasCbkRxAckFuncPtr()                                      
#define Com_HasCbkRxTOutFuncPtr()                                     
#define Com_HasCbkRxTOutFuncPtrInd()                                  
#define Com_HasCbkTxAckDefFuncPtr()                                   
#define Com_HasCbkTxAckDefFuncPtrInd()                                
#define Com_HasCbkTxAckImFuncPtr()                                    
#define Com_HasCbkTxAckImFuncPtrInd()                                 
#define Com_HasCbkTxErrFuncPtr()                                      
#define Com_HasCbkTxErrFuncPtrInd()                                   
#define Com_HasCbkTxTOutFuncPtr()                                     
#define Com_HasCbkTxTOutFuncPtrInd()                                  
#define Com_HasConfigId()                                             (TRUE != FALSE)
#define Com_HasConstValueXInt16()                                     
#define Com_HasConstValueXInt32()                                     
#define Com_HasConstValueXInt8()                                      (TRUE != FALSE)
#define Com_HasCurrentTxMode()                                        (TRUE != FALSE)
#define Com_HasCycleTimeCnt()                                         (TRUE != FALSE)
#define Com_HasCyclicSendRequest()                                    (TRUE != FALSE)
#define Com_HasDeferredGwMappingEvent()                               
#define Com_HasDeferredGwMappingInfo()                                
#define Com_HasRxPduInfoIdxOfDeferredGwMappingInfo()                  
#define Com_HasDelayTimeCnt()                                         (TRUE != FALSE)
#define Com_HasFilterInfo()                                           
#define Com_HasApplTypeOfFilterInfo()                                 
#define Com_HasFilterAlgoOfFilterInfo()                               
#define Com_HasFilterParamIdxOfFilterInfo()                           
#define Com_HasFilterParamUsedOfFilterInfo()                          
#define Com_HasLengthOfFilterInfo()                                   
#define Com_HasFinalMagicNumber()                                     
#define Com_HasGwDescriptionAccessInfo()                              
#define Com_HasDestinationBytePositionOfGwDescriptionAccessInfo()     
#define Com_HasMaskLengthOfGwDescriptionAccessInfo()                  
#define Com_HasSourceBytePositionOfGwDescriptionAccessInfo()          
#define Com_HasSourceDescriptionMaskEndIdxOfGwDescriptionAccessInfo() 
#define Com_HasSourceDescriptionMaskStartIdxOfGwDescriptionAccessInfo() 
#define Com_HasSourceDescriptionMaskUsedOfGwDescriptionAccessInfo()   
#define Com_HasTypeOfGwDescriptionAccessInfo()                        
#define Com_HastxPduIdOfGwDescriptionAccessInfo()                     
#define Com_HasGwEvent()                                              
#define Com_HasGwGrpSigMapping()                                      
#define Com_HasRxAccessInfoIdxOfGwGrpSigMapping()                     
#define Com_HasTxSigIdOfGwGrpSigMapping()                             
#define Com_HasGwInfo()                                               
#define Com_HasGwSigGrpMappingEndIdxOfGwInfo()                        
#define Com_HasGwSigGrpMappingStartIdxOfGwInfo()                      
#define Com_HasGwSigGrpMappingUsedOfGwInfo()                          
#define Com_HasGwSigMappingEndIdxOfGwInfo()                           
#define Com_HasGwSigMappingStartIdxOfGwInfo()                         
#define Com_HasGwSigMappingUsedOfGwInfo()                             
#define Com_HasGwRoutingTimeoutCounter()                              
#define Com_HasGwSigGrpMapping()                                      
#define Com_HasGwGrpSigMappingEndIdxOfGwSigGrpMapping()               
#define Com_HasGwGrpSigMappingStartIdxOfGwSigGrpMapping()             
#define Com_HasTxSigGrpIdOfGwSigGrpMapping()                          
#define Com_HasGwSigMapping()                                         
#define Com_HasRxAccessInfoIdxOfGwSigMapping()                        
#define Com_HasTxSigIdOfGwSigMapping()                                
#define Com_HasGwTimeoutInfo()                                        
#define Com_HasGwRoutingTimeoutFactorOfGwTimeoutInfo()                
#define Com_HasTxPduInfoIdxOfGwTimeoutInfo()                          
#define Com_HasGwTxPduDescriptionInfo()                               
#define Com_HasGwDescriptionAccessInfoEndIdxOfGwTxPduDescriptionInfo() 
#define Com_HasGwDescriptionAccessInfoStartIdxOfGwTxPduDescriptionInfo() 
#define Com_HasHandleRxDeferredGwDescription()                        
#define Com_HasHandleRxPduDeferred()                                  (TRUE != FALSE)
#define Com_HasHandleTxPduDeferred()                                  (TRUE != FALSE)
#define Com_HasIPduGroupInfo()                                        
#define Com_HasIPduGroupInfoToSubIPduGroupsIndEndIdxOfIPduGroupInfo() 
#define Com_HasIPduGroupInfoToSubIPduGroupsIndStartIdxOfIPduGroupInfo() 
#define Com_HasIPduGroupInfoToSubIPduGroupsIndUsedOfIPduGroupInfo()   
#define Com_HasInvalidHndOfIPduGroupInfo()                            
#define Com_HasRxPduInfoIndEndIdxOfIPduGroupInfo()                    
#define Com_HasRxPduInfoIndStartIdxOfIPduGroupInfo()                  
#define Com_HasRxPduInfoIndUsedOfIPduGroupInfo()                      
#define Com_HasTxPduInfoIndEndIdxOfIPduGroupInfo()                    
#define Com_HasTxPduInfoIndStartIdxOfIPduGroupInfo()                  
#define Com_HasTxPduInfoIndUsedOfIPduGroupInfo()                      
#define Com_HasIPduGroupInfoOfRxPduInfoInd()                          
#define Com_HasIPduGroupInfoOfTxPduInfoInd()                          
#define Com_HasIPduGroupInfoToSubIPduGroupsInd()                      
#define Com_HasIPduGroupState()                                       
#define Com_HasInitDataHashCode()                                     
#define Com_HasInitialized()                                          (TRUE != FALSE)
#define Com_HasPduGrpCnt()                                            (TRUE != FALSE)
#define Com_HasPduGrpVector()                                         (TRUE != FALSE)
#define Com_HasRepCnt()                                               (TRUE != FALSE)
#define Com_HasRepCycleCnt()                                          (TRUE != FALSE)
#define Com_HasRxAccessInfo()                                         (TRUE != FALSE)
#define Com_HasApplTypeOfRxAccessInfo()                               (TRUE != FALSE)
#define Com_HasBitLengthOfRxAccessInfo()                              (TRUE != FALSE)
#define Com_HasBitPositionOfRxAccessInfo()                            (TRUE != FALSE)
#define Com_HasBufferIdxOfRxAccessInfo()                              (TRUE != FALSE)
#define Com_HasBufferUsedOfRxAccessInfo()                             (TRUE != FALSE)
#define Com_HasBusAccOfRxAccessInfo()                                 (TRUE != FALSE)
#define Com_HasByteLengthOfRxAccessInfo()                             (TRUE != FALSE)
#define Com_HasBytePositionOfRxAccessInfo()                           (TRUE != FALSE)
#define Com_HasGwInfoIdxOfRxAccessInfo()                              
#define Com_HasGwInfoUsedOfRxAccessInfo()                             
#define Com_HasInitValueIdxOfRxAccessInfo()                           (TRUE != FALSE)
#define Com_HasInitValueUsedOfRxAccessInfo()                          (TRUE != FALSE)
#define Com_HasInvalidHndOfRxAccessInfo()                             
#define Com_HasMaskedBitsOfRxAccessInfo()                             (TRUE != FALSE)
#define Com_HasPduIdOfRxAccessInfo()                                  (TRUE != FALSE)
#define Com_HasRxDataTimeoutSubstitutionValueIdxOfRxAccessInfo()      (TRUE != FALSE)
#define Com_HasRxDataTimeoutSubstitutionValueUsedOfRxAccessInfo()     (TRUE != FALSE)
#define Com_HasShdBufferIdxOfRxAccessInfo()                           
#define Com_HasShdBufferUsedOfRxAccessInfo()                          
#define Com_HasSignExtRequiredOfRxAccessInfo()                        
#define Com_HasStartByteInPduPositionOfRxAccessInfo()                 (TRUE != FALSE)
#define Com_HasRxAccessInfoInd()                                      (TRUE != FALSE)
#define Com_HasRxAccessInfoReplaceGrpSigInd()                         
#define Com_HasRxAccessInfoReplaceSigInd()                            
#define Com_HasRxDefPduBuffer()                                       (TRUE != FALSE)
#define Com_HasRxDeferredEventCache()                                 
#define Com_HasRxDlMonDivisor()                                       
#define Com_HasRxDlMonDivisorCounter()                                (TRUE != FALSE)
#define Com_HasRxDynSignalLength()                                    
#define Com_HasRxDynSignalTmpLengthForSignalGroups()                  
#define Com_HasRxGrpSigInfo()                                         
#define Com_HasFilterInfoIdxOfRxGrpSigInfo()                          
#define Com_HasFilterInfoUsedOfRxGrpSigInfo()                         
#define Com_HasInvValueIdxOfRxGrpSigInfo()                            
#define Com_HasInvValueUsedOfRxGrpSigInfo()                           
#define Com_HasRxAccessInfoIdxOfRxGrpSigInfo()                        
#define Com_HasTmpBufferIdxOfRxGrpSigInfo()                           
#define Com_HasTmpBufferUsedOfRxGrpSigInfo()                          
#define Com_HasRxNextEventCacheEnty()                                 
#define Com_HasRxPduCalloutFuncPtr()                                  
#define Com_HasRxPduDmState()                                         
#define Com_HasRxPduGrpActive()                                       (TRUE != FALSE)
#define Com_HasRxPduGrpInfo()                                         (TRUE != FALSE)
#define Com_HasPduGrpVectorEndIdxOfRxPduGrpInfo()                     (TRUE != FALSE)
#define Com_HasPduGrpVectorStartIdxOfRxPduGrpInfo()                   (TRUE != FALSE)
#define Com_HasPduGrpVectorUsedOfRxPduGrpInfo()                       (TRUE != FALSE)
#define Com_HasRxPduInfo()                                            (TRUE != FALSE)
#define Com_HasGwInfoEndIdxOfRxPduInfo()                              
#define Com_HasGwInfoStartIdxOfRxPduInfo()                            
#define Com_HasGwInfoUsedOfRxPduInfo()                                
#define Com_HasGwTxPduDescriptionInfoEndIdxOfRxPduInfo()              
#define Com_HasGwTxPduDescriptionInfoStartIdxOfRxPduInfo()            
#define Com_HasGwTxPduDescriptionInfoUsedOfRxPduInfo()                
#define Com_HasHandleRxDeferredGwDescriptionIdxOfRxPduInfo()          
#define Com_HasHandleRxDeferredGwDescriptionUsedOfRxPduInfo()         
#define Com_HasHandleRxPduDeferredIdxOfRxPduInfo()                    (TRUE != FALSE)
#define Com_HasHandleRxPduDeferredUsedOfRxPduInfo()                   (TRUE != FALSE)
#define Com_HasIPduGroupInfoOfRxPduInfoIndEndIdxOfRxPduInfo()         
#define Com_HasIPduGroupInfoOfRxPduInfoIndStartIdxOfRxPduInfo()       
#define Com_HasIPduGroupInfoOfRxPduInfoIndUsedOfRxPduInfo()           
#define Com_HasInvalidHndOfRxPduInfo()                                
#define Com_HasMaskedBitsOfRxPduInfo()                                (TRUE != FALSE)
#define Com_HasRxAccessInfoIndEndIdxOfRxPduInfo()                     (TRUE != FALSE)
#define Com_HasRxAccessInfoIndStartIdxOfRxPduInfo()                   (TRUE != FALSE)
#define Com_HasRxAccessInfoIndUsedOfRxPduInfo()                       (TRUE != FALSE)
#define Com_HasRxDefPduBufferEndIdxOfRxPduInfo()                      (TRUE != FALSE)
#define Com_HasRxDefPduBufferLengthOfRxPduInfo()                      (TRUE != FALSE)
#define Com_HasRxDefPduBufferStartIdxOfRxPduInfo()                    (TRUE != FALSE)
#define Com_HasRxDefPduBufferUsedOfRxPduInfo()                        (TRUE != FALSE)
#define Com_HasRxPduCalloutFuncPtrIdxOfRxPduInfo()                    
#define Com_HasRxPduCalloutFuncPtrUsedOfRxPduInfo()                   
#define Com_HasRxSigGrpInfoIndEndIdxOfRxPduInfo()                     
#define Com_HasRxSigGrpInfoIndStartIdxOfRxPduInfo()                   
#define Com_HasRxSigGrpInfoIndUsedOfRxPduInfo()                       
#define Com_HasRxSigInfoEndIdxOfRxPduInfo()                           (TRUE != FALSE)
#define Com_HasRxSigInfoStartIdxOfRxPduInfo()                         (TRUE != FALSE)
#define Com_HasRxSigInfoUsedOfRxPduInfo()                             (TRUE != FALSE)
#define Com_HasRxTOutInfoIdxOfRxPduInfo()                             
#define Com_HasRxTOutInfoIndEndIdxOfRxPduInfo()                       
#define Com_HasRxTOutInfoIndStartIdxOfRxPduInfo()                     
#define Com_HasRxTOutInfoIndUsedOfRxPduInfo()                         
#define Com_HasRxTOutInfoUsedOfRxPduInfo()                            
#define Com_HasRxTpInfoIdxOfRxPduInfo()                               
#define Com_HasRxTpInfoUsedOfRxPduInfo()                              
#define Com_HasRxPduInfoInd()                                         
#define Com_HasRxShdBufferXInt16()                                    
#define Com_HasRxShdBufferXInt32()                                    
#define Com_HasRxShdBufferXInt8()                                     
#define Com_HasRxSigBufferXInt16()                                    
#define Com_HasRxSigBufferXInt32()                                    
#define Com_HasRxSigBufferXInt8()                                     (TRUE != FALSE)
#define Com_HasRxSigGrpInfo()                                         
#define Com_HasArrayAccessUsedOfRxSigGrpInfo()                        
#define Com_HasCbkInvFuncPtrIdxOfRxSigGrpInfo()                       
#define Com_HasCbkInvFuncPtrUsedOfRxSigGrpInfo()                      
#define Com_HasCbkRxAckFuncPtrIdxOfRxSigGrpInfo()                     
#define Com_HasCbkRxAckFuncPtrUsedOfRxSigGrpInfo()                    
#define Com_HasConstValueXInt8EndIdxOfRxSigGrpInfo()                  
#define Com_HasConstValueXInt8LengthOfRxSigGrpInfo()                  
#define Com_HasConstValueXInt8StartIdxOfRxSigGrpInfo()                
#define Com_HasConstValueXInt8UsedOfRxSigGrpInfo()                    
#define Com_HasFilterEventOfRxSigGrpInfo()                            
#define Com_HasGwInfoIdxOfRxSigGrpInfo()                              
#define Com_HasGwInfoUsedOfRxSigGrpInfo()                             
#define Com_HasInvEventOfRxSigGrpInfo()                               
#define Com_HasInvalidHndOfRxSigGrpInfo()                             
#define Com_HasRxGrpSigInfoEndIdxOfRxSigGrpInfo()                     
#define Com_HasRxGrpSigInfoStartIdxOfRxSigGrpInfo()                   
#define Com_HasRxPduInfoIdxOfRxSigGrpInfo()                           
#define Com_HasRxPduInfoUsedOfRxSigGrpInfo()                          
#define Com_HasRxShdBufferXInt8EndIdxOfRxSigGrpInfo()                 
#define Com_HasRxShdBufferXInt8LengthOfRxSigGrpInfo()                 
#define Com_HasRxShdBufferXInt8StartIdxOfRxSigGrpInfo()               
#define Com_HasRxShdBufferXInt8UsedOfRxSigGrpInfo()                   
#define Com_HasRxTOutInfoIdxOfRxSigGrpInfo()                          
#define Com_HasRxTOutInfoUsedOfRxSigGrpInfo()                         
#define Com_HasSignalProcessingOfRxSigGrpInfo()                       
#define Com_HasStartBytePositionOfRxSigGrpInfo()                      
#define Com_HasUbIdxOfRxSigGrpInfo()                                  
#define Com_HasUbMaskIdxOfRxSigGrpInfo()                              
#define Com_HasUbMaskUsedOfRxSigGrpInfo()                             
#define Com_HasValidDlcOfRxSigGrpInfo()                               
#define Com_HasRxSigGrpInfoInd()                                      
#define Com_HasRxSigInfo()                                            (TRUE != FALSE)
#define Com_HasCbkInvFuncPtrIdxOfRxSigInfo()                          
#define Com_HasCbkInvFuncPtrUsedOfRxSigInfo()                         
#define Com_HasCbkRxAckFuncPtrIdxOfRxSigInfo()                        
#define Com_HasCbkRxAckFuncPtrUsedOfRxSigInfo()                       
#define Com_HasFilterInfoIdxOfRxSigInfo()                             
#define Com_HasFilterInfoUsedOfRxSigInfo()                            
#define Com_HasGwInfoIdxOfRxSigInfo()                                 
#define Com_HasGwInfoUsedOfRxSigInfo()                                
#define Com_HasInvValueIdxOfRxSigInfo()                               
#define Com_HasInvValueUsedOfRxSigInfo()                              
#define Com_HasRxAccessInfoIdxOfRxSigInfo()                           (TRUE != FALSE)
#define Com_HasRxTOutInfoIdxOfRxSigInfo()                             
#define Com_HasRxTOutInfoUsedOfRxSigInfo()                            
#define Com_HasSignalProcessingOfRxSigInfo()                          (TRUE != FALSE)
#define Com_HasUbIdxOfRxSigInfo()                                     
#define Com_HasUbMaskIdxOfRxSigInfo()                                 
#define Com_HasUbMaskUsedOfRxSigInfo()                                
#define Com_HasValidDlcOfRxSigInfo()                                  (TRUE != FALSE)
#define Com_HasRxTOutCnt()                                            
#define Com_HasRxTOutInfo()                                           
#define Com_HasCbkRxTOutFuncPtrIndEndIdxOfRxTOutInfo()                
#define Com_HasCbkRxTOutFuncPtrIndStartIdxOfRxTOutInfo()              
#define Com_HasCbkRxTOutFuncPtrIndUsedOfRxTOutInfo()                  
#define Com_HasFactorOfRxTOutInfo()                                   
#define Com_HasFirstFactorOfRxTOutInfo()                              
#define Com_HasRxAccessInfoReplaceGrpSigIndEndIdxOfRxTOutInfo()       
#define Com_HasRxAccessInfoReplaceGrpSigIndStartIdxOfRxTOutInfo()     
#define Com_HasRxAccessInfoReplaceGrpSigIndUsedOfRxTOutInfo()         
#define Com_HasRxAccessInfoReplaceSigIndEndIdxOfRxTOutInfo()          
#define Com_HasRxAccessInfoReplaceSigIndStartIdxOfRxTOutInfo()        
#define Com_HasRxAccessInfoReplaceSigIndUsedOfRxTOutInfo()            
#define Com_HasRxPduInfoIdxOfRxTOutInfo()                             
#define Com_HasRxTOutInfoInd()                                        
#define Com_HasRxTpBuffer()                                           
#define Com_HasRxTpConnectionState()                                  
#define Com_HasRxTpInfo()                                             
#define Com_HasBufferSizeOfRxTpInfo()                                 
#define Com_HasRxAccessInfoDynSigIdxOfRxTpInfo()                      
#define Com_HasRxAccessInfoDynSigUsedOfRxTpInfo()                     
#define Com_HasRxTpBufferEndIdxOfRxTpInfo()                           
#define Com_HasRxTpBufferStartIdxOfRxTpInfo()                         
#define Com_HasRxTpBufferUsedOfRxTpInfo()                             
#define Com_HasRxTpSduLength()                                        
#define Com_HasRxTpWrittenBytesCounter()                              
#define Com_HasSigGrpEventFlag()                                      
#define Com_HasSizeOfConstValueXInt8()                                (TRUE != FALSE)
#define Com_HasSizeOfCurrentTxMode()                                  (TRUE != FALSE)
#define Com_HasSizeOfCycleTimeCnt()                                   (TRUE != FALSE)
#define Com_HasSizeOfCyclicSendRequest()                              (TRUE != FALSE)
#define Com_HasSizeOfDelayTimeCnt()                                   (TRUE != FALSE)
#define Com_HasSizeOfHandleRxPduDeferred()                            (TRUE != FALSE)
#define Com_HasSizeOfHandleTxPduDeferred()                            (TRUE != FALSE)
#define Com_HasSizeOfPduGrpVector()                                   (TRUE != FALSE)
#define Com_HasSizeOfRepCnt()                                         (TRUE != FALSE)
#define Com_HasSizeOfRepCycleCnt()                                    (TRUE != FALSE)
#define Com_HasSizeOfRxAccessInfo()                                   (TRUE != FALSE)
#define Com_HasSizeOfRxAccessInfoInd()                                (TRUE != FALSE)
#define Com_HasSizeOfRxDefPduBuffer()                                 (TRUE != FALSE)
#define Com_HasSizeOfRxPduGrpActive()                                 (TRUE != FALSE)
#define Com_HasSizeOfRxPduGrpInfo()                                   (TRUE != FALSE)
#define Com_HasSizeOfRxPduInfo()                                      (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferXInt8()                               (TRUE != FALSE)
#define Com_HasSizeOfRxSigInfo()                                      (TRUE != FALSE)
#define Com_HasSizeOfTransmitRequest()                                (TRUE != FALSE)
#define Com_HasSizeOfTxModeInfo()                                     (TRUE != FALSE)
#define Com_HasSizeOfTxModeTrue()                                     (TRUE != FALSE)
#define Com_HasSizeOfTxPduBuffer()                                    (TRUE != FALSE)
#define Com_HasSizeOfTxPduGrpActive()                                 (TRUE != FALSE)
#define Com_HasSizeOfTxPduGrpInfo()                                   (TRUE != FALSE)
#define Com_HasSizeOfTxPduInfo()                                      (TRUE != FALSE)
#define Com_HasSizeOfTxPduInitValue()                                 (TRUE != FALSE)
#define Com_HasSizeOfTxSduLength()                                    (TRUE != FALSE)
#define Com_HasSizeOfTxSigInfo()                                      (TRUE != FALSE)
#define Com_HasSizeOfWaitingForConfirmation()                         (TRUE != FALSE)
#define Com_HasSourceDescriptionMask()                                
#define Com_HasTmpRxBuffer()                                          
#define Com_HasTmpRxShdBufferXInt16()                                 
#define Com_HasTmpRxShdBufferXInt32()                                 
#define Com_HasTmpRxShdBufferXInt8()                                  
#define Com_HasTransmitRequest()                                      (TRUE != FALSE)
#define Com_HasTxCycleCounterDivisor()                                (TRUE != FALSE)
#define Com_HasTxCycleCounterDivisorCounter()                         (TRUE != FALSE)
#define Com_HasTxDlMonDivisor()                                       
#define Com_HasTxDlMonDivisorCounter()                                (TRUE != FALSE)
#define Com_HasTxDynSignalLength()                                    
#define Com_HasTxFilterInitState()                                    
#define Com_HasTxFilterInitValueXInt16()                              
#define Com_HasTxFilterInitValueXInt32()                              
#define Com_HasTxFilterInitValueXInt8()                               
#define Com_HasTxFilterOldValueXInt16()                               
#define Com_HasTxFilterOldValueXInt32()                               
#define Com_HasTxFilterOldValueXInt8()                                
#define Com_HasTxFilterState()                                        
#define Com_HasTxModeFalse()                                          
#define Com_HasDirectOfTxModeFalse()                                  
#define Com_HasPeriodicOfTxModeFalse()                                
#define Com_HasRepCntOfTxModeFalse()                                  
#define Com_HasRepPeriodOfTxModeFalse()                               
#define Com_HasTimeOffsetOfTxModeFalse()                              
#define Com_HasTimePeriodOfTxModeFalse()                              
#define Com_HasTxModeInfo()                                           (TRUE != FALSE)
#define Com_HasInitModeOfTxModeInfo()                                 (TRUE != FALSE)
#define Com_HasInvalidHndOfTxModeInfo()                               
#define Com_HasMaskedBitsOfTxModeInfo()                               (TRUE != FALSE)
#define Com_HasMinimumDelayOfTxModeInfo()                             
#define Com_HasTxFilterInitStateEndIdxOfTxModeInfo()                  
#define Com_HasTxFilterInitStateStartIdxOfTxModeInfo()                
#define Com_HasTxFilterInitStateUsedOfTxModeInfo()                    
#define Com_HasTxModeFalseIdxOfTxModeInfo()                           
#define Com_HasTxModeFalseUsedOfTxModeInfo()                          
#define Com_HasTxModeTrueIdxOfTxModeInfo()                            (TRUE != FALSE)
#define Com_HasTxModeTrueUsedOfTxModeInfo()                           (TRUE != FALSE)
#define Com_HasTxSigInfoFilterInitValueIndEndIdxOfTxModeInfo()        
#define Com_HasTxSigInfoFilterInitValueIndStartIdxOfTxModeInfo()      
#define Com_HasTxSigInfoFilterInitValueIndUsedOfTxModeInfo()          
#define Com_HasTxModeTrue()                                           (TRUE != FALSE)
#define Com_HasDirectOfTxModeTrue()                                   
#define Com_HasPeriodicOfTxModeTrue()                                 (TRUE != FALSE)
#define Com_HasRepCntOfTxModeTrue()                                   
#define Com_HasRepPeriodOfTxModeTrue()                                
#define Com_HasTimeOffsetOfTxModeTrue()                               
#define Com_HasTimePeriodOfTxModeTrue()                               (TRUE != FALSE)
#define Com_HasTxPduBuffer()                                          (TRUE != FALSE)
#define Com_HasTxPduCalloutFuncPtr()                                  
#define Com_HasTxPduGrpActive()                                       (TRUE != FALSE)
#define Com_HasTxPduGrpInfo()                                         (TRUE != FALSE)
#define Com_HasPduGrpVectorEndIdxOfTxPduGrpInfo()                     (TRUE != FALSE)
#define Com_HasPduGrpVectorStartIdxOfTxPduGrpInfo()                   (TRUE != FALSE)
#define Com_HasPduGrpVectorUsedOfTxPduGrpInfo()                       (TRUE != FALSE)
#define Com_HasTxPduInfo()                                            (TRUE != FALSE)
#define Com_HasCancellationSupportOfTxPduInfo()                       
#define Com_HasCbkTxAckDefFuncPtrIndEndIdxOfTxPduInfo()               
#define Com_HasCbkTxAckDefFuncPtrIndStartIdxOfTxPduInfo()             
#define Com_HasCbkTxAckDefFuncPtrIndUsedOfTxPduInfo()                 
#define Com_HasCbkTxAckImFuncPtrIndEndIdxOfTxPduInfo()                
#define Com_HasCbkTxAckImFuncPtrIndStartIdxOfTxPduInfo()              
#define Com_HasCbkTxAckImFuncPtrIndUsedOfTxPduInfo()                  
#define Com_HasCbkTxErrFuncPtrIndEndIdxOfTxPduInfo()                  
#define Com_HasCbkTxErrFuncPtrIndStartIdxOfTxPduInfo()                
#define Com_HasCbkTxErrFuncPtrIndUsedOfTxPduInfo()                    
#define Com_HasClrUbOfTxPduInfo()                                     
#define Com_HasConstValueXInt8UbClearMaskEndIdxOfTxPduInfo()          
#define Com_HasConstValueXInt8UbClearMaskStartIdxOfTxPduInfo()        
#define Com_HasConstValueXInt8UbClearMaskUsedOfTxPduInfo()            
#define Com_HasExternalIdOfTxPduInfo()                                (TRUE != FALSE)
#define Com_HasGwTimeoutInfoIdxOfTxPduInfo()                          
#define Com_HasGwTimeoutInfoUsedOfTxPduInfo()                         
#define Com_HasIPduGroupInfoOfTxPduInfoIndEndIdxOfTxPduInfo()         
#define Com_HasIPduGroupInfoOfTxPduInfoIndStartIdxOfTxPduInfo()       
#define Com_HasIPduGroupInfoOfTxPduInfoIndUsedOfTxPduInfo()           
#define Com_HasInvalidHndOfTxPduInfo()                                
#define Com_HasMaskedBitsOfTxPduInfo()                                (TRUE != FALSE)
#define Com_HasMetaDataLengthOfTxPduInfo()                            (TRUE != FALSE)
#define Com_HasPduWithMetaDataLengthOfTxPduInfo()                     (TRUE != FALSE)
#define Com_HasTxPduBufferEndIdxOfTxPduInfo()                         (TRUE != FALSE)
#define Com_HasTxPduBufferLengthOfTxPduInfo()                         (TRUE != FALSE)
#define Com_HasTxPduBufferMetaDataEndIdxOfTxPduInfo()                 
#define Com_HasTxPduBufferMetaDataStartIdxOfTxPduInfo()               
#define Com_HasTxPduBufferMetaDataUsedOfTxPduInfo()                   
#define Com_HasTxPduBufferStartIdxOfTxPduInfo()                       (TRUE != FALSE)
#define Com_HasTxPduBufferUsedOfTxPduInfo()                           (TRUE != FALSE)
#define Com_HasTxPduCalloutFuncPtrIdxOfTxPduInfo()                    
#define Com_HasTxPduCalloutFuncPtrUsedOfTxPduInfo()                   
#define Com_HasTxPduInitValueEndIdxOfTxPduInfo()                      (TRUE != FALSE)
#define Com_HasTxPduInitValueMetaDataEndIdxOfTxPduInfo()              
#define Com_HasTxPduInitValueMetaDataStartIdxOfTxPduInfo()            
#define Com_HasTxPduInitValueMetaDataUsedOfTxPduInfo()                
#define Com_HasTxPduInitValueStartIdxOfTxPduInfo()                    (TRUE != FALSE)
#define Com_HasTxPduInitValueUsedOfTxPduInfo()                        (TRUE != FALSE)
#define Com_HasTxPduTTCalloutFuncPtrIdxOfTxPduInfo()                  
#define Com_HasTxPduTTCalloutFuncPtrUsedOfTxPduInfo()                 
#define Com_HasTxSigGrpInfoIndEndIdxOfTxPduInfo()                     
#define Com_HasTxSigGrpInfoIndStartIdxOfTxPduInfo()                   
#define Com_HasTxSigGrpInfoIndUsedOfTxPduInfo()                       
#define Com_HasTxTOutInfoIdxOfTxPduInfo()                             
#define Com_HasTxTOutInfoUsedOfTxPduInfo()                            
#define Com_HasTxTpInfoIdxOfTxPduInfo()                               
#define Com_HasTxTpInfoUsedOfTxPduInfo()                              
#define Com_HasTxPduInfoInd()                                         
#define Com_HasTxPduInitValue()                                       (TRUE != FALSE)
#define Com_HasTxPduTTCalloutFuncPtr()                                
#define Com_HasTxSduLength()                                          (TRUE != FALSE)
#define Com_HasTxShdBuffer()                                          
#define Com_HasTxSigGrpInfo()                                         
#define Com_HasArrayAccessUsedOfTxSigGrpInfo()                        
#define Com_HasInvalidHndOfTxSigGrpInfo()                             
#define Com_HasPduIdOfTxSigGrpInfo()                                  
#define Com_HasPduOffsetOfTxSigGrpInfo()                              
#define Com_HasSigGroupOnChangeOffsetOfTxSigGrpInfo()                 
#define Com_HasSigGroupOnChangeStartPositionOfTxSigGrpInfo()          
#define Com_HasSigGroupOnChangeWithoutRepOffsetOfTxSigGrpInfo()       
#define Com_HasSigGroupOnChangeWithoutRepStartPositionOfTxSigGrpInfo() 
#define Com_HasTransferPropertyOfTxSigGrpInfo()                       
#define Com_HasTxShdBufferEndIdxOfTxSigGrpInfo()                      
#define Com_HasTxShdBufferLengthOfTxSigGrpInfo()                      
#define Com_HasTxShdBufferStartIdxOfTxSigGrpInfo()                    
#define Com_HasTxShdBufferUsedOfTxSigGrpInfo()                        
#define Com_HasTxSigGrpMaskEndIdxOfTxSigGrpInfo()                     
#define Com_HasTxSigGrpMaskLengthOfTxSigGrpInfo()                     
#define Com_HasTxSigGrpMaskStartIdxOfTxSigGrpInfo()                   
#define Com_HasTxSigGrpMaskUsedOfTxSigGrpInfo()                       
#define Com_HasTxSigGrpOnChangeMaskOnChangeEndIdxOfTxSigGrpInfo()     
#define Com_HasTxSigGrpOnChangeMaskOnChangeLengthOfTxSigGrpInfo()     
#define Com_HasTxSigGrpOnChangeMaskOnChangeStartIdxOfTxSigGrpInfo()   
#define Com_HasTxSigGrpOnChangeMaskOnChangeUsedOfTxSigGrpInfo()       
#define Com_HasTxSigGrpOnChangeMaskOnChangeWithoutRepEndIdxOfTxSigGrpInfo() 
#define Com_HasTxSigGrpOnChangeMaskOnChangeWithoutRepLengthOfTxSigGrpInfo() 
#define Com_HasTxSigGrpOnChangeMaskOnChangeWithoutRepStartIdxOfTxSigGrpInfo() 
#define Com_HasTxSigGrpOnChangeMaskOnChangeWithoutRepUsedOfTxSigGrpInfo() 
#define Com_HasTxSigInfoInvValueIndEndIdxOfTxSigGrpInfo()             
#define Com_HasTxSigInfoInvValueIndStartIdxOfTxSigGrpInfo()           
#define Com_HasTxSigInfoInvValueIndUsedOfTxSigGrpInfo()               
#define Com_HasTxTOutInfoIdxOfTxSigGrpInfo()                          
#define Com_HasTxTOutInfoUsedOfTxSigGrpInfo()                         
#define Com_HasUbIdxOfTxSigGrpInfo()                                  
#define Com_HasUbMaskIdxOfTxSigGrpInfo()                              
#define Com_HasUbMaskUsedOfTxSigGrpInfo()                             
#define Com_HasTxSigGrpInfoInd()                                      
#define Com_HasTxSigGrpMask()                                         
#define Com_HasTxSigGrpOnChangeMask()                                 
#define Com_HasTxSigInfo()                                            (TRUE != FALSE)
#define Com_HasApplTypeOfTxSigInfo()                                  (TRUE != FALSE)
#define Com_HasBitLengthOfTxSigInfo()                                 (TRUE != FALSE)
#define Com_HasBitPositionOfTxSigInfo()                               (TRUE != FALSE)
#define Com_HasBusAccOfTxSigInfo()                                    (TRUE != FALSE)
#define Com_HasByteLengthOfTxSigInfo()                                (TRUE != FALSE)
#define Com_HasBytePositionOfTxSigInfo()                              (TRUE != FALSE)
#define Com_HasFilterInfoIdxOfTxSigInfo()                             
#define Com_HasFilterInfoUsedOfTxSigInfo()                            
#define Com_HasFilterInitValueIdxOfTxSigInfo()                        
#define Com_HasFilterInitValueUsedOfTxSigInfo()                       
#define Com_HasInvValueIdxOfTxSigInfo()                               
#define Com_HasInvValueUsedOfTxSigInfo()                              
#define Com_HasInvalidHndOfTxSigInfo()                                
#define Com_HasOnChangeIdxOfTxSigInfo()                               
#define Com_HasOnChangeUsedOfTxSigInfo()                              
#define Com_HasPduIdOfTxSigInfo()                                     (TRUE != FALSE)
#define Com_HasStartByteInPduPositionOfTxSigInfo()                    (TRUE != FALSE)
#define Com_HasTriggeredOfTxSigInfo()                                 
#define Com_HasTxFilterInitStateIdxOfTxSigInfo()                      
#define Com_HasTxFilterInitStateUsedOfTxSigInfo()                     
#define Com_HasTxSigGrpInfoIdxOfTxSigInfo()                           
#define Com_HasTxSigGrpInfoUsedOfTxSigInfo()                          
#define Com_HasTxTOutInfoIdxOfTxSigInfo()                             
#define Com_HasTxTOutInfoUsedOfTxSigInfo()                            
#define Com_HasUbIdxOfTxSigInfo()                                     
#define Com_HasUbMaskIdxOfTxSigInfo()                                 
#define Com_HasUbMaskUsedOfTxSigInfo()                                
#define Com_HasWithoutRepOfTxSigInfo()                                
#define Com_HasTxSigInfoFilterInitValueInd()                          
#define Com_HasTxSigInfoInvValueInd()                                 
#define Com_HasTxTOutCnt()                                            
#define Com_HasTxTOutInfo()                                           
#define Com_HasCbkTxTOutFuncPtrIndEndIdxOfTxTOutInfo()                
#define Com_HasCbkTxTOutFuncPtrIndStartIdxOfTxTOutInfo()              
#define Com_HasCbkTxTOutFuncPtrIndUsedOfTxTOutInfo()                  
#define Com_HasFactorOfTxTOutInfo()                                   
#define Com_HasNoneModeOfTxTOutInfo()                                 
#define Com_HasTxPduInfoIdxOfTxTOutInfo()                             
#define Com_HasTxTmpTpPduLength()                                     
#define Com_HasTxTpConnectionState()                                  
#define Com_HasTxTpInfo()                                             
#define Com_HasBufferSizeOfTxTpInfo()                                 
#define Com_HasTxPduBufferEndIdxOfTxTpInfo()                          
#define Com_HasTxPduBufferLengthOfTxTpInfo()                          
#define Com_HasTxPduBufferStartIdxOfTxTpInfo()                        
#define Com_HasTxPduBufferUsedOfTxTpInfo()                            
#define Com_HasTxSigInfoDynSigIdxOfTxTpInfo()                         
#define Com_HasTxSigInfoDynSigUsedOfTxTpInfo()                        
#define Com_HasTxTpSduLength()                                        
#define Com_HasTxTpWrittenBytesCounter()                              
#define Com_HasWaitingForConfirmation()                               (TRUE != FALSE)
#define Com_HasgwEventCache()                                         
#define Com_HasgwEventCacheIndex()                                    
#define Com_HasPCConfig()                                             (TRUE != FALSE)
#define Com_HasAllSigCntOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasAllSigGrpCntOfPCConfig()                               (TRUE != FALSE)
#define Com_HasConfigIdOfPCConfig()                                   (TRUE != FALSE)
#define Com_HasConstValueXInt8OfPCConfig()                            (TRUE != FALSE)
#define Com_HasCurrentTxModeOfPCConfig()                              (TRUE != FALSE)
#define Com_HasCycleTimeCntOfPCConfig()                               (TRUE != FALSE)
#define Com_HasCyclicSendRequestOfPCConfig()                          (TRUE != FALSE)
#define Com_HasDelayTimeCntOfPCConfig()                               (TRUE != FALSE)
#define Com_HasFinalMagicNumberOfPCConfig()                           
#define Com_HasHandleRxPduDeferredOfPCConfig()                        (TRUE != FALSE)
#define Com_HasHandleTxPduDeferredOfPCConfig()                        (TRUE != FALSE)
#define Com_HasInitDataHashCodeOfPCConfig()                           
#define Com_HasInitializedOfPCConfig()                                (TRUE != FALSE)
#define Com_HasPduGrpCntOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasPduGrpVectorOfPCConfig()                               (TRUE != FALSE)
#define Com_HasRepCntOfPCConfig()                                     (TRUE != FALSE)
#define Com_HasRepCycleCntOfPCConfig()                                (TRUE != FALSE)
#define Com_HasRxAccessInfoIndOfPCConfig()                            (TRUE != FALSE)
#define Com_HasRxAccessInfoOfPCConfig()                               (TRUE != FALSE)
#define Com_HasRxDefPduBufferOfPCConfig()                             (TRUE != FALSE)
#define Com_HasRxDlMonDivisorCounterOfPCConfig()                      (TRUE != FALSE)
#define Com_HasRxDlMonDivisorOfPCConfig()                             
#define Com_HasRxPduGrpActiveOfPCConfig()                             (TRUE != FALSE)
#define Com_HasRxPduGrpInfoOfPCConfig()                               (TRUE != FALSE)
#define Com_HasRxPduInfoOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasRxSigBufferXInt8OfPCConfig()                           (TRUE != FALSE)
#define Com_HasRxSigInfoOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasSizeOfConstValueXInt8OfPCConfig()                      (TRUE != FALSE)
#define Com_HasSizeOfCurrentTxModeOfPCConfig()                        (TRUE != FALSE)
#define Com_HasSizeOfCycleTimeCntOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfCyclicSendRequestOfPCConfig()                    (TRUE != FALSE)
#define Com_HasSizeOfDelayTimeCntOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfHandleRxPduDeferredOfPCConfig()                  (TRUE != FALSE)
#define Com_HasSizeOfHandleTxPduDeferredOfPCConfig()                  (TRUE != FALSE)
#define Com_HasSizeOfPduGrpVectorOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfRepCntOfPCConfig()                               (TRUE != FALSE)
#define Com_HasSizeOfRepCycleCntOfPCConfig()                          (TRUE != FALSE)
#define Com_HasSizeOfRxAccessInfoIndOfPCConfig()                      (TRUE != FALSE)
#define Com_HasSizeOfRxAccessInfoOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfRxDefPduBufferOfPCConfig()                       (TRUE != FALSE)
#define Com_HasSizeOfRxPduGrpActiveOfPCConfig()                       (TRUE != FALSE)
#define Com_HasSizeOfRxPduGrpInfoOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfRxPduInfoOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfRxSigBufferXInt8OfPCConfig()                     (TRUE != FALSE)
#define Com_HasSizeOfRxSigInfoOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfTransmitRequestOfPCConfig()                      (TRUE != FALSE)
#define Com_HasSizeOfTxModeInfoOfPCConfig()                           (TRUE != FALSE)
#define Com_HasSizeOfTxModeTrueOfPCConfig()                           (TRUE != FALSE)
#define Com_HasSizeOfTxPduBufferOfPCConfig()                          (TRUE != FALSE)
#define Com_HasSizeOfTxPduGrpActiveOfPCConfig()                       (TRUE != FALSE)
#define Com_HasSizeOfTxPduGrpInfoOfPCConfig()                         (TRUE != FALSE)
#define Com_HasSizeOfTxPduInfoOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfTxPduInitValueOfPCConfig()                       (TRUE != FALSE)
#define Com_HasSizeOfTxSduLengthOfPCConfig()                          (TRUE != FALSE)
#define Com_HasSizeOfTxSigInfoOfPCConfig()                            (TRUE != FALSE)
#define Com_HasSizeOfWaitingForConfirmationOfPCConfig()               (TRUE != FALSE)
#define Com_HasTransmitRequestOfPCConfig()                            (TRUE != FALSE)
#define Com_HasTxCycleCounterDivisorCounterOfPCConfig()               (TRUE != FALSE)
#define Com_HasTxCycleCounterDivisorOfPCConfig()                      (TRUE != FALSE)
#define Com_HasTxDlMonDivisorCounterOfPCConfig()                      (TRUE != FALSE)
#define Com_HasTxDlMonDivisorOfPCConfig()                             
#define Com_HasTxModeInfoOfPCConfig()                                 (TRUE != FALSE)
#define Com_HasTxModeTrueOfPCConfig()                                 (TRUE != FALSE)
#define Com_HasTxPduBufferOfPCConfig()                                (TRUE != FALSE)
#define Com_HasTxPduGrpActiveOfPCConfig()                             (TRUE != FALSE)
#define Com_HasTxPduGrpInfoOfPCConfig()                               (TRUE != FALSE)
#define Com_HasTxPduInfoOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasTxPduInitValueOfPCConfig()                             (TRUE != FALSE)
#define Com_HasTxSduLengthOfPCConfig()                                (TRUE != FALSE)
#define Com_HasTxSigInfoOfPCConfig()                                  (TRUE != FALSE)
#define Com_HasWaitingForConfirmationOfPCConfig()                     (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  ComPCIncrementDataMacros  Com Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Com_IncCycleTimeCnt(Index)                                    Com_GetCycleTimeCnt(Index)++
#define Com_IncDeferredGwMappingEvent(Index)                          
#define Com_IncDelayTimeCnt(Index)                                    Com_GetDelayTimeCnt(Index)++
#define Com_IncGwRoutingTimeoutCounter(Index)                         
#define Com_IncHandleRxDeferredGwDescription(Index)                   
#define Com_IncHandleRxPduDeferred(Index)                             Com_GetHandleRxPduDeferred(Index)++
#define Com_IncRepCnt(Index)                                          Com_GetRepCnt(Index)++
#define Com_IncRepCycleCnt(Index)                                     Com_GetRepCycleCnt(Index)++
#define Com_IncRxDefPduBuffer(Index)                                  Com_GetRxDefPduBuffer(Index)++
#define Com_IncRxDeferredEventCache(Index)                            
#define Com_IncRxDlMonDivisorCounter()                                Com_GetRxDlMonDivisorCounter()++
#define Com_IncRxDynSignalLength(Index)                               
#define Com_IncRxDynSignalTmpLengthForSignalGroups(Index)             
#define Com_IncRxNextEventCacheEnty()                                 
#define Com_IncRxShdBufferXInt16(Index)                               
#define Com_IncRxShdBufferXInt32(Index)                               
#define Com_IncRxShdBufferXInt8(Index)                                
#define Com_IncRxSigBufferXInt16(Index)                               
#define Com_IncRxSigBufferXInt32(Index)                               
#define Com_IncRxSigBufferXInt8(Index)                                Com_GetRxSigBufferXInt8(Index)++
#define Com_IncRxTOutCnt(Index)                                       
#define Com_IncRxTpBuffer(Index)                                      
#define Com_IncRxTpSduLength(Index)                                   
#define Com_IncRxTpWrittenBytesCounter(Index)                         
#define Com_IncSigGrpEventFlag(Index)                                 
#define Com_IncTmpRxBuffer(Index)                                     
#define Com_IncTmpRxShdBufferXInt16(Index)                            
#define Com_IncTmpRxShdBufferXInt32(Index)                            
#define Com_IncTmpRxShdBufferXInt8(Index)                             
#define Com_IncTxCycleCounterDivisorCounter()                         Com_GetTxCycleCounterDivisorCounter()++
#define Com_IncTxDlMonDivisorCounter()                                Com_GetTxDlMonDivisorCounter()++
#define Com_IncTxDynSignalLength(Index)                               
#define Com_IncTxFilterOldValueXInt16(Index)                          
#define Com_IncTxFilterOldValueXInt32(Index)                          
#define Com_IncTxFilterOldValueXInt8(Index)                           
#define Com_IncTxPduBuffer(Index)                                     Com_GetTxPduBuffer(Index)++
#define Com_IncTxSduLength(Index)                                     Com_GetTxSduLength(Index)++
#define Com_IncTxShdBuffer(Index)                                     
#define Com_IncTxTOutCnt(Index)                                       
#define Com_IncTxTmpTpPduLength(Index)                                
#define Com_IncTxTpSduLength(Index)                                   
#define Com_IncTxTpWrittenBytesCounter(Index)                         
#define Com_IncgwEventCache(Index)                                    
#define Com_IncgwEventCacheIndex()                                    
/** 
  \}
*/ 

/** 
  \defgroup  ComPCDecrementDataMacros  Com Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Com_DecCycleTimeCnt(Index)                                    Com_GetCycleTimeCnt(Index)--
#define Com_DecDeferredGwMappingEvent(Index)                          
#define Com_DecDelayTimeCnt(Index)                                    Com_GetDelayTimeCnt(Index)--
#define Com_DecGwRoutingTimeoutCounter(Index)                         
#define Com_DecHandleRxDeferredGwDescription(Index)                   
#define Com_DecHandleRxPduDeferred(Index)                             Com_GetHandleRxPduDeferred(Index)--
#define Com_DecRepCnt(Index)                                          Com_GetRepCnt(Index)--
#define Com_DecRepCycleCnt(Index)                                     Com_GetRepCycleCnt(Index)--
#define Com_DecRxDefPduBuffer(Index)                                  Com_GetRxDefPduBuffer(Index)--
#define Com_DecRxDeferredEventCache(Index)                            
#define Com_DecRxDlMonDivisorCounter()                                Com_GetRxDlMonDivisorCounter()--
#define Com_DecRxDynSignalLength(Index)                               
#define Com_DecRxDynSignalTmpLengthForSignalGroups(Index)             
#define Com_DecRxNextEventCacheEnty()                                 
#define Com_DecRxShdBufferXInt16(Index)                               
#define Com_DecRxShdBufferXInt32(Index)                               
#define Com_DecRxShdBufferXInt8(Index)                                
#define Com_DecRxSigBufferXInt16(Index)                               
#define Com_DecRxSigBufferXInt32(Index)                               
#define Com_DecRxSigBufferXInt8(Index)                                Com_GetRxSigBufferXInt8(Index)--
#define Com_DecRxTOutCnt(Index)                                       
#define Com_DecRxTpBuffer(Index)                                      
#define Com_DecRxTpSduLength(Index)                                   
#define Com_DecRxTpWrittenBytesCounter(Index)                         
#define Com_DecSigGrpEventFlag(Index)                                 
#define Com_DecTmpRxBuffer(Index)                                     
#define Com_DecTmpRxShdBufferXInt16(Index)                            
#define Com_DecTmpRxShdBufferXInt32(Index)                            
#define Com_DecTmpRxShdBufferXInt8(Index)                             
#define Com_DecTxCycleCounterDivisorCounter()                         Com_GetTxCycleCounterDivisorCounter()--
#define Com_DecTxDlMonDivisorCounter()                                Com_GetTxDlMonDivisorCounter()--
#define Com_DecTxDynSignalLength(Index)                               
#define Com_DecTxFilterOldValueXInt16(Index)                          
#define Com_DecTxFilterOldValueXInt32(Index)                          
#define Com_DecTxFilterOldValueXInt8(Index)                           
#define Com_DecTxPduBuffer(Index)                                     Com_GetTxPduBuffer(Index)--
#define Com_DecTxSduLength(Index)                                     Com_GetTxSduLength(Index)--
#define Com_DecTxShdBuffer(Index)                                     
#define Com_DecTxTOutCnt(Index)                                       
#define Com_DecTxTmpTpPduLength(Index)                                
#define Com_DecTxTpSduLength(Index)                                   
#define Com_DecTxTpWrittenBytesCounter(Index)                         
#define Com_DecgwEventCache(Index)                                    
#define Com_DecgwEventCacheIndex()                                    
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



/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  ComPCIterableTypes  Com Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Com_ConstValueXInt8 */
typedef uint8_least Com_ConstValueXInt8IterType;

/**   \brief  type used to iterate Com_HandleRxPduDeferred */
typedef uint8_least Com_HandleRxPduDeferredIterType;

/**   \brief  type used to iterate Com_PduGrpVector */
typedef uint8_least Com_PduGrpVectorIterType;

/**   \brief  type used to iterate Com_RxAccessInfo */
typedef uint8_least Com_RxAccessInfoIterType;

/**   \brief  type used to iterate Com_RxAccessInfoInd */
typedef uint8_least Com_RxAccessInfoIndIterType;

/**   \brief  type used to iterate Com_RxDefPduBuffer */
typedef uint8_least Com_RxDefPduBufferIterType;

/**   \brief  type used to iterate Com_RxPduGrpInfo */
typedef uint8_least Com_RxPduGrpInfoIterType;

/**   \brief  type used to iterate Com_RxPduInfo */
typedef uint8_least Com_RxPduInfoIterType;

/**   \brief  type used to iterate Com_RxSigBufferXInt8 */
typedef uint8_least Com_RxSigBufferXInt8IterType;

/**   \brief  type used to iterate Com_RxSigInfo */
typedef uint8_least Com_RxSigInfoIterType;

/**   \brief  type used to iterate Com_TxModeInfo */
typedef uint8_least Com_TxModeInfoIterType;

/**   \brief  type used to iterate Com_TxModeTrue */
typedef uint8_least Com_TxModeTrueIterType;

/**   \brief  type used to iterate Com_TxPduBuffer */
typedef uint8_least Com_TxPduBufferIterType;

/**   \brief  type used to iterate Com_TxPduGrpInfo */
typedef uint8_least Com_TxPduGrpInfoIterType;

/**   \brief  type used to iterate Com_TxPduInfo */
typedef uint8_least Com_TxPduInfoIterType;

/**   \brief  type used to iterate Com_TxPduInitValue */
typedef uint8_least Com_TxPduInitValueIterType;

/**   \brief  type used to iterate Com_TxSigInfo */
typedef uint8_least Com_TxSigInfoIterType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCIterableTypesWithSizeRelations  Com Iterable Types With Size Relations (PRE_COMPILE)
  \brief  These type definitions are used to iterate over a VAR based array with the same iterator as the related CONST array.
  \{
*/ 
/**   \brief  type used to iterate Com_CurrentTxMode */
typedef Com_TxModeInfoIterType Com_CurrentTxModeIterType;

/**   \brief  type used to iterate Com_CycleTimeCnt */
typedef Com_TxModeInfoIterType Com_CycleTimeCntIterType;

/**   \brief  type used to iterate Com_CyclicSendRequest */
typedef Com_TxModeInfoIterType Com_CyclicSendRequestIterType;

/**   \brief  type used to iterate Com_DelayTimeCnt */
typedef Com_TxModeInfoIterType Com_DelayTimeCntIterType;

/**   \brief  type used to iterate Com_HandleTxPduDeferred */
typedef Com_TxPduInfoIterType Com_HandleTxPduDeferredIterType;

/**   \brief  type used to iterate Com_RepCnt */
typedef Com_TxModeInfoIterType Com_RepCntIterType;

/**   \brief  type used to iterate Com_RepCycleCnt */
typedef Com_TxModeInfoIterType Com_RepCycleCntIterType;

/**   \brief  type used to iterate Com_RxPduGrpActive */
typedef Com_RxPduGrpInfoIterType Com_RxPduGrpActiveIterType;

/**   \brief  type used to iterate Com_TransmitRequest */
typedef Com_TxModeInfoIterType Com_TransmitRequestIterType;

/**   \brief  type used to iterate Com_TxPduGrpActive */
typedef Com_TxPduGrpInfoIterType Com_TxPduGrpActiveIterType;

/**   \brief  type used to iterate Com_TxSduLength */
typedef Com_TxPduInfoIterType Com_TxSduLengthIterType;

/**   \brief  type used to iterate Com_WaitingForConfirmation */
typedef Com_TxPduInfoIterType Com_WaitingForConfirmationIterType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCValueTypes  Com Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Com_AllSigCnt */
typedef uint8 Com_AllSigCntType;

/**   \brief  value based type definition for Com_AllSigGrpCnt */
typedef uint8 Com_AllSigGrpCntType;

/**   \brief  value based type definition for Com_ConfigId */
typedef uint8 Com_ConfigIdType;

/**   \brief  value based type definition for Com_ConstValueXInt8 */
typedef uint8 Com_ConstValueXInt8Type;

/**   \brief  value based type definition for Com_CurrentTxMode */
typedef boolean Com_CurrentTxModeType;

/**   \brief  value based type definition for Com_CycleTimeCnt */
typedef uint16 Com_CycleTimeCntType;

/**   \brief  value based type definition for Com_CyclicSendRequest */
typedef boolean Com_CyclicSendRequestType;

/**   \brief  value based type definition for Com_DelayTimeCnt */
typedef uint16 Com_DelayTimeCntType;

/**   \brief  value based type definition for Com_HandleRxPduDeferred */
typedef PduLengthType Com_HandleRxPduDeferredType;

/**   \brief  value based type definition for Com_HandleTxPduDeferred */
typedef boolean Com_HandleTxPduDeferredType;

/**   \brief  value based type definition for Com_Initialized */
typedef boolean Com_InitializedType;

/**   \brief  value based type definition for Com_PduGrpCnt */
typedef uint8 Com_PduGrpCntType;

/**   \brief  value based type definition for Com_PduGrpVector */
typedef uint8 Com_PduGrpVectorType;

/**   \brief  value based type definition for Com_RepCnt */
typedef uint16 Com_RepCntType;

/**   \brief  value based type definition for Com_RepCycleCnt */
typedef uint16 Com_RepCycleCntType;

/**   \brief  value based type definition for Com_ApplTypeOfRxAccessInfo */
typedef uint8 Com_ApplTypeOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BitLengthOfRxAccessInfo */
typedef uint8 Com_BitLengthOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BitPositionOfRxAccessInfo */
typedef uint8 Com_BitPositionOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BufferIdxOfRxAccessInfo */
typedef uint8 Com_BufferIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BufferUsedOfRxAccessInfo */
typedef boolean Com_BufferUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BusAccOfRxAccessInfo */
typedef uint8 Com_BusAccOfRxAccessInfoType;

/**   \brief  value based type definition for Com_ByteLengthOfRxAccessInfo */
typedef uint8 Com_ByteLengthOfRxAccessInfoType;

/**   \brief  value based type definition for Com_BytePositionOfRxAccessInfo */
typedef uint8 Com_BytePositionOfRxAccessInfoType;

/**   \brief  value based type definition for Com_InitValueIdxOfRxAccessInfo */
typedef uint8 Com_InitValueIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_InitValueUsedOfRxAccessInfo */
typedef boolean Com_InitValueUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_MaskedBitsOfRxAccessInfo */
typedef uint8 Com_MaskedBitsOfRxAccessInfoType;

/**   \brief  value based type definition for Com_PduIdOfRxAccessInfo */
typedef uint8 Com_PduIdOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxDataTimeoutSubstitutionValueIdxOfRxAccessInfo */
typedef uint8 Com_RxDataTimeoutSubstitutionValueIdxOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxDataTimeoutSubstitutionValueUsedOfRxAccessInfo */
typedef boolean Com_RxDataTimeoutSubstitutionValueUsedOfRxAccessInfoType;

/**   \brief  value based type definition for Com_StartByteInPduPositionOfRxAccessInfo */
typedef uint8 Com_StartByteInPduPositionOfRxAccessInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoInd */
typedef uint8 Com_RxAccessInfoIndType;

/**   \brief  value based type definition for Com_RxDefPduBuffer */
typedef uint8 Com_RxDefPduBufferType;

/**   \brief  value based type definition for Com_RxDlMonDivisorCounter */
typedef uint16 Com_RxDlMonDivisorCounterType;

/**   \brief  value based type definition for Com_RxPduGrpActive */
typedef boolean Com_RxPduGrpActiveType;

/**   \brief  value based type definition for Com_PduGrpVectorEndIdxOfRxPduGrpInfo */
typedef uint8 Com_PduGrpVectorEndIdxOfRxPduGrpInfoType;

/**   \brief  value based type definition for Com_PduGrpVectorStartIdxOfRxPduGrpInfo */
typedef uint8 Com_PduGrpVectorStartIdxOfRxPduGrpInfoType;

/**   \brief  value based type definition for Com_PduGrpVectorUsedOfRxPduGrpInfo */
typedef boolean Com_PduGrpVectorUsedOfRxPduGrpInfoType;

/**   \brief  value based type definition for Com_HandleRxPduDeferredIdxOfRxPduInfo */
typedef uint8 Com_HandleRxPduDeferredIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_HandleRxPduDeferredUsedOfRxPduInfo */
typedef boolean Com_HandleRxPduDeferredUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_MaskedBitsOfRxPduInfo */
typedef uint8 Com_MaskedBitsOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoIndEndIdxOfRxPduInfo */
typedef uint8 Com_RxAccessInfoIndEndIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoIndStartIdxOfRxPduInfo */
typedef uint8 Com_RxAccessInfoIndStartIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxAccessInfoIndUsedOfRxPduInfo */
typedef boolean Com_RxAccessInfoIndUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxDefPduBufferEndIdxOfRxPduInfo */
typedef uint8 Com_RxDefPduBufferEndIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxDefPduBufferLengthOfRxPduInfo */
typedef uint8 Com_RxDefPduBufferLengthOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxDefPduBufferStartIdxOfRxPduInfo */
typedef uint8 Com_RxDefPduBufferStartIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxDefPduBufferUsedOfRxPduInfo */
typedef boolean Com_RxDefPduBufferUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigInfoEndIdxOfRxPduInfo */
typedef uint8 Com_RxSigInfoEndIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigInfoStartIdxOfRxPduInfo */
typedef uint8 Com_RxSigInfoStartIdxOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigInfoUsedOfRxPduInfo */
typedef boolean Com_RxSigInfoUsedOfRxPduInfoType;

/**   \brief  value based type definition for Com_RxSigBufferXInt8 */
typedef uint8 Com_RxSigBufferXInt8Type;

/**   \brief  value based type definition for Com_RxAccessInfoIdxOfRxSigInfo */
typedef uint8 Com_RxAccessInfoIdxOfRxSigInfoType;

/**   \brief  value based type definition for Com_SignalProcessingOfRxSigInfo */
typedef uint8 Com_SignalProcessingOfRxSigInfoType;

/**   \brief  value based type definition for Com_ValidDlcOfRxSigInfo */
typedef uint8 Com_ValidDlcOfRxSigInfoType;

/**   \brief  value based type definition for Com_SizeOfConstValueXInt8 */
typedef uint8 Com_SizeOfConstValueXInt8Type;

/**   \brief  value based type definition for Com_SizeOfCurrentTxMode */
typedef uint8 Com_SizeOfCurrentTxModeType;

/**   \brief  value based type definition for Com_SizeOfCycleTimeCnt */
typedef uint8 Com_SizeOfCycleTimeCntType;

/**   \brief  value based type definition for Com_SizeOfCyclicSendRequest */
typedef uint8 Com_SizeOfCyclicSendRequestType;

/**   \brief  value based type definition for Com_SizeOfDelayTimeCnt */
typedef uint8 Com_SizeOfDelayTimeCntType;

/**   \brief  value based type definition for Com_SizeOfHandleRxPduDeferred */
typedef uint8 Com_SizeOfHandleRxPduDeferredType;

/**   \brief  value based type definition for Com_SizeOfHandleTxPduDeferred */
typedef uint8 Com_SizeOfHandleTxPduDeferredType;

/**   \brief  value based type definition for Com_SizeOfPduGrpVector */
typedef uint8 Com_SizeOfPduGrpVectorType;

/**   \brief  value based type definition for Com_SizeOfRepCnt */
typedef uint8 Com_SizeOfRepCntType;

/**   \brief  value based type definition for Com_SizeOfRepCycleCnt */
typedef uint8 Com_SizeOfRepCycleCntType;

/**   \brief  value based type definition for Com_SizeOfRxAccessInfo */
typedef uint8 Com_SizeOfRxAccessInfoType;

/**   \brief  value based type definition for Com_SizeOfRxAccessInfoInd */
typedef uint8 Com_SizeOfRxAccessInfoIndType;

/**   \brief  value based type definition for Com_SizeOfRxDefPduBuffer */
typedef uint8 Com_SizeOfRxDefPduBufferType;

/**   \brief  value based type definition for Com_SizeOfRxPduGrpActive */
typedef uint8 Com_SizeOfRxPduGrpActiveType;

/**   \brief  value based type definition for Com_SizeOfRxPduGrpInfo */
typedef uint8 Com_SizeOfRxPduGrpInfoType;

/**   \brief  value based type definition for Com_SizeOfRxPduInfo */
typedef uint8 Com_SizeOfRxPduInfoType;

/**   \brief  value based type definition for Com_SizeOfRxSigBufferXInt8 */
typedef uint8 Com_SizeOfRxSigBufferXInt8Type;

/**   \brief  value based type definition for Com_SizeOfRxSigInfo */
typedef uint8 Com_SizeOfRxSigInfoType;

/**   \brief  value based type definition for Com_SizeOfTransmitRequest */
typedef uint8 Com_SizeOfTransmitRequestType;

/**   \brief  value based type definition for Com_SizeOfTxModeInfo */
typedef uint8 Com_SizeOfTxModeInfoType;

/**   \brief  value based type definition for Com_SizeOfTxModeTrue */
typedef uint8 Com_SizeOfTxModeTrueType;

/**   \brief  value based type definition for Com_SizeOfTxPduBuffer */
typedef uint8 Com_SizeOfTxPduBufferType;

/**   \brief  value based type definition for Com_SizeOfTxPduGrpActive */
typedef uint8 Com_SizeOfTxPduGrpActiveType;

/**   \brief  value based type definition for Com_SizeOfTxPduGrpInfo */
typedef uint8 Com_SizeOfTxPduGrpInfoType;

/**   \brief  value based type definition for Com_SizeOfTxPduInfo */
typedef uint8 Com_SizeOfTxPduInfoType;

/**   \brief  value based type definition for Com_SizeOfTxPduInitValue */
typedef uint8 Com_SizeOfTxPduInitValueType;

/**   \brief  value based type definition for Com_SizeOfTxSduLength */
typedef uint8 Com_SizeOfTxSduLengthType;

/**   \brief  value based type definition for Com_SizeOfTxSigInfo */
typedef uint8 Com_SizeOfTxSigInfoType;

/**   \brief  value based type definition for Com_SizeOfWaitingForConfirmation */
typedef uint8 Com_SizeOfWaitingForConfirmationType;

/**   \brief  value based type definition for Com_TransmitRequest */
typedef boolean Com_TransmitRequestType;

/**   \brief  value based type definition for Com_TxCycleCounterDivisor */
typedef uint8 Com_TxCycleCounterDivisorType;

/**   \brief  value based type definition for Com_TxCycleCounterDivisorCounter */
typedef uint16 Com_TxCycleCounterDivisorCounterType;

/**   \brief  value based type definition for Com_TxDlMonDivisorCounter */
typedef uint16 Com_TxDlMonDivisorCounterType;

/**   \brief  value based type definition for Com_InitModeOfTxModeInfo */
typedef boolean Com_InitModeOfTxModeInfoType;

/**   \brief  value based type definition for Com_MaskedBitsOfTxModeInfo */
typedef uint8 Com_MaskedBitsOfTxModeInfoType;

/**   \brief  value based type definition for Com_TxModeTrueIdxOfTxModeInfo */
typedef uint8 Com_TxModeTrueIdxOfTxModeInfoType;

/**   \brief  value based type definition for Com_TxModeTrueUsedOfTxModeInfo */
typedef boolean Com_TxModeTrueUsedOfTxModeInfoType;

/**   \brief  value based type definition for Com_PeriodicOfTxModeTrue */
typedef boolean Com_PeriodicOfTxModeTrueType;

/**   \brief  value based type definition for Com_TimePeriodOfTxModeTrue */
typedef uint8 Com_TimePeriodOfTxModeTrueType;

/**   \brief  value based type definition for Com_TxPduBuffer */
typedef uint8 Com_TxPduBufferType;

/**   \brief  value based type definition for Com_TxPduGrpActive */
typedef boolean Com_TxPduGrpActiveType;

/**   \brief  value based type definition for Com_PduGrpVectorEndIdxOfTxPduGrpInfo */
typedef uint8 Com_PduGrpVectorEndIdxOfTxPduGrpInfoType;

/**   \brief  value based type definition for Com_PduGrpVectorStartIdxOfTxPduGrpInfo */
typedef uint8 Com_PduGrpVectorStartIdxOfTxPduGrpInfoType;

/**   \brief  value based type definition for Com_PduGrpVectorUsedOfTxPduGrpInfo */
typedef boolean Com_PduGrpVectorUsedOfTxPduGrpInfoType;

/**   \brief  value based type definition for Com_ExternalIdOfTxPduInfo */
typedef uint8 Com_ExternalIdOfTxPduInfoType;

/**   \brief  value based type definition for Com_MaskedBitsOfTxPduInfo */
typedef uint8 Com_MaskedBitsOfTxPduInfoType;

/**   \brief  value based type definition for Com_MetaDataLengthOfTxPduInfo */
typedef uint8 Com_MetaDataLengthOfTxPduInfoType;

/**   \brief  value based type definition for Com_PduWithMetaDataLengthOfTxPduInfo */
typedef uint8 Com_PduWithMetaDataLengthOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduBufferEndIdxOfTxPduInfo */
typedef uint8 Com_TxPduBufferEndIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduBufferLengthOfTxPduInfo */
typedef uint8 Com_TxPduBufferLengthOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduBufferStartIdxOfTxPduInfo */
typedef uint8 Com_TxPduBufferStartIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduBufferUsedOfTxPduInfo */
typedef boolean Com_TxPduBufferUsedOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValueEndIdxOfTxPduInfo */
typedef uint8 Com_TxPduInitValueEndIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValueStartIdxOfTxPduInfo */
typedef uint8 Com_TxPduInitValueStartIdxOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValueUsedOfTxPduInfo */
typedef boolean Com_TxPduInitValueUsedOfTxPduInfoType;

/**   \brief  value based type definition for Com_TxPduInitValue */
typedef uint8 Com_TxPduInitValueType;

/**   \brief  value based type definition for Com_TxSduLength */
typedef PduLengthType Com_TxSduLengthType;

/**   \brief  value based type definition for Com_ApplTypeOfTxSigInfo */
typedef uint8 Com_ApplTypeOfTxSigInfoType;

/**   \brief  value based type definition for Com_BitLengthOfTxSigInfo */
typedef uint8 Com_BitLengthOfTxSigInfoType;

/**   \brief  value based type definition for Com_BitPositionOfTxSigInfo */
typedef uint8 Com_BitPositionOfTxSigInfoType;

/**   \brief  value based type definition for Com_BusAccOfTxSigInfo */
typedef uint8 Com_BusAccOfTxSigInfoType;

/**   \brief  value based type definition for Com_ByteLengthOfTxSigInfo */
typedef uint8 Com_ByteLengthOfTxSigInfoType;

/**   \brief  value based type definition for Com_BytePositionOfTxSigInfo */
typedef uint8 Com_BytePositionOfTxSigInfoType;

/**   \brief  value based type definition for Com_PduIdOfTxSigInfo */
typedef uint8 Com_PduIdOfTxSigInfoType;

/**   \brief  value based type definition for Com_StartByteInPduPositionOfTxSigInfo */
typedef uint8 Com_StartByteInPduPositionOfTxSigInfoType;

/**   \brief  value based type definition for Com_WaitingForConfirmation */
typedef boolean Com_WaitingForConfirmationType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCStructTypes  Com Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Com_RxAccessInfo */
typedef struct sCom_RxAccessInfoType
{
  uint8 Com_RxAccessInfoNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_RxAccessInfoType;

/**   \brief  type used in Com_RxPduGrpInfo */
typedef struct sCom_RxPduGrpInfoType
{
  uint8 Com_RxPduGrpInfoNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_RxPduGrpInfoType;

/**   \brief  type used in Com_RxPduInfo */
typedef struct sCom_RxPduInfoType
{
  uint8 Com_RxPduInfoNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_RxPduInfoType;

/**   \brief  type used in Com_RxSigInfo */
typedef struct sCom_RxSigInfoType
{
  uint8 Com_RxSigInfoNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_RxSigInfoType;

/**   \brief  type used in Com_TxModeInfo */
typedef struct sCom_TxModeInfoType
{
  uint8 Com_TxModeInfoNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_TxModeInfoType;

/**   \brief  type used in Com_TxModeTrue */
typedef struct sCom_TxModeTrueType
{
  uint8 Com_TxModeTrueNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_TxModeTrueType;

/**   \brief  type used in Com_TxPduGrpInfo */
typedef struct sCom_TxPduGrpInfoType
{
  uint8 Com_TxPduGrpInfoNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_TxPduGrpInfoType;

/**   \brief  type used in Com_TxPduInfo */
typedef struct sCom_TxPduInfoType
{
  uint8 Com_TxPduInfoNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_TxPduInfoType;

/**   \brief  type used in Com_TxSigInfo */
typedef struct sCom_TxSigInfoType
{
  uint8 Com_TxSigInfoNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_TxSigInfoType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCSymbolicStructTypes  Com Symbolic Struct Types (PRE_COMPILE)
  \brief  These structs are used in unions to have a symbol based data representation style.
  \{
*/ 
/**   \brief  type to be used as symbolic data element access to Com_CurrentTxMode */
typedef struct sCom_CurrentTxModeStructTag
{
  Com_CurrentTxModeType msg_Transmit_oCAN00_Out[1];
} sCom_CurrentTxModeStructType;

/**   \brief  type to be used as symbolic data element access to Com_CycleTimeCnt */
typedef struct sCom_CycleTimeCntStructTag
{
  Com_CycleTimeCntType msg_Transmit_oCAN00_Out[1];
} sCom_CycleTimeCntStructType;

/**   \brief  type to be used as symbolic data element access to Com_CyclicSendRequest */
typedef struct sCom_CyclicSendRequestStructTag
{
  Com_CyclicSendRequestType msg_Transmit_oCAN00_Out[1];
} sCom_CyclicSendRequestStructType;

/**   \brief  type to be used as symbolic data element access to Com_DelayTimeCnt */
typedef struct sCom_DelayTimeCntStructTag
{
  Com_DelayTimeCntType msg_Transmit_oCAN00_Out[1];
} sCom_DelayTimeCntStructType;

/**   \brief  type to be used as symbolic data element access to Com_HandleRxPduDeferred */
typedef struct sCom_HandleRxPduDeferredStructTag
{
  Com_HandleRxPduDeferredType msg_Receive_oCAN00_In[1];
} sCom_HandleRxPduDeferredStructType;

/**   \brief  type to be used as symbolic data element access to Com_RepCnt */
typedef struct sCom_RepCntStructTag
{
  Com_RepCntType msg_Transmit_oCAN00_Out[1];
} sCom_RepCntStructType;

/**   \brief  type to be used as symbolic data element access to Com_RepCycleCnt */
typedef struct sCom_RepCycleCntStructTag
{
  Com_RepCycleCntType msg_Transmit_oCAN00_Out[1];
} sCom_RepCycleCntStructType;

/**   \brief  type to be used as symbolic data element access to Com_RxDefPduBuffer */
typedef struct sCom_RxDefPduBufferStructTag
{
  Com_RxDefPduBufferType msg_Receive_oCAN00_In[1];
} sCom_RxDefPduBufferStructType;

/**   \brief  type to be used as symbolic data element access to Com_RxSigBufferXInt8 */
typedef struct sCom_RxSigBufferXInt8StructTag
{
  Com_RxSigBufferXInt8Type sig_State_RearLeftDoor_In[1];
  Com_RxSigBufferXInt8Type sig_State_RearRightDoor_In[1];
} sCom_RxSigBufferXInt8StructType;

/**   \brief  type to be used as symbolic data element access to Com_TransmitRequest */
typedef struct sCom_TransmitRequestStructTag
{
  Com_TransmitRequestType msg_Transmit_oCAN00_Out[1];
} sCom_TransmitRequestStructType;

/**   \brief  type to be used as symbolic data element access to Com_TxPduBuffer */
typedef struct sCom_TxPduBufferStructTag
{
  Com_TxPduBufferType msg_Transmit_oCAN00_Out[1];
} sCom_TxPduBufferStructType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCUnionIndexAndSymbolTypes  Com Union Index And Symbol Types (PRE_COMPILE)
  \brief  These unions are used to access arrays in an index and symbol based style.
  \{
*/ 
/**   \brief  type to access Com_CurrentTxMode in an index and symbol based style. */
typedef union uCom_CurrentTxModeTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_CurrentTxModeType raw[1];
  sCom_CurrentTxModeStructType str;
} uCom_CurrentTxModeType;

/**   \brief  type to access Com_CycleTimeCnt in an index and symbol based style. */
typedef union uCom_CycleTimeCntTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_CycleTimeCntType raw[1];
  sCom_CycleTimeCntStructType str;
} uCom_CycleTimeCntType;

/**   \brief  type to access Com_CyclicSendRequest in an index and symbol based style. */
typedef union uCom_CyclicSendRequestTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_CyclicSendRequestType raw[1];
  sCom_CyclicSendRequestStructType str;
} uCom_CyclicSendRequestType;

/**   \brief  type to access Com_DelayTimeCnt in an index and symbol based style. */
typedef union uCom_DelayTimeCntTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_DelayTimeCntType raw[1];
  sCom_DelayTimeCntStructType str;
} uCom_DelayTimeCntType;

/**   \brief  type to access Com_HandleRxPduDeferred in an index and symbol based style. */
typedef union uCom_HandleRxPduDeferredTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_HandleRxPduDeferredType raw[1];
  sCom_HandleRxPduDeferredStructType str;
} uCom_HandleRxPduDeferredType;

/**   \brief  type to access Com_RepCnt in an index and symbol based style. */
typedef union uCom_RepCntTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_RepCntType raw[1];
  sCom_RepCntStructType str;
} uCom_RepCntType;

/**   \brief  type to access Com_RepCycleCnt in an index and symbol based style. */
typedef union uCom_RepCycleCntTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_RepCycleCntType raw[1];
  sCom_RepCycleCntStructType str;
} uCom_RepCycleCntType;

/**   \brief  type to access Com_RxDefPduBuffer in an index and symbol based style. */
typedef union uCom_RxDefPduBufferTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_RxDefPduBufferType raw[1];
  sCom_RxDefPduBufferStructType str;
} uCom_RxDefPduBufferType;

/**   \brief  type to access Com_RxSigBufferXInt8 in an index and symbol based style. */
typedef union uCom_RxSigBufferXInt8Tag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_RxSigBufferXInt8Type raw[2];
  sCom_RxSigBufferXInt8StructType str;
} uCom_RxSigBufferXInt8Type;

/**   \brief  type to access Com_TransmitRequest in an index and symbol based style. */
typedef union uCom_TransmitRequestTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_TransmitRequestType raw[1];
  sCom_TransmitRequestStructType str;
} uCom_TransmitRequestType;

/**   \brief  type to access Com_TxPduBuffer in an index and symbol based style. */
typedef union uCom_TxPduBufferTag
{  /* PRQA S 0750 */  /* MD_CSL_18.4 */
  Com_TxPduBufferType raw[1];
  sCom_TxPduBufferStructType str;
} uCom_TxPduBufferType;

/** 
  \}
*/ 

/** 
  \defgroup  ComPCRootPointerTypes  Com Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point to arrays.
  \{
*/ 
/** 
  \}
*/ 

/** 
  \defgroup  ComPCRootValueTypes  Com Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Com_PCConfig */
typedef struct sCom_PCConfigType
{
  uint8 Com_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Com_PCConfigType;

typedef Com_PCConfigType Com_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  Com_ConstValueXInt8
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueXInt8
  \brief  Optimized array of commonly used values like initial or invalid values. ea:{6C5B1979-F523-4386-8DE1-63F2D0DD2BB9} (BOOLEAN, SINT8, UINT8, UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_ConstValueXInt8Type, COM_CONST) Com_ConstValueXInt8[1];
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInitValue
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInitValue
  \brief  Initial values used for Tx I-PDU buffer initialization. ea:{{F6DC1DA1-E33F-4690-8F08-3B5B786D0FFB}}
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Com_TxPduInitValueType, COM_CONST) Com_TxPduInitValue[1];
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CurrentTxMode
**********************************************************************************************************************/
/** 
  \var    Com_CurrentTxMode
  \brief  Current transmission mode state of all Tx I-PDUs. ea:{{ED5079EC-06ED-442b-A19B-216FAD6A321E}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCom_CurrentTxModeType, COM_VAR_NOINIT) Com_CurrentTxMode;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CycleTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_CycleTimeCnt
  \brief  Current counter value of cyclic transmission. ea:{{3ADDB39D-576E-4748-899C-D5603B5E20E0}}
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCom_CycleTimeCntType, COM_VAR_NOINIT) Com_CycleTimeCnt;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CyclicSendRequest
**********************************************************************************************************************/
/** 
  \var    Com_CyclicSendRequest
  \brief  Cyclic send request flag used to indicate cyclic transmission mode for all Tx I-PDU. ea:{{DE677C5B-3122-43da-8688-6A05FE89F69D}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCom_CyclicSendRequestType, COM_VAR_NOINIT) Com_CyclicSendRequest;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_DelayTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_DelayTimeCnt
  \brief  Current counter value of minimum delay counter. ea:{{D968C511-E27E-4b19-BF56-22E0FB91C9E8}}
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCom_DelayTimeCntType, COM_VAR_NOINIT) Com_DelayTimeCnt;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleRxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleRxPduDeferred
  \brief  Array indicating received Rx I-PDUs to be processed deferred within the next call of Com_MainfunctionRx(). ea:{{0AD1CC67-C659-4d36-834A-23D7490767D2}}
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCom_HandleRxPduDeferredType, COM_VAR_NOINIT) Com_HandleRxPduDeferred;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleTxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleTxPduDeferred
  \brief  Flag array used for deferred Tx confirmation handling. ea:{{56043229-CA4B-4603-A242-CA55DAE9978B}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_HandleTxPduDeferredType, COM_VAR_NOINIT) Com_HandleTxPduDeferred[1];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_Initialized
**********************************************************************************************************************/
/** 
  \var    Com_Initialized
  \brief  Initialization state of Com. TRUE, if Com_Init() has been called, else FALSE.
*/ 
#define COM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_InitializedType, COM_VAR_ZERO_INIT) Com_Initialized;
#define COM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCnt
  \brief  Current repetition counter value for replication of transmission requests. ea:{{5E082CB5-0604-45fc-A6AC-149C28E5C4CB}}
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCom_RepCntType, COM_VAR_NOINIT) Com_RepCnt;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCycleCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCycleCnt
  \brief  Current counter value of repetition period for replication of transmission requests. ea:{{C6AF618A-754E-46e3-9D7B-CDECCC6484BD}}
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCom_RepCycleCntType, COM_VAR_NOINIT) Com_RepCycleCnt;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDefPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxDefPduBuffer
  \brief  Rx I-PDU buffer for deferred signal processing. ea:{{F49B9896-FB53-417d-997D-9D6FAD9EE7C6}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCom_RxDefPduBufferType, COM_VAR_NOINIT) Com_RxDefPduBuffer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDlMonDivisorCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxDlMonDivisorCounterType, COM_VAR_NOINIT) Com_RxDlMonDivisorCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpActive
  \brief  Rx I-PDU based state (started/stopped) of the corresponding I-PDU-Group. ea:{{1FEA071E-983D-4471-A91C-FB71A7760C8C}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_RxPduGrpActiveType, COM_VAR_NOINIT) Com_RxPduGrpActive[1];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferXInt8
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferXInt8
  \brief  Rx Signal and Group Signal Buffer. ea:{426E0C09-86A4-4b44-857F-632E79F22E59} (BOOLEAN, SINT8, UINT8, UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCom_RxSigBufferXInt8Type, COM_VAR_NOINIT) Com_RxSigBufferXInt8;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TransmitRequest
**********************************************************************************************************************/
/** 
  \var    Com_TransmitRequest
  \brief  Transmit request flag used for decoupled Tx I-PDU tranmission. ea:{{6073E4F7-39EB-4415-9119-5C3187E718D8}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCom_TransmitRequestType, COM_VAR_NOINIT) Com_TransmitRequest;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCycleCounterDivisorCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxCycleCounterDivisorCounterType, COM_VAR_NOINIT) Com_TxCycleCounterDivisorCounter;  /* PRQA S 0777 */  /* MD_MSR_5.1_777 */
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxDlMonDivisorCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxDlMonDivisorCounterType, COM_VAR_NOINIT) Com_TxDlMonDivisorCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TxPduBuffer
  \brief  Tx I-PDU Buffer. ea:{{8FBCB61E-4F9A-4eed-BBAC-8F3EA5D20D44}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uCom_TxPduBufferType, COM_VAR_NOINIT) Com_TxPduBuffer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpActive
  \brief  Tx I-PDU based state (started/stopped) of the corresponding I-PDU-Group. ea:{{6C333DA7-FB73-42c4-86EA-1F8FC5CD1D2C}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxPduGrpActiveType, COM_VAR_NOINIT) Com_TxPduGrpActive[1];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxSduLength
  \brief  This var Array contains the Com Ipdu Length. ea:{{7A1C61AC-8FAE-47ea-8E93-9DA53000332A}}
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_TxSduLengthType, COM_VAR_NOINIT) Com_TxSduLength[1];
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_WaitingForConfirmation
**********************************************************************************************************************/
/** 
  \var    Com_WaitingForConfirmation
  \brief  Flag array used for Tx error notification handling. ea:{{D441973A-62D6-42b6-877F-1096F9A5C295}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Com_WaitingForConfirmationType, COM_VAR_NOINIT) Com_WaitingForConfirmation[1];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/* User Config File Start */

/* User Config File End */


#endif  /* COM_CFG_H */
/**********************************************************************************************************************
  END OF FILE: Com_Cfg.h
**********************************************************************************************************************/

