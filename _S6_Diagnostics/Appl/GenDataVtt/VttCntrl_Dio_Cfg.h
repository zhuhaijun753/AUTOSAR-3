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
 *              File: VttCntrl_Dio_Cfg.h
 *   Generation Time: 2016-03-17 09:06:54
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined (VTTCNTRL_DIO_CFG_H)
# define VTTCNTRL_DIO_CFG_H

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Component Version Information */
# define VTTDIO_CFG_MAJOR_VERSION    (0x13u) 
# define VTTDIO_CFG_MINOR_VERSION    (0x00u) 
# define VTTDIO_CFG_PATCH_VERSION    (0x00u) 

# define VTTDIO_CHANNELS (6)
# define VTTDIO_PORTS (1)
# define VTTDIO_CHANNELGROUPS (1)		

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

uint32 VttDio_ReadChannelGroup(sint32 index); 
void   VttDio_WriteChannelGroup(sint32 index , uint32 value); 

#endif  /* VTTCNTRL_DIO_CFG_H */
