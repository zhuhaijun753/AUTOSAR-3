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
 *              File: Fls_Lcfg.c
 *   Generation Time: 2016-03-17 09:06:54
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/

#define FLS_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
#include "Fls.h"


/**********************************************************************************************************************
 *  VERSION CHECK
 **********************************************************************************************************************/
#define FLS_CFG_C_MAJOR_VERSION    (4u) 
#define FLS_CFG_C_MINOR_VERSION    (00u) 
#define FLS_CFG_C_PATCH_VERSION    (00u) 

#if (  (FLS_SW_MAJOR_VERSION != (2u)) \
    || (FLS_SW_MINOR_VERSION != (2u)))
  #error "Version numbers of Fls_Lcfg.c and Fls.h are inconsistent!"
#endif

#if (  (FLS_CFG_MAJOR_VERSION != FLS_CFG_C_MAJOR_VERSION) \
    || (FLS_CFG_MINOR_VERSION != FLS_CFG_C_MINOR_VERSION) )
  #error "Version numbers of Fls_Lcfg.c and Fls_Cfg.h are inconsistent!"
#endif


/**********************************************************************************************************************
 *  GLOBAL CONFIG DATA
 **********************************************************************************************************************/
/* Configuration structure of the Fls */
CONST(Fls_ConfigType, FLS_APPL_CONST) FlsConfigSet =
{
  FLS_MODULE_ID /*  Fls Module Id  */ , 
  0 /*  Fls Base Address  */ , 
  131072UL /*  Used size of Fls in bytes  */ , 
  32 /*  No of bytes to read in each job proc. cycle in normal mode  */ , 
  64 /*  No of bytes to read in each job proc. cycle in fast mode  */ , 
  8 /*  No of bytes to write in each job proc. cycle in normal mode  */ , 
  8 /*  No of bytes to write in each job proc. cycle in fast mode  */ , 
  MEMIF_MODE_SLOW /*  Fls default mode after init  */ , 
  NULL_PTR /*  Callback function for positive job result  */ , 
  NULL_PTR /*  Callback function to notify error in an erase or a write job  */ 
};

/*********************************************************************************************************************
 *  END OF FILE: Fls_LCFG.C
 *********************************************************************************************************************/
