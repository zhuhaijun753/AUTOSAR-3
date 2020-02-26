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
 *            Module: Can
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Can_Cfg.h
 *   Generation Time: 2016-03-17 09:06:54
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/

/* -----------------------------------------------------------------------------
    Generator Info
 ----------------------------------------------------------------------------- 
  Name:     MICROSAR Canoeemu VTTCan driver Generator
  Version:  4.00.00
  MSN:      Can
  Origin:   CAN
  Descrip:  MICROSAR Can driver generator
  JavaPack: com.vector.cfg.gen.DrvCan_CanoeemuCanoeAsr
 ----------------------------------------------------------------------------- */

#if !defined(CAN_CFG_H)
#define CAN_CFG_H

/* CAN222, CAN389, CAN365, CAN366, CAN367 */
/* CAN022, CAN047, CAN388, CAN397, CAN390, CAN392  */

/* PRQA S 0857 EOF */ /* MD_Can_0857 */

/* -----------------------------------------------------------------------------
    Includes
 ----------------------------------------------------------------------------- */

#include "ComStack_Types.h"

#include "Can_GeneralTypes.h" /* CAN435 */

#include "EcuM_Cbk.h"

#if defined (CAN_LCFG_SOURCE) || defined (C_DRV_INTERNAL) /* ESCAN00070085 */
# include "Os.h"
#endif

/* -----------------------------------------------------------------------------
    General Switches for CAN module
 ----------------------------------------------------------------------------- */

#ifndef CAN_USE_DUMMY_FUNCTIONS
#define CAN_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyFunction */
#endif
#ifndef CAN_USE_DUMMY_STATEMENT
#define CAN_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatement */
#endif
#ifndef CAN_DUMMY_STATEMENT
#define CAN_DUMMY_STATEMENT(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CAN_DUMMY_STATEMENT_CONST
#define CAN_DUMMY_STATEMENT_CONST(v)  /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef CAN_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define CAN_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef CAN_ATOMIC_VARIABLE_ACCESS
#define CAN_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef CAN_PROCESSOR_CANOEEMU
#define CAN_PROCESSOR_CANOEEMU
#endif
#ifndef CAN_COMP_ANSI
#define CAN_COMP_ANSI
#endif
#ifndef CAN_GEN_GENERATOR_MSR
#define CAN_GEN_GENERATOR_MSR
#endif
#ifndef CAN_CPUTYPE_BITORDER_LSB2MSB
#define CAN_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/VTT/VTTEcuC/EcucGeneral/BitOrder */
#endif
#ifndef CAN_CONFIGURATION_VARIANT_PRECOMPILE
#define CAN_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef CAN_CONFIGURATION_VARIANT_LINKTIME
#define CAN_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef CAN_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define CAN_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef CAN_CONFIGURATION_VARIANT
#define CAN_CONFIGURATION_VARIANT CAN_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef CAN_POSTBUILD_VARIANT_SUPPORT
#define CAN_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/* -----------------------------------------------------------------------------
    General Switches from old v_cfg.h
 ----------------------------------------------------------------------------- */
#if !defined(V_GEN_GENERATOR5)
# define V_GEN_GENERATOR5 /* need by LL */
#endif
#if !defined(V_ENABLE_CAN_ASR_ABSTRACTION)
# define V_ENABLE_CAN_ASR_ABSTRACTION /* ATK */
#endif
#define CAN_GEN_COM_STACK_LIB

#if !defined( V_OSTYPE_AUTOSAR )
# define V_OSTYPE_AUTOSAR
#endif

#if (CPU_TYPE == CPU_TYPE_32)
# if !defined( C_CPUTYPE_32BIT )
#  define C_CPUTYPE_32BIT
# endif
#endif
#if (CPU_TYPE == CPU_TYPE_16)
# if !defined( C_CPUTYPE_16BIT )
#  define C_CPUTYPE_16BIT
# endif
#endif
#if (CPU_TYPE == CPU_TYPE_8)
# if !defined( C_CPUTYPE_8BIT )
#  define C_CPUTYPE_8BIT
# endif
#endif
#if (CPU_BIT_ORDER == LSB_FIRST)
# if !defined( C_CPUTYPE_BITORDER_LSB2MSB )
#  define C_CPUTYPE_BITORDER_LSB2MSB
# endif
#endif
#if (CPU_BIT_ORDER == MSB_FIRST)
# if !defined( C_CPUTYPE_BITORDER_MSB2LSB )
#  define C_CPUTYPE_BITORDER_MSB2LSB
# endif
#endif
#if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
# if !defined( C_CPUTYPE_LITTLEENDIAN )
#  define C_CPUTYPE_LITTLEENDIAN
# endif
#endif
#if (CPU_BYTE_ORDER == HIGH_BYTE_FIRST)
# if !defined( C_CPUTYPE_BIGENDIAN )
#  define C_CPUTYPE_BIGENDIAN
# endif
#endif

#if !defined( V_DISABLE_USE_DUMMY_FUNCTIONS )
# define V_DISABLE_USE_DUMMY_FUNCTIONS
#endif
#if !defined( V_DISABLE_USE_DUMMY_STATEMENT )
# define V_DISABLE_USE_DUMMY_STATEMENT
#endif

#if !defined( V_CPU_CANOE )
# define V_CPU_CANOE
#endif

#if !defined( C_PROCESSOR_VECTOR_CANCARD )
# define C_PROCESSOR_VECTOR_CANCARD
#endif
#if !defined( V_PROCESSOR_VECTOR_CANCARD )
# define V_PROCESSOR_VECTOR_CANCARD
#endif

#if !defined( C_COMP_ANSI_CANOE )
# define C_COMP_ANSI_CANOE
#endif
#if !defined( V_COMP_ANSI )
# define V_COMP_ANSI
#endif
#if !defined( V_COMP_ANSI_CANOE )
# define V_COMP_ANSI_CANOE
#endif

#if !defined( V_SUPPRESS_EXTENDED_VERSION_CHECK )
# define V_SUPPRESS_EXTENDED_VERSION_CHECK
#endif

/* -----------------------------------------------------------------------------
    Version defines
 ----------------------------------------------------------------------------- */

/* CAN024, CAN023 */
#define CAN_ASR_VERSION              0x0400U
#define CAN_GEN_BASE_CFG5_VERSION    0x0103U
#if !defined(CAN_GEN_BASESASR_VERSION)  /* ATK */
# define CAN_GEN_BASESASR_VERSION                0x0407U
#endif
#define CAN_GEN_CanoeemuCanoeAsr_VERSION              0x0102U
#define CAN_MICROSAR_VERSION         CAN_MSR403

/* -----------------------------------------------------------------------------
    Hardcoded defines
 ----------------------------------------------------------------------------- */

#define CAN_INSTANCE_ID           0

#if !defined(CAN_RX_BASICCAN_TYPE)
# define CAN_RX_BASICCAN_TYPE                 0U
# define CAN_RX_FULLCAN_TYPE                  1U
# define CAN_TX_BASICCAN_TYPE                 2U
# define CAN_TX_FULLCAN_TYPE                  3U
# define CAN_UNUSED_CAN_TYPE                  4U
#endif

#define CAN_INTERRUPT                        0U
#define CAN_POLLING                          1U

#define kCanChannelNotUsed                   CAN_NO_CANIFCHANNELID 

#define CAN_NONE                             0U
/* RAM check (also  none) */
#define CAN_NOTIFY_ISSUE                     1U
#define CAN_NOTIFY_MAILBOX                   2U
/* Interrupt lock (also  none) */
#define CAN_DRIVER                           1U
#define CAN_APPL                             2U
#define CAN_BOTH                             3U
/* MicroSar Version */
#define CAN_MSR30                            30U
#define CAN_MSR40                            40U
#define CAN_MSR403                           403U
/* Overrun Notification (als none,appl) */
#define CAN_DET                              1U
/* CAN FD Support */
#define CAN_BRS                              1U
#define CAN_FULL                             2U
/* CAN FD Configuration */
#define CAN_FD_RXONLY                        2U /* FD Baudrate exist (RX) */
#define CAN_FD_RXTX                          1U /* FD Baudrate also used for TX */
/* Generic Confirmation */
#define CAN_API1                             1U
#define CAN_API2                             2U

#define CAN_OS_TICK2MS(tick)     OS_TICKS2MS_UnusedCounter((tick))     /* PRQA S 3453 */ /* MD_Can_3453 */
#define CAN_OS_COUNTER_ID        UnusedCounter

/* -----------------------------------------------------------------------------
    Defines / Switches
 ----------------------------------------------------------------------------- */

/* Version and Issue detection */
#define CAN_VERSION_INFO_API                 STD_OFF   /* CAN106_Conf */
#define CAN_DEV_ERROR_DETECT                 STD_ON   /* CAN064_Conf */
#define CAN_DEV_ERROR_REPORT                 STD_ON
#define CAN_PROD_ERROR_DETECT                STD_OFF
#define CAN_DEV_TIMEOUT_DETECT               STD_OFF
#define CAN_SAFE_BSW                         STD_OFF
/* Interrupt / Polling */
#define CAN_TX_PROCESSING                    CAN_INTERRUPT   /* CAN318_Conf */
#define CAN_RX_PROCESSING                    CAN_INTERRUPT   /* CAN317_Conf */
#define CAN_BUSOFF_PROCESSING                CAN_INTERRUPT   /* CAN314_Conf */
#define CAN_WAKEUP_PROCESSING                CAN_INTERRUPT   /* CAN319_Conf */
#define CAN_INDIVIDUAL_PROCESSING            STD_OFF
#define CAN_INTERRUPT_USED                   STD_ON
#define CAN_NESTED_INTERRUPTS                STD_OFF
#define C_ENABLE_OSEK_OS_INTCAT2
#define C_DISABLE_ISRVOID
#define CAN_INTLOCK                          CAN_DRIVER

/* Tx Handling */
#define CAN_MULTIPLEXED_TX_MAX               1U
#define CAN_CANCEL_SUPPORT_API               STD_OFF
#define CAN_TRANSMIT_BUFFER                  STD_ON
#define CAN_MULTIPLEXED_TRANSMISSION         STD_OFF   /* CAN095_Conf */
#define CAN_HW_TRANSMIT_CANCELLATION         STD_OFF   /* CAN069_Conf */
#define CAN_IDENTICAL_ID_CANCELLATION        STD_OFF   /* CAN378_Conf */
#define CAN_MULTIPLE_BASICCAN_TX             STD_OFF

/* Rx Handling */
#define CAN_MULTIPLE_BASICCAN                STD_OFF
#define CAN_RX_QUEUE                         STD_OFF
#define CAN_OVERRUN_NOTIFICATION             CAN_DET

/* Sleep Wakeup */
#define CAN_SLEEP_SUPPORT                    STD_ON
#define CAN_WAKEUP_SUPPORT                   STD_ON   /* CAN330_Conf */

/* Hardware loop check */
#define CAN_HARDWARE_CANCELLATION            STD_OFF
#define CAN_TIMEOUT_DURATION                 10UL   /* CAN113_Conf */

/* Appl calls */
#define CAN_EXTENDED_STATE_MACHINE           STD_OFF
#define CAN_BUSOFF_SUPPORT_API               STD_OFF
#define CAN_HW_LOOP_SUPPORT_API              STD_OFF
#define CAN_GENERIC_PRECOPY                  STD_OFF
#define CAN_GENERIC_CONFIRMATION             STD_OFF
#define CAN_GENERIC_PRETRANSMIT              STD_OFF

/* Optimization */
#define CAN_RX_FULLCAN_OBJECTS               STD_OFF
#define CAN_TX_FULLCAN_OBJECTS               STD_OFF
#define CAN_RX_BASICCAN_OBJECTS              STD_ON
#define CAN_EXTENDED_ID                      STD_OFF
#define CAN_MIXED_ID                         STD_OFF
#define CAN_ONE_CONTROLLER_OPTIMIZATION      STD_ON
#define CAN_DYNAMIC_FULLCAN_ID               STD_ON
#define CAN_SECURE_TEMP_BUFFER               STD_OFF
#define C_ENABLE_GEN_HW_START_STOP_IDX
#define CAN_CHANGE_BAUDRATE_API              STD_OFF   /* CAN460_Conf */

/* CAN FD */
#define CAN_SET_BAUDRATE_API                 STD_OFF   /* CAN482_Conf */
#define CAN_FD_SUPPORT                       CAN_NONE

/* Other */
#define CAN_MULTI_ECU_CONFIG                 STD_OFF
#define CAN_COMMON_CAN                       STD_OFF
#define CAN_PARTIAL_NETWORK                  STD_OFF
#define CAN_RAM_CHECK                        CAN_NONE
#define CAN_REINIT_START                     STD_ON
#define CAN_GET_STATUS                       STD_OFF
#define CAN_RUNTIME_MEASUREMENT_SUPPORT      STD_OFF
#define CAN_PROTECTED_MODE                   STD_OFF
#define CAN_MIRROR_MODE                      STD_OFF
/* -----------------------------------------------------------------------------
    Channel And Maibox
 ----------------------------------------------------------------------------- */
#ifndef C_DRV_INTERNAL
# ifndef kCanNumberOfChannels
#  define kCanNumberOfChannels               1U
# endif
# ifndef kCanNumberOfHwChannels
#  define kCanNumberOfHwChannels             1U
# endif
#endif
#ifndef kCanNumberOfUsedChannels /* for ATK */
# define kCanNumberOfUsedChannels            1U
#endif

#define kCanPhysToLogChannelIndex_0 

#define kCanNumberOfPhysChannels             1U




/**
 * \defgroup CanHandleIdsactivated Handle IDs of handle space activated.
 * \brief controllers by CanControllerActivation
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define CanConf_CanController_CT_CAN00_e98c47e6                     0
/**\} */
#define CanConf_CN_CAN00_e98c47e6_Tx_Std 0U
#define CanConf_CN_CAN00_e98c47e6_Rx_Std 1U

#define CanConf_ControllerBaudrateConfig_CT_CAN00_e98c47e6_CanControllerBaudrateConfig 0u



/* -----------------------------------------------------------------------------
    Types
 ----------------------------------------------------------------------------- */
/* HW specific BEGIN */
/* HW specific Pre Can Config H file */

#define CAN_VTT_DRIVER


#define CAN_MAX_MAILBOX  250U

typedef VAR(uint8, CAN_VAR_NOINIT) tCanLLCanIntOld;                          /* PRQA S 0850 */ /* MD_MSR_19.8 */

/* stucture of the CAN message objects */
typedef struct Can_MsgDataStructTag
{
  uint32 IdRaw;
  uint8 DlcRaw;
  uint8 DataFld[8];
} Can_MsgDataStructType;

/* emulated Rx/Tx CAN object */
typedef struct Can_ObjectTag
{
  Can_MsgDataStructType mMsg;        /* message data */
  uint8             mIsFree;     /* indication, if buffer is in use or is free */
  uint8             mCanOverrun; /* overrun flag for emulation hardware for Rx */
  uint8             mCanCancel;  /* CancelInHw request for Tx */
  uint8             mIsPending;  /* indication, if message object is pending (Rx,Tx) */
  uint8             mObjType;    /* Type of Object: CAN_MSGOBJ_TX, CAN_MSGOBJ_RXFULL, CAN_MSGOBJ_RXBASIC, CAN_MSGOBJ_UNUSED */
} Can_ObjectType;


/* data type of the emulated CAN Controller */
typedef struct Can_ControllerTag
{
  Can_ObjectType  MsgObj[CAN_MAX_MAILBOX]; /* Rx or Tx-Msg Objects */
  uint32      ErrCode;       /* controller error code from canoe (BusOff, Errorpassiv, ...) */
  uint8       ErrCntTx;      /* Tx error counter */
  uint8       ErrCntRx;      /* Rx error counter */
  uint8       Mode;          /* CAN_MODE_STOP, CAN_MODE_START, CAN_MODE_SLEEP */
  uint8       IntEnable;     /* Interrupt enabled: CAN_INT_RX, CAN_INT_TX, CAN_INT_ERR, CAN_INT_WAKEUP */
  uint8       HighVoltageMode;
  uint8       BusOffNotify;  /* call busoff notification only once per busoff */
  uint8       WakeupPending; /* handling of Wakeup should be done */
  uint8       ErrorPending;  /* handling of Error should be done */
} Can_ControllerType;

/* !HW specific Pre Can Config H file */ 
/* HW specific END */ 

typedef VAR(uint8, TYPEDEF) CanChannelHandle;

#if defined (CAN_LCFG_SOURCE) || defined (C_DRV_INTERNAL)
typedef TickType Can_ExternalTickType;
#else
typedef uint32 Can_ExternalTickType;
#endif





/* -----------------------------------------------------------------------------
    CONST Declarations
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    VAR Declarations
 ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
    Hw specific
 ----------------------------------------------------------------------------- */
/* HW specific BEGIN */
/* HW specific global H file */

typedef uint8 Can_BusNameType[20]; 

/* !HW specific global H file */
/* HW specific END */


/**********************************************************************************************************************
  ComStackLib
**********************************************************************************************************************/
/* Can_GlobalConfig: CAN354_Conf */
/* Can_ConfigType: CAN413 */

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanPCDataSwitches  Can Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CAN_ACTIVESENDPDU                                             STD_ON
#define CAN_ACTIVESENDSTATE                                           STD_ON
#define CAN_BASEDLL_GENERATORVERSION                                  STD_ON
#define CAN_BUSNAME                                                   STD_ON
#define CAN_CANIFCHANNELID                                            STD_ON
#define CAN_CANINTERRUPTCOUNTER                                       STD_ON
#define CAN_CANINTERRUPTOLDSTATUS                                     STD_ON
#define CAN_CONTROLLERCONFIG                                          STD_ON
#define CAN_CANCONTROLLERDEFAULTBAUDRATEIDXOFCONTROLLERCONFIG         STD_OFF  /**< Deactivateable: 'Can_ControllerConfig.CanControllerDefaultBaudrateIdx' Reason: '/ActiveEcuC/VTTCan/CanGeneral[0:CanSetBaudrateApi] is configured to 'false'' */
#define CAN_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG            STD_ON
#define CAN_RXBASICHANDLEMAXOFCONTROLLERCONFIG                        STD_ON
#define CAN_RXBASICHANDLESTARTOFCONTROLLERCONFIG                      STD_ON
#define CAN_RXBASICHANDLESTOPOFCONTROLLERCONFIG                       STD_ON
#define CAN_RXBASICHWSTARTOFCONTROLLERCONFIG                          STD_ON
#define CAN_RXBASICHWSTOPOFCONTROLLERCONFIG                           STD_ON
#define CAN_RXFULLHANDLEMAXOFCONTROLLERCONFIG                         STD_ON
#define CAN_RXFULLHANDLESTARTOFCONTROLLERCONFIG                       STD_ON
#define CAN_RXFULLHANDLESTOPOFCONTROLLERCONFIG                        STD_ON
#define CAN_RXFULLHWSTARTOFCONTROLLERCONFIG                           STD_ON
#define CAN_RXFULLHWSTOPOFCONTROLLERCONFIG                            STD_ON
#define CAN_TXBASICHANDLEMAXOFCONTROLLERCONFIG                        STD_ON
#define CAN_TXBASICHANDLESTARTOFCONTROLLERCONFIG                      STD_ON
#define CAN_TXBASICHANDLESTOPOFCONTROLLERCONFIG                       STD_ON
#define CAN_TXBASICHWSTARTOFCONTROLLERCONFIG                          STD_ON
#define CAN_TXBASICHWSTOPOFCONTROLLERCONFIG                           STD_ON
#define CAN_TXFULLHANDLEMAXOFCONTROLLERCONFIG                         STD_ON
#define CAN_TXFULLHANDLESTARTOFCONTROLLERCONFIG                       STD_ON
#define CAN_TXFULLHANDLESTOPOFCONTROLLERCONFIG                        STD_ON
#define CAN_TXFULLHWSTARTOFCONTROLLERCONFIG                           STD_ON
#define CAN_TXFULLHWSTOPOFCONTROLLERCONFIG                            STD_ON
#define CAN_UNUSEDHANDLEMAXOFCONTROLLERCONFIG                         STD_ON
#define CAN_UNUSEDHANDLESTARTOFCONTROLLERCONFIG                       STD_ON
#define CAN_UNUSEDHANDLESTOPOFCONTROLLERCONFIG                        STD_ON
#define CAN_UNUSEDHWSTARTOFCONTROLLERCONFIG                           STD_ON
#define CAN_UNUSEDHWSTOPOFCONTROLLERCONFIG                            STD_ON
#define CAN_FILTER                                                    STD_ON
#define CAN_BCANHWIDXOFFILTER                                         STD_ON
#define CAN_CODEOFFILTER                                              STD_ON
#define CAN_MASKOFFILTER                                              STD_ON
#define CAN_FILTERSTARTIDX                                            STD_ON
#define CAN_FINALMAGICNUMBER                                          STD_OFF  /**< Deactivateable: 'Can_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_INITDATAHASHCODE                                          STD_OFF  /**< Deactivateable: 'Can_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_INITOBJECT                                                STD_ON
#define CAN_ARBBAUDRATEOFINITOBJECT                                   STD_ON
#define CAN_ARBSAMOFINITOBJECT                                        STD_ON
#define CAN_ARBSJWOFINITOBJECT                                        STD_ON
#define CAN_ARBTSEG1OFINITOBJECT                                      STD_ON
#define CAN_ARBTSEG2OFINITOBJECT                                      STD_ON
#define CAN_DBRBAUDRATEOFINITOBJECT                                   STD_ON
#define CAN_DBRSAMOFINITOBJECT                                        STD_ON
#define CAN_DBRSJWOFINITOBJECT                                        STD_ON
#define CAN_DBRTSEG1OFINITOBJECT                                      STD_ON
#define CAN_DBRTSEG2OFINITOBJECT                                      STD_ON
#define CAN_INITOBJECTBAUDRATE                                        STD_ON
#define CAN_INITOBJECTSTARTINDEX                                      STD_ON
#define CAN_ISBUSOFF                                                  STD_ON
#define CAN_ISWAKEUP                                                  STD_ON
#define CAN_LASTINITOBJECT                                            STD_ON
#define CAN_LOGSTATUS                                                 STD_ON
#define CAN_MAILBOX                                                   STD_ON
#define CAN_DLC_FIFOOFMAILBOX                                         STD_ON
#define CAN_HWHANDLEOFMAILBOX                                         STD_ON
#define CAN_IDVALUEOFMAILBOX                                          STD_ON
#define CAN_MAILBOXTYPEOFMAILBOX                                      STD_ON
#define CAN_MAXDATALENOFMAILBOX                                       STD_ON
#define CAN_MSGCONTROLLEROFMAILBOX                                    STD_ON
#define CAN_PLATFORMDLL_GENERATORVERSION                              STD_ON
#define CAN_RXMSG                                                     STD_ON
#define CAN_SIZEOFACTIVESENDPDU                                       STD_ON
#define CAN_SIZEOFACTIVESENDSTATE                                     STD_ON
#define CAN_SIZEOFBUSNAME                                             STD_ON
#define CAN_SIZEOFCANIFCHANNELID                                      STD_ON
#define CAN_SIZEOFCANINTERRUPTCOUNTER                                 STD_ON
#define CAN_SIZEOFCANINTERRUPTOLDSTATUS                               STD_ON
#define CAN_SIZEOFCONTROLLERCONFIG                                    STD_ON
#define CAN_SIZEOFFILTER                                              STD_ON
#define CAN_SIZEOFFILTERSTARTIDX                                      STD_ON
#define CAN_SIZEOFINITOBJECT                                          STD_ON
#define CAN_SIZEOFINITOBJECTBAUDRATE                                  STD_ON
#define CAN_SIZEOFINITOBJECTSTARTINDEX                                STD_ON
#define CAN_SIZEOFISBUSOFF                                            STD_ON
#define CAN_SIZEOFISWAKEUP                                            STD_ON
#define CAN_SIZEOFLASTINITOBJECT                                      STD_ON
#define CAN_SIZEOFLOGSTATUS                                           STD_ON
#define CAN_SIZEOFMAILBOX                                             STD_ON
#define CAN_SIZEOFRXMSG                                               STD_ON
#define CAN_SIZEOFSTATUSREQ                                           STD_ON
#define CAN_SIZEOFTXOFFSETHWTOLOG                                     STD_ON
#define CAN_SIZEOFWAKEUPSOURCEREF                                     STD_ON
#define CAN_SIZEOFGCANCONTROLLER                                      STD_ON
#define CAN_STATUSREQ                                                 STD_ON
#define CAN_TXOFFSETHWTOLOG                                           STD_ON
#define CAN_WAKEUPSOURCEREF                                           STD_ON
#define CAN_GCANCONTROLLER                                            STD_ON
#define CAN_PCCONFIG                                                  STD_ON
#define CAN_ACTIVESENDPDUOFPCCONFIG                                   STD_ON
#define CAN_ACTIVESENDSTATEOFPCCONFIG                                 STD_ON
#define CAN_BASEDLL_GENERATORVERSIONOFPCCONFIG                        STD_ON
#define CAN_BUSNAMEOFPCCONFIG                                         STD_ON
#define CAN_CANIFCHANNELIDOFPCCONFIG                                  STD_ON
#define CAN_CANINTERRUPTCOUNTEROFPCCONFIG                             STD_ON
#define CAN_CANINTERRUPTOLDSTATUSOFPCCONFIG                           STD_ON
#define CAN_CONTROLLERCONFIGOFPCCONFIG                                STD_ON
#define CAN_FILTEROFPCCONFIG                                          STD_ON
#define CAN_FILTERSTARTIDXOFPCCONFIG                                  STD_ON
#define CAN_FINALMAGICNUMBEROFPCCONFIG                                STD_OFF  /**< Deactivateable: 'Can_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_INITDATAHASHCODEOFPCCONFIG                                STD_OFF  /**< Deactivateable: 'Can_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define CAN_INITOBJECTBAUDRATEOFPCCONFIG                              STD_ON
#define CAN_INITOBJECTOFPCCONFIG                                      STD_ON
#define CAN_INITOBJECTSTARTINDEXOFPCCONFIG                            STD_ON
#define CAN_ISBUSOFFOFPCCONFIG                                        STD_ON
#define CAN_ISWAKEUPOFPCCONFIG                                        STD_ON
#define CAN_LASTINITOBJECTOFPCCONFIG                                  STD_ON
#define CAN_LOGSTATUSOFPCCONFIG                                       STD_ON
#define CAN_MAILBOXOFPCCONFIG                                         STD_ON
#define CAN_PLATFORMDLL_GENERATORVERSIONOFPCCONFIG                    STD_ON
#define CAN_RXMSGOFPCCONFIG                                           STD_ON
#define CAN_SIZEOFACTIVESENDPDUOFPCCONFIG                             STD_ON
#define CAN_SIZEOFACTIVESENDSTATEOFPCCONFIG                           STD_ON
#define CAN_SIZEOFBUSNAMEOFPCCONFIG                                   STD_ON
#define CAN_SIZEOFCANIFCHANNELIDOFPCCONFIG                            STD_ON
#define CAN_SIZEOFCANINTERRUPTCOUNTEROFPCCONFIG                       STD_ON
#define CAN_SIZEOFCANINTERRUPTOLDSTATUSOFPCCONFIG                     STD_ON
#define CAN_SIZEOFCONTROLLERCONFIGOFPCCONFIG                          STD_ON
#define CAN_SIZEOFFILTEROFPCCONFIG                                    STD_ON
#define CAN_SIZEOFFILTERSTARTIDXOFPCCONFIG                            STD_ON
#define CAN_SIZEOFINITOBJECTBAUDRATEOFPCCONFIG                        STD_ON
#define CAN_SIZEOFINITOBJECTOFPCCONFIG                                STD_ON
#define CAN_SIZEOFINITOBJECTSTARTINDEXOFPCCONFIG                      STD_ON
#define CAN_SIZEOFISBUSOFFOFPCCONFIG                                  STD_ON
#define CAN_SIZEOFISWAKEUPOFPCCONFIG                                  STD_ON
#define CAN_SIZEOFLASTINITOBJECTOFPCCONFIG                            STD_ON
#define CAN_SIZEOFLOGSTATUSOFPCCONFIG                                 STD_ON
#define CAN_SIZEOFMAILBOXOFPCCONFIG                                   STD_ON
#define CAN_SIZEOFRXMSGOFPCCONFIG                                     STD_ON
#define CAN_SIZEOFSTATUSREQOFPCCONFIG                                 STD_ON
#define CAN_SIZEOFTXOFFSETHWTOLOGOFPCCONFIG                           STD_ON
#define CAN_SIZEOFWAKEUPSOURCEREFOFPCCONFIG                           STD_ON
#define CAN_SIZEOFGCANCONTROLLEROFPCCONFIG                            STD_ON
#define CAN_STATUSREQOFPCCONFIG                                       STD_ON
#define CAN_TXOFFSETHWTOLOGOFPCCONFIG                                 STD_ON
#define CAN_WAKEUPSOURCEREFOFPCCONFIG                                 STD_ON
#define CAN_GCANCONTROLLEROFPCCONFIG                                  STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanPCMinNumericValueDefines  Can Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define CAN_MIN_ACTIVESENDPDU                                         0U
#define CAN_MIN_ACTIVESENDSTATE                                       0U
#define CAN_MIN_CANINTERRUPTCOUNTER                                   0U
#define CAN_MIN_LASTINITOBJECT                                        0U
#define CAN_MIN_LOGSTATUS                                             0U
#define CAN_MIN_STATUSREQ                                             0U
/** 
  \}
*/ 

/** 
  \defgroup  CanPCMaxNumericValueDefines  Can Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define CAN_MAX_ACTIVESENDPDU                                         255U
#define CAN_MAX_ACTIVESENDSTATE                                       255U
#define CAN_MAX_CANINTERRUPTCOUNTER                                   255U
#define CAN_MAX_LASTINITOBJECT                                        255U
#define CAN_MAX_LOGSTATUS                                             255U
#define CAN_MAX_STATUSREQ                                             255U
/** 
  \}
*/ 

/** 
  \defgroup  CanPCNoReferenceDefines  Can No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define CAN_NO_CANIFCHANNELID                                         255U
#define CAN_NO_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG         65535U
#define CAN_NO_RXBASICHANDLEMAXOFCONTROLLERCONFIG                     65535U
#define CAN_NO_RXBASICHANDLESTARTOFCONTROLLERCONFIG                   65535U
#define CAN_NO_RXBASICHANDLESTOPOFCONTROLLERCONFIG                    65535U
#define CAN_NO_RXBASICHWSTARTOFCONTROLLERCONFIG                       65535U
#define CAN_NO_RXBASICHWSTOPOFCONTROLLERCONFIG                        65535U
#define CAN_NO_RXFULLHANDLEMAXOFCONTROLLERCONFIG                      65535U
#define CAN_NO_RXFULLHANDLESTARTOFCONTROLLERCONFIG                    65535U
#define CAN_NO_RXFULLHANDLESTOPOFCONTROLLERCONFIG                     65535U
#define CAN_NO_RXFULLHWSTARTOFCONTROLLERCONFIG                        65535U
#define CAN_NO_RXFULLHWSTOPOFCONTROLLERCONFIG                         65535U
#define CAN_NO_TXBASICHANDLEMAXOFCONTROLLERCONFIG                     65535U
#define CAN_NO_TXBASICHANDLESTARTOFCONTROLLERCONFIG                   65535U
#define CAN_NO_TXBASICHANDLESTOPOFCONTROLLERCONFIG                    65535U
#define CAN_NO_TXBASICHWSTARTOFCONTROLLERCONFIG                       65535U
#define CAN_NO_TXBASICHWSTOPOFCONTROLLERCONFIG                        65535U
#define CAN_NO_TXFULLHANDLEMAXOFCONTROLLERCONFIG                      65535U
#define CAN_NO_TXFULLHANDLESTARTOFCONTROLLERCONFIG                    65535U
#define CAN_NO_TXFULLHANDLESTOPOFCONTROLLERCONFIG                     65535U
#define CAN_NO_TXFULLHWSTARTOFCONTROLLERCONFIG                        65535U
#define CAN_NO_TXFULLHWSTOPOFCONTROLLERCONFIG                         65535U
#define CAN_NO_UNUSEDHANDLEMAXOFCONTROLLERCONFIG                      65535U
#define CAN_NO_UNUSEDHANDLESTARTOFCONTROLLERCONFIG                    65535U
#define CAN_NO_UNUSEDHANDLESTOPOFCONTROLLERCONFIG                     65535U
#define CAN_NO_UNUSEDHWSTARTOFCONTROLLERCONFIG                        65535U
#define CAN_NO_UNUSEDHWSTOPOFCONTROLLERCONFIG                         65535U
#define CAN_NO_TXOFFSETHWTOLOG                                        32767
/** 
  \}
*/ 

/** 
  \defgroup  CanPCEnumExistsDefines  Can Enum Exists Defines (PRE_COMPILE)
  \brief  These defines can be used to deactivate enumeration based code sequences if the enumeration value does not exist in the configuration data.
  \{
*/ 
#define CAN_EXISTS_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX              STD_ON
#define CAN_EXISTS_RX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX               STD_OFF
#define CAN_EXISTS_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX              STD_ON
#define CAN_EXISTS_TX_FULLCAN_TYPE_MAILBOXTYPEOFMAILBOX               STD_OFF
#define CAN_EXISTS_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX               STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanPCEnumDefines  Can Enum Defines (PRE_COMPILE)
  \brief  These defines are the enumeration values of enumeration based CONST and VAR data.
  \{
*/ 
#define CAN_RX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX                     0x00U
#define CAN_TX_BASICCAN_TYPE_MAILBOXTYPEOFMAILBOX                     0x02U
#define CAN_UNUSED_CAN_TYPE_MAILBOXTYPEOFMAILBOX                      0x04U
/** 
  \}
*/ 

/** 
  \defgroup  CanPCIsReducedToDefineDefines  Can Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define CAN_ISDEF_BUSNAME                                             STD_OFF
#define CAN_ISDEF_CANIFCHANNELID                                      STD_OFF
#define CAN_ISDEF_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG      STD_OFF
#define CAN_ISDEF_RXBASICHANDLEMAXOFCONTROLLERCONFIG                  STD_OFF
#define CAN_ISDEF_RXBASICHANDLESTARTOFCONTROLLERCONFIG                STD_OFF
#define CAN_ISDEF_RXBASICHANDLESTOPOFCONTROLLERCONFIG                 STD_OFF
#define CAN_ISDEF_RXBASICHWSTARTOFCONTROLLERCONFIG                    STD_OFF
#define CAN_ISDEF_RXBASICHWSTOPOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_RXFULLHANDLEMAXOFCONTROLLERCONFIG                   STD_OFF
#define CAN_ISDEF_RXFULLHANDLESTARTOFCONTROLLERCONFIG                 STD_OFF
#define CAN_ISDEF_RXFULLHANDLESTOPOFCONTROLLERCONFIG                  STD_OFF
#define CAN_ISDEF_RXFULLHWSTARTOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_RXFULLHWSTOPOFCONTROLLERCONFIG                      STD_OFF
#define CAN_ISDEF_TXBASICHANDLEMAXOFCONTROLLERCONFIG                  STD_OFF
#define CAN_ISDEF_TXBASICHANDLESTARTOFCONTROLLERCONFIG                STD_OFF
#define CAN_ISDEF_TXBASICHANDLESTOPOFCONTROLLERCONFIG                 STD_OFF
#define CAN_ISDEF_TXBASICHWSTARTOFCONTROLLERCONFIG                    STD_OFF
#define CAN_ISDEF_TXBASICHWSTOPOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_TXFULLHANDLEMAXOFCONTROLLERCONFIG                   STD_OFF
#define CAN_ISDEF_TXFULLHANDLESTARTOFCONTROLLERCONFIG                 STD_OFF
#define CAN_ISDEF_TXFULLHANDLESTOPOFCONTROLLERCONFIG                  STD_OFF
#define CAN_ISDEF_TXFULLHWSTARTOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_TXFULLHWSTOPOFCONTROLLERCONFIG                      STD_OFF
#define CAN_ISDEF_UNUSEDHANDLEMAXOFCONTROLLERCONFIG                   STD_OFF
#define CAN_ISDEF_UNUSEDHANDLESTARTOFCONTROLLERCONFIG                 STD_OFF
#define CAN_ISDEF_UNUSEDHANDLESTOPOFCONTROLLERCONFIG                  STD_OFF
#define CAN_ISDEF_UNUSEDHWSTARTOFCONTROLLERCONFIG                     STD_OFF
#define CAN_ISDEF_UNUSEDHWSTOPOFCONTROLLERCONFIG                      STD_OFF
#define CAN_ISDEF_BCANHWIDXOFFILTER                                   STD_OFF
#define CAN_ISDEF_CODEOFFILTER                                        STD_OFF
#define CAN_ISDEF_MASKOFFILTER                                        STD_OFF
#define CAN_ISDEF_FILTERSTARTIDX                                      STD_OFF
#define CAN_ISDEF_ARBBAUDRATEOFINITOBJECT                             STD_OFF
#define CAN_ISDEF_ARBSAMOFINITOBJECT                                  STD_OFF
#define CAN_ISDEF_ARBSJWOFINITOBJECT                                  STD_OFF
#define CAN_ISDEF_ARBTSEG1OFINITOBJECT                                STD_OFF
#define CAN_ISDEF_ARBTSEG2OFINITOBJECT                                STD_OFF
#define CAN_ISDEF_DBRBAUDRATEOFINITOBJECT                             STD_OFF
#define CAN_ISDEF_DBRSAMOFINITOBJECT                                  STD_OFF
#define CAN_ISDEF_DBRSJWOFINITOBJECT                                  STD_OFF
#define CAN_ISDEF_DBRTSEG1OFINITOBJECT                                STD_OFF
#define CAN_ISDEF_DBRTSEG2OFINITOBJECT                                STD_OFF
#define CAN_ISDEF_INITOBJECTBAUDRATE                                  STD_OFF
#define CAN_ISDEF_INITOBJECTSTARTINDEX                                STD_OFF
#define CAN_ISDEF_DLC_FIFOOFMAILBOX                                   STD_OFF
#define CAN_ISDEF_HWHANDLEOFMAILBOX                                   STD_OFF
#define CAN_ISDEF_IDVALUEOFMAILBOX                                    STD_OFF
#define CAN_ISDEF_MAILBOXTYPEOFMAILBOX                                STD_OFF
#define CAN_ISDEF_MAXDATALENOFMAILBOX                                 STD_OFF
#define CAN_ISDEF_MSGCONTROLLEROFMAILBOX                              STD_OFF
#define CAN_ISDEF_TXOFFSETHWTOLOG                                     STD_OFF
#define CAN_ISDEF_WAKEUPSOURCEREF                                     STD_OFF
#define CAN_ISDEF_ACTIVESENDPDUOFPCCONFIG                             STD_ON
#define CAN_ISDEF_ACTIVESENDSTATEOFPCCONFIG                           STD_ON
#define CAN_ISDEF_BUSNAMEOFPCCONFIG                                   STD_ON
#define CAN_ISDEF_CANIFCHANNELIDOFPCCONFIG                            STD_ON
#define CAN_ISDEF_CANINTERRUPTCOUNTEROFPCCONFIG                       STD_ON
#define CAN_ISDEF_CANINTERRUPTOLDSTATUSOFPCCONFIG                     STD_ON
#define CAN_ISDEF_CONTROLLERCONFIGOFPCCONFIG                          STD_ON
#define CAN_ISDEF_FILTEROFPCCONFIG                                    STD_ON
#define CAN_ISDEF_FILTERSTARTIDXOFPCCONFIG                            STD_ON
#define CAN_ISDEF_INITOBJECTBAUDRATEOFPCCONFIG                        STD_ON
#define CAN_ISDEF_INITOBJECTOFPCCONFIG                                STD_ON
#define CAN_ISDEF_INITOBJECTSTARTINDEXOFPCCONFIG                      STD_ON
#define CAN_ISDEF_ISBUSOFFOFPCCONFIG                                  STD_ON
#define CAN_ISDEF_ISWAKEUPOFPCCONFIG                                  STD_ON
#define CAN_ISDEF_LASTINITOBJECTOFPCCONFIG                            STD_ON
#define CAN_ISDEF_LOGSTATUSOFPCCONFIG                                 STD_ON
#define CAN_ISDEF_MAILBOXOFPCCONFIG                                   STD_ON
#define CAN_ISDEF_RXMSGOFPCCONFIG                                     STD_ON
#define CAN_ISDEF_STATUSREQOFPCCONFIG                                 STD_ON
#define CAN_ISDEF_TXOFFSETHWTOLOGOFPCCONFIG                           STD_ON
#define CAN_ISDEF_WAKEUPSOURCEREFOFPCCONFIG                           STD_ON
#define CAN_ISDEF_GCANCONTROLLEROFPCCONFIG                            STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  CanPCEqualsAlwaysToDefines  Can Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define CAN_EQ2_BUSNAME                                               
#define CAN_EQ2_CANIFCHANNELID                                        
#define CAN_EQ2_CANCONTROLLERDEFAULTBAUDRATEOFCONTROLLERCONFIG        
#define CAN_EQ2_RXBASICHANDLEMAXOFCONTROLLERCONFIG                    
#define CAN_EQ2_RXBASICHANDLESTARTOFCONTROLLERCONFIG                  
#define CAN_EQ2_RXBASICHANDLESTOPOFCONTROLLERCONFIG                   
#define CAN_EQ2_RXBASICHWSTARTOFCONTROLLERCONFIG                      
#define CAN_EQ2_RXBASICHWSTOPOFCONTROLLERCONFIG                       
#define CAN_EQ2_RXFULLHANDLEMAXOFCONTROLLERCONFIG                     
#define CAN_EQ2_RXFULLHANDLESTARTOFCONTROLLERCONFIG                   
#define CAN_EQ2_RXFULLHANDLESTOPOFCONTROLLERCONFIG                    
#define CAN_EQ2_RXFULLHWSTARTOFCONTROLLERCONFIG                       
#define CAN_EQ2_RXFULLHWSTOPOFCONTROLLERCONFIG                        
#define CAN_EQ2_TXBASICHANDLEMAXOFCONTROLLERCONFIG                    
#define CAN_EQ2_TXBASICHANDLESTARTOFCONTROLLERCONFIG                  
#define CAN_EQ2_TXBASICHANDLESTOPOFCONTROLLERCONFIG                   
#define CAN_EQ2_TXBASICHWSTARTOFCONTROLLERCONFIG                      
#define CAN_EQ2_TXBASICHWSTOPOFCONTROLLERCONFIG                       
#define CAN_EQ2_TXFULLHANDLEMAXOFCONTROLLERCONFIG                     
#define CAN_EQ2_TXFULLHANDLESTARTOFCONTROLLERCONFIG                   
#define CAN_EQ2_TXFULLHANDLESTOPOFCONTROLLERCONFIG                    
#define CAN_EQ2_TXFULLHWSTARTOFCONTROLLERCONFIG                       
#define CAN_EQ2_TXFULLHWSTOPOFCONTROLLERCONFIG                        
#define CAN_EQ2_UNUSEDHANDLEMAXOFCONTROLLERCONFIG                     
#define CAN_EQ2_UNUSEDHANDLESTARTOFCONTROLLERCONFIG                   
#define CAN_EQ2_UNUSEDHANDLESTOPOFCONTROLLERCONFIG                    
#define CAN_EQ2_UNUSEDHWSTARTOFCONTROLLERCONFIG                       
#define CAN_EQ2_UNUSEDHWSTOPOFCONTROLLERCONFIG                        
#define CAN_EQ2_BCANHWIDXOFFILTER                                     
#define CAN_EQ2_CODEOFFILTER                                          
#define CAN_EQ2_MASKOFFILTER                                          
#define CAN_EQ2_FILTERSTARTIDX                                        
#define CAN_EQ2_ARBBAUDRATEOFINITOBJECT                               
#define CAN_EQ2_ARBSAMOFINITOBJECT                                    
#define CAN_EQ2_ARBSJWOFINITOBJECT                                    
#define CAN_EQ2_ARBTSEG1OFINITOBJECT                                  
#define CAN_EQ2_ARBTSEG2OFINITOBJECT                                  
#define CAN_EQ2_DBRBAUDRATEOFINITOBJECT                               
#define CAN_EQ2_DBRSAMOFINITOBJECT                                    
#define CAN_EQ2_DBRSJWOFINITOBJECT                                    
#define CAN_EQ2_DBRTSEG1OFINITOBJECT                                  
#define CAN_EQ2_DBRTSEG2OFINITOBJECT                                  
#define CAN_EQ2_INITOBJECTBAUDRATE                                    
#define CAN_EQ2_INITOBJECTSTARTINDEX                                  
#define CAN_EQ2_DLC_FIFOOFMAILBOX                                     
#define CAN_EQ2_HWHANDLEOFMAILBOX                                     
#define CAN_EQ2_IDVALUEOFMAILBOX                                      
#define CAN_EQ2_MAILBOXTYPEOFMAILBOX                                  
#define CAN_EQ2_MAXDATALENOFMAILBOX                                   
#define CAN_EQ2_MSGCONTROLLEROFMAILBOX                                
#define CAN_EQ2_TXOFFSETHWTOLOG                                       
#define CAN_EQ2_WAKEUPSOURCEREF                                       
#define CAN_EQ2_ACTIVESENDPDUOFPCCONFIG                               Can_ActiveSendPdu
#define CAN_EQ2_ACTIVESENDSTATEOFPCCONFIG                             Can_ActiveSendState
#define CAN_EQ2_BUSNAMEOFPCCONFIG                                     Can_BusName
#define CAN_EQ2_CANIFCHANNELIDOFPCCONFIG                              Can_CanIfChannelId
#define CAN_EQ2_CANINTERRUPTCOUNTEROFPCCONFIG                         Can_CanInterruptCounter
#define CAN_EQ2_CANINTERRUPTOLDSTATUSOFPCCONFIG                       Can_CanInterruptOldStatus
#define CAN_EQ2_CONTROLLERCONFIGOFPCCONFIG                            Can_ControllerConfig
#define CAN_EQ2_FILTEROFPCCONFIG                                      Can_Filter
#define CAN_EQ2_FILTERSTARTIDXOFPCCONFIG                              Can_FilterStartIdx
#define CAN_EQ2_INITOBJECTBAUDRATEOFPCCONFIG                          Can_InitObjectBaudrate
#define CAN_EQ2_INITOBJECTOFPCCONFIG                                  Can_InitObject
#define CAN_EQ2_INITOBJECTSTARTINDEXOFPCCONFIG                        Can_InitObjectStartIndex
#define CAN_EQ2_ISBUSOFFOFPCCONFIG                                    Can_IsBusOff
#define CAN_EQ2_ISWAKEUPOFPCCONFIG                                    Can_IsWakeup
#define CAN_EQ2_LASTINITOBJECTOFPCCONFIG                              Can_LastInitObject
#define CAN_EQ2_LOGSTATUSOFPCCONFIG                                   Can_LogStatus
#define CAN_EQ2_MAILBOXOFPCCONFIG                                     Can_Mailbox
#define CAN_EQ2_RXMSGOFPCCONFIG                                       Can_RxMsg
#define CAN_EQ2_STATUSREQOFPCCONFIG                                   Can_StatusReq
#define CAN_EQ2_TXOFFSETHWTOLOGOFPCCONFIG                             Can_TxOffsetHwToLog
#define CAN_EQ2_WAKEUPSOURCEREFOFPCCONFIG                             Can_WakeupSourceRef
#define CAN_EQ2_GCANCONTROLLEROFPCCONFIG                              Can_gCanController
/** 
  \}
*/ 

/** 
  \defgroup  CanPCSymbolicInitializationPointers  Can Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define Can_Config_Ptr                                                NULL_PTR  /**< symbolic identifier which shall be used to initialize 'Can' */
/** 
  \}
*/ 

/** 
  \defgroup  CanPCInitializationSymbols  Can Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define Can_Config                                                    NULL_PTR  /**< symbolic identifier which could be used to initialize 'Can */
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGeneral  Can General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define CAN_CHECK_INIT_POINTER                                        STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define CAN_FINAL_MAGIC_NUMBER                                        0x501EU  /**< the precompile constant to validate the size of the initialization structure at initialization time of Can */
#define CAN_INDIVIDUAL_POSTBUILD                                      STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'Can' is not configured to be postbuild capable. */
#define CAN_INIT_DATA                                                 CAN_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define CAN_INIT_DATA_HASH_CODE                                       -1002145066L  /**< the precompile constant to validate the initialization structure at initialization time of Can with a hashcode. The seed value is '0x501EU' */
#define CAN_USE_ECUM_BSW_ERROR_HOOK                                   STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define CAN_USE_INIT_POINTER                                          STD_OFF  /**< STD_ON if the init pointer Can shall be used. */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanLTDataSwitches  Can Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CAN_LTCONFIG                                                  STD_OFF  /**< Deactivateable: 'Can_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  CanPBDataSwitches  Can Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define CAN_PBCONFIG                                                  STD_OFF  /**< Deactivateable: 'Can_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CAN_LTCONFIGIDXOFPBCONFIG                                     STD_OFF  /**< Deactivateable: 'Can_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define CAN_PCCONFIGIDXOFPBCONFIG                                     STD_OFF  /**< Deactivateable: 'Can_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 



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
  \defgroup  CanPCGetConstantDuplicatedRootDataMacros  Can Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define Can_GetActiveSendPduOfPCConfig()                              Can_ActiveSendPdu  /**< the pointer to Can_ActiveSendPdu */
#define Can_GetActiveSendStateOfPCConfig()                            Can_ActiveSendState  /**< the pointer to Can_ActiveSendState */
#define Can_GetBaseDll_GeneratorVersionOfPCConfig()                   0x0103U
#define Can_GetBusNameOfPCConfig()                                    Can_BusName  /**< the pointer to Can_BusName */
#define Can_GetCanIfChannelIdOfPCConfig()                             Can_CanIfChannelId  /**< the pointer to Can_CanIfChannelId */
#define Can_GetCanInterruptCounterOfPCConfig()                        Can_CanInterruptCounter  /**< the pointer to Can_CanInterruptCounter */
#define Can_GetCanInterruptOldStatusOfPCConfig()                      Can_CanInterruptOldStatus  /**< the pointer to Can_CanInterruptOldStatus */
#define Can_GetControllerConfigOfPCConfig()                           Can_ControllerConfig  /**< the pointer to Can_ControllerConfig */
#define Can_GetFilterOfPCConfig()                                     Can_Filter  /**< the pointer to Can_Filter */
#define Can_GetFilterStartIdxOfPCConfig()                             Can_FilterStartIdx  /**< the pointer to Can_FilterStartIdx */
#define Can_GetInitObjectBaudrateOfPCConfig()                         Can_InitObjectBaudrate  /**< the pointer to Can_InitObjectBaudrate */
#define Can_GetInitObjectOfPCConfig()                                 Can_InitObject  /**< the pointer to Can_InitObject */
#define Can_GetInitObjectStartIndexOfPCConfig()                       Can_InitObjectStartIndex  /**< the pointer to Can_InitObjectStartIndex */
#define Can_GetIsBusOffOfPCConfig()                                   Can_IsBusOff  /**< the pointer to Can_IsBusOff */
#define Can_GetIsWakeupOfPCConfig()                                   Can_IsWakeup  /**< the pointer to Can_IsWakeup */
#define Can_GetLastInitObjectOfPCConfig()                             Can_LastInitObject  /**< the pointer to Can_LastInitObject */
#define Can_GetLogStatusOfPCConfig()                                  Can_LogStatus  /**< the pointer to Can_LogStatus */
#define Can_GetMailboxOfPCConfig()                                    Can_Mailbox  /**< the pointer to Can_Mailbox */
#define Can_GetPlatformDll_GeneratorVersionOfPCConfig()               0x0102U
#define Can_GetRxMsgOfPCConfig()                                      Can_RxMsg  /**< the pointer to Can_RxMsg */
#define Can_GetSizeOfActiveSendPduOfPCConfig()                        1U  /**< the number of accomplishable value elements in Can_ActiveSendPdu */
#define Can_GetSizeOfActiveSendStateOfPCConfig()                      1U  /**< the number of accomplishable value elements in Can_ActiveSendState */
#define Can_GetSizeOfBusNameOfPCConfig()                              1U  /**< the number of accomplishable value elements in Can_BusName */
#define Can_GetSizeOfCanIfChannelIdOfPCConfig()                       1U  /**< the number of accomplishable value elements in Can_CanIfChannelId */
#define Can_GetSizeOfCanInterruptCounterOfPCConfig()                  1U  /**< the number of accomplishable value elements in Can_CanInterruptCounter */
#define Can_GetSizeOfCanInterruptOldStatusOfPCConfig()                1U  /**< the number of accomplishable value elements in Can_CanInterruptOldStatus */
#define Can_GetSizeOfControllerConfigOfPCConfig()                     1U  /**< the number of accomplishable value elements in Can_ControllerConfig */
#define Can_GetSizeOfFilterOfPCConfig()                               1U  /**< the number of accomplishable value elements in Can_Filter */
#define Can_GetSizeOfFilterStartIdxOfPCConfig()                       2U  /**< the number of accomplishable value elements in Can_FilterStartIdx */
#define Can_GetSizeOfInitObjectBaudrateOfPCConfig()                   1U  /**< the number of accomplishable value elements in Can_InitObjectBaudrate */
#define Can_GetSizeOfInitObjectOfPCConfig()                           1U  /**< the number of accomplishable value elements in Can_InitObject */
#define Can_GetSizeOfInitObjectStartIndexOfPCConfig()                 2U  /**< the number of accomplishable value elements in Can_InitObjectStartIndex */
#define Can_GetSizeOfIsBusOffOfPCConfig()                             1U  /**< the number of accomplishable value elements in Can_IsBusOff */
#define Can_GetSizeOfIsWakeupOfPCConfig()                             1U  /**< the number of accomplishable value elements in Can_IsWakeup */
#define Can_GetSizeOfLastInitObjectOfPCConfig()                       1U  /**< the number of accomplishable value elements in Can_LastInitObject */
#define Can_GetSizeOfLogStatusOfPCConfig()                            1U  /**< the number of accomplishable value elements in Can_LogStatus */
#define Can_GetSizeOfMailboxOfPCConfig()                              3U  /**< the number of accomplishable value elements in Can_Mailbox */
#define Can_GetSizeOfRxMsgOfPCConfig()                                1U  /**< the number of accomplishable value elements in Can_RxMsg */
#define Can_GetSizeOfStatusReqOfPCConfig()                            1U  /**< the number of accomplishable value elements in Can_StatusReq */
#define Can_GetSizeOfTxOffsetHwToLogOfPCConfig()                      1U  /**< the number of accomplishable value elements in Can_TxOffsetHwToLog */
#define Can_GetSizeOfWakeupSourceRefOfPCConfig()                      1U  /**< the number of accomplishable value elements in Can_WakeupSourceRef */
#define Can_GetSizeOfgCanControllerOfPCConfig()                       1U  /**< the number of accomplishable value elements in Can_gCanController */
#define Can_GetStatusReqOfPCConfig()                                  Can_StatusReq  /**< the pointer to Can_StatusReq */
#define Can_GetTxOffsetHwToLogOfPCConfig()                            Can_TxOffsetHwToLog  /**< the pointer to Can_TxOffsetHwToLog */
#define Can_GetWakeupSourceRefOfPCConfig()                            Can_WakeupSourceRef  /**< the pointer to Can_WakeupSourceRef */
#define Can_GetgCanControllerOfPCConfig()                             Can_gCanController  /**< the pointer to Can_gCanController */
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGetDataMacros  Can Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Can_GetActiveSendPdu(Index)                                   (Can_GetActiveSendPduOfPCConfig()[(Index)])
#define Can_GetActiveSendState(Index)                                 (Can_GetActiveSendStateOfPCConfig()[(Index)])
#define Can_GetBusName(Index)                                         (Can_GetBusNameOfPCConfig()[(Index)])
#define Can_GetCanIfChannelId(Index)                                  (Can_GetCanIfChannelIdOfPCConfig()[(Index)])
#define Can_GetCanInterruptCounter(Index)                             (Can_GetCanInterruptCounterOfPCConfig()[(Index)])
#define Can_GetCanInterruptOldStatus(Index)                           (Can_GetCanInterruptOldStatusOfPCConfig()[(Index)])
#define Can_GetCanControllerDefaultBaudrateOfControllerConfig(Index)  (Can_GetControllerConfigOfPCConfig()[(Index)].CanControllerDefaultBaudrateOfControllerConfig)
#define Can_GetRxBasicHandleMaxOfControllerConfig(Index)              (Can_GetControllerConfigOfPCConfig()[(Index)].RxBasicHandleMaxOfControllerConfig)
#define Can_GetRxBasicHandleStartOfControllerConfig(Index)            (Can_GetControllerConfigOfPCConfig()[(Index)].RxBasicHandleStartOfControllerConfig)
#define Can_GetRxBasicHandleStopOfControllerConfig(Index)             (Can_GetControllerConfigOfPCConfig()[(Index)].RxBasicHandleStopOfControllerConfig)
#define Can_GetRxBasicHwStartOfControllerConfig(Index)                (Can_GetControllerConfigOfPCConfig()[(Index)].RxBasicHwStartOfControllerConfig)
#define Can_GetRxBasicHwStopOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].RxBasicHwStopOfControllerConfig)
#define Can_GetRxFullHandleMaxOfControllerConfig(Index)               (Can_GetControllerConfigOfPCConfig()[(Index)].RxFullHandleMaxOfControllerConfig)
#define Can_GetRxFullHandleStartOfControllerConfig(Index)             (Can_GetControllerConfigOfPCConfig()[(Index)].RxFullHandleStartOfControllerConfig)
#define Can_GetRxFullHandleStopOfControllerConfig(Index)              (Can_GetControllerConfigOfPCConfig()[(Index)].RxFullHandleStopOfControllerConfig)
#define Can_GetRxFullHwStartOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].RxFullHwStartOfControllerConfig)
#define Can_GetRxFullHwStopOfControllerConfig(Index)                  (Can_GetControllerConfigOfPCConfig()[(Index)].RxFullHwStopOfControllerConfig)
#define Can_GetTxBasicHandleMaxOfControllerConfig(Index)              (Can_GetControllerConfigOfPCConfig()[(Index)].TxBasicHandleMaxOfControllerConfig)
#define Can_GetTxBasicHandleStartOfControllerConfig(Index)            (Can_GetControllerConfigOfPCConfig()[(Index)].TxBasicHandleStartOfControllerConfig)
#define Can_GetTxBasicHandleStopOfControllerConfig(Index)             (Can_GetControllerConfigOfPCConfig()[(Index)].TxBasicHandleStopOfControllerConfig)
#define Can_GetTxBasicHwStartOfControllerConfig(Index)                (Can_GetControllerConfigOfPCConfig()[(Index)].TxBasicHwStartOfControllerConfig)
#define Can_GetTxBasicHwStopOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].TxBasicHwStopOfControllerConfig)
#define Can_GetTxFullHandleMaxOfControllerConfig(Index)               (Can_GetControllerConfigOfPCConfig()[(Index)].TxFullHandleMaxOfControllerConfig)
#define Can_GetTxFullHandleStartOfControllerConfig(Index)             (Can_GetControllerConfigOfPCConfig()[(Index)].TxFullHandleStartOfControllerConfig)
#define Can_GetTxFullHandleStopOfControllerConfig(Index)              (Can_GetControllerConfigOfPCConfig()[(Index)].TxFullHandleStopOfControllerConfig)
#define Can_GetTxFullHwStartOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].TxFullHwStartOfControllerConfig)
#define Can_GetTxFullHwStopOfControllerConfig(Index)                  (Can_GetControllerConfigOfPCConfig()[(Index)].TxFullHwStopOfControllerConfig)
#define Can_GetUnusedHandleMaxOfControllerConfig(Index)               (Can_GetControllerConfigOfPCConfig()[(Index)].UnusedHandleMaxOfControllerConfig)
#define Can_GetUnusedHandleStartOfControllerConfig(Index)             (Can_GetControllerConfigOfPCConfig()[(Index)].UnusedHandleStartOfControllerConfig)
#define Can_GetUnusedHandleStopOfControllerConfig(Index)              (Can_GetControllerConfigOfPCConfig()[(Index)].UnusedHandleStopOfControllerConfig)
#define Can_GetUnusedHwStartOfControllerConfig(Index)                 (Can_GetControllerConfigOfPCConfig()[(Index)].UnusedHwStartOfControllerConfig)
#define Can_GetUnusedHwStopOfControllerConfig(Index)                  (Can_GetControllerConfigOfPCConfig()[(Index)].UnusedHwStopOfControllerConfig)
#define Can_GetBCanHwIdxOfFilter(Index)                               (Can_GetFilterOfPCConfig()[(Index)].BCanHwIdxOfFilter)
#define Can_GetCodeOfFilter(Index)                                    (Can_GetFilterOfPCConfig()[(Index)].CodeOfFilter)
#define Can_GetMaskOfFilter(Index)                                    (Can_GetFilterOfPCConfig()[(Index)].MaskOfFilter)
#define Can_GetFilterStartIdx(Index)                                  (Can_GetFilterStartIdxOfPCConfig()[(Index)])
#define Can_GetarbBaudrateOfInitObject(Index)                         (Can_GetInitObjectOfPCConfig()[(Index)].arbBaudrateOfInitObject)
#define Can_GetarbSamOfInitObject(Index)                              (Can_GetInitObjectOfPCConfig()[(Index)].arbSamOfInitObject)
#define Can_GetarbSjwOfInitObject(Index)                              (Can_GetInitObjectOfPCConfig()[(Index)].arbSjwOfInitObject)
#define Can_GetarbTseg1OfInitObject(Index)                            (Can_GetInitObjectOfPCConfig()[(Index)].arbTseg1OfInitObject)
#define Can_GetarbTseg2OfInitObject(Index)                            (Can_GetInitObjectOfPCConfig()[(Index)].arbTseg2OfInitObject)
#define Can_GetdbrBaudrateOfInitObject(Index)                         (Can_GetInitObjectOfPCConfig()[(Index)].dbrBaudrateOfInitObject)
#define Can_GetdbrSamOfInitObject(Index)                              (Can_GetInitObjectOfPCConfig()[(Index)].dbrSamOfInitObject)
#define Can_GetdbrSjwOfInitObject(Index)                              (Can_GetInitObjectOfPCConfig()[(Index)].dbrSjwOfInitObject)
#define Can_GetdbrTseg1OfInitObject(Index)                            (Can_GetInitObjectOfPCConfig()[(Index)].dbrTseg1OfInitObject)
#define Can_GetdbrTseg2OfInitObject(Index)                            (Can_GetInitObjectOfPCConfig()[(Index)].dbrTseg2OfInitObject)
#define Can_GetInitObjectBaudrate(Index)                              (Can_GetInitObjectBaudrateOfPCConfig()[(Index)])
#define Can_GetInitObjectStartIndex(Index)                            (Can_GetInitObjectStartIndexOfPCConfig()[(Index)])
#define Can_IsIsBusOff(Index)                                         ((Can_GetIsBusOffOfPCConfig()[(Index)]) != FALSE)
#define Can_IsIsWakeup(Index)                                         ((Can_GetIsWakeupOfPCConfig()[(Index)]) != FALSE)
#define Can_GetLastInitObject(Index)                                  (Can_GetLastInitObjectOfPCConfig()[(Index)])
#define Can_GetLogStatus(Index)                                       (Can_GetLogStatusOfPCConfig()[(Index)])
#define Can_GetDLC_FIFOOfMailbox(Index)                               (Can_GetMailboxOfPCConfig()[(Index)].DLC_FIFOOfMailbox)
#define Can_GetHwHandleOfMailbox(Index)                               (Can_GetMailboxOfPCConfig()[(Index)].HwHandleOfMailbox)
#define Can_GetIDValueOfMailbox(Index)                                (Can_GetMailboxOfPCConfig()[(Index)].IDValueOfMailbox)
#define Can_GetMailboxTypeOfMailbox(Index)                            (Can_GetMailboxOfPCConfig()[(Index)].MailboxTypeOfMailbox)
#define Can_GetMaxDataLenOfMailbox(Index)                             (Can_GetMailboxOfPCConfig()[(Index)].MaxDataLenOfMailbox)
#define Can_GetMsgControllerOfMailbox(Index)                          (Can_GetMailboxOfPCConfig()[(Index)].MsgControllerOfMailbox)
#define Can_GetRxMsg(Index)                                           (Can_GetRxMsgOfPCConfig()[(Index)])
#define Can_GetStatusReq(Index)                                       (Can_GetStatusReqOfPCConfig()[(Index)])
#define Can_GetTxOffsetHwToLog(Index)                                 (Can_GetTxOffsetHwToLogOfPCConfig()[(Index)])
#define Can_GetWakeupSourceRef(Index)                                 (Can_GetWakeupSourceRefOfPCConfig()[(Index)])
#define Can_GetgCanController(Index)                                  (Can_GetgCanControllerOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  CanPCGetDeduplicatedDataMacros  Can Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Can_GetBaseDll_GeneratorVersion()                             Can_GetBaseDll_GeneratorVersionOfPCConfig()
#define Can_GetPlatformDll_GeneratorVersion()                         Can_GetPlatformDll_GeneratorVersionOfPCConfig()
#define Can_GetSizeOfActiveSendPdu()                                  Can_GetSizeOfActiveSendPduOfPCConfig()
#define Can_GetSizeOfActiveSendState()                                Can_GetSizeOfActiveSendStateOfPCConfig()
#define Can_GetSizeOfBusName()                                        Can_GetSizeOfBusNameOfPCConfig()
#define Can_GetSizeOfCanIfChannelId()                                 Can_GetSizeOfCanIfChannelIdOfPCConfig()
#define Can_GetSizeOfCanInterruptCounter()                            Can_GetSizeOfCanInterruptCounterOfPCConfig()
#define Can_GetSizeOfCanInterruptOldStatus()                          Can_GetSizeOfCanInterruptOldStatusOfPCConfig()
#define Can_GetSizeOfControllerConfig()                               Can_GetSizeOfControllerConfigOfPCConfig()
#define Can_GetSizeOfFilter()                                         Can_GetSizeOfFilterOfPCConfig()
#define Can_GetSizeOfFilterStartIdx()                                 Can_GetSizeOfFilterStartIdxOfPCConfig()
#define Can_GetSizeOfInitObject()                                     Can_GetSizeOfInitObjectOfPCConfig()
#define Can_GetSizeOfInitObjectBaudrate()                             Can_GetSizeOfInitObjectBaudrateOfPCConfig()
#define Can_GetSizeOfInitObjectStartIndex()                           Can_GetSizeOfInitObjectStartIndexOfPCConfig()
#define Can_GetSizeOfIsBusOff()                                       Can_GetSizeOfIsBusOffOfPCConfig()
#define Can_GetSizeOfIsWakeup()                                       Can_GetSizeOfIsWakeupOfPCConfig()
#define Can_GetSizeOfLastInitObject()                                 Can_GetSizeOfLastInitObjectOfPCConfig()
#define Can_GetSizeOfLogStatus()                                      Can_GetSizeOfLogStatusOfPCConfig()
#define Can_GetSizeOfMailbox()                                        Can_GetSizeOfMailboxOfPCConfig()
#define Can_GetSizeOfRxMsg()                                          Can_GetSizeOfRxMsgOfPCConfig()
#define Can_GetSizeOfStatusReq()                                      Can_GetSizeOfStatusReqOfPCConfig()
#define Can_GetSizeOfTxOffsetHwToLog()                                Can_GetSizeOfTxOffsetHwToLogOfPCConfig()
#define Can_GetSizeOfWakeupSourceRef()                                Can_GetSizeOfWakeupSourceRefOfPCConfig()
#define Can_GetSizeOfgCanController()                                 Can_GetSizeOfgCanControllerOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  CanPCSetDataMacros  Can Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Can_SetActiveSendPdu(Index, Value)                            Can_GetActiveSendPduOfPCConfig()[(Index)] = (Value)
#define Can_SetActiveSendState(Index, Value)                          Can_GetActiveSendStateOfPCConfig()[(Index)] = (Value)
#define Can_SetCanInterruptCounter(Index, Value)                      Can_GetCanInterruptCounterOfPCConfig()[(Index)] = (Value)
#define Can_SetCanInterruptOldStatus(Index, Value)                    Can_GetCanInterruptOldStatusOfPCConfig()[(Index)] = (Value)
#define Can_SetIsBusOff(Index, Value)                                 Can_GetIsBusOffOfPCConfig()[(Index)] = (Value)
#define Can_SetIsWakeup(Index, Value)                                 Can_GetIsWakeupOfPCConfig()[(Index)] = (Value)
#define Can_SetLastInitObject(Index, Value)                           Can_GetLastInitObjectOfPCConfig()[(Index)] = (Value)
#define Can_SetLogStatus(Index, Value)                                Can_GetLogStatusOfPCConfig()[(Index)] = (Value)
#define Can_SetRxMsg(Index, Value)                                    Can_GetRxMsgOfPCConfig()[(Index)] = (Value)
#define Can_SetStatusReq(Index, Value)                                Can_GetStatusReqOfPCConfig()[(Index)] = (Value)
#define Can_SetgCanController(Index, Value)                           Can_GetgCanControllerOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  CanPCHasMacros  Can Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Can_HasActiveSendPdu()                                        (TRUE != FALSE)
#define Can_HasActiveSendState()                                      (TRUE != FALSE)
#define Can_HasBaseDll_GeneratorVersion()                             (TRUE != FALSE)
#define Can_HasBusName()                                              (TRUE != FALSE)
#define Can_HasCanIfChannelId()                                       (TRUE != FALSE)
#define Can_HasCanInterruptCounter()                                  (TRUE != FALSE)
#define Can_HasCanInterruptOldStatus()                                (TRUE != FALSE)
#define Can_HasControllerConfig()                                     (TRUE != FALSE)
#define Can_HasCanControllerDefaultBaudrateOfControllerConfig()       (TRUE != FALSE)
#define Can_HasRxBasicHandleMaxOfControllerConfig()                   (TRUE != FALSE)
#define Can_HasRxBasicHandleStartOfControllerConfig()                 (TRUE != FALSE)
#define Can_HasRxBasicHandleStopOfControllerConfig()                  (TRUE != FALSE)
#define Can_HasRxBasicHwStartOfControllerConfig()                     (TRUE != FALSE)
#define Can_HasRxBasicHwStopOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasRxFullHandleMaxOfControllerConfig()                    (TRUE != FALSE)
#define Can_HasRxFullHandleStartOfControllerConfig()                  (TRUE != FALSE)
#define Can_HasRxFullHandleStopOfControllerConfig()                   (TRUE != FALSE)
#define Can_HasRxFullHwStartOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasRxFullHwStopOfControllerConfig()                       (TRUE != FALSE)
#define Can_HasTxBasicHandleMaxOfControllerConfig()                   (TRUE != FALSE)
#define Can_HasTxBasicHandleStartOfControllerConfig()                 (TRUE != FALSE)
#define Can_HasTxBasicHandleStopOfControllerConfig()                  (TRUE != FALSE)
#define Can_HasTxBasicHwStartOfControllerConfig()                     (TRUE != FALSE)
#define Can_HasTxBasicHwStopOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasTxFullHandleMaxOfControllerConfig()                    (TRUE != FALSE)
#define Can_HasTxFullHandleStartOfControllerConfig()                  (TRUE != FALSE)
#define Can_HasTxFullHandleStopOfControllerConfig()                   (TRUE != FALSE)
#define Can_HasTxFullHwStartOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasTxFullHwStopOfControllerConfig()                       (TRUE != FALSE)
#define Can_HasUnusedHandleMaxOfControllerConfig()                    (TRUE != FALSE)
#define Can_HasUnusedHandleStartOfControllerConfig()                  (TRUE != FALSE)
#define Can_HasUnusedHandleStopOfControllerConfig()                   (TRUE != FALSE)
#define Can_HasUnusedHwStartOfControllerConfig()                      (TRUE != FALSE)
#define Can_HasUnusedHwStopOfControllerConfig()                       (TRUE != FALSE)
#define Can_HasFilter()                                               (TRUE != FALSE)
#define Can_HasBCanHwIdxOfFilter()                                    (TRUE != FALSE)
#define Can_HasCodeOfFilter()                                         (TRUE != FALSE)
#define Can_HasMaskOfFilter()                                         (TRUE != FALSE)
#define Can_HasFilterStartIdx()                                       (TRUE != FALSE)
#define Can_HasInitObject()                                           (TRUE != FALSE)
#define Can_HasarbBaudrateOfInitObject()                              (TRUE != FALSE)
#define Can_HasarbSamOfInitObject()                                   (TRUE != FALSE)
#define Can_HasarbSjwOfInitObject()                                   (TRUE != FALSE)
#define Can_HasarbTseg1OfInitObject()                                 (TRUE != FALSE)
#define Can_HasarbTseg2OfInitObject()                                 (TRUE != FALSE)
#define Can_HasdbrBaudrateOfInitObject()                              (TRUE != FALSE)
#define Can_HasdbrSamOfInitObject()                                   (TRUE != FALSE)
#define Can_HasdbrSjwOfInitObject()                                   (TRUE != FALSE)
#define Can_HasdbrTseg1OfInitObject()                                 (TRUE != FALSE)
#define Can_HasdbrTseg2OfInitObject()                                 (TRUE != FALSE)
#define Can_HasInitObjectBaudrate()                                   (TRUE != FALSE)
#define Can_HasInitObjectStartIndex()                                 (TRUE != FALSE)
#define Can_HasIsBusOff()                                             (TRUE != FALSE)
#define Can_HasIsWakeup()                                             (TRUE != FALSE)
#define Can_HasLastInitObject()                                       (TRUE != FALSE)
#define Can_HasLogStatus()                                            (TRUE != FALSE)
#define Can_HasMailbox()                                              (TRUE != FALSE)
#define Can_HasDLC_FIFOOfMailbox()                                    (TRUE != FALSE)
#define Can_HasHwHandleOfMailbox()                                    (TRUE != FALSE)
#define Can_HasIDValueOfMailbox()                                     (TRUE != FALSE)
#define Can_HasMailboxTypeOfMailbox()                                 (TRUE != FALSE)
#define Can_HasMaxDataLenOfMailbox()                                  (TRUE != FALSE)
#define Can_HasMsgControllerOfMailbox()                               (TRUE != FALSE)
#define Can_HasPlatformDll_GeneratorVersion()                         (TRUE != FALSE)
#define Can_HasRxMsg()                                                (TRUE != FALSE)
#define Can_HasSizeOfActiveSendPdu()                                  (TRUE != FALSE)
#define Can_HasSizeOfActiveSendState()                                (TRUE != FALSE)
#define Can_HasSizeOfBusName()                                        (TRUE != FALSE)
#define Can_HasSizeOfCanIfChannelId()                                 (TRUE != FALSE)
#define Can_HasSizeOfCanInterruptCounter()                            (TRUE != FALSE)
#define Can_HasSizeOfCanInterruptOldStatus()                          (TRUE != FALSE)
#define Can_HasSizeOfControllerConfig()                               (TRUE != FALSE)
#define Can_HasSizeOfFilter()                                         (TRUE != FALSE)
#define Can_HasSizeOfFilterStartIdx()                                 (TRUE != FALSE)
#define Can_HasSizeOfInitObject()                                     (TRUE != FALSE)
#define Can_HasSizeOfInitObjectBaudrate()                             (TRUE != FALSE)
#define Can_HasSizeOfInitObjectStartIndex()                           (TRUE != FALSE)
#define Can_HasSizeOfIsBusOff()                                       (TRUE != FALSE)
#define Can_HasSizeOfIsWakeup()                                       (TRUE != FALSE)
#define Can_HasSizeOfLastInitObject()                                 (TRUE != FALSE)
#define Can_HasSizeOfLogStatus()                                      (TRUE != FALSE)
#define Can_HasSizeOfMailbox()                                        (TRUE != FALSE)
#define Can_HasSizeOfRxMsg()                                          (TRUE != FALSE)
#define Can_HasSizeOfStatusReq()                                      (TRUE != FALSE)
#define Can_HasSizeOfTxOffsetHwToLog()                                (TRUE != FALSE)
#define Can_HasSizeOfWakeupSourceRef()                                (TRUE != FALSE)
#define Can_HasSizeOfgCanController()                                 (TRUE != FALSE)
#define Can_HasStatusReq()                                            (TRUE != FALSE)
#define Can_HasTxOffsetHwToLog()                                      (TRUE != FALSE)
#define Can_HasWakeupSourceRef()                                      (TRUE != FALSE)
#define Can_HasgCanController()                                       (TRUE != FALSE)
#define Can_HasPCConfig()                                             (TRUE != FALSE)
#define Can_HasActiveSendPduOfPCConfig()                              (TRUE != FALSE)
#define Can_HasActiveSendStateOfPCConfig()                            (TRUE != FALSE)
#define Can_HasBaseDll_GeneratorVersionOfPCConfig()                   (TRUE != FALSE)
#define Can_HasBusNameOfPCConfig()                                    (TRUE != FALSE)
#define Can_HasCanIfChannelIdOfPCConfig()                             (TRUE != FALSE)
#define Can_HasCanInterruptCounterOfPCConfig()                        (TRUE != FALSE)
#define Can_HasCanInterruptOldStatusOfPCConfig()                      (TRUE != FALSE)
#define Can_HasControllerConfigOfPCConfig()                           (TRUE != FALSE)
#define Can_HasFilterOfPCConfig()                                     (TRUE != FALSE)
#define Can_HasFilterStartIdxOfPCConfig()                             (TRUE != FALSE)
#define Can_HasInitObjectBaudrateOfPCConfig()                         (TRUE != FALSE)
#define Can_HasInitObjectOfPCConfig()                                 (TRUE != FALSE)
#define Can_HasInitObjectStartIndexOfPCConfig()                       (TRUE != FALSE)
#define Can_HasIsBusOffOfPCConfig()                                   (TRUE != FALSE)
#define Can_HasIsWakeupOfPCConfig()                                   (TRUE != FALSE)
#define Can_HasLastInitObjectOfPCConfig()                             (TRUE != FALSE)
#define Can_HasLogStatusOfPCConfig()                                  (TRUE != FALSE)
#define Can_HasMailboxOfPCConfig()                                    (TRUE != FALSE)
#define Can_HasPlatformDll_GeneratorVersionOfPCConfig()               (TRUE != FALSE)
#define Can_HasRxMsgOfPCConfig()                                      (TRUE != FALSE)
#define Can_HasSizeOfActiveSendPduOfPCConfig()                        (TRUE != FALSE)
#define Can_HasSizeOfActiveSendStateOfPCConfig()                      (TRUE != FALSE)
#define Can_HasSizeOfBusNameOfPCConfig()                              (TRUE != FALSE)
#define Can_HasSizeOfCanIfChannelIdOfPCConfig()                       (TRUE != FALSE)
#define Can_HasSizeOfCanInterruptCounterOfPCConfig()                  (TRUE != FALSE)
#define Can_HasSizeOfCanInterruptOldStatusOfPCConfig()                (TRUE != FALSE)
#define Can_HasSizeOfControllerConfigOfPCConfig()                     (TRUE != FALSE)
#define Can_HasSizeOfFilterOfPCConfig()                               (TRUE != FALSE)
#define Can_HasSizeOfFilterStartIdxOfPCConfig()                       (TRUE != FALSE)
#define Can_HasSizeOfInitObjectBaudrateOfPCConfig()                   (TRUE != FALSE)
#define Can_HasSizeOfInitObjectOfPCConfig()                           (TRUE != FALSE)
#define Can_HasSizeOfInitObjectStartIndexOfPCConfig()                 (TRUE != FALSE)
#define Can_HasSizeOfIsBusOffOfPCConfig()                             (TRUE != FALSE)
#define Can_HasSizeOfIsWakeupOfPCConfig()                             (TRUE != FALSE)
#define Can_HasSizeOfLastInitObjectOfPCConfig()                       (TRUE != FALSE)
#define Can_HasSizeOfLogStatusOfPCConfig()                            (TRUE != FALSE)
#define Can_HasSizeOfMailboxOfPCConfig()                              (TRUE != FALSE)
#define Can_HasSizeOfRxMsgOfPCConfig()                                (TRUE != FALSE)
#define Can_HasSizeOfStatusReqOfPCConfig()                            (TRUE != FALSE)
#define Can_HasSizeOfTxOffsetHwToLogOfPCConfig()                      (TRUE != FALSE)
#define Can_HasSizeOfWakeupSourceRefOfPCConfig()                      (TRUE != FALSE)
#define Can_HasSizeOfgCanControllerOfPCConfig()                       (TRUE != FALSE)
#define Can_HasStatusReqOfPCConfig()                                  (TRUE != FALSE)
#define Can_HasTxOffsetHwToLogOfPCConfig()                            (TRUE != FALSE)
#define Can_HasWakeupSourceRefOfPCConfig()                            (TRUE != FALSE)
#define Can_HasgCanControllerOfPCConfig()                             (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  CanPCIncrementDataMacros  Can Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Can_IncActiveSendPdu(Index)                                   Can_GetActiveSendPdu(Index)++
#define Can_IncActiveSendState(Index)                                 Can_GetActiveSendState(Index)++
#define Can_IncCanInterruptCounter(Index)                             Can_GetCanInterruptCounter(Index)++
#define Can_IncCanInterruptOldStatus(Index)                           Can_GetCanInterruptOldStatus(Index)++
#define Can_IncLastInitObject(Index)                                  Can_GetLastInitObject(Index)++
#define Can_IncLogStatus(Index)                                       Can_GetLogStatus(Index)++
#define Can_IncRxMsg(Index)                                           Can_GetRxMsg(Index)++
#define Can_IncStatusReq(Index)                                       Can_GetStatusReq(Index)++
#define Can_IncgCanController(Index)                                  Can_GetgCanController(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  CanPCDecrementDataMacros  Can Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Can_DecActiveSendPdu(Index)                                   Can_GetActiveSendPdu(Index)--
#define Can_DecActiveSendState(Index)                                 Can_GetActiveSendState(Index)--
#define Can_DecCanInterruptCounter(Index)                             Can_GetCanInterruptCounter(Index)--
#define Can_DecCanInterruptOldStatus(Index)                           Can_GetCanInterruptOldStatus(Index)--
#define Can_DecLastInitObject(Index)                                  Can_GetLastInitObject(Index)--
#define Can_DecLogStatus(Index)                                       Can_GetLogStatus(Index)--
#define Can_DecRxMsg(Index)                                           Can_GetRxMsg(Index)--
#define Can_DecStatusReq(Index)                                       Can_GetStatusReq(Index)--
#define Can_DecgCanController(Index)                                  Can_GetgCanController(Index)--
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
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  CanPCIterableTypes  Can Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Can_ActiveSendPdu */
typedef uint8_least Can_ActiveSendPduIterType;

/**   \brief  type used to iterate Can_ActiveSendState */
typedef uint8_least Can_ActiveSendStateIterType;

/**   \brief  type used to iterate Can_BusName */
typedef uint8_least Can_BusNameIterType;

/**   \brief  type used to iterate Can_CanIfChannelId */
typedef uint8_least Can_CanIfChannelIdIterType;

/**   \brief  type used to iterate Can_CanInterruptCounter */
typedef uint8_least Can_CanInterruptCounterIterType;

/**   \brief  type used to iterate Can_CanInterruptOldStatus */
typedef uint8_least Can_CanInterruptOldStatusIterType;

/**   \brief  type used to iterate Can_ControllerConfig */
typedef uint8_least Can_ControllerConfigIterType;

/**   \brief  type used to iterate Can_Filter */
typedef uint8_least Can_FilterIterType;

/**   \brief  type used to iterate Can_FilterStartIdx */
typedef uint8_least Can_FilterStartIdxIterType;

/**   \brief  type used to iterate Can_InitObject */
typedef uint8_least Can_InitObjectIterType;

/**   \brief  type used to iterate Can_InitObjectBaudrate */
typedef uint8_least Can_InitObjectBaudrateIterType;

/**   \brief  type used to iterate Can_InitObjectStartIndex */
typedef uint8_least Can_InitObjectStartIndexIterType;

/**   \brief  type used to iterate Can_IsBusOff */
typedef uint8_least Can_IsBusOffIterType;

/**   \brief  type used to iterate Can_IsWakeup */
typedef uint8_least Can_IsWakeupIterType;

/**   \brief  type used to iterate Can_LastInitObject */
typedef uint8_least Can_LastInitObjectIterType;

/**   \brief  type used to iterate Can_LogStatus */
typedef uint8_least Can_LogStatusIterType;

/**   \brief  type used to iterate Can_Mailbox */
typedef uint8_least Can_MailboxIterType;

/**   \brief  type used to iterate Can_RxMsg */
typedef uint8_least Can_RxMsgIterType;

/**   \brief  type used to iterate Can_StatusReq */
typedef uint8_least Can_StatusReqIterType;

/**   \brief  type used to iterate Can_TxOffsetHwToLog */
typedef uint8_least Can_TxOffsetHwToLogIterType;

/**   \brief  type used to iterate Can_WakeupSourceRef */
typedef uint8_least Can_WakeupSourceRefIterType;

/**   \brief  type used to iterate Can_gCanController */
typedef uint8_least Can_gCanControllerIterType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCValueTypes  Can Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Can_ActiveSendPdu */
typedef PduIdType Can_ActiveSendPduType;

/**   \brief  value based type definition for Can_ActiveSendState */
typedef uint8 Can_ActiveSendStateType;

/**   \brief  value based type definition for Can_BaseDll_GeneratorVersion */
typedef uint16 Can_BaseDll_GeneratorVersionType;

/**   \brief  value based type definition for Can_CanIfChannelId */
typedef uint8 Can_CanIfChannelIdType;

/**   \brief  value based type definition for Can_CanInterruptCounter */
typedef uint8 Can_CanInterruptCounterType;

/**   \brief  value based type definition for Can_CanControllerDefaultBaudrateOfControllerConfig */
typedef uint16 Can_CanControllerDefaultBaudrateOfControllerConfigType;

/**   \brief  value based type definition for Can_RxBasicHandleMaxOfControllerConfig */
typedef uint16 Can_RxBasicHandleMaxOfControllerConfigType;

/**   \brief  value based type definition for Can_RxBasicHandleStartOfControllerConfig */
typedef uint16 Can_RxBasicHandleStartOfControllerConfigType;

/**   \brief  value based type definition for Can_RxBasicHandleStopOfControllerConfig */
typedef uint16 Can_RxBasicHandleStopOfControllerConfigType;

/**   \brief  value based type definition for Can_RxBasicHwStartOfControllerConfig */
typedef uint16 Can_RxBasicHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_RxBasicHwStopOfControllerConfig */
typedef uint16 Can_RxBasicHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_RxFullHandleMaxOfControllerConfig */
typedef uint16 Can_RxFullHandleMaxOfControllerConfigType;

/**   \brief  value based type definition for Can_RxFullHandleStartOfControllerConfig */
typedef uint16 Can_RxFullHandleStartOfControllerConfigType;

/**   \brief  value based type definition for Can_RxFullHandleStopOfControllerConfig */
typedef uint16 Can_RxFullHandleStopOfControllerConfigType;

/**   \brief  value based type definition for Can_RxFullHwStartOfControllerConfig */
typedef uint16 Can_RxFullHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_RxFullHwStopOfControllerConfig */
typedef uint16 Can_RxFullHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_TxBasicHandleMaxOfControllerConfig */
typedef uint16 Can_TxBasicHandleMaxOfControllerConfigType;

/**   \brief  value based type definition for Can_TxBasicHandleStartOfControllerConfig */
typedef uint16 Can_TxBasicHandleStartOfControllerConfigType;

/**   \brief  value based type definition for Can_TxBasicHandleStopOfControllerConfig */
typedef uint16 Can_TxBasicHandleStopOfControllerConfigType;

/**   \brief  value based type definition for Can_TxBasicHwStartOfControllerConfig */
typedef uint16 Can_TxBasicHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_TxBasicHwStopOfControllerConfig */
typedef uint16 Can_TxBasicHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_TxFullHandleMaxOfControllerConfig */
typedef uint16 Can_TxFullHandleMaxOfControllerConfigType;

/**   \brief  value based type definition for Can_TxFullHandleStartOfControllerConfig */
typedef uint16 Can_TxFullHandleStartOfControllerConfigType;

/**   \brief  value based type definition for Can_TxFullHandleStopOfControllerConfig */
typedef uint16 Can_TxFullHandleStopOfControllerConfigType;

/**   \brief  value based type definition for Can_TxFullHwStartOfControllerConfig */
typedef uint16 Can_TxFullHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_TxFullHwStopOfControllerConfig */
typedef uint16 Can_TxFullHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_UnusedHandleMaxOfControllerConfig */
typedef uint16 Can_UnusedHandleMaxOfControllerConfigType;

/**   \brief  value based type definition for Can_UnusedHandleStartOfControllerConfig */
typedef uint16 Can_UnusedHandleStartOfControllerConfigType;

/**   \brief  value based type definition for Can_UnusedHandleStopOfControllerConfig */
typedef uint16 Can_UnusedHandleStopOfControllerConfigType;

/**   \brief  value based type definition for Can_UnusedHwStartOfControllerConfig */
typedef uint16 Can_UnusedHwStartOfControllerConfigType;

/**   \brief  value based type definition for Can_UnusedHwStopOfControllerConfig */
typedef uint16 Can_UnusedHwStopOfControllerConfigType;

/**   \brief  value based type definition for Can_BCanHwIdxOfFilter */
typedef uint16 Can_BCanHwIdxOfFilterType;

/**   \brief  value based type definition for Can_CodeOfFilter */
typedef uint32 Can_CodeOfFilterType;

/**   \brief  value based type definition for Can_MaskOfFilter */
typedef uint32 Can_MaskOfFilterType;

/**   \brief  value based type definition for Can_FilterStartIdx */
typedef uint8 Can_FilterStartIdxType;

/**   \brief  value based type definition for Can_arbBaudrateOfInitObject */
typedef uint32 Can_arbBaudrateOfInitObjectType;

/**   \brief  value based type definition for Can_arbSamOfInitObject */
typedef uint8 Can_arbSamOfInitObjectType;

/**   \brief  value based type definition for Can_arbSjwOfInitObject */
typedef uint8 Can_arbSjwOfInitObjectType;

/**   \brief  value based type definition for Can_arbTseg1OfInitObject */
typedef uint8 Can_arbTseg1OfInitObjectType;

/**   \brief  value based type definition for Can_arbTseg2OfInitObject */
typedef uint8 Can_arbTseg2OfInitObjectType;

/**   \brief  value based type definition for Can_dbrBaudrateOfInitObject */
typedef uint32 Can_dbrBaudrateOfInitObjectType;

/**   \brief  value based type definition for Can_dbrSamOfInitObject */
typedef uint8 Can_dbrSamOfInitObjectType;

/**   \brief  value based type definition for Can_dbrSjwOfInitObject */
typedef uint8 Can_dbrSjwOfInitObjectType;

/**   \brief  value based type definition for Can_dbrTseg1OfInitObject */
typedef uint8 Can_dbrTseg1OfInitObjectType;

/**   \brief  value based type definition for Can_dbrTseg2OfInitObject */
typedef uint8 Can_dbrTseg2OfInitObjectType;

/**   \brief  value based type definition for Can_InitObjectBaudrate */
typedef uint16 Can_InitObjectBaudrateType;

/**   \brief  value based type definition for Can_InitObjectStartIndex */
typedef uint8 Can_InitObjectStartIndexType;

/**   \brief  value based type definition for Can_IsBusOff */
typedef boolean Can_IsBusOffType;

/**   \brief  value based type definition for Can_IsWakeup */
typedef boolean Can_IsWakeupType;

/**   \brief  value based type definition for Can_LastInitObject */
typedef uint8 Can_LastInitObjectType;

/**   \brief  value based type definition for Can_LogStatus */
typedef uint8 Can_LogStatusType;

/**   \brief  value based type definition for Can_DLC_FIFOOfMailbox */
typedef uint16 Can_DLC_FIFOOfMailboxType;

/**   \brief  value based type definition for Can_HwHandleOfMailbox */
typedef uint16 Can_HwHandleOfMailboxType;

/**   \brief  value based type definition for Can_IDValueOfMailbox */
typedef uint16 Can_IDValueOfMailboxType;

/**   \brief  value based type definition for Can_MailboxTypeOfMailbox */
typedef uint8 Can_MailboxTypeOfMailboxType;

/**   \brief  value based type definition for Can_MaxDataLenOfMailbox */
typedef uint8 Can_MaxDataLenOfMailboxType;

/**   \brief  value based type definition for Can_MsgControllerOfMailbox */
typedef uint8 Can_MsgControllerOfMailboxType;

/**   \brief  value based type definition for Can_PlatformDll_GeneratorVersion */
typedef uint16 Can_PlatformDll_GeneratorVersionType;

/**   \brief  value based type definition for Can_SizeOfActiveSendPdu */
typedef uint16 Can_SizeOfActiveSendPduType;

/**   \brief  value based type definition for Can_SizeOfActiveSendState */
typedef uint16 Can_SizeOfActiveSendStateType;

/**   \brief  value based type definition for Can_SizeOfBusName */
typedef uint16 Can_SizeOfBusNameType;

/**   \brief  value based type definition for Can_SizeOfCanIfChannelId */
typedef uint16 Can_SizeOfCanIfChannelIdType;

/**   \brief  value based type definition for Can_SizeOfCanInterruptCounter */
typedef uint16 Can_SizeOfCanInterruptCounterType;

/**   \brief  value based type definition for Can_SizeOfCanInterruptOldStatus */
typedef uint16 Can_SizeOfCanInterruptOldStatusType;

/**   \brief  value based type definition for Can_SizeOfControllerConfig */
typedef uint16 Can_SizeOfControllerConfigType;

/**   \brief  value based type definition for Can_SizeOfFilter */
typedef uint16 Can_SizeOfFilterType;

/**   \brief  value based type definition for Can_SizeOfFilterStartIdx */
typedef uint16 Can_SizeOfFilterStartIdxType;

/**   \brief  value based type definition for Can_SizeOfInitObject */
typedef uint16 Can_SizeOfInitObjectType;

/**   \brief  value based type definition for Can_SizeOfInitObjectBaudrate */
typedef uint16 Can_SizeOfInitObjectBaudrateType;

/**   \brief  value based type definition for Can_SizeOfInitObjectStartIndex */
typedef uint16 Can_SizeOfInitObjectStartIndexType;

/**   \brief  value based type definition for Can_SizeOfIsBusOff */
typedef uint16 Can_SizeOfIsBusOffType;

/**   \brief  value based type definition for Can_SizeOfIsWakeup */
typedef uint16 Can_SizeOfIsWakeupType;

/**   \brief  value based type definition for Can_SizeOfLastInitObject */
typedef uint16 Can_SizeOfLastInitObjectType;

/**   \brief  value based type definition for Can_SizeOfLogStatus */
typedef uint16 Can_SizeOfLogStatusType;

/**   \brief  value based type definition for Can_SizeOfMailbox */
typedef uint16 Can_SizeOfMailboxType;

/**   \brief  value based type definition for Can_SizeOfRxMsg */
typedef uint16 Can_SizeOfRxMsgType;

/**   \brief  value based type definition for Can_SizeOfStatusReq */
typedef uint16 Can_SizeOfStatusReqType;

/**   \brief  value based type definition for Can_SizeOfTxOffsetHwToLog */
typedef uint16 Can_SizeOfTxOffsetHwToLogType;

/**   \brief  value based type definition for Can_SizeOfWakeupSourceRef */
typedef uint16 Can_SizeOfWakeupSourceRefType;

/**   \brief  value based type definition for Can_SizeOfgCanController */
typedef uint16 Can_SizeOfgCanControllerType;

/**   \brief  value based type definition for Can_StatusReq */
typedef uint8 Can_StatusReqType;

/**   \brief  value based type definition for Can_TxOffsetHwToLog */
typedef sint16 Can_TxOffsetHwToLogType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCStructTypes  Can Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Can_ControllerConfig */
typedef struct sCan_ControllerConfigType
{
  Can_CanControllerDefaultBaudrateOfControllerConfigType CanControllerDefaultBaudrateOfControllerConfig;
  Can_RxBasicHandleMaxOfControllerConfigType RxBasicHandleMaxOfControllerConfig;
  Can_RxBasicHandleStartOfControllerConfigType RxBasicHandleStartOfControllerConfig;
  Can_RxBasicHandleStopOfControllerConfigType RxBasicHandleStopOfControllerConfig;
  Can_RxBasicHwStartOfControllerConfigType RxBasicHwStartOfControllerConfig;
  Can_RxBasicHwStopOfControllerConfigType RxBasicHwStopOfControllerConfig;
  Can_RxFullHandleMaxOfControllerConfigType RxFullHandleMaxOfControllerConfig;
  Can_RxFullHandleStartOfControllerConfigType RxFullHandleStartOfControllerConfig;
  Can_RxFullHandleStopOfControllerConfigType RxFullHandleStopOfControllerConfig;
  Can_RxFullHwStartOfControllerConfigType RxFullHwStartOfControllerConfig;
  Can_RxFullHwStopOfControllerConfigType RxFullHwStopOfControllerConfig;
  Can_TxBasicHandleMaxOfControllerConfigType TxBasicHandleMaxOfControllerConfig;
  Can_TxBasicHandleStartOfControllerConfigType TxBasicHandleStartOfControllerConfig;
  Can_TxBasicHandleStopOfControllerConfigType TxBasicHandleStopOfControllerConfig;
  Can_TxBasicHwStartOfControllerConfigType TxBasicHwStartOfControllerConfig;
  Can_TxBasicHwStopOfControllerConfigType TxBasicHwStopOfControllerConfig;
  Can_TxFullHandleMaxOfControllerConfigType TxFullHandleMaxOfControllerConfig;
  Can_TxFullHandleStartOfControllerConfigType TxFullHandleStartOfControllerConfig;
  Can_TxFullHandleStopOfControllerConfigType TxFullHandleStopOfControllerConfig;
  Can_TxFullHwStartOfControllerConfigType TxFullHwStartOfControllerConfig;
  Can_TxFullHwStopOfControllerConfigType TxFullHwStopOfControllerConfig;
  Can_UnusedHandleMaxOfControllerConfigType UnusedHandleMaxOfControllerConfig;
  Can_UnusedHandleStartOfControllerConfigType UnusedHandleStartOfControllerConfig;
  Can_UnusedHandleStopOfControllerConfigType UnusedHandleStopOfControllerConfig;
  Can_UnusedHwStartOfControllerConfigType UnusedHwStartOfControllerConfig;
  Can_UnusedHwStopOfControllerConfigType UnusedHwStopOfControllerConfig;
} Can_ControllerConfigType;

/**   \brief  type used in Can_Filter */
typedef struct sCan_FilterType
{
  Can_CodeOfFilterType CodeOfFilter;
  Can_MaskOfFilterType MaskOfFilter;
  Can_BCanHwIdxOfFilterType BCanHwIdxOfFilter;
} Can_FilterType;

/**   \brief  type used in Can_InitObject */
typedef struct sCan_InitObjectType
{
  Can_arbBaudrateOfInitObjectType arbBaudrateOfInitObject;
  Can_dbrBaudrateOfInitObjectType dbrBaudrateOfInitObject;
  Can_arbSamOfInitObjectType arbSamOfInitObject;
  Can_arbSjwOfInitObjectType arbSjwOfInitObject;
  Can_arbTseg1OfInitObjectType arbTseg1OfInitObject;
  Can_arbTseg2OfInitObjectType arbTseg2OfInitObject;
  Can_dbrSamOfInitObjectType dbrSamOfInitObject;
  Can_dbrSjwOfInitObjectType dbrSjwOfInitObject;
  Can_dbrTseg1OfInitObjectType dbrTseg1OfInitObject;
  Can_dbrTseg2OfInitObjectType dbrTseg2OfInitObject;
} Can_InitObjectType;

/**   \brief  type used in Can_Mailbox */
typedef struct sCan_MailboxType
{
  Can_DLC_FIFOOfMailboxType DLC_FIFOOfMailbox;
  Can_HwHandleOfMailboxType HwHandleOfMailbox;
  Can_IDValueOfMailboxType IDValueOfMailbox;
  Can_MailboxTypeOfMailboxType MailboxTypeOfMailbox;
  Can_MaxDataLenOfMailboxType MaxDataLenOfMailbox;
  Can_MsgControllerOfMailboxType MsgControllerOfMailbox;
} Can_MailboxType;

/** 
  \}
*/ 

/** 
  \defgroup  CanPCRootValueTypes  Can Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Can_PCConfig */
typedef struct sCan_PCConfigType
{
  uint8 Can_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Can_PCConfigType;

typedef Can_PCConfigType Can_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
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
  Can_BusName
**********************************************************************************************************************/
/** 
  \var    Can_BusName
  \brief  controller to hardware mapping
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_BusNameType, CAN_CONST) Can_BusName[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanIfChannelId
**********************************************************************************************************************/
/** 
  \var    Can_CanIfChannelId
  \brief  indirection table Can to CanIf controller ID
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_CanIfChannelIdType, CAN_CONST) Can_CanIfChannelId[1];
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ControllerConfig
**********************************************************************************************************************/
/** 
  \var    Can_ControllerConfig
  \brief  Global configuration for all controllers
  \details
  Element                         Description
  CanControllerDefaultBaudrate
  RxBasicHandleMax            
  RxBasicHandleStart          
  RxBasicHandleStop           
  RxBasicHwStart              
  RxBasicHwStop               
  RxFullHandleMax             
  RxFullHandleStart           
  RxFullHandleStop            
  RxFullHwStart               
  RxFullHwStop                
  TxBasicHandleMax            
  TxBasicHandleStart          
  TxBasicHandleStop           
  TxBasicHwStart              
  TxBasicHwStop               
  TxFullHandleMax             
  TxFullHandleStart           
  TxFullHandleStop            
  TxFullHwStart               
  TxFullHwStop                
  UnusedHandleMax             
  UnusedHandleStart           
  UnusedHandleStop            
  UnusedHwStart               
  UnusedHwStop                
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_ControllerConfigType, CAN_CONST) Can_ControllerConfig[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_Filter
**********************************************************************************************************************/
/** 
  \var    Can_Filter
  \brief  filter configuration
  \details
  Element      Description
  Code     
  Mask     
  BCanHwIdx
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_FilterType, CAN_CONST) Can_Filter[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_FilterStartIdx
**********************************************************************************************************************/
/** 
  \var    Can_FilterStartIdx
  \brief  Start index for filters (Controller - BasicCAN - indexed)
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_FilterStartIdxType, CAN_CONST) Can_FilterStartIdx[2];
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObject
**********************************************************************************************************************/
/** 
  \var    Can_InitObject
  \brief  baudrate settings
  \details
  Element        Description
  arbBaudrate
  dbrBaudrate
  arbSam     
  arbSjw     
  arbTseg1   
  arbTseg2   
  dbrSam     
  dbrSjw     
  dbrTseg1   
  dbrTseg2   
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_InitObjectType, CAN_CONST) Can_InitObject[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectBaudrate
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectBaudrate
  \brief  baudrates ('InitStruct' as index)
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_InitObjectBaudrateType, CAN_CONST) Can_InitObjectBaudrate[1];
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_InitObjectStartIndex
**********************************************************************************************************************/
/** 
  \var    Can_InitObjectStartIndex
  \brief  Start index of 'InitStruct'  / baudratesets (controllers as index)
*/ 
#define CAN_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_InitObjectStartIndexType, CAN_CONST) Can_InitObjectStartIndex[2];
#define CAN_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_Mailbox
**********************************************************************************************************************/
/** 
  \var    Can_Mailbox
  \brief  mailbox configuration (over all controllers)
  \details
  Element          Description
  DLC_FIFO     
  HwHandle     
  IDValue      
  MailboxType  
  MaxDataLen   
  MsgController
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_MailboxType, CAN_CONST) Can_Mailbox[3];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_TxOffsetHwToLog
**********************************************************************************************************************/
/** 
  \var    Can_TxOffsetHwToLog
  \brief  tx hardware to logical handle indirection table
*/ 
#define CAN_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(Can_TxOffsetHwToLogType, CAN_CONST) Can_TxOffsetHwToLog[1];
#define CAN_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_WakeupSourceRef
**********************************************************************************************************************/
/** 
  \var    Can_WakeupSourceRef
  \brief  wakeup Source for channel
*/ 
#define CAN_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(EcuM_WakeupSourceType, CAN_CONST) Can_WakeupSourceRef[1];
#define CAN_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ActiveSendPdu
**********************************************************************************************************************/
/** 
  \var    Can_ActiveSendPdu
  \brief  temporary pduId buffer for send mailbox
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Can_ActiveSendPduType, CAN_VAR_NOINIT) Can_ActiveSendPdu[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_ActiveSendState
**********************************************************************************************************************/
/** 
  \var    Can_ActiveSendState
  \brief  temporary send state buffer for send mailbox
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Can_ActiveSendStateType, CAN_VAR_NOINIT) Can_ActiveSendState[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanInterruptCounter
**********************************************************************************************************************/
/** 
  \var    Can_CanInterruptCounter
  \brief  CAN interrupt disable counter for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Can_CanInterruptCounterType, CAN_VAR_NOINIT) Can_CanInterruptCounter[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_CanInterruptOldStatus
**********************************************************************************************************************/
/** 
  \var    Can_CanInterruptOldStatus
  \brief  last CAN interrupt status for restore interrupt for each controller
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(tCanLLCanIntOld, CAN_VAR_NOINIT) Can_CanInterruptOldStatus[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_IsBusOff
**********************************************************************************************************************/
/** 
  \var    Can_IsBusOff
  \brief  CAN state for each controller: busoff occur
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Can_IsBusOffType, CAN_VAR_NOINIT) Can_IsBusOff[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_IsWakeup
**********************************************************************************************************************/
/** 
  \var    Can_IsWakeup
  \brief  CAN state for each controller: wakeup occur
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Can_IsWakeupType, CAN_VAR_NOINIT) Can_IsWakeup[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_LastInitObject
**********************************************************************************************************************/
/** 
  \var    Can_LastInitObject
  \brief  last set baudrate for reinit
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Can_LastInitObjectType, CAN_VAR_NOINIT) Can_LastInitObject[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_LogStatus
**********************************************************************************************************************/
/** 
  \var    Can_LogStatus
  \brief  CAN state for each controller: UNINIT=0x00, START=0x01, STOP=0x02, INIT=0x04, INCONSISTENT=0x08, WARNING =0x10, PASSIVE=0x20, BUSOFF=0x40, SLEEP=0x80
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Can_LogStatusType, CAN_VAR_NOINIT) Can_LogStatus[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_RxMsg
**********************************************************************************************************************/
/** 
  \var    Can_RxMsg
  \brief  received data buffer
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Can_MsgDataStructType, CAN_VAR_NOINIT) Can_RxMsg[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_StatusReq
**********************************************************************************************************************/
/** 
  \var    Can_StatusReq
  \brief  CAN state request for each controller: START=0x01, STOP=0x02, WAKEUP=0x08, SLEEP=0x80
*/ 
#define CAN_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern volatile VAR(Can_StatusReqType, CAN_VAR_NOINIT) Can_StatusReq[1];
#define CAN_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Can_gCanController
**********************************************************************************************************************/
/** 
  \var    Can_gCanController
  \brief  emulated hardware layout and status
*/ 
#define CAN_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(Can_ControllerType, CAN_VAR_NOINIT) Can_gCanController[1];
#define CAN_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/* -----------------------------------------------------------------------------
    UserConfigFile
 ----------------------------------------------------------------------------- */
/* User Config File Start */

/* User Config File End */



#endif  /* CAN_CFG_H */
/**********************************************************************************************************************
  END OF FILE: Can_Cfg.h
**********************************************************************************************************************/
 

