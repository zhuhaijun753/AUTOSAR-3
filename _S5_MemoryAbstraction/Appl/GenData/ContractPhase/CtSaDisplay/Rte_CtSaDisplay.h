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
 *        Config:  C:/CanCollege/AUTOSAR4/_S5_MemoryAbstraction/MyECU.dpa
 *     SW-C Type:  CtSaDisplay
 *  Generated at:  Tue Nov  8 17:06:16 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtSaDisplay> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTSADISPLAY_H
# define _RTE_CTSADISPLAY_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CtSaDisplay_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CtSaDisplay
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CtSaDisplay, RTE_CONST, RTE_CONST) Rte_Inst_CtSaDisplay; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CtSaDisplay, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_PpDisplayState_DeDisplayBusState (FALSE)
# define Rte_InitValue_PpDisplayState_DeLightOnOffCounter (0U)
# define Rte_InitValue_PpDisplayState_DeOdometerValue (0U)
# define Rte_InitValue_PpDisplayState_DeOdometerWriteRequestPending (FALSE)
# define Rte_InitValue_PpLocalIgnitionState_DeIgnitionState (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtSaDisplay_PpDisplayState_DeDisplayBusState(P2VAR(boolean, AUTOMATIC, RTE_CTSADISPLAY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtSaDisplay_PpDisplayState_DeLightOnOffCounter(P2VAR(uint32, AUTOMATIC, RTE_CTSADISPLAY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtSaDisplay_PpDisplayState_DeOdometerValue(P2VAR(uint32, AUTOMATIC, RTE_CTSADISPLAY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtSaDisplay_PpDisplayState_DeOdometerWriteRequestPending(P2VAR(boolean, AUTOMATIC, RTE_CTSADISPLAY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtSaDisplay_PpLocalIgnitionState_DeIgnitionState(IdtDisplayIgnitionState data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtSaDisplay_PpDisplayStateIoHwAb_WriteChannel(IdtDioValueType value); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtSaDisplay_PplocalIgnitionStateIoHwAb_ReadChannel(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTSADISPLAY_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_PpDisplayState_DeDisplayBusState Rte_Read_CtSaDisplay_PpDisplayState_DeDisplayBusState
# define Rte_Read_PpDisplayState_DeLightOnOffCounter Rte_Read_CtSaDisplay_PpDisplayState_DeLightOnOffCounter
# define Rte_Read_PpDisplayState_DeOdometerValue Rte_Read_CtSaDisplay_PpDisplayState_DeOdometerValue
# define Rte_Read_PpDisplayState_DeOdometerWriteRequestPending Rte_Read_CtSaDisplay_PpDisplayState_DeOdometerWriteRequestPending


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PpLocalIgnitionState_DeIgnitionState Rte_Write_CtSaDisplay_PpLocalIgnitionState_DeIgnitionState


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_PpDisplayStateIoHwAb_WriteChannel Rte_Call_CtSaDisplay_PpDisplayStateIoHwAb_WriteChannel
# define Rte_Call_PplocalIgnitionStateIoHwAb_ReadChannel Rte_Call_CtSaDisplay_PplocalIgnitionStateIoHwAb_ReadChannel




# define CtSaDisplay_START_SEC_CODE
# include "CtSaDisplay_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApDisplayBusStateHandling
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeDisplayBusState> of PortPrototype <PpDisplayState>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpDisplayState_DeDisplayBusState(boolean *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_PpDisplayStateIoHwAb_WriteChannel(IdtDioValueType value)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PplocalIgnitionStateIoHwAb_ReadChannel(IdtDioValueType *value)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApDisplayBusStateHandling RCtApDisplayBusStateHandling
FUNC(void, CtSaDisplay_CODE) RCtApDisplayBusStateHandling(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApDisplayLightOnOffHandling
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeLightOnOffCounter> of PortPrototype <PpDisplayState>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpDisplayState_DeLightOnOffCounter(uint32 *data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApDisplayLightOnOffHandling RCtApDisplayLightOnOffHandling
FUNC(void, CtSaDisplay_CODE) RCtApDisplayLightOnOffHandling(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApDisplayOdometerValue
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeOdometerValue> of PortPrototype <PpDisplayState>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpDisplayState_DeOdometerValue(uint32 *data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApDisplayOdometerValue RCtApDisplayOdometerValue
FUNC(void, CtSaDisplay_CODE) RCtApDisplayOdometerValue(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApDisplayOdometerWriteRequestPending
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeOdometerWriteRequestPending> of PortPrototype <PpDisplayState>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpDisplayState_DeOdometerWriteRequestPending(boolean *data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApDisplayOdometerWriteRequestPending RCtApDisplayOdometerWriteRequestPending
FUNC(void, CtSaDisplay_CODE) RCtApDisplayOdometerWriteRequestPending(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApDisplayReadIgnitionSignal
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 200ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpLocalIgnitionState_DeIgnitionState(IdtDisplayIgnitionState data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_PplocalIgnitionStateIoHwAb_ReadChannel(IdtDioValueType *value)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApDisplayReadIgnitionSignal RCtApDisplayReadIgnitionSignal
FUNC(void, CtSaDisplay_CODE) RCtApDisplayReadIgnitionSignal(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CtSaDisplay_STOP_SEC_CODE
# include "CtSaDisplay_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTSADISPLAY_H */
