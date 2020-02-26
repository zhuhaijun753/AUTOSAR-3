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
 *            Module: VTTMcu
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Mcu_Cfg.h
 *   Generation Time: 2016-03-17 09:06:54
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined MCU_CFG_H
#define MCU_CFG_H

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define MCU_CFG_MAJOR_VERSION    (4u) 
#define MCU_CFG_MINOR_VERSION    (00u) 
#define MCU_CFG_PATCH_VERSION    (00u) 


/**********************************************************************************************************************
 *  Start - Configuration class PreCompile (public part of configuration)
 **********************************************************************************************************************/
/* Compiler switches for API enabling */
/* static config parameters */
#define MCU_VERSION_INFO_API          (STD_ON) 
#define MCU_GET_RAM_STATE_API         (STD_OFF)
#define MCU_PERFORM_RESET_API         (STD_ON)
#define MCU_INIT_CLOCK                (STD_ON)
#define MCU_NO_PLL                    (STD_ON)

#define MCU_DEV_ERROR_DETECT          (STD_ON)
/**********************************************************************************************************************
 *  Settings for Development Mode
 *********************************************************************************************************************/
#if (STD_ON == MCU_DEV_ERROR_DETECT)
  #include "Det.h"
  #define Mcu_Errorhook(Mcu_FunctionId, Mcu_ErrorCode) \
    ( (void) Det_ReportError ((MCU_MODULE_ID), (MCU_INSTANCE_ID), (Mcu_FunctionId), (Mcu_ErrorCode)) )
#else
  #define Mcu_Errorhook(Mcu_FunctionId, Mcu_ErrorCode)
#endif /* (STD_ON == MCU_DEV_ERROR_DETECT) */

#define Mcu_Init(x) Mcu_Init_Vtt(&McuModuleConfiguration)


/**********************************************************************************************************************
 *  TYPE DEFINITIONS
 **********************************************************************************************************************/


/**********************************************************************************************************************
 * INCLUDES AFTER TYPE DEFINITIONS
 **********************************************************************************************************************/


/**********************************************************************************************************************
 *  Start - Configuration class PostBuild (public part of configuration)
 **********************************************************************************************************************/
/* Symbolic Name Values  of the symbolic names of Mcu modes */
#define McuConf_McuModeSettingConf_SLEEP     (1u) 
#define McuConf_McuModeSettingConf_NORMAL    (0u) 
#define McuConf_McuModeSettingConf_POWER_OFF (3u) 
#define McuConf_McuModeSettingConf_RESET     (2u) 
 

/* Highest number of all configured McuModes */
#define MCU_HIGHEST_MODE_NUMBER (3u)

/* Symbolic Name Values  of the symbolic names of RAM sections */
 

/* Symbolic Name Values  of the symbolic names of Mcu clocks */
#define McuConf_McuClockSettingConfig_McuClockSettingConfig (0u) 
 

#if !defined MCU_PBCFG_SOURCE
  /* Extern declarations of configuration instances */
  extern CONST(Mcu_ConfigType, MCU_APPL_CONST) McuModuleConfiguration; 
  
#endif /* !defined MCU_PBCFG_SOURCE */


#endif /* !defined MCU_CFG_H */


/*********************************************************************************************************************
 *  END OF FILE: Mcu_Cfg.h
 *********************************************************************************************************************/
 
