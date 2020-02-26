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
 *          File:  Rte_CtSaDisplay.h
 *        Config:  MyECU.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtSaDisplay>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTSADISPLAY_H
# define _RTE_CTSADISPLAY_H

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

# include "Rte_CtSaDisplay_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(IdtDisplayIgnitionState, RTE_VAR_NOINIT) Rte_CpSaDisplay_PpLocalIgnitionState_DeIgnitionState; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_NOINIT) Rte_CpApMySwc_PpDisplayState_DeDisplayBusState; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_NOINIT) Rte_CpApMySwc_PpDisplayState_DeLightOnOffCounter; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_NOINIT) Rte_CpApMySwc_PpDisplayState_DeOdometerValue; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_NOINIT) Rte_CpApMySwc_PpDisplayState_DeOdometerWriteRequestPending; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_PpDisplayState_DeDisplayBusState (FALSE)
#  define Rte_InitValue_PpDisplayState_DeLightOnOffCounter (0U)
#  define Rte_InitValue_PpDisplayState_DeOdometerValue (0U)
#  define Rte_InitValue_PpDisplayState_DeOdometerWriteRequestPending (FALSE)
#  define Rte_InitValue_PpLocalIgnitionState_DeIgnitionState (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_PpDisplayState_DeDisplayBusState Rte_Read_CtSaDisplay_PpDisplayState_DeDisplayBusState
#  define Rte_Read_CtSaDisplay_PpDisplayState_DeDisplayBusState(data) (*(data) = Rte_CpApMySwc_PpDisplayState_DeDisplayBusState, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PpDisplayState_DeLightOnOffCounter Rte_Read_CtSaDisplay_PpDisplayState_DeLightOnOffCounter
#  define Rte_Read_CtSaDisplay_PpDisplayState_DeLightOnOffCounter(data) (*(data) = Rte_CpApMySwc_PpDisplayState_DeLightOnOffCounter, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PpDisplayState_DeOdometerValue Rte_Read_CtSaDisplay_PpDisplayState_DeOdometerValue
#  define Rte_Read_CtSaDisplay_PpDisplayState_DeOdometerValue(data) (*(data) = Rte_CpApMySwc_PpDisplayState_DeOdometerValue, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PpDisplayState_DeOdometerWriteRequestPending Rte_Read_CtSaDisplay_PpDisplayState_DeOdometerWriteRequestPending
#  define Rte_Read_CtSaDisplay_PpDisplayState_DeOdometerWriteRequestPending(data) (*(data) = Rte_CpApMySwc_PpDisplayState_DeOdometerWriteRequestPending, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_PpLocalIgnitionState_DeIgnitionState Rte_Write_CtSaDisplay_PpLocalIgnitionState_DeIgnitionState
#  define Rte_Write_CtSaDisplay_PpLocalIgnitionState_DeIgnitionState(data) (Rte_CpSaDisplay_PpLocalIgnitionState_DeIgnitionState = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CTCDDIOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CTCDDIOHWAB_APPL_CODE) RCtCddIoHwAb_PpDisplayState_WriteChannel(IdtDioValueType value); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CTCDDIOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PpDisplayStateIoHwAb_WriteChannel(arg1) (RCtCddIoHwAb_PpDisplayState_WriteChannel(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CTCDDIOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CTCDDIOHWAB_APPL_CODE) RCtCddIoHwAb_PpLocalClamp15_ReadChannel(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CTCDDIOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PplocalIgnitionStateIoHwAb_ReadChannel(arg1) (RCtCddIoHwAb_PpLocalClamp15_ReadChannel(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CtSaDisplay_START_SEC_CODE
# include "CtSaDisplay_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_RCtApDisplayBusStateHandling RCtApDisplayBusStateHandling
#  define RTE_RUNNABLE_RCtApDisplayLightOnOffHandling RCtApDisplayLightOnOffHandling
#  define RTE_RUNNABLE_RCtApDisplayOdometerValue RCtApDisplayOdometerValue
#  define RTE_RUNNABLE_RCtApDisplayOdometerWriteRequestPending RCtApDisplayOdometerWriteRequestPending
#  define RTE_RUNNABLE_RCtApDisplayReadIgnitionSignal RCtApDisplayReadIgnitionSignal
# endif

FUNC(void, CtSaDisplay_CODE) RCtApDisplayBusStateHandling(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CtSaDisplay_CODE) RCtApDisplayLightOnOffHandling(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CtSaDisplay_CODE) RCtApDisplayOdometerValue(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CtSaDisplay_CODE) RCtApDisplayOdometerWriteRequestPending(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CtSaDisplay_CODE) RCtApDisplayReadIgnitionSignal(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CtSaDisplay_STOP_SEC_CODE
# include "CtSaDisplay_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTSADISPLAY_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
