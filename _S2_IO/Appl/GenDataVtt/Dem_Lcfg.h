/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Dem
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dem_Lcfg.h
 *   Generation Time: 2016-04-04 09:07:27
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/


/* configuration, interrupt handling and callback headers use different names
 * for the multiple inclusion protection define, shown in this example. The
 * appropriate names for these files can be taken from this list:
 *
 * Dem_Cfg.h:     DEM_CFG_H
 * Dem_Lcfg.h:    DEM_LCFG_H
 * Dem_PBcfg.h:   DEM_PBFG_H
 */
#if !defined (DEM_LCFG_H)
# define DEM_LCFG_H

/**********************************************************************************************************************
  MISRA JUSTIFICATIONS
**********************************************************************************************************************/

/* PRQA S 0777 EOF */ /* MD_DEM_5.1 */                                          /* External identifier does not differ in 32 significant characters */
/* PRQA S 0779 EOF */ /* MD_DEM_5.1 */                                          /* Identifier does not differ in 32 significant characters */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */                                      /* Number of macro definitions exceeds 1024 - program is non-conforming -- caused by #include'd files. */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CPCDataSwitches  Dem_C Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define DEM_C_CALLBACKCLEAREVENTALLOWED                               STD_OFF  /**< Deactivateable: 'Dem_C_CallbackClearEventAllowed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_CALLBACKDTCSTATUSCHANGED                                STD_OFF  /**< Deactivateable: 'Dem_C_CallbackDtcStatusChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_CALLBACKGETFDC                                          STD_OFF  /**< Deactivateable: 'Dem_C_CallbackGetFdc' Reason: '(DEM_CFG_SUPPORT_DEBOUNCE_MONITORINTERNAL == STD_OFF)' */
#define DEM_C_CALLBACKJ1939DTCSTATUSCHANGED                           STD_OFF  /**< Deactivateable: 'Dem_C_CallbackJ1939DtcStatusChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_COMMITBUFFER                                            STD_ON
#define DEM_C_CONFIGURATIONID                                         STD_ON
#define DEM_C_CYCLEIDTABLE                                            STD_ON
#define DEM_C_ENDSONINITOFCYCLEIDTABLE                                STD_OFF  /**< Deactivateable: 'Dem_C_CycleIdTable.EndsOnInit' Reason: 'no DemOperationCycle/DemOperationCycleAutomaticEnd defined or all defined parameters are 'false'' */
#define DEM_C_OPCYCLETYPEOFCYCLEIDTABLE                               STD_ON
#define DEM_C_USEDFORAGINGOFCYCLEIDTABLE                              STD_ON
#define DEM_C_DATACOLLECTIONTABLE                                     STD_ON
#define DEM_C_COLLECTIONSIZEOFDATACOLLECTIONTABLE                     STD_ON
#define DEM_C_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE  STD_OFF  /**< Deactivateable: 'Dem_C_DataCollectionTable.DataElementTableCol2ElmtIndEndIdx' Reason: 'the optional indirection is deactivated because DataElementTableCol2ElmtIndUsedOfDataCollectionTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_C_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE STD_OFF  /**< Deactivateable: 'Dem_C_DataCollectionTable.DataElementTableCol2ElmtIndStartIdx' Reason: 'the optional indirection is deactivated because DataElementTableCol2ElmtIndUsedOfDataCollectionTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_C_DATAELEMENTTABLECOL2ELMTINDUSEDOFDATACOLLECTIONTABLE    STD_OFF  /**< Deactivateable: 'Dem_C_DataCollectionTable.DataElementTableCol2ElmtIndUsed' Reason: 'the optional indirection is deactivated because DataElementTableCol2ElmtIndUsedOfDataCollectionTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_C_DIDOFFSETFASTOFDATACOLLECTIONTABLE                      STD_OFF  /**< Deactivateable: 'Dem_C_DataCollectionTable.DidOffsetFast' Reason: '(DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_FAST == STD_OFF) && (DEM_CFG_SUPPORT_TIME_SERIES_PAST_FAST == STD_OFF)' */
#define DEM_C_DIDOFFSETNORMALOFDATACOLLECTIONTABLE                    STD_OFF  /**< Deactivateable: 'Dem_C_DataCollectionTable.DidOffsetNormal' Reason: '(DEM_CFG_SUPPORT_TIME_SERIES_FUTURE_NORMAL == STD_OFF) && (DEM_CFG_SUPPORT_TIME_SERIES_PAST_NORMAL == STD_OFF)' */
#define DEM_C_IDNUMBEROFDATACOLLECTIONTABLE                           STD_ON
#define DEM_C_STORAGEKINDOFDATACOLLECTIONTABLE                        STD_ON
#define DEM_C_UPDATEOFDATACOLLECTIONTABLE                             STD_ON
#define DEM_C_DATACOLLECTIONTABLEEDR2COLLIND                          STD_OFF  /**< Deactivateable: 'Dem_C_DataCollectionTableEdr2CollInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_DATACOLLECTIONTABLEFFM2COLLIND                          STD_OFF  /**< Deactivateable: 'Dem_C_DataCollectionTableFfm2CollInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_DATACOLLECTIONTABLEJ19392COLLIND                        STD_OFF  /**< Deactivateable: 'Dem_C_DataCollectionTableJ19392CollInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_DATACOLLECTIONTABLEPID2COLLIND                          STD_OFF  /**< Deactivateable: 'Dem_C_DataCollectionTablePid2CollInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_DATAELEMENTTABLE                                        STD_ON
#define DEM_C_ELEMENTKINDOFDATAELEMENTTABLE                           STD_ON
#define DEM_C_ELEMENTSIZEOFDATAELEMENTTABLE                           STD_ON
#define DEM_C_READDATAFUNCOFDATAELEMENTTABLE                          STD_ON
#define DEM_C_DATAELEMENTTABLECOL2ELMTIND                             STD_OFF  /**< Deactivateable: 'Dem_C_DataElementTableCol2ElmtInd' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_DEBOUNCEHIRESTABLE                                      STD_OFF  /**< Deactivateable: 'Dem_C_DebounceHiResTable' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_DEBOUNCELORESTABLE                                      STD_OFF  /**< Deactivateable: 'Dem_C_DebounceLoResTable' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_DEBOUNCETABLE                                           STD_ON
#define DEM_C_DEBOUNCECONTINUOUSOFDEBOUNCETABLE                       STD_ON
#define DEM_C_DECREMENTSTEPSIZEOFDEBOUNCETABLE                        STD_ON
#define DEM_C_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE                   STD_ON
#define DEM_C_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE                    STD_ON
#define DEM_C_FAILTIMERCYCLESOFDEBOUNCETABLE                          STD_ON
#define DEM_C_FAILEDTHRESHOLDOFDEBOUNCETABLE                          STD_ON
#define DEM_C_INCREMENTSTEPSIZEOFDEBOUNCETABLE                        STD_ON
#define DEM_C_JUMPDOWNOFDEBOUNCETABLE                                 STD_ON
#define DEM_C_JUMPDOWNVALUEOFDEBOUNCETABLE                            STD_ON
#define DEM_C_JUMPUPOFDEBOUNCETABLE                                   STD_ON
#define DEM_C_JUMPUPVALUEOFDEBOUNCETABLE                              STD_ON
#define DEM_C_MASKEDBITSOFDEBOUNCETABLE                               STD_ON
#define DEM_C_PASSTIMERCYCLESOFDEBOUNCETABLE                          STD_ON
#define DEM_C_PASSEDTHRESHOLDOFDEBOUNCETABLE                          STD_ON
#define DEM_C_PRECONFIRMEDTHRESHOLDOFDEBOUNCETABLE                    STD_OFF  /**< Deactivateable: 'Dem_C_DebounceTable.PreconfirmedThreshold' Reason: 'DemDebounceCounterPreconfirmedThreshold is not required' */
#define DEM_C_STORAGEOFDEBOUNCETABLE                                  STD_ON
#define DEM_C_STORAGETHRESHOLDOFDEBOUNCETABLE                         STD_OFF  /**< Deactivateable: 'Dem_C_DebounceTable.StorageThreshold' Reason: 'DemEventDebounceCounterStorageThreshold is not required. (due Parameter DemGeneral/DemTypeOfFreezeFrameRecordNumeration != DEM_FF_RECNUM_CONFIGURED)' */
#define DEM_C_STORAGETIMERCYCLESOFDEBOUNCETABLE                       STD_OFF  /**< Deactivateable: 'Dem_C_DebounceTable.StorageTimerCycles' Reason: 'DemDebounceTimeStorageThreshold is not required.  (due Parameter DemGeneral/DemTypeOfFreezeFrameRecordNumeration != DEM_FF_RECNUM_CONFIGURED)' */
#define DEM_C_DTCTABLE                                                STD_ON
#define DEM_C_DTCSEVERITYOFDTCTABLE                                   STD_ON
#define DEM_C_FUNCTIONALUNITOFDTCTABLE                                STD_ON
#define DEM_C_IMMEDIATENVSTORAGEOFDTCTABLE                            STD_ON
#define DEM_C_J1939DTCOFDTCTABLE                                      STD_OFF  /**< Deactivateable: 'Dem_C_DtcTable.J1939Dtc' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_C_J1939NODEIDINDENDIDXOFDTCTABLE                          STD_OFF  /**< Deactivateable: 'Dem_C_DtcTable.J1939NodeIdIndEndIdx' Reason: '(DEM_CFG_SUPPORT_J1939_NODES == STD_OFF)' */
#define DEM_C_J1939NODEIDINDSTARTIDXOFDTCTABLE                        STD_OFF  /**< Deactivateable: 'Dem_C_DtcTable.J1939NodeIdIndStartIdx' Reason: '(DEM_CFG_SUPPORT_J1939_NODES == STD_OFF)' */
#define DEM_C_J1939NODEIDINDUSEDOFDTCTABLE                            STD_OFF  /**< Deactivateable: 'Dem_C_DtcTable.J1939NodeIdIndUsed' Reason: '(DEM_CFG_SUPPORT_J1939_NODES == STD_OFF)' */
#define DEM_C_OBDDTCOFDTCTABLE                                        STD_OFF  /**< Deactivateable: 'Dem_C_DtcTable.ObdDtc' Reason: '(DEM_CFG_SUPPORT_OBDII == STD_OFF)' */
#define DEM_C_UDSDTCOFDTCTABLE                                        STD_ON
#define DEM_C_ENABLECONDITIONTABLE                                    STD_OFF  /**< Deactivateable: 'Dem_C_EnableConditionTable' Reason: '(DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_OFF)' */
#define DEM_C_EVENTAVAILABLE                                          STD_ON
#define DEM_C_EVENTAVAILABLEINVARIANT                                 STD_ON
#define DEM_C_EVENTDATACHANGED                                        STD_OFF  /**< Deactivateable: 'Dem_C_EventDataChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_EVENTDEBOUNCEVALUE                                      STD_ON
#define DEM_C_EVENTINTERNALSTATUS                                     STD_ON
#define DEM_C_EVENTQUEUE                                              STD_OFF  /**< Deactivateable: 'Dem_C_EventQueue' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_EVENTQUEUESTATUS                                        STD_ON
#define DEM_C_EVENTSTATUSCHANGED                                      STD_OFF  /**< Deactivateable: 'Dem_C_EventStatusChanged' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_EVENTTABLE                                              STD_ON
#define DEM_C_AGINGALLOWEDOFEVENTTABLE                                STD_ON
#define DEM_C_AGINGCYCLECOUNTERTHRESHOLDOFEVENTTABLE                  STD_ON
#define DEM_C_AGINGCYCLEIDOFEVENTTABLE                                STD_ON
#define DEM_C_CALLBACKCLEAREVENTALLOWEDIDXOFEVENTTABLE                STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.CallbackClearEventAllowedIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_CALLBACKCLEAREVENTALLOWEDUSEDOFEVENTTABLE               STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.CallbackClearEventAllowedUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_CALLBACKGETFDCIDXOFEVENTTABLE                           STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.CallbackGetFdcIdx' Reason: '(DEM_CFG_SUPPORT_DEBOUNCE_MONITORINTERNAL == STD_OFF)' */
#define DEM_C_DEBOUNCETABLEIDXOFEVENTTABLE                            STD_ON
#define DEM_C_DTCTABLEIDXOFEVENTTABLE                                 STD_ON
#define DEM_C_ENABLECONDITIONTABLEIDXOFEVENTTABLE                     STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.EnableConditionTableIdx' Reason: '(DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_OFF)' */
#define DEM_C_EVENTDATACHANGEDIDXOFEVENTTABLE                         STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.EventDataChangedIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_EVENTDESTINATIONOFEVENTTABLE                            STD_ON
#define DEM_C_EVENTFAILURECYCLECOUNTERTHRESHOLDOFEVENTTABLE           STD_ON
#define DEM_C_EVENTFAILURECYCLEIDOFEVENTTABLE                         STD_ON
#define DEM_C_EVENTKINDOFEVENTTABLE                                   STD_ON
#define DEM_C_EVENTLATCHTFOFEVENTTABLE                                STD_ON
#define DEM_C_EVENTPRIORITYOFEVENTTABLE                               STD_ON
#define DEM_C_EVENTSIGNIFICANCEOFEVENTTABLE                           STD_ON
#define DEM_C_EVENTSTATUSCHANGEDENDIDXOFEVENTTABLE                    STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.EventStatusChangedEndIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_EVENTSTATUSCHANGEDSTARTIDXOFEVENTTABLE                  STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.EventStatusChangedStartIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_EVENTSTATUSCHANGEDUSEDOFEVENTTABLE                      STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.EventStatusChangedUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_EXTENDEDDATATABLEIDXOFEVENTTABLE                        STD_ON
#define DEM_C_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE                   STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.FreezeFrameNumTableEndIdx' Reason: 'the optional indirection is deactivated because FreezeFrameNumTableUsedOfEventTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_C_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE                 STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.FreezeFrameNumTableStartIdx' Reason: 'the optional indirection is deactivated because FreezeFrameNumTableUsedOfEventTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_C_FREEZEFRAMENUMTABLEUSEDOFEVENTTABLE                     STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.FreezeFrameNumTableUsed' Reason: 'the optional indirection is deactivated because FreezeFrameNumTableUsedOfEventTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_C_FREEZEFRAMETABLESTDFFIDXOFEVENTTABLE                    STD_ON
#define DEM_C_HEALINGTARGETOFEVENTTABLE                               STD_ON
#define DEM_C_INITMONLISTFORFUNCIDXOFEVENTTABLE                       STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.InitMonListForFuncIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_INITMONITORFOREVENTIDXOFEVENTTABLE                      STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.InitMonitorForEventIdx' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_INITMONITORFOREVENTUSEDOFEVENTTABLE                     STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.InitMonitorForEventUsed' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_MASKEDBITSOFEVENTTABLE                                  STD_ON
#define DEM_C_NORMALINDICATORTABLEENDIDXOFEVENTTABLE                  STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.NormalIndicatorTableEndIdx' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_C_NORMALINDICATORTABLESTARTIDXOFEVENTTABLE                STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.NormalIndicatorTableStartIdx' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_C_NORMALINDICATORTABLEUSEDOFEVENTTABLE                    STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.NormalIndicatorTableUsed' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_C_OPERATIONCYCLEIDOFEVENTTABLE                            STD_ON
#define DEM_C_STORAGECONDITIONTABLEIDXOFEVENTTABLE                    STD_OFF  /**< Deactivateable: 'Dem_C_EventTable.StorageConditionTableIdx' Reason: '(DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_C_EXTENDEDDATATABLE                                       STD_ON
#define DEM_C_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE STD_OFF  /**< Deactivateable: 'Dem_C_ExtendedDataTable.DataCollectionTableEdr2CollIndEndIdx' Reason: 'the optional indirection is deactivated because DataCollectionTableEdr2CollIndUsedOfExtendedDataTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_C_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE STD_OFF  /**< Deactivateable: 'Dem_C_ExtendedDataTable.DataCollectionTableEdr2CollIndStartIdx' Reason: 'the optional indirection is deactivated because DataCollectionTableEdr2CollIndUsedOfExtendedDataTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_C_DATACOLLECTIONTABLEEDR2COLLINDUSEDOFEXTENDEDDATATABLE   STD_OFF  /**< Deactivateable: 'Dem_C_ExtendedDataTable.DataCollectionTableEdr2CollIndUsed' Reason: 'the optional indirection is deactivated because DataCollectionTableEdr2CollIndUsedOfExtendedDataTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_C_MAXRECORDSIZEOFEXTENDEDDATATABLE                        STD_ON
#define DEM_C_FILTERREPORTEDEVENTS                                    STD_ON
#define DEM_C_FINALMAGICNUMBER                                        STD_OFF  /**< Deactivateable: 'Dem_C_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define DEM_C_FREEZEFRAMENUMTABLE                                     STD_OFF  /**< Deactivateable: 'Dem_C_FreezeFrameNumTable' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_C_FFNUMBEROFFREEZEFRAMENUMTABLE                           STD_OFF  /**< Deactivateable: 'Dem_C_FreezeFrameNumTable.FFNumber' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_C_FFTRIGGEROFFREEZEFRAMENUMTABLE                          STD_OFF  /**< Deactivateable: 'Dem_C_FreezeFrameNumTable.FFTrigger' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_C_FFUPDATEOFFREEZEFRAMENUMTABLE                           STD_OFF  /**< Deactivateable: 'Dem_C_FreezeFrameNumTable.FFUpdate' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_C_FREEZEFRAMETABLE                                        STD_ON
#define DEM_C_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE  STD_OFF  /**< Deactivateable: 'Dem_C_FreezeFrameTable.DataCollectionTableFfm2CollIndEndIdx' Reason: 'the optional indirection is deactivated because DataCollectionTableFfm2CollIndUsedOfFreezeFrameTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_C_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE STD_OFF  /**< Deactivateable: 'Dem_C_FreezeFrameTable.DataCollectionTableFfm2CollIndStartIdx' Reason: 'the optional indirection is deactivated because DataCollectionTableFfm2CollIndUsedOfFreezeFrameTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_C_DATACOLLECTIONTABLEFFM2COLLINDUSEDOFFREEZEFRAMETABLE    STD_OFF  /**< Deactivateable: 'Dem_C_FreezeFrameTable.DataCollectionTableFfm2CollIndUsed' Reason: 'the optional indirection is deactivated because DataCollectionTableFfm2CollIndUsedOfFreezeFrameTable is always 'FALSE' and the target of the indirection is of the Configuration Class 'PRE_COMPILE'.' */
#define DEM_C_RECORDSIZEOFFREEZEFRAMETABLE                            STD_ON
#define DEM_C_RECORDSIZEUDSOFFREEZEFRAMETABLE                         STD_ON
#define DEM_C_GENERALJ1939TABLE                                       STD_OFF  /**< Deactivateable: 'Dem_C_GeneralJ1939Table' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_C_DATACOLLECTIONTABLEJ19392COLLINDENDIDXOFGENERALJ1939TABLE STD_OFF  /**< Deactivateable: 'Dem_C_GeneralJ1939Table.DataCollectionTableJ19392CollIndEndIdx' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_C_DATACOLLECTIONTABLEJ19392COLLINDSTARTIDXOFGENERALJ1939TABLE STD_OFF  /**< Deactivateable: 'Dem_C_GeneralJ1939Table.DataCollectionTableJ19392CollIndStartIdx' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_C_DATACOLLECTIONTABLEJ19392COLLINDUSEDOFGENERALJ1939TABLE STD_OFF  /**< Deactivateable: 'Dem_C_GeneralJ1939Table.DataCollectionTableJ19392CollIndUsed' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_C_RECORDSIZEOFGENERALJ1939TABLE                           STD_OFF  /**< Deactivateable: 'Dem_C_GeneralJ1939Table.RecordSize' Reason: 'no DemJ1939FreezeFrameClass (FreezeFrames)' */
#define DEM_C_GENERALOBDINPUT                                         STD_ON
#define DEM_C_DATAELEMENTTABLEIDXOFGENERALOBDINPUT                    STD_ON
#define DEM_C_GENERALOBDTABLE                                         STD_OFF  /**< Deactivateable: 'Dem_C_GeneralObdTable' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_C_GLOBALSEVERITYMASK                                      STD_ON
#define DEM_C_GLOBALSPECIALINDICATORSTATES                            STD_OFF  /**< Deactivateable: 'Dem_C_GlobalSpecialIndicatorStates' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_INDICATORBLINKING                                       STD_OFF  /**< Deactivateable: 'Dem_C_IndicatorBlinking' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_INDICATORCONTINUOUS                                     STD_OFF  /**< Deactivateable: 'Dem_C_IndicatorContinuous' Reason: 'the array is deactivated because the size is 0 in all variants and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_INDICATORFASTFLASH                                      STD_OFF  /**< Deactivateable: 'Dem_C_IndicatorFastFlash' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_C_INDICATORSLOWFLASH                                      STD_OFF  /**< Deactivateable: 'Dem_C_IndicatorSlowFlash' Reason: '(DEM_CFG_SUPPORT_J1939 == STD_OFF)' */
#define DEM_C_INITDATAHASHCODE                                        STD_OFF  /**< Deactivateable: 'Dem_C_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define DEM_C_INITMONLISTFORFUNC                                      STD_OFF  /**< Deactivateable: 'Dem_C_InitMonListForFunc' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_C_INITMONITORSFORFUNCENDIDXOFINITMONLISTFORFUNC           STD_OFF  /**< Deactivateable: 'Dem_C_InitMonListForFunc.InitMonitorsForFuncEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_C_INITMONITORSFORFUNCSTARTIDXOFINITMONLISTFORFUNC         STD_OFF  /**< Deactivateable: 'Dem_C_InitMonListForFunc.InitMonitorsForFuncStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_C_INITMONITORSFORFUNCUSEDOFINITMONLISTFORFUNC             STD_OFF  /**< Deactivateable: 'Dem_C_InitMonListForFunc.InitMonitorsForFuncUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_C_INITMONITORFOREVENT                                     STD_OFF  /**< Deactivateable: 'Dem_C_InitMonitorForEvent' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_INITMONITORSFORFUNC                                     STD_OFF  /**< Deactivateable: 'Dem_C_InitMonitorsForFunc' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_C_J1939NODEID                                             STD_OFF  /**< Deactivateable: 'Dem_C_J1939NodeId' Reason: '(DEM_CFG_SUPPORT_J1939_NODES == STD_OFF)' */
#define DEM_C_J1939NODEIDIND                                          STD_OFF  /**< Deactivateable: 'Dem_C_J1939NodeIdInd' Reason: '(DEM_CFG_SUPPORT_J1939_NODES == STD_OFF)' */
#define DEM_C_J1939NODEINDICATOR                                      STD_OFF  /**< Deactivateable: 'Dem_C_J1939NodeIndicator' Reason: '(DEM_CFG_SUPPORT_J1939_NODES == STD_OFF)' */
#define DEM_C_MEMORYBLOCKID                                           STD_ON
#define DEM_C_MEMORYCOMMITNUMBER                                      STD_ON
#define DEM_C_MEMORYDATAPTR                                           STD_ON
#define DEM_C_MEMORYENTRYINIT                                         STD_ON
#define DEM_C_MEMORYSTATUS                                            STD_ON
#define DEM_C_NORMALINDICATORTABLE                                    STD_OFF  /**< Deactivateable: 'Dem_C_NormalIndicatorTable' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_C_BEHAVIOROFNORMALINDICATORTABLE                          STD_OFF  /**< Deactivateable: 'Dem_C_NormalIndicatorTable.Behavior' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_C_IDOFNORMALINDICATORTABLE                                STD_OFF  /**< Deactivateable: 'Dem_C_NormalIndicatorTable.Id' Reason: 'no normal indicator is configured (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF)' */
#define DEM_C_NVADMINDATA                                             STD_ON
#define DEM_C_NVEVENTDATA                                             STD_ON
#define DEM_C_NVPRIMARYENTRY_0                                        STD_ON
#define DEM_C_NVPRIMARYENTRY_1                                        STD_ON
#define DEM_C_NVPRIMARYENTRY_2                                        STD_ON
#define DEM_C_NVPRIMARYENTRY_3                                        STD_ON
#define DEM_C_NVPRIMARYENTRY_4                                        STD_ON
#define DEM_C_NVPRIMARYENTRY_5                                        STD_ON
#define DEM_C_NVPRIMARYENTRY_6                                        STD_ON
#define DEM_C_NVPRIMARYENTRY_7                                        STD_ON
#define DEM_C_PIDTABLE                                                STD_OFF  /**< Deactivateable: 'Dem_C_PidTable' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_C_DATACOLLECTIONTABLEPID2COLLINDENDIDXOFPIDTABLE          STD_OFF  /**< Deactivateable: 'Dem_C_PidTable.DataCollectionTablePid2CollIndEndIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_C_DATACOLLECTIONTABLEPID2COLLINDSTARTIDXOFPIDTABLE        STD_OFF  /**< Deactivateable: 'Dem_C_PidTable.DataCollectionTablePid2CollIndStartIdx' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_C_DATACOLLECTIONTABLEPID2COLLINDUSEDOFPIDTABLE            STD_OFF  /**< Deactivateable: 'Dem_C_PidTable.DataCollectionTablePid2CollIndUsed' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define DEM_C_PRIMARYCHRONOLOGY                                       STD_ON
#define DEM_C_RATIOIDTABLE                                            STD_OFF  /**< Deactivateable: 'Dem_C_RatioIdTable' Reason: 'no OBD support or no DemRatioId container configured' */
#define DEM_C_READOUTBUFFER                                           STD_ON
#define DEM_C_SPECIALINDICATORTABLE                                   STD_OFF  /**< Deactivateable: 'Dem_C_SpecialIndicatorTable' Reason: 'no special indicator is configured' */
#define DEM_C_BEHAVIOROFSPECIALINDICATORTABLE                         STD_OFF  /**< Deactivateable: 'Dem_C_SpecialIndicatorTable.Behavior' Reason: 'no special indicator is configured' */
#define DEM_C_IDOFSPECIALINDICATORTABLE                               STD_OFF  /**< Deactivateable: 'Dem_C_SpecialIndicatorTable.Id' Reason: 'no special indicator is configured' */
#define DEM_C_STORAGECONDITIONTABLE                                   STD_OFF  /**< Deactivateable: 'Dem_C_StorageConditionTable' Reason: '(DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_OFF)' */
#define DEM_C_UDSDTCGROUP                                             STD_OFF  /**< Deactivateable: 'Dem_C_UdsDtcGroup' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define DEM_PCCONFIG                                                  STD_ON
#define DEM_C_COMMITBUFFEROFPCCONFIG                                  STD_ON
#define DEM_C_CONFIGURATIONIDOFPCCONFIG                               STD_ON
#define DEM_C_CYCLEIDTABLEOFPCCONFIG                                  STD_ON
#define DEM_C_DATACOLLECTIONTABLEOFPCCONFIG                           STD_ON
#define DEM_C_DATAELEMENTTABLEOFPCCONFIG                              STD_ON
#define DEM_C_DEBOUNCETABLEOFPCCONFIG                                 STD_ON
#define DEM_C_DTCTABLEOFPCCONFIG                                      STD_ON
#define DEM_C_EVENTAVAILABLEINVARIANTOFPCCONFIG                       STD_ON
#define DEM_C_EVENTAVAILABLEOFPCCONFIG                                STD_ON
#define DEM_C_EVENTDEBOUNCEVALUEOFPCCONFIG                            STD_ON
#define DEM_C_EVENTINTERNALSTATUSOFPCCONFIG                           STD_ON
#define DEM_C_EVENTQUEUESTATUSOFPCCONFIG                              STD_ON
#define DEM_C_EVENTTABLEOFPCCONFIG                                    STD_ON
#define DEM_C_EXTENDEDDATATABLEOFPCCONFIG                             STD_ON
#define DEM_C_FILTERREPORTEDEVENTSOFPCCONFIG                          STD_ON
#define DEM_C_FINALMAGICNUMBEROFPCCONFIG                              STD_OFF  /**< Deactivateable: 'Dem_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define DEM_C_FREEZEFRAMETABLEOFPCCONFIG                              STD_ON
#define DEM_C_GENERALOBDINPUTOFPCCONFIG                               STD_ON
#define DEM_C_GLOBALSEVERITYMASKOFPCCONFIG                            STD_ON
#define DEM_C_INITDATAHASHCODEOFPCCONFIG                              STD_OFF  /**< Deactivateable: 'Dem_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define DEM_C_MEMORYBLOCKIDOFPCCONFIG                                 STD_ON
#define DEM_C_MEMORYCOMMITNUMBEROFPCCONFIG                            STD_ON
#define DEM_C_MEMORYDATAPTROFPCCONFIG                                 STD_ON
#define DEM_C_MEMORYENTRYINITOFPCCONFIG                               STD_ON
#define DEM_C_MEMORYSTATUSOFPCCONFIG                                  STD_ON
#define DEM_C_NVADMINDATAOFPCCONFIG                                   STD_ON
#define DEM_C_NVEVENTDATAOFPCCONFIG                                   STD_ON
#define DEM_C_NVPRIMARYENTRY_0OFPCCONFIG                              STD_ON
#define DEM_C_NVPRIMARYENTRY_1OFPCCONFIG                              STD_ON
#define DEM_C_NVPRIMARYENTRY_2OFPCCONFIG                              STD_ON
#define DEM_C_NVPRIMARYENTRY_3OFPCCONFIG                              STD_ON
#define DEM_C_NVPRIMARYENTRY_4OFPCCONFIG                              STD_ON
#define DEM_C_NVPRIMARYENTRY_5OFPCCONFIG                              STD_ON
#define DEM_C_NVPRIMARYENTRY_6OFPCCONFIG                              STD_ON
#define DEM_C_NVPRIMARYENTRY_7OFPCCONFIG                              STD_ON
#define DEM_C_PRIMARYCHRONOLOGYOFPCCONFIG                             STD_ON
#define DEM_C_READOUTBUFFEROFPCCONFIG                                 STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCMinNumericValueDefines  Dem_C Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define DEM_C_MIN_EVENTDEBOUNCEVALUE                                  -32768
#define DEM_C_MIN_EVENTQUEUESTATUS                                    0U
#define DEM_C_MIN_FILTERREPORTEDEVENTS                                0U
#define DEM_C_MIN_MEMORYCOMMITNUMBER                                  0U
#define DEM_C_MIN_MEMORYSTATUS                                        0U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCMaxNumericValueDefines  Dem_C Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define DEM_C_MAX_EVENTDEBOUNCEVALUE                                  32767
#define DEM_C_MAX_EVENTQUEUESTATUS                                    255U
#define DEM_C_MAX_FILTERREPORTEDEVENTS                                255U
#define DEM_C_MAX_MEMORYCOMMITNUMBER                                  255U
#define DEM_C_MAX_MEMORYSTATUS                                        255U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCEnumExistsDefines  Dem_C Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define DEM_C_EXISTS_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_ON
#define DEM_C_EXISTS_DEM_CFG_DEBOUNCETYPE_TIMER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_OFF
#define DEM_C_EXISTS_DEM_CFG_DEBOUNCETYPE_EXTERNAL_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_OFF
#define DEM_C_EXISTS_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE STD_ON
#define DEM_C_EXISTS_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE         STD_ON
#define DEM_C_EXISTS_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE         STD_OFF
#define DEM_C_EXISTS_DEM_EVENT_SIGNIFICANCE_OCCURRENCE_EVENTSIGNIFICANCEOFEVENTTABLE STD_OFF
#define DEM_C_EXISTS_DEM_EVENT_SIGNIFICANCE_FAULT_EVENTSIGNIFICANCEOFEVENTTABLE STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCEnumDefines  Dem_C Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define DEM_C_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE 0x00U
#define DEM_C_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE 0x03U
#define DEM_C_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE                0x00U
#define DEM_C_DEM_EVENT_SIGNIFICANCE_FAULT_EVENTSIGNIFICANCEOFEVENTTABLE 0x01U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCMaskedBitDefines  Dem_C Masked Bit Defines (PRE_COMPILE)
  \brief  These defines are masks to extract packed boolean data.
  \{
*/ 
#define DEM_C_DEBOUNCECONTINUOUSOFDEBOUNCETABLE_MASK                  0x10U
#define DEM_C_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE_MASK               0x08U
#define DEM_C_JUMPDOWNOFDEBOUNCETABLE_MASK                            0x04U
#define DEM_C_JUMPUPOFDEBOUNCETABLE_MASK                              0x02U
#define DEM_C_STORAGEOFDEBOUNCETABLE_MASK                             0x01U
#define DEM_C_AGINGALLOWEDOFEVENTTABLE_MASK                           0x02U
#define DEM_C_EVENTLATCHTFOFEVENTTABLE_MASK                           0x01U
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCIsReducedToDefineDefines  Dem_C Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define DEM_C_ISDEF_OPCYCLETYPEOFCYCLEIDTABLE                         STD_OFF
#define DEM_C_ISDEF_USEDFORAGINGOFCYCLEIDTABLE                        STD_ON
#define DEM_C_ISDEF_COLLECTIONSIZEOFDATACOLLECTIONTABLE               STD_ON
#define DEM_C_ISDEF_IDNUMBEROFDATACOLLECTIONTABLE                     STD_ON
#define DEM_C_ISDEF_STORAGEKINDOFDATACOLLECTIONTABLE                  STD_ON
#define DEM_C_ISDEF_UPDATEOFDATACOLLECTIONTABLE                       STD_ON
#define DEM_C_ISDEF_ELEMENTKINDOFDATAELEMENTTABLE                     STD_ON
#define DEM_C_ISDEF_ELEMENTSIZEOFDATAELEMENTTABLE                     STD_ON
#define DEM_C_ISDEF_READDATAFUNCOFDATAELEMENTTABLE                    STD_OFF
#define DEM_C_ISDEF_DEBOUNCECONTINUOUSOFDEBOUNCETABLE                 STD_ON
#define DEM_C_ISDEF_DECREMENTSTEPSIZEOFDEBOUNCETABLE                  STD_OFF
#define DEM_C_ISDEF_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE             STD_OFF
#define DEM_C_ISDEF_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE              STD_ON
#define DEM_C_ISDEF_FAILTIMERCYCLESOFDEBOUNCETABLE                    STD_ON
#define DEM_C_ISDEF_FAILEDTHRESHOLDOFDEBOUNCETABLE                    STD_OFF
#define DEM_C_ISDEF_INCREMENTSTEPSIZEOFDEBOUNCETABLE                  STD_OFF
#define DEM_C_ISDEF_JUMPDOWNOFDEBOUNCETABLE                           STD_OFF
#define DEM_C_ISDEF_JUMPDOWNVALUEOFDEBOUNCETABLE                      STD_ON
#define DEM_C_ISDEF_JUMPUPOFDEBOUNCETABLE                             STD_OFF
#define DEM_C_ISDEF_JUMPUPVALUEOFDEBOUNCETABLE                        STD_ON
#define DEM_C_ISDEF_MASKEDBITSOFDEBOUNCETABLE                         STD_OFF
#define DEM_C_ISDEF_PASSTIMERCYCLESOFDEBOUNCETABLE                    STD_ON
#define DEM_C_ISDEF_PASSEDTHRESHOLDOFDEBOUNCETABLE                    STD_OFF
#define DEM_C_ISDEF_STORAGEOFDEBOUNCETABLE                            STD_ON
#define DEM_C_ISDEF_DTCSEVERITYOFDTCTABLE                             STD_ON
#define DEM_C_ISDEF_FUNCTIONALUNITOFDTCTABLE                          STD_ON
#define DEM_C_ISDEF_IMMEDIATENVSTORAGEOFDTCTABLE                      STD_ON
#define DEM_C_ISDEF_UDSDTCOFDTCTABLE                                  STD_ON
#define DEM_C_ISDEF_EVENTAVAILABLE                                    STD_ON
#define DEM_C_ISDEF_EVENTAVAILABLEINVARIANT                           STD_ON
#define DEM_C_ISDEF_AGINGALLOWEDOFEVENTTABLE                          STD_ON
#define DEM_C_ISDEF_AGINGCYCLECOUNTERTHRESHOLDOFEVENTTABLE            STD_ON
#define DEM_C_ISDEF_AGINGCYCLEIDOFEVENTTABLE                          STD_ON
#define DEM_C_ISDEF_DEBOUNCETABLEIDXOFEVENTTABLE                      STD_OFF
#define DEM_C_ISDEF_DTCTABLEIDXOFEVENTTABLE                           STD_ON
#define DEM_C_ISDEF_EVENTDESTINATIONOFEVENTTABLE                      STD_ON
#define DEM_C_ISDEF_EVENTFAILURECYCLECOUNTERTHRESHOLDOFEVENTTABLE     STD_ON
#define DEM_C_ISDEF_EVENTFAILURECYCLEIDOFEVENTTABLE                   STD_ON
#define DEM_C_ISDEF_EVENTKINDOFEVENTTABLE                             STD_ON
#define DEM_C_ISDEF_EVENTLATCHTFOFEVENTTABLE                          STD_ON
#define DEM_C_ISDEF_EVENTPRIORITYOFEVENTTABLE                         STD_ON
#define DEM_C_ISDEF_EVENTSIGNIFICANCEOFEVENTTABLE                     STD_ON
#define DEM_C_ISDEF_EXTENDEDDATATABLEIDXOFEVENTTABLE                  STD_ON
#define DEM_C_ISDEF_FREEZEFRAMETABLESTDFFIDXOFEVENTTABLE              STD_ON
#define DEM_C_ISDEF_HEALINGTARGETOFEVENTTABLE                         STD_ON
#define DEM_C_ISDEF_MASKEDBITSOFEVENTTABLE                            STD_ON
#define DEM_C_ISDEF_OPERATIONCYCLEIDOFEVENTTABLE                      STD_OFF
#define DEM_C_ISDEF_MAXRECORDSIZEOFEXTENDEDDATATABLE                  STD_ON
#define DEM_C_ISDEF_RECORDSIZEOFFREEZEFRAMETABLE                      STD_ON
#define DEM_C_ISDEF_RECORDSIZEUDSOFFREEZEFRAMETABLE                   STD_ON
#define DEM_C_ISDEF_DATAELEMENTTABLEIDXOFGENERALOBDINPUT              STD_ON
#define DEM_C_ISDEF_MEMORYBLOCKID                                     STD_OFF
#define DEM_C_ISDEF_MEMORYDATAPTR                                     STD_OFF
#define DEM_C_ISDEF_COMMITBUFFEROFPCCONFIG                            STD_ON
#define DEM_C_ISDEF_CYCLEIDTABLEOFPCCONFIG                            STD_ON
#define DEM_C_ISDEF_DATACOLLECTIONTABLEOFPCCONFIG                     STD_ON
#define DEM_C_ISDEF_DATAELEMENTTABLEOFPCCONFIG                        STD_ON
#define DEM_C_ISDEF_DEBOUNCETABLEOFPCCONFIG                           STD_ON
#define DEM_C_ISDEF_DTCTABLEOFPCCONFIG                                STD_ON
#define DEM_C_ISDEF_EVENTAVAILABLEINVARIANTOFPCCONFIG                 STD_ON
#define DEM_C_ISDEF_EVENTAVAILABLEOFPCCONFIG                          STD_ON
#define DEM_C_ISDEF_EVENTDEBOUNCEVALUEOFPCCONFIG                      STD_ON
#define DEM_C_ISDEF_EVENTINTERNALSTATUSOFPCCONFIG                     STD_ON
#define DEM_C_ISDEF_EVENTQUEUESTATUSOFPCCONFIG                        STD_ON
#define DEM_C_ISDEF_EVENTTABLEOFPCCONFIG                              STD_ON
#define DEM_C_ISDEF_EXTENDEDDATATABLEOFPCCONFIG                       STD_ON
#define DEM_C_ISDEF_FILTERREPORTEDEVENTSOFPCCONFIG                    STD_ON
#define DEM_C_ISDEF_FREEZEFRAMETABLEOFPCCONFIG                        STD_ON
#define DEM_C_ISDEF_GENERALOBDINPUTOFPCCONFIG                         STD_ON
#define DEM_C_ISDEF_MEMORYBLOCKIDOFPCCONFIG                           STD_ON
#define DEM_C_ISDEF_MEMORYCOMMITNUMBEROFPCCONFIG                      STD_ON
#define DEM_C_ISDEF_MEMORYDATAPTROFPCCONFIG                           STD_ON
#define DEM_C_ISDEF_MEMORYENTRYINITOFPCCONFIG                         STD_ON
#define DEM_C_ISDEF_MEMORYSTATUSOFPCCONFIG                            STD_ON
#define DEM_C_ISDEF_NVADMINDATAOFPCCONFIG                             STD_ON
#define DEM_C_ISDEF_NVEVENTDATAOFPCCONFIG                             STD_ON
#define DEM_C_ISDEF_NVPRIMARYENTRY_0OFPCCONFIG                        STD_ON
#define DEM_C_ISDEF_NVPRIMARYENTRY_1OFPCCONFIG                        STD_ON
#define DEM_C_ISDEF_NVPRIMARYENTRY_2OFPCCONFIG                        STD_ON
#define DEM_C_ISDEF_NVPRIMARYENTRY_3OFPCCONFIG                        STD_ON
#define DEM_C_ISDEF_NVPRIMARYENTRY_4OFPCCONFIG                        STD_ON
#define DEM_C_ISDEF_NVPRIMARYENTRY_5OFPCCONFIG                        STD_ON
#define DEM_C_ISDEF_NVPRIMARYENTRY_6OFPCCONFIG                        STD_ON
#define DEM_C_ISDEF_NVPRIMARYENTRY_7OFPCCONFIG                        STD_ON
#define DEM_C_ISDEF_PRIMARYCHRONOLOGYOFPCCONFIG                       STD_ON
#define DEM_C_ISDEF_READOUTBUFFEROFPCCONFIG                           STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCEqualsAlwaysToDefines  Dem_C Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define DEM_C_EQ2_OPCYCLETYPEOFCYCLEIDTABLE                           
#define DEM_C_EQ2_USEDFORAGINGOFCYCLEIDTABLE                          FALSE
#define DEM_C_EQ2_COLLECTIONSIZEOFDATACOLLECTIONTABLE                 0U
#define DEM_C_EQ2_IDNUMBEROFDATACOLLECTIONTABLE                       0x0000U
#define DEM_C_EQ2_STORAGEKINDOFDATACOLLECTIONTABLE                    DEM_CFG_EREC_TYPE_GLOBAL
#define DEM_C_EQ2_UPDATEOFDATACOLLECTIONTABLE                         FALSE
#define DEM_C_EQ2_ELEMENTKINDOFDATAELEMENTTABLE                       32U
#define DEM_C_EQ2_ELEMENTSIZEOFDATAELEMENTTABLE                       0U
#define DEM_C_EQ2_READDATAFUNCOFDATAELEMENTTABLE                      
#define DEM_C_EQ2_DEBOUNCECONTINUOUSOFDEBOUNCETABLE                   FALSE
#define DEM_C_EQ2_DECREMENTSTEPSIZEOFDEBOUNCETABLE                    
#define DEM_C_EQ2_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE               
#define DEM_C_EQ2_EVENTDEBOUNCEBEHAVIOROFDEBOUNCETABLE                FALSE
#define DEM_C_EQ2_FAILTIMERCYCLESOFDEBOUNCETABLE                      0
#define DEM_C_EQ2_FAILEDTHRESHOLDOFDEBOUNCETABLE                      
#define DEM_C_EQ2_INCREMENTSTEPSIZEOFDEBOUNCETABLE                    
#define DEM_C_EQ2_JUMPDOWNOFDEBOUNCETABLE                             
#define DEM_C_EQ2_JUMPDOWNVALUEOFDEBOUNCETABLE                        0
#define DEM_C_EQ2_JUMPUPOFDEBOUNCETABLE                               
#define DEM_C_EQ2_JUMPUPVALUEOFDEBOUNCETABLE                          0
#define DEM_C_EQ2_MASKEDBITSOFDEBOUNCETABLE                           
#define DEM_C_EQ2_PASSTIMERCYCLESOFDEBOUNCETABLE                      0
#define DEM_C_EQ2_PASSEDTHRESHOLDOFDEBOUNCETABLE                      
#define DEM_C_EQ2_STORAGEOFDEBOUNCETABLE                              FALSE
#define DEM_C_EQ2_DTCSEVERITYOFDTCTABLE                               0U
#define DEM_C_EQ2_FUNCTIONALUNITOFDTCTABLE                            255U
#define DEM_C_EQ2_IMMEDIATENVSTORAGEOFDTCTABLE                        FALSE
#define DEM_C_EQ2_UDSDTCOFDTCTABLE                                    0x00FFFFFFUL
#define DEM_C_EQ2_EVENTAVAILABLE                                      TRUE
#define DEM_C_EQ2_EVENTAVAILABLEINVARIANT                             TRUE
#define DEM_C_EQ2_AGINGALLOWEDOFEVENTTABLE                            FALSE
#define DEM_C_EQ2_AGINGCYCLECOUNTERTHRESHOLDOFEVENTTABLE              255U
#define DEM_C_EQ2_AGINGCYCLEIDOFEVENTTABLE                            /*no AgingCycle*/ 2U
#define DEM_C_EQ2_DEBOUNCETABLEIDXOFEVENTTABLE                        
#define DEM_C_EQ2_DTCTABLEIDXOFEVENTTABLE                             0U
#define DEM_C_EQ2_EVENTDESTINATIONOFEVENTTABLE                        DEM_CFG_MEMORYID_PRIMARY
#define DEM_C_EQ2_EVENTFAILURECYCLECOUNTERTHRESHOLDOFEVENTTABLE       0U
#define DEM_C_EQ2_EVENTFAILURECYCLEIDOFEVENTTABLE                     /*no EventFailureCycle*/ 2U
#define DEM_C_EQ2_EVENTKINDOFEVENTTABLE                               DEM_C_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE
#define DEM_C_EQ2_EVENTLATCHTFOFEVENTTABLE                            FALSE
#define DEM_C_EQ2_EVENTPRIORITYOFEVENTTABLE                           2U
#define DEM_C_EQ2_EVENTSIGNIFICANCEOFEVENTTABLE                       DEM_C_DEM_EVENT_SIGNIFICANCE_FAULT_EVENTSIGNIFICANCEOFEVENTTABLE
#define DEM_C_EQ2_EXTENDEDDATATABLEIDXOFEVENTTABLE                    0U
#define DEM_C_EQ2_FREEZEFRAMETABLESTDFFIDXOFEVENTTABLE                0U
#define DEM_C_EQ2_HEALINGTARGETOFEVENTTABLE                           0U
#define DEM_C_EQ2_MASKEDBITSOFEVENTTABLE                              0x00U
#define DEM_C_EQ2_OPERATIONCYCLEIDOFEVENTTABLE                        
#define DEM_C_EQ2_MAXRECORDSIZEOFEXTENDEDDATATABLE                    0U
#define DEM_C_EQ2_RECORDSIZEOFFREEZEFRAMETABLE                        0U
#define DEM_C_EQ2_RECORDSIZEUDSOFFREEZEFRAMETABLE                     0U
#define DEM_C_EQ2_DATAELEMENTTABLEIDXOFGENERALOBDINPUT                0U
#define DEM_C_EQ2_MEMORYBLOCKID                                       
#define DEM_C_EQ2_MEMORYDATAPTR                                       
#define DEM_C_EQ2_COMMITBUFFEROFPCCONFIG                              Dem_C_CommitBuffer
#define DEM_C_EQ2_CYCLEIDTABLEOFPCCONFIG                              Dem_C_CycleIdTable
#define DEM_C_EQ2_DATACOLLECTIONTABLEOFPCCONFIG                       Dem_C_DataCollectionTable
#define DEM_C_EQ2_DATAELEMENTTABLEOFPCCONFIG                          Dem_C_DataElementTable
#define DEM_C_EQ2_DEBOUNCETABLEOFPCCONFIG                             Dem_C_DebounceTable
#define DEM_C_EQ2_DTCTABLEOFPCCONFIG                                  Dem_C_DtcTable
#define DEM_C_EQ2_EVENTAVAILABLEINVARIANTOFPCCONFIG                   Dem_C_EventAvailableInVariant
#define DEM_C_EQ2_EVENTAVAILABLEOFPCCONFIG                            Dem_C_EventAvailable
#define DEM_C_EQ2_EVENTDEBOUNCEVALUEOFPCCONFIG                        Dem_C_EventDebounceValue
#define DEM_C_EQ2_EVENTINTERNALSTATUSOFPCCONFIG                       Dem_C_EventInternalStatus
#define DEM_C_EQ2_EVENTQUEUESTATUSOFPCCONFIG                          Dem_C_EventQueueStatus
#define DEM_C_EQ2_EVENTTABLEOFPCCONFIG                                Dem_C_EventTable
#define DEM_C_EQ2_EXTENDEDDATATABLEOFPCCONFIG                         Dem_C_ExtendedDataTable
#define DEM_C_EQ2_FILTERREPORTEDEVENTSOFPCCONFIG                      Dem_C_FilterReportedEvents
#define DEM_C_EQ2_FREEZEFRAMETABLEOFPCCONFIG                          Dem_C_FreezeFrameTable
#define DEM_C_EQ2_GENERALOBDINPUTOFPCCONFIG                           Dem_C_GeneralObdInput
#define DEM_C_EQ2_MEMORYBLOCKIDOFPCCONFIG                             Dem_C_MemoryBlockId
#define DEM_C_EQ2_MEMORYCOMMITNUMBEROFPCCONFIG                        Dem_C_MemoryCommitNumber
#define DEM_C_EQ2_MEMORYDATAPTROFPCCONFIG                             Dem_C_MemoryDataPtr
#define DEM_C_EQ2_MEMORYENTRYINITOFPCCONFIG                           Dem_C_MemoryEntryInit
#define DEM_C_EQ2_MEMORYSTATUSOFPCCONFIG                              Dem_C_MemoryStatus
#define DEM_C_EQ2_NVADMINDATAOFPCCONFIG                               Dem_C_NvAdminData
#define DEM_C_EQ2_NVEVENTDATAOFPCCONFIG                               Dem_C_NvEventData
#define DEM_C_EQ2_NVPRIMARYENTRY_0OFPCCONFIG                          Dem_C_NvPrimaryEntry_0
#define DEM_C_EQ2_NVPRIMARYENTRY_1OFPCCONFIG                          Dem_C_NvPrimaryEntry_1
#define DEM_C_EQ2_NVPRIMARYENTRY_2OFPCCONFIG                          Dem_C_NvPrimaryEntry_2
#define DEM_C_EQ2_NVPRIMARYENTRY_3OFPCCONFIG                          Dem_C_NvPrimaryEntry_3
#define DEM_C_EQ2_NVPRIMARYENTRY_4OFPCCONFIG                          Dem_C_NvPrimaryEntry_4
#define DEM_C_EQ2_NVPRIMARYENTRY_5OFPCCONFIG                          Dem_C_NvPrimaryEntry_5
#define DEM_C_EQ2_NVPRIMARYENTRY_6OFPCCONFIG                          Dem_C_NvPrimaryEntry_6
#define DEM_C_EQ2_NVPRIMARYENTRY_7OFPCCONFIG                          Dem_C_NvPrimaryEntry_7
#define DEM_C_EQ2_PRIMARYCHRONOLOGYOFPCCONFIG                         Dem_C_PrimaryChronology
#define DEM_C_EQ2_READOUTBUFFEROFPCCONFIG                             Dem_C_ReadoutBuffer
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCSymbolicInitializationPointers  Dem_C Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define Dem_Config_Ptr                                                NULL_PTR  /**< symbolic identifier which shall be used to initialize 'Dem' */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCInitializationSymbols  Dem_C Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define Dem_Config                                                    NULL_PTR  /**< symbolic identifier which could be used to initialize 'Dem */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCGeneral  Dem_C General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define DEM_C_CHECK_INIT_POINTER                                      STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define DEM_C_FINAL_MAGIC_NUMBER                                      0x361EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of Dem */
#define DEM_C_INDIVIDUAL_POSTBUILD                                    STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'Dem' is not configured to be postbuild capable. */
#define DEM_C_INIT_DATA                                               DEM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define DEM_C_INIT_DATA_HASH_CODE                                     -1434282830L  /**< the precompile constant to validate the initialization structure at initialization time of Dem with a hashcode. The seed value is '0x361EU' */
#define DEM_C_USE_ECUM_BSW_ERROR_HOOK                                 STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define DEM_C_USE_INIT_POINTER                                        STD_OFF  /**< STD_ON if the init pointer Dem shall be used. */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CLTDataSwitches  Dem_C Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define DEM_LTCONFIG                                                  STD_OFF  /**< Deactivateable: 'Dem_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 


/*********************************************************************************************************************/
 /*  DataElement kind, returned by Dem_Cfg_DataCallbackType()  */ 
#define DEM_CFG_DATA_FROM_AGINGCTR                                    0U 
#define DEM_CFG_DATA_FROM_OCCCTR                                      2U 
#define DEM_CFG_DATA_FROM_OCCCTR_2BYTE                                3U 
#define DEM_CFG_DATA_FROM_OVFLIND                                     4U 
#define DEM_CFG_DATA_FROM_SIGNIFICANCE                                5U 
#define DEM_CFG_DATA_FROM_PRIORITY                                    8U 
#define DEM_CFG_DATA_FROM_AGINGCTR_INVERTED                           9U 
#define DEM_CFG_DATA_FROM_MAX_FDC_SINCE_LAST_CLEAR                    11U 
#define DEM_CFG_DATA_FROM_MAX_FDC_DURING_CURRENT_CYCLE                12U 
#define DEM_CFG_DATA_FROM_CYCLES_SINCE_LAST_FAILED                    13U 
#define DEM_CFG_DATA_FROM_CYCLES_SINCE_FIRST_FAILED                   14U 
#define DEM_CFG_DATA_FROM_FAILED_CYCLES                               15U 
#define DEM_CFG_DATA_FROM_CONSECUTIVE_FAILED_CYCLES                   20U 
#define DEM_CFG_DATA_FROM_CURRENT_FDC                                 22U 
#define DEM_CFG_DATA_FROM_ROOTCAUSE_EVENTID                           24U 
#define DEM_CFG_DATA_FROM_OBDDTC                                      25U 
#define DEM_CFG_DATA_FROM_OBDDTC_3BYTE                                26U 
#define DEM_CFG_DATA_FROM_CYCLES_TESTED_SINCE_FIRST_FAILED            27U 
#define DEM_CFG_DATA_FROM_CBK_STORED                                  28U 
#define DEM_CFG_DATA_FROM_CBK_STORED_WITH_EVENTID                     29U 
#define DEM_CFG_DATA_FROM_CBK_CURRENT                                 30U 
#define DEM_CFG_DATA_FROM_CBK_CURRENT_WITH_EVENTID                    31U 
#define DEM_CFG_DATAELEMENT_INVALID                                   32U 

 /*  Indicator IDs [symbolic name value]  */ 

 /*  Invalid Indicator IDs  */ 
#define DEM_CFG_INDICATOR_INVALID                                     0U           /* Lowest, unused IndicatorID */ 
#define DEM_CFG_SPECIAL_INDICATOR_NONE                                255U         /* Always different from DEM_CFG_INDICATOR_INVALID */ 

 /*  Dem aging- and operation-cycle type definition (this isn't cycleId; used internally in Dem_Cfg_CycleIs...() APIs)  */ 
#define DEM_CFG_OPCYC_AGING                                           7U 
#define DEM_CFG_OPCYC_IGNITION                                        0U 
#define DEM_CFG_OPCYC_IGNITION_HYBRID                                 6U 
#define DEM_CFG_OPCYC_OBD_DCY                                         1U 
#define DEM_CFG_OPCYC_OTHER                                           2U 
#define DEM_CFG_OPCYC_POWER                                           3U 
#define DEM_CFG_OPCYC_TIME                                            4U 
#define DEM_CFG_OPCYC_WARMUP                                          5U 

 /*  Aging- and OperationCycle IDs [symbolic name value]  */ 
#define DemConf_DemOperationCycle_IgnitionCycle                       0U 
#define DemConf_DemOperationCycle_PowerCycle                          1U 

 /*  Special cycle IDs  */ 
#define Dem_Cfg_GlobalObdDrivingCycleId()                             /* No DemOperationCycleType 'DEM_OPCYC_OBD_DCY' configured. */ 
#define Dem_Cfg_GlobalWarmupCycleId()                                 /* No DemOperationCycleType 'DEM_OPCYC_WARMUP' configured. */ 

 /*  Extended Data Record storage type definition, returned by Dem_Cfg_ERecType()  */ 
#define DEM_CFG_EREC_TYPE_GLOBAL                                      0U 
#define DEM_CFG_EREC_TYPE_INTERNAL                                    1U 
#define DEM_CFG_EREC_TYPE_USER                                        2U 

 /*  FreezeFrameRecord trigger, returned by Dem_Cfg_SRecTrigger()  */ 
#define DEM_CFG_TRIGGER_NONE                                          0U 
#define DEM_CFG_TRIGGER_FDC                                           1U 
#define DEM_CFG_TRIGGER_TESTFAILED                                    2U 
#define DEM_CFG_TRIGGER_TESTPASSED                                    2U 
#define DEM_CFG_TRIGGER_TESTFAILEDTHISCYCLE                           4U 
#define DEM_CFG_TRIGGER_PENDING                                       8U 
#define DEM_CFG_TRIGGER_CONFIRMED                                     16U 
#define DEM_CFG_TRIGGER_INDICATOR                                     32U 
#define DEM_CFG_TRIGGER_FIRSTTHISCYCLE                                64U 
#define DEM_CFG_TRIGGER_FDC_FIRST_IN_CYCLE                            65U 
#define DEM_CFG_TRIGGER_TESTFAILED_FIRST_IN_CYCLE                     66U 

 /*  Event IDs [symbolic name value] - sorted by name.
     See Dem_C_EventTable[] for this list sorted by Ids.  */ 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_ALL_RUN_REQUESTS_KILLED          10U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_CONFIGURATION_DATA_INCONSISTENT  8U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_IMPROPER_CALLER                  11U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_RAM_CHECK_FAILED                 9U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_INTEGRITY_FAILED                                    1U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_LOSS_OF_REDUNDANCY                                  2U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_QUEUE_OVERFLOW                                      3U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_REQ_FAILED                                          4U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_VERIFY_FAILED                                       5U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_WRITE_PROTECTED                                     6U 
#define DemConf_DemEventParameter_AutoCreatedDemEvent_NVM_E_WRONG_BLOCK_ID                                      7U 

 /*  Event Destination.
     By configuration, only origins PRIMARY to PERMANENT are selectable. Others are internally used.  */ 
#define DEM_CFG_MEMORYID_PRIMARY                                      0U 
#define DEM_CFG_MEMORYID_SECONDARY                                    1U 
#define DEM_CFG_MEMORYID_MIRROR                                       2U 
#define DEM_CFG_MEMORYID_PERMANENT                                    3U 
#define DEM_CFG_MEMORYID_FREEZEFRAME                                  4U 
#define DEM_CFG_MEMORYID_ADMINDATA                                    5U 
#define DEM_CFG_MEMORYID_STATUSDATA                                   6U 
#define DEM_CFG_MEMORYID_OBDIUMPR                                     7U 
#define DEM_CFG_MEMORYID_DEBOUNCE                                     8U 
#define DEM_CFG_MEMORYID_TIMESERIES                                   9U 
#define DEM_CFG_MEMORYID_INVALID                                      10U 

 /*  Event Significance, returned by Dem_Cfg_EventSignificance()  */ 
#define DEM_CFG_EVENT_SIGNIFICANCE_OCCURRENCE                         0U 
#define DEM_CFG_EVENT_SIGNIFICANCE_FAULT                              1U 

 /*  Event Kind definition, returned by Dem_Cfg_EventKind()  */ 
#define DEM_CFG_EVENT_KIND_BSW                                        0U 
#define DEM_CFG_EVENT_KIND_SWC                                        1U 

 /*  StorageCondition IDs [symbolic name value]  */ 
 /*  are switched off: (DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_OFF)  */ 
 /*  Defines for supporting A2L  */ 
#define DEM_A2L_NUMBER_OF_EVENTS                                      12UL         /* incl. event #0 */ 
#define DEM_A2L_NUMBER_OF_MIL_GROUPS                                  0UL          /* number of DemMILGroup containers + 1 */ 
#define DEM_A2L_MAX_SIZE_STDENV_RECORD                                0UL          /* largest, configured StdEnvData */ 

 /*  NvRamBlock size configured in the NvM module  */ 
#define DEM_CFG_ADMIN_DATABLOCK_SIZE                                  10U 
#define DEM_CFG_STATUS_DATABLOCK_SIZE                                 20U 
#define DEM_CFG_PRIMARY_DATABLOCK_SIZE                                8U 

 /*  NvRam data exchange RAM buffer definitions. Name mapping of data tables (generated name -> external name)  */ 
#define Dem_C_NvAdminData                                             Dem_Cfg_AdminData 
#define Dem_C_NvEventData                                             Dem_Cfg_StatusData 
#define Dem_C_NvPrimaryEntry_0                                        Dem_PrimaryEntry_0 
#define Dem_C_NvPrimaryEntry_1                                        Dem_PrimaryEntry_1 
#define Dem_C_NvPrimaryEntry_2                                        Dem_PrimaryEntry_2 
#define Dem_C_NvPrimaryEntry_3                                        Dem_PrimaryEntry_3 
#define Dem_C_NvPrimaryEntry_4                                        Dem_PrimaryEntry_4 
#define Dem_C_NvPrimaryEntry_5                                        Dem_PrimaryEntry_5 
#define Dem_C_NvPrimaryEntry_6                                        Dem_PrimaryEntry_6 
#define Dem_C_NvPrimaryEntry_7                                        Dem_PrimaryEntry_7 
#define Dem_C_MemoryEntryInit                                         Dem_MemoryEntryInit 
#define Dem_C_CommitBuffer                                            Dem_Cfg_CommitBuffer 

 /*  Dcm data exchange RAM buffer definitions. Name mapping of data tables (generated name -> external name)  */ 
#define Dem_C_ReadoutBuffer                                           Dem_Cfg_ReadoutBuffer 

 /*  Name mapping of Dem internal RAM data tables (generated name -> external name)  */ 
#define Dem_C_EventDebounceValue                                      Dem_Cfg_EventDebounceValue 
#define Dem_C_EventInternalStatus                                     Dem_Cfg_EventInternalStatus 
#define Dem_C_EventQueue                                              Dem_Cfg_EventQueue 
#define Dem_C_EventQueueStatus                                        Dem_Cfg_EventQueueStatus 
#define Dem_C_FilterReportedEvents                                    Dem_Cfg_FilterReportedEvents 
#define Dem_C_MemoryBlockId                                           Dem_Cfg_MemoryBlockId 
#define Dem_C_MemoryCommitNumber                                      Dem_Cfg_MemoryCommitNumber 
#define Dem_C_MemoryDataPtr                                           Dem_Cfg_MemoryDataPtr 
#define Dem_C_MemoryStatus                                            Dem_Cfg_MemoryStatus 
#define Dem_C_PrimaryChronology                                       Dem_Cfg_PrimaryChronology 

 /*  GroupOfDTC definition [symbolic name value], use like UDS DTC Number  */ 

 /*  GroupOfDTC mask definition (internally used)  */ 
#define DEM_CFG_GROUPMASK_ALLDTCS                                     0xFFU 
#define DEM_CFG_GROUPMASK_NONE                                        0x00U 

 /*  Support any kind of OBD ECU, see macro DEM_CFG_SUPPORT_OBD_VARIANT  */ 
#define DEM_OBD_NO_OBD_SUPPORT                                        0U 
#define DEM_OBD_DEP_SEC_ECU                                           1U 
#define DEM_OBD_PRIMARY_ECU                                           2U 
#define DEM_OBD_MASTER_ECU                                            3U 

 /*  Dem general defines  */ 
#define DEM_CFG_BSW_ERROR_BUFFER_SIZE                                 0U                        /* DemBswErrorBufferSize */ 
#define DEM_CFG_DTC_J1939_INVALID                                     0x00FFFFFFUL              /* Internal use: no J1939 DTC Number configured */ 
#define DEM_CFG_DTC_OBD_INVALID                                       0x0000U                   /* Internal use: no OBD DTC Number configured */ 
#define DEM_CFG_DTC_UDS_INVALID                                       0x00FFFFFFUL              /* Internal use: no UDS DTC Number configured */ 
#define DEM_CFG_J1939_NODE_INVALID                                    0U                        /* Invalid NmNode index (Dem internal) */ 
#define DEM_CFG_MAX_NUMBER_EVENT_ENTRY_FREEZEFRAME                    0U                        /* /Dem/DemGeneral/DemMaxNumberEventEntryOBDFreezeFrame */ 
#define DEM_CFG_MAX_NUMBER_EVENT_ENTRY_MIRROR                         0U                        /* /Dem/DemGeneral/DemMaxNumberEventEntryMirror */ 
#define DEM_CFG_MAX_NUMBER_EVENT_ENTRY_PERMANENT                      0U                        /* /Dem/DemGeneral/DemMaxNumberEventEntryPermanent */ 
#define DEM_CFG_MAX_NUMBER_EVENT_ENTRY_PRIMARY                        8U                        /* /Dem/DemGeneral/DemMaxNumberEventEntryPrimary */ 
#define DEM_CFG_MAX_NUMBER_EVENT_ENTRY_SECONDARY                      0U                        /* /Dem/DemGeneral/DemMaxNumberEventEntrySecondary */ 
#define DEM_CFG_MAX_NUMBER_TIMESERIES_SNAPSHOTS                       0U                        /* /Dem/DemGeneral/DemMaxNumberTimeSeriesSnapshots */ 
#define DEM_CFG_RATIOINDEX_INVALID                                    255U                      /* Internal use: no OBD RatioId configured */ 
#define DEM_CFG_SIZEOF_MAX_DATA_VALUE_TYPE                            1U                        /* sizeof(Dem_MaxDataValueType) - typedef is generated by the RTE into Rte_Type.h */ 
#define DEM_CFG_SUPPORT_OBD_VARIANT                                   DEM_OBD_NO_OBD_SUPPORT    /* /Dem/DemGeneral/DemOBDSupport */ 
#define DEM_CFG_TASK_TIME                                             10.0                      /* See macro Dem_Cfg_GlobalTaskMs() for integer value. */ 
#define DEM_G_GLOBAL_PRESTORED_EVENT_COUNT                            0U                        /* Number of events with DemEventClass/DemFFPrestorageSupported == TRUE, see Dem_Cfg_GlobalPrestorageEventCount() */ 
#define DEM_G_MAX_NUMBER_J1939_NODES                                  0U                        /* Number of different targets (=J1939NmNode) with /Dem/DemConfigSet/DemJ1939NodeAddress/DemJ1939NmNodeRef, see also Dem_Cfg_GlobalJ1939NodeCount() */ 
#define DEM_G_MAX_NUMBER_PRESTORED_FF                                 0U                        /* /Dem/DemGeneral/DemMaxNumberPrestoredFF, see Dem_Cfg_GlobalPrestorageSize() */ 
#define DEM_G_NUMBER_OF_EVENTS                                        12U                       /* Total number of DemEventParameter, incl. event #0 */ 
#define DEM_G_NUMBER_OF_INDICATORS                                    0U                        /* Total number of indicators (i.e. incl. MIL, AWL, PL, RSL) */ 
#define DEM_G_NUMBER_OF_RATIO_IDS                                     0U                        /* Number of OBD RatioIds (incl. ID 0, internally used for global values) */ 
#define DEM_G_NUMBER_SPECIAL_INDICATORS                               0U                        /* Number of special indicators (i.e. only MIL, AWL, PL, RSL) */ 

 /*  EnableCondition IDs [symbolic name value]  */ 
 /*  are switched off: (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_OFF)  */ 
 /*  Event Debounce Algorithm definition, returned by Dem_Cfg_EventDebounceType()  */ 
#define DEM_CFG_DEBOUNCETYPE_COUNTER                                  0U 
#define DEM_CFG_DEBOUNCETYPE_TIMER                                    1U 
#define DEM_CFG_DEBOUNCETYPE_EXTERNAL                                 2U 
#define DEM_CFG_DEBOUNCETYPE_INVALID                                  3U 



/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CPCGetConstantDuplicatedRootDataMacros  Dem_C Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define Dem_C_GetCommitBufferOfPCConfig()                             Dem_C_CommitBuffer  /**< the pointer to Dem_C_CommitBuffer */
#define Dem_C_GetConfigurationIdOfPCConfig()                          0x69DDU
#define Dem_C_GetCycleIdTableOfPCConfig()                             Dem_C_CycleIdTable  /**< the pointer to Dem_C_CycleIdTable */
#define Dem_C_GetDataCollectionTableOfPCConfig()                      Dem_C_DataCollectionTable  /**< the pointer to Dem_C_DataCollectionTable */
#define Dem_C_GetDataElementTableOfPCConfig()                         Dem_C_DataElementTable  /**< the pointer to Dem_C_DataElementTable */
#define Dem_C_GetDebounceTableOfPCConfig()                            Dem_C_DebounceTable  /**< the pointer to Dem_C_DebounceTable */
#define Dem_C_GetDtcTableOfPCConfig()                                 Dem_C_DtcTable  /**< the pointer to Dem_C_DtcTable */
#define Dem_C_GetEventAvailableInVariantOfPCConfig()                  Dem_C_EventAvailableInVariant  /**< the pointer to Dem_C_EventAvailableInVariant */
#define Dem_C_GetEventAvailableOfPCConfig()                           Dem_C_EventAvailable  /**< the pointer to Dem_C_EventAvailable */
#define Dem_C_GetEventDebounceValueOfPCConfig()                       Dem_C_EventDebounceValue  /**< the pointer to Dem_C_EventDebounceValue */
#define Dem_C_GetEventInternalStatusOfPCConfig()                      Dem_C_EventInternalStatus  /**< the pointer to Dem_C_EventInternalStatus */
#define Dem_C_GetEventQueueStatusOfPCConfig()                         Dem_C_EventQueueStatus  /**< the pointer to Dem_C_EventQueueStatus */
#define Dem_C_GetEventTableOfPCConfig()                               Dem_C_EventTable  /**< the pointer to Dem_C_EventTable */
#define Dem_C_GetExtendedDataTableOfPCConfig()                        Dem_C_ExtendedDataTable  /**< the pointer to Dem_C_ExtendedDataTable */
#define Dem_C_GetFilterReportedEventsOfPCConfig()                     Dem_C_FilterReportedEvents  /**< the pointer to Dem_C_FilterReportedEvents */
#define Dem_C_GetFreezeFrameTableOfPCConfig()                         Dem_C_FreezeFrameTable  /**< the pointer to Dem_C_FreezeFrameTable */
#define Dem_C_GetGeneralObdInputOfPCConfig()                          Dem_C_GeneralObdInput  /**< the pointer to Dem_C_GeneralObdInput */
#define Dem_C_GetGlobalSeverityMaskOfPCConfig()                       0x00U  /**< Variant specific mask from OR'ed /Dem/DemConfigSet/DemDTCClass/DemDTCSeverity bits. */
#define Dem_C_GetMemoryBlockIdOfPCConfig()                            Dem_C_MemoryBlockId  /**< the pointer to Dem_C_MemoryBlockId */
#define Dem_C_GetMemoryCommitNumberOfPCConfig()                       Dem_C_MemoryCommitNumber  /**< the pointer to Dem_C_MemoryCommitNumber */
#define Dem_C_GetMemoryDataPtrOfPCConfig()                            Dem_C_MemoryDataPtr  /**< the pointer to Dem_C_MemoryDataPtr */
#define Dem_C_GetMemoryEntryInitOfPCConfig()                          Dem_C_MemoryEntryInit  /**< the pointer to Dem_C_MemoryEntryInit */
#define Dem_C_GetMemoryStatusOfPCConfig()                             Dem_C_MemoryStatus  /**< the pointer to Dem_C_MemoryStatus */
#define Dem_C_GetNvAdminDataOfPCConfig()                              Dem_C_NvAdminData  /**< the pointer to Dem_C_NvAdminData */
#define Dem_C_GetNvEventDataOfPCConfig()                              Dem_C_NvEventData  /**< the pointer to Dem_C_NvEventData */
#define Dem_C_GetNvPrimaryEntry_0OfPCConfig()                         Dem_C_NvPrimaryEntry_0  /**< the pointer to Dem_C_NvPrimaryEntry_0 */
#define Dem_C_GetNvPrimaryEntry_1OfPCConfig()                         Dem_C_NvPrimaryEntry_1  /**< the pointer to Dem_C_NvPrimaryEntry_1 */
#define Dem_C_GetNvPrimaryEntry_2OfPCConfig()                         Dem_C_NvPrimaryEntry_2  /**< the pointer to Dem_C_NvPrimaryEntry_2 */
#define Dem_C_GetNvPrimaryEntry_3OfPCConfig()                         Dem_C_NvPrimaryEntry_3  /**< the pointer to Dem_C_NvPrimaryEntry_3 */
#define Dem_C_GetNvPrimaryEntry_4OfPCConfig()                         Dem_C_NvPrimaryEntry_4  /**< the pointer to Dem_C_NvPrimaryEntry_4 */
#define Dem_C_GetNvPrimaryEntry_5OfPCConfig()                         Dem_C_NvPrimaryEntry_5  /**< the pointer to Dem_C_NvPrimaryEntry_5 */
#define Dem_C_GetNvPrimaryEntry_6OfPCConfig()                         Dem_C_NvPrimaryEntry_6  /**< the pointer to Dem_C_NvPrimaryEntry_6 */
#define Dem_C_GetNvPrimaryEntry_7OfPCConfig()                         Dem_C_NvPrimaryEntry_7  /**< the pointer to Dem_C_NvPrimaryEntry_7 */
#define Dem_C_GetPrimaryChronologyOfPCConfig()                        Dem_C_PrimaryChronology  /**< the pointer to Dem_C_PrimaryChronology */
#define Dem_C_GetReadoutBufferOfPCConfig()                            Dem_C_ReadoutBuffer  /**< the pointer to Dem_C_ReadoutBuffer */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCGetDataMacros  Dem_C Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Dem_C_GetCommitBuffer()                                       (Dem_C_GetCommitBufferOfPCConfig())
#define Dem_C_GetOpCycleTypeOfCycleIdTable(Index)                     (Dem_C_GetCycleIdTableOfPCConfig()[(Index)].OpCycleTypeOfCycleIdTable)
#define Dem_C_GetReadDataFuncOfDataElementTable(Index)                (Dem_C_GetDataElementTableOfPCConfig()[(Index)].ReadDataFuncOfDataElementTable)
#define Dem_C_GetEventDebounceAlgorithmOfDebounceTable(Index)         (Dem_C_GetDebounceTableOfPCConfig()[(Index)].EventDebounceAlgorithmOfDebounceTable)
#define Dem_C_GetFailedThresholdOfDebounceTable(Index)                (Dem_C_GetDebounceTableOfPCConfig()[(Index)].FailedThresholdOfDebounceTable)
#define Dem_C_GetIncrementStepSizeOfDebounceTable(Index)              (Dem_C_GetDebounceTableOfPCConfig()[(Index)].IncrementStepSizeOfDebounceTable)
#define Dem_C_GetMaskedBitsOfDebounceTable(Index)                     (Dem_C_GetDebounceTableOfPCConfig()[(Index)].MaskedBitsOfDebounceTable)
#define Dem_C_GetPassedThresholdOfDebounceTable(Index)                (Dem_C_GetDebounceTableOfPCConfig()[(Index)].PassedThresholdOfDebounceTable)
#define Dem_C_GetEventDebounceValue(Index)                            (Dem_C_GetEventDebounceValueOfPCConfig()[(Index)])
#define Dem_C_GetEventInternalStatus(Index)                           (Dem_C_GetEventInternalStatusOfPCConfig()[(Index)])
#define Dem_C_GetEventQueueStatus(Index)                              (Dem_C_GetEventQueueStatusOfPCConfig()[(Index)])
#define Dem_C_GetDebounceTableIdxOfEventTable(Index)                  (Dem_C_GetEventTableOfPCConfig()[(Index)].DebounceTableIdxOfEventTable)
#define Dem_C_GetOperationCycleIdOfEventTable(Index)                  (Dem_C_GetEventTableOfPCConfig()[(Index)].OperationCycleIdOfEventTable)
#define Dem_C_GetFilterReportedEvents(Index)                          (Dem_C_GetFilterReportedEventsOfPCConfig()[(Index)])
#define Dem_C_GetMemoryBlockId(Index)                                 (Dem_C_GetMemoryBlockIdOfPCConfig()[(Index)])
#define Dem_C_GetMemoryCommitNumber(Index)                            (Dem_C_GetMemoryCommitNumberOfPCConfig()[(Index)])
#define Dem_C_GetMemoryDataPtr(Index)                                 (Dem_C_GetMemoryDataPtrOfPCConfig()[(Index)])
#define Dem_C_GetMemoryEntryInit()                                    (Dem_C_GetMemoryEntryInitOfPCConfig())
#define Dem_C_GetMemoryStatus(Index)                                  (Dem_C_GetMemoryStatusOfPCConfig()[(Index)])
#define Dem_C_GetNvAdminData()                                        (Dem_C_GetNvAdminDataOfPCConfig())
#define Dem_C_GetNvEventData()                                        (Dem_C_GetNvEventDataOfPCConfig())
#define Dem_C_GetNvPrimaryEntry_0()                                   (Dem_C_GetNvPrimaryEntry_0OfPCConfig())
#define Dem_C_GetNvPrimaryEntry_1()                                   (Dem_C_GetNvPrimaryEntry_1OfPCConfig())
#define Dem_C_GetNvPrimaryEntry_2()                                   (Dem_C_GetNvPrimaryEntry_2OfPCConfig())
#define Dem_C_GetNvPrimaryEntry_3()                                   (Dem_C_GetNvPrimaryEntry_3OfPCConfig())
#define Dem_C_GetNvPrimaryEntry_4()                                   (Dem_C_GetNvPrimaryEntry_4OfPCConfig())
#define Dem_C_GetNvPrimaryEntry_5()                                   (Dem_C_GetNvPrimaryEntry_5OfPCConfig())
#define Dem_C_GetNvPrimaryEntry_6()                                   (Dem_C_GetNvPrimaryEntry_6OfPCConfig())
#define Dem_C_GetNvPrimaryEntry_7()                                   (Dem_C_GetNvPrimaryEntry_7OfPCConfig())
#define Dem_C_GetPrimaryChronology(Index)                             (Dem_C_GetPrimaryChronologyOfPCConfig()[(Index)])
#define Dem_C_GetReadoutBuffer()                                      (Dem_C_GetReadoutBufferOfPCConfig())
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCGetBitDataMacros  Dem_C Get Bit Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read bitcoded data elements.
  \{
*/ 
#define Dem_C_IsJumpUpOfDebounceTable(Index)                          (DEM_C_JUMPUPOFDEBOUNCETABLE_MASK == (Dem_C_GetMaskedBitsOfDebounceTable(Index) & DEM_C_JUMPUPOFDEBOUNCETABLE_MASK))  /**< DemDebounceCounterJumpUp of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCGetDeduplicatedDataMacros  Dem_C Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Dem_C_GetConfigurationId()                                    Dem_C_GetConfigurationIdOfPCConfig()
#define Dem_C_IsUsedForAgingOfCycleIdTable(Index)                     (((FALSE)) != FALSE)  /**< DemOperationCycle is target of any DemEventParameter/DemEventClass/DemAgingCycleRef */
#define Dem_C_GetCollectionSizeOfDataCollectionTable(Index)           0U
#define Dem_C_GetIdNumberOfDataCollectionTable(Index)                 0x0000U
#define Dem_C_GetStorageKindOfDataCollectionTable(Index)              DEM_CFG_EREC_TYPE_GLOBAL
#define Dem_C_IsUpdateOfDataCollectionTable(Index)                    (((FALSE)) != FALSE)
#define Dem_C_GetElementKindOfDataElementTable(Index)                 32U  /**< see #define DEM_CFG_DATA_FROM_... to interpret results */
#define Dem_C_GetElementSizeOfDataElementTable(Index)                 0U  /**< Size of data element in Byte. */
#define Dem_C_IsDebounceContinuousOfDebounceTable(Index)              (((FALSE)) != FALSE)  /**< DemDebounceContinuous of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased and ~/DemDebounceTimeBase */
#define Dem_C_GetDecrementStepSizeOfDebounceTable(Index)              ((Dem_C_DecrementStepSizeOfDebounceTableType)(((Index) - 1)))  /**< (-1) * DemDebounceCounterDecrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
#define Dem_C_IsEventDebounceBehaviorOfDebounceTable(Index)           (((FALSE)) != FALSE)  /**< DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/[algorithm]/DemDebounceBehavior == DEM_DEBOUNCE_RESET */
#define Dem_C_GetFailTimerCyclesOfDebounceTable(Index)                0  /**< HiRes- or LoRes-Timer ticks for DemDebounceTimeFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceTimeBase */
#define Dem_C_IsJumpDownOfDebounceTable(Index)                        Dem_C_IsJumpUpOfDebounceTable(Index)  /**< DemDebounceCounterJumpDown of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBase */
#define Dem_C_GetJumpDownValueOfDebounceTable(Index)                  0  /**< DemDebounceCounterJumpDownValue of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
#define Dem_C_GetJumpUpValueOfDebounceTable(Index)                    0  /**< DemDebounceCounterJumpUpValue of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
#define Dem_C_GetPassTimerCyclesOfDebounceTable(Index)                0  /**< HiRes- or LoRes-Timer ticks for DemDebounceTimePassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceTimeBase */
#define Dem_C_IsStorageOfDebounceTable(Index)                         (((FALSE)) != FALSE)  /**< DemDebounceCounterStorage of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
#define Dem_C_GetDtcSeverityOfDtcTable(Index)                         0U
#define Dem_C_GetFunctionalUnitOfDtcTable(Index)                      255U
#define Dem_C_IsImmediateNvStorageOfDtcTable(Index)                   (((FALSE)) != FALSE)
#define Dem_C_GetUdsDtcOfDtcTable(Index)                              0x00FFFFFFUL
#define Dem_C_IsEventAvailable(Index)                                 (((TRUE)) != FALSE)
#define Dem_C_IsEventAvailableInVariant(Index)                        (((TRUE)) != FALSE)
#define Dem_C_IsAgingAllowedOfEventTable(Index)                       (((FALSE)) != FALSE)  /**< DemAgingAllowed of the DemEventParameter/DemEventClass */
#define Dem_C_GetAgingCycleCounterThresholdOfEventTable(Index)        255U  /**< DemAgingCycleCounterThreshold of the DemEventParameter/DemEventClass, if AgingAllowedOfEventTable==FALSE we use '255' here, too. */
#define Dem_C_GetAgingCycleIdOfEventTable(Index)                      /*no AgingCycle*/ 2U  /**< DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemAgingCycleRef */
#define Dem_C_GetDtcTableIdxOfEventTable(Index)                       0U  /**< the index of the 1:1 relation pointing to Dem_C_DtcTable */
#define Dem_C_GetEventDestinationOfEventTable(Index)                  DEM_CFG_MEMORYID_PRIMARY  /**< DemEventDestination of the DemEventParameter/DemEventClass */
#define Dem_C_GetEventFailureCycleCounterThresholdOfEventTable(Index) 0U  /**< DemEventFailureCycleCounterThreshold of the DemEventParameter/DemEventClass, '0': parameter is unset */
#define Dem_C_GetEventFailureCycleIdOfEventTable(Index)               /*no EventFailureCycle*/ 2U  /**< ID of the cycle, referenced by DemEventParameter/DemEventClass/DemEventFailureCycleRef */
#define Dem_C_GetEventKindOfEventTable(Index)                         DEM_C_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE  /**< DemEventKind of the DemEventParameter */
#define Dem_C_IsEventLatchTFOfEventTable(Index)                       (((FALSE)) != FALSE)  /**< DemEventLatchTestFailed of the DemEventParameter */
#define Dem_C_GetEventPriorityOfEventTable(Index)                     2U  /**< DemEventParameter/DemEventClass/DemEventPriority, values [1..255] for the configuration range [1..255]. */
#define Dem_C_GetEventSignificanceOfEventTable(Index)                 DEM_C_DEM_EVENT_SIGNIFICANCE_FAULT_EVENTSIGNIFICANCEOFEVENTTABLE  /**< DemEventSignificance of the DemEventParameter/DemEventClass */
#define Dem_C_GetExtendedDataTableIdxOfEventTable(Index)              0U  /**< the index of the 1:1 relation pointing to Dem_C_ExtendedDataTable */
#define Dem_C_GetFreezeFrameTableStdFFIdxOfEventTable(Index)          0U  /**< the index of the 1:1 relation pointing to Dem_C_FreezeFrameTable */
#define Dem_C_GetHealingTargetOfEventTable(Index)                     0U  /**< DemIndicatorHealingCycleCounterThreshold of the DemEventParameter/DemEventClass/DemIndicatorAttribute (for each event all attribute's value must be identical). Events without DemIndicatorAttribute have: 0. */
#define Dem_C_GetMaskedBitsOfEventTable(Index)                        0x00U  /**< contains bitcoded the boolean data of Dem_C_AgingAllowedOfEventTable, Dem_C_EventLatchTFOfEventTable */
#define Dem_C_GetMaxRecordSizeOfExtendedDataTable(Index)              0U
#define Dem_C_GetRecordSizeOfFreezeFrameTable(Index)                  0U  /**< Summarized size of did data that is stored in Dem_Cfg_PrimaryEntryType.SnapshotData[][] (i.e. typically without size of dids containing internal data elements). */
#define Dem_C_GetRecordSizeUdsOfFreezeFrameTable(Index)               0U  /**< Summarized size of did data, did numbers and snapshot header (i.e. dynamical payload size of the uds response message). */
#define Dem_C_GetDataElementTableIdxOfGeneralObdInput(Index)          0U  /**< the index of the 1:1 relation pointing to Dem_C_DataElementTable */
#define Dem_C_GetGlobalSeverityMask()                                 Dem_C_GetGlobalSeverityMaskOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCSetDataMacros  Dem_C Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Dem_C_SetCommitBuffer(Value)                                  Dem_C_GetCommitBufferOfPCConfig() = (Value)
#define Dem_C_SetEventDebounceValue(Index, Value)                     Dem_C_GetEventDebounceValueOfPCConfig()[(Index)] = (Value)
#define Dem_C_SetEventInternalStatus(Index, Value)                    Dem_C_GetEventInternalStatusOfPCConfig()[(Index)] = (Value)
#define Dem_C_SetEventQueueStatus(Index, Value)                       Dem_C_GetEventQueueStatusOfPCConfig()[(Index)] = (Value)
#define Dem_C_SetFilterReportedEvents(Index, Value)                   Dem_C_GetFilterReportedEventsOfPCConfig()[(Index)] = (Value)
#define Dem_C_SetMemoryCommitNumber(Index, Value)                     Dem_C_GetMemoryCommitNumberOfPCConfig()[(Index)] = (Value)
#define Dem_C_SetMemoryStatus(Index, Value)                           Dem_C_GetMemoryStatusOfPCConfig()[(Index)] = (Value)
#define Dem_C_SetNvAdminData(Value)                                   Dem_C_GetNvAdminDataOfPCConfig() = (Value)
#define Dem_C_SetNvEventData(Value)                                   Dem_C_GetNvEventDataOfPCConfig() = (Value)
#define Dem_C_SetNvPrimaryEntry_0(Value)                              Dem_C_GetNvPrimaryEntry_0OfPCConfig() = (Value)
#define Dem_C_SetNvPrimaryEntry_1(Value)                              Dem_C_GetNvPrimaryEntry_1OfPCConfig() = (Value)
#define Dem_C_SetNvPrimaryEntry_2(Value)                              Dem_C_GetNvPrimaryEntry_2OfPCConfig() = (Value)
#define Dem_C_SetNvPrimaryEntry_3(Value)                              Dem_C_GetNvPrimaryEntry_3OfPCConfig() = (Value)
#define Dem_C_SetNvPrimaryEntry_4(Value)                              Dem_C_GetNvPrimaryEntry_4OfPCConfig() = (Value)
#define Dem_C_SetNvPrimaryEntry_5(Value)                              Dem_C_GetNvPrimaryEntry_5OfPCConfig() = (Value)
#define Dem_C_SetNvPrimaryEntry_6(Value)                              Dem_C_GetNvPrimaryEntry_6OfPCConfig() = (Value)
#define Dem_C_SetNvPrimaryEntry_7(Value)                              Dem_C_GetNvPrimaryEntry_7OfPCConfig() = (Value)
#define Dem_C_SetPrimaryChronology(Index, Value)                      Dem_C_GetPrimaryChronologyOfPCConfig()[(Index)] = (Value)
#define Dem_C_SetReadoutBuffer(Value)                                 Dem_C_GetReadoutBufferOfPCConfig() = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCHasMacros  Dem_C Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Dem_C_HasCommitBuffer()                                       (TRUE != FALSE)
#define Dem_C_HasConfigurationId()                                    (TRUE != FALSE)
#define Dem_C_HasCycleIdTable()                                       (TRUE != FALSE)
#define Dem_C_HasOpCycleTypeOfCycleIdTable()                          (TRUE != FALSE)
#define Dem_C_HasUsedForAgingOfCycleIdTable()                         (TRUE != FALSE)
#define Dem_C_HasDataCollectionTable()                                (TRUE != FALSE)
#define Dem_C_HasCollectionSizeOfDataCollectionTable()                (TRUE != FALSE)
#define Dem_C_HasIdNumberOfDataCollectionTable()                      (TRUE != FALSE)
#define Dem_C_HasStorageKindOfDataCollectionTable()                   (TRUE != FALSE)
#define Dem_C_HasUpdateOfDataCollectionTable()                        (TRUE != FALSE)
#define Dem_C_HasDataElementTable()                                   (TRUE != FALSE)
#define Dem_C_HasElementKindOfDataElementTable()                      (TRUE != FALSE)
#define Dem_C_HasElementSizeOfDataElementTable()                      (TRUE != FALSE)
#define Dem_C_HasReadDataFuncOfDataElementTable()                     (TRUE != FALSE)
#define Dem_C_HasDebounceTable()                                      (TRUE != FALSE)
#define Dem_C_HasDebounceContinuousOfDebounceTable()                  (TRUE != FALSE)
#define Dem_C_HasDecrementStepSizeOfDebounceTable()                   (TRUE != FALSE)
#define Dem_C_HasEventDebounceAlgorithmOfDebounceTable()              (TRUE != FALSE)
#define Dem_C_HasEventDebounceBehaviorOfDebounceTable()               (TRUE != FALSE)
#define Dem_C_HasFailTimerCyclesOfDebounceTable()                     (TRUE != FALSE)
#define Dem_C_HasFailedThresholdOfDebounceTable()                     (TRUE != FALSE)
#define Dem_C_HasIncrementStepSizeOfDebounceTable()                   (TRUE != FALSE)
#define Dem_C_HasJumpDownOfDebounceTable()                            (TRUE != FALSE)
#define Dem_C_HasJumpDownValueOfDebounceTable()                       (TRUE != FALSE)
#define Dem_C_HasJumpUpOfDebounceTable()                              (TRUE != FALSE)
#define Dem_C_HasJumpUpValueOfDebounceTable()                         (TRUE != FALSE)
#define Dem_C_HasMaskedBitsOfDebounceTable()                          (TRUE != FALSE)
#define Dem_C_HasPassTimerCyclesOfDebounceTable()                     (TRUE != FALSE)
#define Dem_C_HasPassedThresholdOfDebounceTable()                     (TRUE != FALSE)
#define Dem_C_HasStorageOfDebounceTable()                             (TRUE != FALSE)
#define Dem_C_HasDtcTable()                                           (TRUE != FALSE)
#define Dem_C_HasDtcSeverityOfDtcTable()                              (TRUE != FALSE)
#define Dem_C_HasFunctionalUnitOfDtcTable()                           (TRUE != FALSE)
#define Dem_C_HasImmediateNvStorageOfDtcTable()                       (TRUE != FALSE)
#define Dem_C_HasUdsDtcOfDtcTable()                                   (TRUE != FALSE)
#define Dem_C_HasEventAvailable()                                     (TRUE != FALSE)
#define Dem_C_HasEventAvailableInVariant()                            (TRUE != FALSE)
#define Dem_C_HasEventDebounceValue()                                 (TRUE != FALSE)
#define Dem_C_HasEventInternalStatus()                                (TRUE != FALSE)
#define Dem_C_HasEventQueueStatus()                                   (TRUE != FALSE)
#define Dem_C_HasEventTable()                                         (TRUE != FALSE)
#define Dem_C_HasAgingAllowedOfEventTable()                           (TRUE != FALSE)
#define Dem_C_HasAgingCycleCounterThresholdOfEventTable()             (TRUE != FALSE)
#define Dem_C_HasAgingCycleIdOfEventTable()                           (TRUE != FALSE)
#define Dem_C_HasDebounceTableIdxOfEventTable()                       (TRUE != FALSE)
#define Dem_C_HasDtcTableIdxOfEventTable()                            (TRUE != FALSE)
#define Dem_C_HasEventDestinationOfEventTable()                       (TRUE != FALSE)
#define Dem_C_HasEventFailureCycleCounterThresholdOfEventTable()      (TRUE != FALSE)
#define Dem_C_HasEventFailureCycleIdOfEventTable()                    (TRUE != FALSE)
#define Dem_C_HasEventKindOfEventTable()                              (TRUE != FALSE)
#define Dem_C_HasEventLatchTFOfEventTable()                           (TRUE != FALSE)
#define Dem_C_HasEventPriorityOfEventTable()                          (TRUE != FALSE)
#define Dem_C_HasEventSignificanceOfEventTable()                      (TRUE != FALSE)
#define Dem_C_HasExtendedDataTableIdxOfEventTable()                   (TRUE != FALSE)
#define Dem_C_HasFreezeFrameTableStdFFIdxOfEventTable()               (TRUE != FALSE)
#define Dem_C_HasHealingTargetOfEventTable()                          (TRUE != FALSE)
#define Dem_C_HasMaskedBitsOfEventTable()                             (TRUE != FALSE)
#define Dem_C_HasOperationCycleIdOfEventTable()                       (TRUE != FALSE)
#define Dem_C_HasExtendedDataTable()                                  (TRUE != FALSE)
#define Dem_C_HasMaxRecordSizeOfExtendedDataTable()                   (TRUE != FALSE)
#define Dem_C_HasFilterReportedEvents()                               (TRUE != FALSE)
#define Dem_C_HasFreezeFrameTable()                                   (TRUE != FALSE)
#define Dem_C_HasRecordSizeOfFreezeFrameTable()                       (TRUE != FALSE)
#define Dem_C_HasRecordSizeUdsOfFreezeFrameTable()                    (TRUE != FALSE)
#define Dem_C_HasGeneralObdInput()                                    (TRUE != FALSE)
#define Dem_C_HasDataElementTableIdxOfGeneralObdInput()               (TRUE != FALSE)
#define Dem_C_HasGlobalSeverityMask()                                 (TRUE != FALSE)
#define Dem_C_HasMemoryBlockId()                                      (TRUE != FALSE)
#define Dem_C_HasMemoryCommitNumber()                                 (TRUE != FALSE)
#define Dem_C_HasMemoryDataPtr()                                      (TRUE != FALSE)
#define Dem_C_HasMemoryEntryInit()                                    (TRUE != FALSE)
#define Dem_C_HasMemoryStatus()                                       (TRUE != FALSE)
#define Dem_C_HasNvAdminData()                                        (TRUE != FALSE)
#define Dem_C_HasNvEventData()                                        (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_0()                                   (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_1()                                   (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_2()                                   (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_3()                                   (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_4()                                   (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_5()                                   (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_6()                                   (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_7()                                   (TRUE != FALSE)
#define Dem_C_HasPrimaryChronology()                                  (TRUE != FALSE)
#define Dem_C_HasReadoutBuffer()                                      (TRUE != FALSE)
#define Dem_HasPCConfig()                                             (TRUE != FALSE)
#define Dem_C_HasCommitBufferOfPCConfig()                             (TRUE != FALSE)
#define Dem_C_HasConfigurationIdOfPCConfig()                          (TRUE != FALSE)
#define Dem_C_HasCycleIdTableOfPCConfig()                             (TRUE != FALSE)
#define Dem_C_HasDataCollectionTableOfPCConfig()                      (TRUE != FALSE)
#define Dem_C_HasDataElementTableOfPCConfig()                         (TRUE != FALSE)
#define Dem_C_HasDebounceTableOfPCConfig()                            (TRUE != FALSE)
#define Dem_C_HasDtcTableOfPCConfig()                                 (TRUE != FALSE)
#define Dem_C_HasEventAvailableInVariantOfPCConfig()                  (TRUE != FALSE)
#define Dem_C_HasEventAvailableOfPCConfig()                           (TRUE != FALSE)
#define Dem_C_HasEventDebounceValueOfPCConfig()                       (TRUE != FALSE)
#define Dem_C_HasEventInternalStatusOfPCConfig()                      (TRUE != FALSE)
#define Dem_C_HasEventQueueStatusOfPCConfig()                         (TRUE != FALSE)
#define Dem_C_HasEventTableOfPCConfig()                               (TRUE != FALSE)
#define Dem_C_HasExtendedDataTableOfPCConfig()                        (TRUE != FALSE)
#define Dem_C_HasFilterReportedEventsOfPCConfig()                     (TRUE != FALSE)
#define Dem_C_HasFreezeFrameTableOfPCConfig()                         (TRUE != FALSE)
#define Dem_C_HasGeneralObdInputOfPCConfig()                          (TRUE != FALSE)
#define Dem_C_HasGlobalSeverityMaskOfPCConfig()                       (TRUE != FALSE)
#define Dem_C_HasMemoryBlockIdOfPCConfig()                            (TRUE != FALSE)
#define Dem_C_HasMemoryCommitNumberOfPCConfig()                       (TRUE != FALSE)
#define Dem_C_HasMemoryDataPtrOfPCConfig()                            (TRUE != FALSE)
#define Dem_C_HasMemoryEntryInitOfPCConfig()                          (TRUE != FALSE)
#define Dem_C_HasMemoryStatusOfPCConfig()                             (TRUE != FALSE)
#define Dem_C_HasNvAdminDataOfPCConfig()                              (TRUE != FALSE)
#define Dem_C_HasNvEventDataOfPCConfig()                              (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_0OfPCConfig()                         (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_1OfPCConfig()                         (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_2OfPCConfig()                         (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_3OfPCConfig()                         (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_4OfPCConfig()                         (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_5OfPCConfig()                         (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_6OfPCConfig()                         (TRUE != FALSE)
#define Dem_C_HasNvPrimaryEntry_7OfPCConfig()                         (TRUE != FALSE)
#define Dem_C_HasPrimaryChronologyOfPCConfig()                        (TRUE != FALSE)
#define Dem_C_HasReadoutBufferOfPCConfig()                            (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCIncrementDataMacros  Dem_C Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Dem_C_IncCommitBuffer()                                       Dem_C_GetCommitBuffer()++
#define Dem_C_IncEventDebounceValue(Index)                            Dem_C_GetEventDebounceValue(Index)++
#define Dem_C_IncEventInternalStatus(Index)                           Dem_C_GetEventInternalStatus(Index)++
#define Dem_C_IncEventQueueStatus(Index)                              Dem_C_GetEventQueueStatus(Index)++
#define Dem_C_IncFilterReportedEvents(Index)                          Dem_C_GetFilterReportedEvents(Index)++
#define Dem_C_IncMemoryCommitNumber(Index)                            Dem_C_GetMemoryCommitNumber(Index)++
#define Dem_C_IncMemoryStatus(Index)                                  Dem_C_GetMemoryStatus(Index)++
#define Dem_C_IncNvAdminData()                                        Dem_C_GetNvAdminData()++
#define Dem_C_IncNvEventData()                                        Dem_C_GetNvEventData()++
#define Dem_C_IncNvPrimaryEntry_0()                                   Dem_C_GetNvPrimaryEntry_0()++
#define Dem_C_IncNvPrimaryEntry_1()                                   Dem_C_GetNvPrimaryEntry_1()++
#define Dem_C_IncNvPrimaryEntry_2()                                   Dem_C_GetNvPrimaryEntry_2()++
#define Dem_C_IncNvPrimaryEntry_3()                                   Dem_C_GetNvPrimaryEntry_3()++
#define Dem_C_IncNvPrimaryEntry_4()                                   Dem_C_GetNvPrimaryEntry_4()++
#define Dem_C_IncNvPrimaryEntry_5()                                   Dem_C_GetNvPrimaryEntry_5()++
#define Dem_C_IncNvPrimaryEntry_6()                                   Dem_C_GetNvPrimaryEntry_6()++
#define Dem_C_IncNvPrimaryEntry_7()                                   Dem_C_GetNvPrimaryEntry_7()++
#define Dem_C_IncPrimaryChronology(Index)                             Dem_C_GetPrimaryChronology(Index)++
#define Dem_C_IncReadoutBuffer()                                      Dem_C_GetReadoutBuffer()++
/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCDecrementDataMacros  Dem_C Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Dem_C_DecCommitBuffer()                                       Dem_C_GetCommitBuffer()--
#define Dem_C_DecEventDebounceValue(Index)                            Dem_C_GetEventDebounceValue(Index)--
#define Dem_C_DecEventInternalStatus(Index)                           Dem_C_GetEventInternalStatus(Index)--
#define Dem_C_DecEventQueueStatus(Index)                              Dem_C_GetEventQueueStatus(Index)--
#define Dem_C_DecFilterReportedEvents(Index)                          Dem_C_GetFilterReportedEvents(Index)--
#define Dem_C_DecMemoryCommitNumber(Index)                            Dem_C_GetMemoryCommitNumber(Index)--
#define Dem_C_DecMemoryStatus(Index)                                  Dem_C_GetMemoryStatus(Index)--
#define Dem_C_DecNvAdminData()                                        Dem_C_GetNvAdminData()--
#define Dem_C_DecNvEventData()                                        Dem_C_GetNvEventData()--
#define Dem_C_DecNvPrimaryEntry_0()                                   Dem_C_GetNvPrimaryEntry_0()--
#define Dem_C_DecNvPrimaryEntry_1()                                   Dem_C_GetNvPrimaryEntry_1()--
#define Dem_C_DecNvPrimaryEntry_2()                                   Dem_C_GetNvPrimaryEntry_2()--
#define Dem_C_DecNvPrimaryEntry_3()                                   Dem_C_GetNvPrimaryEntry_3()--
#define Dem_C_DecNvPrimaryEntry_4()                                   Dem_C_GetNvPrimaryEntry_4()--
#define Dem_C_DecNvPrimaryEntry_5()                                   Dem_C_GetNvPrimaryEntry_5()--
#define Dem_C_DecNvPrimaryEntry_6()                                   Dem_C_GetNvPrimaryEntry_6()--
#define Dem_C_DecNvPrimaryEntry_7()                                   Dem_C_GetNvPrimaryEntry_7()--
#define Dem_C_DecPrimaryChronology(Index)                             Dem_C_GetPrimaryChronology(Index)--
#define Dem_C_DecReadoutBuffer()                                      Dem_C_GetReadoutBuffer()--
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/
#define Dem_Cfg_CycleIsAging(cycleId)                                 ((boolean)(Dem_C_IsUsedForAgingOfCycleIdTable((cycleId))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_CycleIsAutomaticEnd(cycleId)                          ((boolean)(false))  /* (DEM_CFG_SUPPORT_OPCYCLE_AUTOMATIC_END == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_CycleIsIgnition(cycleId)                              ((boolean)(Dem_C_GetOpCycleTypeOfCycleIdTable((cycleId)) == DEM_CFG_OPCYC_IGNITION))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_CycleIsIgnitionHybrid(cycleId)                        ((boolean)(Dem_C_GetOpCycleTypeOfCycleIdTable((cycleId)) == DEM_CFG_OPCYC_IGNITION_HYBRID))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_CycleIsObdDcy(cycleId)                                ((boolean)(Dem_C_GetOpCycleTypeOfCycleIdTable((cycleId)) == DEM_CFG_OPCYC_OBD_DCY))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_CycleIsOperation(cycleId)                             ((boolean)(Dem_C_GetOpCycleTypeOfCycleIdTable((cycleId)) != DEM_CFG_OPCYC_AGING))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_CycleIsOther(cycleId)                                 ((boolean)(Dem_C_GetOpCycleTypeOfCycleIdTable((cycleId)) == DEM_CFG_OPCYC_OTHER))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_CycleIsPower(cycleId)                                 ((boolean)(Dem_C_GetOpCycleTypeOfCycleIdTable((cycleId)) == DEM_CFG_OPCYC_POWER))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_CycleIsTime(cycleId)                                  ((boolean)(Dem_C_GetOpCycleTypeOfCycleIdTable((cycleId)) == DEM_CFG_OPCYC_TIME))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_CycleIsWarmup(cycleId)                                ((boolean)(Dem_C_GetOpCycleTypeOfCycleIdTable((cycleId)) == DEM_CFG_OPCYC_WARMUP))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DataCallbackType(dataElementIndex)                    ((uint8)(Dem_C_GetElementKindOfDataElementTable((dataElementIndex))))  /* see #define DEM_CFG_DATA_FROM_... to interpret results */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DataCbkRead(dataElementIndex)                         ((Dem_ReadDataFPtrType)(Dem_C_GetReadDataFuncOfDataElementTable((dataElementIndex))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DataSize(dataElementIndex)                            ((uint8)(Dem_C_GetElementSizeOfDataElementTable((dataElementIndex))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DebounceHiResIterExists(iterPtr)                      ((boolean)(FALSE))  /* Empty table/macro Dem_C_GetDebounceHiResTable(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DebounceHiResIterGet(iterPtr)                         ((uint16)(0))  /* returns: eventId - Empty table/macro Dem_C_GetDebounceHiResTable(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DebounceHiResIterInit(iterPtr)                          /* Empty table/macro Dem_C_GetDebounceHiResTable(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DebounceHiResIterNext(iterPtr)                          /* Empty table/macro Dem_C_GetDebounceHiResTable(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DebounceLoResIterExists(iterPtr)                      ((boolean)(FALSE))  /* Empty table/macro Dem_C_GetDebounceLoResTable(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DebounceLoResIterGet(iterPtr)                         ((uint16)(0))  /* returns: eventId - Empty table/macro Dem_C_GetDebounceLoResTable(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DebounceLoResIterInit(iterPtr)                          /* Empty table/macro Dem_C_GetDebounceLoResTable(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DebounceLoResIterNext(iterPtr)                          /* Empty table/macro Dem_C_GetDebounceLoResTable(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DebounceLoResTimerValue()                             ((uint8)(15U))  /* Ticks of the low resolution timer, based on Dem_MainFunction() call cycle [10.0ms]. Tick count here equals 150.0ms. */ 
#define Dem_Cfg_DidBufferIndexFast(didIndex)                          ((uint16)(0))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DidBufferIndexNormal(didIndex)                        ((uint16)(0))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DidDataIterExists(didIndex, iterPtr)                  ((boolean)((iterPtr)->mIdx < (iterPtr)->mEndIdx))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DidDataIterGet(didIndex, iterPtr)                     ((uint8)(Dem_C_GetDataElementTableCol2ElmtInd((iterPtr)->mIdx)))  /* returns: dataElementIndex */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DidDataIterInit(didIndex, iterPtr)                    ((void)((iterPtr)->mIdx = Dem_C_GetDataElementTableCol2ElmtIndStartIdxOfDataCollectionTable((didIndex)), (iterPtr)->mEndIdx = Dem_C_GetDataElementTableCol2ElmtIndEndIdxOfDataCollectionTable((didIndex))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DidDataIterNext(didIndex, iterPtr)                    ((void)((iterPtr)->mIdx = (uint8_least)((iterPtr)->mIdx + 1)))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DidNumber(didIndex)                                   ((uint16)(Dem_C_GetIdNumberOfDataCollectionTable((didIndex))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_DidSize(didIndex)                                     ((uint16)(Dem_C_GetCollectionSizeOfDataCollectionTable((didIndex))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_ERecDid(didIndex)                                     ((Dem_Cfg_DidIndexType)((didIndex)))  /* Extended Data uses generic DataCollection access */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_ERecType(didIndex)                                    ((uint8)(Dem_C_GetStorageKindOfDataCollectionTable((didIndex))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_ERecUpdate(didIndex)                                  ((boolean)(Dem_C_IsUpdateOfDataCollectionTable((didIndex))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventAgingCycle(eventId)                              ((uint8)(Dem_C_GetAgingCycleIdOfEventTable((eventId))))  /* Events without aging return the invalid cycleId Dem_Cfg_GlobalCycleCount() (=2) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventAgingTarget(eventId)                             ((uint8)(Dem_C_GetAgingCycleCounterThresholdOfEventTable((eventId))))  /* Value limited to [0..255], 255 also used for events with Dem_Cfg_EventSupportAging() == FALSE (DemAgingAllowed==false); default for optional config parameter DemAgingCycleCounterThreshold is 0 */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventAvailable(eventId)                               ((boolean)(Dem_C_IsEventAvailable((eventId))))  /* Variants that contain events: UnfilteredInvariantProjectModelView */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventAvailableInVariant(eventId)                      ((boolean)(Dem_C_IsEventAvailableInVariant((eventId))))  /* Variants that contain events: UnfilteredInvariantProjectModelView */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventCbkClearAllowed(eventId)                         ((Dem_ClearEventAllowedFPtrType)(NULL_PTR))  /* (DEM_C_CALLBACKCLEAREVENTALLOWED == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventCbkData(eventId)                                 ((Dem_EventDataChangedFPtrType)(NULL_PTR))  /* (DEM_C_EVENTDATACHANGED == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventCbkGetFDC()                                        /* (DEM_CFG_SUPPORT_DEBOUNCE_MONITORINTERNAL == STD_OFF) */ 
#define Dem_Cfg_EventCbkInitFuncIterExists(eventId, iterPtr)          ((boolean)(FALSE))  /* (DEM_C_INITMONITORSFORFUNC == STD_OFF) - Empty table/macro Dem_C_GetInitMonitorsForFunc(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventCbkInitFuncIterGet(eventId, iterPtr)             ((Dem_InitMonitorForFuncFPtrType)(0))  /* returntype: Dem_InitMonitorForFuncFPtrType - (DEM_C_INITMONITORSFORFUNC == STD_OFF) - Empty table/macro Dem_C_GetInitMonitorsForFunc(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventCbkInitFuncIterInit(eventId, iterPtr)              /* (DEM_C_INITMONITORSFORFUNC == STD_OFF) - Empty table/macro Dem_C_GetInitMonitorsForFunc(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventCbkInitFuncIterNext(eventId, iterPtr)              /* (DEM_C_INITMONITORSFORFUNC == STD_OFF) - Empty table/macro Dem_C_GetInitMonitorsForFunc(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventCbkInitMonitor(eventId)                          ((Dem_InitMonitorForEventFPtrType)(NULL_PTR))  /* (DEM_C_INITMONITORFOREVENT == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventCbkStatusIterExists(eventId, iterPtr)            ((boolean)(FALSE))  /* (DEM_C_EVENTSTATUSCHANGED == STD_OFF) - Empty table/macro Dem_C_GetEventStatusChanged(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventCbkStatusIterGet(eventId, iterPtr)               ((Dem_EventStatusChangedFPtrType)(0))  /* returntype: Dem_EventStatusChangedFPtrType - (DEM_C_EVENTSTATUSCHANGED == STD_OFF) - Empty table/macro Dem_C_GetEventStatusChanged(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventCbkStatusIterInit(eventId, iterPtr)                /* (DEM_C_EVENTSTATUSCHANGED == STD_OFF) - Empty table/macro Dem_C_GetEventStatusChanged(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventCbkStatusIterNext(eventId, iterPtr)                /* (DEM_C_EVENTSTATUSCHANGED == STD_OFF) - Empty table/macro Dem_C_GetEventStatusChanged(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventDebounceContinuous(eventId)                      ((boolean)(Dem_C_IsDebounceContinuousOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventDebounceReset(eventId)                           ((boolean)(Dem_C_IsEventDebounceBehaviorOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* DemDebounceAlgorithmClass/[Counter or Time algorithm]/DemDebounceBehavior == DEM_DEBOUNCE_RESET */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventDebounceType(eventId)                            ((uint8)(Dem_C_GetEventDebounceAlgorithmOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventDestination(eventId)                             ((uint8)(Dem_C_GetEventDestinationOfEventTable((eventId))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventDidIterExists(eventId, iterPtr)                  ((boolean)((iterPtr)->mIdx < (iterPtr)->mEndIdx))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventDidIterGet(eventId, iterPtr)                     ((uint8)(Dem_C_GetDataCollectionTableFfm2CollInd((iterPtr)->mIdx)))  /* returns: didIndex */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventDidIterInit(eventId, iterPtr)                    ((void)((iterPtr)->mIdx = Dem_C_GetDataCollectionTableFfm2CollIndStartIdxOfFreezeFrameTable(Dem_C_GetFreezeFrameTableStdFFIdxOfEventTable((eventId))), (iterPtr)->mEndIdx = Dem_C_GetDataCollectionTableFfm2CollIndEndIdxOfFreezeFrameTable(Dem_C_GetFreezeFrameTableStdFFIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventDidIterNext(eventId, iterPtr)                    ((void)((iterPtr)->mIdx = (uint8_least)((iterPtr)->mIdx + 1)))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventERecIterExists(eventId, iterPtr)                 ((boolean)((iterPtr)->mIdx < (iterPtr)->mEndIdx))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventERecIterGet(eventId, iterPtr)                    ((uint8)(Dem_C_GetDataCollectionTableEdr2CollInd((iterPtr)->mIdx)))  /* returns: didIndex */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventERecIterInit(eventId, iterPtr)                   ((void)((iterPtr)->mIdx = Dem_C_GetDataCollectionTableEdr2CollIndStartIdxOfExtendedDataTable(Dem_C_GetExtendedDataTableIdxOfEventTable((eventId))), (iterPtr)->mEndIdx = Dem_C_GetDataCollectionTableEdr2CollIndEndIdxOfExtendedDataTable(Dem_C_GetExtendedDataTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventERecIterNext(eventId, iterPtr)                   ((void)((iterPtr)->mIdx = (uint8_least)((iterPtr)->mIdx + 1)))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventEnableConditions(eventId)                        ((uint32)(1))  /* (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventFailedTarget(eventId)                            ((sint16)(Dem_C_GetFailedThresholdOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventFailedTime(eventId)                              ((sint16)(Dem_C_GetFailTimerCyclesOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* in HiRes or LowRes cycles */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventFailureCycle(eventId)                            ((uint8)(Dem_C_GetEventFailureCycleIdOfEventTable((eventId))))  /* Events without event failure cycle return the invalid cycleId Dem_Cfg_GlobalCycleCount() (=2) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventFunctionalUnit(eventId)                          ((uint8)(Dem_C_GetFunctionalUnitOfDtcTable(Dem_C_GetDtcTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventHealingTarget(eventId)                           ((uint8)(Dem_C_GetHealingTargetOfEventTable((eventId))))  /* Return 0 here also for events without IndicatorHealingCycleCounterThreshold config value. */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventIndicatorIterExists(eventId, iterPtr)            ((boolean)(FALSE))  /* (DEM_C_NORMALINDICATORTABLE == STD_OFF) - Empty table/macro iterPtr */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventIndicatorIterGet(eventId, iterPtr)               ((Dem_Cfg_IndicatorIndexType)(0))  /* returns: eventIndicatorIndex - (DEM_C_NORMALINDICATORTABLE == STD_OFF) - Empty table/macro iterPtr */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventIndicatorIterInit(eventId, iterPtr)                /* (DEM_C_NORMALINDICATORTABLE == STD_OFF) - Empty table/macro iterPtr */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventIndicatorIterNext(eventId, iterPtr)                /* (DEM_C_NORMALINDICATORTABLE == STD_OFF) - Empty table/macro iterPtr */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventJ1939Dtc(eventId)                                  /* (DEM_CFG_SUPPORT_J1939 == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventJ1939NodeIterExists(eventId, iterPtr)            ((boolean)(FALSE))  /* (DEM_C_J1939NODEID == STD_OFF) - Empty table/macro Dem_C_GetJ1939NodeIdInd(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventJ1939NodeIterGet(eventId, iterPtr)               ((uint8)(0))  /* returns: nmNodeIndex - (DEM_C_J1939NODEID == STD_OFF) - Empty table/macro Dem_C_GetJ1939NodeIdInd(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventJ1939NodeIterInit(eventId, iterPtr)                /* (DEM_C_J1939NODEID == STD_OFF) - Empty table/macro Dem_C_GetJ1939NodeIdInd(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventJ1939NodeIterNext(eventId, iterPtr)                /* (DEM_C_J1939NODEID == STD_OFF) - Empty table/macro Dem_C_GetJ1939NodeIdInd(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventJumpDownValue(eventId)                           ((sint16)(Dem_C_GetJumpDownValueOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventJumpUpValue(eventId)                             ((sint16)(Dem_C_GetJumpUpValueOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventKind(eventId)                                    ((uint8)(Dem_C_GetEventKindOfEventTable((eventId))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventLatchTestFailed(eventId)                         ((boolean)(Dem_C_IsEventLatchTFOfEventTable((eventId))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventObdDtc(eventId)                                    /* (DEM_CFG_SUPPORT_OBDII == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventOperationCycle(eventId)                          ((uint8)(Dem_C_GetOperationCycleIdOfEventTable((eventId))))  /* Events without operation cycle return the invalid cycleId Dem_Cfg_GlobalCycleCount() (=2) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventPassedTarget(eventId)                            ((sint16)(Dem_C_GetPassedThresholdOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventPassedTime(eventId)                              ((sint16)(Dem_C_GetPassTimerCyclesOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* in HiRes or LowRes cycles */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventPreconfirmedTarget(eventId)                      ((uint16)(Dem_C_GetPreconfirmedThresholdOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventPrefailedStep(eventId)                           ((sint16)(Dem_C_GetIncrementStepSizeOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventPrepassedStep(eventId)                           ((sint16)(Dem_C_GetDecrementStepSizeOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventPrestorageIndex(eventId)                         ((uint16)(0U))  /* No event has DemFFPrestorageSupported==TRUE */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventPriority(eventId)                                ((uint8)(Dem_C_GetEventPriorityOfEventTable((eventId))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSRecIterExists(eventId, iterPtr)                 ((boolean)(FALSE))  /* (DEM_C_FREEZEFRAMENUMTABLE == STD_OFF) - Empty table/macro iterPtr */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSRecIterGet(eventId, iterPtr)                    ((uint8)(0))  /* returns: recNumIndex - (DEM_C_FREEZEFRAMENUMTABLE == STD_OFF) - Empty table/macro iterPtr */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSRecIterInit(eventId, iterPtr)                     /* (DEM_C_FREEZEFRAMENUMTABLE == STD_OFF) - Empty table/macro iterPtr */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSRecIterNext(eventId, iterPtr)                     /* (DEM_C_FREEZEFRAMENUMTABLE == STD_OFF) - Empty table/macro iterPtr */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSRecRawSize(eventId)                             ((uint16)(Dem_C_GetRecordSizeOfFreezeFrameTable(Dem_C_GetFreezeFrameTableStdFFIdxOfEventTable((eventId)))))  /* Pure data size of snapshot/freezeframe record. */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSRecUdsSize(eventId)                             ((uint16)(Dem_C_GetRecordSizeUdsOfFreezeFrameTable(Dem_C_GetFreezeFrameTableStdFFIdxOfEventTable((eventId)))))  /* Data size of snapshot/freezeframe record incl. DID numbers (each 2B) plus RecordNumber (1B) plus RecordCount (1B). */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSeverity(eventId)                                ((uint8)(Dem_C_GetDtcSeverityOfDtcTable(Dem_C_GetDtcTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSignificance(eventId)                            ((uint8)(Dem_C_GetEventSignificanceOfEventTable((eventId))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSpecialIndicator(eventId)                          /* (DEM_CFG_SUPPORT_MIL == STD_OFF) && (DEM_CFG_SUPPORT_AWL == STD_OFF) && (DEM_CFG_SUPPORT_PL == STD_OFF) && (DEM_CFG_SUPPORT_RSL == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSpecialIndicatorState(eventId)                     /* (DEM_CFG_SUPPORT_MIL == STD_OFF) && (DEM_CFG_SUPPORT_AWL == STD_OFF) && (DEM_CFG_SUPPORT_PL == STD_OFF) && (DEM_CFG_SUPPORT_RSL == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventStorageConditions(eventId)                         /* (DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventStorageTarget(eventId)                           ((uint16)(Dem_C_GetStorageThresholdOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventStorageTime(eventId)                             ((sint16)(Dem_C_GetStorageTimerCyclesOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* in HiRes or LowRes cycles */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSupportAging(eventId)                            ((boolean)(Dem_C_IsAgingAllowedOfEventTable((eventId))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSupportDebounceNv(eventId)                       ((boolean)(Dem_C_IsStorageOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSupportImmediateNv(eventId)                      ((boolean)(Dem_C_IsImmediateNvStorageOfDtcTable(Dem_C_GetDtcTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSupportJumpDown(eventId)                         ((boolean)(Dem_C_IsJumpDownOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventSupportJumpUp(eventId)                           ((boolean)(Dem_C_IsJumpUpOfDebounceTable(Dem_C_GetDebounceTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventTripTarget(eventId)                              ((uint8)(Dem_C_GetEventFailureCycleCounterThresholdOfEventTable((eventId))))  /* Value limited to [1..255], 0: no config parameter DemEventFailureCycleCounterThreshold */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_EventUdsDtc(eventId)                                  ((uint32)(Dem_C_GetUdsDtcOfDtcTable(Dem_C_GetDtcTableIdxOfEventTable((eventId)))))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalAwlIndicator()                                  (DEM_CFG_INDICATOR_INVALID)  /* (DEM_CFG_SUPPORT_AWL == STD_OFF) */ 
#define Dem_Cfg_GlobalCbkControlDtcSetting(status)                      /* No ClientServerInterface CallbackControlDTCSetting, (DEM_CFG_NOTIFY_CONTROL_DTC_SETTING == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalCbkData(eventId)                                  /* No ClientServerInterface GeneralCallbackEventDataChanged, (DEM_CFG_NOTIFY_GENERAL_DATA == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalCbkDtcIterExists(iterPtr)                       ((boolean)(FALSE))  /* Empty table/macro Dem_C_GetCallbackDtcStatusChanged(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalCbkDtcIterGet(iterPtr)                          ((Dem_DtcStatusChangedFPtrType)(0))  /* returntype: Dem_DtcStatusChangedFPtrType - Empty table/macro Dem_C_GetCallbackDtcStatusChanged(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalCbkDtcIterInit(iterPtr)                           /* Empty table/macro Dem_C_GetCallbackDtcStatusChanged(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalCbkDtcIterNext(iterPtr)                           /* Empty table/macro Dem_C_GetCallbackDtcStatusChanged(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalCbkJ1939DtcIterExists(iterPtr)                  ((boolean)(FALSE))  /* Empty table/macro Dem_C_GetCallbackJ1939DtcStatusChanged(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalCbkJ1939DtcIterGet(iterPtr)                     ((Dem_DtcStatusChangedFPtrType)(0))  /* returntype: Dem_DtcStatusChangedFPtrType - Empty table/macro Dem_C_GetCallbackJ1939DtcStatusChanged(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalCbkJ1939DtcIterInit(iterPtr)                      /* Empty table/macro Dem_C_GetCallbackJ1939DtcStatusChanged(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalCbkJ1939DtcIterNext(iterPtr)                      /* Empty table/macro Dem_C_GetCallbackJ1939DtcStatusChanged(iterPtr) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalCbkStatus(eventId, eventStatusOld, eventStatusNew)   /* No ClientServerInterface GeneralCallbackEventStatusChanged, (DEM_CFG_NOTIFY_GENERAL_STATUS == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalClearDtcRuntimeLimit()                          ((uint16)(12U))  /* not configured, here substituted by number of events (incl. event #0) */ 
#define Dem_Cfg_GlobalConfigurationId()                               ((uint16)(Dem_C_GetConfigurationId()))  /* /Dem/DemGeneral/DemCompiledConfigId */ 
#define Dem_Cfg_GlobalCycleCount()                                    ((uint8)(2))
#define Dem_Cfg_GlobalDebounceStorageEventCount()                     ((uint16)(0U))  /* Number of events with .../DemEventClass/DemDebounceAlgorithClass/DemDebounceCounterBased/DemDebounceCounterStorage == TRUE */ 
#define Dem_Cfg_GlobalDtcCount()                                      ((uint16)(1U))
#define Dem_Cfg_GlobalDtcFormat()                                     ((uint8)(DEM_DTC_TRANSLATION_ISO14229_1))  /* Dem_DTCTranslationFormatType */ 
#define Dem_Cfg_GlobalEnableCondCount()                               ((uint8)(0))  /* (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_OFF) */ 
#define Dem_Cfg_GlobalEnableCondInit()                                ((uint32)(0x00000001UL))  /* (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_OFF) */ 
#define Dem_Cfg_GlobalEventCount()                                    ((uint16)(12U))  /* DEM_G_NUMBER_OF_EVENTS (incl. event #0) */ 
#define Dem_Cfg_GlobalFreezeFrameSize()                               ((uint8)(0U))  /* DEM_CFG_MAX_NUMBER_EVENT_ENTRY_FREEZEFRAME */ 
#define Dem_Cfg_GlobalIndicatorCount()                                ((uint16)(0U))  /* Total number of configured Indicators */ 
#define Dem_Cfg_GlobalJ1939NodeCount()                                ((uint8)(1U))  /* (DEM_CFG_SUPPORT_J1939_NODES == STD_OFF) */ 
#define Dem_Cfg_GlobalMilIndicator()                                  (DEM_CFG_INDICATOR_INVALID)  /* (DEM_CFG_SUPPORT_MIL == STD_OFF) */ 
#define Dem_Cfg_GlobalMirrorFirst()                                   ((uint16)(0U))  /* Lowest EventID with DemEventDestination==DEM_DTC_ORIGIN_MIRROR_MEMORY, or 0 if no such destination is configured. */ 
#define Dem_Cfg_GlobalMirrorLast()                                    ((uint16)(0U))  /* Highest EventID with DemEventDestination==DEM_DTC_ORIGIN_MIRROR_MEMORY, or 0 if no such destination is configured. */ 
#define Dem_Cfg_GlobalMirrorSize()                                    ((uint8)(0U))  /* DEM_CFG_MAX_NUMBER_EVENT_ENTRY_MIRROR */ 
#define Dem_Cfg_GlobalNvBlockCount()                                  ((Dem_Cfg_MemoryIndexType)(10U))  /* Number of NV blocks. */ 
#define Dem_Cfg_GlobalNvStorageLimit()                                ((uint8)(0U))  /* 0: no limit configured */ 
#define Dem_Cfg_GlobalObdIIFFRawSize()                                ((uint16)(0U))  /* Pure data size of OBD-II record. */ 
#define Dem_Cfg_GlobalObdIIFFUdsSize()                                ((uint16)(2U))  /* Data size of OBD-II record incl PID numbers (each 2B) plus RecordNumber (1B) plus RecordCount (1B). */ 
#define Dem_Cfg_GlobalObdRequirements()                                 /* ((DEM_CFG_SUPPORT_OBDII == STD_OFF) && (DEM_CFG_SUPPORT_WWHOBD == STD_OFF)) */ 
#define Dem_Cfg_GlobalPermanentDtcRelActivationDist()                   /* (DEM_CFG_SUPPORT_OBDII == STD_OFF) */ 
#define Dem_Cfg_GlobalPermanentFirst()                                ((uint16)(0U))  /* Lowest EventID with EventDestination==DEM_CFG_MEMORYID_PERMANENT, or 0 if no such destination is configured. */ 
#define Dem_Cfg_GlobalPermanentLast()                                 ((uint16)(0U))  /* Highest EventID with EventDestination==DEM_CFG_MEMORYID_PERMANENT, or 0 if no such destination is configured. */ 
#define Dem_Cfg_GlobalPermanentSize()                                 ((uint8)(0U))  /* DEM_CFG_MAX_NUMBER_EVENT_ENTRY_PERMANENT */ 
#define Dem_Cfg_GlobalPidIterExists(iterPtr)                          ((boolean)(*(iterPtr) < Dem_C_GetDataCollectionTablePid2CollIndEndIdxOfPidTable(0)))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalPidIterGet(iterPtr)                             ((uint8)(Dem_C_GetDataCollectionTablePid2CollInd(*(iterPtr))))  /* returns: didIndex */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalPidIterInit(iterPtr)                            ((void)(*(iterPtr) = Dem_C_GetDataCollectionTablePid2CollIndStartIdxOfPidTable(0)))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalPidIterNext(iterPtr)                            ((void)(*(iterPtr) = (uint8_least)(*(iterPtr) + 1)))  /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_GlobalPlIndicator()                                   (DEM_CFG_INDICATOR_INVALID)  /* (DEM_CFG_SUPPORT_PL == STD_OFF) */ 
#define Dem_Cfg_GlobalPrestorageEventCount()                          ((uint16)(0U))  /* Number of events with DemEventClass/DemFFPrestorageSupported == TRUE */ 
#define Dem_Cfg_GlobalPrestorageSize()                                ((uint8)(0U))  /* /Dem/DemGeneral/DemMaxNumberPrestoredFF */ 
#define Dem_Cfg_GlobalPrimaryFirst()                                  ((uint16)(1U))  /* Lowest EventID with DemEventDestination==DEM_DTC_ORIGIN_PRIMARY_MEMORY, or 0 if no such destination is configured. */ 
#define Dem_Cfg_GlobalPrimaryLast()                                   ((uint16)(11U))  /* Highest EventID with DemEventDestination==DEM_DTC_ORIGIN_PRIMARY_MEMORY, or 0 if no such destination is configured. */ 
#define Dem_Cfg_GlobalPrimarySize()                                   ((uint8)(8U))  /* DEM_CFG_MAX_NUMBER_EVENT_ENTRY_PRIMARY */ 
#define Dem_Cfg_GlobalQueueSize()                                     ((uint8)(0U))
#define Dem_Cfg_GlobalRestartCycleId()                                  /* (DEM_CFG_SUPPORT_RESTART_CYCLE == STD_OFF) */ 
#define Dem_Cfg_GlobalRslIndicator()                                  (DEM_CFG_INDICATOR_INVALID)  /* (DEM_CFG_SUPPORT_RSL == STD_OFF) */ 
#define Dem_Cfg_GlobalSecondaryFirst()                                ((uint16)(0U))  /* Lowest EventID with DemEventDestination==DEM_DTC_ORIGIN_SECONDARY_MEMORY, or 0 if no such destination is configured. */ 
#define Dem_Cfg_GlobalSecondaryLast()                                 ((uint16)(0U))  /* Highest EventID with DemEventDestination==DEM_DTC_ORIGIN_SECONDARY_MEMORY, or 0 if no such destination is configured. */ 
#define Dem_Cfg_GlobalSecondarySize()                                 ((uint8)(0U))  /* DEM_CFG_MAX_NUMBER_EVENT_ENTRY_SECONDARY */ 
#define Dem_Cfg_GlobalSeverityMask()                                  ((uint8)(Dem_C_GetGlobalSeverityMask()))  /* Variant specific mask from OR'ed /Dem/DemConfigSet/DemDTCClass/DemDTCSeverity bits. */ 
#define Dem_Cfg_GlobalStatusMask()                                    ((uint8)(0xFFU))  /* /Dem/DemGeneral/DemDtcStatusAvailabilityMask */ 
#define Dem_Cfg_GlobalStorageCondCount()                                /* (DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_OFF) */ 
#define Dem_Cfg_GlobalStorageCondInit()                                 /* (DEM_CFG_SUPPORT_STORAGE_CONDITIONS == STD_OFF) */ 
#define Dem_Cfg_GlobalTaskMs()                                        ((uint8)(10U))  /* See DEM_CFG_TASK_TIME() for exact float value. */ 
#define Dem_Cfg_GlobalTimeSeriesSize()                                ((uint8)(0U))  /* DEM_CFG_MAX_NUMBER_TIMESERIES_SNAPSHOTS */ 
#define Dem_Cfg_IndicatorId(eventIndicatorIndex)                      ((uint8)(DEM_CFG_INDICATOR_INVALID))  /* This configuration defines no (non-special) indicators (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF). */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_IndicatorStatus(eventIndicatorIndex)                  ((uint8)(DEM_INDICATOR_OFF))  /* This configuration defines no (non-special) indicators (DEM_CFG_SUPPORT_USER_INDICATORS==STD_OFF). */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_InitPtrCompatibilityVersion(ConfigPtr)                  /* (DEM_CFG_VARIANT_POSTBUILD_LOADABLE == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_J1939NodeIndicatorReadiness(nmNodeIndex)              ((uint16)(0U))  /* (DEM_CFG_SUPPORT_J1939_NODES == STD_OFF) */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_MemoryAdminIndex()                                    ((uint16)(0))  /* Index into arrays Dem_C_MemoryBlockId[], Dem_C_MemoryDataPtr[], Dem_C_MemoryStatus[] and Dem_C_MemoryCommitNumber[] */ 
#define Dem_Cfg_MemoryDebounceIndex()                                   /* unused */ 
#define Dem_Cfg_MemoryEventAvailableIndex()                             /* unused */ 
#define Dem_Cfg_MemoryFreezeframeIndex()                                /* unused */ 
#define Dem_Cfg_MemoryIumprIndex()                                      /* unused */ 
#define Dem_Cfg_MemoryMirrorIndex()                                     /* unused */ 
#define Dem_Cfg_MemoryPermanentIndex()                                  /* unused */ 
#define Dem_Cfg_MemoryPrimaryIndex()                                  ((uint16)(2))  /* DEM_CFG_MAX_NUMBER_EVENT_ENTRY_PRIMARY = Dem_Cfg_GlobalPrimarySize() = 8 */ /* Index into arrays Dem_C_MemoryBlockId[], Dem_C_MemoryDataPtr[], Dem_C_MemoryStatus[] and Dem_C_MemoryCommitNumber[] */ 
#define Dem_Cfg_MemorySecondaryIndex()                                  /* unused */ 
#define Dem_Cfg_MemoryStatusIndex()                                   ((uint16)(1))  /* Index into arrays Dem_C_MemoryBlockId[], Dem_C_MemoryDataPtr[], Dem_C_MemoryStatus[] and Dem_C_MemoryCommitNumber[] */ 
#define Dem_Cfg_MemoryTimeSeriesIndex()                                 /* unused */ 
#define Dem_Cfg_ObdAcceleratorPedalInformation()                      ((uint8)(Dem_C_GetDataElementTableIdxOfGeneralObdInput(0)))  /* not defined */ 
#define Dem_Cfg_ObdAmbientPressure()                                  ((uint8)(Dem_C_GetDataElementTableIdxOfGeneralObdInput(0)))  /* not defined */ 
#define Dem_Cfg_ObdAmbientTemperature()                               ((uint8)(Dem_C_GetDataElementTableIdxOfGeneralObdInput(0)))  /* not defined */ 
#define Dem_Cfg_ObdDistanceInformation()                              ((uint8)(Dem_C_GetDataElementTableIdxOfGeneralObdInput(0)))  /* not defined */ 
#define Dem_Cfg_ObdEngineRunTime()                                    ((uint8)(Dem_C_GetDataElementTableIdxOfGeneralObdInput(0)))  /* not defined */ 
#define Dem_Cfg_ObdEngineSpeed()                                      ((uint8)(Dem_C_GetDataElementTableIdxOfGeneralObdInput(0)))  /* not defined */ 
#define Dem_Cfg_ObdEngineTemperature()                                ((uint8)(Dem_C_GetDataElementTableIdxOfGeneralObdInput(0)))  /* not defined */ 
#define Dem_Cfg_ObdProgrammingEvent()                                 ((uint8)(Dem_C_GetDataElementTableIdxOfGeneralObdInput(0)))  /* not defined */ 
#define Dem_Cfg_ObdVehicleSpeed()                                     ((uint8)(Dem_C_GetDataElementTableIdxOfGeneralObdInput(0)))  /* not defined */ 
#define Dem_Cfg_SRecId(recNumIndex)                                     /* DEM_CFG_SUPPORT_SRECS == STD_OFF */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_SRecTrigger(recNumIndex)                                /* DEM_CFG_SUPPORT_SRECS == STD_OFF */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_SRecUpdate(recNumIndex)                                 /* DEM_CFG_SUPPORT_SRECS == STD_OFF */ /* PRQA S 3453 */ /* MD_MSR_19.7 */ 
#define Dem_Cfg_TimerEngineRunTimePollRate()                            /* ((DEM_CFG_SUPPORT_WWHOBD == STD_OFF) && (DEM_CFG_SUPPORT_PID4D == STD_OFF) && (DEM_CFG_SUPPORT_PID4E == STD_OFF)) */ 
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/



/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
 /*  Return type of Dem_Cfg_EventIndicatorIterGet() - returns: eventIndicatorIndex  */ 
typedef uint8                                                         Dem_Cfg_IndicatorIndexType; 

typedef struct Dem_Cfg_AdminDataType_s {
  uint16 ImplementationVersion;
  uint16 ConfigurationId;
  uint16 CycleCounter[ 2 /*DEM_NUMBER_OF_CYCLES*/];
  uint8  MemoryOverflow;                                                        /* (DEM_CFG_DATA_OVFLIND == STD_ON) || (DEM_CFG_SUPPORT_OVFLIND_API == STD_ON) */
}                                                                     Dem_Cfg_AdminDataType; 

typedef struct Dem_Cfg_StatusDataType_s {
  uint16          FirstFailedEvent;
  uint16          FirstConfirmedEvent;
  uint16          MostRecentFailedEvent;
  uint16          MostRecentConfmdEvent;
  volatile uint8  EventStatus[ 12 /*DEM_G_NUMBER_OF_EVENTS incl. #0*/];
}                                                                     Dem_Cfg_StatusDataType; 

typedef struct Dem_Cfg_PrimaryEntryType_s {
  uint32 Timestamp;
  uint16 AgingCounter;
  uint16 EventId;
}                                                                     Dem_Cfg_PrimaryEntryType; 

typedef struct Dem_Cfg_TimeSeriesEntryType_s {
  uint32 Timestamp;
  uint16 EventId;
}                                                                     Dem_Cfg_TimeSeriesEntryType; 

typedef uint8                                                         Dem_Cfg_MemoryIndexType;               /* Number of NV blocks, see Dem_Cfg_GlobalNvBlockCount(. */ 

typedef P2VAR(Dem_Cfg_PrimaryEntryType, TYPEDEF, DEM_SHARED_DATA)     Dem_SharedMemoryEntryPtrType; 

typedef P2CONST(Dem_Cfg_PrimaryEntryType, TYPEDEF, DEM_SHARED_DATA)   Dem_ConstSharedMemoryEntryPtrType; 

typedef uint8                                                         Dem_Cfg_EventInternalStatusType;       /* InternalStatus requires 2bits. Additionally following features enlarge the type: */ 

typedef uint16                                                        Dem_Cfg_IndicatorContinuousType[1];    /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint16                                                        Dem_Cfg_IndicatorBlinkingType[1];      /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint16                                                        Dem_Cfg_IndicatorFastFlashType[1];     /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint16                                                        Dem_Cfg_IndicatorSlowFlashType[1];     /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

typedef uint8                                                         Dem_Cfg_GlobalSpecialIndicatorStatesType[1];    /* size = DEM_G_MAX_NUMBER_J1939_NODES */ 

 /*  Temporary buffer for interaction with NvM  */ 
typedef union Dem_Cfg_CommitBufferType_u {                                                          /* PRQA S 0750 */ /* MD_DEM_18.4 */
  uint8                           mRaw[1];
  Dem_Cfg_AdminDataType           mAdmin;
  Dem_Cfg_StatusDataType          mStatus;
  Dem_Cfg_PrimaryEntryType        mPrimary;
}                                                                     Dem_Cfg_CommitBufferType; 

 /*  Used with iterator APIs Dem_Cfg_DidData...(). The function Dem_Cfg_DidDataIterGet() returns type uint8  */ 
typedef struct { uint8_least mIdx; uint8_least mEndIdx; }             Dem_Cfg_DidDataIterType; 

 /*  Return type of Dem_Cfg_DidDataIterGet() - returns: dataElementIndex  */ 
typedef uint8                                                         Dem_Cfg_DataIndexType; 

 /*  Unused, no iterating with iterator APIs Dem_Cfg_GlobalCbkJ1939Dtc...(). The function Dem_Cfg_GlobalCbkJ1939DtcIterGet() returns type Dem_DtcStatusChangedFPtrType  */ 
typedef uint8_least                                                   Dem_Cfg_GlobalCbkJ1939DtcIterType; 

 /*  Used with iterator APIs Dem_Cfg_EventERec...(). The function Dem_Cfg_EventERecIterGet() returns type uint8  */ 
typedef struct { uint8_least mIdx; uint8_least mEndIdx; }             Dem_Cfg_EventERecIterType; 

 /*  Return type of Dem_Cfg_EventERecIterGet() - returns: didIndex  */ 
typedef uint8                                                         Dem_Cfg_ERecIndexType; 

 /*  Used with iterator APIs Dem_Cfg_EventDid...(). The function Dem_Cfg_EventDidIterGet() returns type uint8  */ 
typedef struct { uint8_least mIdx; uint8_least mEndIdx; }             Dem_Cfg_EventDidIterType; 

 /*  Return type of Dem_Cfg_EventDidIterGet() - returns: didIndex  */ 
typedef uint8                                                         Dem_Cfg_DidIndexType; 

 /*  Unused, no iterating with iterator APIs Dem_Cfg_EventSRec...(). The function Dem_Cfg_EventSRecIterGet() returns type uint8  */ 
typedef uint8_least                                                   Dem_Cfg_EventSRecIterType; 

 /*  Return type of Dem_Cfg_EventSRecIterGet() - returns: recNumIndex  */ 
typedef uint8                                                         Dem_Cfg_SRecIndexType; 

 /*  Unused, no iterating with iterator APIs Dem_Cfg_EventJ1939Node...(). The function Dem_Cfg_EventJ1939NodeIterGet() returns type uint8  */ 
typedef uint8_least                                                   Dem_Cfg_EventJ1939NodeIterType; 

 /*  Return type of Dem_Cfg_EventJ1939NodeIterGet() - returns: nmNodeIndex  */ 
typedef uint8                                                         Dem_Cfg_J1939NodeIndexType; 

 /*  Unused, no iterating with iterator APIs Dem_Cfg_EventIndicator...(). The function Dem_Cfg_EventIndicatorIterGet() returns type Dem_Cfg_IndicatorIndexType  */ 
typedef uint8_least                                                   Dem_Cfg_EventIndicatorIterType; 

 /*  Used with iterator APIs Dem_Cfg_GlobalPid...(). The function Dem_Cfg_GlobalPidIterGet() returns type uint8  */ 
typedef uint8_least                                                   Dem_Cfg_GlobalPidIterType; 

 /*  Return type of Dem_Cfg_GlobalPidIterGet() - returns: didIndex  */ 
typedef uint8                                                         Dem_Cfg_PidIndexType; 

 /*  Unused, no iterating with iterator APIs Dem_Cfg_GlobalCbkDtc...(). The function Dem_Cfg_GlobalCbkDtcIterGet() returns type Dem_DtcStatusChangedFPtrType  */ 
typedef uint8_least                                                   Dem_Cfg_GlobalCbkDtcIterType; 

 /*  Unused, no iterating with iterator APIs Dem_Cfg_EventCbkInitFunc...(). The function Dem_Cfg_EventCbkInitFuncIterGet() returns type Dem_InitMonitorForFuncFPtrType  */ 
typedef uint8_least                                                   Dem_Cfg_EventCbkInitFuncIterType; 

 /*  Unused, no iterating with iterator APIs Dem_Cfg_EventCbkStatus...(). The function Dem_Cfg_EventCbkStatusIterGet() returns type Dem_EventStatusChangedFPtrType  */ 
typedef uint8_least                                                   Dem_Cfg_EventCbkStatusIterType; 

 /*  Unused, no iterating with iterator APIs Dem_Cfg_DebounceHiRes...(). The function Dem_Cfg_DebounceHiResIterGet() returns type uint16  */ 
typedef uint8_least                                                   Dem_Cfg_DebounceHiResIterType; 

 /*  Unused, no iterating with iterator APIs Dem_Cfg_DebounceLoRes...(). The function Dem_Cfg_DebounceLoResIterGet() returns type uint16  */ 
typedef uint8_least                                                   Dem_Cfg_DebounceLoResIterType; 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  Dem_CPCIterableTypes  Dem_C Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Dem_C_CycleIdTable */
typedef uint8_least Dem_C_CycleIdTableIterType;

/**   \brief  type used to iterate Dem_C_DataCollectionTable */
typedef uint8_least Dem_C_DataCollectionTableIterType;

/**   \brief  type used to iterate Dem_C_DataElementTable */
typedef uint8_least Dem_C_DataElementTableIterType;

/**   \brief  type used to iterate Dem_C_DebounceTable */
typedef uint8_least Dem_C_DebounceTableIterType;

/**   \brief  type used to iterate Dem_C_DtcTable */
typedef uint8_least Dem_C_DtcTableIterType;

/**   \brief  type used to iterate Dem_C_EventAvailable */
typedef uint8_least Dem_C_EventAvailableIterType;

/**   \brief  type used to iterate Dem_C_EventAvailableInVariant */
typedef uint8_least Dem_C_EventAvailableInVariantIterType;

/**   \brief  type used to iterate Dem_C_EventDebounceValue */
typedef uint8_least Dem_C_EventDebounceValueIterType;

/**   \brief  type used to iterate Dem_C_EventInternalStatus */
typedef uint8_least Dem_C_EventInternalStatusIterType;

/**   \brief  type used to iterate Dem_C_EventQueueStatus */
typedef uint8_least Dem_C_EventQueueStatusIterType;

/**   \brief  type used to iterate Dem_C_EventTable */
typedef uint8_least Dem_C_EventTableIterType;

/**   \brief  type used to iterate Dem_C_ExtendedDataTable */
typedef uint8_least Dem_C_ExtendedDataTableIterType;

/**   \brief  type used to iterate Dem_C_FilterReportedEvents */
typedef uint8_least Dem_C_FilterReportedEventsIterType;

/**   \brief  type used to iterate Dem_C_FreezeFrameTable */
typedef uint8_least Dem_C_FreezeFrameTableIterType;

/**   \brief  type used to iterate Dem_C_GeneralObdInput */
typedef uint8_least Dem_C_GeneralObdInputIterType;

/**   \brief  type used to iterate Dem_C_MemoryBlockId */
typedef uint8_least Dem_C_MemoryBlockIdIterType;

/**   \brief  type used to iterate Dem_C_MemoryCommitNumber */
typedef uint8_least Dem_C_MemoryCommitNumberIterType;

/**   \brief  type used to iterate Dem_C_MemoryDataPtr */
typedef uint8_least Dem_C_MemoryDataPtrIterType;

/**   \brief  type used to iterate Dem_C_MemoryStatus */
typedef uint8_least Dem_C_MemoryStatusIterType;

/**   \brief  type used to iterate Dem_C_PrimaryChronology */
typedef uint8_least Dem_C_PrimaryChronologyIterType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCValueTypes  Dem_C Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Dem_C_ConfigurationId */
typedef uint16 Dem_C_ConfigurationIdType;

/**   \brief  value based type definition for Dem_C_OpCycleTypeOfCycleIdTable */
typedef uint8 Dem_C_OpCycleTypeOfCycleIdTableType;

/**   \brief  value based type definition for Dem_C_UsedForAgingOfCycleIdTable */
typedef boolean Dem_C_UsedForAgingOfCycleIdTableType;

/**   \brief  value based type definition for Dem_C_CollectionSizeOfDataCollectionTable */
typedef uint8 Dem_C_CollectionSizeOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_C_IdNumberOfDataCollectionTable */
typedef uint8 Dem_C_IdNumberOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_C_StorageKindOfDataCollectionTable */
typedef uint8 Dem_C_StorageKindOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_C_UpdateOfDataCollectionTable */
typedef boolean Dem_C_UpdateOfDataCollectionTableType;

/**   \brief  value based type definition for Dem_C_ElementKindOfDataElementTable */
typedef uint8 Dem_C_ElementKindOfDataElementTableType;

/**   \brief  value based type definition for Dem_C_ElementSizeOfDataElementTable */
typedef uint8 Dem_C_ElementSizeOfDataElementTableType;

/**   \brief  value based type definition for Dem_C_DebounceContinuousOfDebounceTable */
typedef boolean Dem_C_DebounceContinuousOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_DecrementStepSizeOfDebounceTable */
typedef sint8 Dem_C_DecrementStepSizeOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_EventDebounceAlgorithmOfDebounceTable */
typedef uint8 Dem_C_EventDebounceAlgorithmOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_EventDebounceBehaviorOfDebounceTable */
typedef boolean Dem_C_EventDebounceBehaviorOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_FailTimerCyclesOfDebounceTable */
typedef sint8 Dem_C_FailTimerCyclesOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_FailedThresholdOfDebounceTable */
typedef sint8 Dem_C_FailedThresholdOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_IncrementStepSizeOfDebounceTable */
typedef sint8 Dem_C_IncrementStepSizeOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_JumpDownOfDebounceTable */
typedef boolean Dem_C_JumpDownOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_JumpDownValueOfDebounceTable */
typedef sint8 Dem_C_JumpDownValueOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_JumpUpOfDebounceTable */
typedef boolean Dem_C_JumpUpOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_JumpUpValueOfDebounceTable */
typedef sint8 Dem_C_JumpUpValueOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_MaskedBitsOfDebounceTable */
typedef uint8 Dem_C_MaskedBitsOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_PassTimerCyclesOfDebounceTable */
typedef sint8 Dem_C_PassTimerCyclesOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_PassedThresholdOfDebounceTable */
typedef sint8 Dem_C_PassedThresholdOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_StorageOfDebounceTable */
typedef boolean Dem_C_StorageOfDebounceTableType;

/**   \brief  value based type definition for Dem_C_DtcSeverityOfDtcTable */
typedef uint8 Dem_C_DtcSeverityOfDtcTableType;

/**   \brief  value based type definition for Dem_C_FunctionalUnitOfDtcTable */
typedef uint8 Dem_C_FunctionalUnitOfDtcTableType;

/**   \brief  value based type definition for Dem_C_ImmediateNvStorageOfDtcTable */
typedef boolean Dem_C_ImmediateNvStorageOfDtcTableType;

/**   \brief  value based type definition for Dem_C_UdsDtcOfDtcTable */
typedef uint32 Dem_C_UdsDtcOfDtcTableType;

/**   \brief  value based type definition for Dem_C_EventAvailable */
typedef boolean Dem_C_EventAvailableType;

/**   \brief  value based type definition for Dem_C_EventAvailableInVariant */
typedef boolean Dem_C_EventAvailableInVariantType;

/**   \brief  value based type definition for Dem_C_EventDebounceValue */
typedef sint16 Dem_C_EventDebounceValueType;

/**   \brief  value based type definition for Dem_C_EventQueueStatus */
typedef uint8 Dem_C_EventQueueStatusType;

/**   \brief  value based type definition for Dem_C_AgingAllowedOfEventTable */
typedef boolean Dem_C_AgingAllowedOfEventTableType;

/**   \brief  value based type definition for Dem_C_AgingCycleCounterThresholdOfEventTable */
typedef uint8 Dem_C_AgingCycleCounterThresholdOfEventTableType;

/**   \brief  value based type definition for Dem_C_AgingCycleIdOfEventTable */
typedef uint8 Dem_C_AgingCycleIdOfEventTableType;

/**   \brief  value based type definition for Dem_C_DebounceTableIdxOfEventTable */
typedef uint8 Dem_C_DebounceTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_C_DtcTableIdxOfEventTable */
typedef uint8 Dem_C_DtcTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_C_EventDestinationOfEventTable */
typedef uint8 Dem_C_EventDestinationOfEventTableType;

/**   \brief  value based type definition for Dem_C_EventFailureCycleCounterThresholdOfEventTable */
typedef uint8 Dem_C_EventFailureCycleCounterThresholdOfEventTableType;

/**   \brief  value based type definition for Dem_C_EventFailureCycleIdOfEventTable */
typedef uint8 Dem_C_EventFailureCycleIdOfEventTableType;

/**   \brief  value based type definition for Dem_C_EventKindOfEventTable */
typedef uint8 Dem_C_EventKindOfEventTableType;

/**   \brief  value based type definition for Dem_C_EventLatchTFOfEventTable */
typedef boolean Dem_C_EventLatchTFOfEventTableType;

/**   \brief  value based type definition for Dem_C_EventPriorityOfEventTable */
typedef uint8 Dem_C_EventPriorityOfEventTableType;

/**   \brief  value based type definition for Dem_C_EventSignificanceOfEventTable */
typedef uint8 Dem_C_EventSignificanceOfEventTableType;

/**   \brief  value based type definition for Dem_C_ExtendedDataTableIdxOfEventTable */
typedef uint8 Dem_C_ExtendedDataTableIdxOfEventTableType;

/**   \brief  value based type definition for Dem_C_FreezeFrameTableStdFFIdxOfEventTable */
typedef uint8 Dem_C_FreezeFrameTableStdFFIdxOfEventTableType;

/**   \brief  value based type definition for Dem_C_HealingTargetOfEventTable */
typedef uint8 Dem_C_HealingTargetOfEventTableType;

/**   \brief  value based type definition for Dem_C_MaskedBitsOfEventTable */
typedef uint8 Dem_C_MaskedBitsOfEventTableType;

/**   \brief  value based type definition for Dem_C_OperationCycleIdOfEventTable */
typedef uint8 Dem_C_OperationCycleIdOfEventTableType;

/**   \brief  value based type definition for Dem_C_MaxRecordSizeOfExtendedDataTable */
typedef uint8 Dem_C_MaxRecordSizeOfExtendedDataTableType;

/**   \brief  value based type definition for Dem_C_FilterReportedEvents */
typedef uint8 Dem_C_FilterReportedEventsType;

/**   \brief  value based type definition for Dem_C_RecordSizeOfFreezeFrameTable */
typedef uint8 Dem_C_RecordSizeOfFreezeFrameTableType;

/**   \brief  value based type definition for Dem_C_RecordSizeUdsOfFreezeFrameTable */
typedef uint8 Dem_C_RecordSizeUdsOfFreezeFrameTableType;

/**   \brief  value based type definition for Dem_C_DataElementTableIdxOfGeneralObdInput */
typedef uint8 Dem_C_DataElementTableIdxOfGeneralObdInputType;

/**   \brief  value based type definition for Dem_C_GlobalSeverityMask */
typedef uint8 Dem_C_GlobalSeverityMaskType;

/**   \brief  value based type definition for Dem_C_MemoryBlockId */
typedef uint16 Dem_C_MemoryBlockIdType;

/**   \brief  value based type definition for Dem_C_MemoryCommitNumber */
typedef uint8 Dem_C_MemoryCommitNumberType;

/**   \brief  value based type definition for Dem_C_MemoryStatus */
typedef uint8 Dem_C_MemoryStatusType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCStructTypes  Dem_C Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Dem_C_CycleIdTable */
typedef struct sDem_C_CycleIdTableType
{
  Dem_C_OpCycleTypeOfCycleIdTableType OpCycleTypeOfCycleIdTable;  /**< DemOperationCycleType of the DemOperationCycle: [DEM_CFG_OPCYC_IGNITION, DEM_CFG_OPCYC_OBD_DCY, DEM_CFG_OPCYC_OTHER, DEM_CFG_OPCYC_POWER, DEM_CFG_OPCYC_TIME, DEM_CFG_OPCYC_WARMUP, DEM_CFG_OPCYC_IGNITION_HYBRID, DEM_CFG_OPCYC_AGING] */
} Dem_C_CycleIdTableType;

/**   \brief  type used in Dem_C_DataCollectionTable */
typedef struct sDem_C_DataCollectionTableType
{
  uint8 Dem_C_DataCollectionTableNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_C_DataCollectionTableType;

/**   \brief  type used in Dem_C_DataElementTable */
typedef struct sDem_C_DataElementTableType
{
  Dem_ReadDataFPtrType ReadDataFuncOfDataElementTable;  /**< C-function for getting the data. Its signature depends on ElementKind: With value 28U or 30U use: Std_ReturnType (*)(uint8* Buffer); With value 29U or 31U use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId);. */
} Dem_C_DataElementTableType;

/**   \brief  type used in Dem_C_DebounceTable */
typedef struct sDem_C_DebounceTableType
{
  Dem_C_FailedThresholdOfDebounceTableType FailedThresholdOfDebounceTable;  /**< DemDebounceCounterFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_C_IncrementStepSizeOfDebounceTableType IncrementStepSizeOfDebounceTable;  /**< DemDebounceCounterIncrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_C_PassedThresholdOfDebounceTableType PassedThresholdOfDebounceTable;  /**< DemDebounceCounterPassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased */
  Dem_C_EventDebounceAlgorithmOfDebounceTableType EventDebounceAlgorithmOfDebounceTable;  /**< Used DemEventParameter/DemEventClass/DemDebounceAlgorithmClass */
  Dem_C_MaskedBitsOfDebounceTableType MaskedBitsOfDebounceTable;  /**< contains bitcoded the boolean data of Dem_C_DebounceContinuousOfDebounceTable, Dem_C_EventDebounceBehaviorOfDebounceTable, Dem_C_JumpDownOfDebounceTable, Dem_C_JumpUpOfDebounceTable, Dem_C_StorageOfDebounceTable */
} Dem_C_DebounceTableType;

/**   \brief  type used in Dem_C_DtcTable */
typedef struct sDem_C_DtcTableType
{
  uint8 Dem_C_DtcTableNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_C_DtcTableType;

/**   \brief  type used in Dem_C_EventTable */
typedef struct sDem_C_EventTableType
{
  Dem_C_DebounceTableIdxOfEventTableType DebounceTableIdxOfEventTable;  /**< the index of the 1:1 relation pointing to Dem_C_DebounceTable */
  Dem_C_OperationCycleIdOfEventTableType OperationCycleIdOfEventTable;  /**< DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemOperationCycleRef */
} Dem_C_EventTableType;

/**   \brief  type used in Dem_C_ExtendedDataTable */
typedef struct sDem_C_ExtendedDataTableType
{
  uint8 Dem_C_ExtendedDataTableNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_C_ExtendedDataTableType;

/**   \brief  type used in Dem_C_FreezeFrameTable */
typedef struct sDem_C_FreezeFrameTableType
{
  uint8 Dem_C_FreezeFrameTableNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_C_FreezeFrameTableType;

/**   \brief  type used in Dem_C_GeneralObdInput */
typedef struct sDem_C_GeneralObdInputType
{
  uint8 Dem_C_GeneralObdInputNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_C_GeneralObdInputType;

/** 
  \}
*/ 

/** 
  \defgroup  Dem_CPCRootValueTypes  Dem_C Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Dem_PCConfig */
typedef struct sDem_PCConfigType
{
  uint8 Dem_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Dem_PCConfigType;

typedef Dem_PCConfigType Dem_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  Dem_C_CycleIdTable
**********************************************************************************************************************/
/** 
  \var    Dem_C_CycleIdTable
  \details
  Element        Description
  OpCycleType    DemOperationCycleType of the DemOperationCycle: [DEM_CFG_OPCYC_IGNITION, DEM_CFG_OPCYC_OBD_DCY, DEM_CFG_OPCYC_OTHER, DEM_CFG_OPCYC_POWER, DEM_CFG_OPCYC_TIME, DEM_CFG_OPCYC_WARMUP, DEM_CFG_OPCYC_IGNITION_HYBRID, DEM_CFG_OPCYC_AGING]
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_C_CycleIdTableType, DEM_CONST) Dem_C_CycleIdTable[2];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_DataElementTable
**********************************************************************************************************************/
/** 
  \var    Dem_C_DataElementTable
  \details
  Element         Description
  ReadDataFunc    C-function for getting the data. Its signature depends on ElementKind: With value 28U or 30U use: Std_ReturnType (*)(uint8* Buffer); With value 29U or 31U use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId);.
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_C_DataElementTableType, DEM_CONST) Dem_C_DataElementTable[1];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_DebounceTable
**********************************************************************************************************************/
/** 
  \var    Dem_C_DebounceTable
  \details
  Element                   Description
  FailedThreshold           DemDebounceCounterFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  IncrementStepSize         DemDebounceCounterIncrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  PassedThreshold           DemDebounceCounterPassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  EventDebounceAlgorithm    Used DemEventParameter/DemEventClass/DemDebounceAlgorithmClass
  MaskedBits                contains bitcoded the boolean data of Dem_C_DebounceContinuousOfDebounceTable, Dem_C_EventDebounceBehaviorOfDebounceTable, Dem_C_JumpDownOfDebounceTable, Dem_C_JumpUpOfDebounceTable, Dem_C_StorageOfDebounceTable
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_C_DebounceTableType, DEM_CONST) Dem_C_DebounceTable[2];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_EventTable
**********************************************************************************************************************/
/** 
  \var    Dem_C_EventTable
  \details
  Element             Description
  DebounceTableIdx    the index of the 1:1 relation pointing to Dem_C_DebounceTable
  OperationCycleId    DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemOperationCycleRef
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_C_EventTableType, DEM_CONST) Dem_C_EventTable[12];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_MemoryBlockId
**********************************************************************************************************************/
/** 
  \var    Dem_C_MemoryBlockId
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_C_MemoryBlockIdType, DEM_CONST) Dem_C_MemoryBlockId[10];
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_MemoryDataPtr
**********************************************************************************************************************/
/** 
  \var    Dem_C_MemoryDataPtr
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_NvDataPtrType, DEM_CONST) Dem_C_MemoryDataPtr[10];
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_MemoryEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Dem_Cfg_PrimaryEntryType, DEM_CONST) Dem_C_MemoryEntryInit;
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_CommitBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_CommitBufferType, DEM_VAR_NOINIT) Dem_C_CommitBuffer;  /* PRQA S 0759 */ /* MD_DEM_18.4 */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_EventDebounceValue
**********************************************************************************************************************/
/** 
  \var    Dem_C_EventDebounceValue
  \brief  size = DEM_G_NUMBER_OF_EVENTS; (DEM_CFG_SUPPORT_DEBOUNCE_COUNTER == STD_ON) || (DEM_CFG_SUPPORT_DEBOUNCE_TIME == STD_ON)
*/ 
#define DEM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Dem_C_EventDebounceValueType, DEM_VAR_NOINIT) Dem_C_EventDebounceValue[12];
#define DEM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_EventInternalStatus
**********************************************************************************************************************/
/** 
  \var    Dem_C_EventInternalStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Dem_Cfg_EventInternalStatusType, DEM_VAR_NOINIT) Dem_C_EventInternalStatus[12];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_EventQueueStatus
**********************************************************************************************************************/
/** 
  \var    Dem_C_EventQueueStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Dem_C_EventQueueStatusType, DEM_VAR_NOINIT) Dem_C_EventQueueStatus[12];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_FilterReportedEvents
**********************************************************************************************************************/
/** 
  \var    Dem_C_FilterReportedEvents
  \brief  size = CEIL( DEM_G_NUMBER_OF_EVENTS / 8 )
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_C_FilterReportedEventsType, DEM_VAR_NOINIT) Dem_C_FilterReportedEvents[2];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_MemoryCommitNumber
**********************************************************************************************************************/
/** 
  \var    Dem_C_MemoryCommitNumber
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Dem_C_MemoryCommitNumberType, DEM_VAR_NOINIT) Dem_C_MemoryCommitNumber[10];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_MemoryStatus
**********************************************************************************************************************/
/** 
  \var    Dem_C_MemoryStatus
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_C_MemoryStatusType, DEM_VAR_NOINIT) Dem_C_MemoryStatus[10];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_NvAdminData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_AdminDataType, DEM_NVM_DATA_NOINIT) Dem_C_NvAdminData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_NvEventData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_StatusDataType, DEM_NVM_DATA_NOINIT) Dem_C_NvEventData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_NvPrimaryEntry_0
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_C_NvPrimaryEntry_0;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_NvPrimaryEntry_1
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_C_NvPrimaryEntry_1;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_NvPrimaryEntry_2
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_C_NvPrimaryEntry_2;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_NvPrimaryEntry_3
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_C_NvPrimaryEntry_3;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_NvPrimaryEntry_4
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_C_NvPrimaryEntry_4;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_NvPrimaryEntry_5
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_C_NvPrimaryEntry_5;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_NvPrimaryEntry_6
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_C_NvPrimaryEntry_6;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_NvPrimaryEntry_7
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_C_NvPrimaryEntry_7;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_PrimaryChronology
**********************************************************************************************************************/
/** 
  \var    Dem_C_PrimaryChronology
  \brief  size = DEM_CFG_MAX_NUMBER_EVENT_ENTRY_PRIMARY
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_C_PrimaryChronology[8];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_C_ReadoutBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Dem_Cfg_PrimaryEntryType, DEM_VAR_NOINIT) Dem_C_ReadoutBuffer;
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define DEM_START_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
#define DEM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

#define DEM_START_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/************************************************************************************************************
 *  Dem_Cfg_FindEventFromUdsDtc()
 ***********************************************************************************************************/
/*! \brief         Map UDS DTC number to EventId.
 *  \details       Search (a range) of the event table for the requested DTC number. Return the event ID.
 *                 With combined events, the returned ID is the proxy of the combination group.
 *  \param[in]     DTC                                            the dtc number
 *  \param[in]     MemoryId                                       the memory area, for example
 *                                                                DEM_CFG_MEMORYID_PRIMARY,
 *                                                                DEM_CFG_MEMORYID_SECONDARY...
 *  \return        DEM_EVENT_INVALID                              Function not successful. No event in the
 *                                                                current variant has this DTC number.
 *  \return        x = {x > 0 && x < Dem_Cfg_GlobalEventCount()}  Function successful.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 ***********************************************************************************************************/ 
extern FUNC(uint16, DEM_CODE) Dem_Cfg_FindEventFromUdsDtc(uint32 DTC, uint8 MemoryId);
 
/************************************************************************************************************
 *  Dem_Cfg_FindEventFromJ1939Dtc()
 ***********************************************************************************************************/
/*! \brief         Map J1939 DTC number to EventId.
 *  \details       Search (a range) of the event table for the requested J1939DTC number. Return the event
 *                 ID.
 *  \param[in]     DTC                                            the J1939 dtc number
 *  \return        DEM_EVENT_INVALID                              Function not successful. No event in the
 *                                                                current variant has this J1939DTC number.
 *  \return        x = {x > 0 && x < Dem_Cfg_GlobalEventCount()}  Function successful.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 ***********************************************************************************************************/ 
extern FUNC(uint16, DEM_CODE) Dem_Cfg_FindEventFromJ1939Dtc(uint32 DTC);
 
/************************************************************************************************************
 *  Dem_Cfg_FindGroupMaskFromUdsDtc()
 ***********************************************************************************************************/
/*! \brief         Map GroupOfDtc number to (internal) GROUPMASK.
 *  \details       Test if the DTC number is a configured UDS 'groupOfDTC' number, and return the internal
 *                 representation of that group.
 *  \param[in]     DTC                           dtc number to check
 *  \return        DEM_CFG_GROUPMASK_NONE        Function not successful. The DTC number doen't represent any
 *                                               configured DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_EMISSION    Function successful. The DTC number represents the OBD-II
 *                                               emission related group.
 *  \return        DEM_CFG_GROUPMASK_POWERTRAIN  Function successful. The DTC number represents Powertrain
 *                                               Group: engine and transmission.
 *  \return        DEM_CFG_GROUPMASK_CHASSIS     Function successful. The DTC number represents the Chassis
 *                                               Group.
 *  \return        DEM_CFG_GROUPMASK_BODY        Function successful. The DTC number represents the Body
 *                                               Group.
 *  \return        DEM_CFG_GROUPMASK_NETWORK     Function successful. The DTC number represents the Network
 *                                               Communication Group.
 *  \return        DEM_CFG_GROUPMASK_ALLDTCS     Function successful. The DTC number is the wildcard 'All
 *                                               Groups (all DTCs)'.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \note          Dependent on the current configuration, not all named (possible) return values are
 *                 actually used.
 ***********************************************************************************************************/ 
extern FUNC(uint8, DEM_CODE) Dem_Cfg_FindGroupMaskFromUdsDtc(uint32 groupDtcNumber);
 
/************************************************************************************************************
 *  Dem_Cfg_EventGroupMask()
 ***********************************************************************************************************/
/*! \brief         Map EventId to groupOfDTC's (internal) GROUPMASK.
 *  \details       Test if the DTC number is a configured UDS 'groupOfDTC' number, and return the internal
 *                 representation of that group.
 *  \param[in]     eventId                       event ID to check
 *  \return        DEM_CFG_GROUPMASK_NONE        Function not successful. The event has no DemUdsDTC number
 *                                               so it is not part of a DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_EMISSION    Function successful. The event is part of the OBD-II
 *                                               emission related DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_POWERTRAIN  Function successful. The event is part of the Powertrain
 *                                               DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_CHASSIS     Function successful. The event is part of the Chassis
 *                                               DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_BODY        Function successful. The event is part of the Body
 *                                               DemGroupOfDTC.
 *  \return        DEM_CFG_GROUPMASK_NETWORK     Function successful. The event is part of the Network
 *                                               Communication DemGroupOfDTC.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     TRUE
 *  \note          Dependent on the current configuration, not all named (possible) return values are
 *                 actually used.
 *  \note          Implementation specific: the configured 'DemGroupDTCs' value is the lowest value of each
 *                 group.
 *                 In other words, the configured 'DemGroupDTCs' split the range of DTC numbers
 *                 0x000000..0xFFFFFF into groups and the proxy of each group is the 'DemGroupDTCs' value
 *                 (that never is a DemUdsDTC number in addition).
 ***********************************************************************************************************/ 
extern FUNC(uint8, DEM_CODE) Dem_Cfg_EventGroupMask(uint16 eventId);
 
#define DEM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  Justification of MISRA deviations
**********************************************************************************************************************/


#endif  /* DEM_LCFG_H */
/**********************************************************************************************************************
  END OF FILE: Dem_Lcfg.h     [Vector, VARIANT-PRE-COMPILE]
**********************************************************************************************************************/

