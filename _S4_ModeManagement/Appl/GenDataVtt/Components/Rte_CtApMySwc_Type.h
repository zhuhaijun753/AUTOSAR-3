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
 *          File:  Rte_CtApMySwc_Type.h
 *        Config:  MyECU.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application types header file for SW-C <CtApMySwc>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTAPMYSWC_TYPE_H
# define _RTE_CTAPMYSWC_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef COMM_NO_COMMUNICATION
#   define COMM_NO_COMMUNICATION (0U)
#  endif

#  ifndef COMM_SILENT_COMMUNICATION
#   define COMM_SILENT_COMMUNICATION (1U)
#  endif

#  ifndef COMM_FULL_COMMUNICATION
#   define COMM_FULL_COMMUNICATION (2U)
#  endif

#  ifndef BSWM_REQUESTSHUTDOWN_INACTIVE
#   define BSWM_REQUESTSHUTDOWN_INACTIVE (0U)
#  endif

#  ifndef BSWM_REQUESTSHUTDOWN_ACTIVE
#   define BSWM_REQUESTSHUTDOWN_ACTIVE (1U)
#  endif

#  ifndef CMDOORSTATE_DOORCLOSED
#   define CMDOORSTATE_DOORCLOSED (0U)
#  endif

#  ifndef CMDOORSTATE_DOOROPEN
#   define CMDOORSTATE_DOOROPEN (1U)
#  endif

#  ifndef CMLIGHTSTATE_LIGHTOFF
#   define CMLIGHTSTATE_LIGHTOFF (0U)
#  endif

#  ifndef CMLIGHTSTATE_LIGHTON
#   define CMLIGHTSTATE_LIGHTON (1U)
#  endif

# endif /* RTE_CORE */


/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
# ifndef RTE_MODETYPE_ComMMode
#  define RTE_MODETYPE_ComMMode
typedef uint8 Rte_ModeType_ComMMode;
# endif
# ifndef RTE_MODETYPE_MdgBswMRequestShutdown
#  define RTE_MODETYPE_MdgBswMRequestShutdown
typedef uint8 Rte_ModeType_MdgBswMRequestShutdown;
# endif

# ifndef RTE_MODE_ComMMode_COMM_FULL_COMMUNICATION
#  define RTE_MODE_ComMMode_COMM_FULL_COMMUNICATION (0U)
# endif
# ifndef RTE_MODE_ComMMode_COMM_NO_COMMUNICATION
#  define RTE_MODE_ComMMode_COMM_NO_COMMUNICATION (1U)
# endif
# ifndef RTE_MODE_ComMMode_COMM_SILENT_COMMUNICATION
#  define RTE_MODE_ComMMode_COMM_SILENT_COMMUNICATION (2U)
# endif
# ifndef RTE_TRANSITION_ComMMode
#  define RTE_TRANSITION_ComMMode (3U)
# endif

# ifndef RTE_MODE_MdgBswMRequestShutdown_BSWM_REQUESTSHUTDOWN_ACTIVE
#  define RTE_MODE_MdgBswMRequestShutdown_BSWM_REQUESTSHUTDOWN_ACTIVE (0U)
# endif
# ifndef RTE_MODE_MdgBswMRequestShutdown_BSWM_REQUESTSHUTDOWN_INACTIVE
#  define RTE_MODE_MdgBswMRequestShutdown_BSWM_REQUESTSHUTDOWN_INACTIVE (1U)
# endif
# ifndef RTE_TRANSITION_MdgBswMRequestShutdown
#  define RTE_TRANSITION_MdgBswMRequestShutdown (2U)
# endif

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTAPMYSWC_TYPE_H */
