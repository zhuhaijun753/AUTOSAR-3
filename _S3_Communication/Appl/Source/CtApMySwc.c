/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CtApMySwc.c
 *        Config:  C:/CanCollege/Autosar4/S3_Communication/MyECU.dpa
 *     SW-C Type:  CtApMySwc
 *  Generated at:  Wed Apr 27 09:44:28 2016
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
 *
 * Enumeration Types:
 * ==================
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
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeDoorState> of PortPrototype <PpDoorStateFrontLeft>
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeDoorState> of PortPrototype <PpDoorStateFrontRight>
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeDoorState> of PortPrototype <PpDoorStateRearLeft>
 *   - triggered on DataReceivedEvent for DataElementPrototype <DeDoorState> of PortPrototype <PpDoorStateRearRight>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpDoorStateFrontRight_DeDoorState(IdtDoorState *data)
 *   Std_ReturnType Rte_Read_PpDoorStateRearRight_DeDoorState(IdtDoorState *data)
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
 *   Std_ReturnType Rte_Write_PpLightStateFront_DeLightState(IdtLightState data)
 *   Std_ReturnType Rte_Write_PpLightStateRear_DeLightState(IdtLightState data)
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
  }
  else
  {
    (void)Rte_Write_PpLightStateFront_DeLightState( CMLIGHTSTATE_LIGHTOFF );
    (void)Rte_Write_PpLightStateRear_DeLightState( CMLIGHTSTATE_LIGHTOFF );
  }

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
