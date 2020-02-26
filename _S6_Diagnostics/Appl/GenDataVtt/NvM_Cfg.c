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
 *            Module: NvM
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: NvM_Cfg.c
 *   Generation Time: 2016-03-29 16:11:22
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/


    
/**********************************************************************************************************************
 *  MODULE SWITCH
 *********************************************************************************************************************/
/* this switch enables the header file(s) to hide some parts. */
#define NVM_CONFIGURATION

/* multiple inclusion protection */
#define NVM_H_

/* PRQA S 5087 inclusions *//* MD_MSR_19.1 */

/* Define RTE_MICROSAR_PIM_EXPORT is necessary only when serviceports are used */
#define RTE_MICROSAR_PIM_EXPORT  


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/* This tag will only be replaced, if one or more callbacks via Service Ports had been configured */
#include "Rte_NvM.h"

/**********************************************************************************************************************
 *  MODULE HEADER INCLUDES
 *********************************************************************************************************************/
/* only includes the public part of config */
#include "NvM_Cfg.h"
#include "NvM_PrivateCfg.h"

#include "NvM_Crc.h"

#include "BswM_NvM.h"

/**********************************************************************************************************************
 *  VERSION CHECKS
 *********************************************************************************************************************/
#if ((NVM_CFG_MAJOR_VERSION != (5u)) \
        || (NVM_CFG_MINOR_VERSION != (3u)))
# error "Version numbers of NvM_Cfg.c and NvM_Cfg.h are inconsistent!"
#endif

#if ((NVM_PRIV_CFG_MAJOR_VERSION != NVM_CFG_MAJOR_VERSION) \
        || (NVM_PRIV_CFG_MINOR_VERSION != NVM_CFG_MINOR_VERSION))
# error "Version numbers of NvM_Cfg.c and Nvm_PrivateCfg.h.h are inconsistent!"
#endif

#if ((NVM_TYPES_MAJOR_VERSION != NVM_CFG_MAJOR_VERSION) \
        || (NVM_TYPES_MINOR_VERSION != NVM_CFG_MINOR_VERSION))
# error "Version numbers of NvM_Cfg.c and NvM_Types.h are inconsistent!"
#endif

#include "Crc.h" /* always needed, since the config Block has a CRC */

/* include list of the callback definitions */
#include "main.h" 
#include "Dem.h" 
#include "Dem_Cbk.h" 


/* include configured file declaring or defining resource (un)locking service(s) */
#include "SchM_NvM.h"

#define NVM_SIZE_STANDARD_JOB_QUEUE  (2U) 
#define NVM_SIZE_IMMEDIATE_JOB_QUEUE (0U) 


/* the size of the CRC job queue in 32bitWords. It is a bit-string, one bit for each block */
#define NVM_SIZE_CRC_JOB_QUEUE ((NVM_TOTAL_NUM_OF_NVRAM_BLOCKS + NVM_CRC_QUEUE_BITINDEX_MASK) >> \
                                                                            NVM_CRC_QUEUE_ENTRY_SHIFT)

#define NVM_USE_CRC16 STD_ON 
#define NVM_USE_CRC32 STD_OFF 


/* initial crc value */
#define NVM_INITIAL_CRC_16_VALUE    0xFFFFFFFFuL
#define NVM_INITIAL_CRC_32_VALUE    (0xFFFFFFFFuL ^ NVM_CRC32_XOR_VALUE)

#define NVM_CRC32_XOR_VALUE     0xFFFFFFFFuL

#define NVM_START_SEC_CODE
#include "MemMap.h"

#if (NVM_USE_CRC16 == STD_ON)
/**********************************************************************************************************************
 * NvM_Crc_Crc16_Calculate
 *********************************************************************************************************************/
/*! \brief Calculates Crc 16.
 *  \details Invokes the Crc16 calculation function exactly once.
 *  \param[in] data_pt
 *  \param[in] length
 *  \param[in,out] currCrc
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \config at least one block with Crc 16
 *  \pre -
 */
static FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_Crc16_Calculate (NvM_ConstRamAddressType, uint16, NvM_CrcValuePtrType);

/**********************************************************************************************************************
 * NvM_Crc_Crc16_Compare
 *********************************************************************************************************************/
/*! \brief Compares given (two) Crc16 values.
 *  \details The given Crc values have to be Crc16 - first two bytes will be compared.
 *  \param[in] crc1
 *  \param[in] crc2
 *  \return given Crc values fits: TRUE, otherwise: FALSE
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \config at least one block with Crc 16
 *  \pre -
 */
static FUNC(boolean, NVM_PRIVATE_CODE) NvM_Crc_Crc16_Compare (NvM_CrcBufferConstPtrType, NvM_CrcValueRefType);

/**********************************************************************************************************************
 * NvM_Crc_Crc16_CopyToBuffer
 *********************************************************************************************************************/
/*! \brief Copies source Crc16 buffer to the destination Crc16 buffer.
 *  \details The given Crc buffer have to be for Crc16 - that means at least two byte long. The API will copy only
 *           the first two bytes from source to destination
 *  \param[in] dest
 *  \param[in] src
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \config at least one block with Crc 16
 *  \pre -
 */
static FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_Crc16_CopyToBuffer (NvM_CrcBufferPtrType, NvM_CrcValueRefType);
#endif

#if (NVM_USE_CRC32 == STD_ON)
/**********************************************************************************************************************
 * NvM_Crc_Crc32_Calculate
 *********************************************************************************************************************/
/*! \brief Calculates Crc 32.
 *  \details Invokes the Crc32 calculation function exactly once.
 *  \param[in] data_pt
 *  \param[in] length
 *  \param[in,out] currCrc
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \config at least one block with Crc 32
 *  \pre -
 */
static FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_Crc32_Calculate(NvM_ConstRamAddressType, uint16, NvM_CrcValuePtrType);

/**********************************************************************************************************************
 * NvM_Crc_Crc32_Compare
 *********************************************************************************************************************/
/*! \brief Compares given (two) Crc16 values.
 *  \details The given Crc values have to be Crc32 - first four bytes will be compared.
 *  \param[in] crc1
 *  \param[in] crc2
 *  \return given Crc values fits: TRUE, otherwise: FALSE
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \config at least one block with Crc 32
 *  \pre -
 */
static FUNC(boolean, NVM_PRIVATE_CODE) NvM_Crc_Crc32_Compare (NvM_CrcBufferConstPtrType, NvM_CrcValueRefType);

/**********************************************************************************************************************
 * NvM_Crc_Crc32_CopyToBuffer
 *********************************************************************************************************************/
/*! \brief Copies source Crc32 buffer to the destination Crc32 buffer.
 *  \details The given Crc buffer have to be for Crc32 - that means at least four byte long. The API will copy only
 *           the first four bytes from source to destination
 *  \param[in] dest
 *  \param[in] src
 *  \context TASK
 *  \reentrant FALSE
 *  \synchronous TRUE
 *  \config at least one block with Crc 32
 *  \pre -
 */
static FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_Crc32_CopyToBuffer (NvM_CrcBufferPtrType, NvM_CrcValueRefType);
#endif

#define NVM_STOP_SEC_CODE
#include "MemMap.h"

/**********************************************************************************************************************
 *  PUBLIC CONSTANTS
 *********************************************************************************************************************/

#define NVM_START_SEC_CONST_8
#include "MemMap.h"

/* Number of write attempts: 1 + number of retries */
CONST(uint8, NVM_PRIVATE_CONST) NvM_NoOfWrAttempts_u8 = 1U;

#define NVM_STOP_SEC_CONST_8
#include "MemMap.h"

#define NVM_START_SEC_CONST_16
#include "MemMap.h"

/* maximum number of bytes to be processed in one crc calculation step */
CONST(uint16, NVM_CONFIG_CONST) NvM_NoOfCrcBytes_u16 = 64U;

/* constant holding Crc quueue size value */
CONST(uint16, NVM_PRIVATE_CONST) NvM_CrcQueueSize_u16 = NVM_TOTAL_NUM_OF_NVRAM_BLOCKS;

#define NVM_STOP_SEC_CONST_16
#include "MemMap.h"

/* close section, to ensure unique section ends */
#define NVM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

/* constants holding the compiled queue size values */
CONST(NvM_QueueSizesType, NVM_PRIVATE_CONST) NvM_QueueSizes_t =
{
    /* MISRA wants to define a operator precedence with parentheses */
    (NVM_SIZE_STANDARD_JOB_QUEUE + NVM_SIZE_IMMEDIATE_JOB_QUEUE) - 1u,
    NVM_SIZE_STANDARD_JOB_QUEUE
};

#if (NVM_USE_CRC16 == STD_ON)
static CONST(struct NvM_CrcHandlerClass, NVM_PRIVATE_CONST) NvM_Crc_Crc16Handler_t =
{
    NvM_Crc_Crc16_Calculate,
    NvM_Crc_Crc16_Compare,
    NvM_Crc_Crc16_CopyToBuffer,
    NVM_INITIAL_CRC_16_VALUE, /* initial value */
    2  /* crc length */
};
#else
# define NvM_Crc_Crc16Handler_t NvM_Crc_NoCrcHandler_t
#endif

#if (NVM_USE_CRC32 == STD_ON)
static CONST(struct NvM_CrcHandlerClass, NVM_PRIVATE_CONST) NvM_Crc_Crc32Handler_t =
{
    NvM_Crc_Crc32_Calculate,
    NvM_Crc_Crc32_Compare,
    NvM_Crc_Crc32_CopyToBuffer,
    NVM_INITIAL_CRC_32_VALUE, /* initial value */
    4  /* crc length */
};
#else
# define NvM_Crc_Crc32Handler_t NvM_Crc_NoCrcHandler_t
#endif

CONST(NvM_CrcHandlerClassConstPtr, NVM_PRIVATE_CONST) NvM_CrcHandlerTable_at[4] =
{
    &NvM_Crc_NoCrcHandler_t,
    &NvM_Crc_NoCrcHandler_t, /* reserved for CRC8 */
    &NvM_Crc_Crc16Handler_t,
    &NvM_Crc_Crc32Handler_t
};

/* Constants, holding the two DEM error codes, defined by DEM */

CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrReqFailed = DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_REQ_FAILED; 
CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrIntegrityFailed = DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_INTEGRITY_FAILED; 
CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrLossOfRedundancy = DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_LOSS_OF_REDUNDANCY; 
CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrQueueOverflow = DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_QUEUE_OVERFLOW; 
CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrWriteProtected = DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_WRITE_PROTECTED; 


/* close section, to ensure unique section ends */
#define NVM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

/* 8Bit Data section containing the CRC buffers, as well as the internal buffer */
#define NVM_START_SEC_VAR_NOINIT_8
#include "MemMap.h"

static VAR(uint8, NVM_PRIVATE_DATA) NvMConfigBlock_RamBlock_au8[4U];

#if ((NVM_CRC_INT_BUFFER == STD_ON) || (NVM_REPAIR_REDUNDANT_BLOCKS_API == STD_ON))
static VAR(uint8, NVM_PRIVATE_DATA) CpApMySwcSnNvMPimLightOnOffCounter_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemAdminDataBlock_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemStatusDataBlock_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock0_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock1_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock2_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock3_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock4_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock5_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock6_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock7_Crc_au8[2UL]; 
static VAR(uint8, NVM_PRIVATE_DATA) CpApMySwcSnNvM_PimOdometer_Crc_au8[2UL]; 


/* create the internal buffer of size NVM_INTERNAL_BUFFER_SIZE */
VAR(uint8, NVM_PRIVATE_DATA) NvM_InternalBuffer_au8[24UL];
#endif

/* create a test buffer of size 1 byte for testing readability of a block */
VAR(uint8, NVM_PRIVATE_DATA) NvM_TestBuffer_u8;

#define NVM_STOP_SEC_VAR_NOINIT_8
#include "MemMap.h"

#define NVM_START_SEC_CONST_DESCRIPTOR_TABLE
#include "MemMap.h"

CONST(NvM_BlockIdType, NVM_PUBLIC_CONST) NvM_NoOfBlockIds_t = NVM_TOTAL_NUM_OF_NVRAM_BLOCKS;

/* PRQA S 0759 1 */ /* MD_MSR_18.4 */
CONST(NvM_CompiledConfigIdType, NVM_PUBLIC_CONST) NvM_CompiledConfigId_t = {(uint16)NVM_COMPILED_CONFIG_ID};
 
/* block descriptor table that holds the static configuration parameters of the RAM, ROM and NVBlocks.
* This table has to be adjusted according to the configuration of the NVManager.
*/
     
/* PRQA S 0310 RamRomBlocks *//* MD_NvM_11.4 */
CONST(NvM_BlockDescriptorType, NVM_CONFIG_CONST) NvM_BlockDescriptorTable_at[NVM_TOTAL_NUM_OF_NVRAM_BLOCKS] =
    {
      { /*  MultiBlockRequest  */ 
        NULL_PTR /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x0001U /*  NV block Base number (defined by FEE/EA)  */ , 
        0 /*  Length of the block in bytes  */ , 
        0U /*  Number of multiple blocks  */ , 
        255U /*  Block Priority  */ , 
        0u /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_USE_CRC_OFF /*  CRC Type  */ , 
        0u /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  NvMConfigBlock  */ 
        (NvM_RamAddressType)NvMConfigBlock_RamBlock_au8 /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  pointer to the CRC data buffer  */ , 
        0x00D0U /*  NV block Base number (defined by FEE/EA)  */ , 
        2U /*  Length of the block in bytes  */ , 
        2U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_REDUNDANT /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_OFF |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  CpApMySwcSnNvMPimLightOnOffCounter  */ 
        (NvM_RamAddressType)&Rte_CpApMySwc_PimLightOnOffCounter /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        CpApMySwcSnNvMPimLightOnOffCounter_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00B0U /*  NV block Base number (defined by FEE/EA)  */ , 
        (uint16)sizeof(Rte_CpApMySwc_PimLightOnOffCounter) /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_OFF |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemAdminDataBlock  */ 
        (NvM_RamAddressType)&Dem_Cfg_AdminData /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        Dem_NvM_InitAdminData /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        DemAdminDataBlock_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0010U /*  NV block Base number (defined by FEE/EA)  */ , 
        10U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemStatusDataBlock  */ 
        (NvM_RamAddressType)&Dem_Cfg_StatusData /*  pointer to the RAM data buffer  */ , 
        NULL_PTR /*  pointer to the ROM buffer  */ , 
        Dem_NvM_InitStatusData /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        DemStatusDataBlock_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00A0U /*  NV block Base number (defined by FEE/EA)  */ , 
        22U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock0  */ 
        (NvM_RamAddressType)&Dem_PrimaryEntry_0 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        DemPrimaryDataBlock0_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0020U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock1  */ 
        (NvM_RamAddressType)&Dem_PrimaryEntry_1 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        DemPrimaryDataBlock1_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0030U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock2  */ 
        (NvM_RamAddressType)&Dem_PrimaryEntry_2 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        DemPrimaryDataBlock2_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0040U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock3  */ 
        (NvM_RamAddressType)&Dem_PrimaryEntry_3 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        DemPrimaryDataBlock3_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0050U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock4  */ 
        (NvM_RamAddressType)&Dem_PrimaryEntry_4 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        DemPrimaryDataBlock4_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0060U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock5  */ 
        (NvM_RamAddressType)&Dem_PrimaryEntry_5 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        DemPrimaryDataBlock5_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0070U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock6  */ 
        (NvM_RamAddressType)&Dem_PrimaryEntry_6 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        DemPrimaryDataBlock6_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0080U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  DemPrimaryDataBlock7  */ 
        (NvM_RamAddressType)&Dem_PrimaryEntry_7 /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Dem_MemoryEntryInit /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        NULL_PTR /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        DemPrimaryDataBlock7_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x0090U /*  NV block Base number (defined by FEE/EA)  */ , 
        20U /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_ON |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }, 
      { /*  CpApMySwcSnNvM_PimOdometer  */ 
        (NvM_RamAddressType)&Rte_CpApMySwc_PimOdometer /*  pointer to the RAM data buffer  */ , 
        (NvM_RomAddressType)&Rte_CtApMySwc_CalOdometer /*  pointer to the ROM buffer  */ , 
        NULL_PTR /*  pointer to the Init Callback function  */ , 
        Rte_Call_NvM_RpNotifyJobEnd_CpApMySwcSnNvM_PimOdometer_JobFinished /*  pointer to the job End Callback function  */ , 
        NULL_PTR /*  pointer to the ReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  pointer to the WriteRamBlockToNvCallback  */ , 
        CpApMySwcSnNvM_PimOdometer_Crc_au8 /*  pointer to the CRC data buffer  */ , 
        0x00C0U /*  NV block Base number (defined by FEE/EA)  */ , 
        (uint16)sizeof(Rte_CpApMySwc_PimOdometer) /*  Length of the block in bytes  */ , 
        1U /*  Number of multiple blocks  */ , 
        127U /*  Block Priority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  Management Type  */ , 
        NVM_BLOCK_CRC_16_ON /*  CRC Type  */ , 
        (
NVM_CALC_RAM_BLOCK_CRC_OFF |
NVM_BLOCK_WRITE_PROT_OFF |
NVM_BLOCK_WRITE_BLOCK_ONCE_OFF |
NVM_RESISTANT_TO_CHANGED_SW_OFF |
NVM_SELECT_BLOCK_FOR_READALL_ON |
NVM_SELECT_BLOCK_FOR_WRITEALL_ON
) /*  Flags  */ , 
        STD_OFF /*  BswM Block Status Information enabled  */ 
      }
    };

/* PRQA L:RamRomBlocks */

/* Permanent RAM and ROM block length checks - compile time (only available for blocks with enabled length check */

/* How does it work:
 * data length = sizeof(ramBlock - CrcLength 
 *     - CRC internal buffer enabled: CRC length == 0, RAM blocks store only data, CRC is handles internally
 *     - CRC internal buffer disabled: CRC length is the number of CRC bytes, for blocks without CRC the length == 0
 *     - for ROM blocks the CRC does not matter
 * Data length has to be > or < or == to configured NvM block length, depending on configuration (see above). 
 * In case the lengths do not match a bitfield with length -1 will be created and shall cause a compiler error.
 * The compiler error shall mark the line with invalid bitfield (bitfield length == -1) - the line includes all required information:
 * 	   - Block_ + NvM block name
 *     - length error description
 *     - RAM block name, CRC length and configured NvM block length
 */

typedef unsigned int NvM_LengthCheck;
 
/* Block Length Check and Automatic Block Length enabled: error if sizeof RAM block is greater than the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRamBlockGreaterThanConfiguredLength(ramBlock, crcLength, blockLength) (((sizeof(ramBlock) - (crcLength)) > (blockLength)) ? -1 : 1)
/* Block Length Check and Strict Length Check enabled: error if the sizeof RAM block does not match the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRamBlockDoesNotMatchConfiguredLength(ramBlock, crcLength, blockLength) (((sizeof(ramBlock) - (crcLength)) != (blockLength)) ? -1 : 1)
/* Block Length Check enabled and Strict Length Check disabled: error if the sizeof RAM block is less than the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRamBlockLessThanConfiguredLength(ramBlock, crcLength, blockLength) (((sizeof(ramBlock) - (crcLength)) < (blockLength)) ? -1 : 1)

/* RAM block length checks */
struct PermanentRamBlockLengthChecks {
  NvM_LengthCheck Block_CpApMySwcSnNvMPimLightOnOffCounter : SizeOfRamBlockGreaterThanConfiguredLength(Rte_CpApMySwc_PimLightOnOffCounter, 0, 4U);
  NvM_LengthCheck Block_DemAdminDataBlock : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_AdminData, 0, 10U);
  NvM_LengthCheck Block_DemStatusDataBlock : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_Cfg_StatusData, 0, 22U);
  NvM_LengthCheck Block_DemPrimaryDataBlock0 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_PrimaryEntry_0, 0, 20U);
  NvM_LengthCheck Block_DemPrimaryDataBlock1 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_PrimaryEntry_1, 0, 20U);
  NvM_LengthCheck Block_DemPrimaryDataBlock2 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_PrimaryEntry_2, 0, 20U);
  NvM_LengthCheck Block_DemPrimaryDataBlock3 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_PrimaryEntry_3, 0, 20U);
  NvM_LengthCheck Block_DemPrimaryDataBlock4 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_PrimaryEntry_4, 0, 20U);
  NvM_LengthCheck Block_DemPrimaryDataBlock5 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_PrimaryEntry_5, 0, 20U);
  NvM_LengthCheck Block_DemPrimaryDataBlock6 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_PrimaryEntry_6, 0, 20U);
  NvM_LengthCheck Block_DemPrimaryDataBlock7 : SizeOfRamBlockDoesNotMatchConfiguredLength(Dem_PrimaryEntry_7, 0, 20U);
  NvM_LengthCheck Block_CpApMySwcSnNvM_PimOdometer : SizeOfRamBlockGreaterThanConfiguredLength(Rte_CpApMySwc_PimOdometer, 0, 4U);
};

/* Block Length Check and Automatic Block Length enabled: error if sizeof ROM block is less than sizeof RAM block */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRomBlockLessThanSizeOfRamBlock(romBlock, ramBlock) ((sizeof(romBlock) < sizeof(ramBlock)) ? -1 : 1)
/* Block Length Check and Strict Length Check enabled: error if the sizeof ROM block does not match the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRomBlockDoesNotMatchConfiguredLength(romBlock, blockLength) ((sizeof(romBlock) != (blockLength)) ? -1 : 1)
/* Block Length Check enabled, Strict Length disabled: error if the sizeof ROM block is less than the configured block length */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define SizeOfRomBlockLessThanConfiguredLength(romBlock, blockLength) ((sizeof(romBlock) < (blockLength)) ? -1 : 1)

/* ROM block length checks */
struct PermRomBlockLengthCheck {
  NvM_LengthCheck Block_DemPrimaryDataBlock0 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_MemoryEntryInit, 20U);
  NvM_LengthCheck Block_DemPrimaryDataBlock1 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_MemoryEntryInit, 20U);
  NvM_LengthCheck Block_DemPrimaryDataBlock2 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_MemoryEntryInit, 20U);
  NvM_LengthCheck Block_DemPrimaryDataBlock3 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_MemoryEntryInit, 20U);
  NvM_LengthCheck Block_DemPrimaryDataBlock4 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_MemoryEntryInit, 20U);
  NvM_LengthCheck Block_DemPrimaryDataBlock5 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_MemoryEntryInit, 20U);
  NvM_LengthCheck Block_DemPrimaryDataBlock6 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_MemoryEntryInit, 20U);
  NvM_LengthCheck Block_DemPrimaryDataBlock7 : SizeOfRomBlockDoesNotMatchConfiguredLength(Dem_MemoryEntryInit, 20U);
  NvM_LengthCheck Block_CpApMySwcSnNvM_PimOdometer : SizeOfRomBlockLessThanSizeOfRamBlock(Rte_CtApMySwc_CalOdometer, Rte_CpApMySwc_PimOdometer);
};

/* Permanent RAM and ROM block length checks - END */

#define NVM_STOP_SEC_CONST_DESCRIPTOR_TABLE
#include "MemMap.h"

#define NVM_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#if(NVM_API_CONFIG_CLASS != NVM_API_CONFIG_CLASS_1)
/* Job Queue used for normal and high prio jobs */
VAR(NvM_QueueEntryType, NVM_PRIVATE_DATA) NvM_JobQueue_at[NVM_SIZE_STANDARD_JOB_QUEUE + NVM_SIZE_IMMEDIATE_JOB_QUEUE];
#endif

#if ((NVM_SET_RAM_BLOCK_STATUS_API == STD_ON) && (NVM_CALC_RAM_CRC_USED == STD_ON))
/* Crc job queue. It's just a bit string */
VAR(NvM_CrcQueueEntryType, NVM_CONFIG_DATA) NvM_CrcQueue_at[NVM_SIZE_CRC_JOB_QUEUE];
#endif

#define NVM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

#define NVM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#include "MemMap.h"

/* array of RAM Block Management areas, defined to be usable in block descriptor table */
VAR(NvM_RamMngmtAreaType, NVM_CONFIG_DATA) NvM_BlockMngmtArea_at[NVM_TOTAL_NUM_OF_NVRAM_BLOCKS];

/* management area for DCM blocks */
VAR(NvM_RamMngmtAreaType, NVM_CONFIG_DATA) NvM_DcmBlockMngmt_t;

#define NVM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#include "MemMap.h"

#define NVM_START_SEC_CODE
#include "MemMap.h"

/**********************************************************************************************************************
*  NvM_EnterCriticalSection
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 enter SchM exclusive area for NvM 
 * \endinternal
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_EnterCriticalSection(void)
{
    /* do what ever was defined to do for locking the resources */
    SchM_Enter_NvM_NVM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

/**********************************************************************************************************************
*  NvM_ExitCriticalSection
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 exit SchM exclusive area for NvM 
 * \endinternal
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_ExitCriticalSection(void)
{
    /* do what ever was defined to do for unlocking the resources */
    SchM_Exit_NvM_NVM_EXCLUSIVE_AREA_0(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

/* PRQA S 3453 2 */ /* MD_MSR_19.7 */ 
#define NvM_invokeMultiBlockMode(serv, res) BswM_NvM_CurrentJobMode((serv),(res)) /*  if NvMBswMMultiBlockJobStatusInformation is TRUE  */ 
#define NvM_invokeMultiCbk(serv, res)  

/**********************************************************************************************************************
*  NvM_MultiBlockCbk
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 invoke the BSWM notification if any is configured
 *  - #20 in case the given job result isn't set to pending, invoke the multi block job end notification
 * \endinternal
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_MultiBlockCbk(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult)
{
    /* The complete function body is designed to be optimized away by the compiler, if it is not needed    *
     * If the used macro is empty, the compiler may decide to remove code because it would contain         *
     * emtpy execution blocks (it does not matter whether conditions were TRUE or FALSE                    */
    NvM_invokeMultiBlockMode(ServiceId, JobResult);

    if(JobResult != NVM_REQ_PENDING)
    {
        NvM_invokeMultiCbk(ServiceId, JobResult);
    }   
}

 /* PRQA S 3453 2 */ /* MD_MSR_19.7 */ 
#define NvM_invokeCbk(descr, serv, res) (descr)->CallbackFunc_pt((serv), (res)) /*  if any Block has a Single Block Job End Notifications  */ 
#define NvM_invokeCurrentBlockMode(id, res) 

/**********************************************************************************************************************
*  NvM_BlockNotification
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 do not do following for DCM blocks
 *  - #20 in case the request wasn't WriteAll, given job result is not NVM_REQ_PENDING and the block has a job end notification
 *      - #21 invoke single block job end notification
 *  - #30 in case the block has the BSWM notification enabled
 *      - #31 invoke BSWM notification
 * \endinternal
 */
void NvM_BlockNotification(NvM_BlockIdType BlockId, NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult)
{
    /* The complete function body is designed to be optimized away by the compiler, if it is not needed    *
     * If the used macros are empty, the compiler may decide to remove code because it would contain       *
     * emtpy execution blocks (it does not matter whether conditions were TRUE or FALSE                    */
    const NvM_BlockIdType orgBlockId = NVM_BLOCK_FROM_DCM_ID(BlockId);    
    const NvM_BlockDescrPtrType NvM_Descr_ptloc = &NvM_BlockDescriptorTable_at[orgBlockId];
       
    if (orgBlockId == BlockId)
    {
        if ((ServiceId != NVM_WRITE_ALL) && (JobResult != NVM_REQ_PENDING) &&  (NvM_Descr_ptloc->CallbackFunc_pt != NULL_PTR))
        {
            NvM_invokeCbk(NvM_Descr_ptloc, ServiceId, JobResult); /* SBSW_NvM_FuncPtrCall_UserCallbacks */
        }
        
        /* PRQA S 3760 1 */ /* MD_NvM_10.1 */
        if(NvM_Descr_ptloc->NotifyBswM == TRUE)
        {
            NvM_invokeCurrentBlockMode(BlockId, JobResult);
        }
    }      
}

#if (NVM_USE_CRC16 == STD_ON)
/**********************************************************************************************************************
*  NvM_Crc_Crc16_Calculate
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 invoke Crc API to calculate Crc16
 * \endinternal
 */
static FUNC(void, NVM_PRIVATE_CODE)  NvM_Crc_Crc16_Calculate(NvM_ConstRamAddressType data_pt, uint16 length, NvM_CrcValuePtrType currCrc)
{
    /* Pointer cast is necessary for efficiency reasons.
     * We cast to a "smaller" type with less alignment requirements; it is harmless */
    typedef P2VAR(uint16, AUTOMATIC, NVM_CRC_BUFFER_PTR_CLASS) NvM_Crc16PtrType;
    
    /* PRQA S 0310 1 *//* MD_NvM_11.4 */ 
    *(NvM_Crc16PtrType)currCrc = Crc_CalculateCRC16(data_pt, length, *(NvM_Crc16PtrType)currCrc, FALSE); /* SBSW_NvM_FuncCall_CrcModule */ /* SBSW_NvM_AccessPtr_CrcValue */
}

/**********************************************************************************************************************
*  NvM_Crc_Crc16_Compare
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 compare two Crc bytes to each other
 * \endinternal
 */
static FUNC(boolean, NVM_PRIVATE_CODE) NvM_Crc_Crc16_Compare(NvM_CrcBufferConstPtrType crc1, NvM_CrcValueRefType crc2)
{
    return (boolean)((crc1[0] == crc2[0]) && (crc1[1] == crc2[1]));
}

/**********************************************************************************************************************
*  NvM_Crc_Crc16_CopyToBuffer
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 copy two Crc bytes from source to destination
 * \endinternal
 */
static FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_Crc16_CopyToBuffer (NvM_CrcBufferPtrType dest, NvM_CrcValueRefType src)
{
    dest[0] = src[0]; /* SBSW_NvM_AccessArray_CrcBuffers */
    dest[1] = src[1]; /* SBSW_NvM_AccessArray_CrcBuffers */
}
#endif /* (NVM_USE_CRC16 == STD_ON) */

#if (NVM_USE_CRC32 == STD_ON)
/**********************************************************************************************************************
*  NvM_Crc_Crc32_Calculate
**********************************************************************************************************************/
/*!
 * \internal
*   - #10 invoke Crc API to calculate Crc32
 * \endinternal
 */
static FUNC(void, NVM_PRIVATE_CODE)  NvM_Crc_Crc32_Calculate(NvM_ConstRamAddressType data_pt, uint16 length, NvM_CrcValuePtrType currCrc)
{
    *currCrc = Crc_CalculateCRC32(data_pt, length, (*currCrc) ^ NVM_CRC32_XOR_VALUE, FALSE); /* SBSW_NvM_FuncCall_CrcModule */ /* SBSW_NvM_AccessPtr_CrcValue */
}

/**********************************************************************************************************************
*  NvM_Crc_Crc32_Compare
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 compare four Crc bytes to each other
 * \endinternal
 */
static FUNC(boolean, NVM_PRIVATE_CODE) NvM_Crc_Crc32_Compare(NvM_CrcBufferConstPtrType crc1, NvM_CrcValueRefType crc2)
{
    return (boolean)((crc1[0] == crc2[0]) && (crc1[1] == crc2[1]) && (crc1[2] == crc2[2]) && (crc1[3] == crc2[3]));
}

/**********************************************************************************************************************
*  NvM_Crc_Crc32_CopyToBuffer
**********************************************************************************************************************/
/*!
 * \internal
*   - #10 copy four Crc bytes from source to destination
 * \endinternal
 */
static FUNC(void, NVM_PRIVATE_CODE) NvM_Crc_Crc32_CopyToBuffer (NvM_CrcBufferPtrType dest, NvM_CrcValueRefType src)
{
    dest[0] = src[0]; /* SBSW_NvM_AccessArray_CrcBuffers */
    dest[1] = src[1]; /* SBSW_NvM_AccessArray_CrcBuffers */
    dest[2] = src[2]; /* SBSW_NvM_AccessArray_CrcBuffers */
    dest[3] = src[3]; /* SBSW_NvM_AccessArray_CrcBuffers */
}
#endif /* (NVM_USE_CRC32 == STD_ON) */

#define NVM_STOP_SEC_CODE
#include "MemMap.h"

/* PRQA L:inclusions */

/* ---- End of File ------------------------------------------------------- */

