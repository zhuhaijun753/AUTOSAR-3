/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CtApMySwc.c
 *        Config:  C:/CanCollege/AUTOSAR4/_S6_Diagnostics/MyECU.dpa
 *     SW-C Type:  CtApMySwc
 *  Generated at:  Tue Jul 26 11:25:28 2016
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
 * Dcm_NegativeResponseCodeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_OpStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_OperationCycleStateType
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
 * NvM_RequestResultType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * NvM_ServiceIdType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
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
 * dtRef_const_VOID: DataReference
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ComM_ModeType: Enumeration of integer in interval [0...255] with enumerators
 *   COMM_NO_COMMUNICATION (0U)
 *   COMM_SILENT_COMMUNICATION (1U)
 *   COMM_FULL_COMMUNICATION (2U)
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_E_POSITIVERESPONSE (0U)
 *   DCM_E_GENERALREJECT (16U)
 *   DCM_E_SERVICENOTSUPPORTED (17U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
 *   DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
 *   DCM_E_RESPONSETOOLONG (20U)
 *   DCM_E_BUSYREPEATREQUEST (33U)
 *   DCM_E_CONDITIONSNOTCORRECT (34U)
 *   DCM_E_REQUESTSEQUENCEERROR (36U)
 *   DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
 *   DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
 *   DCM_E_REQUESTOUTOFRANGE (49U)
 *   DCM_E_SECURITYACCESSDENIED (51U)
 *   DCM_E_INVALIDKEY (53U)
 *   DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
 *   DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
 *   DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
 *   DCM_E_TRANSFERDATASUSPENDED (113U)
 *   DCM_E_GENERALPROGRAMMINGFAILURE (114U)
 *   DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
 *   DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING (120U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
 *   DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
 *   DCM_E_RPMTOOHIGH (129U)
 *   DCM_E_RPMTOOLOW (130U)
 *   DCM_E_ENGINEISRUNNING (131U)
 *   DCM_E_ENGINEISNOTRUNNING (132U)
 *   DCM_E_ENGINERUNTIMETOOLOW (133U)
 *   DCM_E_TEMPERATURETOOHIGH (134U)
 *   DCM_E_TEMPERATURETOOLOW (135U)
 *   DCM_E_VEHICLESPEEDTOOHIGH (136U)
 *   DCM_E_VEHICLESPEEDTOOLOW (137U)
 *   DCM_E_THROTTLE_PEDALTOOHIGH (138U)
 *   DCM_E_THROTTLE_PEDALTOOLOW (139U)
 *   DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
 *   DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
 *   DCM_E_BRAKESWITCH_NOTCLOSED (143U)
 *   DCM_E_SHIFTERLEVERNOTINPARK (144U)
 *   DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
 *   DCM_E_VOLTAGETOOHIGH (146U)
 *   DCM_E_VOLTAGETOOLOW (147U)
 *   DCM_E_VMSCNC_0 (240U)
 *   DCM_E_VMSCNC_1 (241U)
 *   DCM_E_VMSCNC_2 (242U)
 *   DCM_E_VMSCNC_3 (243U)
 *   DCM_E_VMSCNC_4 (244U)
 *   DCM_E_VMSCNC_5 (245U)
 *   DCM_E_VMSCNC_6 (246U)
 *   DCM_E_VMSCNC_7 (247U)
 *   DCM_E_VMSCNC_8 (248U)
 *   DCM_E_VMSCNC_9 (249U)
 *   DCM_E_VMSCNC_A (250U)
 *   DCM_E_VMSCNC_B (251U)
 *   DCM_E_VMSCNC_C (252U)
 *   DCM_E_VMSCNC_D (253U)
 *   DCM_E_VMSCNC_E (254U)
 * Dcm_OpStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_INITIAL (0U)
 *   DCM_PENDING (1U)
 *   DCM_CANCEL (2U)
 *   DCM_FORCE_RCRRP_OK (3U)
 *   DCM_FORCE_RCRRP_NOT_OK (64U)
 * Dem_OperationCycleStateType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_CYCLE_STATE_START (0U)
 *   DEM_CYCLE_STATE_END (1U)
 * IdtDisplayIgnitionState: Enumeration of integer in interval [0...255] with enumerators
 *   BSWM_REQUESTSHUTDOWN_INACTIVE (0U)
 *   BSWM_REQUESTSHUTDOWN_ACTIVE (1U)
 * IdtDoorState: Enumeration of integer in interval [0...1] with enumerators
 *   CMDOORSTATE_DOORCLOSED (0U)
 *   CMDOORSTATE_DOOROPEN (1U)
 * IdtLightState: Enumeration of integer in interval [0...1] with enumerators
 *   CMLIGHTSTATE_LIGHTOFF (0U)
 *   CMLIGHTSTATE_LIGHTON (1U)
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 * NvM_ServiceIdType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_READ_BLOCK (6U)
 *   NVM_WRITE_BLOCK (7U)
 *   NVM_RESTORE_BLOCK_DEFAULTS (8U)
 *   NVM_ERASE_BLOCK (9U)
 *   NVM_INVALIDATE_NV_BLOCK (11U)
 *   NVM_READ_ALL (12U)
 *
 * Array Types:
 * ============
 * DataArray_Type_4: Array with 4 element(s) of type uint8
 * Dcm_Data4ByteType: Array with 4 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_PimLightOnOffCounter(void)
 *   uint32 *Rte_Pim_PimOdometer(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   uint32 Rte_CData_CalOdometer(void)
 *
 *********************************************************************************************************************/


#define CtApMySwc_START_SEC_CODE
#include "CtApMySwc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_OccurrenceCounter_OccurenceCounter_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_OccurrenceCounter_OccurenceCounter>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_OccurrenceCounter_OccurenceCounter_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_OccurrenceCounter_OccurenceCounter_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_OccurrenceCounter_OccurenceCounter_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CtApMySwc_CODE) CBReadData_OccurrenceCounter_OccurenceCounter_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CTAPMYSWC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_OccurrenceCounter_OccurenceCounter_ReadData (returns application error)
 *********************************************************************************************************************/
   /* This function is always called if a DEM event changes to status FAILED. */

   /* Increase error occurance counter and write it to Data. */
   CtApMySwc_OccurenceCounter++;
   /*
   *(uint32 *)Data = CtApMySwc_OccurenceCounter;
   */
   memcpy(Data, &CtApMySwc_OccurenceCounter, sizeof(CtApMySwc_OccurenceCounter));

   return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_OdometerValue_OdometerValue_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_OdometerValue_OdometerValue>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExArOdometer(void)
 *   void Rte_Exit_ExArOdometer(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_OdometerValue_OdometerValue_ReadData(uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_OdometerValue_OdometerValue_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_OdometerValue_OdometerValue_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CtApMySwc_CODE) CBReadData_OdometerValue_OdometerValue_ReadData(P2VAR(uint8, AUTOMATIC, RTE_CTAPMYSWC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_OdometerValue_OdometerValue_ReadData (returns application error)
 *********************************************************************************************************************/

	/* This function is always called if a DEM event changes to status FAILED. */

	Rte_Enter_ExArOdometer();

	/* Write current Odometer value to Data. */
	/*
	*(uint32 *)Data = (*Rte_Pim_PimOdometer());
	*/
	memcpy(Data, Rte_Pim_PimOdometer(), sizeof(*Rte_Pim_PimOdometer()));

	Rte_Exit_ExArOdometer();

	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CtApMySwc_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpDisplayState_DeLightOnOffCounter(uint32 data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_OpCycle_IgnitionCycle_SetOperationCycleState(Dem_OperationCycleStateType CycleState)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_OperationCycle_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExArLightOnOffCounter(void)
 *   void Rte_Exit_ExArLightOnOffCounter(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CtApMySwc_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtApMySwc_CODE) CtApMySwc_Init(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CtApMySwc_Init
 *********************************************************************************************************************/

  uint32 localLightOnOffCounter;
  /* INFO: The return value Std_ReturnType is mostly not evaluated within the code to simplify the example */
  /*       For real projects the retunr value has to be evaluted! */


  /* Set operation cylce to IGNITION, as the reported errors are only regarded within this cycle */
  (void)Rte_Call_OpCycle_IgnitionCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);

  /* PimLightOnOffCounter has be set by NvM, report current state to Display SWC */
  Rte_Enter_ExArLightOnOffCounter();
  localLightOnOffCounter = *Rte_Pim_PimLightOnOffCounter();
  Rte_Exit_ExArLightOnOffCounter();
  (void)Rte_Write_PpDisplayState_DeLightOnOffCounter(localLightOnOffCounter);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExArLightOnOffCounter(void)
 *   void Rte_Exit_ExArLightOnOffCounter(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_E_NOT_OK
 *   RTE_E_DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_E_PENDING
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CtApMySwc_CODE) DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPMYSWC_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value>
 *
 **********************************************************************************************************************
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExArLightOnOffCounter(void)
 *   void Rte_Exit_ExArLightOnOffCounter(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_E_NOT_OK
 *   RTE_E_DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_E_PENDING
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CtApMySwc_CODE) DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CTAPMYSWC_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_ReadData (returns application error)
 *********************************************************************************************************************/

	Rte_Enter_ExArLightOnOffCounter();

	/* Current LightOnOffCounter is written to data.*/
	/*
	(Data[0]) = (uint8)(*Rte_Pim_PimLightOnOffCounter() >>  0);
	(Data[1]) = (uint8)(*Rte_Pim_PimLightOnOffCounter() >>  8);
	(Data[2]) = (uint8)(*Rte_Pim_PimLightOnOffCounter() >> 16);
	(Data[3]) = (uint8)(*Rte_Pim_PimLightOnOffCounter() >> 24);
	*/
	memcpy(Data, Rte_Pim_PimLightOnOffCounter(), sizeof(*Rte_Pim_PimLightOnOffCounter()));
	Rte_Exit_ExArLightOnOffCounter();



	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PpNvMLightOnOffCtApMySwc_WriteBlock(dtRef_const_VOID SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExArLightOnOffCounter(void)
 *   void Rte_Exit_ExArLightOnOffCounter(void)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_E_NOT_OK
 *   RTE_E_DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_E_PENDING
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CtApMySwc_CODE) DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CTAPMYSWC_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CTAPMYSWC_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Diag_RWDI_LightOnOffCounter_LightOnOffCounter_Value_WriteData (returns application error)
 *********************************************************************************************************************/
	/* Corrent length of request is already checked by DCM. */

	uint32 localNewLightOnOffCounter;

	localNewLightOnOffCounter = *(uint32 *)Data;

	/* New value is is written to LightOnOffCounter . */
	Rte_Enter_ExArLightOnOffCounter();
	*Rte_Pim_PimLightOnOffCounter() = localNewLightOnOffCounter;
	Rte_Exit_ExArLightOnOffCounter();

	/* Forward new value to Display and also store it to NV data. */
	(void)Rte_Write_PpDisplayState_DeLightOnOffCounter(localNewLightOnOffCounter);
	(void)Rte_Call_PpNvMLightOnOffCtApMySwc_WriteBlock(NULL_PTR);

	return RTE_E_OK;


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: PpNvMNotifyJobFinishedOdometerCtApMySwc_JobFinished
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <JobFinished> of PortPrototype <PpNvMNotifyJobFinishedOdometerCtApMySwc>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpDisplayState_DeOdometerWriteRequestPending(boolean data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PpNvMNotifyJobFinishedOdometerCtApMySwc_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PpNvMNotifyJobFinishedOdometerCtApMySwc_JobFinished_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtApMySwc_CODE) PpNvMNotifyJobFinishedOdometerCtApMySwc_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PpNvMNotifyJobFinishedOdometerCtApMySwc_JobFinished
 *********************************************************************************************************************/
	if (JobResult == NVM_REQ_OK)
	{
		/* Inform Display to release pending write request */
		(void)Rte_Write_PpDisplayState_DeOdometerWriteRequestPending(CWriteReqNotPending);
	}


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
 *   Std_ReturnType Rte_Write_PpDisplayState_DeLightOnOffCounter(uint32 data)
 *   Std_ReturnType Rte_Write_PpDisplayState_DeOdometerValue(uint32 data)
 *   Std_ReturnType Rte_Write_PpDisplayState_DeOdometerWriteRequestPending(boolean data)
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
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   IdtDoorState Rte_IrvRead_RCtApMySwcCode_IrvDoorStateOld(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_RCtApMySwcCode_IrvDoorStateOld(IdtDoorState data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PpComMUserRequestCtApMySwc_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_PpNvMLightOnOffCtApMySwc_WriteBlock(dtRef_const_VOID SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_PpNvMOdometerCtApMySwc_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_PpNvMOdometerCtApMySwc_WriteBlock(dtRef_const_VOID SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExArLightOnOffCounter(void)
 *   void Rte_Exit_ExArLightOnOffCounter(void)
 *   void Rte_Enter_ExArOdometer(void)
 *   void Rte_Exit_ExArOdometer(void)
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
  uint32          localOdometer;
  uint32          localLightOnOffCounter;
  IdtDoorState    localDoorFrontRightState;
  IdtDoorState    localRearRightDoorState;
  IdtDoorState    localDoorNewState;
  IdtDisplayIgnitionState localIgnitionState;
  Std_ReturnType  localret;
  NvM_RequestResultType		NvBlockOdometerErrorStatus;

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
    /* Store current door state for later evalution. */
    localDoorNewState = CDoorOpen;
	
	
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
    /* Store current door state for later evalution. */
    localDoorNewState = CDoorClosed;

    (void)Rte_Write_PpLightStateFront_DeLightState( CMLIGHTSTATE_LIGHTOFF );
    (void)Rte_Write_PpLightStateRear_DeLightState( CMLIGHTSTATE_LIGHTOFF );
	(void)Rte_Call_PpComMUserRequestCtApMySwc_RequestComMode(COMM_NO_COMMUNICATION);
  }

  /* Evaluate if door state has been changed since last processing of this function and if the new state is door open. */
  if ( ( localDoorNewState != Rte_IrvRead_RCtApMySwcCode_IrvDoorStateOld() ) && ( localDoorNewState == CDoorOpen ) )
  {
    /* Increase the lightonoff counter and store it to non volatile memory. */

    Rte_Enter_ExArLightOnOffCounter();
    (*Rte_Pim_PimLightOnOffCounter())++;
	localLightOnOffCounter  = *Rte_Pim_PimLightOnOffCounter();
	Rte_Exit_ExArLightOnOffCounter();

	(void)Rte_Call_PpNvMLightOnOffCtApMySwc_WriteBlock(NULL_PTR);
	(void)Rte_Write_PpDisplayState_DeLightOnOffCounter(localLightOnOffCounter);
  }
  /* store current state for comparing in next call, using inter runnable variable */
  Rte_IrvWrite_RCtApMySwcCode_IrvDoorStateOld(localDoorNewState);

  Rte_Enter_ExArOdometer();

  /* Handle Odometer value, which is increased by one each function call. */
  (*Rte_Pim_PimOdometer())++;
  localOdometer = *Rte_Pim_PimOdometer();

  Rte_Exit_ExArOdometer();

  /* Update display each function call. */
  (void)Rte_Write_PpDisplayState_DeOdometerValue(localOdometer);
  /* Get actual ErrorState of the Odometer NvM block */
  (void)Rte_Call_PpNvMOdometerCtApMySwc_GetErrorStatus(&NvBlockOdometerErrorStatus);

  if ((NVM_REQ_PENDING != NvBlockOdometerErrorStatus) && ((localOdometer % 32) == 0x00))
  {
    /* Write odometer value to NV data each 32rd function call. */               
    localret = Rte_Call_PpNvMOdometerCtApMySwc_WriteBlock(NULL_PTR);

    if (localret != E_OK)
    {
      CANoeAPI_WriteString("Rte_Call_PP_NvM_AC3_SRBS_Srv_Odometer_MySWC_WriteBlock not accepted!");
    }
    else
    {
      /* Inform Display to show pending write request */
      (void)Rte_Write_PpDisplayState_DeOdometerWriteRequestPending(CWriteReqOnPending);
    }
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



/***  Start of saved code (symbol: runnable implementation:Dcm_DcmGetExtendedDataRecordByDTC)  **************/


/***  End of saved code  ************************************************************************************/

/***  Start of saved code (symbol: runnable implementation:Dcm_DcmClearDTC)  ********************************/


/***  End of saved code  ************************************************************************************/

/***  Start of saved code (symbol: documentation area:Dcm_DcmGetExtendedDataRecordByDTC_doc)  ***************/


/***  End of saved code  ************************************************************************************/

/***  Start of saved code (symbol: documentation area:Dcm_DcmClearDTC_doc)  *********************************/


/***  End of saved code  ************************************************************************************/

/***  Start of saved code (symbol: runnable implementation:Dcm_DcmEnableDTCSetting)  ************************/


/***  End of saved code  ************************************************************************************/

/***  Start of saved code (symbol: documentation area:Dcm_DcmEnableDTCSetting_doc)  *************************/


/***  End of saved code  ************************************************************************************/

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
