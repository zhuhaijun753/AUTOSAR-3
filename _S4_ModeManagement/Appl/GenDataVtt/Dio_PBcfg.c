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
 *            Module: VTTDio
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dio_PBcfg.c
 *   Generation Time: 2016-03-17 09:06:54
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/

#define DIO_PBCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
#include "Dio.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 **********************************************************************************************************************/
#define DIO_CFG_C_MAJOR_VERSION    (4u) 
#define DIO_CFG_C_MINOR_VERSION    (00u) 
#define DIO_CFG_C_PATCH_VERSION    (00u) 

#if (  (DIO_SW_MAJOR_VERSION != (2u)) \
    || (DIO_SW_MINOR_VERSION != (2u)))
  #error "Version numbers of Dio_PBcfg.c and Dio.h are inconsistent!"
#endif

#if (  (DIO_CFG_MAJOR_VERSION != DIO_CFG_C_MAJOR_VERSION) \
    || (DIO_CFG_MINOR_VERSION != DIO_CFG_C_MINOR_VERSION))
  #error "Version numbers of Dio_PBcfg.c and Dio_Cfg.h are inconsistent!"
#endif

/**********************************************************************************************************************
 *  GLOBAL CONFIG DATA
 **********************************************************************************************************************/
CONST(Dio_ChannelGroupType, DIO_APPL_CONST) DioConf_DioChannelGroup_DioChannelGroup = { 0, 0UL,0x00000001UL }; 

P2CONST(Dio_ChannelGroupType, AUTOMATIC, DIO_APPL_CONST) Dio_ChannelGroupArray[DIO_MAX_CHANNELGROUP_COUNT] =  
{
  &DioConf_DioChannelGroup_DioChannelGroup
};

CONST(Dio_ConfigType, DIO_APPL_CONST) DioConfig = 0;

/**********************************************************************************************************************
 *  END OF FILE: DIO_PBCFG.C
 **********************************************************************************************************************/
