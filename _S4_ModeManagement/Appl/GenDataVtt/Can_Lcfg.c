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
 *            Module: Can
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Can_Lcfg.c
 *   Generation Time: 2016-03-17 09:06:55
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/


#define CAN_LCFG_SOURCE

/* PRQA S 0857 EOF */ /* MD_Can_0857 */

/* -----------------------------------------------------------------------------
    Includes
 ----------------------------------------------------------------------------- */

#include "Can_Cfg.h"

/* -----------------------------------------------------------------------------
    Hw specific
 ----------------------------------------------------------------------------- */
/* HW specific CT global C file */

/* !HW specific CT global C file */


/**********************************************************************************************************************
  ComStackLib
**********************************************************************************************************************/
/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Can_BusName
**********************************************************************************************************************/
/** 
  \var    Can_BusName
  \brief  controller to hardware mapping
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_BusNameType, CAN_CONST) Can_BusName[1] = {
  /* Index    BusName                                           Comment */
  /*     0 */{67,65,78,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}    /* [CT_CAN00_e98c47e6 - CAN] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanIfChannelId
**********************************************************************************************************************/
/** 
  \var    Can_CanIfChannelId
  \brief  indirection table Can to CanIf controller ID
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_CanIfChannelIdType, CAN_CONST) Can_CanIfChannelId[1] = {
  /* Index    CanIfChannelId      Comment */
  /*     0 */             0U   /* [CT_CAN00_e98c47e6] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ControllerConfig
**********************************************************************************************************************/
/** 
  \var    Can_ControllerConfig
  \brief  Global configuration for all controllers
  \details
  Element                         Description
  CanControllerDefaultBaudrate
  RxBasicHandleMax            
  RxBasicHandleStart          
  RxBasicHandleStop           
  RxBasicHwStart              
  RxBasicHwStop               
  RxFullHandleMax             
  RxFullHandleStart           
  RxFullHandleStop            
  RxFullHwStart               
  RxFullHwStop                
  TxBasicHandleMax            
  TxBasicHandleStart          
  TxBasicHandleStop           
  TxBasicHwStart              
  TxBasicHwStop               
  TxFullHandleMax             
  TxFullHandleStart           
  TxFullHandleStop            
  TxFullHwStart               
  TxFullHwStop                
  UnusedHandleMax             
  UnusedHandleStart           
  UnusedHandleStop            
  UnusedHwStart               
  UnusedHwStop                
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_ControllerConfigType, CAN_CONST) Can_ControllerConfig[1] = {
    /* Index    CanControllerDefaultBaudrate  RxBasicHandleMax  RxBasicHandleStart  RxBasicHandleStop  RxBasicHwStart  RxBasicHwStop  RxFullHandleMax  RxFullHandleStart  RxFullHandleStop  RxFullHwStart  RxFullHwStop  TxBasicHandleMax  TxBasicHandleStart  TxBasicHandleStop  TxBasicHwStart  TxBasicHwStop  TxFullHandleMax  TxFullHandleStart  TxFullHandleStop  TxFullHwStart  TxFullHwStop  UnusedHandleMax  UnusedHandleStart  UnusedHandleStop  UnusedHwStart  UnusedHwStop        Comment */
  { /*     0 */                         500U,               1U,                 1U,                2U,             1U,            2U,              0U,                1U,               1U,            1U,           1U,               1U,                 0U,                1U,             0U,            1U,              0U,                0U,               0U,            0U,           0U,              1U,                2U,               3U,            2U,         250U }   /* [CT_CAN00_e98c47e6] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_Filter
**********************************************************************************************************************/
/** 
  \var    Can_Filter
  \brief  filter configuration
  \details
  Element      Description
  Code     
  Mask     
  BCanHwIdx
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_FilterType, CAN_CONST) Can_Filter[1] = {
    /* Index    Code          Mask          BCanHwIdx        Comment */
  { /*     0 */ 0x00000000UL, 0x800001C0UL,        1U }   /* [CT_CAN00_e98c47e6 - CN_CAN00_e98c47e6_Rx_Std - CanFilterMask] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_FilterStartIdx
**********************************************************************************************************************/
/** 
  \var    Can_FilterStartIdx
  \brief  Start index for filters (Controller - BasicCAN - indexed)
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_FilterStartIdxType, CAN_CONST) Can_FilterStartIdx[2] = {
  /* Index    FilterStartIdx      Comment */
  /*     0 */             0U,  /* [CT_CAN00_e98c47e6] */
  /*     1 */             1U   /* [Stop Index] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObject
**********************************************************************************************************************/
/** 
  \var    Can_InitObject
  \brief  baudrate settings
  \details
  Element        Description
  arbBaudrate
  dbrBaudrate
  arbSam     
  arbSjw     
  arbTseg1   
  arbTseg2   
  dbrSam     
  dbrSjw     
  dbrTseg1   
  dbrTseg2   
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_InitObjectType, CAN_CONST) Can_InitObject[1] = {
    /* Index    arbBaudrate  dbrBaudrate  arbSam  arbSjw  arbTseg1  arbTseg2  dbrSam  dbrSjw  dbrTseg1  dbrTseg2        Comment */
  { /*     0 */    500000UL,         0UL,     0U,     2U,      12U,       3U,     0U,     0U,       0U,       0U }   /* [CT_CAN00_e98c47e6 - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectBaudrate
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectBaudrate
  \brief  baudrates ('InitStruct' as index)
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_InitObjectBaudrateType, CAN_CONST) Can_InitObjectBaudrate[1] = {
  /* Index    InitObjectBaudrate      Comment */
  /*     0 */               500U   /* [CT_CAN00_e98c47e6 - CanControllerBaudrateConfig] */
};
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectStartIndex
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectStartIndex
  \brief  Start index of 'InitStruct'  / baudratesets (controllers as index)
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_InitObjectStartIndexType, CAN_CONST) Can_InitObjectStartIndex[2] = {
  /* Index    InitObjectStartIndex      Comment */
  /*     0 */                   0U,  /* [CT_CAN00_e98c47e6] */
  /*     1 */                   1U   /* [stop index] */
};
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_Mailbox
**********************************************************************************************************************/
/** 
  \var    Can_Mailbox
  \brief  mailbox configuration (over all controllers)
  \details
  Element          Description
  DLC_FIFO     
  HwHandle     
  IDValue      
  MailboxType  
  MaxDataLen   
  MsgController
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_MailboxType, CAN_CONST) Can_Mailbox[3] = {
    /* Index    DLC_FIFO  HwHandle  IDValue  MailboxType                                MaxDataLen  MsgController        Comment */
  { /*     0 */       1U,       0U, 0x0000U, CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CN_CAN00_e98c47e6_Tx_Std] */
  { /*     1 */       1U,       1U, 0x0000U, CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX,         8U,            0U },  /* [CN_CAN00_e98c47e6_Rx_Std] */
  { /*     2 */     248U,       2U, 0x0000U,  CAN_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX,         0U,            0U }   /* [] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TxOffsetHwToLog
**********************************************************************************************************************/
/** 
  \var    Can_TxOffsetHwToLog
  \brief  tx hardware to logical handle indirection table
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Can_TxOffsetHwToLogType, CAN_CONST) Can_TxOffsetHwToLog[1] = {
  /* Index    TxOffsetHwToLog      Comment */
  /*     0 */               0   /* [CT_CAN00_e98c47e6] */
};
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_WakeupSourceRef
**********************************************************************************************************************/
/** 
  \var    Can_WakeupSourceRef
  \brief  wakeup Source for channel
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(EcuM_WakeupSourceType, CAN_CONST) Can_WakeupSourceRef[1] = {
  /* Index    WakeupSourceRef      Comment */
  /*     0 */            32UL   /* [CT_CAN00_e98c47e6] */
};
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ActiveSendPdu
**********************************************************************************************************************/
/** 
  \var    Can_ActiveSendPdu
  \brief  temporary pduId buffer for send mailbox
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Can_ActiveSendPduType, CAN_VAR_NOINIT) Can_ActiveSendPdu[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ActiveSendState
**********************************************************************************************************************/
/** 
  \var    Can_ActiveSendState
  \brief  temporary send state buffer for send mailbox
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Can_ActiveSendStateType, CAN_VAR_NOINIT) Can_ActiveSendState[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanInterruptCounter
**********************************************************************************************************************/
/** 
  \var    Can_CanInterruptCounter
  \brief  CAN interrupt disable counter for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Can_CanInterruptCounterType, CAN_VAR_NOINIT) Can_CanInterruptCounter[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanInterruptOldStatus
**********************************************************************************************************************/
/** 
  \var    Can_CanInterruptOldStatus
  \brief  last CAN interrupt status for restore interrupt for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(tCanLLCanIntOld, CAN_VAR_NOINIT) Can_CanInterruptOldStatus[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_IsBusOff
**********************************************************************************************************************/
/** 
  \var    Can_IsBusOff
  \brief  CAN state for each controller: busoff occur
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Can_IsBusOffType, CAN_VAR_NOINIT) Can_IsBusOff[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_IsWakeup
**********************************************************************************************************************/
/** 
  \var    Can_IsWakeup
  \brief  CAN state for each controller: wakeup occur
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Can_IsWakeupType, CAN_VAR_NOINIT) Can_IsWakeup[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_LastInitObject
**********************************************************************************************************************/
/** 
  \var    Can_LastInitObject
  \brief  last set baudrate for reinit
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Can_LastInitObjectType, CAN_VAR_NOINIT) Can_LastInitObject[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_LogStatus
**********************************************************************************************************************/
/** 
  \var    Can_LogStatus
  \brief  CAN state for each controller: UNINIT=0x00, START=0x01, STOP=0x02, INIT=0x04, INCONSISTENT=0x08, WARNING =0x10, PASSIVE=0x20, BUSOFF=0x40, SLEEP=0x80
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Can_LogStatusType, CAN_VAR_NOINIT) Can_LogStatus[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_RxMsg
**********************************************************************************************************************/
/** 
  \var    Can_RxMsg
  \brief  received data buffer
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Can_MsgDataStructType, CAN_VAR_NOINIT) Can_RxMsg[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_StatusReq
**********************************************************************************************************************/
/** 
  \var    Can_StatusReq
  \brief  CAN state request for each controller: START=0x01, STOP=0x02, WAKEUP=0x08, SLEEP=0x80
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Can_StatusReqType, CAN_VAR_NOINIT) Can_StatusReq[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_gCanController
**********************************************************************************************************************/
/** 
  \var    Can_gCanController
  \brief  emulated hardware layout and status
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Can_ControllerType, CAN_VAR_NOINIT) Can_gCanController[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/




