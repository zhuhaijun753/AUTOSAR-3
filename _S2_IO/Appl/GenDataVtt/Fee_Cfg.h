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
 *              File: Fee_Cfg.h
 *   Generation Time: 2016-04-15 11:20:15
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/

    
/**********************************************************************************************************************
 *  PUBLIC SECTION
 *********************************************************************************************************************/
#if !defined (FEE_CFG_H_PUBLIC)
# define FEE_CFG_H_PUBLIC

  /********************************************************************************************************************
   *  GLOBAL CONSTANT MACROS
   *******************************************************************************************************************/
  /****************************************************************************
   * VERSION IDENTIFICATION
   ***************************************************************************/
# define FEE_CFG_MAJOR_VERSION                    (8u)
# define FEE_CFG_MINOR_VERSION                    (1u)
# define FEE_CFG_PATCH_VERSION                    (0u)

  /****************************************************************************
   * API CONFIGURATION
   ***************************************************************************/
# define FEE_VERSION_INFO_API                     (STD_ON)
# define FEE_GET_ERASE_CYCLE_API                  (STD_OFF)
# define FEE_GET_WRITE_CYCLE_API                  (STD_OFF)
# define FEE_FORCE_SECTOR_SWITCH_API              (STD_OFF)
# define FEE_FSS_CONTROL_API              		  (STD_OFF)

# define FEE_DATA_CONVERSION_API                  (STD_OFF)

  /****************************************************************************
   * DEVELOPMENT CONFIGURATION
   ***************************************************************************/
# define FEE_DEV_ERROR_DETECT                     (STD_ON)

# if (STD_ON == FEE_DEV_ERROR_DETECT)
#  define FEE_DEBUG_REPORTING                     (STD_ON)
# else
#  define FEE_DEBUG_REPORTING                                         (STD_OFF)
# endif

  /****************************************************************************
   * GENERAL CONFIGURATION PARAMETER
   ***************************************************************************/

#define FeeConf_FeeBlockConfiguration_FeeConfigBlock (176UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemAdminDataBlock (16UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock0 (32UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock1 (48UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock2 (64UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock3 (80UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock4 (96UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock5 (112UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock6 (128UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemPrimaryDataBlock7 (144UL) 
#define FeeConf_FeeBlockConfiguration_FeeDemStatusDataBlock (160UL) 


#define FeePartitionConfiguration (0U) 


#define FEE_NUMBER_OF_PARTITIONS (1)

#endif /* FEE_CFG_H_PUBLIC */

/**********************************************************************************************************************
 *  END OF FILE: Fee_Cfg.h
 *********************************************************************************************************************/
 

