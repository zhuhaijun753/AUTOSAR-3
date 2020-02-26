/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Dem_Type.h
 *        Config:  MyECU.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application types header file for SW-C <Dem>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DEM_TYPE_H
# define _RTE_DEM_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef DEM_DTC_FORMAT_OBD
#   define DEM_DTC_FORMAT_OBD (0U)
#  endif

#  ifndef DEM_DTC_FORMAT_UDS
#   define DEM_DTC_FORMAT_UDS (1U)
#  endif

#  ifndef DEM_DTC_FORMAT_J1939
#   define DEM_DTC_FORMAT_J1939 (2U)
#  endif

#  ifndef DEM_DTC_KIND_ALL_DTCS
#   define DEM_DTC_KIND_ALL_DTCS (1U)
#  endif

#  ifndef DEM_DTC_KIND_EMISSION_REL_DTCS
#   define DEM_DTC_KIND_EMISSION_REL_DTCS (2U)
#  endif

#  ifndef DEM_DTC_ORIGIN_PRIMARY_MEMORY
#   define DEM_DTC_ORIGIN_PRIMARY_MEMORY (1U)
#  endif

#  ifndef DEM_DTC_ORIGIN_MIRROR_MEMORY
#   define DEM_DTC_ORIGIN_MIRROR_MEMORY (2U)
#  endif

#  ifndef DEM_DTC_ORIGIN_PERMANENT_MEMORY
#   define DEM_DTC_ORIGIN_PERMANENT_MEMORY (3U)
#  endif

#  ifndef DEM_DTC_ORIGIN_SECONDARY_MEMORY
#   define DEM_DTC_ORIGIN_SECONDARY_MEMORY (4U)
#  endif

#  ifndef DEM_DEBOUNCE_STATUS_FREEZE
#   define DEM_DEBOUNCE_STATUS_FREEZE (0U)
#  endif

#  ifndef DEM_DEBOUNCE_STATUS_RESET
#   define DEM_DEBOUNCE_STATUS_RESET (1U)
#  endif

#  ifndef DEM_TEMPORARILY_DEFECTIVE
#   define DEM_TEMPORARILY_DEFECTIVE (1U)
#  endif

#  ifndef DEM_FINALLY_DEFECTIVE
#   define DEM_FINALLY_DEFECTIVE (2U)
#  endif

#  ifndef DEM_TEMPORARILY_HEALED
#   define DEM_TEMPORARILY_HEALED (4U)
#  endif

#  ifndef DEM_TEST_COMPLETE
#   define DEM_TEST_COMPLETE (8U)
#  endif

#  ifndef DEM_DTR_UPDATE
#   define DEM_DTR_UPDATE (16U)
#  endif

#  ifndef DEM_UDS_STATUS_TF
#   define DEM_UDS_STATUS_TF (1U)
#  endif

#  ifndef DEM_UDS_STATUS_TFTOC
#   define DEM_UDS_STATUS_TFTOC (2U)
#  endif

#  ifndef DEM_UDS_STATUS_PDTC
#   define DEM_UDS_STATUS_PDTC (4U)
#  endif

#  ifndef DEM_UDS_STATUS_CDTC
#   define DEM_UDS_STATUS_CDTC (8U)
#  endif

#  ifndef DEM_UDS_STATUS_TNCSLC
#   define DEM_UDS_STATUS_TNCSLC (16U)
#  endif

#  ifndef DEM_UDS_STATUS_TFSLC
#   define DEM_UDS_STATUS_TFSLC (32U)
#  endif

#  ifndef DEM_UDS_STATUS_TNCTOC
#   define DEM_UDS_STATUS_TNCTOC (64U)
#  endif

#  ifndef DEM_UDS_STATUS_WIR
#   define DEM_UDS_STATUS_WIR (128U)
#  endif

#  ifndef DEM_EVENT_STATUS_PASSED
#   define DEM_EVENT_STATUS_PASSED (0U)
#  endif

#  ifndef DEM_EVENT_STATUS_FAILED
#   define DEM_EVENT_STATUS_FAILED (1U)
#  endif

#  ifndef DEM_EVENT_STATUS_PREPASSED
#   define DEM_EVENT_STATUS_PREPASSED (2U)
#  endif

#  ifndef DEM_EVENT_STATUS_PREFAILED
#   define DEM_EVENT_STATUS_PREFAILED (3U)
#  endif

#  ifndef DEM_INDICATOR_OFF
#   define DEM_INDICATOR_OFF (0U)
#  endif

#  ifndef DEM_INDICATOR_CONTINUOUS
#   define DEM_INDICATOR_CONTINUOUS (1U)
#  endif

#  ifndef DEM_INDICATOR_BLINKING
#   define DEM_INDICATOR_BLINKING (2U)
#  endif

#  ifndef DEM_INDICATOR_BLINK_CONT
#   define DEM_INDICATOR_BLINK_CONT (3U)
#  endif

#  ifndef DEM_INDICATOR_SLOW_FLASH
#   define DEM_INDICATOR_SLOW_FLASH (4U)
#  endif

#  ifndef DEM_INDICATOR_FAST_FLASH
#   define DEM_INDICATOR_FAST_FLASH (5U)
#  endif

#  ifndef DEM_INDICATOR_ON_DEMAND
#   define DEM_INDICATOR_ON_DEMAND (6U)
#  endif

#  ifndef DEM_INDICATOR_SHORT
#   define DEM_INDICATOR_SHORT (7U)
#  endif

#  ifndef DEM_INIT_MONITOR_CLEAR
#   define DEM_INIT_MONITOR_CLEAR (1U)
#  endif

#  ifndef DEM_INIT_MONITOR_RESTART
#   define DEM_INIT_MONITOR_RESTART (2U)
#  endif

#  ifndef DEM_INIT_MONITOR_REENABLED
#   define DEM_INIT_MONITOR_REENABLED (3U)
#  endif

#  ifndef DEM_IUMPR_GENERAL_DENOMINATOR
#   define DEM_IUMPR_GENERAL_DENOMINATOR (1U)
#  endif

#  ifndef DEM_IUMPR_DEN_COND_COLDSTART
#   define DEM_IUMPR_DEN_COND_COLDSTART (2U)
#  endif

#  ifndef DEM_IUMPR_DEN_COND_EVAP
#   define DEM_IUMPR_DEN_COND_EVAP (3U)
#  endif

#  ifndef DEM_IUMPR_DEN_COND_500MI
#   define DEM_IUMPR_DEN_COND_500MI (4U)
#  endif

#  ifndef DEM_IUMPR_DEN_STATUS_NOT_REACHED
#   define DEM_IUMPR_DEN_STATUS_NOT_REACHED (0U)
#  endif

#  ifndef DEM_IUMPR_DEN_STATUS_REACHED
#   define DEM_IUMPR_DEN_STATUS_REACHED (1U)
#  endif

#  ifndef DEM_IUMPR_DEN_STATUS_INHIBITED
#   define DEM_IUMPR_DEN_STATUS_INHIBITED (2U)
#  endif

#  ifndef DEM_CYCLE_STATE_START
#   define DEM_CYCLE_STATE_START (0U)
#  endif

#  ifndef DEM_CYCLE_STATE_END
#   define DEM_CYCLE_STATE_END (1U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DEM_TYPE_H */
