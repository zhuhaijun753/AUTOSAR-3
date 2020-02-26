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
 *              File: Dio_Cfg.h
 *   Generation Time: 2016-03-17 09:06:54
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined DIO_CFG_H
#define DIO_CFG_H

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/
#define DIO_CFG_MAJOR_VERSION    (4u) 
#define DIO_CFG_MINOR_VERSION    (00u) 
#define DIO_CFG_PATCH_VERSION    (00u) 

#define DIO_DEV_ERROR_DETECT        (STD_ON)
#define DIO_VERSION_INFO_API        (STD_ON)
#define DIO_FLIP_CHANNEL_API        (STD_OFF)

/**********************************************************************************************************************
 *  TYPE DEFINITIONS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DEFINES
 **********************************************************************************************************************/
#define DIO_MAX_CHANNEL_COUNT       (6U)
#define DIO_MAX_PORT_COUNT          (1U)
#define DIO_MAX_CHANNELGROUP_COUNT  (1U)

/********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 ********************************************************************************************************************/
/* Extern declarations of configuration instances */
#define DioConf_DioChannel_env_DisplayBusAwake    ((Dio_ChannelType) 0) 
#define DioConf_DioChannel_env_DoorFrontLeft    ((Dio_ChannelType) 1) 
#define DioConf_DioChannel_env_DoorFrontRight    ((Dio_ChannelType) 2) 
#define DioConf_DioChannel_env_InteriorLightFront    ((Dio_ChannelType) 3) 
#define DioConf_DioChannel_env_InteriorLightFrontDEFECT    ((Dio_ChannelType) 4) 
#define DioConf_DioChannel_env_LocalClamp15    ((Dio_ChannelType) 5) 

#define DioConf_DioPort_DioPort    ((Dio_PortType) (0)) 

#if (!defined DIO_PBCFG_SOURCE)
  extern P2CONST(Dio_ChannelGroupType, AUTOMATIC, DIO_APPL_CONST) Dio_ChannelGroupArray[];
#endif

/* Dio development error handler */
#if (DIO_DEV_ERROR_DETECT == STD_ON)
  #include "Det.h"
  #define Dio_ReportDet(Dio_ServiceId, Dio_ErrorCode) \
    ( (void)Det_ReportError ((DIO_MODULE_ID), (DIO_INSTANCE_ID), (Dio_ServiceId), (Dio_ErrorCode)) )
#else
  /* development error reporting is disabled, don't use Det's reporting function */
  #define Dio_ReportDet(Dio_ServiceId, Dio_ErrorCode)
#endif

#define Dio_Init(x) Dio_Init_Vtt(&DioConfig)

extern CONST(Dio_ConfigType, DIO_APPL_CONST) DioConfig;

#endif  /* DIO_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Dio_Cfg.h
 **********************************************************************************************************************/
