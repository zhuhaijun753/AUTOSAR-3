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
 *        Config:  C:/CanCollege/AUTOSAR4/_S5_MemoryAbstraction/MyECU.dpa
 *     SW-C Type:  CtApMySwc
 *  Generated at:  Tue Nov  8 17:06:14 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application types header file for SW-C <CtApMySwc> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTAPMYSWC_TYPE_H
# define _RTE_CTAPMYSWC_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

/**********************************************************************************************************************
 * Range, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

# ifndef COMM_NO_COMMUNICATION
#  define COMM_NO_COMMUNICATION (0U)
# endif

# ifndef COMM_SILENT_COMMUNICATION
#  define COMM_SILENT_COMMUNICATION (1U)
# endif

# ifndef COMM_FULL_COMMUNICATION
#  define COMM_FULL_COMMUNICATION (2U)
# endif

# ifndef BSWM_REQUESTSHUTDOWN_INACTIVE
#  define BSWM_REQUESTSHUTDOWN_INACTIVE (0U)
# endif

# ifndef BSWM_REQUESTSHUTDOWN_ACTIVE
#  define BSWM_REQUESTSHUTDOWN_ACTIVE (1U)
# endif

# ifndef CMDOORSTATE_DOORCLOSED
#  define CMDOORSTATE_DOORCLOSED (0U)
# endif

# ifndef CMDOORSTATE_DOOROPEN
#  define CMDOORSTATE_DOOROPEN (1U)
# endif

# ifndef CMLIGHTSTATE_LIGHTOFF
#  define CMLIGHTSTATE_LIGHTOFF (0U)
# endif

# ifndef CMLIGHTSTATE_LIGHTON
#  define CMLIGHTSTATE_LIGHTON (1U)
# endif

# ifndef NVM_REQ_OK
#  define NVM_REQ_OK (0U)
# endif

# ifndef NVM_REQ_NOT_OK
#  define NVM_REQ_NOT_OK (1U)
# endif

# ifndef NVM_REQ_PENDING
#  define NVM_REQ_PENDING (2U)
# endif

# ifndef NVM_REQ_INTEGRITY_FAILED
#  define NVM_REQ_INTEGRITY_FAILED (3U)
# endif

# ifndef NVM_REQ_BLOCK_SKIPPED
#  define NVM_REQ_BLOCK_SKIPPED (4U)
# endif

# ifndef NVM_REQ_NV_INVALIDATED
#  define NVM_REQ_NV_INVALIDATED (5U)
# endif

# ifndef NVM_REQ_CANCELED
#  define NVM_REQ_CANCELED (6U)
# endif

# ifndef NVM_REQ_REDUNDANCY_FAILED
#  define NVM_REQ_REDUNDANCY_FAILED (7U)
# endif

# ifndef NVM_REQ_RESTORED_FROM_ROM
#  define NVM_REQ_RESTORED_FROM_ROM (8U)
# endif

# ifndef NVM_READ_BLOCK
#  define NVM_READ_BLOCK (6U)
# endif

# ifndef NVM_WRITE_BLOCK
#  define NVM_WRITE_BLOCK (7U)
# endif

# ifndef NVM_RESTORE_BLOCK_DEFAULTS
#  define NVM_RESTORE_BLOCK_DEFAULTS (8U)
# endif

# ifndef NVM_ERASE_BLOCK
#  define NVM_ERASE_BLOCK (9U)
# endif

# ifndef NVM_INVALIDATE_NV_BLOCK
#  define NVM_INVALIDATE_NV_BLOCK (11U)
# endif

# ifndef NVM_READ_ALL
#  define NVM_READ_ALL (12U)
# endif



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
