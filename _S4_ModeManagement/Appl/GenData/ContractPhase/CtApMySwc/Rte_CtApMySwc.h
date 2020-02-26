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
 *          File:  Rte_CtApMySwc.h
 *        Config:  C:/CanCollege/AUTOSAR4/_S4_ModeManagement/MyECU.dpa
 *     SW-C Type:  CtApMySwc
 *  Generated at:  Thu Jul 21 16:29:22 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtApMySwc> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTAPMYSWC_H
# define _RTE_CTAPMYSWC_H

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

# include "Rte_CtApMySwc_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CtApMySwc
{
  /* Data Handles section */
  P2VAR(Rte_DE_IdtDoorState, TYPEDEF, RTE_CTAPMYSWC_APPL_VAR) RCtApMySwcCode_PpDoorStateFrontLeft_DeDoorState; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Rte_DE_IdtDoorState, TYPEDEF, RTE_CTAPMYSWC_APPL_VAR) RCtApMySwcCode_PpDoorStateRearLeft_DeDoorState; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CtApMySwc, RTE_CONST, RTE_CONST) Rte_Inst_CtApMySwc; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CtApMySwc, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_PpDisplayState_DeDisplayBusState (FALSE)
# define Rte_InitValue_PpDoorStateFrontLeft_DeDoorState (0U)
# define Rte_InitValue_PpDoorStateFrontRight_DeDoorState (0U)
# define Rte_InitValue_PpDoorStateRearLeft_DeDoorState (0U)
# define Rte_InitValue_PpDoorStateRearRight_DeDoorState (0U)
# define Rte_InitValue_PpLightStateFront_DeLightState (0U)
# define Rte_InitValue_PpLightStateRear_DeLightState (0U)
# define Rte_InitValue_PpLocalIgnitionState_DeIgnitionState (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApMySwc_PpDoorStateFrontRight_DeDoorState(P2VAR(IdtDoorState, AUTOMATIC, RTE_CTAPMYSWC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApMySwc_PpDoorStateRearRight_DeDoorState(P2VAR(IdtDoorState, AUTOMATIC, RTE_CTAPMYSWC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApMySwc_PpLocalIgnitionState_DeIgnitionState(P2VAR(IdtDisplayIgnitionState, AUTOMATIC, RTE_CTAPMYSWC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApMySwc_PpDisplayState_DeDisplayBusState(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApMySwc_PpLightStateFront_DeLightState(IdtLightState data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApMySwc_PpLightStateRear_DeLightState(IdtLightState data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Mode_CtApMySwc_PpBswMRequestShutdown_BswM_MDGP_MdgBswMRequestShutdown(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_CtApMySwc_PpBswMRequestShutdown_BswM_MDGP_MdgBswMRequestShutdown(uint8 nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApMySwc_PpComMUserRequestCtApMySwc_RequestComMode(ComM_ModeType ComMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IRead_RCtApMySwcCode_PpDoorStateFrontLeft_DeDoorState() \
  (Rte_Inst_CtApMySwc->RCtApMySwcCode_PpDoorStateFrontLeft_DeDoorState->value)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IRead_RCtApMySwcCode_PpDoorStateRearLeft_DeDoorState() \
  (Rte_Inst_CtApMySwc->RCtApMySwcCode_PpDoorStateRearLeft_DeDoorState->value)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_PpDoorStateFrontRight_DeDoorState Rte_Read_CtApMySwc_PpDoorStateFrontRight_DeDoorState
# define Rte_Read_PpDoorStateRearRight_DeDoorState Rte_Read_CtApMySwc_PpDoorStateRearRight_DeDoorState
# define Rte_Read_PpLocalIgnitionState_DeIgnitionState Rte_Read_CtApMySwc_PpLocalIgnitionState_DeIgnitionState


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PpDisplayState_DeDisplayBusState Rte_Write_CtApMySwc_PpDisplayState_DeDisplayBusState
# define Rte_Write_PpLightStateFront_DeLightState Rte_Write_CtApMySwc_PpLightStateFront_DeLightState
# define Rte_Write_PpLightStateRear_DeLightState Rte_Write_CtApMySwc_PpLightStateRear_DeLightState


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_PpBswMRequestShutdown_BswM_MDGP_MdgBswMRequestShutdown Rte_Mode_CtApMySwc_PpBswMRequestShutdown_BswM_MDGP_MdgBswMRequestShutdown


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Switch_PpBswMRequestShutdown_BswM_MDGP_MdgBswMRequestShutdown Rte_Switch_CtApMySwc_PpBswMRequestShutdown_BswM_MDGP_MdgBswMRequestShutdown


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_PpComMUserRequestCtApMySwc_RequestComMode Rte_Call_CtApMySwc_PpComMUserRequestCtApMySwc_RequestComMode




# define CtApMySwc_START_SEC_CODE
# include "CtApMySwc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApMySwcCode
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 200ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpDoorStateFrontRight_DeDoorState(IdtDoorState *data)
 *   Std_ReturnType Rte_Read_PpDoorStateRearRight_DeDoorState(IdtDoorState *data)
 *   Std_ReturnType Rte_Read_PpLocalIgnitionState_DeIgnitionState(IdtDisplayIgnitionState *data)
 *
 *   Implicit S/R API:
 *   -----------------
 *   IdtDoorState Rte_IRead_RCtApMySwcCode_PpDoorStateFrontLeft_DeDoorState(void)
 *   IdtDoorState Rte_IRead_RCtApMySwcCode_PpDoorStateRearLeft_DeDoorState(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpDisplayState_DeDisplayBusState(boolean data)
 *   Std_ReturnType Rte_Write_PpLightStateFront_DeLightState(IdtLightState data)
 *   Std_ReturnType Rte_Write_PpLightStateRear_DeLightState(IdtLightState data)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_PpBswMRequestShutdown_BswM_MDGP_MdgBswMRequestShutdown(uint8 mode)
 *   Modes of Rte_ModeType_MdgBswMRequestShutdown:
 *   - RTE_MODE_MdgBswMRequestShutdown_BSWM_REQUESTSHUTDOWN_ACTIVE
 *   - RTE_MODE_MdgBswMRequestShutdown_BSWM_REQUESTSHUTDOWN_INACTIVE
 *   - RTE_TRANSITION_MdgBswMRequestShutdown
 *   uint8 Rte_Mode_PpBswMRequestShutdown_BswM_MDGP_MdgBswMRequestShutdown(void)
 *   Modes of Rte_ModeType_MdgBswMRequestShutdown:
 *   - RTE_MODE_MdgBswMRequestShutdown_BSWM_REQUESTSHUTDOWN_ACTIVE
 *   - RTE_MODE_MdgBswMRequestShutdown_BSWM_REQUESTSHUTDOWN_INACTIVE
 *   - RTE_TRANSITION_MdgBswMRequestShutdown
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PpComMUserRequestCtApMySwc_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApMySwcCode RCtApMySwcCode
FUNC(void, CtApMySwc_CODE) RCtApMySwcCode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApMySwcComM_ModeChange_FULL_COMM_Entry
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <COMM_FULL_COMMUNICATION> of ModeDeclarationGroupPrototype <currentMode> of PortPrototype <PpComMCurrentModeCtApMySwc>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpDisplayState_DeDisplayBusState(boolean data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApMySwcComM_ModeChange_FULL_COMM_Entry RCtApMySwcComM_ModeChange_FULL_COMM_Entry
FUNC(void, CtApMySwc_CODE) RCtApMySwcComM_ModeChange_FULL_COMM_Entry(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApMySwcComM_ModeChange_FULL_COMM_Exit
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on exiting of Mode <COMM_FULL_COMMUNICATION> of ModeDeclarationGroupPrototype <currentMode> of PortPrototype <PpComMCurrentModeCtApMySwc>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpDisplayState_DeDisplayBusState(boolean data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApMySwcComM_ModeChange_FULL_COMM_Exit RCtApMySwcComM_ModeChange_FULL_COMM_Exit
FUNC(void, CtApMySwc_CODE) RCtApMySwcComM_ModeChange_FULL_COMM_Exit(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CtApMySwc_STOP_SEC_CODE
# include "CtApMySwc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_ComM_UserRequest_E_MODE_LIMITATION (2U)

# define RTE_E_ComM_UserRequest_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTAPMYSWC_H */
