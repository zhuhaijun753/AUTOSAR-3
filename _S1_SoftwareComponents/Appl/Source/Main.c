#define Appl_Dem_CBReadData_Data_OdometerValue_OdometerValue_ReadData NULL_PTR

#include "Main.h"
#include "osek.h"

#include "BswM.h"
#include "ComM.h"
#include "ComM_EcuMBswM.h"

#include "Com.h"

#include "CanIf.h"

#include "Can.h"

#include "CanSM.h"
#include "CanSM_EcuM.h"

#include "CanNm.h"
#include "Nm.h"

#include "PduR.h"

#include "Dem.h"
#include "Det.h"

#include "Crc.h"
#include "NvM.h"
#include "Fee.h"
#include "Fls.h"
#include "MemIf.h"

#include "Rte_Main.h"
#include "Mcu.h"
#include "SchM_Fls.h"
#include "EcuM.h"

#include "Rte.h"

#include "Main.h"

void main(void)
{
	EcuM_Init();
}


TASK(Init_Task)
{
	EcuM_StartupTwo();
	TerminateTask();
}



void BswInitListOne(void)
{
	Mcu_Init(&McuModuleConfiguration);
	BswM_InitMemory();
	ComM_InitMemory();
	Com_InitMemory();
	Can_InitMemory();
	CanIf_InitMemory();
	CanNm_InitMemory();
	Nm_InitMemory();
	Dem_InitMemory();
	Det_InitMemory();
	PduR_InitMemory();
	Fls_InitMemory();
	Det_Init();

	/* CAN TP DET after execution of Hard Reset is filtered */
	detGlobalFilter[0].mApiId = 0x34;
	detGlobalFilter[0].mErrorId = 0x60;
	detGlobalFilter[0].mInstanceId = 0x00;
	detGlobalFilter[0].mModuleId = 0x0023;

	detGlobalFilter[1].mApiId = 0x05;
	detGlobalFilter[1].mErrorId = 0x46;
	detGlobalFilter[1].mInstanceId = 0x00;
	detGlobalFilter[1].mModuleId = 0x003C;
	detStatus.globalFilterActive = TRUE;

	Dem_PreInit(NULL_PTR);
}

void BswNvMReadAll(void)
{
	uint8 RequestResultPtr;

		NvM_ReadAll();
	{ 
		do
		{
		  Fls_MainFunction();
		  Fee_MainFunction();
		  Fls_MainFunction();
		  NvM_MainFunction();
		  NvM_GetErrorStatus (0,  &RequestResultPtr);
		} while ( RequestResultPtr == NVM_REQ_PENDING);
		if ( RequestResultPtr != NVM_REQ_OK )
		{
		  CANoeAPI_WriteString("NvM_ReadAll() not finished with NVM_REQ_OK!");
		}
	}

}



