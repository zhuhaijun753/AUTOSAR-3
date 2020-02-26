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
 *            Module: ComM
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: ComM_Private_Cfg.h
 *   Generation Time: 2016-03-17 09:06:54
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/


#if !defined(COMM_PRIVATE_CFG_H)
#define COMM_PRIVATE_CFG_H
/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
#include "ComM.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
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
  \defgroup  ComMPCGetRootDataMacros  ComM Get Root Data Macros (PRE_COMPILE)
  \brief  These are used to get data pointers of root data.
  \{
*/ 
#define ComM_GetFinalMagicNumberOfPCConfig()                          
#define ComM_GetInitDataHashCodeOfPCConfig()                          
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCGetConstantDuplicatedRootDataMacros  ComM Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define ComM_GetChannelOfPCConfig()                                   ComM_Channel  /**< the pointer to ComM_Channel */
#define ComM_GetChannelPbOfPCConfig()                                 ComM_ChannelPb  /**< the pointer to ComM_ChannelPb */
#define ComM_GetFullComRequestersOfPCConfig()                         ComM_FullComRequesters  /**< the pointer to ComM_FullComRequesters */
#define ComM_GetLastStateChangeOfPCConfig()                           ComM_LastStateChange  /**< the pointer to ComM_LastStateChange */
#define ComM_GetSizeOfChannelOfPCConfig()                             1U  /**< the number of accomplishable value elements in ComM_Channel */
#define ComM_GetSizeOfChannelPbOfPCConfig()                           1U  /**< the number of accomplishable value elements in ComM_ChannelPb */
#define ComM_GetSizeOfFullComRequestersOfPCConfig()                   1U  /**< the number of accomplishable value elements in ComM_FullComRequesters */
#define ComM_GetSizeOfUserByteMaskOfPCConfig()                        1U  /**< the number of accomplishable value elements in ComM_UserByteMask */
#define ComM_GetSizeOfUserModeNotiFuncOfPCConfig()                    1U  /**< the number of accomplishable value elements in ComM_UserModeNotiFunc */
#define ComM_GetSizeOfUserOfPCConfig()                                1U  /**< the number of accomplishable value elements in ComM_User */
#define ComM_GetSizeOfUserReqFullComOfPCConfig()                      1U  /**< the number of accomplishable value elements in ComM_UserReqFullCom */
#define ComM_GetUserByteMaskOfPCConfig()                              ComM_UserByteMask  /**< the pointer to ComM_UserByteMask */
#define ComM_GetUserModeNotiFuncOfPCConfig()                          ComM_UserModeNotiFunc  /**< the pointer to ComM_UserModeNotiFunc */
#define ComM_GetUserOfPCConfig()                                      ComM_User  /**< the pointer to ComM_User */
#define ComM_GetUserReqFullComOfPCConfig()                            ComM_UserReqFullCom  /**< the pointer to ComM_UserReqFullCom */
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCGetDuplicatedRootDataMacros  ComM Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define ComM_GetSizeOfLastStateChangeOfPCConfig()                     ComM_GetSizeOfUserOfPCConfig()  /**< the number of accomplishable value elements in ComM_LastStateChange */
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCGetDataMacros  ComM Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define ComM_GetActivePncComMode(Index)                               
#define ComM_GetBusPncComModeReq(Index)                               
#define ComM_GetBusTypeOfChannel(Index)                               (ComM_GetChannelOfPCConfig()[(Index)].BusTypeOfChannel)
#define ComM_IsEnabledOfChannel(Index)                                
#define ComM_GetGwTypeOfChannel(Index)                                (ComM_GetChannelOfPCConfig()[(Index)].GwTypeOfChannel)
#define ComM_GetInhibitionInitValueOfChannel(Index)                   (ComM_GetChannelOfPCConfig()[(Index)].InhibitionInitValueOfChannel)
#define ComM_IsJ1939SupportOfChannel(Index)                           ((ComM_GetChannelOfPCConfig()[(Index)].J1939SupportOfChannel) != FALSE)
#define ComM_GetMinFullComTimeOfChannel(Index)                        
#define ComM_GetNmLightDurationOfChannel(Index)                       
#define ComM_GetNmLightSilentDurationOfChannel(Index)                 
#define ComM_GetNmTypeOfChannel(Index)                                (ComM_GetChannelOfPCConfig()[(Index)].NmTypeOfChannel)
#define ComM_IsPncNmRequestOfChannel(Index)                           
#define ComM_GetUserReqFullComEndIdxOfChannelPb(Index)                (ComM_GetChannelPbOfPCConfig()[(Index)].UserReqFullComEndIdxOfChannelPb)
#define ComM_GetUserReqFullComStartIdxOfChannelPb(Index)              (ComM_GetChannelPbOfPCConfig()[(Index)].UserReqFullComStartIdxOfChannelPb)
#define ComM_GetFullComRequesters(Index)                              (ComM_GetFullComRequestersOfPCConfig()[(Index)])
#define ComM_GetLastStateChange(Index)                                (ComM_GetLastStateChangeOfPCConfig()[(Index)])
#define ComM_GetClearMaskOfPnc(Index)                                 
#define ComM_GetPncIdOfPnc(Index)                                     
#define ComM_GetSetMaskOfPnc(Index)                                   
#define ComM_GetPncChannelMapping(Index)                              
#define ComM_GetPncPSleepTimer(Index)                                 
#define ComM_GetPncChannelMappingEndIdxOfPncPb(Index)                 
#define ComM_GetPncChannelMappingStartIdxOfPncPb(Index)               
#define ComM_IsPncChannelMappingUsedOfPncPb(Index)                    
#define ComM_GetPncSignalIndEndIdxOfPncPb(Index)                      
#define ComM_GetPncSignalIndStartIdxOfPncPb(Index)                    
#define ComM_IsPncSignalIndUsedOfPncPb(Index)                         
#define ComM_GetSignalByteIndexOfPncPb(Index)                         
#define ComM_GetSystemUserOfPncPb(Index)                              
#define ComM_GetUserReqPncFullComEndIdxOfPncPb(Index)                 
#define ComM_GetUserReqPncFullComStartIdxOfPncPb(Index)               
#define ComM_GetBusTypeIdOfPncSignal(Index)                           
#define ComM_GetChannelIdxOfPncSignal(Index)                          
#define ComM_IsChannelUsedOfPncSignal(Index)                          
#define ComM_GetPncSignalValuesEndIdxOfPncSignal(Index)               
#define ComM_GetPncSignalValuesStartIdxOfPncSignal(Index)             
#define ComM_IsPncSignalValuesUsedOfPncSignal(Index)                  
#define ComM_GetTypeOfPncSignal(Index)                                
#define ComM_GetPncSignalInd(Index)                                   
#define ComM_GetPncSignalValues(Index)                                
#define ComM_IsPncUserOfUser(Index)                                   ((ComM_GetUserOfPCConfig()[(Index)].PncUserOfUser) != FALSE)
#define ComM_GetUserByteMaskEndIdxOfUser(Index)                       (ComM_GetUserOfPCConfig()[(Index)].UserByteMaskEndIdxOfUser)
#define ComM_GetUserByteMaskStartIdxOfUser(Index)                     (ComM_GetUserOfPCConfig()[(Index)].UserByteMaskStartIdxOfUser)
#define ComM_GetUserPncByteMaskEndIdxOfUser(Index)                    
#define ComM_GetUserPncByteMaskStartIdxOfUser(Index)                  
#define ComM_IsUserPncByteMaskUsedOfUser(Index)                       
#define ComM_GetChannelOfUserByteMask(Index)                          ((NetworkHandleType)ComM_GetUserByteMaskOfPCConfig()[(Index)].ChannelOfUserByteMask)
#define ComM_GetClearMaskOfUserByteMask(Index)                        (ComM_GetUserByteMaskOfPCConfig()[(Index)].ClearMaskOfUserByteMask)
#define ComM_GetSetMaskOfUserByteMask(Index)                          (ComM_GetUserByteMaskOfPCConfig()[(Index)].SetMaskOfUserByteMask)
#define ComM_GetUserReqFullComIdxOfUserByteMask(Index)                (ComM_GetUserByteMaskOfPCConfig()[(Index)].UserReqFullComIdxOfUserByteMask)
#define ComM_GetUserModeNotiFunc(Index)                               (ComM_GetUserModeNotiFuncOfPCConfig()[(Index)])
#define ComM_GetClearMaskOfUserPncByteMask(Index)                     
#define ComM_GetPncIDOfUserPncByteMask(Index)                         
#define ComM_GetSetMaskOfUserPncByteMask(Index)                       
#define ComM_GetUserReqPncFullComIdxOfUserPncByteMask(Index)          
#define ComM_GetUserReqFullCom(Index)                                 (ComM_GetUserReqFullComOfPCConfig()[(Index)])
#define ComM_GetUserReqPncFullCom(Index)                              
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCGetDeduplicatedDataMacros  ComM Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define ComM_IsUserReqFullComUsedOfChannelPb(Index)                   (((boolean)(ComM_GetUserReqFullComStartIdxOfChannelPb(Index) != COMM_NO_USERREQFULLCOMSTARTIDXOFCHANNELPB)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to ComM_UserReqFullCom */
#define ComM_GetFinalMagicNumber()                                    
#define ComM_GetInitDataHashCode()                                    
#define ComM_GetSizeOfChannel()                                       ComM_GetSizeOfChannelOfPCConfig()
#define ComM_GetSizeOfChannelPb()                                     ComM_GetSizeOfChannelPbOfPCConfig()
#define ComM_GetSizeOfFullComRequesters()                             ComM_GetSizeOfFullComRequestersOfPCConfig()
#define ComM_GetSizeOfLastStateChange()                               ComM_GetSizeOfLastStateChangeOfPCConfig()
#define ComM_GetSizeOfUser()                                          ComM_GetSizeOfUserOfPCConfig()
#define ComM_GetSizeOfUserByteMask()                                  ComM_GetSizeOfUserByteMaskOfPCConfig()
#define ComM_GetSizeOfUserModeNotiFunc()                              ComM_GetSizeOfUserModeNotiFuncOfPCConfig()
#define ComM_GetSizeOfUserReqFullCom()                                ComM_GetSizeOfUserReqFullComOfPCConfig()
#define ComM_IsUserByteMaskUsedOfUser(Index)                          (((boolean)(ComM_GetUserByteMaskStartIdxOfUser(Index) != COMM_NO_USERBYTEMASKSTARTIDXOFUSER)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to ComM_UserByteMask */
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCSetDataMacros  ComM Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define ComM_SetActivePncComMode(Index, Value)                        
#define ComM_SetBusPncComModeReq(Index, Value)                        
#define ComM_SetFullComRequesters(Index, Value)                       ComM_GetFullComRequestersOfPCConfig()[(Index)] = (Value)
#define ComM_SetLastStateChange(Index, Value)                         ComM_GetLastStateChangeOfPCConfig()[(Index)] = (Value)
#define ComM_SetPncPSleepTimer(Index, Value)                          
#define ComM_SetPncSignalValues(Index, Value)                         
#define ComM_SetUserReqFullCom(Index, Value)                          ComM_GetUserReqFullComOfPCConfig()[(Index)] = (Value)
#define ComM_SetUserReqPncFullCom(Index, Value)                       
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCGetAddressOfDataMacros  ComM Get Address Of Data Macros (PRE_COMPILE)
  \brief  These macros can be used to get the data by the address operator.
  \{
*/ 
#define ComM_GetAddrPncSignalValues(Index)                            
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCHasMacros  ComM Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define ComM_HasActivePncComMode()                                    
#define ComM_HasBusPncComModeReq()                                    
#define ComM_HasChannel()                                             (TRUE != FALSE)
#define ComM_HasBusTypeOfChannel()                                    (TRUE != FALSE)
#define ComM_HasEnabledOfChannel()                                    
#define ComM_HasGwTypeOfChannel()                                     (TRUE != FALSE)
#define ComM_HasInhibitionInitValueOfChannel()                        (TRUE != FALSE)
#define ComM_HasJ1939SupportOfChannel()                               (TRUE != FALSE)
#define ComM_HasMinFullComTimeOfChannel()                             
#define ComM_HasNmLightDurationOfChannel()                            
#define ComM_HasNmLightSilentDurationOfChannel()                      
#define ComM_HasNmTypeOfChannel()                                     (TRUE != FALSE)
#define ComM_HasPncNmRequestOfChannel()                               
#define ComM_HasChannelPb()                                           (TRUE != FALSE)
#define ComM_HasUserReqFullComEndIdxOfChannelPb()                     (TRUE != FALSE)
#define ComM_HasUserReqFullComStartIdxOfChannelPb()                   (TRUE != FALSE)
#define ComM_HasUserReqFullComUsedOfChannelPb()                       (TRUE != FALSE)
#define ComM_HasFinalMagicNumber()                                    
#define ComM_HasFullComRequesters()                                   (TRUE != FALSE)
#define ComM_HasInitDataHashCode()                                    
#define ComM_HasLastStateChange()                                     (TRUE != FALSE)
#define ComM_HasPnc()                                                 
#define ComM_HasClearMaskOfPnc()                                      
#define ComM_HasPncIdOfPnc()                                          
#define ComM_HasSetMaskOfPnc()                                        
#define ComM_HasPncChannelMapping()                                   
#define ComM_HasPncPSleepTimer()                                      
#define ComM_HasPncPb()                                               
#define ComM_HasPncChannelMappingEndIdxOfPncPb()                      
#define ComM_HasPncChannelMappingStartIdxOfPncPb()                    
#define ComM_HasPncChannelMappingUsedOfPncPb()                        
#define ComM_HasPncSignalIndEndIdxOfPncPb()                           
#define ComM_HasPncSignalIndStartIdxOfPncPb()                         
#define ComM_HasPncSignalIndUsedOfPncPb()                             
#define ComM_HasSignalByteIndexOfPncPb()                              
#define ComM_HasSystemUserOfPncPb()                                   
#define ComM_HasUserReqPncFullComEndIdxOfPncPb()                      
#define ComM_HasUserReqPncFullComStartIdxOfPncPb()                    
#define ComM_HasPncSignal()                                           
#define ComM_HasBusTypeIdOfPncSignal()                                
#define ComM_HasChannelIdxOfPncSignal()                               
#define ComM_HasChannelUsedOfPncSignal()                              
#define ComM_HasPncSignalValuesEndIdxOfPncSignal()                    
#define ComM_HasPncSignalValuesStartIdxOfPncSignal()                  
#define ComM_HasPncSignalValuesUsedOfPncSignal()                      
#define ComM_HasTypeOfPncSignal()                                     
#define ComM_HasPncSignalInd()                                        
#define ComM_HasPncSignalValues()                                     
#define ComM_HasSizeOfChannel()                                       (TRUE != FALSE)
#define ComM_HasSizeOfChannelPb()                                     (TRUE != FALSE)
#define ComM_HasSizeOfFullComRequesters()                             (TRUE != FALSE)
#define ComM_HasSizeOfLastStateChange()                               (TRUE != FALSE)
#define ComM_HasSizeOfUser()                                          (TRUE != FALSE)
#define ComM_HasSizeOfUserByteMask()                                  (TRUE != FALSE)
#define ComM_HasSizeOfUserModeNotiFunc()                              (TRUE != FALSE)
#define ComM_HasSizeOfUserReqFullCom()                                (TRUE != FALSE)
#define ComM_HasUser()                                                (TRUE != FALSE)
#define ComM_HasPncUserOfUser()                                       (TRUE != FALSE)
#define ComM_HasUserByteMaskEndIdxOfUser()                            (TRUE != FALSE)
#define ComM_HasUserByteMaskStartIdxOfUser()                          (TRUE != FALSE)
#define ComM_HasUserByteMaskUsedOfUser()                              (TRUE != FALSE)
#define ComM_HasUserPncByteMaskEndIdxOfUser()                         
#define ComM_HasUserPncByteMaskStartIdxOfUser()                       
#define ComM_HasUserPncByteMaskUsedOfUser()                           
#define ComM_HasUserByteMask()                                        (TRUE != FALSE)
#define ComM_HasChannelOfUserByteMask()                               (TRUE != FALSE)
#define ComM_HasClearMaskOfUserByteMask()                             (TRUE != FALSE)
#define ComM_HasSetMaskOfUserByteMask()                               (TRUE != FALSE)
#define ComM_HasUserReqFullComIdxOfUserByteMask()                     (TRUE != FALSE)
#define ComM_HasUserModeNotiFunc()                                    (TRUE != FALSE)
#define ComM_HasUserPncByteMask()                                     
#define ComM_HasClearMaskOfUserPncByteMask()                          
#define ComM_HasPncIDOfUserPncByteMask()                              
#define ComM_HasSetMaskOfUserPncByteMask()                            
#define ComM_HasUserReqPncFullComIdxOfUserPncByteMask()               
#define ComM_HasUserReqFullCom()                                      (TRUE != FALSE)
#define ComM_HasUserReqPncFullCom()                                   
#define ComM_HasPCConfig()                                            (TRUE != FALSE)
#define ComM_HasChannelOfPCConfig()                                   (TRUE != FALSE)
#define ComM_HasChannelPbOfPCConfig()                                 (TRUE != FALSE)
#define ComM_HasFinalMagicNumberOfPCConfig()                          
#define ComM_HasFullComRequestersOfPCConfig()                         (TRUE != FALSE)
#define ComM_HasInitDataHashCodeOfPCConfig()                          
#define ComM_HasLastStateChangeOfPCConfig()                           (TRUE != FALSE)
#define ComM_HasSizeOfChannelOfPCConfig()                             (TRUE != FALSE)
#define ComM_HasSizeOfChannelPbOfPCConfig()                           (TRUE != FALSE)
#define ComM_HasSizeOfFullComRequestersOfPCConfig()                   (TRUE != FALSE)
#define ComM_HasSizeOfLastStateChangeOfPCConfig()                     (TRUE != FALSE)
#define ComM_HasSizeOfUserByteMaskOfPCConfig()                        (TRUE != FALSE)
#define ComM_HasSizeOfUserModeNotiFuncOfPCConfig()                    (TRUE != FALSE)
#define ComM_HasSizeOfUserOfPCConfig()                                (TRUE != FALSE)
#define ComM_HasSizeOfUserReqFullComOfPCConfig()                      (TRUE != FALSE)
#define ComM_HasUserByteMaskOfPCConfig()                              (TRUE != FALSE)
#define ComM_HasUserModeNotiFuncOfPCConfig()                          (TRUE != FALSE)
#define ComM_HasUserOfPCConfig()                                      (TRUE != FALSE)
#define ComM_HasUserReqFullComOfPCConfig()                            (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCIncrementDataMacros  ComM Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define ComM_IncActivePncComMode(Index)                               
#define ComM_IncBusPncComModeReq(Index)                               
#define ComM_IncFullComRequesters(Index)                              ComM_GetFullComRequesters(Index)++
#define ComM_IncLastStateChange(Index)                                ComM_GetLastStateChange(Index)++
#define ComM_IncPncPSleepTimer(Index)                                 
#define ComM_IncPncSignalValues(Index)                                
#define ComM_IncUserReqFullCom(Index)                                 ComM_GetUserReqFullCom(Index)++
#define ComM_IncUserReqPncFullCom(Index)                              
/** 
  \}
*/ 

/** 
  \defgroup  ComMPCDecrementDataMacros  ComM Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define ComM_DecActivePncComMode(Index)                               
#define ComM_DecBusPncComModeReq(Index)                               
#define ComM_DecFullComRequesters(Index)                              ComM_GetFullComRequesters(Index)--
#define ComM_DecLastStateChange(Index)                                ComM_GetLastStateChange(Index)--
#define ComM_DecPncPSleepTimer(Index)                                 
#define ComM_DecPncSignalValues(Index)                                
#define ComM_DecUserReqFullCom(Index)                                 ComM_GetUserReqFullCom(Index)--
#define ComM_DecUserReqPncFullCom(Index)                              
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


/* Postbuild */
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  ComMPBGetRootDataMacros  ComM Get Root Data Macros (POST_BUILD)
  \brief  These are used to get data pointers of root data.
  \{
*/ 
#define ComM_GetLTConfigIdxOfPBConfig()                               
#define ComM_GetPCConfigIdxOfPBConfig()                               
/** 
  \}
*/ 

/** 
  \defgroup  ComMPBHasMacros  ComM Has Macros (POST_BUILD)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define ComM_HasPBConfig()                                            
#define ComM_HasLTConfigIdxOfPBConfig()                               
#define ComM_HasPCConfigIdxOfPBConfig()                               
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/* Macros for stored PNC signal data manipulation:*/

/* Evaluate if the bit for InternalPncId is set in the stored data for signal specified by InternalSignalId */
#define ComM_IsSignalStoredPncBitSet(InternalSignalId, InternalPncId) ((ComM_GetPncSignalValues(ComM_GetPncSignalValuesStartIdxOfPncSignal(InternalSignalId) + ComM_GetSignalByteIndexOfPncPb(InternalPncId)) & ComM_GetSetMaskOfPnc(InternalPncId)) > 0u)

/* Evaluate if a Pnc is synchronized i.e. has a valid system user */
#define ComM_IsSynchronizedOfPnc(PncHandle) (ComM_GetSystemUserOfPncPb(PncHandle) != 255U)


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/* PRQA S 3451 EXTERNDECLARATIONS */ /* MD_ComM_3451 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  ComM_Channel
**********************************************************************************************************************/
/** 
  \var    ComM_Channel
  \brief  Contains PreCompile configuration parameters of channels
  \details
  Element                Description
  BusType                The channel bus type
  J1939Support           Decides if the channel supports J1939
  GwType                 The partial network gateway type, relevant for channels attached to coordinated partial networks
  InhibitionInitValue    Initial value of the inhibition status of the channel
  NmType                 The Network Management type fo the channel
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(ComM_ChannelType, COMM_CONST) ComM_Channel[1];
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_ChannelPb
**********************************************************************************************************************/
/** 
  \var    ComM_ChannelPb
  \brief  Contains PostBuild configuration parameters of channels
  \details
  Element                   Description
  UserReqFullComEndIdx      the end index of the 0:n relation pointing to ComM_UserReqFullCom
  UserReqFullComStartIdx    the start index of the 0:n relation pointing to ComM_UserReqFullCom
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(ComM_ChannelPbType, COMM_CONST) ComM_ChannelPb[1];
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_User
**********************************************************************************************************************/
/** 
  \var    ComM_User
  \brief  Information about ComM users
  \details
  Element                 Description
  PncUser                 decides if a user is a partial network user or a direct channel user
  UserByteMaskEndIdx      the end index of the 0:n relation pointing to ComM_UserByteMask
  UserByteMaskStartIdx    the start index of the 0:n relation pointing to ComM_UserByteMask
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(ComM_UserType, COMM_CONST) ComM_User[1];
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_UserByteMask
**********************************************************************************************************************/
/** 
  \var    ComM_UserByteMask
  \brief  Each user has N entries in this array (N = # channels attached to this user, directly or through PNC). Each entry describes a Byte Position and a Mask for storing/clearing the user request in UserReqFullCom
  \details
  Element              Description
  Channel              ID of the channel which is requested by this entry.
  ClearMask            Clear-mask for clearing the bit which corresponds to this user
  SetMask              Set-mask for setting the bit which corresponds to this user
  UserReqFullComIdx    the index of the 1:1 relation pointing to ComM_UserReqFullCom
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(ComM_UserByteMaskType, COMM_CONST) ComM_UserByteMask[1];
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_UserModeNotiFunc
**********************************************************************************************************************/
/** 
  \var    ComM_UserModeNotiFunc
  \brief  User Mode Notification Functions (RTE Mode-Switch Interface)
*/ 
#define COMM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(ComM_StateNotiFuncPtrType, COMM_CONST) ComM_UserModeNotiFunc[1];
#define COMM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_FullComRequesters
**********************************************************************************************************************/
/** 
  \var    ComM_FullComRequesters
  \brief  Temporarily stores the IDs of users currently requesting FullComm for a channel. It is used as a pseudo-parameter between ComM_CurrentChannelRequestUpdate and the generated ComM_CurrentChannelRequestNotification.
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(ComM_FullComRequestersType, COMM_VAR_NOINIT) ComM_FullComRequesters[1];
#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_LastStateChange
**********************************************************************************************************************/
/** 
  \var    ComM_LastStateChange
  \brief  Variables for storing the last notified user mode
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(ComM_ModeType, COMM_VAR_NOINIT) ComM_LastStateChange[1];
#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  ComM_UserReqFullCom
**********************************************************************************************************************/
/** 
  \var    ComM_UserReqFullCom
  \brief  RAM array used to store user requests for channels as bitmasks. Each channel 'owns' 1..n bytes in this array, depending on the number of users assigned to it.
*/ 
#define COMM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(ComM_UserReqFullComType, COMM_VAR_NOINIT) ComM_UserReqFullCom[1];
#define COMM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/* PRQA L:EXTERNDECLARATIONS */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  INTERNAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIG POINTER
**********************************************************************************************************************/
#define COMM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#if (COMM_USE_INIT_POINTER == STD_ON)
extern P2CONST(ComM_ConfigType, AUTOMATIC, COMM_INIT_DATA) ComM_ConfigPtr;
#endif

#define COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#endif /* COMM_PRIVATE_CFG_H */

