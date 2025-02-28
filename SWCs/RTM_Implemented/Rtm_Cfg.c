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
 *            Module: Rtm
 *           Program: MSR_Vector_SLP4
 *          Customer: AUTOSAR 4 Evaluation Bundle
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397XA B-Step
 *    License Scope : The usage is restricted to CBD2201090_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Rtm_Cfg.c
 *   Generation Time: 2024-08-14 14:42:40
 *           Project: ADAS - Version 1.0
 *          Delivery: CBD2201090_D00
 *      Tool Version: DaVinci Configurator Classic (beta) 5.26.35 SP2
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Classic and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

/* PRQA S 857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 1297 EOF */ /* MD_Rtm_1297 */
#include "Rtm.h"

/*lint -e546 */ /* Suppress ID546 because & is required for function pointer access */

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Rtm_CommonConst
**********************************************************************************************************************/
/** 
  \var    Rtm_CommonConst
  \brief  List of common const data
  \details
  Element                                Description
  BSWCore                                This flag defines the BSW Core
  CPULoadAutostart                       The autostart flag of the respective MP
  CpuLoadNvMHandleUsed                   A flag indicating the availability of a handle
  TaskResponseTimeNvMHandleUsed          A flag indicating the availability of a handle
  ActivatedMPIdOfCPULoad                 The activated MP id of CPU load
  ConfiguredMPIdOfCPULoad                The configured MP id of CPU
  CoreId                                 The id of the respective CPU Load MP Core Id
  NumberofTaskResponseTimePercentiles    This is the number of percentiles for Response Time Data
  NvMCpuLoadBlockSnv                     The CPU Load NvM Block SNV
  NvMTaskResponseTimeBlockSnv            The Task Response Time NvM Block SNV
  OsTaskInfoEndIdx                       the end index of the 0:n relation pointing to Rtm_OsTaskInfo
  OsTaskInfoLength                       the number of relations pointing to Rtm_OsTaskInfo
  OsTaskInfoStartIdx                     the start index of the 0:n relation pointing to Rtm_OsTaskInfo
  PartitionIndexOfCslStringSNV           The Core index
  TaskResponseTimeDataPtr                This ptr defines the var struct of Response Time Data
*/ 
#define RTM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Rtm_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Rtm_CommonConstType, RTM_CONST) Rtm_CommonConst[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    BSWCore  CPULoadAutostart  CpuLoadNvMHandleUsed  TaskResponseTimeNvMHandleUsed  ActivatedMPIdOfCPULoad  ConfiguredMPIdOfCPULoad  CoreId  NumberofTaskResponseTimePercentiles  NvMCpuLoadBlockSnv                      NvMTaskResponseTimeBlockSnv                      OsTaskInfoEndIdx  OsTaskInfoLength  OsTaskInfoStartIdx  PartitionIndexOfCslStringSNV        TaskResponseTimeDataPtr        Referable Keys */
  { /*     0 */    TRUE,            FALSE,                FALSE,                         FALSE,                    23u,                     51u,     0u,                                  0u, RTM_NO_NVMCPULOADBLOCKSNVOFCOMMONCONST, RTM_NO_NVMTASKRESPONSETIMEBLOCKSNVOFCOMMONCONST,              13u,              13u,                 0u, RtmConf_RtmCoreDefinition_RtmCore0, NULL_PTR                }   /* [/ActiveEcuC/Rtm/RtmCore0] */
};
#define RTM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Rtm_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Rtm_OsTaskInfo
**********************************************************************************************************************/
/** 
  \var    Rtm_OsTaskInfo
  \brief  List of Os task Infos
  \details
  Element     Description
  MaxStack    This is the max stack for this task
  TaskId      This is the Os TaskId
*/ 
#define RTM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Rtm_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Rtm_OsTaskInfoType, RTM_CONST) Rtm_OsTaskInfo[13] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MaxStack  TaskId                                  Referable Keys */
  { /*     0 */    1024u,                BswBackgroundTask },  /* [/ActiveEcuC/Rtm/RtmCore0] */
  { /*     1 */    1024u,           Default_Appl_Init_Task },  /* [/ActiveEcuC/Rtm/RtmCore0] */
  { /*     2 */    4096u,                Default_Appl_Task },  /* [/ActiveEcuC/Rtm/RtmCore0] */
  { /*     3 */    4096u,           Default_BSW_Async_Task },  /* [/ActiveEcuC/Rtm/RtmCore0] */
  { /*     4 */    4096u,            Default_BSW_Sync_Task },  /* [/ActiveEcuC/Rtm/RtmCore0] */
  { /*     5 */    1024u,                Default_Init_Task },  /* [/ActiveEcuC/Rtm/RtmCore0] */
  { /*     6 */    1024u,        Default_Init_Task_Trusted },  /* [/ActiveEcuC/Rtm/RtmCore0] */
  { /*     7 */    1024u,     Default_RTE_Mode_switch_Task },  /* [/ActiveEcuC/Rtm/RtmCore0] */
  { /*     8 */    1024u,                 IdleTask_OsCore0 },  /* [/ActiveEcuC/Rtm/RtmCore0] */
  { /*     9 */    1024u,  StartApplication_Appl_Init_Task },  /* [/ActiveEcuC/Rtm/RtmCore0] */
  { /*    10 */    1024u,       StartApplication_Appl_Task },  /* [/ActiveEcuC/Rtm/RtmCore0] */
  { /*    11 */    1024u, StartApplication_NoSwc_Appl_Task },  /* [/ActiveEcuC/Rtm/RtmCore0] */
  { /*    12 */    1024u, StartApplication_NoSwc_Init_Task }   /* [/ActiveEcuC/Rtm/RtmCore0] */
};
#define RTM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Rtm_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Rtm_CpuLoadData
**********************************************************************************************************************/
/** 
  \var    Rtm_CpuLoadData
  \details
  Element                       Description
  CollectedTime                 Collected Time
  LastTicks                     Last Ticks
  StartTimeStamp                Start Timestamp
  Threshold                     Threshold
  IsCpuLoadMPResultOverflown    Result Overflown
  MeasurementActive             Measurement Active
  MeasurementWasStopped         Measurement was Stopped
  SendResult                    Send Result
*/ 
#define RTM_START_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Rtm_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Rtm_CpuLoadDataType, RTM_VAR_NO_INIT) Rtm_CpuLoadData[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define RTM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Rtm_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Rtm_CpuLoadTime
**********************************************************************************************************************/
/** 
  \var    Rtm_CpuLoadTime
  \brief  CpuLoadTime
*/ 
#define RTM_START_SEC_VAR_NO_INIT_32
/*lint -save -esym(961, 19.1) */
#include "Rtm_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Rtm_CpuLoadTimeType, RTM_VAR_NO_INIT) Rtm_CpuLoadTime;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define RTM_STOP_SEC_VAR_NO_INIT_32
/*lint -save -esym(961, 19.1) */
#include "Rtm_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Rtm_HyperPeriodData
**********************************************************************************************************************/
/** 
  \var    Rtm_HyperPeriodData
  \details
  Element                Description
  AccumulatedTime        The accumulated time
  MainFunctionCounter    MainFunction Counter
*/ 
#define RTM_START_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Rtm_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Rtm_HyperPeriodDataType, RTM_VAR_NO_INIT) Rtm_HyperPeriodData[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define RTM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Rtm_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Rtm_MainFunctionRuntimeData
**********************************************************************************************************************/
/** 
  \var    Rtm_MainFunctionRuntimeData
  \details
  Element           Description
  Average           Average
  Delta             Delta
  LastCall          Last Call
  AverageCounter    AverageCounter
*/ 
#define RTM_START_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Rtm_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Rtm_MainFunctionRuntimeDataType, RTM_VAR_NO_INIT) Rtm_MainFunctionRuntimeData[1];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define RTM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Rtm_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



# define RTM_START_SEC_VAR_INIT_UNSPECIFIED
# include "Rtm_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

VAR(uint8, RTM_VAR_INIT) Rtm_InitState[RTM_NUMBER_OF_CORES] = {
  RTM_UNINITIALIZED
};

# define RTM_STOP_SEC_VAR_INIT_UNSPECIFIED
# include "Rtm_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */


#if (RTM_TIME_MEASUREMENT == STD_ON)
# define RTM_START_SEC_VAR_INIT_UNSPECIFIED
# include "Rtm_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

VAR(sint8, RTM_VAR_INIT) Rtm_MeasurementNestingCtr[RTM_NUMBER_OF_ACTIVATED_MPS] = 
{
  0x00 /* Measurement Id: 0 */, 
  0x00 /* Measurement Id: 1 */, 
  0x00 /* Measurement Id: 2 */, 
  0x00 /* Measurement Id: 6 */, 
  0x00 /* Measurement Id: 14 */, 
  0x00 /* Measurement Id: 15 */, 
  0x00 /* Measurement Id: 16 */, 
  0x00 /* Measurement Id: 17 */, 
  0x00 /* Measurement Id: 18 */, 
  0x00 /* Measurement Id: 19 */, 
  0x00 /* Measurement Id: 20 */, 
  0x00 /* Measurement Id: 21 */, 
  0x00 /* Measurement Id: 22 */, 
  0x00 /* Measurement Id: 23 */, 
  0x00 /* Measurement Id: 24 */, 
  0x00 /* Measurement Id: 26 */, 
  0x00 /* Measurement Id: 27 */, 
  0x00 /* Measurement Id: 32 */, 
  0x00 /* Measurement Id: 37 */, 
  0x00 /* Measurement Id: 38 */, 
  0x00 /* Measurement Id: 45 */, 
  0x00 /* Measurement Id: 49 */, 
  0x00 /* Measurement Id: 50 */, 
  0x00 /* Measurement Id: 51 */, 
  0x00 /* Measurement Id: 52 */, 
  0x00 /* Measurement Id: 53 */, 
  0x00 /* Measurement Id: 54 */, 
  0x00 /* Measurement Id: 55 */, 
  0x00 /* Measurement Id: 56 */, 
  0x00 /* Measurement Id: 57 */, 
  0x00 /* Measurement Id: 58 */, 
  0x00 /* Measurement Id: 59 */, 
  0x00 /* Measurement Id: 60 */, 
  0x00 /* Measurement Id: 61 */, 
  0x00 /* Measurement Id: 62 */, 
  0x00 /* Measurement Id: 63 */, 
  0x00 /* Measurement Id: 64 */, 
  0x00 /* Measurement Id: 65 */, 
  0x00 /* Measurement Id: 66 */, 
  0x00 /* Measurement Id: 67 */, 
  0x00 /* Measurement Id: 68 */, 
  0x00 /* Measurement Id: 69 */, 
  0x00 /* Measurement Id: 70 */, 
  0x00 /* Measurement Id: 71 */, 
  0x00 /* Measurement Id: 72 */, 
  0x00 /* Measurement Id: 73 */, 
  0x00 /* Measurement Id: 74 */, 
  0x00 /* Measurement Id: 75 */, 
  0x00 /* Measurement Id: 76 */, 
  0x00 /* Measurement Id: 77 */, 
  0x00 /* Measurement Id: 78 */, 
  0x00 /* Measurement Id: 79 */, 
  0x00 /* Measurement Id: 80 */, 
  0x00 /* Measurement Id: 81 */, 
  0x00 /* Measurement Id: 82 */, 
  0x00 /* Measurement Id: 83 */, 
  0x00 /* Measurement Id: 84 */, 
  0x00 /* Measurement Id: 85 */, 
  0x00 /* Measurement Id: 86 */, 
  0x00 /* Measurement Id: 87 */, 
  0x00 /* Measurement Id: 88 */, 
  0x00 /* Measurement Id: 89 */, 
  0x00 /* Measurement Id: 90 */, 
  0x00 /* Measurement Id: 91 */, 
  0x00 /* Measurement Id: 92 */, 
  0x00 /* Measurement Id: 93 */, 
  0x00 /* Measurement Id: 94 */, 
  0x00 /* Measurement Id: 95 */, 
  0x00 /* Measurement Id: 96 */, 
  0x00 /* Measurement Id: 97 */, 
  0x00 /* Measurement Id: 98 */, 
  0x00 /* Measurement Id: 99 */, 
  0x00 /* Measurement Id: 100 */, 
  0x00 /* Measurement Id: 101 */, 
  0x00 /* Measurement Id: 102 */, 
  0x00 /* Measurement Id: 103 */, 
  0x00 /* Measurement Id: 104 */, 
  0x00 /* Measurement Id: 105 */, 
  0x00 /* Measurement Id: 106 */, 
  0x00 /* Measurement Id: 107 */, 
  0x00 /* Measurement Id: 108 */, 
  0x00 /* Measurement Id: 109 */, 
  0x00 /* Measurement Id: 110 */, 
  0x00 /* Measurement Id: 111 */, 
  0x00 /* Measurement Id: 112 */, 
  0x00 /* Measurement Id: 113 */, 
  0x00 /* Measurement Id: 114 */, 
  0x00 /* Measurement Id: 120 */, 
  0x00 /* Measurement Id: 121 */, 
  0x00 /* Measurement Id: 122 */
};

VAR(uint8, RTM_VAR_INIT) Rtm_Ctrl[RTM_CTRL_VECTOR_LEN] = 
{
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u
};

VAR(uint8, RTM_VAR_INIT) Rtm_MeasurementConfig[RTM_CTRL_VECTOR_LEN] = 
{
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00, 
  0x00
};

VAR(Rtm_MeasurementTimestampType, RTM_VAR_INIT) Rtm_StartTimeStamps[RTM_NUMBER_OF_ACTIVATED_MPS] = 
{
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 0 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 1 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 2 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 6 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 14 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 15 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 16 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 17 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 18 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 19 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 20 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 21 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 22 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 23 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 24 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 26 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 27 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 32 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 37 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 38 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 45 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 49 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 50 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 51 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 52 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 53 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 54 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 55 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 56 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 57 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 58 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 59 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 60 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 61 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 62 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 63 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 64 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 65 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 66 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 67 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 68 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 69 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 70 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 71 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 72 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 73 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 74 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 75 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 76 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 77 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 78 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 79 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 80 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 81 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 82 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 83 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 84 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 85 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 86 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 87 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 88 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 89 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 90 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 91 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 92 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 93 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 94 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 95 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 96 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 97 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 98 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 99 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 100 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 101 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 102 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 103 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 104 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 105 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 106 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 107 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 108 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 109 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 110 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 111 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 112 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 113 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 114 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 120 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 121 */, 
  (Rtm_MeasurementTimestampType) 0x00 /* Measurement Id: 122 */
};

VAR(Rtm_DataSet, RTM_VAR_INIT) Rtm_Results[RTM_NUMBER_OF_ACTIVATED_MPS] = 
{
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 0, Measurement Name: Rtm_Overhead_GrossExecutionTime_EnableISRs */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 1, Measurement Name: Rtm_Overhead_GrossExecutionTime_DisableISRs */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 2, Measurement Name: CANNM_SID_CONFIRMPNAVAILABILITY */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 6, Measurement Name: CANNM_SID_GETVERSIONINFO */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 14, Measurement Name: CANNM_SID_TXCONFIRMATION */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 15, Measurement Name: CanInterruptErr */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 16, Measurement Name: CanInterruptRx */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 17, Measurement Name: CanInterruptTx */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 18, Measurement Name: CanInterruptWakeup */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 19, Measurement Name: Can_30_Core_Init */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 20, Measurement Name: Can_30_Core_SetControllerMode */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 21, Measurement Name: Can_30_Core_Write */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 22, Measurement Name: Can_Init */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 23, Measurement Name: Can_SetControllerMode */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 24, Measurement Name: Can_Write */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 26, Measurement Name: EthTrcv_30_Ethmii_TransceiverInit */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 27, Measurement Name: Eth_30_Tc3xx_ControllerInit */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 32, Measurement Name: Lin_Interrupt */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 37, Measurement Name: NM_SID_GETVERSIONINFO */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 38, Measurement Name: NM_SID_INIT */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 45, Measurement Name: NM_SID_PDURXINDICATION */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 49, Measurement Name: Rte_Runnable_RT_VehComm_CPU_Load_Test_Runnable */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 50, Measurement Name: Rte_Runnable_RT_VehComm_RT_VehComm_Main */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 51, Measurement Name: Rtm_CpuLoadMeasurement */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 52, Measurement Name: SchM_Schedulable_Com_Com_MainFunctionRx_ComMainFunctionRx */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 53, Measurement Name: SchM_Schedulable_Com_Com_MainFunctionTx_ComMainFunctionTx */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 54, Measurement Name: Sd_EventServer_Process */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 55, Measurement Name: Sd_RxIndication */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 56, Measurement Name: Sd_State_HandleRunMode */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 57, Measurement Name: Sd_State_Process__ClientSMs */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 58, Measurement Name: Sd_State_Process__ServerSMs */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 59, Measurement Name: Sd_Tx_ProcessPendingMessages */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 60, Measurement Name: UDPNM_SID_DISABLECOMMUNICATION */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 61, Measurement Name: UDPNM_SID_ENABLECOMMUNICATION */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 62, Measurement Name: UDPNM_SID_GETLOCALNODEIDENTIFIER */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 63, Measurement Name: UDPNM_SID_GETNODEIDENTIFIER */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 64, Measurement Name: UDPNM_SID_GETPDUDATA */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 65, Measurement Name: UDPNM_SID_GETSTATE */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 66, Measurement Name: UDPNM_SID_GETUSERDATA */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 67, Measurement Name: UDPNM_SID_GETVERSIONINFO */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 68, Measurement Name: UDPNM_SID_INIT */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 69, Measurement Name: UDPNM_SID_MAINFUNCTION */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 70, Measurement Name: UDPNM_SID_NETWORKRELEASE */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 71, Measurement Name: UDPNM_SID_NETWORKREQUEST */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 72, Measurement Name: UDPNM_SID_PASSIVESTARTUP */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 73, Measurement Name: UDPNM_SID_RXINDICATION */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 74, Measurement Name: UDPNM_SID_TRANSMIT */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 75, Measurement Name: UDPNM_SID_TRIGGERTRANSMIT */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 76, Measurement Name: UDPNM_SID_TXCONFIRMATION */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 77, Measurement Name: VKMS_CalcVerificationHash */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 78, Measurement Name: VKMS_CalcVerificationHash_MacTrainingCounter */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 79, Measurement Name: VKMS_CalcVerificationHash_PublicKeyHash_Cert */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 80, Measurement Name: VKMS_CalcVerificationHash_PublicKeyHash_Data */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 81, Measurement Name: VKMS_CalcVerificationHash_PublicKeyHash_Public */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 82, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Priv_NIST_N */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 83, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Priv_NIST_P */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 84, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Priv_Other */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 85, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Sym128 */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 86, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Sym256 */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 87, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Sym_Other */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 88, Measurement Name: VKMS_CalcVerificationHash_XorData */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 89, Measurement Name: VKMS_CheckVerificationHash */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 90, Measurement Name: VKMS_GetIdentityHash */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 91, Measurement Name: VKMS_GetIdentityHash_HashFazitID */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 92, Measurement Name: VKMS_GetIdentityHash_HashVerificationHash */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 93, Measurement Name: VKMS_GetPssHash */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 94, Measurement Name: VKMS_HandleDlc */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 95, Measurement Name: VKMS_HandleDlc_1_DeriveDlcDecryptionKey */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 96, Measurement Name: VKMS_HandleDlc_2_DecryptDlc */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 97, Measurement Name: VKMS_HandleDlc_3_HandleKeys */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 98, Measurement Name: VKMS_HandleDlc_3_HandleKeys_DeriveKey_Priv_NIST_N */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 99, Measurement Name: VKMS_HandleDlc_3_HandleKeys_DeriveKey_Priv_NIST_P */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 100, Measurement Name: VKMS_HandleDlc_3_HandleKeys_DeriveKey_Sym128 */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 101, Measurement Name: VKMS_HandleDlc_3_HandleKeys_DeriveKey_Sym256 */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 102, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Cert */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 103, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Data */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 104, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_NIST_N */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 105, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_NIST_P */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 106, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_Other */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 107, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Public */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 108, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym128 */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 109, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym256 */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 110, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym_Other */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 111, Measurement Name: VKMS_HandleDlc_4_CheckVerificationHash */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 112, Measurement Name: VKMS_HandleDlc_NvmWrite */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 113, Measurement Name: VKMS_Init */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 114, Measurement Name: VKMS_MainFunction */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 120, Measurement Name: vCan_30_Mcan_InterruptBusoff */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 121, Measurement Name: vCan_30_Mcan_InterruptRx */, 
  {0u, 0u, (Rtm_MeasurementTimestampType) 0xFFFFFFFFu, 0u} /* Measurement Id: 122, Measurement Name: vCan_30_Mcan_InterruptTx */
};


# define RTM_STOP_SEC_VAR_INIT_UNSPECIFIED
# include "Rtm_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */


# define RTM_START_SEC_CONST_UNSPECIFIED
# include "Rtm_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

CONST(uint32, RTM_CONST) Rtm_ThresholdTimes[RTM_NUMBER_OF_ACTIVATED_MPS] =
{
  0x00000000u /* Measurement Id: 0 */, 
  0x00000000u /* Measurement Id: 1 */, 
  0x00000000u /* Measurement Id: 2 */, 
  0x00000000u /* Measurement Id: 6 */, 
  0x00000000u /* Measurement Id: 14 */, 
  0x00000000u /* Measurement Id: 15 */, 
  0x00000000u /* Measurement Id: 16 */, 
  0x00000000u /* Measurement Id: 17 */, 
  0x00000000u /* Measurement Id: 18 */, 
  0x00000000u /* Measurement Id: 19 */, 
  0x00000000u /* Measurement Id: 20 */, 
  0x00000000u /* Measurement Id: 21 */, 
  0x00000000u /* Measurement Id: 22 */, 
  0x00000000u /* Measurement Id: 23 */, 
  0x00000000u /* Measurement Id: 24 */, 
  0x00000000u /* Measurement Id: 26 */, 
  0x00000000u /* Measurement Id: 27 */, 
  0x00000000u /* Measurement Id: 32 */, 
  0x00000000u /* Measurement Id: 37 */, 
  0x00000000u /* Measurement Id: 38 */, 
  0x00000000u /* Measurement Id: 45 */, 
  0x00000000u /* Measurement Id: 49 */, 
  0x00000000u /* Measurement Id: 50 */, 
  0x00000000u /* Measurement Id: 51 */, 
  0x00000000u /* Measurement Id: 52 */, 
  0x00000000u /* Measurement Id: 53 */, 
  0x00000000u /* Measurement Id: 54 */, 
  0x00000000u /* Measurement Id: 55 */, 
  0x00000000u /* Measurement Id: 56 */, 
  0x00000000u /* Measurement Id: 57 */, 
  0x00000000u /* Measurement Id: 58 */, 
  0x00000000u /* Measurement Id: 59 */, 
  0x00000000u /* Measurement Id: 60 */, 
  0x00000000u /* Measurement Id: 61 */, 
  0x00000000u /* Measurement Id: 62 */, 
  0x00000000u /* Measurement Id: 63 */, 
  0x00000000u /* Measurement Id: 64 */, 
  0x00000000u /* Measurement Id: 65 */, 
  0x00000000u /* Measurement Id: 66 */, 
  0x00000000u /* Measurement Id: 67 */, 
  0x00000000u /* Measurement Id: 68 */, 
  0x00000000u /* Measurement Id: 69 */, 
  0x00000000u /* Measurement Id: 70 */, 
  0x00000000u /* Measurement Id: 71 */, 
  0x00000000u /* Measurement Id: 72 */, 
  0x00000000u /* Measurement Id: 73 */, 
  0x00000000u /* Measurement Id: 74 */, 
  0x00000000u /* Measurement Id: 75 */, 
  0x00000000u /* Measurement Id: 76 */, 
  0x00000000u /* Measurement Id: 77 */, 
  0x00000000u /* Measurement Id: 78 */, 
  0x00000000u /* Measurement Id: 79 */, 
  0x00000000u /* Measurement Id: 80 */, 
  0x00000000u /* Measurement Id: 81 */, 
  0x00000000u /* Measurement Id: 82 */, 
  0x00000000u /* Measurement Id: 83 */, 
  0x00000000u /* Measurement Id: 84 */, 
  0x00000000u /* Measurement Id: 85 */, 
  0x00000000u /* Measurement Id: 86 */, 
  0x00000000u /* Measurement Id: 87 */, 
  0x00000000u /* Measurement Id: 88 */, 
  0x00000000u /* Measurement Id: 89 */, 
  0x00000000u /* Measurement Id: 90 */, 
  0x00000000u /* Measurement Id: 91 */, 
  0x00000000u /* Measurement Id: 92 */, 
  0x00000000u /* Measurement Id: 93 */, 
  0x00000000u /* Measurement Id: 94 */, 
  0x00000000u /* Measurement Id: 95 */, 
  0x00000000u /* Measurement Id: 96 */, 
  0x00000000u /* Measurement Id: 97 */, 
  0x00000000u /* Measurement Id: 98 */, 
  0x00000000u /* Measurement Id: 99 */, 
  0x00000000u /* Measurement Id: 100 */, 
  0x00000000u /* Measurement Id: 101 */, 
  0x00000000u /* Measurement Id: 102 */, 
  0x00000000u /* Measurement Id: 103 */, 
  0x00000000u /* Measurement Id: 104 */, 
  0x00000000u /* Measurement Id: 105 */, 
  0x00000000u /* Measurement Id: 106 */, 
  0x00000000u /* Measurement Id: 107 */, 
  0x00000000u /* Measurement Id: 108 */, 
  0x00000000u /* Measurement Id: 109 */, 
  0x00000000u /* Measurement Id: 110 */, 
  0x00000000u /* Measurement Id: 111 */, 
  0x00000000u /* Measurement Id: 112 */, 
  0x00000000u /* Measurement Id: 113 */, 
  0x00000000u /* Measurement Id: 114 */, 
  0x00000000u /* Measurement Id: 120 */, 
  0x00000000u /* Measurement Id: 121 */, 
  0x00000000u /* Measurement Id: 122 */
};

CONST(Rtm_ThresholdCbkFctType, RTM_CONST) Rtm_ThresholdCbkFctArr[RTM_NUMBER_OF_ACTIVATED_MPS] =
{
  NULL_PTR /* Measurement Id: 0 */, 
  NULL_PTR /* Measurement Id: 1 */, 
  NULL_PTR /* Measurement Id: 2 */, 
  NULL_PTR /* Measurement Id: 6 */, 
  NULL_PTR /* Measurement Id: 14 */, 
  NULL_PTR /* Measurement Id: 15 */, 
  NULL_PTR /* Measurement Id: 16 */, 
  NULL_PTR /* Measurement Id: 17 */, 
  NULL_PTR /* Measurement Id: 18 */, 
  NULL_PTR /* Measurement Id: 19 */, 
  NULL_PTR /* Measurement Id: 20 */, 
  NULL_PTR /* Measurement Id: 21 */, 
  NULL_PTR /* Measurement Id: 22 */, 
  NULL_PTR /* Measurement Id: 23 */, 
  NULL_PTR /* Measurement Id: 24 */, 
  NULL_PTR /* Measurement Id: 26 */, 
  NULL_PTR /* Measurement Id: 27 */, 
  NULL_PTR /* Measurement Id: 32 */, 
  NULL_PTR /* Measurement Id: 37 */, 
  NULL_PTR /* Measurement Id: 38 */, 
  NULL_PTR /* Measurement Id: 45 */, 
  NULL_PTR /* Measurement Id: 49 */, 
  NULL_PTR /* Measurement Id: 50 */, 
  NULL_PTR /* Measurement Id: 51 */, 
  NULL_PTR /* Measurement Id: 52 */, 
  NULL_PTR /* Measurement Id: 53 */, 
  NULL_PTR /* Measurement Id: 54 */, 
  NULL_PTR /* Measurement Id: 55 */, 
  NULL_PTR /* Measurement Id: 56 */, 
  NULL_PTR /* Measurement Id: 57 */, 
  NULL_PTR /* Measurement Id: 58 */, 
  NULL_PTR /* Measurement Id: 59 */, 
  NULL_PTR /* Measurement Id: 60 */, 
  NULL_PTR /* Measurement Id: 61 */, 
  NULL_PTR /* Measurement Id: 62 */, 
  NULL_PTR /* Measurement Id: 63 */, 
  NULL_PTR /* Measurement Id: 64 */, 
  NULL_PTR /* Measurement Id: 65 */, 
  NULL_PTR /* Measurement Id: 66 */, 
  NULL_PTR /* Measurement Id: 67 */, 
  NULL_PTR /* Measurement Id: 68 */, 
  NULL_PTR /* Measurement Id: 69 */, 
  NULL_PTR /* Measurement Id: 70 */, 
  NULL_PTR /* Measurement Id: 71 */, 
  NULL_PTR /* Measurement Id: 72 */, 
  NULL_PTR /* Measurement Id: 73 */, 
  NULL_PTR /* Measurement Id: 74 */, 
  NULL_PTR /* Measurement Id: 75 */, 
  NULL_PTR /* Measurement Id: 76 */, 
  NULL_PTR /* Measurement Id: 77 */, 
  NULL_PTR /* Measurement Id: 78 */, 
  NULL_PTR /* Measurement Id: 79 */, 
  NULL_PTR /* Measurement Id: 80 */, 
  NULL_PTR /* Measurement Id: 81 */, 
  NULL_PTR /* Measurement Id: 82 */, 
  NULL_PTR /* Measurement Id: 83 */, 
  NULL_PTR /* Measurement Id: 84 */, 
  NULL_PTR /* Measurement Id: 85 */, 
  NULL_PTR /* Measurement Id: 86 */, 
  NULL_PTR /* Measurement Id: 87 */, 
  NULL_PTR /* Measurement Id: 88 */, 
  NULL_PTR /* Measurement Id: 89 */, 
  NULL_PTR /* Measurement Id: 90 */, 
  NULL_PTR /* Measurement Id: 91 */, 
  NULL_PTR /* Measurement Id: 92 */, 
  NULL_PTR /* Measurement Id: 93 */, 
  NULL_PTR /* Measurement Id: 94 */, 
  NULL_PTR /* Measurement Id: 95 */, 
  NULL_PTR /* Measurement Id: 96 */, 
  NULL_PTR /* Measurement Id: 97 */, 
  NULL_PTR /* Measurement Id: 98 */, 
  NULL_PTR /* Measurement Id: 99 */, 
  NULL_PTR /* Measurement Id: 100 */, 
  NULL_PTR /* Measurement Id: 101 */, 
  NULL_PTR /* Measurement Id: 102 */, 
  NULL_PTR /* Measurement Id: 103 */, 
  NULL_PTR /* Measurement Id: 104 */, 
  NULL_PTR /* Measurement Id: 105 */, 
  NULL_PTR /* Measurement Id: 106 */, 
  NULL_PTR /* Measurement Id: 107 */, 
  NULL_PTR /* Measurement Id: 108 */, 
  NULL_PTR /* Measurement Id: 109 */, 
  NULL_PTR /* Measurement Id: 110 */, 
  NULL_PTR /* Measurement Id: 111 */, 
  NULL_PTR /* Measurement Id: 112 */, 
  NULL_PTR /* Measurement Id: 113 */, 
  NULL_PTR /* Measurement Id: 114 */, 
  NULL_PTR /* Measurement Id: 120 */, 
  NULL_PTR /* Measurement Id: 121 */, 
  NULL_PTR /* Measurement Id: 122 */
};

CONST(uint8, RTM_CONST) Rtm_CtrlConfig[RTM_CTRL_VECTOR_LEN] = 
{
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u, 
  0x00u
};


CONST(Rtm_MeasurementPointConfigType, RTM_CONST) Rtm_MeasurementPointConfigInfo[RTM_NUMBER_OF_ACTIVATED_MPS] = 
{
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 0, Measurement Name: Rtm_Overhead_GrossExecutionTime_EnableISRs */, 
  {TRUE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 1, Measurement Name: Rtm_Overhead_GrossExecutionTime_DisableISRs */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 2, Measurement Name: CANNM_SID_CONFIRMPNAVAILABILITY */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 6, Measurement Name: CANNM_SID_GETVERSIONINFO */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 14, Measurement Name: CANNM_SID_TXCONFIRMATION */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 15, Measurement Name: CanInterruptErr */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 16, Measurement Name: CanInterruptRx */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 17, Measurement Name: CanInterruptTx */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 18, Measurement Name: CanInterruptWakeup */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 19, Measurement Name: Can_30_Core_Init */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 20, Measurement Name: Can_30_Core_SetControllerMode */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 21, Measurement Name: Can_30_Core_Write */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 22, Measurement Name: Can_Init */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 23, Measurement Name: Can_SetControllerMode */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 24, Measurement Name: Can_Write */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 26, Measurement Name: EthTrcv_30_Ethmii_TransceiverInit */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 27, Measurement Name: Eth_30_Tc3xx_ControllerInit */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 32, Measurement Name: Lin_Interrupt */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 37, Measurement Name: NM_SID_GETVERSIONINFO */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 38, Measurement Name: NM_SID_INIT */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 45, Measurement Name: NM_SID_PDURXINDICATION */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 49, Measurement Name: Rte_Runnable_RT_VehComm_CPU_Load_Test_Runnable */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 50, Measurement Name: Rte_Runnable_RT_VehComm_RT_VehComm_Main */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_CPU_LOAD, 0u} /* Measurement Id: 51, Measurement Name: Rtm_CpuLoadMeasurement */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 52, Measurement Name: SchM_Schedulable_Com_Com_MainFunctionRx_ComMainFunctionRx */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 53, Measurement Name: SchM_Schedulable_Com_Com_MainFunctionTx_ComMainFunctionTx */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 54, Measurement Name: Sd_EventServer_Process */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 55, Measurement Name: Sd_RxIndication */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 56, Measurement Name: Sd_State_HandleRunMode */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 57, Measurement Name: Sd_State_Process__ClientSMs */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 58, Measurement Name: Sd_State_Process__ServerSMs */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 59, Measurement Name: Sd_Tx_ProcessPendingMessages */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 60, Measurement Name: UDPNM_SID_DISABLECOMMUNICATION */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 61, Measurement Name: UDPNM_SID_ENABLECOMMUNICATION */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 62, Measurement Name: UDPNM_SID_GETLOCALNODEIDENTIFIER */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 63, Measurement Name: UDPNM_SID_GETNODEIDENTIFIER */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 64, Measurement Name: UDPNM_SID_GETPDUDATA */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 65, Measurement Name: UDPNM_SID_GETSTATE */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 66, Measurement Name: UDPNM_SID_GETUSERDATA */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 67, Measurement Name: UDPNM_SID_GETVERSIONINFO */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 68, Measurement Name: UDPNM_SID_INIT */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 69, Measurement Name: UDPNM_SID_MAINFUNCTION */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 70, Measurement Name: UDPNM_SID_NETWORKRELEASE */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 71, Measurement Name: UDPNM_SID_NETWORKREQUEST */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 72, Measurement Name: UDPNM_SID_PASSIVESTARTUP */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 73, Measurement Name: UDPNM_SID_RXINDICATION */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 74, Measurement Name: UDPNM_SID_TRANSMIT */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 75, Measurement Name: UDPNM_SID_TRIGGERTRANSMIT */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 76, Measurement Name: UDPNM_SID_TXCONFIRMATION */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 77, Measurement Name: VKMS_CalcVerificationHash */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 78, Measurement Name: VKMS_CalcVerificationHash_MacTrainingCounter */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 79, Measurement Name: VKMS_CalcVerificationHash_PublicKeyHash_Cert */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 80, Measurement Name: VKMS_CalcVerificationHash_PublicKeyHash_Data */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 81, Measurement Name: VKMS_CalcVerificationHash_PublicKeyHash_Public */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 82, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Priv_NIST_N */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 83, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Priv_NIST_P */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 84, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Priv_Other */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 85, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Sym128 */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 86, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Sym256 */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 87, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Sym_Other */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 88, Measurement Name: VKMS_CalcVerificationHash_XorData */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 89, Measurement Name: VKMS_CheckVerificationHash */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 90, Measurement Name: VKMS_GetIdentityHash */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 91, Measurement Name: VKMS_GetIdentityHash_HashFazitID */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 92, Measurement Name: VKMS_GetIdentityHash_HashVerificationHash */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 93, Measurement Name: VKMS_GetPssHash */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 94, Measurement Name: VKMS_HandleDlc */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 95, Measurement Name: VKMS_HandleDlc_1_DeriveDlcDecryptionKey */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 96, Measurement Name: VKMS_HandleDlc_2_DecryptDlc */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 97, Measurement Name: VKMS_HandleDlc_3_HandleKeys */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 98, Measurement Name: VKMS_HandleDlc_3_HandleKeys_DeriveKey_Priv_NIST_N */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 99, Measurement Name: VKMS_HandleDlc_3_HandleKeys_DeriveKey_Priv_NIST_P */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 100, Measurement Name: VKMS_HandleDlc_3_HandleKeys_DeriveKey_Sym128 */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 101, Measurement Name: VKMS_HandleDlc_3_HandleKeys_DeriveKey_Sym256 */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 102, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Cert */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 103, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Data */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 104, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_NIST_N */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 105, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_NIST_P */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 106, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_Other */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 107, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Public */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 108, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym128 */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 109, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym256 */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 110, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym_Other */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 111, Measurement Name: VKMS_HandleDlc_4_CheckVerificationHash */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 112, Measurement Name: VKMS_HandleDlc_NvmWrite */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 113, Measurement Name: VKMS_Init */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 114, Measurement Name: VKMS_MainFunction */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 120, Measurement Name: vCan_30_Mcan_InterruptBusoff */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 121, Measurement Name: vCan_30_Mcan_InterruptRx */, 
  {FALSE, RTM_MEASUREMENT_TYPE_GROSS_EXECUTIONTIME, RTM_MP_TYPE_RUNTIME, 0u} /* Measurement Id: 122, Measurement Name: vCan_30_Mcan_InterruptTx */
};

CONST(uint32, RTM_CONST) Rtm_ConfiguredToActivatedMPIds[RTM_NUMBER_OF_CONFIGURED_MPS] = 
{
  0x00000000u /* Measurement Id: 0, Measurement Name: Rtm_Overhead_GrossExecutionTime_EnableISRs */, 
  0x00000001u /* Measurement Id: 1, Measurement Name: Rtm_Overhead_GrossExecutionTime_DisableISRs */, 
  0x00000002u /* Measurement Id: 2, Measurement Name: CANNM_SID_CONFIRMPNAVAILABILITY */, 
  0xFFFFFFFFu /* Measurement Id: 3, Measurement Name: CANNM_SID_GETPDUDATA */, 
  0xFFFFFFFFu /* Measurement Id: 4, Measurement Name: CANNM_SID_GETSTATE */, 
  0xFFFFFFFFu /* Measurement Id: 5, Measurement Name: CANNM_SID_GETUSERDATA */, 
  0x00000003u /* Measurement Id: 6, Measurement Name: CANNM_SID_GETVERSIONINFO */, 
  0xFFFFFFFFu /* Measurement Id: 7, Measurement Name: CANNM_SID_INIT */, 
  0xFFFFFFFFu /* Measurement Id: 8, Measurement Name: CANNM_SID_MAINFUNCTION */, 
  0xFFFFFFFFu /* Measurement Id: 9, Measurement Name: CANNM_SID_NETWORKRELEASE */, 
  0xFFFFFFFFu /* Measurement Id: 10, Measurement Name: CANNM_SID_NETWORKREQUEST */, 
  0xFFFFFFFFu /* Measurement Id: 11, Measurement Name: CANNM_SID_PASSIVESTARTUP */, 
  0xFFFFFFFFu /* Measurement Id: 12, Measurement Name: CANNM_SID_RXINDICATION */, 
  0xFFFFFFFFu /* Measurement Id: 13, Measurement Name: CANNM_SID_TRANSMIT */, 
  0x00000004u /* Measurement Id: 14, Measurement Name: CANNM_SID_TXCONFIRMATION */, 
  0x00000005u /* Measurement Id: 15, Measurement Name: CanInterruptErr */, 
  0x00000006u /* Measurement Id: 16, Measurement Name: CanInterruptRx */, 
  0x00000007u /* Measurement Id: 17, Measurement Name: CanInterruptTx */, 
  0x00000008u /* Measurement Id: 18, Measurement Name: CanInterruptWakeup */, 
  0x00000009u /* Measurement Id: 19, Measurement Name: Can_30_Core_Init */, 
  0x0000000au /* Measurement Id: 20, Measurement Name: Can_30_Core_SetControllerMode */, 
  0x0000000bu /* Measurement Id: 21, Measurement Name: Can_30_Core_Write */, 
  0x0000000cu /* Measurement Id: 22, Measurement Name: Can_Init */, 
  0x0000000du /* Measurement Id: 23, Measurement Name: Can_SetControllerMode */, 
  0x0000000eu /* Measurement Id: 24, Measurement Name: Can_Write */, 
  0xFFFFFFFFu /* Measurement Id: 25, Measurement Name: EthTrcv_30_Canoeemu_TransceiverInit */, 
  0x0000000fu /* Measurement Id: 26, Measurement Name: EthTrcv_30_Ethmii_TransceiverInit */, 
  0x00000010u /* Measurement Id: 27, Measurement Name: Eth_30_Tc3xx_ControllerInit */, 
  0xFFFFFFFFu /* Measurement Id: 28, Measurement Name: Eth_ControllerInit */, 
  0xFFFFFFFFu /* Measurement Id: 29, Measurement Name: LinIf_Init */, 
  0xFFFFFFFFu /* Measurement Id: 30, Measurement Name: LinTp_Init */, 
  0xFFFFFFFFu /* Measurement Id: 31, Measurement Name: Lin_Init */, 
  0x00000011u /* Measurement Id: 32, Measurement Name: Lin_Interrupt */, 
  0xFFFFFFFFu /* Measurement Id: 33, Measurement Name: NM_SID_BUSSLEEPMODE */, 
  0xFFFFFFFFu /* Measurement Id: 34, Measurement Name: NM_SID_GETPDUDATA */, 
  0xFFFFFFFFu /* Measurement Id: 35, Measurement Name: NM_SID_GETSTATE */, 
  0xFFFFFFFFu /* Measurement Id: 36, Measurement Name: NM_SID_GETUSERDATA */, 
  0x00000012u /* Measurement Id: 37, Measurement Name: NM_SID_GETVERSIONINFO */, 
  0x00000013u /* Measurement Id: 38, Measurement Name: NM_SID_INIT */, 
  0xFFFFFFFFu /* Measurement Id: 39, Measurement Name: NM_SID_MAINFUNCTION */, 
  0xFFFFFFFFu /* Measurement Id: 40, Measurement Name: NM_SID_NETWORKMODE */, 
  0xFFFFFFFFu /* Measurement Id: 41, Measurement Name: NM_SID_NETWORKRELEASE */, 
  0xFFFFFFFFu /* Measurement Id: 42, Measurement Name: NM_SID_NETWORKREQUEST */, 
  0xFFFFFFFFu /* Measurement Id: 43, Measurement Name: NM_SID_NETWORKSTARTINDICATION */, 
  0xFFFFFFFFu /* Measurement Id: 44, Measurement Name: NM_SID_PASSIVESTARTUP */, 
  0x00000014u /* Measurement Id: 45, Measurement Name: NM_SID_PDURXINDICATION */, 
  0xFFFFFFFFu /* Measurement Id: 46, Measurement Name: NM_SID_PREPAREBUSSLEEPMODE */, 
  0xFFFFFFFFu /* Measurement Id: 47, Measurement Name: NM_SID_STATECHANGENOTIFICATION */, 
  0xFFFFFFFFu /* Measurement Id: 48, Measurement Name: NM_SID_TXTIMEOUTEXCEPTION */, 
  0x00000015u /* Measurement Id: 49, Measurement Name: Rte_Runnable_RT_VehComm_CPU_Load_Test_Runnable */, 
  0x00000016u /* Measurement Id: 50, Measurement Name: Rte_Runnable_RT_VehComm_RT_VehComm_Main */, 
  0x00000017u /* Measurement Id: 51, Measurement Name: Rtm_CpuLoadMeasurement */, 
  0x00000018u /* Measurement Id: 52, Measurement Name: SchM_Schedulable_Com_Com_MainFunctionRx_ComMainFunctionRx */, 
  0x00000019u /* Measurement Id: 53, Measurement Name: SchM_Schedulable_Com_Com_MainFunctionTx_ComMainFunctionTx */, 
  0x0000001au /* Measurement Id: 54, Measurement Name: Sd_EventServer_Process */, 
  0x0000001bu /* Measurement Id: 55, Measurement Name: Sd_RxIndication */, 
  0x0000001cu /* Measurement Id: 56, Measurement Name: Sd_State_HandleRunMode */, 
  0x0000001du /* Measurement Id: 57, Measurement Name: Sd_State_Process__ClientSMs */, 
  0x0000001eu /* Measurement Id: 58, Measurement Name: Sd_State_Process__ServerSMs */, 
  0x0000001fu /* Measurement Id: 59, Measurement Name: Sd_Tx_ProcessPendingMessages */, 
  0x00000020u /* Measurement Id: 60, Measurement Name: UDPNM_SID_DISABLECOMMUNICATION */, 
  0x00000021u /* Measurement Id: 61, Measurement Name: UDPNM_SID_ENABLECOMMUNICATION */, 
  0x00000022u /* Measurement Id: 62, Measurement Name: UDPNM_SID_GETLOCALNODEIDENTIFIER */, 
  0x00000023u /* Measurement Id: 63, Measurement Name: UDPNM_SID_GETNODEIDENTIFIER */, 
  0x00000024u /* Measurement Id: 64, Measurement Name: UDPNM_SID_GETPDUDATA */, 
  0x00000025u /* Measurement Id: 65, Measurement Name: UDPNM_SID_GETSTATE */, 
  0x00000026u /* Measurement Id: 66, Measurement Name: UDPNM_SID_GETUSERDATA */, 
  0x00000027u /* Measurement Id: 67, Measurement Name: UDPNM_SID_GETVERSIONINFO */, 
  0x00000028u /* Measurement Id: 68, Measurement Name: UDPNM_SID_INIT */, 
  0x00000029u /* Measurement Id: 69, Measurement Name: UDPNM_SID_MAINFUNCTION */, 
  0x0000002au /* Measurement Id: 70, Measurement Name: UDPNM_SID_NETWORKRELEASE */, 
  0x0000002bu /* Measurement Id: 71, Measurement Name: UDPNM_SID_NETWORKREQUEST */, 
  0x0000002cu /* Measurement Id: 72, Measurement Name: UDPNM_SID_PASSIVESTARTUP */, 
  0x0000002du /* Measurement Id: 73, Measurement Name: UDPNM_SID_RXINDICATION */, 
  0x0000002eu /* Measurement Id: 74, Measurement Name: UDPNM_SID_TRANSMIT */, 
  0x0000002fu /* Measurement Id: 75, Measurement Name: UDPNM_SID_TRIGGERTRANSMIT */, 
  0x00000030u /* Measurement Id: 76, Measurement Name: UDPNM_SID_TXCONFIRMATION */, 
  0x00000031u /* Measurement Id: 77, Measurement Name: VKMS_CalcVerificationHash */, 
  0x00000032u /* Measurement Id: 78, Measurement Name: VKMS_CalcVerificationHash_MacTrainingCounter */, 
  0x00000033u /* Measurement Id: 79, Measurement Name: VKMS_CalcVerificationHash_PublicKeyHash_Cert */, 
  0x00000034u /* Measurement Id: 80, Measurement Name: VKMS_CalcVerificationHash_PublicKeyHash_Data */, 
  0x00000035u /* Measurement Id: 81, Measurement Name: VKMS_CalcVerificationHash_PublicKeyHash_Public */, 
  0x00000036u /* Measurement Id: 82, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Priv_NIST_N */, 
  0x00000037u /* Measurement Id: 83, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Priv_NIST_P */, 
  0x00000038u /* Measurement Id: 84, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Priv_Other */, 
  0x00000039u /* Measurement Id: 85, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Sym128 */, 
  0x0000003au /* Measurement Id: 86, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Sym256 */, 
  0x0000003bu /* Measurement Id: 87, Measurement Name: VKMS_CalcVerificationHash_SecretKeyHash_Sym_Other */, 
  0x0000003cu /* Measurement Id: 88, Measurement Name: VKMS_CalcVerificationHash_XorData */, 
  0x0000003du /* Measurement Id: 89, Measurement Name: VKMS_CheckVerificationHash */, 
  0x0000003eu /* Measurement Id: 90, Measurement Name: VKMS_GetIdentityHash */, 
  0x0000003fu /* Measurement Id: 91, Measurement Name: VKMS_GetIdentityHash_HashFazitID */, 
  0x00000040u /* Measurement Id: 92, Measurement Name: VKMS_GetIdentityHash_HashVerificationHash */, 
  0x00000041u /* Measurement Id: 93, Measurement Name: VKMS_GetPssHash */, 
  0x00000042u /* Measurement Id: 94, Measurement Name: VKMS_HandleDlc */, 
  0x00000043u /* Measurement Id: 95, Measurement Name: VKMS_HandleDlc_1_DeriveDlcDecryptionKey */, 
  0x00000044u /* Measurement Id: 96, Measurement Name: VKMS_HandleDlc_2_DecryptDlc */, 
  0x00000045u /* Measurement Id: 97, Measurement Name: VKMS_HandleDlc_3_HandleKeys */, 
  0x00000046u /* Measurement Id: 98, Measurement Name: VKMS_HandleDlc_3_HandleKeys_DeriveKey_Priv_NIST_N */, 
  0x00000047u /* Measurement Id: 99, Measurement Name: VKMS_HandleDlc_3_HandleKeys_DeriveKey_Priv_NIST_P */, 
  0x00000048u /* Measurement Id: 100, Measurement Name: VKMS_HandleDlc_3_HandleKeys_DeriveKey_Sym128 */, 
  0x00000049u /* Measurement Id: 101, Measurement Name: VKMS_HandleDlc_3_HandleKeys_DeriveKey_Sym256 */, 
  0x0000004au /* Measurement Id: 102, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Cert */, 
  0x0000004bu /* Measurement Id: 103, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Data */, 
  0x0000004cu /* Measurement Id: 104, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_NIST_N */, 
  0x0000004du /* Measurement Id: 105, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_NIST_P */, 
  0x0000004eu /* Measurement Id: 106, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_Other */, 
  0x0000004fu /* Measurement Id: 107, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Public */, 
  0x00000050u /* Measurement Id: 108, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym128 */, 
  0x00000051u /* Measurement Id: 109, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym256 */, 
  0x00000052u /* Measurement Id: 110, Measurement Name: VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym_Other */, 
  0x00000053u /* Measurement Id: 111, Measurement Name: VKMS_HandleDlc_4_CheckVerificationHash */, 
  0x00000054u /* Measurement Id: 112, Measurement Name: VKMS_HandleDlc_NvmWrite */, 
  0x00000055u /* Measurement Id: 113, Measurement Name: VKMS_Init */, 
  0x00000056u /* Measurement Id: 114, Measurement Name: VKMS_MainFunction */, 
  0xFFFFFFFFu /* Measurement Id: 115, Measurement Name: Xcp_Event */, 
  0xFFFFFFFFu /* Measurement Id: 116, Measurement Name: Xcp_Init */, 
  0xFFFFFFFFu /* Measurement Id: 117, Measurement Name: Xcp_MainFunction */, 
  0xFFFFFFFFu /* Measurement Id: 118, Measurement Name: Xcp_TlRxIndication */, 
  0xFFFFFFFFu /* Measurement Id: 119, Measurement Name: Xcp_TlTxConfirmation */, 
  0x00000057u /* Measurement Id: 120, Measurement Name: vCan_30_Mcan_InterruptBusoff */, 
  0x00000058u /* Measurement Id: 121, Measurement Name: vCan_30_Mcan_InterruptRx */, 
  0x00000059u /* Measurement Id: 122, Measurement Name: vCan_30_Mcan_InterruptTx */
};

# define RTM_STOP_SEC_CONST_UNSPECIFIED
# include "Rtm_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */


# define RTM_START_SEC_CODE
# include "Rtm_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/


/**********************************************************************************************************************
 * Rtm_SetCpuLoadTimeOfCore()
 *********************************************************************************************************************/
/*!
 *
 * \internal
 * - #10 Set the cpu load time to new value.
 * \endinternal
 */
FUNC(void, RTM_CODE) Rtm_SetCpuLoadTimeOfCore(const uint16 CoreIndex, const uint32 NewCpuLoadTime)
{
  /* ----- Implementation -------------------------------------------------------------------- */
  /* #10 Set the cpu load time to new value. */
  Rtm_SetCpuLoadTime(NewCpuLoadTime);
  RTM_DUMMY_STATEMENT_CONST(CoreIndex); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /*lint -e438 */
} /* Rtm_SetCpuLoadTimeOfCore */

/**********************************************************************************************************************
 * Rtm_GetCpuLoadTimeOfCore()
 *********************************************************************************************************************/
/*!
 *
 * \internal
 * - #10 Get the cpu load time.
 * \endinternal
 */
FUNC(uint32, RTM_CODE) Rtm_GetCpuLoadTimeOfCore(const uint16 CoreIndex)
{
  /* ----- Implementation -------------------------------------------------------------------- */
  /* #10 Get the cpu load time. */
  RTM_DUMMY_STATEMENT_CONST(CoreIndex); /* PRQA S 1338, 2983, 3112 */ /* MD_MSR_DummyStmt */ /*lint -e438 */
  return Rtm_GetCpuLoadTime();
} /* Rtm_GetCpuLoadTimeOfCore */

# define RTM_STOP_SEC_CODE
# include "Rtm_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

#endif /* RTM_TIME_MEASUREMENT == STD_ON */



