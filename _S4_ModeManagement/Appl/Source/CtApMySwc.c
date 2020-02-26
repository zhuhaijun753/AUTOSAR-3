/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CtApMySwc.c
 *        Config:  C:/CanCollege/AUTOSAR4/_S4_ModeManagement/MyECU.dpa
 *     SW-C Type:  CtApMySwc
 *  Generated at:  Thu Jul 21 16:29:23 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  C-Code implementation template for SW-C <CtApMySwc>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * ComM_ModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * IdtDoorState
 *   boolean has the value space required to support the mathematical concept of 
 *      binary-valued logic: {true, false}.
 *
 * IdtLightState
 *   boolean has the value space required to support the mathematical concept of 
 *      binary-valued logic: {true, false}.
 *
 *********************************************************************************************************************/

#include "Rte_CtApMySwc.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define CtApMySwc_START_SEC_CONST_32BIT
#include "CtApMySwc_MemMap.h"
CONST(uint32, CtApMySwc_CONST)    CtApMySwc_LightOnOffDefault = 200;
#define CtApMySwc_STOP_SEC_CONST_32BIT
#include "CtApMySwc_MemMap.h"

#define CtApMySwc_START_SEC_VAR_NOINIT_32BIT
#include "CtApMySwc_MemMap.h"
static VAR(uint32, CtApMySwc_VAR_NOINIT) CtApMySwc_OccurenceCounter;
#define CtApMySwc_STOP_SEC_VAR_NOINIT_32BIT
#include "CtApMySwc_MemMap.h"

#include <memory.h>
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * boolean: Boolean (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ComM_ModeType: Enumeration of integer in interval [0...255] with enumerators
 *   COMM_NO_COMMUNICATION (0U)
 *   COMM_SILENT_COMMUNICATION (1U)
 *   COMM_FULL_COMMUNICATION (2U)
 * IdtDisplayIgnitionState: Enumeration of integer in interval [0...255] with enumerators
 *   BSWM_REQUESTSHUTDOWN_INACTIVE (0U)
 *   BSWM_REQUESTSHUTDOWN_ACTIVE (1U)
 * IdtDoorState: Enumeration of integer in interval [0...1] with enumerators
 *   CMDOORSTATE_DOORCLOSED (0U)
 *   CMDOORSTATE_DOOROPEN (1U)
 * IdtLightState: Enumeration of integer in interval [0...1] with enumerators
 *   CMLIGHTSTATE_LIGHTOFF (0U)
 *   CMLIGHTSTATE_LIGHTON (1U)
 *
 *********************************************************************************************************************/


#define CtApMySwc_START_SEC_CODE
#include "CtApMySwc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApMySwcCode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtApMySwc_CODE) RCtApMySwcCode(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApMySwcCode
 *********************************************************************************************************************/


  /* local variables used in this function */
  IdtDoorState    localDoorFrontRightState;
  IdtDoorState    localRearRightDoorState;
  IdtDisplayIgnitionState localIgnitionState;
  
  /* Read signals from doors, explicit and implicit read used, for showing different access possibilities */
  /* No difference within the access to the door state from front door and rear door apply, so front doors are intra ECU */ 
  /* communication and rear doors are inter ECU communication (CAN). */
  
  /* read doors with explicit / direct access*/
  (void)Rte_Read_PpDoorStateFrontRight_DeDoorState(&localDoorFrontRightState);
  (void)Rte_Read_PpDoorStateRearRight_DeDoorState(&localRearRightDoorState);
     
  /* Check if any door is open. */
  if ( ( CMDOORSTATE_DOOROPEN == localDoorFrontRightState ) || \
	   ( CMDOORSTATE_DOOROPEN == Rte_IRead_RCtApMySwcCode_PpDoorStateFrontLeft_DeDoorState() ) || \
	   ( CMDOORSTATE_DOOROPEN == localRearRightDoorState )  || \
	   ( CMDOORSTATE_DOOROPEN == Rte_IRead_RCtApMySwcCode_PpDoorStateRearLeft_DeDoorState() ) )
  {	
	/* As the values for the defines CMDOORSTATE_DOOROPEN/CMDOORSTATE_DOORCLOSED */ 
	/* and CMLIGHTSTATE_LIGHTON/CMLIGHTSTATE_LIGHTOFF might change due to configuration in DaVinci */
    /* do not just forward the read values, but use the given defines. */
    /* This decouples the SWCs from each other. */
    (void)Rte_Write_PpLightStateFront_DeLightState( CMLIGHTSTATE_LIGHTON );
    (void)Rte_Write_PpLightStateRear_DeLightState( CMLIGHTSTATE_LIGHTON );
	(void)Rte_Call_PpComMUserRequestCtApMySwc_RequestComMode(COMM_FULL_COMMUNICATION);
  }
  else
  {
    (void)Rte_Write_PpLightStateFront_DeLightState( CMLIGHTSTATE_LIGHTOFF );
    (void)Rte_Write_PpLightStateRear_DeLightState( CMLIGHTSTATE_LIGHTOFF );
	(void)Rte_Call_PpComMUserRequestCtApMySwc_RequestComMode(COMM_NO_COMMUNICATION);
  }

  {
	/* Shutdown based on ignition switch, CtApMySwc as Mode Manager */
	(void)Rte_Read_PpLocalIgnitionState_DeIgnitionState(&localIgnitionState);
	if ( CIgnitionOff == localIgnitionState)
	{
      /* Hand over the correct Mode Declaration Group define (RTE_MODE_MdgBswMRequestShutdown_BSWM_REQUESTSHUTDOWN_ACTIVE).
	  /* Please note this define has to be from rte_type.h, please do NOT use the definition from the Rte_CtApMySwc_type.h 
	  /* which originates from the CompuMethods and is intended for Sender Receiver communication only. 
	  /* Due to technical reasons, these values may be different and using BSWM_REQUESTSHUTDOWN_ACTIVE will not work */
      (void)Rte_Switch_PpBswMRequestShutdown_BswM_MDGP_MdgBswMRequestShutdown(RTE_MODE_MdgBswMRequestShutdown_BSWM_REQUESTSHUTDOWN_ACTIVE);
	}	
  }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApMySwcComM_ModeChange_FULL_COMM_Entry_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtApMySwc_CODE) RCtApMySwcComM_ModeChange_FULL_COMM_Entry(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApMySwcComM_ModeChange_FULL_COMM_Entry
 *********************************************************************************************************************/

  /* Just forward the entering of FULL_COMM to display. */
	(void)Rte_Write_PpDisplayState_DeDisplayBusState(CDisplayOn);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApMySwcComM_ModeChange_FULL_COMM_Exit_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtApMySwc_CODE) RCtApMySwcComM_ModeChange_FULL_COMM_Exit(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApMySwcComM_ModeChange_FULL_COMM_Exit
 *********************************************************************************************************************/

  /* Just forward the entering of NO_COMM to display. */
	(void)Rte_Write_PpDisplayState_DeDisplayBusState(CDisplayOff);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtApMySwc_STOP_SEC_CODE
#include "CtApMySwc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0777:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

   MD_Rte_0779:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

*/
