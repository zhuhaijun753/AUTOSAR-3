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
 *              File: PduR_Lcfg.c
 *   Generation Time: 2016-03-29 15:19:11
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/

#define PDUR_LCFG_SOURCE

/**********************************************************************************************************************
 * MISRA / PCLINT JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 2006 EOF */ /* MD_MSR_14.7 */
/* PRQA S 3109 EOF */ /* MD_MSR_19.4 */
/* PRQA S 3199 EOF */ /* MD_CSL_3199 */
/* PRQA S 0779 EOF */ /* MD_MSR_5.1 */
/* PRQA S 0777 EOF */ /* MD_MSR_5.1_777 */
/* PRQA S 3355, 3356 EOF */ /* MD_CSL_3355_3356 */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "PduR.h"

#if ( PDUR_DEV_ERROR_REPORT == STD_ON )
#  include "Det.h"
#endif

/* Include headers with callbacks */
#include "PduR_Com.h"
#include "PduR_CanIf.h"
#include "PduR_CanTp.h"
#include "PduR_Dcm.h"


/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/* \trace SPEC-663, SPEC-661 */

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
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
CONST(PduR_CopyRxDataFctPtrType, PDUR_CONST) PduR_CopyRxData[1] = {
  /* Index    CopyRxData          Referable Keys */
  /*     0 */Dcm_CopyRxData    /* [/ActiveEcuC/PduR/Dcm] */
};
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
CONST(PduR_CopyTxDataFctPtrType, PDUR_CONST) PduR_CopyTxData[1] = {
  /* Index    CopyTxData          Referable Keys */
  /*     0 */Dcm_CopyTxData    /* [/ActiveEcuC/PduR/Dcm] */
};
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
CONST(PduR_IfRoutingStateTableType, PDUR_CONST) PduR_IfRoutingStateTable[4] = {
    /* Index    NextState_For_Init_If_Routing_State                                                     NextState_For_Wait_For_RxIndication                                                     NextState_For_Wait_For_TriggerTransmit                                                     NextState_For_Wait_For_TxConfirmation                                                    */
  { /*     0 */    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE,    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE,                                                                                       0UL,                                                                                      0UL },
  { /*     1 */ PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE,                                                                                      0UL },
  { /*     2 */    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE,  PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TRIGGERTRANSMITOFIFROUTINGSTATETABLE, PDUR_WAIT_FOR_TRIGGERTRANSMIT_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE },
  { /*     3 */    PDUR_WAIT_FOR_RXINDICATION_NEXTSTATE_FOR_INIT_IF_ROUTING_STATEOFIFROUTINGSTATETABLE,  PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_RXINDICATIONOFIFROUTINGSTATETABLE,                                                                                       0UL,  PDUR_WAIT_FOR_TXCONFIRMATION_NEXTSTATE_FOR_WAIT_FOR_TXCONFIRMATIONOFIFROUTINGSTATETABLE }
};
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
CONST(PduR_IfRxIndicationType, PDUR_CONST) PduR_IfRxIndicationFctPtr[1] = {
  /* Index    IfRxIndicationFctPtr      Referable Keys */
  /*     0 */Com_RxIndication        /* [/ActiveEcuC/PduR/Com] */
};
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
CONST(PduR_RxTp2DestType, PDUR_CONST) PduR_RxTp2Dest[2] = {
    /* Index    StartOfReceptionIdx        Referable Keys */
  { /*     0 */                  0U },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_msg_diag_RequestGlobal_0fb271d2_In/SRC_Can_PT_msg_diag_RequestGlobal_0fb271d2_In] */
  { /*     1 */                  0U }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_msg_diag_Request_MyECU_0fb271d2_In/SRC_Can_PT_msg_diag_Request_MyECU_0fb271d2_In] */
};
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
CONST(PduR_StartOfReceptionFctPtrType, PDUR_CONST) PduR_StartOfReception[1] = {
  /* Index    StartOfReception          Referable Keys */
  /*     0 */Dcm_StartOfReception    /* [/ActiveEcuC/PduR/Dcm] */
};
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
CONST(PduR_TpRxIndicationFctPtrType, PDUR_CONST) PduR_TpRxIndication[1] = {
  /* Index    TpRxIndication          Referable Keys */
  /*     0 */Dcm_TpRxIndication    /* [/ActiveEcuC/PduR/Dcm] */
};
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
CONST(PduR_TpTxConfirmationFctPtrType, PDUR_CONST) PduR_TpTxConfirmation[1] = {
  /* Index    TpTxConfirmation          Referable Keys */
  /*     0 */Dcm_TpTxConfirmation    /* [/ActiveEcuC/PduR/Dcm] */
};
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
CONST(PduR_TransmitFctPtrType, PDUR_CONST) PduR_Transmit[2] = {
  /* Index    Transmit            Referable Keys */
  /*     0 */CanIf_Transmit ,  /* [/ActiveEcuC/PduR/CanIf] */
  /*     1 */CanTp_Transmit    /* [/ActiveEcuC/PduR/CanTp] */
};
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
CONST(PduR_Tx2LoType, PDUR_CONST) PduR_Tx2Lo[2] = {
    /* Index    DestHnd                                                        Referable Keys */
  { /*     0 */ CanIfConf_CanIfTxPduCfg_msg_Transmit_oCAN00_Tx_3abd61be },  /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_msg_Transmit_0fb271d2_Out/SRC_Can_PT_msg_Transmit_0fb271d2_Out] */
  { /*     1 */                   CanTpConf_CanTpTxNSdu_TxNSdu_6aef5f8e }   /* [/ActiveEcuC/PduR/PduRRoutingTables/PduRRoutingTable/Can_PT_msg_diag_Response_MyECU_0fb271d2_Out/SRC_Can_PT_msg_diag_Response_MyECU_0fb271d2_Out] */
};
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
VAR(PduR_InitializedType, PDUR_VAR_ZERO_INIT) PduR_Initialized = FALSE;
#define PDUR_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
#define PDUR_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* Upper Layer Interface APIs */



/**********************************************************************************************************************
  PduR_ComTransmit
**********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_ComTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;
  Std_ReturnType retVal = E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* Check initialization state of the component */
  if (PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_TX2LO == STD_ON)
  else if((id >= PduR_GetSizeOfTx2Lo())
#  if(PDUR_INVALIDHNDOFTX2LO == STD_ON)
  || (PduR_IsInvalidHndOfTx2Lo(id))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_TX2LO == STD_ON) */
#endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
#if (PDUR_TX2LO == STD_ON)
# if (PDUR_BSWMPDURTRANSMITCALLBACKOFTX2LO == STD_ON)
    if(PduR_IsBswMPduRTransmitCallbackOfTx2Lo(id))
    {
      BswM_PduR_Transmit(id, info);
    }
# endif /* (PDUR_BSWMPDURTRANSMITCALLBACKOFTX2LO == STD_ON) */
# if (PDUR_RPGDESTINITIDXOFTX2LO == STD_ON)
    if((!PduR_IsRpgDestInitUsedOfTx2Lo(id)) || (0 != PduR_GetDestPduRpgCnt(PduR_GetRpgDestInitIdxOfTx2Lo(id)))) /* COV_PDUR_RPG_FEATURE_CHECK */
# endif
    {
      PduR_DestHndOfTx2LoType destHnd = PduR_GetDestHndOfTx2Lo(id);
      retVal = PduR_GetTransmit(PduR_GetTransmitIdxOfTx2Lo(id))(destHnd, info); /* SBSW_PDUR_LL_CALL_TRANSMIT_LCFG */
    }
#else
# if (PDUR_USE_DUMMY_STATEMENT == STD_ON)
    id = id;
    info = info;
# endif
#endif /* (PDUR_TX2LO == STD_ON) */
  }

  /* ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if (errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_COMTX, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(id);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(info); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
  PduR_DcmTransmit
**********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;
  Std_ReturnType retVal = E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* Check initialization state of the component */
  if (PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_TX2LO == STD_ON)
  else if((id >= PduR_GetSizeOfTx2Lo())
#  if(PDUR_INVALIDHNDOFTX2LO == STD_ON)
  || (PduR_IsInvalidHndOfTx2Lo(id))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_TX2LO == STD_ON) */
#endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
#if (PDUR_TX2LO == STD_ON)
# if (PDUR_BSWMPDURTRANSMITCALLBACKOFTX2LO == STD_ON)
    if(PduR_IsBswMPduRTransmitCallbackOfTx2Lo(id))
    {
      BswM_PduR_Transmit(id, info);
    }
# endif /* (PDUR_BSWMPDURTRANSMITCALLBACKOFTX2LO == STD_ON) */
# if (PDUR_RPGDESTINITIDXOFTX2LO == STD_ON)
    if((!PduR_IsRpgDestInitUsedOfTx2Lo(id)) || (0 != PduR_GetDestPduRpgCnt(PduR_GetRpgDestInitIdxOfTx2Lo(id)))) /* COV_PDUR_RPG_FEATURE_CHECK */
# endif
    {
      PduR_DestHndOfTx2LoType destHnd = PduR_GetDestHndOfTx2Lo(id);
      retVal = PduR_GetTransmit(PduR_GetTransmitIdxOfTx2Lo(id))(destHnd, info); /* SBSW_PDUR_LL_CALL_TRANSMIT_LCFG */
    }
#else
# if (PDUR_USE_DUMMY_STATEMENT == STD_ON)
    id = id;
    info = info;
# endif
#endif /* (PDUR_TX2LO == STD_ON) */
  }

  /* ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if (errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_DCMTX, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(id);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(info); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  return retVal;
}


/* Communication Interface APIs */

/**********************************************************************************************************************
  PduR_CanIfRxIndication
**********************************************************************************************************************/
/*!
 *  \internal
 *  - #10 Check arguments
 *    - #20 if arguments check was successfully
 *      - #30 if BSWM Callout is active
 *        - #31 call BSWM calout function
 *      - #40 if routing path group is enabled
 *        - #41 get destination handle
 *        - #42 call the destination Rx Indication (gateway or lower layer)
 *    - #50 else arguments check fails
 *      - #51 call DET
 *  \endinternal
 **********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanIfRxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
  /* #10 Check initialization state of the component */
  if (PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_RXIF2DEST == STD_ON)
  else if((RxPduId >= PduR_GetSizeOfRxIf2Dest())
#  if(PDUR_INVALIDHNDOFRXIF2DEST == STD_ON)
  || (PduR_IsInvalidHndOfRxIf2Dest(RxPduId))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_RXIF2DEST == STD_ON) */
#endif
  else
  {
    /* #20 ----- Implementation ----------------------------------------------- */
#if (PDUR_RXIF2DEST == STD_ON)
    /* #30 BSWM Callout */
# if (PDUR_BSWMPDURRXINDICATIONCALLBACKOFRXIF2DEST == STD_ON)
    if(PduR_IsBswMPduRRxIndicationCallbackOfRxIf2Dest(RxPduId))
    {
      /* #31 */
      BswM_PduR_RxIndication(RxPduId, PduInfoPtr);
    }
# endif /* (PDUR_BSWMPDURRXINDICATIONCALLBACKOFRXIF2DEST == STD_ON) */
# if (PDUR_RPGDESTINITIDXOFRXIF2DEST == STD_ON)
    /* #40 */
    if((!PduR_IsRpgDestInitUsedOfRxIf2Dest(RxPduId)) || (0 != PduR_GetDestPduRpgCnt(PduR_GetRpgDestInitIdxOfRxIf2Dest(RxPduId)))) /* COV_PDUR_RPG_FEATURE_CHECK */
# endif
    {
      PduR_DestHndOfRxIf2DestType destHnd = PduR_GetDestHndOfRxIf2Dest(RxPduId);
      PduR_GetIfRxIndicationFctPtr(PduR_GetIfRxIndicationFctPtrIdxOfRxIf2Dest(RxPduId))(destHnd, PduInfoPtr); /* SBSW_PDUR_UL_CALL_RXINDICATION_LCFG */
    }
#endif /* (PDUR_RXIF2DEST == STD_ON) */
  }

  /* #50 ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if (errorId != PDUR_E_NO_ERROR)
  {
    /* #51 */
    PduR_Det_ReportError(PDUR_FCT_CANIFRXIND, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(RxPduId);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(PduInfoPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

}



/* Transport Protocol APIs */

/**********************************************************************************************************************
  PduR_CanTpStartOfReception
**********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpStartOfReception(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* Check initialization state of the component */
  if (PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_RXTP2DEST == STD_ON)
  else if((id >= PduR_GetSizeOfRxTp2Dest())
#  if(PDUR_INVALIDHNDOFRXTP2DEST == STD_ON)
  || (PduR_IsInvalidHndOfRxTp2Dest(id))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_RXTP2DEST == STD_ON) */
#endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
#if (PDUR_RXTP2DEST == STD_ON)
# if (PDUR_BSWMPDURTPSTARTOFRECEPTIONCALLBACKOFRXTP2DEST == STD_ON)
    if(PduR_IsBswMPduRTpStartOfReceptionCallbackOfRxTp2Dest(id))
    {
      BswM_PduR_TpStartOfReception(id, info, TpSduLength, bufferSizePtr);
    }
# endif /* (PDUR_BSWMPDURTPSTARTOFRECEPTIONCALLBACKOFRXTP2DEST == STD_ON) */
# if (PDUR_RPGDESTINITIDXOFRXTP2DEST == STD_ON)
    if((!PduR_IsRpgDestInitUsedOfRxTp2Dest(id)) || (0 != PduR_GetDestPduRpgCnt(PduR_GetRpgDestInitIdxOfRxTp2Dest(id)))) /* COV_PDUR_RPG_FEATURE_CHECK */
# endif
    {
       PduR_DestHndOfRxTp2DestType destHnd  =  PduR_GetDestHndOfRxTp2Dest(id);
       retVal = PduR_GetStartOfReception(PduR_GetStartOfReceptionIdxOfRxTp2Dest(id))(destHnd, info, TpSduLength, bufferSizePtr); /* SBSW_PDUR_UL_CALL_STARTOFRECEPTION_LCFG */
    }
#endif /* (PDUR_RXTP2DEST == STD_ON) */
  }

  /* ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if (errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_CANTPSOR, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(id);            /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);          /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(TpSduLength);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
  PduR_CanTpCopyRxData
**********************************************************************************************************************/
/*!
 *  \internal
 *  - #10 Check arguments
 *    - #20 if arguments check was successfully
 *      - #30 if routing path group is enabled
 *       - #31 get destination handle
 *       - #32 call the destination Rx Indication (gateway or lower layer)
 *    - #40 else arguments check fails
 *      - #41 call DET
 *  \endinternal
 **********************************************************************************************************************/

/* PRQA S 3673 1 */ /* MD_PdUR_3673_AsrProto */
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyRxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;

  /* #10 ----- Development Error Checks ------------------------------------- */
  /* Check initialization state of the component */
  if (PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_RXTP2DEST == STD_ON)
  else if((id >= PduR_GetSizeOfRxTp2Dest())
#  if(PDUR_INVALIDHNDOFRXTP2DEST == STD_ON)
  || (PduR_IsInvalidHndOfRxTp2Dest(id))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_RXTP2DEST == STD_ON) */
#endif
  else
  {
    /* #20 ----- Implementation ----------------------------------------------- */
#if (PDUR_RXTP2DEST == STD_ON)
# if (PDUR_RPGDESTINITIDXOFRXTP2DEST == STD_ON)
    /* #30 */
    if((!PduR_IsRpgDestInitUsedOfRxTp2Dest(id)) || (0 != PduR_GetDestPduRpgCnt(PduR_GetRpgDestInitIdxOfRxTp2Dest(id)))) /* COV_PDUR_RPG_FEATURE_CHECK */
# endif
    {
      PduR_DestHndOfRxTp2DestType destHnd = PduR_GetDestHndOfRxTp2Dest(id);
      retVal = PduR_GetCopyRxData(PduR_GetCopyRxDataIdxOfRxTp2Dest(id))(destHnd, info, bufferSizePtr); /* SBSW_PDUR_UL_CALL_COPYRXDATA_LCFG */
    }
#else
#  if (PDUR_USE_DUMMY_STATEMENT == STD_ON)
    id = id;
    info = info;
    bufferSizePtr = bufferSizePtr;
#  endif
#endif /* (PDUR_RXTP2DEST == STD_ON) */
  }

  /* #40 ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if (errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_CANTPCPYRX, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(id);            /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);          /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
  PduR_CanTpCopyTxData
**********************************************************************************************************************/
/*!
 *  \internal
 *  - #10 Check arguments
 *    - #20 if arguments check was successfully
 *      - #30 if routing path group is enabled
 *       - #31 get destination handle
 *       - #32 call the destination Rx Indication (gateway or lower layer)
 *    - #40 else arguments check fails
 *      - #41 call DET
 *  \endinternal
 **********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyTxData(PduIdType id, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;

  /* ----- Development Error Checks ------------------------------------- */
  /* Check initialization state of the component */
  if (PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_TXTP2SRC == STD_ON)
  else if((id >= PduR_GetSizeOfTxTp2Src())
#  if(PDUR_INVALIDHNDOFTXTP2SRC == STD_ON)
  || (PduR_IsInvalidHndOfTxTp2Src(id))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_RXTP2UP == STD_ON) */
#endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
#if (PDUR_TXTP2SRC == STD_ON)
# if (PDUR_RPGDESTINITIDXOFTXTP2SRC == STD_ON)
    if((!PduR_IsRpgDestInitUsedOfTxTp2Src(id)) || (0 != PduR_GetDestPduRpgCnt(PduR_GetRpgDestInitIdxOfTxTp2Src(id)))) /* COV_PDUR_RPG_FEATURE_CHECK */
# endif
    {
      retVal = PduR_GetCopyTxData(PduR_GetCopyTxDataIdxOfTxTp2Src(id))(PduR_GetDestHndOfTxTp2Src(id), info, retry, availableDataPtr); /* SBSW_PDUR_UL_CALL_COPYTXDATA_LCFG */
    }
#endif /* (PDUR_RXTP2UP == STD_ON) */
  }

  /* ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if (errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_CANTPCPYTX, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(id);               /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);             /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(retry);            /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(availableDataPtr); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */

  return retVal;
}


/**********************************************************************************************************************
  PduR_CanTpRxIndication
**********************************************************************************************************************/
/*!
 *  \internal
 *  - #10 Check arguments
 *    - #20 if arguments check was successfully
        - #21 get destination handle
 *      - #30 if BSWM Callout is active
 *        - #31 call BSWM calout function
 *      - #22 call the destination Rx Indication (gateway or lower layer)
 *    - #50 else arguments check fails
 *      - #51 call DET
 *  \endinternal
 **********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanTpRxIndication(PduIdType id, Std_ReturnType result)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;

  /* #10 ----- Development Error Checks ------------------------------------- */
  if(PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_RXTP2DEST == STD_ON)
  else if((id >= PduR_GetSizeOfRxTp2Dest())
#  if(PDUR_INVALIDHNDOFRXTP2DEST == STD_ON)
  || (PduR_IsInvalidHndOfRxTp2Dest(id))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_RXTP2DEST == STD_ON) */
#endif
  else
  {
    /*  #20 ----- Implementation ----------------------------------------------- */
#if (PDUR_RXTP2DEST == STD_ON)
    PduR_DestHndOfRxTp2DestType destHnd = PduR_GetDestHndOfRxTp2Dest(id);
# if (PDUR_BSWMPDURTPRXINDICATIONCALLBACKOFRXTP2DEST == STD_ON)
    /* #30 */
    if(PduR_IsBswMPduRTpRxIndicationCallbackOfRxTp2Dest(id))
    {
      BswM_PduR_TpRxIndication(id, result);
    }
# endif /* (PDUR_BSWMPDURTPRXINDICATIONCALLBACKOFRXTP2DEST == STD_ON) */
    PduR_GetTpRxIndication(PduR_GetTpRxIndicationIdxOfRxTp2Dest(id))(destHnd, result); /* SBSW_PDUR_UL_CALL_RXINDICATION_LCFG */
#endif
  }

  /* #50 ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if (errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_CANTPRXIND, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
}


/**********************************************************************************************************************
  PduR_CanTpTxConfirmation
**********************************************************************************************************************/
/*!
 *  \internal
 *  - #10 Check arguments
 *    - #20 if arguments check was successfully
 *      - #30 if BSWM Callout is active
 *        - #31 call BSWM calout function
 *      - #22 call the destination Rx Indication (gateway or lower layer)
 *    - #50 else arguments check fails
 *      - #51 call DET
 *  \endinternal
 **********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_CanTpTxConfirmation(PduIdType id, Std_ReturnType result)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;

  /* #10 ----- Development Error Checks ------------------------------------- */
  /* Check initialization state of the component */
  if (PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
#if (PDUR_DEV_ERROR_DETECT == STD_ON) /* COV_PDUR_VAR_DEV_ERROR_DETECT */
# if (PDUR_TXTP2SRC == STD_ON)
  else if((id >= PduR_GetSizeOfTxTp2Src())
#  if(PDUR_INVALIDHNDOFTXTP2SRC == STD_ON)
  || (PduR_IsInvalidHndOfTxTp2Src(id))
#  endif
  )
  {
    errorId = PDUR_E_PDU_ID_INVALID;
  }
# endif /* (PDUR_TXTP2SRC == STD_ON) */
#endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
#if (PDUR_TXTP2SRC == STD_ON)
# if (PDUR_BSWMPDURTPTXCONFIRMATIONCALLBACKOFTXTP2SRC == STD_ON)
    if(PduR_IsBswMPduRTpTxConfirmationCallbackOfTxTp2Src(id))
    {
      BswM_PduR_TpTxConfirmation(id, result);
    }
# endif /* (PDUR_BSWMPDURTPTXCONFIRMATIONCALLBACKOFTXTP2SRC == STD_ON) */
    PduR_GetTpTxConfirmation(PduR_GetTpTxConfirmationIdxOfTxTp2Src(id))(PduR_GetDestHndOfTxTp2Src(id), result); /* SBSW_PDUR_UL_CALL_TXCONFIRMATION_LCFG */
#endif /* (PDUR_TXTP2SRC == STD_ON) */
  }

  /* ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if (errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_CANTPTXCFM, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
#endif

  PDUR_DUMMY_STATEMENT(id);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /*lint -e{438} */
}



/* CancelReceive global without UseTag  API */


/* ChangeParameter global without UseTag  API */




/* Communication Interface / Transport Protocol APIs */


/* Communication Interface / Transport Protocol APIs */



/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/



#define PDUR_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* SBSW_JUSTIFICATION_BEGIN

   \ID SBSW_PDUR_UL_CALL_RXINDICATION_LCFG
    \DESCRIPTION    PduR_<UL>RxIndication is called with an Id and a notify code.
                    It is expected that the notify code is not used as index and therefore don't have to be checked.
    \COUNTERMEASURE \S The Id is a SNV provided by the UL (upper layer). The upper layer must ensure that the SNV is
                       valid.

  \ID SBSW_PDUR_UL_CALL_TRIGGERTRANSMIT_LCFG
    \DESCRIPTION    PduR_<UL>TriggerTransmit is called with an Id and on pointer parameters.
    \COUNTERMEASURE \S The Id is a SNV provided by the UL (upper layer). The upper layer must ensure that the SNV is
                       valid.
                    \S the PduInfo pointer is not checked against NULL_PTR.The destination must check it.

  \ID SBSW_PDUR_UL_CALL_CANCELRECEIVE_LCFG
    \DESCRIPTION    PduR_<UL>CancelReceive is called with an Id.
    \COUNTERMEASURE \S The Id is a SNV provided by the UL (upper layer). The upper layer must ensure that the SNV is
                       valid.

   \ID SBSW_PDUR_LL_CALL_TRANSMIT_LCFG
    \DESCRIPTION    PduR_<LL>Transmit is called with an Id and on pointer parameters.
    \COUNTERMEASURE \S The Id is a SNV provided by the LL (lower layer). The lower layer must ensure that the SNV is
                       valid.
                    \S the PduInfo pointer is not checked against NULL_PTR.The destination must check it.

  \ID SBSW_PDUR_LL_CALL_CANCELTRANSMIT_LCFG
    \DESCRIPTION    PduR_<LL>CancelTransmit is called with an Id.
    \COUNTERMEASURE \S The Id is a SNV provided by the LL (lower layer). The lower layer must ensure that the SNV is
                       valid.

  \ID SBSW_PDUR_LL_CALL_CHANGEPARAMETER_LCFG
    \DESCRIPTION    PduR_<LL>ChangeParameter is called with an Id and a value.
    \COUNTERMEASURE \S The Id is a SNV provided by the LL (lower layer). The lower layer must ensure that the SNV is
                       valid. It is expected that the value is not used as index and therefore don't have to be checked.

   \ID SBSW_PDUR_UL_CALL_STARTOFRECEPTION_LCFG
    \DESCRIPTION    PduR_<UL>StartOfReception is called with an Id, length parameter and two pointer parameters.
    \COUNTERMEASURE \S The Id is a SNV provided by the UL (upper layer). The upper layer must ensure that the SNV is
                       valid.
                    \S the PduInfo pointer is not checked against NULL_PTR. The destination must check it
                    \S the buffer size pointer is not checked against NULL_PTR. The destination must check it

  \ID SBSW_PDUR_UL_CALL_COPYRXDATA_LCFG
    \DESCRIPTION    PduR_<UL>CopyRxData is called with an Id and two pointer parameters.
    \COUNTERMEASURE \S The Id is a SNV provided by the UL (upper layer). The upper layer must ensure that the SNV is
                       valid.
                    \S the PduInfo pointer is not checked against NULL_PTR.The destination must check it.
                    \S the buffer size pointer is not checked against NULL_PTR. The destination must check it

 \ID SBSW_PDUR_UL_CALL_COPYTXDATA_LCFG
   \DESCRIPTION    PduR_<UL>CopyTxData is called with an Id and three pointer parameters.
   \COUNTERMEASURE \S The Id is a SNV provided by the UL (upper layer). The upper layer must ensure that the SNV is
                      valid.
                   \S retry pointer is not supported. NULL_PTR is a valid value as specified by AUTOSAR.
                   \S the PduInfo pointer is not checked against NULL_PTR. The destination must check it.
                   \S the buffer size pointer is not checked against NULL_PTR. The destination must check it.
                   \S The available data pointer is not checked against NULL_PTR. The destination must check it.

   \ID SBSW_PDUR_UL_CALL_TXCONFIRMATION_LCFG
    \DESCRIPTION    PduR_<UL>TxConfirmation is called with an Id and a notify code.
                    It is expected that the notify code is not used as index and therefore don't have to be checked.
    \COUNTERMEASURE \S The Id is a SNV provided by the UL (upper layer). The upper layer must ensure that the SNV is
                       valid.

 SBSW_JUSTIFICATION_END  */



/**********************************************************************************************************************
  END OF FILE: PduR_Lcfg.c
**********************************************************************************************************************/

