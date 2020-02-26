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
 *            Module: PduR
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: PduR_Lcfg.h
 *   Generation Time: 2016-03-29 15:19:12
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/


#if !defined (PDUR_LCFG_H)
# define PDUR_LCFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
# include "PduR_Types.h"

/* include headers with symbolic name values */
/* \trace SPEC-2020167 */

#include "Com_Cbk.h"
#include "CanIf.h"
#include "CanTp.h"
#include "Dcm_Cbk.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  PduRPCDataSwitches  PduR Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define PDUR_CANCELRECEIVEFCTPTR                                      STD_OFF  /**< Deactivateable: 'PduR_CancelReceiveFctPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_CANCELTRANSMITFCTPTR                                     STD_OFF  /**< Deactivateable: 'PduR_CancelTransmitFctPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_CHANGEPARAMETERFCTPTR                                    STD_OFF  /**< Deactivateable: 'PduR_ChangeParameterFctPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_CONFIGID                                                 STD_ON
#define PDUR_COPYRXDATA                                               STD_ON
#define PDUR_COPYTXDATA                                               STD_ON
#define PDUR_DATAPLANE                                                STD_OFF  /**< Deactivateable: 'PduR_DataPlane' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_BROADCASTDUMMYOFDATAPLANE                                STD_OFF  /**< Deactivateable: 'PduR_DataPlane.BroadcastDummy' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIBMETAENDIDXOFDATAPLANE                                 STD_OFF  /**< Deactivateable: 'PduR_DataPlane.FibMetaEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIBMETASTARTIDXOFDATAPLANE                               STD_OFF  /**< Deactivateable: 'PduR_DataPlane.FibMetaStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_INVALIDHNDOFDATAPLANE                                    STD_OFF  /**< Deactivateable: 'PduR_DataPlane.InvalidHnd' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_MASKOFDATAPLANE                                          STD_OFF  /**< Deactivateable: 'PduR_DataPlane.Mask' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_OFFSETOFDATAPLANE                                        STD_OFF  /**< Deactivateable: 'PduR_DataPlane.Offset' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_DESTPDURPGCNT                                            STD_OFF  /**< Deactivateable: 'PduR_DestPduRpgCnt' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_FIFOBUFFER                                               STD_OFF  /**< Deactivateable: 'PduR_FiFoBuffer' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_FIFOINFO                                                 STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_BUFFERDEPTHOFFIFOINFO                                    STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.BufferDepth' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_DESTHNDOFFIFOINFO                                        STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.DestHnd' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOBUFFERENDIDXOFFIFOINFO                               STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.FiFoBufferEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOBUFFERLENGTHOFFIFOINFO                               STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.FiFoBufferLength' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOBUFFERSTARTIDXOFFIFOINFO                             STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.FiFoBufferStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOBUFFERUSEDOFFIFOINFO                                 STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.FiFoBufferUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOINITVALUESENDIDXOFFIFOINFO                           STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.FiFoInitValuesEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOINITVALUESLENGTHOFFIFOINFO                           STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.FiFoInitValuesLength' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOINITVALUESSTARTIDXOFFIFOINFO                         STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.FiFoInitValuesStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOINITVALUESUSEDOFFIFOINFO                             STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.FiFoInitValuesUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOTYPEOFFIFOINFO                                       STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.FifoType' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_IF2LOMULTIROUTINGOFFIFOINFO                              STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.If2LoMultiRouting' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_INITIALPDULENGTHOFFIFOINFO                               STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.InitialPduLength' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_MAXPDULENGTHOFFIFOINFO                                   STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.MaxPduLength' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TRANSMITIDXOFFIFOINFO                                    STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.TransmitIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TRANSMITUSEDOFFIFOINFO                                   STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.TransmitUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TXCONFIRMATIONHNDOFFIFOINFO                              STD_OFF  /**< Deactivateable: 'PduR_FiFoInfo.TxConfirmationHnd' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOINITVALUES                                           STD_OFF  /**< Deactivateable: 'PduR_FiFoInitValues' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_FIFORECEIVEDDLC                                          STD_OFF  /**< Deactivateable: 'PduR_FiFoReceivedDlc' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_FIBMETA                                                  STD_OFF  /**< Deactivateable: 'PduR_FibMeta' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_LEARNEDCONNECTIONIDOFFIBMETA                             STD_OFF  /**< Deactivateable: 'PduR_FibMeta.LearnedConnectionId' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_FINALMAGICNUMBER                                         STD_OFF  /**< Deactivateable: 'PduR_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define PDUR_GWIFBA                                                   STD_OFF  /**< Deactivateable: 'PduR_GwIfBa' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_FIFOPDUFILLLEVELOFGWIFBA                                 STD_OFF  /**< Deactivateable: 'PduR_GwIfBa.FiFoPduFillLevel' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_FIFOREADIDXOFGWIFBA                                      STD_OFF  /**< Deactivateable: 'PduR_GwIfBa.FiFoReadIdx' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_FIFOWRITEIDXOFGWIFBA                                     STD_OFF  /**< Deactivateable: 'PduR_GwIfBa.FiFoWriteIdx' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_PDURFIFOROUTINGSTATEOFGWIFBA                             STD_OFF  /**< Deactivateable: 'PduR_GwIfBa.PduRFiFoRoutingState' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_GWTPBA                                                   STD_OFF  /**< Deactivateable: 'PduR_GwTpBa' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_LINEARBUFFERSIZEOFGWTPBA                                 STD_OFF  /**< Deactivateable: 'PduR_GwTpBa.LinearBufferSize' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_LINEARDATASIZEOFGWTPBA                                   STD_OFF  /**< Deactivateable: 'PduR_GwTpBa.LinearDataSize' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_PDURBUFFERSTATEOFGWTPBA                                  STD_OFF  /**< Deactivateable: 'PduR_GwTpBa.PduRBufferState' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RXSDULENGTHOFGWTPBA                                      STD_OFF  /**< Deactivateable: 'PduR_GwTpBa.RxSduLength' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RXWRITEIDXOFGWTPBA                                       STD_OFF  /**< Deactivateable: 'PduR_GwTpBa.RxWriteIdx' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_TOTALBUFFERSIZEOFGWTPBA                                  STD_OFF  /**< Deactivateable: 'PduR_GwTpBa.TotalBufferSize' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_TOTALDATASIZEOFGWTPBA                                    STD_OFF  /**< Deactivateable: 'PduR_GwTpBa.TotalDataSize' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_TPBUFMGRSTATEOFGWTPBA                                    STD_OFF  /**< Deactivateable: 'PduR_GwTpBa.TpBufMgrState' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_TXREADIDXOFGWTPBA                                        STD_OFF  /**< Deactivateable: 'PduR_GwTpBa.TxReadIdx' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_GWTPINFO                                                 STD_OFF  /**< Deactivateable: 'PduR_GwTpInfo' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_PENDINGCONFIRMATIONSOFGWTPINFO                           STD_OFF  /**< Deactivateable: 'PduR_GwTpInfo.PendingConfirmations' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_TPBARXHNDOFGWTPINFO                                      STD_OFF  /**< Deactivateable: 'PduR_GwTpInfo.TpBaRxHnd' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_TPBATXHNDOFGWTPINFO                                      STD_OFF  /**< Deactivateable: 'PduR_GwTpInfo.TpBaTxHnd' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_TPROUTINGSTATEOFGWTPINFO                                 STD_OFF  /**< Deactivateable: 'PduR_GwTpInfo.TpRoutingState' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_IFROUTINGSTATETABLE                                      STD_ON
#define PDUR_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE STD_ON
#define PDUR_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE STD_ON
#define PDUR_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE STD_ON
#define PDUR_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE STD_ON
#define PDUR_IFRXINDICATIONFCTPTR                                     STD_ON
#define PDUR_IFTRIGGERTRANSMITFCTPTR                                  STD_OFF  /**< Deactivateable: 'PduR_IfTriggerTransmitFctPtr' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_IFTXCONFIRMATION                                         STD_OFF  /**< Deactivateable: 'PduR_IfTxConfirmation' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_INITDATAHASHCODE                                         STD_OFF  /**< Deactivateable: 'PduR_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define PDUR_INITIALIZED                                              STD_ON
#define PDUR_RPGDESTINIT                                              STD_OFF  /**< Deactivateable: 'PduR_RpgDestInit' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOINFOIDXOFRPGDESTINIT                                 STD_OFF  /**< Deactivateable: 'PduR_RpgDestInit.FiFoInfoIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOINFOUSEDOFRPGDESTINIT                                STD_OFF  /**< Deactivateable: 'PduR_RpgDestInit.FiFoInfoUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RPGDESTINITOFRPGDESTINIT                                 STD_OFF  /**< Deactivateable: 'PduR_RpgDestInit.RpgDestInit' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TXGWTP2DESTIDXOFRPGDESTINIT                              STD_OFF  /**< Deactivateable: 'PduR_RpgDestInit.TxGwTp2DestIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TXGWTP2DESTUSEDOFRPGDESTINIT                             STD_OFF  /**< Deactivateable: 'PduR_RpgDestInit.TxGwTp2DestUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RPGDESTINITIND                                           STD_OFF  /**< Deactivateable: 'PduR_RpgDestInitInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RPGINFO                                                  STD_OFF  /**< Deactivateable: 'PduR_RpgInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_ENABLEDATINITOFRPGINFO                                   STD_OFF  /**< Deactivateable: 'PduR_RpgInfo.EnabledAtInit' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_INVALIDHNDOFRPGINFO                                      STD_OFF  /**< Deactivateable: 'PduR_RpgInfo.InvalidHnd' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RPGDESTINITINDENDIDXOFRPGINFO                            STD_OFF  /**< Deactivateable: 'PduR_RpgInfo.RpgDestInitIndEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RPGDESTINITINDSTARTIDXOFRPGINFO                          STD_OFF  /**< Deactivateable: 'PduR_RpgInfo.RpgDestInitIndStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RPGDESTINITINDUSEDOFRPGINFO                              STD_OFF  /**< Deactivateable: 'PduR_RpgInfo.RpgDestInitIndUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RPGSTATE                                                 STD_OFF  /**< Deactivateable: 'PduR_RpgState' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_RXGWTP2DEST                                              STD_OFF  /**< Deactivateable: 'PduR_RxGwTp2Dest' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_COPYRXDATAIDXOFRXGWTP2DEST                               STD_OFF  /**< Deactivateable: 'PduR_RxGwTp2Dest.CopyRxDataIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_COPYRXDATAUSEDOFRXGWTP2DEST                              STD_OFF  /**< Deactivateable: 'PduR_RxGwTp2Dest.CopyRxDataUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_DESTHNDOFRXGWTP2DEST                                     STD_OFF  /**< Deactivateable: 'PduR_RxGwTp2Dest.DestHnd' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RPGDESTINITIDXOFRXGWTP2DEST                              STD_OFF  /**< Deactivateable: 'PduR_RxGwTp2Dest.RpgDestInitIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RPGDESTINITUSEDOFRXGWTP2DEST                             STD_OFF  /**< Deactivateable: 'PduR_RxGwTp2Dest.RpgDestInitUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_STARTOFRECEPTIONIDXOFRXGWTP2DEST                         STD_OFF  /**< Deactivateable: 'PduR_RxGwTp2Dest.StartOfReceptionIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_STARTOFRECEPTIONUSEDOFRXGWTP2DEST                        STD_OFF  /**< Deactivateable: 'PduR_RxGwTp2Dest.StartOfReceptionUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TPRXINDICATIONIDXOFRXGWTP2DEST                           STD_OFF  /**< Deactivateable: 'PduR_RxGwTp2Dest.TpRxIndicationIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TPRXINDICATIONUSEDOFRXGWTP2DEST                          STD_OFF  /**< Deactivateable: 'PduR_RxGwTp2Dest.TpRxIndicationUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TRANSMITIDXOFRXGWTP2DEST                                 STD_OFF  /**< Deactivateable: 'PduR_RxGwTp2Dest.TransmitIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TRANSMITUSEDOFRXGWTP2DEST                                STD_OFF  /**< Deactivateable: 'PduR_RxGwTp2Dest.TransmitUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXGWTPSRC                                                STD_OFF  /**< Deactivateable: 'PduR_RxGwTpSrc' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_METADATALENGTHOFRXGWTPSRC                                STD_OFF  /**< Deactivateable: 'PduR_RxGwTpSrc.MetaDataLength' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_METADATALENGTHUSEDOFRXGWTPSRC                            STD_OFF  /**< Deactivateable: 'PduR_RxGwTpSrc.MetaDataLengthUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_REQUESTTYPEOFRXGWTPSRC                                   STD_OFF  /**< Deactivateable: 'PduR_RxGwTpSrc.RequestType' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXGWTP2DESTENDIDXOFRXGWTPSRC                             STD_OFF  /**< Deactivateable: 'PduR_RxGwTpSrc.RxGwTp2DestEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXGWTP2DESTLENGTHOFRXGWTPSRC                             STD_OFF  /**< Deactivateable: 'PduR_RxGwTpSrc.RxGwTp2DestLength' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXGWTP2DESTSTARTIDXOFRXGWTPSRC                           STD_OFF  /**< Deactivateable: 'PduR_RxGwTpSrc.RxGwTp2DestStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TPBUFFERINFOIDXOFRXGWTPSRC                               STD_OFF  /**< Deactivateable: 'PduR_RxGwTpSrc.TPBufferInfoIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TPTHRESHOLDOFRXGWTPSRC                                   STD_OFF  /**< Deactivateable: 'PduR_RxGwTpSrc.TpThreshold' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIF2DEST                                                STD_ON
#define PDUR_BSWMPDURRXINDICATIONCALLBACKOFRXIF2DEST                  STD_OFF  /**< Deactivateable: 'PduR_RxIf2Dest.BswMPduRRxIndicationCallback' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRPduCallback] is configured to 'false'' */
#define PDUR_DESTHNDOFRXIF2DEST                                       STD_ON
#define PDUR_IFRXINDICATIONFCTPTRIDXOFRXIF2DEST                       STD_ON
#define PDUR_INVALIDHNDOFRXIF2DEST                                    STD_OFF  /**< Deactivateable: 'PduR_RxIf2Dest.InvalidHnd' Reason: 'the value of PduR_InvalidHndOfRxIf2Dest is always 'false' due to this, the array is deactivated.' */
#define PDUR_RPGDESTINITIDXOFRXIF2DEST                                STD_OFF  /**< Deactivateable: 'PduR_RxIf2Dest.RpgDestInitIdx' Reason: 'the optional indirection is deactivated because RpgDestInitUsedOfRxIf2Dest is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_RPGDESTINITUSEDOFRXIF2DEST                               STD_OFF  /**< Deactivateable: 'PduR_RxIf2Dest.RpgDestInitUsed' Reason: 'the optional indirection is deactivated because RpgDestInitUsedOfRxIf2Dest is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_RXIFCONNECTION                                           STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_CONNECTIONIDOFRXIFCONNECTION                             STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection.ConnectionId' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_DATAPLANEIDXOFRXIFCONNECTION                             STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection.DataPlaneIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_DATAPLANEUSEDOFRXIFCONNECTION                            STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection.DataPlaneUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOINFORESPONSEIDXOFRXIFCONNECTION                      STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection.FiFoInfoResponseIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOINFORESPONSEUSEDOFRXIFCONNECTION                     STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection.FiFoInfoResponseUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_INVALIDHNDOFRXIFCONNECTION                               STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection.InvalidHnd' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_METADATALENGTHOFRXIFCONNECTION                           STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection.MetaDataLength' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIFCONNECTION2RXIFMULTIIDXOFRXIFCONNECTION              STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection.RxIfConnection2RxIfMultiIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIFCONNECTION2RXIFMULTIUSEDOFRXIFCONNECTION             STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection.RxIfConnection2RxIfMultiUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIFMULTIREQUESTBROADCASTSTARTIDXOFRXIFCONNECTION        STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection.RxIfMultiRequestBroadcastStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIFMULTIREQUESTBROADCASTUSEDOFRXIFCONNECTION            STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection.RxIfMultiRequestBroadcastUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIFMULTIRESPONSESTARTIDXOFRXIFCONNECTION                STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection.RxIfMultiResponseStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIFMULTIRESPONSEUSEDOFRXIFCONNECTION                    STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection.RxIfMultiResponseUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIFCONNECTION2RXIFMULTI                                 STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection2RxIfMulti' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIFUNICASTIDXOFRXIFCONNECTION2RXIFMULTI                 STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection2RxIfMulti.RxIfUnicastIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIFUNICASTUSEDOFRXIFCONNECTION2RXIFMULTI                STD_OFF  /**< Deactivateable: 'PduR_RxIfConnection2RxIfMulti.RxIfUnicastUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIFMULTI                                                STD_OFF  /**< Deactivateable: 'PduR_RxIfMulti' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_DESTHNDOFRXIFMULTI                                       STD_OFF  /**< Deactivateable: 'PduR_RxIfMulti.DestHnd' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_IFRXINDICATIONFCTPTRIDXOFRXIFMULTI                       STD_OFF  /**< Deactivateable: 'PduR_RxIfMulti.IfRxIndicationFctPtrIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RPGDESTINITIDXOFRXIFMULTI                                STD_OFF  /**< Deactivateable: 'PduR_RxIfMulti.RpgDestInitIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RPGDESTINITUSEDOFRXIFMULTI                               STD_OFF  /**< Deactivateable: 'PduR_RxIfMulti.RpgDestInitUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIF2DESTKEYOFRXIFMULTI                                  STD_OFF  /**< Deactivateable: 'PduR_RxIfMulti.RxIf2DestKey' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIFCONNECTIONREQUESTBROADCASTKEYOFRXIFMULTI             STD_OFF  /**< Deactivateable: 'PduR_RxIfMulti.RxIfConnectionRequestBroadcastKey' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIFCONNECTIONRESPONSEKEYOFRXIFMULTI                     STD_OFF  /**< Deactivateable: 'PduR_RxIfMulti.RxIfConnectionResponseKey' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXIFUNICAST                                              STD_OFF  /**< Deactivateable: 'PduR_RxIfUnicast' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_FIFOINFOIDXOFRXIFUNICAST                                 STD_OFF  /**< Deactivateable: 'PduR_RxIfUnicast.FiFoInfoIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_IFRXINDICATIONFCTPTRIDXOFRXIFUNICAST                     STD_OFF  /**< Deactivateable: 'PduR_RxIfUnicast.IfRxIndicationFctPtrIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RPGDESTINITIDXOFRXIFUNICAST                              STD_OFF  /**< Deactivateable: 'PduR_RxIfUnicast.RpgDestInitIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RPGDESTINITUSEDOFRXIFUNICAST                             STD_OFF  /**< Deactivateable: 'PduR_RxIfUnicast.RpgDestInitUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXTP2DEST                                                STD_ON
#define PDUR_BSWMPDURTPRXINDICATIONCALLBACKOFRXTP2DEST                STD_OFF  /**< Deactivateable: 'PduR_RxTp2Dest.BswMPduRTpRxIndicationCallback' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRPduCallback] is configured to 'false'' */
#define PDUR_BSWMPDURTPSTARTOFRECEPTIONCALLBACKOFRXTP2DEST            STD_OFF  /**< Deactivateable: 'PduR_RxTp2Dest.BswMPduRTpStartOfReceptionCallback' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRPduCallback] is configured to 'false'' */
#define PDUR_COPYRXDATAIDXOFRXTP2DEST                                 STD_ON
#define PDUR_DESTHNDOFRXTP2DEST                                       STD_ON
#define PDUR_INVALIDHNDOFRXTP2DEST                                    STD_OFF  /**< Deactivateable: 'PduR_RxTp2Dest.InvalidHnd' Reason: 'the value of PduR_InvalidHndOfRxTp2Dest is always 'false' due to this, the array is deactivated.' */
#define PDUR_RPGDESTINITIDXOFRXTP2DEST                                STD_OFF  /**< Deactivateable: 'PduR_RxTp2Dest.RpgDestInitIdx' Reason: 'the optional indirection is deactivated because RpgDestInitUsedOfRxTp2Dest is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_RPGDESTINITUSEDOFRXTP2DEST                               STD_OFF  /**< Deactivateable: 'PduR_RxTp2Dest.RpgDestInitUsed' Reason: 'the optional indirection is deactivated because RpgDestInitUsedOfRxTp2Dest is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_STARTOFRECEPTIONIDXOFRXTP2DEST                           STD_ON
#define PDUR_TPRXINDICATIONIDXOFRXTP2DEST                             STD_ON
#define PDUR_RXTP2SRC                                                 STD_ON
#define PDUR_CANCELRECEIVEFCTPTRIDXOFRXTP2SRC                         STD_OFF  /**< Deactivateable: 'PduR_RxTp2Src.CancelReceiveFctPtrIdx' Reason: 'the optional indirection is deactivated because CancelReceiveFctPtrUsedOfRxTp2Src is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_CANCELRECEIVEFCTPTRUSEDOFRXTP2SRC                        STD_OFF  /**< Deactivateable: 'PduR_RxTp2Src.CancelReceiveFctPtrUsed' Reason: 'the optional indirection is deactivated because CancelReceiveFctPtrUsedOfRxTp2Src is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_CHANGEPARAMETERFCTPTRIDXOFRXTP2SRC                       STD_OFF  /**< Deactivateable: 'PduR_RxTp2Src.ChangeParameterFctPtrIdx' Reason: 'the optional indirection is deactivated because ChangeParameterFctPtrUsedOfRxTp2Src is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_CHANGEPARAMETERFCTPTRUSEDOFRXTP2SRC                      STD_OFF  /**< Deactivateable: 'PduR_RxTp2Src.ChangeParameterFctPtrUsed' Reason: 'the optional indirection is deactivated because ChangeParameterFctPtrUsedOfRxTp2Src is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_DESTHNDOFRXTP2SRC                                        STD_ON
#define PDUR_INVALIDHNDOFRXTP2SRC                                     STD_OFF  /**< Deactivateable: 'PduR_RxTp2Src.InvalidHnd' Reason: 'the value of PduR_InvalidHndOfRxTp2Src is always 'false' due to this, the array is deactivated.' */
#define PDUR_RPGDESTINITIDXOFRXTP2SRC                                 STD_OFF  /**< Deactivateable: 'PduR_RxTp2Src.RpgDestInitIdx' Reason: 'the optional indirection is deactivated because RpgDestInitUsedOfRxTp2Src is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_RPGDESTINITUSEDOFRXTP2SRC                                STD_OFF  /**< Deactivateable: 'PduR_RxTp2Src.RpgDestInitUsed' Reason: 'the optional indirection is deactivated because RpgDestInitUsedOfRxTp2Src is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_SIZEOFCOPYRXDATA                                         STD_ON
#define PDUR_SIZEOFCOPYTXDATA                                         STD_ON
#define PDUR_SIZEOFIFROUTINGSTATETABLE                                STD_ON
#define PDUR_SIZEOFIFRXINDICATIONFCTPTR                               STD_ON
#define PDUR_SIZEOFRXIF2DEST                                          STD_ON
#define PDUR_SIZEOFRXTP2DEST                                          STD_ON
#define PDUR_SIZEOFRXTP2SRC                                           STD_ON
#define PDUR_SIZEOFSTARTOFRECEPTION                                   STD_ON
#define PDUR_SIZEOFTPRXINDICATION                                     STD_ON
#define PDUR_SIZEOFTPTXCONFIRMATION                                   STD_ON
#define PDUR_SIZEOFTRANSMIT                                           STD_ON
#define PDUR_SIZEOFTX2LO                                              STD_ON
#define PDUR_SIZEOFTXIF2UP                                            STD_ON
#define PDUR_SIZEOFTXTP2SRC                                           STD_ON
#define PDUR_STARTOFRECEPTION                                         STD_ON
#define PDUR_TPBUFFERINFO                                             STD_OFF  /**< Deactivateable: 'PduR_TPBufferInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_LENGTHOFTPBUFFERINFO                                     STD_OFF  /**< Deactivateable: 'PduR_TPBufferInfo.Length' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TPBUFFERSENDIDXOFTPBUFFERINFO                            STD_OFF  /**< Deactivateable: 'PduR_TPBufferInfo.TPBuffersEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TPBUFFERSLENGTHOFTPBUFFERINFO                            STD_OFF  /**< Deactivateable: 'PduR_TPBufferInfo.TPBuffersLength' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TPBUFFERSSTARTIDXOFTPBUFFERINFO                          STD_OFF  /**< Deactivateable: 'PduR_TPBufferInfo.TPBuffersStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TPBUFFERS                                                STD_OFF  /**< Deactivateable: 'PduR_TPBuffers' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_TPRXINDICATION                                           STD_ON
#define PDUR_TPTXCONFIRMATION                                         STD_ON
#define PDUR_TRANSMIT                                                 STD_ON
#define PDUR_TX2LO                                                    STD_ON
#define PDUR_BSWMPDURTRANSMITCALLBACKOFTX2LO                          STD_OFF  /**< Deactivateable: 'PduR_Tx2Lo.BswMPduRTransmitCallback' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRPduCallback] is configured to 'false'' */
#define PDUR_CANCELTRANSMITFCTPTRIDXOFTX2LO                           STD_OFF  /**< Deactivateable: 'PduR_Tx2Lo.CancelTransmitFctPtrIdx' Reason: 'the optional indirection is deactivated because CancelTransmitFctPtrUsedOfTx2Lo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_CANCELTRANSMITFCTPTRUSEDOFTX2LO                          STD_OFF  /**< Deactivateable: 'PduR_Tx2Lo.CancelTransmitFctPtrUsed' Reason: 'the optional indirection is deactivated because CancelTransmitFctPtrUsedOfTx2Lo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_DESTHNDOFTX2LO                                           STD_ON
#define PDUR_INVALIDHNDOFTX2LO                                        STD_OFF  /**< Deactivateable: 'PduR_Tx2Lo.InvalidHnd' Reason: 'the value of PduR_InvalidHndOfTx2Lo is always 'false' due to this, the array is deactivated.' */
#define PDUR_RPGDESTINITIDXOFTX2LO                                    STD_OFF  /**< Deactivateable: 'PduR_Tx2Lo.RpgDestInitIdx' Reason: 'the optional indirection is deactivated because RpgDestInitUsedOfTx2Lo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_RPGDESTINITUSEDOFTX2LO                                   STD_OFF  /**< Deactivateable: 'PduR_Tx2Lo.RpgDestInitUsed' Reason: 'the optional indirection is deactivated because RpgDestInitUsedOfTx2Lo is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_TRANSMITIDXOFTX2LO                                       STD_ON
#define PDUR_TXGWTP2DEST                                              STD_OFF  /**< Deactivateable: 'PduR_TxGwTp2Dest' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_COPYTXDATAIDXOFTXGWTP2DEST                               STD_OFF  /**< Deactivateable: 'PduR_TxGwTp2Dest.CopyTxDataIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_DESTHNDOFTXGWTP2DEST                                     STD_OFF  /**< Deactivateable: 'PduR_TxGwTp2Dest.DestHnd' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RPGDESTINITIDXOFTXGWTP2DEST                              STD_OFF  /**< Deactivateable: 'PduR_TxGwTp2Dest.RpgDestInitIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RPGDESTINITUSEDOFTXGWTP2DEST                             STD_OFF  /**< Deactivateable: 'PduR_TxGwTp2Dest.RpgDestInitUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_RXGWTPSRCIDXOFTXGWTP2DEST                                STD_OFF  /**< Deactivateable: 'PduR_TxGwTp2Dest.RxGwTpSrcIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TPTXCONFIRMATIONIDXOFTXGWTP2DEST                         STD_OFF  /**< Deactivateable: 'PduR_TxGwTp2Dest.TpTxConfirmationIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TXIF2LOMULTI                                             STD_OFF  /**< Deactivateable: 'PduR_TxIf2LoMulti' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_ANYTXCONFREQUIREDOFTXIF2LOMULTI                          STD_OFF  /**< Deactivateable: 'PduR_TxIf2LoMulti.AnyTxConfRequired' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_DESTHNDOFTXIF2LOMULTI                                    STD_OFF  /**< Deactivateable: 'PduR_TxIf2LoMulti.DestHnd' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_IFTRIGGERTRANSMITFCTPTRIDXOFTXIF2LOMULTI                 STD_OFF  /**< Deactivateable: 'PduR_TxIf2LoMulti.IfTriggerTransmitFctPtrIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_IFTRIGGERTRANSMITFCTPTRUSEDOFTXIF2LOMULTI                STD_OFF  /**< Deactivateable: 'PduR_TxIf2LoMulti.IfTriggerTransmitFctPtrUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_IFTXCONFIRMATIONIDXOFTXIF2LOMULTI                        STD_OFF  /**< Deactivateable: 'PduR_TxIf2LoMulti.IfTxConfirmationIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_IFTXCONFIRMATIONUSEDOFTXIF2LOMULTI                       STD_OFF  /**< Deactivateable: 'PduR_TxIf2LoMulti.IfTxConfirmationUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_SRCHNDOFTXIF2LOMULTI                                     STD_OFF  /**< Deactivateable: 'PduR_TxIf2LoMulti.SrcHnd' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TRANSMITIDXOFTXIF2LOMULTI                                STD_OFF  /**< Deactivateable: 'PduR_TxIf2LoMulti.TransmitIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TXIFMULTIIDXOFTXIF2LOMULTI                               STD_OFF  /**< Deactivateable: 'PduR_TxIf2LoMulti.TxIfMultiIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define PDUR_TXIF2UP                                                  STD_ON
#define PDUR_BSWMPDURTXCONFIRMATIONCALLBACKOFTXIF2UP                  STD_OFF  /**< Deactivateable: 'PduR_TxIf2Up.BswMPduRTxConfirmationCallback' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRPduCallback] is configured to 'false'' */
#define PDUR_DESTHNDOFTXIF2UP                                         STD_ON
#define PDUR_IFTRIGGERTRANSMITFCTPTRIDXOFTXIF2UP                      STD_OFF  /**< Deactivateable: 'PduR_TxIf2Up.IfTriggerTransmitFctPtrIdx' Reason: 'the optional indirection is deactivated because IfTriggerTransmitFctPtrUsedOfTxIf2Up is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_IFTRIGGERTRANSMITFCTPTRUSEDOFTXIF2UP                     STD_OFF  /**< Deactivateable: 'PduR_TxIf2Up.IfTriggerTransmitFctPtrUsed' Reason: 'the optional indirection is deactivated because IfTriggerTransmitFctPtrUsedOfTxIf2Up is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_IFTXCONFIRMATIONIDXOFTXIF2UP                             STD_OFF  /**< Deactivateable: 'PduR_TxIf2Up.IfTxConfirmationIdx' Reason: 'the optional indirection is deactivated because IfTxConfirmationUsedOfTxIf2Up is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_IFTXCONFIRMATIONUSEDOFTXIF2UP                            STD_OFF  /**< Deactivateable: 'PduR_TxIf2Up.IfTxConfirmationUsed' Reason: 'the optional indirection is deactivated because IfTxConfirmationUsedOfTxIf2Up is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_INVALIDHNDOFTXIF2UP                                      STD_OFF  /**< Deactivateable: 'PduR_TxIf2Up.InvalidHnd' Reason: 'the value of PduR_InvalidHndOfTxIf2Up is always 'false' due to this, the array is deactivated.' */
#define PDUR_TXIFMULTI                                                STD_OFF  /**< Deactivateable: 'PduR_TxIfMulti' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_CALLERNEEDSTRIGGERTRANSMITOFTXIFMULTI                    STD_OFF  /**< Deactivateable: 'PduR_TxIfMulti.CallerNeedsTriggerTransmit' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_CALLERNEEDSTXCONFOFTXIFMULTI                             STD_OFF  /**< Deactivateable: 'PduR_TxIfMulti.CallerNeedsTxConf' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_IFTRIGGERTRANSMITIDXOFTXIFMULTI                          STD_OFF  /**< Deactivateable: 'PduR_TxIfMulti.IfTriggerTransmitIdx' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_IFTXCONFIRMATIONIDXOFTXIFMULTI                           STD_OFF  /**< Deactivateable: 'PduR_TxIfMulti.IfTxConfirmationIdx' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_SRCHNDOFTXIFMULTI                                        STD_OFF  /**< Deactivateable: 'PduR_TxIfMulti.SrcHnd' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_TRANSMISSIONACTIVEOFTXIFMULTI                            STD_OFF  /**< Deactivateable: 'PduR_TxIfMulti.TransmissionActive' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define PDUR_TXTP2SRC                                                 STD_ON
#define PDUR_BSWMPDURTPTXCONFIRMATIONCALLBACKOFTXTP2SRC               STD_OFF  /**< Deactivateable: 'PduR_TxTp2Src.BswMPduRTpTxConfirmationCallback' Reason: '/ActiveEcuC/PduR/PduRGeneral[0:PduRPduCallback] is configured to 'false'' */
#define PDUR_COPYTXDATAIDXOFTXTP2SRC                                  STD_ON
#define PDUR_DESTHNDOFTXTP2SRC                                        STD_ON
#define PDUR_INVALIDHNDOFTXTP2SRC                                     STD_OFF  /**< Deactivateable: 'PduR_TxTp2Src.InvalidHnd' Reason: 'the value of PduR_InvalidHndOfTxTp2Src is always 'false' due to this, the array is deactivated.' */
#define PDUR_RPGDESTINITIDXOFTXTP2SRC                                 STD_OFF  /**< Deactivateable: 'PduR_TxTp2Src.RpgDestInitIdx' Reason: 'the optional indirection is deactivated because RpgDestInitUsedOfTxTp2Src is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_RPGDESTINITUSEDOFTXTP2SRC                                STD_OFF  /**< Deactivateable: 'PduR_TxTp2Src.RpgDestInitUsed' Reason: 'the optional indirection is deactivated because RpgDestInitUsedOfTxTp2Src is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define PDUR_TPTXCONFIRMATIONIDXOFTXTP2SRC                            STD_ON
#define PDUR_PCCONFIG                                                 STD_ON
#define PDUR_CONFIGIDOFPCCONFIG                                       STD_ON
#define PDUR_COPYRXDATAOFPCCONFIG                                     STD_ON
#define PDUR_COPYTXDATAOFPCCONFIG                                     STD_ON
#define PDUR_FINALMAGICNUMBEROFPCCONFIG                               STD_OFF  /**< Deactivateable: 'PduR_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define PDUR_IFROUTINGSTATETABLEOFPCCONFIG                            STD_ON
#define PDUR_IFRXINDICATIONFCTPTROFPCCONFIG                           STD_ON
#define PDUR_INITDATAHASHCODEOFPCCONFIG                               STD_OFF  /**< Deactivateable: 'PduR_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define PDUR_INITIALIZEDOFPCCONFIG                                    STD_ON
#define PDUR_RXIF2DESTOFPCCONFIG                                      STD_ON
#define PDUR_RXTP2DESTOFPCCONFIG                                      STD_ON
#define PDUR_RXTP2SRCOFPCCONFIG                                       STD_ON
#define PDUR_SIZEOFCOPYRXDATAOFPCCONFIG                               STD_ON
#define PDUR_SIZEOFCOPYTXDATAOFPCCONFIG                               STD_ON
#define PDUR_SIZEOFIFROUTINGSTATETABLEOFPCCONFIG                      STD_ON
#define PDUR_SIZEOFIFRXINDICATIONFCTPTROFPCCONFIG                     STD_ON
#define PDUR_SIZEOFRXIF2DESTOFPCCONFIG                                STD_ON
#define PDUR_SIZEOFRXTP2DESTOFPCCONFIG                                STD_ON
#define PDUR_SIZEOFRXTP2SRCOFPCCONFIG                                 STD_ON
#define PDUR_SIZEOFSTARTOFRECEPTIONOFPCCONFIG                         STD_ON
#define PDUR_SIZEOFTPRXINDICATIONOFPCCONFIG                           STD_ON
#define PDUR_SIZEOFTPTXCONFIRMATIONOFPCCONFIG                         STD_ON
#define PDUR_SIZEOFTRANSMITOFPCCONFIG                                 STD_ON
#define PDUR_SIZEOFTX2LOOFPCCONFIG                                    STD_ON
#define PDUR_SIZEOFTXIF2UPOFPCCONFIG                                  STD_ON
#define PDUR_SIZEOFTXTP2SRCOFPCCONFIG                                 STD_ON
#define PDUR_STARTOFRECEPTIONOFPCCONFIG                               STD_ON
#define PDUR_TPRXINDICATIONOFPCCONFIG                                 STD_ON
#define PDUR_TPTXCONFIRMATIONOFPCCONFIG                               STD_ON
#define PDUR_TRANSMITOFPCCONFIG                                       STD_ON
#define PDUR_TX2LOOFPCCONFIG                                          STD_ON
#define PDUR_TXIF2UPOFPCCONFIG                                        STD_ON
#define PDUR_TXTP2SRCOFPCCONFIG                                       STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCNoReferenceDefines  PduR No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define PDUR_NO_DESTHNDOFRXIF2DEST                                    255U
#define PDUR_NO_DESTHNDOFRXTP2DEST                                    255U
#define PDUR_NO_DESTHNDOFRXTP2SRC                                     255U
#define PDUR_NO_DESTHNDOFTX2LO                                        255U
#define PDUR_NO_DESTHNDOFTXIF2UP                                      255U
#define PDUR_NO_DESTHNDOFTXTP2SRC                                     255U
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCEnumExistsDefines  PduR Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define PDUR_EXISTS_NOBUFFER_FIFOTYPEOFFIFOINFO                       STD_OFF
#define PDUR_EXISTS_TTSINGLEBUFFER_FIFOTYPEOFFIFOINFO                 STD_OFF
#define PDUR_EXISTS_TTFIFOBUFFER_FIFOTYPEOFFIFOINFO                   STD_OFF
#define PDUR_EXISTS_DIRECTFIFOBUFFER_FIFOTYPEOFFIFOINFO               STD_OFF
#define PDUR_EXISTS_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE STD_OFF
#define PDUR_EXISTS_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE STD_OFF
#define PDUR_EXISTS_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE STD_OFF
#define PDUR_EXISTS_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE STD_ON
#define PDUR_EXISTS_NONE_REQUESTTYPEOFRXGWTPSRC                       STD_OFF
#define PDUR_EXISTS_FUNCTIONAL_REQUEST_REQUESTTYPEOFRXGWTPSRC         STD_OFF
#define PDUR_EXISTS_PHYSICAL_REQUEST_REQUESTTYPEOFRXGWTPSRC           STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCEnumDefines  PduR Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE 0x00U
#define PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE 0x01U
#define PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE 0x00U
#define PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE 0x01U
#define PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE 0x02U
#define PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE 0x01U
#define PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE 0x02U
#define PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE 0x01U
#define PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE 0x02U
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCIsReducedToDefineDefines  PduR Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define PDUR_ISDEF_COPYRXDATA                                         STD_OFF
#define PDUR_ISDEF_COPYTXDATA                                         STD_OFF
#define PDUR_ISDEF_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE STD_OFF
#define PDUR_ISDEF_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE STD_OFF
#define PDUR_ISDEF_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE STD_OFF
#define PDUR_ISDEF_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE STD_OFF
#define PDUR_ISDEF_IFRXINDICATIONFCTPTR                               STD_OFF
#define PDUR_ISDEF_DESTHNDOFRXIF2DEST                                 STD_OFF
#define PDUR_ISDEF_IFRXINDICATIONFCTPTRIDXOFRXIF2DEST                 STD_OFF
#define PDUR_ISDEF_COPYRXDATAIDXOFRXTP2DEST                           STD_OFF
#define PDUR_ISDEF_DESTHNDOFRXTP2DEST                                 STD_OFF
#define PDUR_ISDEF_STARTOFRECEPTIONIDXOFRXTP2DEST                     STD_OFF
#define PDUR_ISDEF_TPRXINDICATIONIDXOFRXTP2DEST                       STD_OFF
#define PDUR_ISDEF_DESTHNDOFRXTP2SRC                                  STD_OFF
#define PDUR_ISDEF_STARTOFRECEPTION                                   STD_OFF
#define PDUR_ISDEF_TPRXINDICATION                                     STD_OFF
#define PDUR_ISDEF_TPTXCONFIRMATION                                   STD_OFF
#define PDUR_ISDEF_TRANSMIT                                           STD_OFF
#define PDUR_ISDEF_DESTHNDOFTX2LO                                     STD_OFF
#define PDUR_ISDEF_TRANSMITIDXOFTX2LO                                 STD_OFF
#define PDUR_ISDEF_DESTHNDOFTXIF2UP                                   STD_OFF
#define PDUR_ISDEF_COPYTXDATAIDXOFTXTP2SRC                            STD_OFF
#define PDUR_ISDEF_DESTHNDOFTXTP2SRC                                  STD_OFF
#define PDUR_ISDEF_TPTXCONFIRMATIONIDXOFTXTP2SRC                      STD_OFF
#define PDUR_ISDEF_COPYRXDATAOFPCCONFIG                               STD_ON
#define PDUR_ISDEF_COPYTXDATAOFPCCONFIG                               STD_ON
#define PDUR_ISDEF_IFROUTINGSTATETABLEOFPCCONFIG                      STD_ON
#define PDUR_ISDEF_IFRXINDICATIONFCTPTROFPCCONFIG                     STD_ON
#define PDUR_ISDEF_INITIALIZEDOFPCCONFIG                              STD_ON
#define PDUR_ISDEF_RXIF2DESTOFPCCONFIG                                STD_ON
#define PDUR_ISDEF_RXTP2DESTOFPCCONFIG                                STD_ON
#define PDUR_ISDEF_RXTP2SRCOFPCCONFIG                                 STD_ON
#define PDUR_ISDEF_STARTOFRECEPTIONOFPCCONFIG                         STD_ON
#define PDUR_ISDEF_TPRXINDICATIONOFPCCONFIG                           STD_ON
#define PDUR_ISDEF_TPTXCONFIRMATIONOFPCCONFIG                         STD_ON
#define PDUR_ISDEF_TRANSMITOFPCCONFIG                                 STD_ON
#define PDUR_ISDEF_TX2LOOFPCCONFIG                                    STD_ON
#define PDUR_ISDEF_TXIF2UPOFPCCONFIG                                  STD_ON
#define PDUR_ISDEF_TXTP2SRCOFPCCONFIG                                 STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCEqualsAlwaysToDefines  PduR Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define PDUR_EQ2_COPYRXDATA                                           
#define PDUR_EQ2_COPYTXDATA                                           
#define PDUR_EQ2_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE 
#define PDUR_EQ2_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE 
#define PDUR_EQ2_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE 
#define PDUR_EQ2_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE 
#define PDUR_EQ2_IFRXINDICATIONFCTPTR                                 
#define PDUR_EQ2_DESTHNDOFRXIF2DEST                                   
#define PDUR_EQ2_IFRXINDICATIONFCTPTRIDXOFRXIF2DEST                   
#define PDUR_EQ2_COPYRXDATAIDXOFRXTP2DEST                             
#define PDUR_EQ2_DESTHNDOFRXTP2DEST                                   
#define PDUR_EQ2_STARTOFRECEPTIONIDXOFRXTP2DEST                       
#define PDUR_EQ2_TPRXINDICATIONIDXOFRXTP2DEST                         
#define PDUR_EQ2_DESTHNDOFRXTP2SRC                                    
#define PDUR_EQ2_STARTOFRECEPTION                                     
#define PDUR_EQ2_TPRXINDICATION                                       
#define PDUR_EQ2_TPTXCONFIRMATION                                     
#define PDUR_EQ2_TRANSMIT                                             
#define PDUR_EQ2_DESTHNDOFTX2LO                                       
#define PDUR_EQ2_TRANSMITIDXOFTX2LO                                   
#define PDUR_EQ2_DESTHNDOFTXIF2UP                                     
#define PDUR_EQ2_COPYTXDATAIDXOFTXTP2SRC                              
#define PDUR_EQ2_DESTHNDOFTXTP2SRC                                    
#define PDUR_EQ2_TPTXCONFIRMATIONIDXOFTXTP2SRC                        
#define PDUR_EQ2_COPYRXDATAOFPCCONFIG                                 PduR_CopyRxData
#define PDUR_EQ2_COPYTXDATAOFPCCONFIG                                 PduR_CopyTxData
#define PDUR_EQ2_IFROUTINGSTATETABLEOFPCCONFIG                        PduR_IfRoutingStateTable
#define PDUR_EQ2_IFRXINDICATIONFCTPTROFPCCONFIG                       PduR_IfRxIndicationFctPtr
#define PDUR_EQ2_INITIALIZEDOFPCCONFIG                                PduR_Initialized
#define PDUR_EQ2_RXIF2DESTOFPCCONFIG                                  PduR_RxIf2Dest
#define PDUR_EQ2_RXTP2DESTOFPCCONFIG                                  PduR_RxTp2Dest
#define PDUR_EQ2_RXTP2SRCOFPCCONFIG                                   PduR_RxTp2Src
#define PDUR_EQ2_STARTOFRECEPTIONOFPCCONFIG                           PduR_StartOfReception
#define PDUR_EQ2_TPRXINDICATIONOFPCCONFIG                             PduR_TpRxIndication
#define PDUR_EQ2_TPTXCONFIRMATIONOFPCCONFIG                           PduR_TpTxConfirmation
#define PDUR_EQ2_TRANSMITOFPCCONFIG                                   PduR_Transmit
#define PDUR_EQ2_TX2LOOFPCCONFIG                                      PduR_Tx2Lo
#define PDUR_EQ2_TXIF2UPOFPCCONFIG                                    PduR_TxIf2Up
#define PDUR_EQ2_TXTP2SRCOFPCCONFIG                                   PduR_TxTp2Src
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCSymbolicInitializationPointers  PduR Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define PduR_Config_Ptr                                               NULL_PTR  /**< symbolic identifier which shall be used to initialize 'PduR' */
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCInitializationSymbols  PduR Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define PduR_Config                                                   NULL_PTR  /**< symbolic identifier which could be used to initialize 'PduR */
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCGeneral  PduR General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define PDUR_CHECK_INIT_POINTER                                       STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define PDUR_FINAL_MAGIC_NUMBER                                       0x331EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of PduR */
#define PDUR_INDIVIDUAL_POSTBUILD                                     STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'PduR' is not configured to be postbuild capable. */
#define PDUR_INIT_DATA                                                PDUR_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define PDUR_INIT_DATA_HASH_CODE                                      -713907762L  /**< the precompile constant to validate the initialization structure at initialization time of PduR with a hashcode. The seed value is '0x331EU' */
#define PDUR_USE_ECUM_BSW_ERROR_HOOK                                  STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define PDUR_USE_INIT_POINTER                                         STD_OFF  /**< STD_ON if the init pointer PduR shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  PduRLTDataSwitches  PduR Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define PDUR_LTCONFIG                                                 STD_OFF  /**< Deactivateable: 'PduR_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 



/** The buffer is idle. */
# define PDUR_PDUR_GWTP_NOBUFFERFOUND_TPBUFPOOLMGRSTATEOFGWTPINFO   ((PduIdType)255)


/** BroadcastDummy */

#define BROADCASTDUMMY 0U

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
  \defgroup  PduRPCGetConstantDuplicatedRootDataMacros  PduR Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define PduR_GetConfigIdOfPCConfig()                                  0U  /**< DefinitionRef: /MICROSAR/PduR/PduRRoutingTables/PduRConfigurationId */
#define PduR_GetCopyRxDataOfPCConfig()                                PduR_CopyRxData  /**< the pointer to PduR_CopyRxData */
#define PduR_GetCopyTxDataOfPCConfig()                                PduR_CopyTxData  /**< the pointer to PduR_CopyTxData */
#define PduR_GetIfRoutingStateTableOfPCConfig()                       PduR_IfRoutingStateTable  /**< the pointer to PduR_IfRoutingStateTable */
#define PduR_GetIfRxIndicationFctPtrOfPCConfig()                      PduR_IfRxIndicationFctPtr  /**< the pointer to PduR_IfRxIndicationFctPtr */
#define PduR_GetInitializedOfPCConfig()                               PduR_Initialized  /**< the pointer to PduR_Initialized */
#define PduR_GetRxIf2DestOfPCConfig()                                 PduR_RxIf2Dest  /**< the pointer to PduR_RxIf2Dest */
#define PduR_GetRxTp2DestOfPCConfig()                                 PduR_RxTp2Dest  /**< the pointer to PduR_RxTp2Dest */
#define PduR_GetRxTp2SrcOfPCConfig()                                  PduR_RxTp2Src  /**< the pointer to PduR_RxTp2Src */
#define PduR_GetSizeOfCopyRxDataOfPCConfig()                          1U  /**< the number of accomplishable value elements in PduR_CopyRxData */
#define PduR_GetSizeOfCopyTxDataOfPCConfig()                          1U  /**< the number of accomplishable value elements in PduR_CopyTxData */
#define PduR_GetSizeOfIfRoutingStateTableOfPCConfig()                 4U  /**< the number of accomplishable value elements in PduR_IfRoutingStateTable */
#define PduR_GetSizeOfIfRxIndicationFctPtrOfPCConfig()                1U  /**< the number of accomplishable value elements in PduR_IfRxIndicationFctPtr */
#define PduR_GetSizeOfRxIf2DestOfPCConfig()                           1U  /**< the number of accomplishable value elements in PduR_RxIf2Dest */
#define PduR_GetSizeOfRxTp2DestOfPCConfig()                           2U  /**< the number of accomplishable value elements in PduR_RxTp2Dest */
#define PduR_GetSizeOfRxTp2SrcOfPCConfig()                            2U  /**< the number of accomplishable value elements in PduR_RxTp2Src */
#define PduR_GetSizeOfStartOfReceptionOfPCConfig()                    1U  /**< the number of accomplishable value elements in PduR_StartOfReception */
#define PduR_GetSizeOfTpRxIndicationOfPCConfig()                      1U  /**< the number of accomplishable value elements in PduR_TpRxIndication */
#define PduR_GetSizeOfTpTxConfirmationOfPCConfig()                    1U  /**< the number of accomplishable value elements in PduR_TpTxConfirmation */
#define PduR_GetSizeOfTransmitOfPCConfig()                            2U  /**< the number of accomplishable value elements in PduR_Transmit */
#define PduR_GetSizeOfTx2LoOfPCConfig()                               2U  /**< the number of accomplishable value elements in PduR_Tx2Lo */
#define PduR_GetSizeOfTxIf2UpOfPCConfig()                             1U  /**< the number of accomplishable value elements in PduR_TxIf2Up */
#define PduR_GetSizeOfTxTp2SrcOfPCConfig()                            1U  /**< the number of accomplishable value elements in PduR_TxTp2Src */
#define PduR_GetStartOfReceptionOfPCConfig()                          PduR_StartOfReception  /**< the pointer to PduR_StartOfReception */
#define PduR_GetTpRxIndicationOfPCConfig()                            PduR_TpRxIndication  /**< the pointer to PduR_TpRxIndication */
#define PduR_GetTpTxConfirmationOfPCConfig()                          PduR_TpTxConfirmation  /**< the pointer to PduR_TpTxConfirmation */
#define PduR_GetTransmitOfPCConfig()                                  PduR_Transmit  /**< the pointer to PduR_Transmit */
#define PduR_GetTx2LoOfPCConfig()                                     PduR_Tx2Lo  /**< the pointer to PduR_Tx2Lo */
#define PduR_GetTxIf2UpOfPCConfig()                                   PduR_TxIf2Up  /**< the pointer to PduR_TxIf2Up */
#define PduR_GetTxTp2SrcOfPCConfig()                                  PduR_TxTp2Src  /**< the pointer to PduR_TxTp2Src */
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCGetDataMacros  PduR Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define PduR_GetCopyRxData(Index)                                     (PduR_GetCopyRxDataOfPCConfig()[(Index)])
#define PduR_GetCopyTxData(Index)                                     (PduR_GetCopyTxDataOfPCConfig()[(Index)])
#define PduR_GetNextState_For_Init_If_Routing_StateOfIfRoutingStateTable(Index) (PduR_GetIfRoutingStateTableOfPCConfig()[(Index)].NextState_For_Init_If_Routing_StateOfIfRoutingStateTable)
#define PduR_GetNextState_For_Wait_For_RxIndicationOfIfRoutingStateTable(Index) (PduR_GetIfRoutingStateTableOfPCConfig()[(Index)].NextState_For_Wait_For_RxIndicationOfIfRoutingStateTable)
#define PduR_GetNextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTable(Index) (PduR_GetIfRoutingStateTableOfPCConfig()[(Index)].NextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTable)
#define PduR_GetNextState_For_Wait_For_TxConfirmationOfIfRoutingStateTable(Index) (PduR_GetIfRoutingStateTableOfPCConfig()[(Index)].NextState_For_Wait_For_TxConfirmationOfIfRoutingStateTable)
#define PduR_GetIfRxIndicationFctPtr(Index)                           (PduR_GetIfRxIndicationFctPtrOfPCConfig()[(Index)])
#define PduR_IsInitialized()                                          ((PduR_GetInitializedOfPCConfig()) != FALSE)
#define PduR_GetStartOfReceptionIdxOfRxTp2Dest(Index)                 (PduR_GetRxTp2DestOfPCConfig()[(Index)].StartOfReceptionIdxOfRxTp2Dest)
#define PduR_GetStartOfReception(Index)                               (PduR_GetStartOfReceptionOfPCConfig()[(Index)])
#define PduR_GetTpRxIndication(Index)                                 (PduR_GetTpRxIndicationOfPCConfig()[(Index)])
#define PduR_GetTpTxConfirmation(Index)                               (PduR_GetTpTxConfirmationOfPCConfig()[(Index)])
#define PduR_GetTransmit(Index)                                       (PduR_GetTransmitOfPCConfig()[(Index)])
#define PduR_GetDestHndOfTx2Lo(Index)                                 (PduR_GetTx2LoOfPCConfig()[(Index)].DestHndOfTx2Lo)
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCGetDeduplicatedDataMacros  PduR Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define PduR_GetConfigId()                                            PduR_GetConfigIdOfPCConfig()
#define PduR_GetDestHndOfRxIf2Dest(Index)                             ((PduR_DestHndOfRxIf2DestType)((Index)))  /**< Handle to be used as parameter for the RxIndication function call. */
#define PduR_GetIfRxIndicationFctPtrIdxOfRxIf2Dest(Index)             ((PduR_IfRxIndicationFctPtrIdxOfRxIf2DestType)((Index)))  /**< the index of the 1:1 relation pointing to PduR_IfRxIndicationFctPtr */
#define PduR_GetCopyRxDataIdxOfRxTp2Dest(Index)                       PduR_GetStartOfReceptionIdxOfRxTp2Dest(Index)  /**< the index of the 1:1 relation pointing to PduR_CopyRxData */
#define PduR_GetDestHndOfRxTp2Dest(Index)                             ((PduR_DestHndOfRxTp2DestType)((Index)))  /**< handle to be used as parameter for the StartOfReception, CopyRxData or RxIndication function call. */
#define PduR_GetTpRxIndicationIdxOfRxTp2Dest(Index)                   PduR_GetStartOfReceptionIdxOfRxTp2Dest(Index)  /**< the index of the 1:1 relation pointing to PduR_TpRxIndication */
#define PduR_GetDestHndOfRxTp2Src(Index)                              ((PduR_DestHndOfRxTp2SrcType)((Index)))  /**< handle to be used as parameter for the CancelReceive or ChangeParameter function call. */
#define PduR_GetSizeOfCopyRxData()                                    PduR_GetSizeOfCopyRxDataOfPCConfig()
#define PduR_GetSizeOfCopyTxData()                                    PduR_GetSizeOfCopyTxDataOfPCConfig()
#define PduR_GetSizeOfIfRoutingStateTable()                           PduR_GetSizeOfIfRoutingStateTableOfPCConfig()
#define PduR_GetSizeOfIfRxIndicationFctPtr()                          PduR_GetSizeOfIfRxIndicationFctPtrOfPCConfig()
#define PduR_GetSizeOfRxIf2Dest()                                     PduR_GetSizeOfRxIf2DestOfPCConfig()
#define PduR_GetSizeOfRxTp2Dest()                                     PduR_GetSizeOfRxTp2DestOfPCConfig()
#define PduR_GetSizeOfRxTp2Src()                                      PduR_GetSizeOfRxTp2SrcOfPCConfig()
#define PduR_GetSizeOfStartOfReception()                              PduR_GetSizeOfStartOfReceptionOfPCConfig()
#define PduR_GetSizeOfTpRxIndication()                                PduR_GetSizeOfTpRxIndicationOfPCConfig()
#define PduR_GetSizeOfTpTxConfirmation()                              PduR_GetSizeOfTpTxConfirmationOfPCConfig()
#define PduR_GetSizeOfTransmit()                                      PduR_GetSizeOfTransmitOfPCConfig()
#define PduR_GetSizeOfTx2Lo()                                         PduR_GetSizeOfTx2LoOfPCConfig()
#define PduR_GetSizeOfTxIf2Up()                                       PduR_GetSizeOfTxIf2UpOfPCConfig()
#define PduR_GetSizeOfTxTp2Src()                                      PduR_GetSizeOfTxTp2SrcOfPCConfig()
#define PduR_GetTransmitIdxOfTx2Lo(Index)                             ((PduR_TransmitIdxOfTx2LoType)((Index)))  /**< the index of the 1:1 relation pointing to PduR_Transmit */
#define PduR_GetDestHndOfTxIf2Up(Index)                               ((PduR_DestHndOfTxIf2UpType)((Index)))  /**< handle to be used as parameter for the TxConfirmation or TriggerTransmit function call. */
#define PduR_GetCopyTxDataIdxOfTxTp2Src(Index)                        ((PduR_CopyTxDataIdxOfTxTp2SrcType)((Index)))  /**< the index of the 1:1 relation pointing to PduR_CopyTxData */
#define PduR_GetDestHndOfTxTp2Src(Index)                              ((PduR_DestHndOfTxTp2SrcType)((Index)))  /**< handle to be used as parameter for the CopyTxData or TxConfirmation function call. */
#define PduR_GetTpTxConfirmationIdxOfTxTp2Src(Index)                  ((PduR_TpTxConfirmationIdxOfTxTp2SrcType)((Index)))  /**< the index of the 1:1 relation pointing to PduR_TpTxConfirmation */
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCSetDataMacros  PduR Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define PduR_SetInitialized(Value)                                    PduR_GetInitializedOfPCConfig() = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  PduRPCHasMacros  PduR Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define PduR_HasConfigId()                                            (TRUE != FALSE)
#define PduR_HasCopyRxData()                                          (TRUE != FALSE)
#define PduR_HasCopyTxData()                                          (TRUE != FALSE)
#define PduR_HasIfRoutingStateTable()                                 (TRUE != FALSE)
#define PduR_HasNextState_For_Init_If_Routing_StateOfIfRoutingStateTable() (TRUE != FALSE)
#define PduR_HasNextState_For_Wait_For_RxIndicationOfIfRoutingStateTable() (TRUE != FALSE)
#define PduR_HasNextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTable() (TRUE != FALSE)
#define PduR_HasNextState_For_Wait_For_TxConfirmationOfIfRoutingStateTable() (TRUE != FALSE)
#define PduR_HasIfRxIndicationFctPtr()                                (TRUE != FALSE)
#define PduR_HasInitialized()                                         (TRUE != FALSE)
#define PduR_HasRxIf2Dest()                                           (TRUE != FALSE)
#define PduR_HasDestHndOfRxIf2Dest()                                  (TRUE != FALSE)
#define PduR_HasIfRxIndicationFctPtrIdxOfRxIf2Dest()                  (TRUE != FALSE)
#define PduR_HasRxTp2Dest()                                           (TRUE != FALSE)
#define PduR_HasCopyRxDataIdxOfRxTp2Dest()                            (TRUE != FALSE)
#define PduR_HasDestHndOfRxTp2Dest()                                  (TRUE != FALSE)
#define PduR_HasStartOfReceptionIdxOfRxTp2Dest()                      (TRUE != FALSE)
#define PduR_HasTpRxIndicationIdxOfRxTp2Dest()                        (TRUE != FALSE)
#define PduR_HasRxTp2Src()                                            (TRUE != FALSE)
#define PduR_HasDestHndOfRxTp2Src()                                   (TRUE != FALSE)
#define PduR_HasSizeOfCopyRxData()                                    (TRUE != FALSE)
#define PduR_HasSizeOfCopyTxData()                                    (TRUE != FALSE)
#define PduR_HasSizeOfIfRoutingStateTable()                           (TRUE != FALSE)
#define PduR_HasSizeOfIfRxIndicationFctPtr()                          (TRUE != FALSE)
#define PduR_HasSizeOfRxIf2Dest()                                     (TRUE != FALSE)
#define PduR_HasSizeOfRxTp2Dest()                                     (TRUE != FALSE)
#define PduR_HasSizeOfRxTp2Src()                                      (TRUE != FALSE)
#define PduR_HasSizeOfStartOfReception()                              (TRUE != FALSE)
#define PduR_HasSizeOfTpRxIndication()                                (TRUE != FALSE)
#define PduR_HasSizeOfTpTxConfirmation()                              (TRUE != FALSE)
#define PduR_HasSizeOfTransmit()                                      (TRUE != FALSE)
#define PduR_HasSizeOfTx2Lo()                                         (TRUE != FALSE)
#define PduR_HasSizeOfTxIf2Up()                                       (TRUE != FALSE)
#define PduR_HasSizeOfTxTp2Src()                                      (TRUE != FALSE)
#define PduR_HasStartOfReception()                                    (TRUE != FALSE)
#define PduR_HasTpRxIndication()                                      (TRUE != FALSE)
#define PduR_HasTpTxConfirmation()                                    (TRUE != FALSE)
#define PduR_HasTransmit()                                            (TRUE != FALSE)
#define PduR_HasTx2Lo()                                               (TRUE != FALSE)
#define PduR_HasDestHndOfTx2Lo()                                      (TRUE != FALSE)
#define PduR_HasTransmitIdxOfTx2Lo()                                  (TRUE != FALSE)
#define PduR_HasTxIf2Up()                                             (TRUE != FALSE)
#define PduR_HasDestHndOfTxIf2Up()                                    (TRUE != FALSE)
#define PduR_HasTxTp2Src()                                            (TRUE != FALSE)
#define PduR_HasCopyTxDataIdxOfTxTp2Src()                             (TRUE != FALSE)
#define PduR_HasDestHndOfTxTp2Src()                                   (TRUE != FALSE)
#define PduR_HasTpTxConfirmationIdxOfTxTp2Src()                       (TRUE != FALSE)
#define PduR_HasPCConfig()                                            (TRUE != FALSE)
#define PduR_HasConfigIdOfPCConfig()                                  (TRUE != FALSE)
#define PduR_HasCopyRxDataOfPCConfig()                                (TRUE != FALSE)
#define PduR_HasCopyTxDataOfPCConfig()                                (TRUE != FALSE)
#define PduR_HasIfRoutingStateTableOfPCConfig()                       (TRUE != FALSE)
#define PduR_HasIfRxIndicationFctPtrOfPCConfig()                      (TRUE != FALSE)
#define PduR_HasInitializedOfPCConfig()                               (TRUE != FALSE)
#define PduR_HasRxIf2DestOfPCConfig()                                 (TRUE != FALSE)
#define PduR_HasRxTp2DestOfPCConfig()                                 (TRUE != FALSE)
#define PduR_HasRxTp2SrcOfPCConfig()                                  (TRUE != FALSE)
#define PduR_HasSizeOfCopyRxDataOfPCConfig()                          (TRUE != FALSE)
#define PduR_HasSizeOfCopyTxDataOfPCConfig()                          (TRUE != FALSE)
#define PduR_HasSizeOfIfRoutingStateTableOfPCConfig()                 (TRUE != FALSE)
#define PduR_HasSizeOfIfRxIndicationFctPtrOfPCConfig()                (TRUE != FALSE)
#define PduR_HasSizeOfRxIf2DestOfPCConfig()                           (TRUE != FALSE)
#define PduR_HasSizeOfRxTp2DestOfPCConfig()                           (TRUE != FALSE)
#define PduR_HasSizeOfRxTp2SrcOfPCConfig()                            (TRUE != FALSE)
#define PduR_HasSizeOfStartOfReceptionOfPCConfig()                    (TRUE != FALSE)
#define PduR_HasSizeOfTpRxIndicationOfPCConfig()                      (TRUE != FALSE)
#define PduR_HasSizeOfTpTxConfirmationOfPCConfig()                    (TRUE != FALSE)
#define PduR_HasSizeOfTransmitOfPCConfig()                            (TRUE != FALSE)
#define PduR_HasSizeOfTx2LoOfPCConfig()                               (TRUE != FALSE)
#define PduR_HasSizeOfTxIf2UpOfPCConfig()                             (TRUE != FALSE)
#define PduR_HasSizeOfTxTp2SrcOfPCConfig()                            (TRUE != FALSE)
#define PduR_HasStartOfReceptionOfPCConfig()                          (TRUE != FALSE)
#define PduR_HasTpRxIndicationOfPCConfig()                            (TRUE != FALSE)
#define PduR_HasTpTxConfirmationOfPCConfig()                          (TRUE != FALSE)
#define PduR_HasTransmitOfPCConfig()                                  (TRUE != FALSE)
#define PduR_HasTx2LoOfPCConfig()                                     (TRUE != FALSE)
#define PduR_HasTxIf2UpOfPCConfig()                                   (TRUE != FALSE)
#define PduR_HasTxTp2SrcOfPCConfig()                                  (TRUE != FALSE)
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
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/* Communication Interface APIs */
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_TransmitFctPtrType) (PduIdType, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA));
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_TriggerTransmitFctPtrType) (PduIdType, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA));
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_IfRxIndicationType) (PduIdType, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA));
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_IfTxConfirmationFctPtrType) (PduIdType);

/* Transport Protocol APIs */
typedef P2FUNC(BufReq_ReturnType, PDUR_APPL_CODE, PduR_StartOfReceptionFctPtrType) (PduIdType, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA), PduLengthType, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA));
typedef P2FUNC(BufReq_ReturnType, PDUR_APPL_CODE, PduR_CopyRxDataFctPtrType) (PduIdType, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA), P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA));
typedef P2FUNC(BufReq_ReturnType, PDUR_APPL_CODE, PduR_CopyTxDataFctPtrType) (PduIdType, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA), P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA), P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA));
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_TpRxIndicationFctPtrType) (PduIdType, Std_ReturnType);
typedef P2FUNC(void, PDUR_APPL_CODE, PduR_TpTxConfirmationFctPtrType) (PduIdType, Std_ReturnType);

#if (PDUR_CANCELTRANSMITFCTPTR == STD_ON)
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_CancelTransmitFctPtrType)(PduIdType);
#endif
#if (PDUR_CANCELRECEIVEFCTPTR == STD_ON)
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_CancelReceiveFctPtrType) (PduIdType);
#endif
#if (PDUR_CHANGEPARAMETERFCTPTR == STD_ON)
typedef P2FUNC(Std_ReturnType, PDUR_APPL_CODE, PduR_ChangeParameterFctPtrType) (PduIdType, TPParameterType, uint16);
#endif

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  PduRPCIterableTypes  PduR Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate PduR_CopyRxData */
typedef uint8_least PduR_CopyRxDataIterType;

/**   \brief  type used to iterate PduR_CopyTxData */
typedef uint8_least PduR_CopyTxDataIterType;

/**   \brief  type used to iterate PduR_IfRoutingStateTable */
typedef uint8_least PduR_IfRoutingStateTableIterType;

/**   \brief  type used to iterate PduR_IfRxIndicationFctPtr */
typedef uint8_least PduR_IfRxIndicationFctPtrIterType;

/**   \brief  type used to iterate PduR_RxIf2Dest */
typedef uint8_least PduR_RxIf2DestIterType;

/**   \brief  type used to iterate PduR_RxTp2Dest */
typedef uint8_least PduR_RxTp2DestIterType;

/**   \brief  type used to iterate PduR_RxTp2Src */
typedef uint8_least PduR_RxTp2SrcIterType;

/**   \brief  type used to iterate PduR_StartOfReception */
typedef uint8_least PduR_StartOfReceptionIterType;

/**   \brief  type used to iterate PduR_TpRxIndication */
typedef uint8_least PduR_TpRxIndicationIterType;

/**   \brief  type used to iterate PduR_TpTxConfirmation */
typedef uint8_least PduR_TpTxConfirmationIterType;

/**   \brief  type used to iterate PduR_Transmit */
typedef uint8_least PduR_TransmitIterType;

/**   \brief  type used to iterate PduR_Tx2Lo */
typedef uint8_least PduR_Tx2LoIterType;

/**   \brief  type used to iterate PduR_TxIf2Up */
typedef uint8_least PduR_TxIf2UpIterType;

/**   \brief  type used to iterate PduR_TxTp2Src */
typedef uint8_least PduR_TxTp2SrcIterType;

/** 
  \}
*/ 

/** 
  \defgroup  PduRPCValueTypes  PduR Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for PduR_ConfigId */
typedef uint8 PduR_ConfigIdType;

/**   \brief  value based type definition for PduR_NextState_For_Init_If_Routing_StateOfIfRoutingStateTable */
typedef uint8 PduR_NextState_For_Init_If_Routing_StateOfIfRoutingStateTableType;

/**   \brief  value based type definition for PduR_NextState_For_Wait_For_RxIndicationOfIfRoutingStateTable */
typedef uint8 PduR_NextState_For_Wait_For_RxIndicationOfIfRoutingStateTableType;

/**   \brief  value based type definition for PduR_NextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTable */
typedef uint8 PduR_NextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTableType;

/**   \brief  value based type definition for PduR_NextState_For_Wait_For_TxConfirmationOfIfRoutingStateTable */
typedef uint8 PduR_NextState_For_Wait_For_TxConfirmationOfIfRoutingStateTableType;

/**   \brief  value based type definition for PduR_Initialized */
typedef boolean PduR_InitializedType;

/**   \brief  value based type definition for PduR_DestHndOfRxIf2Dest */
typedef uint8 PduR_DestHndOfRxIf2DestType;

/**   \brief  value based type definition for PduR_IfRxIndicationFctPtrIdxOfRxIf2Dest */
typedef uint8 PduR_IfRxIndicationFctPtrIdxOfRxIf2DestType;

/**   \brief  value based type definition for PduR_CopyRxDataIdxOfRxTp2Dest */
typedef uint8 PduR_CopyRxDataIdxOfRxTp2DestType;

/**   \brief  value based type definition for PduR_DestHndOfRxTp2Dest */
typedef uint8 PduR_DestHndOfRxTp2DestType;

/**   \brief  value based type definition for PduR_StartOfReceptionIdxOfRxTp2Dest */
typedef uint8 PduR_StartOfReceptionIdxOfRxTp2DestType;

/**   \brief  value based type definition for PduR_TpRxIndicationIdxOfRxTp2Dest */
typedef uint8 PduR_TpRxIndicationIdxOfRxTp2DestType;

/**   \brief  value based type definition for PduR_DestHndOfRxTp2Src */
typedef uint8 PduR_DestHndOfRxTp2SrcType;

/**   \brief  value based type definition for PduR_SizeOfCopyRxData */
typedef uint8 PduR_SizeOfCopyRxDataType;

/**   \brief  value based type definition for PduR_SizeOfCopyTxData */
typedef uint8 PduR_SizeOfCopyTxDataType;

/**   \brief  value based type definition for PduR_SizeOfIfRoutingStateTable */
typedef uint8 PduR_SizeOfIfRoutingStateTableType;

/**   \brief  value based type definition for PduR_SizeOfIfRxIndicationFctPtr */
typedef uint8 PduR_SizeOfIfRxIndicationFctPtrType;

/**   \brief  value based type definition for PduR_SizeOfRxIf2Dest */
typedef uint8 PduR_SizeOfRxIf2DestType;

/**   \brief  value based type definition for PduR_SizeOfRxTp2Dest */
typedef uint8 PduR_SizeOfRxTp2DestType;

/**   \brief  value based type definition for PduR_SizeOfRxTp2Src */
typedef uint8 PduR_SizeOfRxTp2SrcType;

/**   \brief  value based type definition for PduR_SizeOfStartOfReception */
typedef uint8 PduR_SizeOfStartOfReceptionType;

/**   \brief  value based type definition for PduR_SizeOfTpRxIndication */
typedef uint8 PduR_SizeOfTpRxIndicationType;

/**   \brief  value based type definition for PduR_SizeOfTpTxConfirmation */
typedef uint8 PduR_SizeOfTpTxConfirmationType;

/**   \brief  value based type definition for PduR_SizeOfTransmit */
typedef uint8 PduR_SizeOfTransmitType;

/**   \brief  value based type definition for PduR_SizeOfTx2Lo */
typedef uint8 PduR_SizeOfTx2LoType;

/**   \brief  value based type definition for PduR_SizeOfTxIf2Up */
typedef uint8 PduR_SizeOfTxIf2UpType;

/**   \brief  value based type definition for PduR_SizeOfTxTp2Src */
typedef uint8 PduR_SizeOfTxTp2SrcType;

/**   \brief  value based type definition for PduR_DestHndOfTx2Lo */
typedef uint8 PduR_DestHndOfTx2LoType;

/**   \brief  value based type definition for PduR_TransmitIdxOfTx2Lo */
typedef uint8 PduR_TransmitIdxOfTx2LoType;

/**   \brief  value based type definition for PduR_DestHndOfTxIf2Up */
typedef uint8 PduR_DestHndOfTxIf2UpType;

/**   \brief  value based type definition for PduR_CopyTxDataIdxOfTxTp2Src */
typedef uint8 PduR_CopyTxDataIdxOfTxTp2SrcType;

/**   \brief  value based type definition for PduR_DestHndOfTxTp2Src */
typedef uint8 PduR_DestHndOfTxTp2SrcType;

/**   \brief  value based type definition for PduR_TpTxConfirmationIdxOfTxTp2Src */
typedef uint8 PduR_TpTxConfirmationIdxOfTxTp2SrcType;

/** 
  \}
*/ 

/** 
  \defgroup  PduRPCStructTypes  PduR Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in PduR_IfRoutingStateTable */
typedef struct sPduR_IfRoutingStateTableType
{
  PduR_NextState_For_Init_If_Routing_StateOfIfRoutingStateTableType NextState_For_Init_If_Routing_StateOfIfRoutingStateTable;
  PduR_NextState_For_Wait_For_RxIndicationOfIfRoutingStateTableType NextState_For_Wait_For_RxIndicationOfIfRoutingStateTable;
  PduR_NextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTableType NextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTable;
  PduR_NextState_For_Wait_For_TxConfirmationOfIfRoutingStateTableType NextState_For_Wait_For_TxConfirmationOfIfRoutingStateTable;
} PduR_IfRoutingStateTableType;

/**   \brief  type used in PduR_RxIf2Dest */
typedef struct sPduR_RxIf2DestType
{
  uint8 PduR_RxIf2DestNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} PduR_RxIf2DestType;

/**   \brief  type used in PduR_RxTp2Dest */
typedef struct sPduR_RxTp2DestType
{
  PduR_StartOfReceptionIdxOfRxTp2DestType StartOfReceptionIdxOfRxTp2Dest;  /**< the index of the 1:1 relation pointing to PduR_StartOfReception */
} PduR_RxTp2DestType;

/**   \brief  type used in PduR_RxTp2Src */
typedef struct sPduR_RxTp2SrcType
{
  uint8 PduR_RxTp2SrcNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} PduR_RxTp2SrcType;

/**   \brief  type used in PduR_Tx2Lo */
typedef struct sPduR_Tx2LoType
{
  PduR_DestHndOfTx2LoType DestHndOfTx2Lo;  /**< Handle to be used as parameter for the Transmit function call. */
} PduR_Tx2LoType;

/**   \brief  type used in PduR_TxIf2Up */
typedef struct sPduR_TxIf2UpType
{
  uint8 PduR_TxIf2UpNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} PduR_TxIf2UpType;

/**   \brief  type used in PduR_TxTp2Src */
typedef struct sPduR_TxTp2SrcType
{
  uint8 PduR_TxTp2SrcNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} PduR_TxTp2SrcType;

/** 
  \}
*/ 

/** 
  \defgroup  PduRPCRootValueTypes  PduR Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in PduR_PCConfig */
typedef struct sPduR_PCConfigType
{
  uint8 PduR_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} PduR_PCConfigType;

typedef PduR_PCConfigType PduR_PBConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
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
  PduR_CopyRxData
**********************************************************************************************************************/
/** 
  \var    PduR_CopyRxData
  \brief  Upper layer transport protocol copy rx data function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_CopyRxDataFctPtrType, PDUR_CONST) PduR_CopyRxData[1];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_CopyTxData
**********************************************************************************************************************/
/** 
  \var    PduR_CopyTxData
  \brief  Upper layer transport protocol copy tx data function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_CopyTxDataFctPtrType, PDUR_CONST) PduR_CopyTxData[1];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_IfRoutingStateTable
**********************************************************************************************************************/
/** 
  \var    PduR_IfRoutingStateTable
  \brief  Contains state transition for Communication Interface routings 
  \details
  Element                                   Description
  NextState_For_Init_If_Routing_State   
  NextState_For_Wait_For_RxIndication   
  NextState_For_Wait_For_TriggerTransmit
  NextState_For_Wait_For_TxConfirmation 
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_IfRoutingStateTableType, PDUR_CONST) PduR_IfRoutingStateTable[4];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_IfRxIndicationFctPtr
**********************************************************************************************************************/
/** 
  \var    PduR_IfRxIndicationFctPtr
  \brief  Upper layer communication interface Rx indication function pointers.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_IfRxIndicationType, PDUR_CONST) PduR_IfRxIndicationFctPtr[1];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_RxTp2Dest
**********************************************************************************************************************/
/** 
  \var    PduR_RxTp2Dest
  \brief  This table contains all routing information to perform the Rx handling of a Tp Routing. Used in the PduR_&lt;LLTp&gt;_StartOfReception, PduR_&lt;LLTp&gt;_CopyRxData and PduR_&lt;LLTp&gt;_RxIndication.
  \details
  Element                Description
  StartOfReceptionIdx    the index of the 1:1 relation pointing to PduR_StartOfReception
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_RxTp2DestType, PDUR_CONST) PduR_RxTp2Dest[2];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_StartOfReception
**********************************************************************************************************************/
/** 
  \var    PduR_StartOfReception
  \brief  Upper layer transport protocol start of reception function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_StartOfReceptionFctPtrType, PDUR_CONST) PduR_StartOfReception[1];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpRxIndication
**********************************************************************************************************************/
/** 
  \var    PduR_TpRxIndication
  \brief  Upper layer transport protocol Rx indication function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_TpRxIndicationFctPtrType, PDUR_CONST) PduR_TpRxIndication[1];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_TpTxConfirmation
**********************************************************************************************************************/
/** 
  \var    PduR_TpTxConfirmation
  \brief  Upper layer transport protocol Tx confimation function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_TpTxConfirmationFctPtrType, PDUR_CONST) PduR_TpTxConfirmation[1];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Transmit
**********************************************************************************************************************/
/** 
  \var    PduR_Transmit
  \brief  Lower layer transmit function pointers
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_TransmitFctPtrType, PDUR_CONST) PduR_Transmit[2];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Tx2Lo
**********************************************************************************************************************/
/** 
  \var    PduR_Tx2Lo
  \brief  Contains all informations to route a Pdu from a upper layer to a lower layer module, or to cancel a transmission
  \details
  Element    Description
  DestHnd    Handle to be used as parameter for the Transmit function call.
*/ 
#define PDUR_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(PduR_Tx2LoType, PDUR_CONST) PduR_Tx2Lo[2];
#define PDUR_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  PduR_Initialized
**********************************************************************************************************************/
/** 
  \var    PduR_Initialized
  \brief  Initialization state of PduR. TRUE, if PduR_Init() has been called, else FALSE.
*/ 
#define PDUR_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(PduR_InitializedType, PDUR_VAR_ZERO_INIT) PduR_Initialized;
#define PDUR_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


#endif  /* PDUR_LCFG_H */
/**********************************************************************************************************************
  END OF FILE: PduR_Lcfg.h
**********************************************************************************************************************/

