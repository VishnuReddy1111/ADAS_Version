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
 *              File: Rtm_Cfg.h
 *   Generation Time: 2024-08-14 14:42:41
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

/* PRQA S 883 EOF */ /* MD_Rtm_883 */

#if !defined(RTM_CFG_H)
#define RTM_CFG_H

/* -----------------------------------------------------------------------------
    &&&~ Includes
 ----------------------------------------------------------------------------- */

#include "Rtm_Cbk.h"
#include "SchM_Rtm.h"
#include "Os.h"

/* -----------------------------------------------------------------------------
    &&&~ General Define Block
 ----------------------------------------------------------------------------- */

#ifndef RTM_USE_DUMMY_STATEMENT
#define RTM_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef RTM_DUMMY_STATEMENT
#define RTM_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef RTM_DUMMY_STATEMENT_CONST
#define RTM_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef RTM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define RTM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef RTM_ATOMIC_VARIABLE_ACCESS
#define RTM_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef RTM_PROCESSOR_TC397X_STEPB
#define RTM_PROCESSOR_TC397X_STEPB
#endif
#ifndef RTM_COMP_TASKING
#define RTM_COMP_TASKING
#endif
#ifndef RTM_GEN_GENERATOR_MSR
#define RTM_GEN_GENERATOR_MSR
#endif
#ifndef RTM_CPUTYPE_BITORDER_LSB2MSB
#define RTM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef RTM_CONFIGURATION_VARIANT_PRECOMPILE
#define RTM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef RTM_CONFIGURATION_VARIANT_LINKTIME
#define RTM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef RTM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define RTM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef RTM_CONFIGURATION_VARIANT
#define RTM_CONFIGURATION_VARIANT RTM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef RTM_POSTBUILD_VARIANT_SUPPORT
#define RTM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/* RTM SNV IDs */



/**
 * \defgroup RtmHandleIdsCoreIdHandleIDs Handle IDs of handle space CoreId Handle IDs.
 * \brief Symbolic Name Values (SNVs) for CoreId Handles
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define RtmConf_RtmCoreDefinition_RtmCore0                            0u
/**\} */

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  RtmPCDataSwitches  Rtm Data Switches  (PRE_COMPILE)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define RTM_COMMONCONST                                                                             STD_ON
#define RTM_ACTIVATEDMPIDOFCPULOADOFCOMMONCONST                                                     STD_ON
#define RTM_BSWCOREOFCOMMONCONST                                                                    STD_ON
#define RTM_CPULOADAUTOSTARTOFCOMMONCONST                                                           STD_ON
#define RTM_CONFIGUREDMPIDOFCPULOADOFCOMMONCONST                                                    STD_ON
#define RTM_COREIDOFCOMMONCONST                                                                     STD_ON
#define RTM_CPULOADNVMHANDLEUSEDOFCOMMONCONST                                                       STD_ON
#define RTM_NUMBEROFTASKRESPONSETIMEPERCENTILESOFCOMMONCONST                                        STD_ON
#define RTM_NVMCPULOADBLOCKSNVOFCOMMONCONST                                                         STD_ON
#define RTM_NVMTASKRESPONSETIMEBLOCKSNVOFCOMMONCONST                                                STD_ON
#define RTM_OSTASKINFOENDIDXOFCOMMONCONST                                                           STD_ON
#define RTM_OSTASKINFOLENGTHOFCOMMONCONST                                                           STD_ON
#define RTM_OSTASKINFOSTARTIDXOFCOMMONCONST                                                         STD_ON
#define RTM_OSTASKINFOUSEDOFCOMMONCONST                                                             STD_ON
#define RTM_PARTITIONINDEXOFCSLSTRINGSNVOFCOMMONCONST                                               STD_ON
#define RTM_TASKRESPONSETIMEDATAPTROFCOMMONCONST                                                    STD_ON
#define RTM_TASKRESPONSETIMENVMHANDLEUSEDOFCOMMONCONST                                              STD_ON
#define RTM_CPULOADDATA                                                                             STD_ON
#define RTM_COLLECTEDTIMEOFCPULOADDATA                                                              STD_ON
#define RTM_ISCPULOADMPRESULTOVERFLOWNOFCPULOADDATA                                                 STD_ON
#define RTM_LASTTICKSOFCPULOADDATA                                                                  STD_ON
#define RTM_MEASUREMENTACTIVEOFCPULOADDATA                                                          STD_ON
#define RTM_MEASUREMENTWASSTOPPEDOFCPULOADDATA                                                      STD_ON
#define RTM_SENDRESULTOFCPULOADDATA                                                                 STD_ON
#define RTM_STARTTIMESTAMPOFCPULOADDATA                                                             STD_ON
#define RTM_THRESHOLDOFCPULOADDATA                                                                  STD_ON
#define RTM_CPULOADPERSISTENCYDATA                                                                  STD_OFF  /**< Deactivateable: 'Rtm_CpuLoadPersistencyData' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define RTM_CPULOADTIME                                                                             STD_ON
#define RTM_FINALMAGICNUMBER                                                                        STD_OFF  /**< Deactivateable: 'Rtm_FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define RTM_HYPERPERIODDATA                                                                         STD_ON
#define RTM_ACCUMULATEDTIMEOFHYPERPERIODDATA                                                        STD_ON
#define RTM_MAINFUNCTIONCOUNTEROFHYPERPERIODDATA                                                    STD_ON
#define RTM_INDEXTOOSTASKINFO                                                                       STD_OFF  /**< Deactivateable: 'Rtm_IndexToOsTaskInfo' Reason: 'the struct is deactivated because all elements are deactivated.' */
#define RTM_TASKINDEXTOOSTASKINFOOFINDEXTOOSTASKINFO                                                STD_OFF  /**< Deactivateable: 'Rtm_IndexToOsTaskInfo.TaskIndexToOsTaskInfo' Reason: 'the array is deactivated because the size is 0 and the piece of data is in the configuration class: PRE_COMPILE' */
#define RTM_INITDATAHASHCODE                                                                        STD_OFF  /**< Deactivateable: 'Rtm_InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define RTM_MAINFUNCTIONRUNTIMEDATA                                                                 STD_ON
#define RTM_AVERAGECOUNTEROFMAINFUNCTIONRUNTIMEDATA                                                 STD_ON
#define RTM_AVERAGEOFMAINFUNCTIONRUNTIMEDATA                                                        STD_ON
#define RTM_DELTAOFMAINFUNCTIONRUNTIMEDATA                                                          STD_ON
#define RTM_LASTCALLOFMAINFUNCTIONRUNTIMEDATA                                                       STD_ON
#define RTM_OSTASKINFO                                                                              STD_ON
#define RTM_MAXSTACKOFOSTASKINFO                                                                    STD_ON
#define RTM_TASKIDOFOSTASKINFO                                                                      STD_ON
#define RTM_SIZEOFCOMMONCONST                                                                       STD_ON
#define RTM_SIZEOFCPULOADDATA                                                                       STD_ON
#define RTM_SIZEOFHYPERPERIODDATA                                                                   STD_ON
#define RTM_SIZEOFMAINFUNCTIONRUNTIMEDATA                                                           STD_ON
#define RTM_SIZEOFOSTASKINFO                                                                        STD_ON
#define RTM_PCCONFIG                                                                                STD_ON
#define RTM_COMMONCONSTOFPCCONFIG                                                                   STD_ON
#define RTM_CPULOADDATAOFPCCONFIG                                                                   STD_ON
#define RTM_CPULOADTIMEOFPCCONFIG                                                                   STD_ON
#define RTM_FINALMAGICNUMBEROFPCCONFIG                                                              STD_OFF  /**< Deactivateable: 'Rtm_PCConfig.FinalMagicNumber' Reason: 'the module configuration does not support flashing of data.' */
#define RTM_HYPERPERIODDATAOFPCCONFIG                                                               STD_ON
#define RTM_INITDATAHASHCODEOFPCCONFIG                                                              STD_OFF  /**< Deactivateable: 'Rtm_PCConfig.InitDataHashCode' Reason: 'the module configuration does not support flashing of data.' */
#define RTM_MAINFUNCTIONRUNTIMEDATAOFPCCONFIG                                                       STD_ON
#define RTM_OSTASKINFOOFPCCONFIG                                                                    STD_ON
#define RTM_SIZEOFCOMMONCONSTOFPCCONFIG                                                             STD_ON
#define RTM_SIZEOFCPULOADDATAOFPCCONFIG                                                             STD_ON
#define RTM_SIZEOFHYPERPERIODDATAOFPCCONFIG                                                         STD_ON
#define RTM_SIZEOFMAINFUNCTIONRUNTIMEDATAOFPCCONFIG                                                 STD_ON
#define RTM_SIZEOFOSTASKINFOOFPCCONFIG                                                              STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCMinNumericValueDefines  Rtm Min Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the minimum value in numerical based data.
  \{
*/ 
#define RTM_MIN_COLLECTEDTIMEOFCPULOADDATA                                                          0u
#define RTM_MIN_LASTTICKSOFCPULOADDATA                                                              0u
#define RTM_MIN_SENDRESULTOFCPULOADDATA                                                             0u
#define RTM_MIN_STARTTIMESTAMPOFCPULOADDATA                                                         0u
#define RTM_MIN_THRESHOLDOFCPULOADDATA                                                              0u
#define RTM_MIN_CPULOADTIME                                                                         0u
#define RTM_MIN_ACCUMULATEDTIMEOFHYPERPERIODDATA                                                    0u
#define RTM_MIN_MAINFUNCTIONCOUNTEROFHYPERPERIODDATA                                                0u
#define RTM_MIN_AVERAGECOUNTEROFMAINFUNCTIONRUNTIMEDATA                                             0u
#define RTM_MIN_AVERAGEOFMAINFUNCTIONRUNTIMEDATA                                                    0u
#define RTM_MIN_DELTAOFMAINFUNCTIONRUNTIMEDATA                                                      0u
#define RTM_MIN_LASTCALLOFMAINFUNCTIONRUNTIMEDATA                                                   0u
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCMaxNumericValueDefines  Rtm Max Numeric Value Defines (PRE_COMPILE)
  \brief  These defines are used to implement against the maximum value in numerical based data.
  \{
*/ 
#define RTM_MAX_COLLECTEDTIMEOFCPULOADDATA                                                          4294967295u
#define RTM_MAX_LASTTICKSOFCPULOADDATA                                                              4294967295u
#define RTM_MAX_SENDRESULTOFCPULOADDATA                                                             255u
#define RTM_MAX_STARTTIMESTAMPOFCPULOADDATA                                                         4294967295u
#define RTM_MAX_THRESHOLDOFCPULOADDATA                                                              4294967295u
#define RTM_MAX_CPULOADTIME                                                                         4294967295u
#define RTM_MAX_ACCUMULATEDTIMEOFHYPERPERIODDATA                                                    4294967295u
#define RTM_MAX_MAINFUNCTIONCOUNTEROFHYPERPERIODDATA                                                65535u
#define RTM_MAX_AVERAGECOUNTEROFMAINFUNCTIONRUNTIMEDATA                                             255u
#define RTM_MAX_AVERAGEOFMAINFUNCTIONRUNTIMEDATA                                                    4294967295u
#define RTM_MAX_DELTAOFMAINFUNCTIONRUNTIMEDATA                                                      4294967295u
#define RTM_MAX_LASTCALLOFMAINFUNCTIONRUNTIMEDATA                                                   4294967295u
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCNoReferenceDefines  Rtm No Reference Defines (PRE_COMPILE)
  \brief  These defines are used to indicate unused indexes in data relations.
  \{
*/ 
#define RTM_NO_ACTIVATEDMPIDOFCPULOADOFCOMMONCONST                                                  255u
#define RTM_NO_CONFIGUREDMPIDOFCPULOADOFCOMMONCONST                                                 255u
#define RTM_NO_COREIDOFCOMMONCONST                                                                  255u
#define RTM_NO_NUMBEROFTASKRESPONSETIMEPERCENTILESOFCOMMONCONST                                     255u
#define RTM_NO_NVMCPULOADBLOCKSNVOFCOMMONCONST                                                      255u
#define RTM_NO_NVMTASKRESPONSETIMEBLOCKSNVOFCOMMONCONST                                             255u
#define RTM_NO_OSTASKINFOENDIDXOFCOMMONCONST                                                        255u
#define RTM_NO_OSTASKINFOSTARTIDXOFCOMMONCONST                                                      255u
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCIsReducedToDefineDefines  Rtm Is Reduced To Define Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define RTM_ISDEF_ACTIVATEDMPIDOFCPULOADOFCOMMONCONST                                               STD_OFF
#define RTM_ISDEF_BSWCOREOFCOMMONCONST                                                              STD_OFF
#define RTM_ISDEF_CPULOADAUTOSTARTOFCOMMONCONST                                                     STD_OFF
#define RTM_ISDEF_CONFIGUREDMPIDOFCPULOADOFCOMMONCONST                                              STD_OFF
#define RTM_ISDEF_COREIDOFCOMMONCONST                                                               STD_OFF
#define RTM_ISDEF_CPULOADNVMHANDLEUSEDOFCOMMONCONST                                                 STD_OFF
#define RTM_ISDEF_NUMBEROFTASKRESPONSETIMEPERCENTILESOFCOMMONCONST                                  STD_OFF
#define RTM_ISDEF_NVMCPULOADBLOCKSNVOFCOMMONCONST                                                   STD_OFF
#define RTM_ISDEF_NVMTASKRESPONSETIMEBLOCKSNVOFCOMMONCONST                                          STD_OFF
#define RTM_ISDEF_OSTASKINFOENDIDXOFCOMMONCONST                                                     STD_OFF
#define RTM_ISDEF_OSTASKINFOLENGTHOFCOMMONCONST                                                     STD_OFF
#define RTM_ISDEF_OSTASKINFOSTARTIDXOFCOMMONCONST                                                   STD_OFF
#define RTM_ISDEF_OSTASKINFOUSEDOFCOMMONCONST                                                       STD_OFF
#define RTM_ISDEF_PARTITIONINDEXOFCSLSTRINGSNVOFCOMMONCONST                                         STD_OFF
#define RTM_ISDEF_TASKRESPONSETIMEDATAPTROFCOMMONCONST                                              STD_OFF
#define RTM_ISDEF_TASKRESPONSETIMENVMHANDLEUSEDOFCOMMONCONST                                        STD_OFF
#define RTM_ISDEF_MAXSTACKOFOSTASKINFO                                                              STD_OFF
#define RTM_ISDEF_TASKIDOFOSTASKINFO                                                                STD_OFF
#define RTM_ISDEF_COMMONCONSTOFPCCONFIG                                                             STD_ON
#define RTM_ISDEF_CPULOADDATAOFPCCONFIG                                                             STD_ON
#define RTM_ISDEF_CPULOADTIMEOFPCCONFIG                                                             STD_ON
#define RTM_ISDEF_HYPERPERIODDATAOFPCCONFIG                                                         STD_ON
#define RTM_ISDEF_MAINFUNCTIONRUNTIMEDATAOFPCCONFIG                                                 STD_ON
#define RTM_ISDEF_OSTASKINFOOFPCCONFIG                                                              STD_ON
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCEqualsAlwaysToDefines  Rtm Equals Always To Defines (PRE_COMPILE)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define RTM_EQ2_ACTIVATEDMPIDOFCPULOADOFCOMMONCONST                                                 
#define RTM_EQ2_BSWCOREOFCOMMONCONST                                                                
#define RTM_EQ2_CPULOADAUTOSTARTOFCOMMONCONST                                                       
#define RTM_EQ2_CONFIGUREDMPIDOFCPULOADOFCOMMONCONST                                                
#define RTM_EQ2_COREIDOFCOMMONCONST                                                                 
#define RTM_EQ2_CPULOADNVMHANDLEUSEDOFCOMMONCONST                                                   
#define RTM_EQ2_NUMBEROFTASKRESPONSETIMEPERCENTILESOFCOMMONCONST                                    
#define RTM_EQ2_NVMCPULOADBLOCKSNVOFCOMMONCONST                                                     
#define RTM_EQ2_NVMTASKRESPONSETIMEBLOCKSNVOFCOMMONCONST                                            
#define RTM_EQ2_OSTASKINFOENDIDXOFCOMMONCONST                                                       
#define RTM_EQ2_OSTASKINFOLENGTHOFCOMMONCONST                                                       
#define RTM_EQ2_OSTASKINFOSTARTIDXOFCOMMONCONST                                                     
#define RTM_EQ2_OSTASKINFOUSEDOFCOMMONCONST                                                         
#define RTM_EQ2_PARTITIONINDEXOFCSLSTRINGSNVOFCOMMONCONST                                           
#define RTM_EQ2_TASKRESPONSETIMEDATAPTROFCOMMONCONST                                                
#define RTM_EQ2_TASKRESPONSETIMENVMHANDLEUSEDOFCOMMONCONST                                          
#define RTM_EQ2_MAXSTACKOFOSTASKINFO                                                                
#define RTM_EQ2_TASKIDOFOSTASKINFO                                                                  
#define RTM_EQ2_COMMONCONSTOFPCCONFIG                                                               Rtm_CommonConst
#define RTM_EQ2_CPULOADDATAOFPCCONFIG                                                               Rtm_CpuLoadData
#define RTM_EQ2_CPULOADTIMEOFPCCONFIG                                                               (&(Rtm_CpuLoadTime))
#define RTM_EQ2_HYPERPERIODDATAOFPCCONFIG                                                           Rtm_HyperPeriodData
#define RTM_EQ2_MAINFUNCTIONRUNTIMEDATAOFPCCONFIG                                                   Rtm_MainFunctionRuntimeData
#define RTM_EQ2_OSTASKINFOOFPCCONFIG                                                                Rtm_OsTaskInfo
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCSymbolicInitializationPointers  Rtm Symbolic Initialization Pointers (PRE_COMPILE)
  \brief  Symbolic initialization pointers to be used in the call of a preinit or init function.
  \{
*/ 
#define Rtm_Config_Ptr                                                                              NULL_PTR  /**< symbolic identifier which shall be used to initialize 'Rtm' */
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCInitializationSymbols  Rtm Initialization Symbols (PRE_COMPILE)
  \brief  Symbolic initialization pointers which may be used in the call of a preinit or init function. Please note, that the defined value can be a 'NULL_PTR' and the address operator is not usable.
  \{
*/ 
#define Rtm_Config                                                                                  NULL_PTR  /**< symbolic identifier which could be used to initialize 'Rtm */
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCGeneral  Rtm General (PRE_COMPILE)
  \brief  General constant defines not associated with a group of defines.
  \{
*/ 
#define RTM_CHECK_INIT_POINTER                                                                      STD_OFF  /**< STD_ON if the init pointer shall not be used as NULL_PTR and a check shall validate this. */
#define RTM_FINAL_MAGIC_NUMBER                                                                      0x001Eu  /**< the precompile constant to validate the size of the initialization structure at initialization time of Rtm */
#define RTM_INDIVIDUAL_POSTBUILD                                                                    STD_OFF  /**< the precompile constant to check, that the module is individual postbuildable. The module 'Rtm' is not configured to be postbuild capable. */
#define RTM_INIT_DATA                                                                               RTM_CONST  /**< CompilerMemClassDefine for the initialization data. */
#define RTM_INIT_DATA_HASH_CODE                                                                     -1808340149  /**< the precompile constant to validate the initialization structure at initialization time of Rtm with a hashcode. The seed value is '0x001Eu' */
#define RTM_USE_ECUM_BSW_ERROR_HOOK                                                                 STD_OFF  /**< STD_ON if the EcuM_BswErrorHook shall be called in the ConfigPtr check. */
#define RTM_USE_INIT_POINTER                                                                        STD_OFF  /**< STD_ON if the init pointer Rtm shall be used. */
/** 
  \}
*/ 




 
/* -----------------------------------------------------------------------------
    &&&~ Global Constant Macros
----------------------------------------------------------------------------- */

#define RTM_CPU_LOAD_CONTROL_OFF                     0x0u
#define RTM_CPU_LOAD_CONTROL_C_API                   0x1u
#define RTM_CPU_LOAD_CONTROL_XCP                     0x2u

#define RTM_CPU_LOAD_CONTROL_MODE                    RTM_CPU_LOAD_CONTROL_C_API

#define RTM_IS_ANY_CPU_LOAD_MP_SET_TO_AUTOSTART      STD_OFF

#define RTM_XCP_IS_PRESENT                           STD_ON
#define RTM_NVM_IS_USED                              STD_OFF
#define RTM_NVM_IS_USED_FOR_CPU_LOAD_HISTOGRAM       STD_OFF
#define RTM_NVM_IS_USED_FOR_TASK_RESPONSE_TIME       STD_OFF
#define RTM_NVM_IS_USED_FOR_TASK_STACK_USAGE         STD_OFF

#define RTM_CPULOAD_PERCENTILES_FACTOR               1u
#define RTM_CPULOAD_HYPERPERIOD_MAX_MFC              10u
#define RTM_NUMBER_OF_CPULOAD_PERCENTILES            0u
#define RTM_NUMBER_OF_TASKRESPONSETIME_PERCENTILES   0u
#define RTM_NUMBER_OF_TASKS_ON_CORE_0                0u
#define RTM_TASK_STACK_USAGE                         STD_OFF                               


/* -----------------------------------------------------------------------------
    &&&~ Global Data Prototypes
 ----------------------------------------------------------------------------- */

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  RtmLTDataSwitches  Rtm Data Switches  (LINK)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define RTM_LTCONFIG                                                                                STD_OFF  /**< Deactivateable: 'Rtm_LTConfig' Reason: 'the struct is deactivated because all elements are deactivated in all variants.' */
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
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  RtmPCGetConstantDuplicatedRootDataMacros  Rtm Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define Rtm_GetCommonConstOfPCConfig()                                                              Rtm_CommonConst  /**< the pointer to Rtm_CommonConst */
#define Rtm_GetCpuLoadDataOfPCConfig()                                                              Rtm_CpuLoadData  /**< the pointer to Rtm_CpuLoadData */
#define Rtm_GetCpuLoadTimeOfPCConfig()                                                              (&(Rtm_CpuLoadTime))  /**< the pointer to Rtm_CpuLoadTime */
#define Rtm_GetHyperPeriodDataOfPCConfig()                                                          Rtm_HyperPeriodData  /**< the pointer to Rtm_HyperPeriodData */
#define Rtm_GetMainFunctionRuntimeDataOfPCConfig()                                                  Rtm_MainFunctionRuntimeData  /**< the pointer to Rtm_MainFunctionRuntimeData */
#define Rtm_GetOsTaskInfoOfPCConfig()                                                               Rtm_OsTaskInfo  /**< the pointer to Rtm_OsTaskInfo */
#define Rtm_GetSizeOfCommonConstOfPCConfig()                                                        1u  /**< the number of accomplishable value elements in Rtm_CommonConst */
#define Rtm_GetSizeOfCpuLoadDataOfPCConfig()                                                        1u  /**< the number of accomplishable value elements in Rtm_CpuLoadData */
#define Rtm_GetSizeOfHyperPeriodDataOfPCConfig()                                                    1u  /**< the number of accomplishable value elements in Rtm_HyperPeriodData */
#define Rtm_GetSizeOfMainFunctionRuntimeDataOfPCConfig()                                            1u  /**< the number of accomplishable value elements in Rtm_MainFunctionRuntimeData */
#define Rtm_GetSizeOfOsTaskInfoOfPCConfig()                                                         13u  /**< the number of accomplishable value elements in Rtm_OsTaskInfo */
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCGetDataMacros  Rtm Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define Rtm_GetActivatedMPIdOfCPULoadOfCommonConst(Index)                                           (Rtm_GetCommonConstOfPCConfig()[(Index)].ActivatedMPIdOfCPULoadOfCommonConst)
#define Rtm_IsBSWCoreOfCommonConst(Index)                                                           ((Rtm_GetCommonConstOfPCConfig()[(Index)].BSWCoreOfCommonConst) != FALSE)
#define Rtm_IsCPULoadAutostartOfCommonConst(Index)                                                  ((Rtm_GetCommonConstOfPCConfig()[(Index)].CPULoadAutostartOfCommonConst) != FALSE)
#define Rtm_GetConfiguredMPIdOfCPULoadOfCommonConst(Index)                                          (Rtm_GetCommonConstOfPCConfig()[(Index)].ConfiguredMPIdOfCPULoadOfCommonConst)
#define Rtm_GetCoreIdOfCommonConst(Index)                                                           (Rtm_GetCommonConstOfPCConfig()[(Index)].CoreIdOfCommonConst)
#define Rtm_IsCpuLoadNvMHandleUsedOfCommonConst(Index)                                              ((Rtm_GetCommonConstOfPCConfig()[(Index)].CpuLoadNvMHandleUsedOfCommonConst) != FALSE)
#define Rtm_GetNumberofTaskResponseTimePercentilesOfCommonConst(Index)                              (Rtm_GetCommonConstOfPCConfig()[(Index)].NumberofTaskResponseTimePercentilesOfCommonConst)
#define Rtm_GetNvMCpuLoadBlockSnvOfCommonConst(Index)                                               (Rtm_GetCommonConstOfPCConfig()[(Index)].NvMCpuLoadBlockSnvOfCommonConst)
#define Rtm_GetNvMTaskResponseTimeBlockSnvOfCommonConst(Index)                                      (Rtm_GetCommonConstOfPCConfig()[(Index)].NvMTaskResponseTimeBlockSnvOfCommonConst)
#define Rtm_GetOsTaskInfoEndIdxOfCommonConst(Index)                                                 (Rtm_GetCommonConstOfPCConfig()[(Index)].OsTaskInfoEndIdxOfCommonConst)
#define Rtm_GetOsTaskInfoLengthOfCommonConst(Index)                                                 (Rtm_GetCommonConstOfPCConfig()[(Index)].OsTaskInfoLengthOfCommonConst)
#define Rtm_GetOsTaskInfoStartIdxOfCommonConst(Index)                                               (Rtm_GetCommonConstOfPCConfig()[(Index)].OsTaskInfoStartIdxOfCommonConst)
#define Rtm_GetPartitionIndexOfCslStringSNVOfCommonConst(Index)                                     (Rtm_GetCommonConstOfPCConfig()[(Index)].PartitionIndexOfCslStringSNVOfCommonConst)
#define Rtm_GetTaskResponseTimeDataPtrOfCommonConst(Index)                                          (Rtm_GetCommonConstOfPCConfig()[(Index)].TaskResponseTimeDataPtrOfCommonConst)
#define Rtm_IsTaskResponseTimeNvMHandleUsedOfCommonConst(Index)                                     ((Rtm_GetCommonConstOfPCConfig()[(Index)].TaskResponseTimeNvMHandleUsedOfCommonConst) != FALSE)
#define Rtm_GetCollectedTimeOfCpuLoadData(Index)                                                    (Rtm_GetCpuLoadDataOfPCConfig()[(Index)].CollectedTimeOfCpuLoadData)
#define Rtm_IsIsCpuLoadMPResultOverflownOfCpuLoadData(Index)                                        ((Rtm_GetCpuLoadDataOfPCConfig()[(Index)].IsCpuLoadMPResultOverflownOfCpuLoadData) != FALSE)
#define Rtm_GetLastTicksOfCpuLoadData(Index)                                                        (Rtm_GetCpuLoadDataOfPCConfig()[(Index)].LastTicksOfCpuLoadData)
#define Rtm_IsMeasurementActiveOfCpuLoadData(Index)                                                 ((Rtm_GetCpuLoadDataOfPCConfig()[(Index)].MeasurementActiveOfCpuLoadData) != FALSE)
#define Rtm_IsMeasurementWasStoppedOfCpuLoadData(Index)                                             ((Rtm_GetCpuLoadDataOfPCConfig()[(Index)].MeasurementWasStoppedOfCpuLoadData) != FALSE)
#define Rtm_GetSendResultOfCpuLoadData(Index)                                                       (Rtm_GetCpuLoadDataOfPCConfig()[(Index)].SendResultOfCpuLoadData)
#define Rtm_GetStartTimeStampOfCpuLoadData(Index)                                                   (Rtm_GetCpuLoadDataOfPCConfig()[(Index)].StartTimeStampOfCpuLoadData)
#define Rtm_GetThresholdOfCpuLoadData(Index)                                                        (Rtm_GetCpuLoadDataOfPCConfig()[(Index)].ThresholdOfCpuLoadData)
#define Rtm_GetCpuLoadTime()                                                                        ((*(Rtm_GetCpuLoadTimeOfPCConfig())))
#define Rtm_GetAccumulatedTimeOfHyperPeriodData(Index)                                              (Rtm_GetHyperPeriodDataOfPCConfig()[(Index)].AccumulatedTimeOfHyperPeriodData)
#define Rtm_GetMainFunctionCounterOfHyperPeriodData(Index)                                          (Rtm_GetHyperPeriodDataOfPCConfig()[(Index)].MainFunctionCounterOfHyperPeriodData)
#define Rtm_GetAverageCounterOfMainFunctionRuntimeData(Index)                                       (Rtm_GetMainFunctionRuntimeDataOfPCConfig()[(Index)].AverageCounterOfMainFunctionRuntimeData)
#define Rtm_GetAverageOfMainFunctionRuntimeData(Index)                                              (Rtm_GetMainFunctionRuntimeDataOfPCConfig()[(Index)].AverageOfMainFunctionRuntimeData)
#define Rtm_GetDeltaOfMainFunctionRuntimeData(Index)                                                (Rtm_GetMainFunctionRuntimeDataOfPCConfig()[(Index)].DeltaOfMainFunctionRuntimeData)
#define Rtm_GetLastCallOfMainFunctionRuntimeData(Index)                                             (Rtm_GetMainFunctionRuntimeDataOfPCConfig()[(Index)].LastCallOfMainFunctionRuntimeData)
#define Rtm_GetMaxStackOfOsTaskInfo(Index)                                                          (Rtm_GetOsTaskInfoOfPCConfig()[(Index)].MaxStackOfOsTaskInfo)
#define Rtm_GetTaskIdOfOsTaskInfo(Index)                                                            (Rtm_GetOsTaskInfoOfPCConfig()[(Index)].TaskIdOfOsTaskInfo)
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCGetDeduplicatedDataMacros  Rtm Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define Rtm_IsOsTaskInfoUsedOfCommonConst(Index)                                                    (((boolean)(Rtm_GetOsTaskInfoLengthOfCommonConst(Index) != 0u)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to Rtm_OsTaskInfo */
#define Rtm_GetSizeOfCommonConst()                                                                  Rtm_GetSizeOfCommonConstOfPCConfig()
#define Rtm_GetSizeOfCpuLoadData()                                                                  Rtm_GetSizeOfCpuLoadDataOfPCConfig()
#define Rtm_GetSizeOfHyperPeriodData()                                                              Rtm_GetSizeOfHyperPeriodDataOfPCConfig()
#define Rtm_GetSizeOfMainFunctionRuntimeData()                                                      Rtm_GetSizeOfMainFunctionRuntimeDataOfPCConfig()
#define Rtm_GetSizeOfOsTaskInfo()                                                                   Rtm_GetSizeOfOsTaskInfoOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCSetDataMacros  Rtm Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define Rtm_SetCollectedTimeOfCpuLoadData(Index, Value)                                             Rtm_GetCpuLoadDataOfPCConfig()[(Index)].CollectedTimeOfCpuLoadData = (Value)
#define Rtm_SetIsCpuLoadMPResultOverflownOfCpuLoadData(Index, Value)                                Rtm_GetCpuLoadDataOfPCConfig()[(Index)].IsCpuLoadMPResultOverflownOfCpuLoadData = (Value)
#define Rtm_SetLastTicksOfCpuLoadData(Index, Value)                                                 Rtm_GetCpuLoadDataOfPCConfig()[(Index)].LastTicksOfCpuLoadData = (Value)
#define Rtm_SetMeasurementActiveOfCpuLoadData(Index, Value)                                         Rtm_GetCpuLoadDataOfPCConfig()[(Index)].MeasurementActiveOfCpuLoadData = (Value)
#define Rtm_SetMeasurementWasStoppedOfCpuLoadData(Index, Value)                                     Rtm_GetCpuLoadDataOfPCConfig()[(Index)].MeasurementWasStoppedOfCpuLoadData = (Value)
#define Rtm_SetSendResultOfCpuLoadData(Index, Value)                                                Rtm_GetCpuLoadDataOfPCConfig()[(Index)].SendResultOfCpuLoadData = (Value)
#define Rtm_SetStartTimeStampOfCpuLoadData(Index, Value)                                            Rtm_GetCpuLoadDataOfPCConfig()[(Index)].StartTimeStampOfCpuLoadData = (Value)
#define Rtm_SetThresholdOfCpuLoadData(Index, Value)                                                 Rtm_GetCpuLoadDataOfPCConfig()[(Index)].ThresholdOfCpuLoadData = (Value)
#define Rtm_SetCpuLoadTime(Value)                                                                   (*(Rtm_GetCpuLoadTimeOfPCConfig())) = (Value)
#define Rtm_SetAccumulatedTimeOfHyperPeriodData(Index, Value)                                       Rtm_GetHyperPeriodDataOfPCConfig()[(Index)].AccumulatedTimeOfHyperPeriodData = (Value)
#define Rtm_SetMainFunctionCounterOfHyperPeriodData(Index, Value)                                   Rtm_GetHyperPeriodDataOfPCConfig()[(Index)].MainFunctionCounterOfHyperPeriodData = (Value)
#define Rtm_SetAverageCounterOfMainFunctionRuntimeData(Index, Value)                                Rtm_GetMainFunctionRuntimeDataOfPCConfig()[(Index)].AverageCounterOfMainFunctionRuntimeData = (Value)
#define Rtm_SetAverageOfMainFunctionRuntimeData(Index, Value)                                       Rtm_GetMainFunctionRuntimeDataOfPCConfig()[(Index)].AverageOfMainFunctionRuntimeData = (Value)
#define Rtm_SetDeltaOfMainFunctionRuntimeData(Index, Value)                                         Rtm_GetMainFunctionRuntimeDataOfPCConfig()[(Index)].DeltaOfMainFunctionRuntimeData = (Value)
#define Rtm_SetLastCallOfMainFunctionRuntimeData(Index, Value)                                      Rtm_GetMainFunctionRuntimeDataOfPCConfig()[(Index)].LastCallOfMainFunctionRuntimeData = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCHasMacros  Rtm Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define Rtm_HasCommonConst()                                                                        (TRUE != FALSE)
#define Rtm_HasActivatedMPIdOfCPULoadOfCommonConst()                                                (TRUE != FALSE)
#define Rtm_HasBSWCoreOfCommonConst()                                                               (TRUE != FALSE)
#define Rtm_HasCPULoadAutostartOfCommonConst()                                                      (TRUE != FALSE)
#define Rtm_HasConfiguredMPIdOfCPULoadOfCommonConst()                                               (TRUE != FALSE)
#define Rtm_HasCoreIdOfCommonConst()                                                                (TRUE != FALSE)
#define Rtm_HasCpuLoadNvMHandleUsedOfCommonConst()                                                  (TRUE != FALSE)
#define Rtm_HasNumberofTaskResponseTimePercentilesOfCommonConst()                                   (TRUE != FALSE)
#define Rtm_HasNvMCpuLoadBlockSnvOfCommonConst()                                                    (TRUE != FALSE)
#define Rtm_HasNvMTaskResponseTimeBlockSnvOfCommonConst()                                           (TRUE != FALSE)
#define Rtm_HasOsTaskInfoEndIdxOfCommonConst()                                                      (TRUE != FALSE)
#define Rtm_HasOsTaskInfoLengthOfCommonConst()                                                      (TRUE != FALSE)
#define Rtm_HasOsTaskInfoStartIdxOfCommonConst()                                                    (TRUE != FALSE)
#define Rtm_HasOsTaskInfoUsedOfCommonConst()                                                        (TRUE != FALSE)
#define Rtm_HasPartitionIndexOfCslStringSNVOfCommonConst()                                          (TRUE != FALSE)
#define Rtm_HasTaskResponseTimeDataPtrOfCommonConst()                                               (TRUE != FALSE)
#define Rtm_HasTaskResponseTimeNvMHandleUsedOfCommonConst()                                         (TRUE != FALSE)
#define Rtm_HasCpuLoadData()                                                                        (TRUE != FALSE)
#define Rtm_HasCollectedTimeOfCpuLoadData()                                                         (TRUE != FALSE)
#define Rtm_HasIsCpuLoadMPResultOverflownOfCpuLoadData()                                            (TRUE != FALSE)
#define Rtm_HasLastTicksOfCpuLoadData()                                                             (TRUE != FALSE)
#define Rtm_HasMeasurementActiveOfCpuLoadData()                                                     (TRUE != FALSE)
#define Rtm_HasMeasurementWasStoppedOfCpuLoadData()                                                 (TRUE != FALSE)
#define Rtm_HasSendResultOfCpuLoadData()                                                            (TRUE != FALSE)
#define Rtm_HasStartTimeStampOfCpuLoadData()                                                        (TRUE != FALSE)
#define Rtm_HasThresholdOfCpuLoadData()                                                             (TRUE != FALSE)
#define Rtm_HasCpuLoadTime()                                                                        (TRUE != FALSE)
#define Rtm_HasHyperPeriodData()                                                                    (TRUE != FALSE)
#define Rtm_HasAccumulatedTimeOfHyperPeriodData()                                                   (TRUE != FALSE)
#define Rtm_HasMainFunctionCounterOfHyperPeriodData()                                               (TRUE != FALSE)
#define Rtm_HasMainFunctionRuntimeData()                                                            (TRUE != FALSE)
#define Rtm_HasAverageCounterOfMainFunctionRuntimeData()                                            (TRUE != FALSE)
#define Rtm_HasAverageOfMainFunctionRuntimeData()                                                   (TRUE != FALSE)
#define Rtm_HasDeltaOfMainFunctionRuntimeData()                                                     (TRUE != FALSE)
#define Rtm_HasLastCallOfMainFunctionRuntimeData()                                                  (TRUE != FALSE)
#define Rtm_HasOsTaskInfo()                                                                         (TRUE != FALSE)
#define Rtm_HasMaxStackOfOsTaskInfo()                                                               (TRUE != FALSE)
#define Rtm_HasTaskIdOfOsTaskInfo()                                                                 (TRUE != FALSE)
#define Rtm_HasSizeOfCommonConst()                                                                  (TRUE != FALSE)
#define Rtm_HasSizeOfCpuLoadData()                                                                  (TRUE != FALSE)
#define Rtm_HasSizeOfHyperPeriodData()                                                              (TRUE != FALSE)
#define Rtm_HasSizeOfMainFunctionRuntimeData()                                                      (TRUE != FALSE)
#define Rtm_HasSizeOfOsTaskInfo()                                                                   (TRUE != FALSE)
#define Rtm_HasPCConfig()                                                                           (TRUE != FALSE)
#define Rtm_HasCommonConstOfPCConfig()                                                              (TRUE != FALSE)
#define Rtm_HasCpuLoadDataOfPCConfig()                                                              (TRUE != FALSE)
#define Rtm_HasCpuLoadTimeOfPCConfig()                                                              (TRUE != FALSE)
#define Rtm_HasHyperPeriodDataOfPCConfig()                                                          (TRUE != FALSE)
#define Rtm_HasMainFunctionRuntimeDataOfPCConfig()                                                  (TRUE != FALSE)
#define Rtm_HasOsTaskInfoOfPCConfig()                                                               (TRUE != FALSE)
#define Rtm_HasSizeOfCommonConstOfPCConfig()                                                        (TRUE != FALSE)
#define Rtm_HasSizeOfCpuLoadDataOfPCConfig()                                                        (TRUE != FALSE)
#define Rtm_HasSizeOfHyperPeriodDataOfPCConfig()                                                    (TRUE != FALSE)
#define Rtm_HasSizeOfMainFunctionRuntimeDataOfPCConfig()                                            (TRUE != FALSE)
#define Rtm_HasSizeOfOsTaskInfoOfPCConfig()                                                         (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCIncrementDataMacros  Rtm Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define Rtm_IncCollectedTimeOfCpuLoadData(Index)                                                    Rtm_GetCollectedTimeOfCpuLoadData(Index)++
#define Rtm_IncLastTicksOfCpuLoadData(Index)                                                        Rtm_GetLastTicksOfCpuLoadData(Index)++
#define Rtm_IncSendResultOfCpuLoadData(Index)                                                       Rtm_GetSendResultOfCpuLoadData(Index)++
#define Rtm_IncStartTimeStampOfCpuLoadData(Index)                                                   Rtm_GetStartTimeStampOfCpuLoadData(Index)++
#define Rtm_IncThresholdOfCpuLoadData(Index)                                                        Rtm_GetThresholdOfCpuLoadData(Index)++
#define Rtm_IncCpuLoadTime()                                                                        Rtm_GetCpuLoadTime()++
#define Rtm_IncAccumulatedTimeOfHyperPeriodData(Index)                                              Rtm_GetAccumulatedTimeOfHyperPeriodData(Index)++
#define Rtm_IncMainFunctionCounterOfHyperPeriodData(Index)                                          Rtm_GetMainFunctionCounterOfHyperPeriodData(Index)++
#define Rtm_IncAverageCounterOfMainFunctionRuntimeData(Index)                                       Rtm_GetAverageCounterOfMainFunctionRuntimeData(Index)++
#define Rtm_IncAverageOfMainFunctionRuntimeData(Index)                                              Rtm_GetAverageOfMainFunctionRuntimeData(Index)++
#define Rtm_IncDeltaOfMainFunctionRuntimeData(Index)                                                Rtm_GetDeltaOfMainFunctionRuntimeData(Index)++
#define Rtm_IncLastCallOfMainFunctionRuntimeData(Index)                                             Rtm_GetLastCallOfMainFunctionRuntimeData(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCDecrementDataMacros  Rtm Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define Rtm_DecCollectedTimeOfCpuLoadData(Index)                                                    Rtm_GetCollectedTimeOfCpuLoadData(Index)--
#define Rtm_DecLastTicksOfCpuLoadData(Index)                                                        Rtm_GetLastTicksOfCpuLoadData(Index)--
#define Rtm_DecSendResultOfCpuLoadData(Index)                                                       Rtm_GetSendResultOfCpuLoadData(Index)--
#define Rtm_DecStartTimeStampOfCpuLoadData(Index)                                                   Rtm_GetStartTimeStampOfCpuLoadData(Index)--
#define Rtm_DecThresholdOfCpuLoadData(Index)                                                        Rtm_GetThresholdOfCpuLoadData(Index)--
#define Rtm_DecCpuLoadTime()                                                                        Rtm_GetCpuLoadTime()--
#define Rtm_DecAccumulatedTimeOfHyperPeriodData(Index)                                              Rtm_GetAccumulatedTimeOfHyperPeriodData(Index)--
#define Rtm_DecMainFunctionCounterOfHyperPeriodData(Index)                                          Rtm_GetMainFunctionCounterOfHyperPeriodData(Index)--
#define Rtm_DecAverageCounterOfMainFunctionRuntimeData(Index)                                       Rtm_GetAverageCounterOfMainFunctionRuntimeData(Index)--
#define Rtm_DecAverageOfMainFunctionRuntimeData(Index)                                              Rtm_GetAverageOfMainFunctionRuntimeData(Index)--
#define Rtm_DecDeltaOfMainFunctionRuntimeData(Index)                                                Rtm_GetDeltaOfMainFunctionRuntimeData(Index)--
#define Rtm_DecLastCallOfMainFunctionRuntimeData(Index)                                             Rtm_GetLastCallOfMainFunctionRuntimeData(Index)--
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCAddDataMacros  Rtm Add Data Macros (PRE_COMPILE)
  \brief  These macros can be used to add VAR data with numerical nature.
  \{
*/ 
#define Rtm_AddCollectedTimeOfCpuLoadData(Index, Value)                                             Rtm_SetCollectedTimeOfCpuLoadData(Index, (Rtm_GetCollectedTimeOfCpuLoadData(Index) + Value))
#define Rtm_AddLastTicksOfCpuLoadData(Index, Value)                                                 Rtm_SetLastTicksOfCpuLoadData(Index, (Rtm_GetLastTicksOfCpuLoadData(Index) + Value))
#define Rtm_AddSendResultOfCpuLoadData(Index, Value)                                                Rtm_SetSendResultOfCpuLoadData(Index, (Rtm_GetSendResultOfCpuLoadData(Index) + Value))
#define Rtm_AddStartTimeStampOfCpuLoadData(Index, Value)                                            Rtm_SetStartTimeStampOfCpuLoadData(Index, (Rtm_GetStartTimeStampOfCpuLoadData(Index) + Value))
#define Rtm_AddThresholdOfCpuLoadData(Index, Value)                                                 Rtm_SetThresholdOfCpuLoadData(Index, (Rtm_GetThresholdOfCpuLoadData(Index) + Value))
#define Rtm_AddCpuLoadTime(Value)                                                                   Rtm_SetCpuLoadTime((Rtm_GetCpuLoadTime() + Value))
#define Rtm_AddAccumulatedTimeOfHyperPeriodData(Index, Value)                                       Rtm_SetAccumulatedTimeOfHyperPeriodData(Index, (Rtm_GetAccumulatedTimeOfHyperPeriodData(Index) + Value))
#define Rtm_AddMainFunctionCounterOfHyperPeriodData(Index, Value)                                   Rtm_SetMainFunctionCounterOfHyperPeriodData(Index, (Rtm_GetMainFunctionCounterOfHyperPeriodData(Index) + Value))
#define Rtm_AddAverageCounterOfMainFunctionRuntimeData(Index, Value)                                Rtm_SetAverageCounterOfMainFunctionRuntimeData(Index, (Rtm_GetAverageCounterOfMainFunctionRuntimeData(Index) + Value))
#define Rtm_AddAverageOfMainFunctionRuntimeData(Index, Value)                                       Rtm_SetAverageOfMainFunctionRuntimeData(Index, (Rtm_GetAverageOfMainFunctionRuntimeData(Index) + Value))
#define Rtm_AddDeltaOfMainFunctionRuntimeData(Index, Value)                                         Rtm_SetDeltaOfMainFunctionRuntimeData(Index, (Rtm_GetDeltaOfMainFunctionRuntimeData(Index) + Value))
#define Rtm_AddLastCallOfMainFunctionRuntimeData(Index, Value)                                      Rtm_SetLastCallOfMainFunctionRuntimeData(Index, (Rtm_GetLastCallOfMainFunctionRuntimeData(Index) + Value))
/** 
  \}
*/ 

/** 
  \defgroup  RtmPCSubstractDataMacros  Rtm Substract Data Macros (PRE_COMPILE)
  \brief  These macros can be used to substract VAR data with numerical nature.
  \{
*/ 
#define Rtm_SubCollectedTimeOfCpuLoadData(Index, Value)                                             Rtm_SetCollectedTimeOfCpuLoadData(Index, (Rtm_GetCollectedTimeOfCpuLoadData(Index) - Value))
#define Rtm_SubLastTicksOfCpuLoadData(Index, Value)                                                 Rtm_SetLastTicksOfCpuLoadData(Index, (Rtm_GetLastTicksOfCpuLoadData(Index) - Value))
#define Rtm_SubSendResultOfCpuLoadData(Index, Value)                                                Rtm_SetSendResultOfCpuLoadData(Index, (Rtm_GetSendResultOfCpuLoadData(Index) - Value))
#define Rtm_SubStartTimeStampOfCpuLoadData(Index, Value)                                            Rtm_SetStartTimeStampOfCpuLoadData(Index, (Rtm_GetStartTimeStampOfCpuLoadData(Index) - Value))
#define Rtm_SubThresholdOfCpuLoadData(Index, Value)                                                 Rtm_SetThresholdOfCpuLoadData(Index, (Rtm_GetThresholdOfCpuLoadData(Index) - Value))
#define Rtm_SubCpuLoadTime(Value)                                                                   Rtm_SetCpuLoadTime((Rtm_GetCpuLoadTime() - Value))
#define Rtm_SubAccumulatedTimeOfHyperPeriodData(Index, Value)                                       Rtm_SetAccumulatedTimeOfHyperPeriodData(Index, (Rtm_GetAccumulatedTimeOfHyperPeriodData(Index) - Value))
#define Rtm_SubMainFunctionCounterOfHyperPeriodData(Index, Value)                                   Rtm_SetMainFunctionCounterOfHyperPeriodData(Index, (Rtm_GetMainFunctionCounterOfHyperPeriodData(Index) - Value))
#define Rtm_SubAverageCounterOfMainFunctionRuntimeData(Index, Value)                                Rtm_SetAverageCounterOfMainFunctionRuntimeData(Index, (Rtm_GetAverageCounterOfMainFunctionRuntimeData(Index) - Value))
#define Rtm_SubAverageOfMainFunctionRuntimeData(Index, Value)                                       Rtm_SetAverageOfMainFunctionRuntimeData(Index, (Rtm_GetAverageOfMainFunctionRuntimeData(Index) - Value))
#define Rtm_SubDeltaOfMainFunctionRuntimeData(Index, Value)                                         Rtm_SetDeltaOfMainFunctionRuntimeData(Index, (Rtm_GetDeltaOfMainFunctionRuntimeData(Index) - Value))
#define Rtm_SubLastCallOfMainFunctionRuntimeData(Index, Value)                                      Rtm_SetLastCallOfMainFunctionRuntimeData(Index, (Rtm_GetLastCallOfMainFunctionRuntimeData(Index) - Value))
/** 
  \}
*/ 

  /* PRQA L:Macros_3453 */
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
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:Macros_3453 */
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

typedef uint32 Rtm_TaskResponseTimeStructType;

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: SIZEOF DATA TYPES
**********************************************************************************************************************/
/** 
  \defgroup  RtmPCSizeOfTypes  Rtm SizeOf Types (PRE_COMPILE)
  \brief  These type definitions are used for the SizeOf information.
  \{
*/ 
/**   \brief  value based type definition for Rtm_SizeOfCommonConst */
typedef uint8 Rtm_SizeOfCommonConstType;

/**   \brief  value based type definition for Rtm_SizeOfCpuLoadData */
typedef uint8 Rtm_SizeOfCpuLoadDataType;

/**   \brief  value based type definition for Rtm_SizeOfHyperPeriodData */
typedef uint8 Rtm_SizeOfHyperPeriodDataType;

/**   \brief  value based type definition for Rtm_SizeOfMainFunctionRuntimeData */
typedef uint8 Rtm_SizeOfMainFunctionRuntimeDataType;

/**   \brief  value based type definition for Rtm_SizeOfOsTaskInfo */
typedef uint8 Rtm_SizeOfOsTaskInfoType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  RtmPCIterableTypes  Rtm Iterable Types (PRE_COMPILE)
  \brief  These type definitions are used to iterate over an array with least processor cycles for variable access as possible.
  \{
*/ 
/**   \brief  type used to iterate Rtm_CommonConst */
typedef uint8_least Rtm_CommonConstIterType;

/**   \brief  type used to iterate Rtm_CpuLoadData */
typedef uint8_least Rtm_CpuLoadDataIterType;

/**   \brief  type used to iterate Rtm_HyperPeriodData */
typedef uint8_least Rtm_HyperPeriodDataIterType;

/**   \brief  type used to iterate Rtm_MainFunctionRuntimeData */
typedef uint8_least Rtm_MainFunctionRuntimeDataIterType;

/**   \brief  type used to iterate Rtm_OsTaskInfo */
typedef uint8_least Rtm_OsTaskInfoIterType;

/** 
  \}
*/ 

/** 
  \defgroup  RtmPCValueTypes  Rtm Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value based data representations.
  \{
*/ 
/**   \brief  value based type definition for Rtm_ActivatedMPIdOfCPULoadOfCommonConst */
typedef uint8 Rtm_ActivatedMPIdOfCPULoadOfCommonConstType;

/**   \brief  value based type definition for Rtm_BSWCoreOfCommonConst */
typedef boolean Rtm_BSWCoreOfCommonConstType;

/**   \brief  value based type definition for Rtm_CPULoadAutostartOfCommonConst */
typedef boolean Rtm_CPULoadAutostartOfCommonConstType;

/**   \brief  value based type definition for Rtm_ConfiguredMPIdOfCPULoadOfCommonConst */
typedef uint8 Rtm_ConfiguredMPIdOfCPULoadOfCommonConstType;

/**   \brief  value based type definition for Rtm_CoreIdOfCommonConst */
typedef uint8 Rtm_CoreIdOfCommonConstType;

/**   \brief  value based type definition for Rtm_CpuLoadNvMHandleUsedOfCommonConst */
typedef boolean Rtm_CpuLoadNvMHandleUsedOfCommonConstType;

/**   \brief  value based type definition for Rtm_NumberofTaskResponseTimePercentilesOfCommonConst */
typedef uint8 Rtm_NumberofTaskResponseTimePercentilesOfCommonConstType;

/**   \brief  value based type definition for Rtm_NvMCpuLoadBlockSnvOfCommonConst */
typedef uint8 Rtm_NvMCpuLoadBlockSnvOfCommonConstType;

/**   \brief  value based type definition for Rtm_NvMTaskResponseTimeBlockSnvOfCommonConst */
typedef uint8 Rtm_NvMTaskResponseTimeBlockSnvOfCommonConstType;

/**   \brief  value based type definition for Rtm_OsTaskInfoEndIdxOfCommonConst */
typedef uint8 Rtm_OsTaskInfoEndIdxOfCommonConstType;

/**   \brief  value based type definition for Rtm_OsTaskInfoLengthOfCommonConst */
typedef uint8 Rtm_OsTaskInfoLengthOfCommonConstType;

/**   \brief  value based type definition for Rtm_OsTaskInfoStartIdxOfCommonConst */
typedef uint8 Rtm_OsTaskInfoStartIdxOfCommonConstType;

/**   \brief  value based type definition for Rtm_OsTaskInfoUsedOfCommonConst */
typedef boolean Rtm_OsTaskInfoUsedOfCommonConstType;

/**   \brief  value based type definition for Rtm_PartitionIndexOfCslStringSNVOfCommonConst */
typedef uint8 Rtm_PartitionIndexOfCslStringSNVOfCommonConstType;

/**   \brief  value based type definition for Rtm_TaskResponseTimeNvMHandleUsedOfCommonConst */
typedef boolean Rtm_TaskResponseTimeNvMHandleUsedOfCommonConstType;

/**   \brief  value based type definition for Rtm_CollectedTimeOfCpuLoadData */
typedef uint32 Rtm_CollectedTimeOfCpuLoadDataType;

/**   \brief  value based type definition for Rtm_IsCpuLoadMPResultOverflownOfCpuLoadData */
typedef boolean Rtm_IsCpuLoadMPResultOverflownOfCpuLoadDataType;

/**   \brief  value based type definition for Rtm_LastTicksOfCpuLoadData */
typedef uint32 Rtm_LastTicksOfCpuLoadDataType;

/**   \brief  value based type definition for Rtm_MeasurementActiveOfCpuLoadData */
typedef boolean Rtm_MeasurementActiveOfCpuLoadDataType;

/**   \brief  value based type definition for Rtm_MeasurementWasStoppedOfCpuLoadData */
typedef boolean Rtm_MeasurementWasStoppedOfCpuLoadDataType;

/**   \brief  value based type definition for Rtm_SendResultOfCpuLoadData */
typedef uint8 Rtm_SendResultOfCpuLoadDataType;

/**   \brief  value based type definition for Rtm_StartTimeStampOfCpuLoadData */
typedef uint32 Rtm_StartTimeStampOfCpuLoadDataType;

/**   \brief  value based type definition for Rtm_ThresholdOfCpuLoadData */
typedef uint32 Rtm_ThresholdOfCpuLoadDataType;

/**   \brief  value based type definition for Rtm_CpuLoadTime */
typedef uint32 Rtm_CpuLoadTimeType;

/**   \brief  value based type definition for Rtm_AccumulatedTimeOfHyperPeriodData */
typedef uint32 Rtm_AccumulatedTimeOfHyperPeriodDataType;

/**   \brief  value based type definition for Rtm_MainFunctionCounterOfHyperPeriodData */
typedef uint16 Rtm_MainFunctionCounterOfHyperPeriodDataType;

/**   \brief  value based type definition for Rtm_AverageCounterOfMainFunctionRuntimeData */
typedef uint8 Rtm_AverageCounterOfMainFunctionRuntimeDataType;

/**   \brief  value based type definition for Rtm_AverageOfMainFunctionRuntimeData */
typedef uint32 Rtm_AverageOfMainFunctionRuntimeDataType;

/**   \brief  value based type definition for Rtm_DeltaOfMainFunctionRuntimeData */
typedef uint32 Rtm_DeltaOfMainFunctionRuntimeDataType;

/**   \brief  value based type definition for Rtm_LastCallOfMainFunctionRuntimeData */
typedef uint32 Rtm_LastCallOfMainFunctionRuntimeDataType;

/**   \brief  value based type definition for Rtm_MaxStackOfOsTaskInfo */
typedef uint16 Rtm_MaxStackOfOsTaskInfoType;

/**   \brief  value based type definition for Rtm_TaskIdOfOsTaskInfo */
typedef uint8 Rtm_TaskIdOfOsTaskInfoType;

/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** 
  \defgroup  RtmPCStructTypes  Rtm Struct Types (PRE_COMPILE)
  \brief  These type definitions are used for structured data representations.
  \{
*/ 
/**   \brief  type used in Rtm_CommonConst */
typedef struct sRtm_CommonConstType
{
  Rtm_BSWCoreOfCommonConstType BSWCoreOfCommonConst;  /**< This flag defines the BSW Core */
  Rtm_CPULoadAutostartOfCommonConstType CPULoadAutostartOfCommonConst;  /**< The autostart flag of the respective MP */
  Rtm_CpuLoadNvMHandleUsedOfCommonConstType CpuLoadNvMHandleUsedOfCommonConst;  /**< A flag indicating the availability of a handle */
  Rtm_TaskResponseTimeNvMHandleUsedOfCommonConstType TaskResponseTimeNvMHandleUsedOfCommonConst;  /**< A flag indicating the availability of a handle */
  Rtm_ActivatedMPIdOfCPULoadOfCommonConstType ActivatedMPIdOfCPULoadOfCommonConst;  /**< The activated MP id of CPU load */
  Rtm_ConfiguredMPIdOfCPULoadOfCommonConstType ConfiguredMPIdOfCPULoadOfCommonConst;  /**< The configured MP id of CPU */
  Rtm_CoreIdOfCommonConstType CoreIdOfCommonConst;  /**< The id of the respective CPU Load MP Core Id */
  Rtm_NumberofTaskResponseTimePercentilesOfCommonConstType NumberofTaskResponseTimePercentilesOfCommonConst;  /**< This is the number of percentiles for Response Time Data */
  Rtm_NvMCpuLoadBlockSnvOfCommonConstType NvMCpuLoadBlockSnvOfCommonConst;  /**< The CPU Load NvM Block SNV */
  Rtm_NvMTaskResponseTimeBlockSnvOfCommonConstType NvMTaskResponseTimeBlockSnvOfCommonConst;  /**< The Task Response Time NvM Block SNV */
  Rtm_OsTaskInfoEndIdxOfCommonConstType OsTaskInfoEndIdxOfCommonConst;  /**< the end index of the 0:n relation pointing to Rtm_OsTaskInfo */
  Rtm_OsTaskInfoLengthOfCommonConstType OsTaskInfoLengthOfCommonConst;  /**< the number of relations pointing to Rtm_OsTaskInfo */
  Rtm_OsTaskInfoStartIdxOfCommonConstType OsTaskInfoStartIdxOfCommonConst;  /**< the start index of the 0:n relation pointing to Rtm_OsTaskInfo */
  Rtm_PartitionIndexOfCslStringSNVOfCommonConstType PartitionIndexOfCslStringSNVOfCommonConst;  /**< The Core index */
  CONSTP2VAR(Rtm_TaskResponseTimeStructType, AUTOMATIC, RTM_APPL_DATA) TaskResponseTimeDataPtrOfCommonConst;  /**< This ptr defines the var struct of Response Time Data */
} Rtm_CommonConstType;

/**   \brief  type used in Rtm_CpuLoadData */
typedef struct sRtm_CpuLoadDataType
{
  Rtm_CollectedTimeOfCpuLoadDataType CollectedTimeOfCpuLoadData;  /**< Collected Time */
  Rtm_LastTicksOfCpuLoadDataType LastTicksOfCpuLoadData;  /**< Last Ticks */
  Rtm_StartTimeStampOfCpuLoadDataType StartTimeStampOfCpuLoadData;  /**< Start Timestamp */
  Rtm_ThresholdOfCpuLoadDataType ThresholdOfCpuLoadData;  /**< Threshold */
  Rtm_IsCpuLoadMPResultOverflownOfCpuLoadDataType IsCpuLoadMPResultOverflownOfCpuLoadData;  /**< Result Overflown */
  Rtm_MeasurementActiveOfCpuLoadDataType MeasurementActiveOfCpuLoadData;  /**< Measurement Active */
  Rtm_MeasurementWasStoppedOfCpuLoadDataType MeasurementWasStoppedOfCpuLoadData;  /**< Measurement was Stopped */
  Rtm_SendResultOfCpuLoadDataType SendResultOfCpuLoadData;  /**< Send Result */
} Rtm_CpuLoadDataType;

/**   \brief  type used in Rtm_HyperPeriodData */
typedef struct sRtm_HyperPeriodDataType
{
  Rtm_AccumulatedTimeOfHyperPeriodDataType AccumulatedTimeOfHyperPeriodData;  /**< The accumulated time */
  Rtm_MainFunctionCounterOfHyperPeriodDataType MainFunctionCounterOfHyperPeriodData;  /**< MainFunction Counter */
} Rtm_HyperPeriodDataType;

/**   \brief  type used in Rtm_MainFunctionRuntimeData */
typedef struct sRtm_MainFunctionRuntimeDataType
{
  Rtm_AverageOfMainFunctionRuntimeDataType AverageOfMainFunctionRuntimeData;  /**< Average */
  Rtm_DeltaOfMainFunctionRuntimeDataType DeltaOfMainFunctionRuntimeData;  /**< Delta */
  Rtm_LastCallOfMainFunctionRuntimeDataType LastCallOfMainFunctionRuntimeData;  /**< Last Call */
  Rtm_AverageCounterOfMainFunctionRuntimeDataType AverageCounterOfMainFunctionRuntimeData;  /**< AverageCounter */
} Rtm_MainFunctionRuntimeDataType;

/**   \brief  type used in Rtm_OsTaskInfo */
typedef struct sRtm_OsTaskInfoType
{
  Rtm_MaxStackOfOsTaskInfoType MaxStackOfOsTaskInfo;  /**< This is the max stack for this task */
  Rtm_TaskIdOfOsTaskInfoType TaskIdOfOsTaskInfo;  /**< This is the Os TaskId */
} Rtm_OsTaskInfoType;

/** 
  \}
*/ 

/** 
  \defgroup  RtmPCRootPointerTypes  Rtm Root Pointer Types (PRE_COMPILE)
  \brief  These type definitions are used to point from the config root to symbol instances.
  \{
*/ 
/**   \brief  type used to point to Rtm_CommonConst */
typedef P2CONST(Rtm_CommonConstType, TYPEDEF, RTM_CONST) Rtm_CommonConstPtrType;

/**   \brief  type used to point to Rtm_CpuLoadData */
typedef P2VAR(Rtm_CpuLoadDataType, TYPEDEF, RTM_VAR_NO_INIT) Rtm_CpuLoadDataPtrType;

/**   \brief  type used to point to Rtm_CpuLoadTime */
typedef P2VAR(Rtm_CpuLoadTimeType, TYPEDEF, RTM_VAR_NO_INIT) Rtm_CpuLoadTimePtrType;

/**   \brief  type used to point to Rtm_HyperPeriodData */
typedef P2VAR(Rtm_HyperPeriodDataType, TYPEDEF, RTM_VAR_NO_INIT) Rtm_HyperPeriodDataPtrType;

/**   \brief  type used to point to Rtm_MainFunctionRuntimeData */
typedef P2VAR(Rtm_MainFunctionRuntimeDataType, TYPEDEF, RTM_VAR_NO_INIT) Rtm_MainFunctionRuntimeDataPtrType;

/**   \brief  type used to point to Rtm_OsTaskInfo */
typedef P2CONST(Rtm_OsTaskInfoType, TYPEDEF, RTM_CONST) Rtm_OsTaskInfoPtrType;

/** 
  \}
*/ 

/** 
  \defgroup  RtmPCRootValueTypes  Rtm Root Value Types (PRE_COMPILE)
  \brief  These type definitions are used for value representations in root arrays.
  \{
*/ 
/**   \brief  type used in Rtm_PCConfig */
typedef struct sRtm_PCConfigType
{
  uint8 Rtm_PCConfigNeverUsed;  /**< dummy entry for the structure in the configuration variant precompile which is not used by the code. */
} Rtm_PCConfigType;

typedef Rtm_PCConfigType Rtm_ConfigType;  /**< A structure type is present for data in each configuration class. This typedef redefines the probably different name to the specified one. */

/** 
  \}
*/ 


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: SIZEOF DATA TYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL SIMPLE DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL COMPLEX DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
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
extern CONST(Rtm_CommonConstType, RTM_CONST) Rtm_CommonConst[1];
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
extern CONST(Rtm_OsTaskInfoType, RTM_CONST) Rtm_OsTaskInfo[13];
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
extern VAR(Rtm_CpuLoadDataType, RTM_VAR_NO_INIT) Rtm_CpuLoadData[1];
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
extern VAR(Rtm_CpuLoadTimeType, RTM_VAR_NO_INIT) Rtm_CpuLoadTime;
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
extern VAR(Rtm_HyperPeriodDataType, RTM_VAR_NO_INIT) Rtm_HyperPeriodData[1];
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
extern VAR(Rtm_MainFunctionRuntimeDataType, RTM_VAR_NO_INIT) Rtm_MainFunctionRuntimeData[1];
#define RTM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "Rtm_MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/






/* -----------------------------------------------------------------------------
    &&&~ RtmMeasurementPoint
 ----------------------------------------------------------------------------- */

#define RtmConf_RtmMeasurementPoint_Rtm_Overhead_GrossExecutionTime_EnableISRs (0u)
#define RtmConf_RtmMeasurementPoint_Rtm_Overhead_GrossExecutionTime_DisableISRs (1u)
#define RtmConf_RtmMeasurementPoint_CANNM_SID_CONFIRMPNAVAILABILITY (2u)
#define RtmConf_RtmMeasurementPoint_CANNM_SID_GETPDUDATA (3u)
#define RtmConf_RtmMeasurementPoint_CANNM_SID_GETSTATE (4u)
#define RtmConf_RtmMeasurementPoint_CANNM_SID_GETUSERDATA (5u)
#define RtmConf_RtmMeasurementPoint_CANNM_SID_GETVERSIONINFO (6u)
#define RtmConf_RtmMeasurementPoint_CANNM_SID_INIT (7u)
#define RtmConf_RtmMeasurementPoint_CANNM_SID_MAINFUNCTION (8u)
#define RtmConf_RtmMeasurementPoint_CANNM_SID_NETWORKRELEASE (9u)
#define RtmConf_RtmMeasurementPoint_CANNM_SID_NETWORKREQUEST (10u)
#define RtmConf_RtmMeasurementPoint_CANNM_SID_PASSIVESTARTUP (11u)
#define RtmConf_RtmMeasurementPoint_CANNM_SID_RXINDICATION (12u)
#define RtmConf_RtmMeasurementPoint_CANNM_SID_TRANSMIT (13u)
#define RtmConf_RtmMeasurementPoint_CANNM_SID_TXCONFIRMATION (14u)
#define RtmConf_RtmMeasurementPoint_CanInterruptErr (15u)
#define RtmConf_RtmMeasurementPoint_CanInterruptRx (16u)
#define RtmConf_RtmMeasurementPoint_CanInterruptTx (17u)
#define RtmConf_RtmMeasurementPoint_CanInterruptWakeup (18u)
#define RtmConf_RtmMeasurementPoint_Can_30_Core_Init (19u)
#define RtmConf_RtmMeasurementPoint_Can_30_Core_SetControllerMode (20u)
#define RtmConf_RtmMeasurementPoint_Can_30_Core_Write (21u)
#define RtmConf_RtmMeasurementPoint_Can_Init (22u)
#define RtmConf_RtmMeasurementPoint_Can_SetControllerMode (23u)
#define RtmConf_RtmMeasurementPoint_Can_Write (24u)
#define RtmConf_RtmMeasurementPoint_EthTrcv_30_Canoeemu_TransceiverInit (25u)
#define RtmConf_RtmMeasurementPoint_EthTrcv_30_Ethmii_TransceiverInit (26u)
#define RtmConf_RtmMeasurementPoint_Eth_30_Tc3xx_ControllerInit (27u)
#define RtmConf_RtmMeasurementPoint_Eth_ControllerInit (28u)
#define RtmConf_RtmMeasurementPoint_LinIf_Init (29u)
#define RtmConf_RtmMeasurementPoint_LinTp_Init (30u)
#define RtmConf_RtmMeasurementPoint_Lin_Init (31u)
#define RtmConf_RtmMeasurementPoint_Lin_Interrupt (32u)
#define RtmConf_RtmMeasurementPoint_NM_SID_BUSSLEEPMODE (33u)
#define RtmConf_RtmMeasurementPoint_NM_SID_GETPDUDATA (34u)
#define RtmConf_RtmMeasurementPoint_NM_SID_GETSTATE (35u)
#define RtmConf_RtmMeasurementPoint_NM_SID_GETUSERDATA (36u)
#define RtmConf_RtmMeasurementPoint_NM_SID_GETVERSIONINFO (37u)
#define RtmConf_RtmMeasurementPoint_NM_SID_INIT (38u)
#define RtmConf_RtmMeasurementPoint_NM_SID_MAINFUNCTION (39u)
#define RtmConf_RtmMeasurementPoint_NM_SID_NETWORKMODE (40u)
#define RtmConf_RtmMeasurementPoint_NM_SID_NETWORKRELEASE (41u)
#define RtmConf_RtmMeasurementPoint_NM_SID_NETWORKREQUEST (42u)
#define RtmConf_RtmMeasurementPoint_NM_SID_NETWORKSTARTINDICATION (43u)
#define RtmConf_RtmMeasurementPoint_NM_SID_PASSIVESTARTUP (44u)
#define RtmConf_RtmMeasurementPoint_NM_SID_PDURXINDICATION (45u)
#define RtmConf_RtmMeasurementPoint_NM_SID_PREPAREBUSSLEEPMODE (46u)
#define RtmConf_RtmMeasurementPoint_NM_SID_STATECHANGENOTIFICATION (47u)
#define RtmConf_RtmMeasurementPoint_NM_SID_TXTIMEOUTEXCEPTION (48u)
#define RtmConf_RtmMeasurementPoint_Rte_Runnable_RT_VehComm_CPU_Load_Test_Runnable (49u)
#define RtmConf_RtmMeasurementPoint_Rte_Runnable_RT_VehComm_RT_VehComm_Main (50u)
#define RtmConf_RtmMeasurementPoint_Rtm_CpuLoadMeasurement (51u)
#define RtmConf_RtmMeasurementPoint_SchM_Schedulable_Com_Com_MainFunctionRx_ComMainFunctionRx (52u)
#define RtmConf_RtmMeasurementPoint_SchM_Schedulable_Com_Com_MainFunctionTx_ComMainFunctionTx (53u)
#define RtmConf_RtmMeasurementPoint_Sd_EventServer_Process (54u)
#define RtmConf_RtmMeasurementPoint_Sd_RxIndication (55u)
#define RtmConf_RtmMeasurementPoint_Sd_State_HandleRunMode (56u)
#define RtmConf_RtmMeasurementPoint_Sd_State_Process__ClientSMs (57u)
#define RtmConf_RtmMeasurementPoint_Sd_State_Process__ServerSMs (58u)
#define RtmConf_RtmMeasurementPoint_Sd_Tx_ProcessPendingMessages (59u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_DISABLECOMMUNICATION (60u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_ENABLECOMMUNICATION (61u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_GETLOCALNODEIDENTIFIER (62u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_GETNODEIDENTIFIER (63u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_GETPDUDATA (64u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_GETSTATE (65u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_GETUSERDATA (66u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_GETVERSIONINFO (67u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_INIT (68u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_MAINFUNCTION (69u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_NETWORKRELEASE (70u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_NETWORKREQUEST (71u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_PASSIVESTARTUP (72u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_RXINDICATION (73u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_TRANSMIT (74u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_TRIGGERTRANSMIT (75u)
#define RtmConf_RtmMeasurementPoint_UDPNM_SID_TXCONFIRMATION (76u)
#define RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash (77u)
#define RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_MacTrainingCounter (78u)
#define RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_PublicKeyHash_Cert (79u)
#define RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_PublicKeyHash_Data (80u)
#define RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_PublicKeyHash_Public (81u)
#define RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Priv_NIST_N (82u)
#define RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Priv_NIST_P (83u)
#define RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Priv_Other (84u)
#define RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Sym128 (85u)
#define RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Sym256 (86u)
#define RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Sym_Other (87u)
#define RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_XorData (88u)
#define RtmConf_RtmMeasurementPoint_VKMS_CheckVerificationHash (89u)
#define RtmConf_RtmMeasurementPoint_VKMS_GetIdentityHash (90u)
#define RtmConf_RtmMeasurementPoint_VKMS_GetIdentityHash_HashFazitID (91u)
#define RtmConf_RtmMeasurementPoint_VKMS_GetIdentityHash_HashVerificationHash (92u)
#define RtmConf_RtmMeasurementPoint_VKMS_GetPssHash (93u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc (94u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_1_DeriveDlcDecryptionKey (95u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_2_DecryptDlc (96u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys (97u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_DeriveKey_Priv_NIST_N (98u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_DeriveKey_Priv_NIST_P (99u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_DeriveKey_Sym128 (100u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_DeriveKey_Sym256 (101u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Cert (102u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Data (103u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_NIST_N (104u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_NIST_P (105u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_Other (106u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Public (107u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym128 (108u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym256 (109u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym_Other (110u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_4_CheckVerificationHash (111u)
#define RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_NvmWrite (112u)
#define RtmConf_RtmMeasurementPoint_VKMS_Init (113u)
#define RtmConf_RtmMeasurementPoint_VKMS_MainFunction (114u)
#define RtmConf_RtmMeasurementPoint_Xcp_Event (115u)
#define RtmConf_RtmMeasurementPoint_Xcp_Init (116u)
#define RtmConf_RtmMeasurementPoint_Xcp_MainFunction (117u)
#define RtmConf_RtmMeasurementPoint_Xcp_TlRxIndication (118u)
#define RtmConf_RtmMeasurementPoint_Xcp_TlTxConfirmation (119u)
#define RtmConf_RtmMeasurementPoint_vCan_30_Mcan_InterruptBusoff (120u)
#define RtmConf_RtmMeasurementPoint_vCan_30_Mcan_InterruptRx (121u)
#define RtmConf_RtmMeasurementPoint_vCan_30_Mcan_InterruptTx (122u)

/* -----------------------------------------------------------------------------
    &&&~ CONFIGURATION DEFINES
 ----------------------------------------------------------------------------- */

#define RTM_CONTROL                            STD_OFF

#define RTM_MEASUREMENT_MAX_VAL                (0xFFFFFFFFu)
#define RTM_USE_32BIT_TIMER                    STD_ON
#define RTM_TICKS_PER_MILISECOND               0x000186A0u
#define RTM_TICKS_PER_MICROSECOND              0x00000064u
#define RTM_MAINFCT_CYCLE_TIME                 0x0000000Au

#define RTM_DEV_ERROR_DETECT                   STD_ON
#define RTM_DEV_ERROR_REPORT                   STD_ON
#define RTM_TIME_MEASUREMENT                   STD_ON
#define RTM_CTR_DIRECTION                      RTM_UP

#define RTM_CTRL_VECTOR_LEN                    0x0000000Cu
#define RTM_NUMBER_OF_CONFIGURED_MPS           0x0000007Bu
#define RTM_NUMBER_OF_ACTIVATED_MPS            0x0000005Au

#define RTM_GET_TIME_MEASUREMENT_FCT           Rtm_GetTimeMeasurement
#define EV_RTM                                 XcpConf_XcpEventChannel_Rtm_Evt  

#define RTM_TIMER_OVERRUN_SUPPORT              STD_OFF 
#define RTM_NET_RUNTIME_SUPPORT                STD_OFF
#define RTM_GROSS_EXECUTION_TIME_AVAILABLE     STD_ON
#define RTM_FLAT_EXECUTION_TIME_AVAILABLE      STD_OFF
#define RTM_NET_EXECUTION_TIME_AVAILABLE       STD_OFF
#define RTM_NESTING_COUNTER                    STD_ON

#define RTM_NUMBER_OF_TASKS                    17u
#define RTM_NUMBER_OF_ISRS                     6u
#define RTM_NUMBER_OF_THREADS                  (RTM_NUMBER_OF_TASKS + RTM_NUMBER_OF_ISRS)
#define RTM_NUMBER_OF_CORES                    1u

#define RTM_MULTICORE_SUPPORT                  STD_OFF
#define RTM_BSW_CORE                           0u
#define RTM_CROSS_CORE_SUPPORT                 STD_OFF
#define RTM_MASK_OF_USED_CORES                 0x00000001u
#define RTM_NUMBER_OF_DISABLED_INT             0x00000001u

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Rtm_Overhead_GrossExecutionTime_EnableISRs  { \
      if ((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000000u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Rtm_Overhead_GrossExecutionTime_EnableISRs  { \
      if (((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000000u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000000u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Rtm_Overhead_GrossExecutionTime_DisableISRs  { \
      if ((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_1(); \
        Rtm_StartMP((uint32)0x00000001u /* measurementId */); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Rtm_Overhead_GrossExecutionTime_DisableISRs  { \
      if (((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000001u /* measurementId */)]) ){ \
        Rtm_StopMP((uint32)0x00000001u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_1(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_CANNM_SID_CONFIRMPNAVAILABILITY  { \
      if ((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000002u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CANNM_SID_CONFIRMPNAVAILABILITY  { \
      if (((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000002u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000002u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_CANNM_SID_GETPDUDATA 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CANNM_SID_GETPDUDATA 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_CANNM_SID_GETSTATE 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CANNM_SID_GETSTATE 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_CANNM_SID_GETUSERDATA 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CANNM_SID_GETUSERDATA 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_CANNM_SID_GETVERSIONINFO  { \
      if ((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000003u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CANNM_SID_GETVERSIONINFO  { \
      if (((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000003u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000003u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_CANNM_SID_INIT 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CANNM_SID_INIT 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_CANNM_SID_MAINFUNCTION 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CANNM_SID_MAINFUNCTION 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_CANNM_SID_NETWORKRELEASE 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CANNM_SID_NETWORKRELEASE 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_CANNM_SID_NETWORKREQUEST 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CANNM_SID_NETWORKREQUEST 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_CANNM_SID_PASSIVESTARTUP 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CANNM_SID_PASSIVESTARTUP 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_CANNM_SID_RXINDICATION 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CANNM_SID_RXINDICATION 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_CANNM_SID_TRANSMIT 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CANNM_SID_TRANSMIT 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_CANNM_SID_TXCONFIRMATION  { \
      if ((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000004u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CANNM_SID_TXCONFIRMATION  { \
      if (((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000004u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000004u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_CanInterruptErr  { \
      if ((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000005u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CanInterruptErr  { \
      if (((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000005u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000005u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_CanInterruptRx  { \
      if ((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000006u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CanInterruptRx  { \
      if (((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000006u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000006u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_CanInterruptTx  { \
      if ((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000007u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CanInterruptTx  { \
      if (((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000000u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000007u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000007u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_CanInterruptWakeup  { \
      if ((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000008u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_CanInterruptWakeup  { \
      if (((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000008u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000008u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Can_30_Core_Init  { \
      if ((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000009u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Can_30_Core_Init  { \
      if (((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000009u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000009u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Can_30_Core_SetControllerMode  { \
      if ((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000000Au /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Can_30_Core_SetControllerMode  { \
      if (((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000000Au /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000000Au /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Can_30_Core_Write  { \
      if ((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000000Bu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Can_30_Core_Write  { \
      if (((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000000Bu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000000Bu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Can_Init  { \
      if ((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000000Cu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Can_Init  { \
      if (((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000000Cu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000000Cu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Can_SetControllerMode  { \
      if ((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000000Du /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Can_SetControllerMode  { \
      if (((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000000Du /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000000Du /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Can_Write  { \
      if ((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000000Eu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Can_Write  { \
      if (((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000000Eu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000000Eu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_EthTrcv_30_Canoeemu_TransceiverInit 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_EthTrcv_30_Canoeemu_TransceiverInit 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_EthTrcv_30_Ethmii_TransceiverInit  { \
      if ((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000000Fu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_EthTrcv_30_Ethmii_TransceiverInit  { \
      if (((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000001u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000000Fu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000000Fu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Eth_30_Tc3xx_ControllerInit  { \
      if ((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000010u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Eth_30_Tc3xx_ControllerInit  { \
      if (((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000010u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000010u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Eth_ControllerInit 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Eth_ControllerInit 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_LinIf_Init 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_LinIf_Init 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_LinTp_Init 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_LinTp_Init 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_Lin_Init 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Lin_Init 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_Lin_Interrupt  { \
      if ((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000011u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Lin_Interrupt  { \
      if (((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000011u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000011u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_BUSSLEEPMODE 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_BUSSLEEPMODE 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_GETPDUDATA 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_GETPDUDATA 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_GETSTATE 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_GETSTATE 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_GETUSERDATA 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_GETUSERDATA 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_GETVERSIONINFO  { \
      if ((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000012u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_GETVERSIONINFO  { \
      if (((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000012u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000012u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_INIT  { \
      if ((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000013u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_INIT  { \
      if (((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000013u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000013u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_MAINFUNCTION 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_MAINFUNCTION 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_NETWORKMODE 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_NETWORKMODE 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_NETWORKRELEASE 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_NETWORKRELEASE 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_NETWORKREQUEST 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_NETWORKREQUEST 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_NETWORKSTARTINDICATION 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_NETWORKSTARTINDICATION 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_PASSIVESTARTUP 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_PASSIVESTARTUP 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_PDURXINDICATION  { \
      if ((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000014u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_PDURXINDICATION  { \
      if (((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000014u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000014u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_PREPAREBUSSLEEPMODE 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_PREPAREBUSSLEEPMODE 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_STATECHANGENOTIFICATION 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_STATECHANGENOTIFICATION 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_NM_SID_TXTIMEOUTEXCEPTION 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_NM_SID_TXTIMEOUTEXCEPTION 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_Rte_Runnable_RT_VehComm_CPU_Load_Test_Runnable  { \
      if ((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000015u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Rte_Runnable_RT_VehComm_CPU_Load_Test_Runnable  { \
      if (((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000015u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000015u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Rte_Runnable_RT_VehComm_RT_VehComm_Main  { \
      if ((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000016u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Rte_Runnable_RT_VehComm_RT_VehComm_Main  { \
      if (((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000016u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000016u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Rtm_CpuLoadMeasurement  { \
      if ((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) { \
        Rtm_StartMP((uint32)0x00000017u /* measurementId */); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Rtm_CpuLoadMeasurement  { \
      if (((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000017u /* measurementId */)]) ){ \
        Rtm_StopMP((uint32)0x00000017u /* measurementId */); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_SchM_Schedulable_Com_Com_MainFunctionRx_ComMainFunctionRx  { \
      if ((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000018u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_SchM_Schedulable_Com_Com_MainFunctionRx_ComMainFunctionRx  { \
      if (((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000018u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000018u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_SchM_Schedulable_Com_Com_MainFunctionTx_ComMainFunctionTx  { \
      if ((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000019u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_SchM_Schedulable_Com_Com_MainFunctionTx_ComMainFunctionTx  { \
      if (((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000019u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000019u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Sd_EventServer_Process  { \
      if ((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000001Au /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Sd_EventServer_Process  { \
      if (((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000001Au /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000001Au /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Sd_RxIndication  { \
      if ((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000001Bu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Sd_RxIndication  { \
      if (((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000001Bu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000001Bu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Sd_State_HandleRunMode  { \
      if ((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000001Cu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Sd_State_HandleRunMode  { \
      if (((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000001Cu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000001Cu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Sd_State_Process__ClientSMs  { \
      if ((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000001Du /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Sd_State_Process__ClientSMs  { \
      if (((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000001Du /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000001Du /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Sd_State_Process__ServerSMs  { \
      if ((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000001Eu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Sd_State_Process__ServerSMs  { \
      if (((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000001Eu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000001Eu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Sd_Tx_ProcessPendingMessages  { \
      if ((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000001Fu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Sd_Tx_ProcessPendingMessages  { \
      if (((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000003u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000001Fu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000001Fu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_DISABLECOMMUNICATION  { \
      if ((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000020u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_DISABLECOMMUNICATION  { \
      if (((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000020u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000020u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_ENABLECOMMUNICATION  { \
      if ((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000021u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_ENABLECOMMUNICATION  { \
      if (((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000021u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000021u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_GETLOCALNODEIDENTIFIER  { \
      if ((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000022u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_GETLOCALNODEIDENTIFIER  { \
      if (((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000022u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000022u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_GETNODEIDENTIFIER  { \
      if ((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000023u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_GETNODEIDENTIFIER  { \
      if (((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000023u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000023u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_GETPDUDATA  { \
      if ((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000024u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_GETPDUDATA  { \
      if (((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000024u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000024u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_GETSTATE  { \
      if ((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000025u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_GETSTATE  { \
      if (((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000025u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000025u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_GETUSERDATA  { \
      if ((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000026u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_GETUSERDATA  { \
      if (((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000026u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000026u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_GETVERSIONINFO  { \
      if ((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000027u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_GETVERSIONINFO  { \
      if (((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000004u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000027u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000027u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_INIT  { \
      if ((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000028u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_INIT  { \
      if (((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000028u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000028u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_MAINFUNCTION  { \
      if ((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000029u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_MAINFUNCTION  { \
      if (((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000029u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000029u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_NETWORKRELEASE  { \
      if ((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000002Au /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_NETWORKRELEASE  { \
      if (((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000002Au /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000002Au /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_NETWORKREQUEST  { \
      if ((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000002Bu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_NETWORKREQUEST  { \
      if (((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000002Bu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000002Bu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_PASSIVESTARTUP  { \
      if ((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000002Cu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_PASSIVESTARTUP  { \
      if (((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000002Cu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000002Cu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_RXINDICATION  { \
      if ((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000002Du /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_RXINDICATION  { \
      if (((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000002Du /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000002Du /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_TRANSMIT  { \
      if ((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000002Eu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_TRANSMIT  { \
      if (((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000002Eu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000002Eu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_TRIGGERTRANSMIT  { \
      if ((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000002Fu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_TRIGGERTRANSMIT  { \
      if (((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000005u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000002Fu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000002Fu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_UDPNM_SID_TXCONFIRMATION  { \
      if ((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000030u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_UDPNM_SID_TXCONFIRMATION  { \
      if (((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000030u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000030u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash  { \
      if ((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000031u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash  { \
      if (((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000031u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000031u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_MacTrainingCounter  { \
      if ((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000032u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_MacTrainingCounter  { \
      if (((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000032u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000032u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_PublicKeyHash_Cert  { \
      if ((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000033u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_PublicKeyHash_Cert  { \
      if (((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000033u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000033u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_PublicKeyHash_Data  { \
      if ((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000034u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_PublicKeyHash_Data  { \
      if (((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000034u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000034u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_PublicKeyHash_Public  { \
      if ((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000035u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_PublicKeyHash_Public  { \
      if (((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000035u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000035u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Priv_NIST_N  { \
      if ((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000036u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Priv_NIST_N  { \
      if (((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000036u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000036u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Priv_NIST_P  { \
      if ((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000037u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Priv_NIST_P  { \
      if (((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000006u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000037u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000037u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Priv_Other  { \
      if ((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000038u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Priv_Other  { \
      if (((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000038u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000038u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Sym128  { \
      if ((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000039u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Sym128  { \
      if (((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000039u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000039u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Sym256  { \
      if ((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000003Au /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Sym256  { \
      if (((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000003Au /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000003Au /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Sym_Other  { \
      if ((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000003Bu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_SecretKeyHash_Sym_Other  { \
      if (((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000003Bu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000003Bu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_XorData  { \
      if ((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000003Cu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_CalcVerificationHash_XorData  { \
      if (((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000003Cu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000003Cu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_CheckVerificationHash  { \
      if ((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000003Du /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_CheckVerificationHash  { \
      if (((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000003Du /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000003Du /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_GetIdentityHash  { \
      if ((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000003Eu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_GetIdentityHash  { \
      if (((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000003Eu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000003Eu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_GetIdentityHash_HashFazitID  { \
      if ((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000003Fu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_GetIdentityHash_HashFazitID  { \
      if (((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000007u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000003Fu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000003Fu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_GetIdentityHash_HashVerificationHash  { \
      if ((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000040u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_GetIdentityHash_HashVerificationHash  { \
      if (((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000040u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000040u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_GetPssHash  { \
      if ((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000041u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_GetPssHash  { \
      if (((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000041u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000041u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc  { \
      if ((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000042u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc  { \
      if (((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000042u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000042u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_1_DeriveDlcDecryptionKey  { \
      if ((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000043u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_1_DeriveDlcDecryptionKey  { \
      if (((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000043u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000043u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_2_DecryptDlc  { \
      if ((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000044u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_2_DecryptDlc  { \
      if (((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000044u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000044u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys  { \
      if ((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000045u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys  { \
      if (((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000045u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000045u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_DeriveKey_Priv_NIST_N  { \
      if ((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000046u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_DeriveKey_Priv_NIST_N  { \
      if (((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000046u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000046u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_DeriveKey_Priv_NIST_P  { \
      if ((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000047u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_DeriveKey_Priv_NIST_P  { \
      if (((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000008u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000047u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000047u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_DeriveKey_Sym128  { \
      if ((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000048u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_DeriveKey_Sym128  { \
      if (((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000048u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000048u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_DeriveKey_Sym256  { \
      if ((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000049u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_DeriveKey_Sym256  { \
      if (((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000049u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000049u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Cert  { \
      if ((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000004Au /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Cert  { \
      if (((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000004Au /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000004Au /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Data  { \
      if ((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000004Bu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Data  { \
      if (((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000004Bu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000004Bu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_NIST_N  { \
      if ((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000004Cu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_NIST_N  { \
      if (((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000004Cu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000004Cu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_NIST_P  { \
      if ((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000004Du /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_NIST_P  { \
      if (((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000004Du /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000004Du /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_Other  { \
      if ((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000004Eu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Priv_Other  { \
      if (((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000004Eu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000004Eu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Public  { \
      if ((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x0000004Fu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Public  { \
      if (((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x00000009u /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x0000004Fu /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x0000004Fu /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym128  { \
      if ((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000050u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym128  { \
      if (((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000050u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000050u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym256  { \
      if ((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000051u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym256  { \
      if (((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000051u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000051u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym_Other  { \
      if ((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000052u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_3_HandleKeys_StorePlainKey_Sym_Other  { \
      if (((0x04u) == ((0x04u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000052u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000052u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_4_CheckVerificationHash  { \
      if ((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000053u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_4_CheckVerificationHash  { \
      if (((0x08u) == ((0x08u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000053u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000053u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_NvmWrite  { \
      if ((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000054u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_HandleDlc_NvmWrite  { \
      if (((0x10u) == ((0x10u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000054u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000054u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_Init  { \
      if ((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000055u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_Init  { \
      if (((0x20u) == ((0x20u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000055u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000055u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_VKMS_MainFunction  { \
      if ((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000056u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_VKMS_MainFunction  { \
      if (((0x40u) == ((0x40u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000056u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000056u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_Xcp_Event 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Xcp_Event 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_Xcp_Init 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Xcp_Init 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_Xcp_MainFunction 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Xcp_MainFunction 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_Xcp_TlRxIndication 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Xcp_TlRxIndication 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_Xcp_TlTxConfirmation 
#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_Xcp_TlTxConfirmation 
#define Rtm_Start_RtmConf_RtmMeasurementPoint_vCan_30_Mcan_InterruptBusoff  { \
      if ((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000057u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_vCan_30_Mcan_InterruptBusoff  { \
      if (((0x80u) == ((0x80u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Au /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000057u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000057u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_vCan_30_Mcan_InterruptRx  { \
      if ((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Bu /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000058u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_vCan_30_Mcan_InterruptRx  { \
      if (((0x01u) == ((0x01u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Bu /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000058u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000058u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define Rtm_Start_RtmConf_RtmMeasurementPoint_vCan_30_Mcan_InterruptTx  { \
      if ((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Bu /* ctrlVecIndex */)])) { \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StartMP((uint32)0x00000059u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }

#define  Rtm_Stop_RtmConf_RtmMeasurementPoint_vCan_30_Mcan_InterruptTx  { \
      if (((0x02u) == ((0x02u /* ctrlMask */) & Rtm_Ctrl[(0x0000000Bu /* ctrlVecIndex */)])) && (0 < Rtm_MeasurementNestingCtr[(0x00000059u /* measurementId */)]) ){ \
        SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
        Rtm_StopMP((uint32)0x00000059u /* measurementId */); \
        SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      } \
  }


/**********************************************************************************************************************
 * Rtm_Start_CpuLoadMeasurement
 *********************************************************************************************************************/
/*! \fn Rtm_Start_CpuLoadMeasurement
 *  \brief       Starts the cpu load measurement.
 *  \details     -
 *  \context     TASK|ISR2
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \pre         -
 *  \ingroup     cpuLoad
 *********************************************************************************************************************/
#define Rtm_Start_CpuLoadMeasurement() { \
      Rtm_SetMeasurementActiveOfCpuLoadData(0u, TRUE); \
      Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)] |= 0x80u; \
  }

/**********************************************************************************************************************
 * Rtm_Stop_CpuLoadMeasurement
 *********************************************************************************************************************/
/*! \fn Rtm_Stop_CpuLoadMeasurement
 *  \brief       Stops the cpu load measurement.
 *  \details     -
 *  \context     TASK|ISR2
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \pre         -
 *  \ingroup     cpuLoad
 *********************************************************************************************************************/
#define Rtm_Stop_CpuLoadMeasurement() { \
      SchM_Enter_Rtm_RTM_EXCLUSIVE_AREA_0(); \
      if (Rtm_IsMeasurementActiveOfCpuLoadData(0u)) { \
        Rtm_SetMeasurementActiveOfCpuLoadData(0u, FALSE); \
        Rtm_SetMeasurementWasStoppedOfCpuLoadData(0u, 0x01u); \
        Rtm_Ctrl[(0x00000002u /* ctrlVecIndex */)] &= 0x7Fu; \
      } \
      SchM_Exit_Rtm_RTM_EXCLUSIVE_AREA_0(); \
  }



#ifndef OS_VTH_SCHEDULE
/**********************************************************************************************************************
 * OS_VTH_SCHEDULE
 *********************************************************************************************************************/
/*! \fn OS_VTH_SCHEDULE
 *  \brief       Handles runtime measurement of task response time MPs and CPU load MPs.
 *  \details     Calls Rtm_Schedule if any MP is of type flat or net execution time.
 *  \param[in]   FromThreadId            The thread which is stopped/preempted.
 *  \param[in]   FromThreadReason        The reason why the thread is stopped/preempted.
 *  \param[in]   ToThreadId              The thread which is started.
 *  \param[in]   ToThreadReason          The reason why the thread is started.
 *  \param[in]   CallerCoreId            The core on which the context switch is executed.
 *  \context     ANY
 *  \reentrant   TRUE for different CallerCoreId
 *  \synchronous TRUE
 *  \pre         -
 *  \ingroup     measurement
 *********************************************************************************************************************/
# define OS_VTH_SCHEDULE(FromThreadId, FromThreadReason, ToThreadId, ToThreadReason, CallerCoreId) { \
    (void)FromThreadId; (void)FromThreadReason; (void)ToThreadId; (void)ToThreadReason; (void)CallerCoreId; \
    switch (FromThreadReason) { \
      case(OS_VTHP_TASK_TERMINATION): \
      case(OS_VTHP_TASK_WAITEVENT): \
      case(OS_VTHP_THREAD_PREEMPT): \
      { \
        switch (FromThreadId) \
        { \
           case (BswBackgroundTask): { Rtm_Start(RtmConf_RtmMeasurementPoint_Rtm_CpuLoadMeasurement); } break; \
           default: break; \
        } \
      } break; \
      default: break; \
    } \
    switch (ToThreadReason) { \
      case(OS_VTHP_TASK_ACTIVATION): \
      case(OS_VTHP_TASK_SETEVENT): \
      case(OS_VTHP_THREAD_RESUME): \
      { \
        switch (ToThreadId) \
        { \
           case (BswBackgroundTask): { Rtm_Stop(RtmConf_RtmMeasurementPoint_Rtm_CpuLoadMeasurement); } break; \
           default: break; \
        } \
      } break; \
      default: break; \
    } \
}
#endif



/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

# define RTM_START_SEC_CODE
# include "Rtm_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Rtm_SetCpuLoadTimeOfCore()
 *********************************************************************************************************************/
/*! \brief       Sets the cpu load time of core to new value.
 *  \details     -
 *  \param[in]   CoreIndex               The core index for which the cpu load is set.
 *  \param[in]   NewCpuLoadTime          The new value for the cpu load.
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \pre         -
 *  \ingroup     cpuLoad
 *********************************************************************************************************************/
FUNC(void, RTM_CODE) Rtm_SetCpuLoadTimeOfCore(const uint16 CoreIndex, const uint32 NewCpuLoadTime);

/**********************************************************************************************************************
 * Rtm_GetCpuLoadTimeOfCore()
 *********************************************************************************************************************/
/*! \brief       Gets the cpu load time of core.
 *  \details     -
 *  \param[in]   CoreIndex               The core index for which the cpu load is set.
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \pre         -
 *  \ingroup     cpuLoad
 *********************************************************************************************************************/
FUNC(uint32, RTM_CODE) Rtm_GetCpuLoadTimeOfCore(const uint16 CoreIndex);

# define RTM_STOP_SEC_CODE
# include "Rtm_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

 
/* -----------------------------------------------------------------------------
    &&&~ User Config File content
 ----------------------------------------------------------------------------- */
 
/* User Config File Start */
// #undefs of redefined #defines due to double usage of Rtm and Can_30_Core 

#undef RtmConf_RtmMeasurementPoint_Can_Write
#undef RtmConf_RtmMeasurementPoint_CanInterruptErr
#undef RtmConf_RtmMeasurementPoint_CanInterruptRx
#undef RtmConf_RtmMeasurementPoint_CanInterruptTx
#undef RtmConf_RtmMeasurementPoint_CanInterruptWakeup
#undef RtmConf_RtmMeasurementPoint_Can_Init
#undef RtmConf_RtmMeasurementPoint_Can_SetControllerMode     
/* User Config File End */


#endif /* RTM_CFG_H */


