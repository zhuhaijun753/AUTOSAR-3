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
 *              File: VttCntrl_Can_Cfg.c
 *   Generation Time: 2016-03-17 09:06:54
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/



#define VTTCAN_SOURCE

/**********************************************************************************************************************
*  INCLUDES
*********************************************************************************************************************/
#include "VttCntrl_Can.h"

/**********************************************************************************************************************
*  PRAGMAS
*********************************************************************************************************************/
/* The following pragmas ensure that all variables of this module are places in memory that is not cleared during a
 * simulated ECU reset/poweron */
#pragma bss_seg()
#pragma data_seg()

/**********************************************************************************************************************
*  VERSION CHECK
*********************************************************************************************************************/

/* vendor specific version information is BCD coded */
#if (  (VTTCAN_SW_MAJOR_VERSION != (0x03)) || (VTTCAN_SW_MINOR_VERSION != (0x01)) || (VTTCAN_SW_PATCH_VERSION != (0x01)) )
# error "Vendor specific version numbers of VttCntrl_Can_Cfg.c and VttCntrl_Can.h are inconsistent"
#endif

#if (  (VTTCAN_CFG_SW_MAJOR_VERSION != (0x14)) || (VTTCAN_CFG_SW_MINOR_VERSION != (0x00)) || (VTTCAN_CFG_SW_PATCH_VERSION != (0x00)) )
# error "Vendor specific version numbers of VttCntrl_Can_Cfg.c and VttCntrl_Can_Cfg.h are inconsistent"
#endif

/**********************************************************************************************************************
*  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

const char* VttCan_BusName[VTTCAN_CHANNELS] = /* PRQA S 0850,5013 */ /* MD_MSR_19.8,MD_Can_5013_LL */
{
"CAN",
};


/**********************************************************************************************************************
*  END OF FILE: VttCntrl_Can_Cfg.c
*********************************************************************************************************************/

