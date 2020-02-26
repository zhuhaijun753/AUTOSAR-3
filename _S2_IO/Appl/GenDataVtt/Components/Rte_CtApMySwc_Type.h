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

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTAPMYSWC_TYPE_H */
