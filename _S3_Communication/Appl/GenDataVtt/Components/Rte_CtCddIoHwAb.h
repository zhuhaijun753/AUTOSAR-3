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
 *          File:  Rte_CtCddIoHwAb.h
 *        Config:  MyECU.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtCddIoHwAb>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTCDDIOHWAB_H
# define _RTE_CTCDDIOHWAB_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CtCddIoHwAb_Type.h"
# include "Rte_DataHandleType.h"


# define CtCddIoHwAb_START_SEC_CODE
# include "CtCddIoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_RCtCddIoHwAb_PpDoorFrontLeft_ReadChannel RCtCddIoHwAb_PpDoorFrontLeft_ReadChannel
#  define RTE_RUNNABLE_RCtCddIoHwAb_PpDoorFrontRight_ReadChannel RCtCddIoHwAb_PpDoorFrontRight_ReadChannel
#  define RTE_RUNNABLE_RCtCddIoHwAb_PpInteriorLightFrontDEFECT_ReadChannel RCtCddIoHwAb_PpInteriorLightFrontDEFECT_ReadChannel
#  define RTE_RUNNABLE_RCtCddIoHwAb_PpInteriorLightFront_WriteChannel RCtCddIoHwAb_PpInteriorLightFront_WriteChannel
# endif

FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpDoorFrontLeft_ReadChannel(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpDoorFrontRight_ReadChannel(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpInteriorLightFrontDEFECT_ReadChannel(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpInteriorLightFront_WriteChannel(IdtDioValueType value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CtCddIoHwAb_STOP_SEC_CODE
# include "CtCddIoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTCDDIOHWAB_H */
