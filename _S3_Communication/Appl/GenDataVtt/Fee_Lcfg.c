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
 *            Module: Fee
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Fee_Lcfg.c
 *   Generation Time: 2016-04-15 11:20:15
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Fee_InitEx.h"
#include "Fee_Int.h"
#include "Fee_PartitionDefs.h"

/**********************************************************************************************************************
 * VERSION IDENTIFICATION
 *********************************************************************************************************************/
# define FEE_CFG_C_MAJOR_VERSION                                        (8u)
# define FEE_CFG_C_MINOR_VERSION                                        (1u)
# define FEE_CFG_C_PATCH_VERSION                                        (0u)

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
#if (  (FEE_INTERNAL_MAJOR_VERSION != FEE_CFG_C_MAJOR_VERSION) \
    || (FEE_INTERNAL_MINOR_VERSION != FEE_CFG_C_MINOR_VERSION) )
# error "Vendor specific version numbers of Fee_Lcfg.c and Fee_Int.h are inconsistent"
#endif

#if (  (FEE_CFG_MAJOR_VERSION != FEE_CFG_C_MAJOR_VERSION) \
    || (FEE_CFG_MINOR_VERSION != FEE_CFG_C_MINOR_VERSION) )
# error "Version numbers of Fee_Lcfg.c and Fee_Cfg.h are inconsistent!"
#endif

#if (  (FEE_PRIVATE_CFG_MAJOR_VERSION != FEE_CFG_C_MAJOR_VERSION) \
    || (FEE_PRIVATE_CFG_MINOR_VERSION != FEE_CFG_C_MINOR_VERSION))
# error "Version numbers of Fee_Lcfg.c and Fee_PrivateCfg.h are inconsistent!"
#endif

#define FEE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"      /* PRQA S 5087 */ /* MD_MSR_19.1 */

static VAR(struct Fee_PartitionsRamDataStruct, FEE_VAR_NOINIT) Fee_PartitionRamData[FEE_NUMBER_OF_PARTITIONS];

#define FEE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"      /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  GLOBAL DATA CONSTANT
 *********************************************************************************************************************/
#define FEE_START_SEC_APPL_CONFIG_UNSPECIFIED
#include "MemMap.h"     /* PRQA S 5087 */ /* MD_MSR_19.1 */

  /*<FEE_BLOCK_CONFIGURATION>*/
static CONST(struct Fee_BlockConfigStruct, FEE_APPL_CONFIG) Fee_BlockConfig_at[] =
{
  { /*  Block: FeeDemAdminDataBlock  */ 
    1U /*  index of the block in the linktable  */ , 
    12U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FeePartitionConfiguration /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock0  */ 
    2U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FeePartitionConfiguration /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock1  */ 
    3U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FeePartitionConfiguration /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock2  */ 
    4U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FeePartitionConfiguration /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock3  */ 
    5U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FeePartitionConfiguration /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock4  */ 
    6U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FeePartitionConfiguration /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock5  */ 
    7U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FeePartitionConfiguration /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock6  */ 
    8U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FeePartitionConfiguration /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemPrimaryDataBlock7  */ 
    9U /*  index of the block in the linktable  */ , 
    10U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FeePartitionConfiguration /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeDemStatusDataBlock  */ 
    10U /*  index of the block in the linktable  */ , 
    22U /*  payload length  */ , 
    1U /*  number of datasets  */ , 
    FeePartitionConfiguration /*  partition where the block resides in  */ , 
    1U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }, 
  { /*  Block: FeeConfigBlock  */ 
    0U /*  index of the block in the linktable  */ , 
    4U /*  payload length  */ , 
    2U /*  number of datasets  */ , 
    FeePartitionConfiguration /*  partition where the block resides in  */ , 
    2U /*  the exponent of the number of instances per chunk (2^n)-1  */ , 
    FALSE /*  immediate data  */ , 
    FALSE /*  critical data  */ 
  }
};
/*</FEE_BLOCK_CONFIGURATION>*/


/* Describe the partitions */
static CONST(struct Fee_PartitionConfigStruct, FEE_APPL_CONFIG) Fee_PartitionConfig_at[FEE_NUMBER_OF_PARTITIONS] =
{
  {
    &Fee_PartitionRamData[0], 
    {
      14816UL /*  FSS threshold  */ , 
      13792UL /*  BSS threshold  */ 
    }, 
    { /*  AssociatedSectors_at  */ 
      { /*  LowerSector  */ 
        0xFFFFFFFFUL /*  Fls Erase Value  */ , 
        { /*  physical sector  */ 
          0x00000000UL /*  physical sector start address  */ , 
          0x00004000UL /*  physical sector size  */ 
        }, 
        { /*  configured sector  */ 
          0x00000000UL /*  configured sector start address  */ , 
          0x00004000UL /*  configured sector size  */ 
        }, 
        { /*  alignments  */ 
          3U /*  write alignment  */ , 
          3U /*  address alignment  */ 
        }
      }, 
      { /*  UpperSector  */ 
        0xFFFFFFFFUL /*  Fls Erase Value  */ , 
        { /*  physical sector  */ 
          0x00004000UL /*  physical sector start address  */ , 
          0x00004000UL /*  physical sector size  */ 
        }, 
        { /*  configured sector  */ 
          0x00004000UL /*  configured sector start address  */ , 
          0x00004000UL /*  configured sector size  */ 
        }, 
        { /*  alignments  */ 
          3U /*  write alignment  */ , 
          3U /*  address alignment  */ 
        }
      }
    }, 
    (11U), 
    0U
  } /*  ramData_pt  */ 
};

CONST(struct Fee_ConfigStruct, FEE_APPL_CONFIG) Fee_Config =
{
    Fee_BlockConfig_at,
    Fee_PartitionConfig_at,
    (0x000BU /*  number of blocks  */ ),
    FEE_NUMBER_OF_PARTITIONS,
    (4U /*  dataset selection bits  */ ),
    (FALSE /*  fbl config  */ )
};

#define FEE_STOP_SEC_APPL_CONFIG_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define FEE_START_SEC_CODE
#include "MemMap.h"      /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(Fee_ErrorCallbackReturnType, FEE_APPL_CODE) Fee_ErrorCallbackNotification(uint8 partitionId, Fee_SectorErrorType err)
{
#if (STD_ON == FEE_USE_APPL_ERROR_CALLBACK)
     return  Appl_CriticalErrorCallback(partitionId, err);
#else
     /* check partitionId -> avoid waning about unused parameter */
     return (Fee_ErrorCallbackReturnType)(
                        ((partitionId < FEE_NUMBER_OF_PARTITIONS) && (err != FEE_SECTOR_FORMAT_FAILED)) ?
                                                       FEE_ERRCBK_RESOLVE_AUTOMATICALLY : FEE_ERRCBK_REJECT_WRITE);
#endif
}

#define FEE_STOP_SEC_CODE
#include "MemMap.h"      /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  END OF FILE: Fee_Lcfg.c
 *********************************************************************************************************************/
 

