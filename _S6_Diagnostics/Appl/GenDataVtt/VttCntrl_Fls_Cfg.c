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
 *            Module: VTTCntrl
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: VttCntrl_Fls_Cfg.c
 *   Generation Time: 2016-03-17 09:06:54
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/

#define VTTFLS_CFG_SOURCE

/**********************************************************************************************************************
*  INCLUDES
*********************************************************************************************************************/

#include "VttCntrl_Fls.h"
#include "CANoeAPI.h"

/**********************************************************************************************************************
*  PRAGMAS
*********************************************************************************************************************/

/*! \brief Ensure that the internal state of the Flash controller is not cleared during a simulated ECU reset. */
#pragma bss_seg()
#pragma data_seg()

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
 
/* Check the version of VttCntrl_Fls header file */
#if (  (VTTFLS_SW_MAJOR_VERSION != (0x03u)) \
    || (VTTFLS_SW_MINOR_VERSION != (0x00u)) \
    || (VTTFLS_SW_PATCH_VERSION != (0x05u)) )
# error "Vendor specific version numbers of VttCntrl_Fls_Cfg.c and VttCntrl_Fls.h are inconsistent"
#endif

/* Check the version of the configuration header file */
#if (  (VTTFLS_CFG_MAJOR_VERSION != (0x13u)) \
    || (VTTFLS_CFG_MINOR_VERSION != (0x00u)) \
    || (VTTFLS_CFG_PATCH_VERSION != (0x01u)))
  #error "Version numbers of VttCntrl_Fls_Cfg.c and VttCntrl_Fls_Cfg.h are inconsistent!"
#endif

/**********************************************************************************************************************
*  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
*  GLOBAL DATA
**********************************************************************************************************************/

MemIf_AddressType VttFls_NvRamAddress = 0;

/**********************************************************************************************************************
*  GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
*  VttFls_Init
**********************************************************************************************************************/
/*! \brief     De-initializes the virtual Flash controller.
*  \context    Called by VttFls_OnSwitchOff, VttFls_OnStopMeasurement and VttFls_OnUnload.
**********************************************************************************************************************/
void VttFls_Deinit(void)
{
 	VttFls_NvRamAddress = 0;
  CANoeAPI_CloseNvRam();
}

/**********************************************************************************************************************
*  VttFls_Init
**********************************************************************************************************************/
/*! \brief     Initializes the virtual Flash controller.
*  \context    Called by VttFls_OnLoad.
**********************************************************************************************************************/
void VttFls_Init(void)
{
  uint32 Existingsize;
  VttFls_NvRamAddress = (MemIf_AddressType) CANoeAPI_OpenNvRam(VTTFLS_TOTALSIZE, &Existingsize);
}

/***********************************************************************************************************************
*  VttFls_OnReset()
**********************************************************************************************************************/
/*! \brief     OnReset callout of virtual Flash controller.
*
*			   Tasks: 
*					  If module VttEep is not configured:
*					  - Sets the base address of the NvRAM file to zero.
*					  - Persists the Flash's data via closing and re-opening the NvRam file.
*
*  \context    Called by VttFls_OnStateChange handler right before the virtual ECU is executing a reset.
**********************************************************************************************************************/
void VttFls_OnReset(void)
{
	uint32 Existingsize;

	/* Persist data during reset. */
	VttFls_NvRamAddress = 0;
	CANoeAPI_CloseNvRam();	
	
	VttFls_NvRamAddress = (MemIf_AddressType)CANoeAPI_OpenNvRam(VTTFLS_TOTALSIZE, &Existingsize);
}

/**********************************************************************************************************************
*  END OF FILE: VttCntrl_Fls_Cfg.c
*********************************************************************************************************************/

