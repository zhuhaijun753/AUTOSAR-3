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
 *            Module: VTTFls
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Fls_Cfg.h
 *   Generation Time: 2016-03-17 09:06:54
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined FLS_CFG_H
#define FLS_CFG_H

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/
#define FLS_CFG_MAJOR_VERSION    (4u) 
#define FLS_CFG_MINOR_VERSION    (00u) 
#define FLS_CFG_PATCH_VERSION    (00u) 


/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
#include "MemIf_Types.h"


/**********************************************************************************************************************
 *  TYPE DEFINITIONS
 **********************************************************************************************************************/
/* Type for notification function pointer */
typedef P2FUNC(void, FLS_APPL_CODE, Fls_NotifyType) (void);

typedef struct
{
  uint16              ModuleID;                         /* Fls Module Id                                              */
  MemIf_AddressType   BaseAddress;                      /* Fls Base Address                                           */
  MemIf_LengthType    Size;                             /* used size of Fls in bytes                                  */
  MemIf_LengthType    NormalReadBlockSize;              /* No of bytes to read in each job proc. cycle in normal mode */
  MemIf_LengthType    FastReadBlockSize;                /* No of bytes to read in each job proc. cycle in fast mode   */
  MemIf_LengthType    NormalWriteBlockSize;             /* No of bytes to read in each job proc. cycle in normal mode */
  MemIf_LengthType    FastWriteBlockSize;               /* No of bytes to read in each job proc. cycle in fast mode   */
  MemIf_ModeType      DefaultMode;                      /* Fls Default Mode after initialization                      */
  Fls_NotifyType      JobEndNotif;                      /* Notification Function for positive job result              */
  Fls_NotifyType      JobErrorNotif;                    /* Notification Function for negative job result              */
} Fls_ConfigType;


typedef P2CONST(uint8, AUTOMATIC, FLS_APPL_CONST) Fls_ConstBytePtrType;

typedef P2VAR(uint8,   AUTOMATIC, FLS_APPL_DATA ) Fls_VarBytePtrType;


/**********************************************************************************************************************
 *  Start - Configuration class PreCompile (public part of configuration)
 **********************************************************************************************************************/
/* Compiler switches for API enabling */
/* static config parameters */
#define FLS_GET_JOB_RESULT_API      (STD_ON)
#define FLS_GET_STATUS_API          (STD_ON)
#define FLS_CANCEL_API              (STD_ON)
#define FLS_COMPARE_API             (STD_ON)
#define FLS_VERSION_INFO_API        (STD_ON)
#define FLS_SET_MODE_API            (STD_ON)
#define FLS_READSYNC_API            (STD_ON)
#define FLS_COPY_API                (STD_ON)

#define FLS_ERASE_UNIT_SIZE         (0x10U)    /* No of bytes that can be erased in one cycle */
#define FLS_ERASE_VALUE             (0xFFU)

#define FLS_DEV_ERROR_DETECT        (STD_ON)

/* Eep development error handler */
#if (STD_ON == FLS_DEV_ERROR_DETECT)
  #include "Det.h"
  #define Fls_Errorhook(Fls_FunctionId, Fls_ErrorCode) \
    ( (void) Det_ReportError ((FLS_MODULE_ID),(FLS_INSTANCE_ID),(Fls_FunctionId), (Fls_ErrorCode)) )
#else
  #define Fls_Errorhook(Fls_FunctionId, Fls_ErrorCode)
#endif /* (STD_ON == FLS_DEV_ERROR_DETECT) */

#define Fls_Init(x) Fls_Init_Vtt(&FlsConfigSet)


#if !defined FLS_LCFG_SOURCE
  /* Extern declarations of configuration instances */
  extern CONST(Fls_ConfigType, FLS_APPL_CONST) FlsConfigSet; 

#endif


/**********************************************************************************************************************
 * Notification prototypes
 **********************************************************************************************************************/



#endif /* !defined FLS_CFG_H */


/**********************************************************************************************************************
 *  END OF FILE: Fls_Cfg.h
 **********************************************************************************************************************/
