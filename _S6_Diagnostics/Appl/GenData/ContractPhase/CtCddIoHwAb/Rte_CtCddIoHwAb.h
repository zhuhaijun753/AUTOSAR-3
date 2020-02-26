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
 *        Config:  C:/CanCollege/Autosar4/S6_Diagnostics/MyECU.dpa
 *     SW-C Type:  CtCddIoHwAb
 *  Generated at:  Wed Apr 27 16:01:51 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtCddIoHwAb> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTCDDIOHWAB_H
# define _RTE_CTCDDIOHWAB_H

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

# include "Rte_CtCddIoHwAb_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CtCddIoHwAb
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CtCddIoHwAb, RTE_CONST, RTE_CONST) Rte_Inst_CtCddIoHwAb; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CtCddIoHwAb, TYPEDEF, RTE_CONST) Rte_Instance;


# define CtCddIoHwAb_START_SEC_CODE
# include "CtCddIoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpDisplayState_ReadChannel
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadChannel> of PortPrototype <PpDisplayState>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpDisplayState_ReadChannel(IdtDioValueType *value)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpDisplayState_ReadChannel RCtCddIoHwAb_PpDisplayState_ReadChannel
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpDisplayState_ReadChannel(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpDisplayState_WriteChannel
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteChannel> of PortPrototype <PpDisplayState>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpDisplayState_WriteChannel(IdtDioValueType value)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpDisplayState_WriteChannel RCtCddIoHwAb_PpDisplayState_WriteChannel
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpDisplayState_WriteChannel(IdtDioValueType value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpDoorFrontLeft_ReadChannel
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadChannel> of PortPrototype <PpDoorFrontLeft>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpDoorFrontLeft_ReadChannel(IdtDioValueType *value)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpDoorFrontLeft_ReadChannel RCtCddIoHwAb_PpDoorFrontLeft_ReadChannel
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpDoorFrontLeft_ReadChannel(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpDoorFrontRight_ReadChannel
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadChannel> of PortPrototype <PpDoorFrontRight>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpDoorFrontRight_ReadChannel(IdtDioValueType *value)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpDoorFrontRight_ReadChannel RCtCddIoHwAb_PpDoorFrontRight_ReadChannel
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpDoorFrontRight_ReadChannel(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpInteriorLightFrontDEFECT_ReadChannel
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadChannel> of PortPrototype <PpInteriorLightFrontDEFECT>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpInteriorLightFrontDEFECT_ReadChannel(IdtDioValueType *value)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpInteriorLightFrontDEFECT_ReadChannel RCtCddIoHwAb_PpInteriorLightFrontDEFECT_ReadChannel
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpInteriorLightFrontDEFECT_ReadChannel(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpInteriorLightFront_WriteChannel
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteChannel> of PortPrototype <PpInteriorLightFront>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpInteriorLightFront_WriteChannel(IdtDioValueType value)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpInteriorLightFront_WriteChannel RCtCddIoHwAb_PpInteriorLightFront_WriteChannel
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpInteriorLightFront_WriteChannel(IdtDioValueType value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpLocalClamp15_ReadChannel
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadChannel> of PortPrototype <PpLocalClamp15>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpLocalClamp15_ReadChannel(IdtDioValueType *value)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpLocalClamp15_ReadChannel RCtCddIoHwAb_PpLocalClamp15_ReadChannel
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpLocalClamp15_ReadChannel(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTCDDIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtCddIoHwAb_PpLocalClamp15_WriteChannel
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteChannel> of PortPrototype <PpLocalClamp15>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void RCtCddIoHwAb_PpLocalClamp15_WriteChannel(IdtDioValueType value)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtCddIoHwAb_PpLocalClamp15_WriteChannel RCtCddIoHwAb_PpLocalClamp15_WriteChannel
FUNC(void, CtCddIoHwAb_CODE) RCtCddIoHwAb_PpLocalClamp15_WriteChannel(IdtDioValueType value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CtCddIoHwAb_STOP_SEC_CODE
# include "CtCddIoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTCDDIOHWAB_H */
