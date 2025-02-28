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
 *            Module: NvM
 *           Program: MSR_Vector_SLP4
 *          Customer: AUTOSAR 4 Evaluation Bundle
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397XA B-Step
 *    License Scope : The usage is restricted to CBD2201090_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: NvM_Cfg.h
 *   Generation Time: 2024-09-30 14:06:44
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


/* PRQA S 5087 MemMap */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * PROTECTION AGAINST MULTIPLE INCLUSION
 *********************************************************************************************************************/
/* public section - to be used by NvM itself and its users */
#if (!defined NVM_CFG_H_PUBLIC)
#define NVM_CFG_H_PUBLIC

/**********************************************************************************************************************
 * VERSION IDENTIFICATION
 *********************************************************************************************************************/
#define NVM_CFG_MAJOR_VERSION    (9u)
#define NVM_CFG_MINOR_VERSION    (2u)
#define NVM_CFG_PATCH_VERSION    (0u)

/**********************************************************************************************************************
 * NVM API TYPE INCLUDES
 *********************************************************************************************************************/
#include "NvM_Types.h"

/**********************************************************************************************************************
 * API CFG TYPE DEFINITIONS
 *********************************************************************************************************************/
/* Type for an the additional published parameter Compiled Configuration ID (see CompiledConfigurationId in NvM.h). */
/* Compiled Config Id Type */
typedef union
{ /* PRQA S 0750 */ /* MD_MSR_Union */
    uint16 Word_u16;
    uint8  Bytes_au8[2u];
} NvM_CompiledConfigIdType;

/**********************************************************************************************************************
 * CFG COMMON PARAMETER
 *********************************************************************************************************************/
/* --------------------  DEVELOPMENT / PRODUCTION MODE -------------------- */
/* switch between Debug- or Production-Mode */
#define NVM_DEV_ERROR_DETECT                  (STD_ON)

/* Preprocessor switch that is used in NvM_ReadAll() */
#define NVM_DYNAMIC_CONFIGURATION             (STD_OFF)

#define NVM_API_CONFIG_CLASS_1                (1u)
#define NVM_API_CONFIG_CLASS_2                (3u)
#define NVM_API_CONFIG_CLASS_3                (7u)

#define NVM_API_CONFIG_CLASS                  (NVM_API_CONFIG_CLASS_2)

#define NVM_JOB_PRIORISATION                  STD_OFF

/* define compiled Block ID */
#define NVM_COMPILED_CONFIG_ID                (1u)

/* switch for enablinig fast mode during multi block requests */
#define NVM_DRV_MODE_SWITCH                   (STD_ON)

/* switch for enablinig polling mode and disabling notifications */
#define NVM_POLLING_MODE                      (STD_ON)

/* switch for enabling the internal buffer for data integrity handling */
#define NVM_DATA_INTEGRITY_INT_BUFFER         (STD_ON)

/* number of defined NV blocks */
#define NVM_TOTAL_NUM_OF_NVRAM_BLOCKS         (32u)

/* internal buffer size */
#define NVM_INTERNAL_BUFFER_LENGTH            4098u

/* internal immediate data buffer size */
/* No block with immediate data buffer handling is configured. The minimal size of the immediate data buffer is one. 
   An array of size zero would lead to undefined behavior. */
#define NVM_INTERNAL_IMMEDIATE_DATA_BUFFER_LENGTH  (1u)

/* version info api switch */
#define NVM_VERSION_INFO_API                  (STD_ON)

/* switch to enable the ram block status api */
#define NVM_SET_RAM_BLOCK_STATUS_API          (STD_ON)

/* switch that gives the user (EcuM) the possibility to time-out WriteAll cancellation */
#define NVM_KILL_WRITEALL_API                 (STD_ON)

/* enabled or disable the whole repair redundant blocks feature */
#define NVM_REPAIR_REDUNDANT_BLOCKS_API       (STD_OFF)

/* switch to enable the pre readall api to be able to split the readall into two phases */
#define NVM_PRE_READALL_API                   (STD_OFF)

/* NVM does not need this macro. It is intended for underlying modules,
 * relying on its existence
 */
#define NVM_DATASET_SELECTION_BITS            (6u)

/* switch for enabling the job forwading from the application to the memory core */
#define  NVM_JOB_FORWARDING_TO_MEMORY_CORE    (STD_OFF) 

/* block offset for DCM blocks */
#define NVM_DCM_BLOCK_OFFSET                  0x8000u

/* Enabled if at least one block used NvMCalcRamblockCrc and ExplicitSync mechanisms */
#define NVM_CRC_USE_INTERNAL_EXPLICIT_SYNC_BUFFER (STD_OFF)


/* Enabled if at least one block used immediate data */
#define NVM_INTERNAL_IMMEDIATE_DATA_BUFFER  (STD_OFF)

/* returns corresponding DCM BlockId of an original NVRAM Block */
#define NvM_GetDcmBlockId(MyApplBlockId)      ((MyApplBlockId) | NVM_DCM_BLOCK_OFFSET) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/* BlockId's:
 * Note: The numbers of the following list must meet the configured blocks in the NvM_BlockDescriptorTable_at
 *
 * Alignment of the handles of all blocks
 * Id 0 is reserved for multiblock calls
 * Id 1 is reserved for config ID
 */
#define NvMConf___MultiBlockRequest (0u) 
#define NvMConf_NvMBlockDescriptor_NvMConfigBlock (1u) 
#define NvMConf_NvMBlockDescriptor_DemAdminDataBlock (2u) 
#define NvMConf_NvMBlockDescriptor_CryptoKeyStorage (3u) 
#define NvMConf_NvMBlockDescriptor_StartApplication_NvMBlock2 (4u) 
#define NvMConf_NvMBlockDescriptor_StartApplication_NvMBlock1 (5u) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock0 (6u) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock1 (7u) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock2 (8u) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock3 (9u) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock4 (10u) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock5 (11u) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock6 (12u) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock7 (13u) 
#define NvMConf_NvMBlockDescriptor_vFotaH_NvMModuleInfo (14u) 
#define NvMConf_NvMBlockDescriptor_vSwUpdM_Appl_NvModuleInfo (15u) 
#define NvMConf_NvMBlockDescriptor_vSwUpdM_Appl_NvPartitionInfo (16u) 
#define NvMConf_NvMBlockDescriptor_vSwUpdM_Appl_NvRegionInfo (17u) 
#define NvMConf_NvMBlockDescriptor_vSwUpdM_Appl_NvResumeInfo (18u) 
#define NvMConf_NvMBlockDescriptor_vSwUpdM_Appl_NvSegmentAttributes (19u) 
#define NvMConf_NvMBlockDescriptor_vSwUpdM_Appl_NvSegmentCount (20u) 
#define NvMConf_NvMBlockDescriptor_vSwUpdM_Appl_NvSegmentWriteAddress (21u) 
#define NvMConf_NvMBlockDescriptor_vSwUpdM_Appl_NvUpdateState (22u) 
#define NvMConf_NvMBlockDescriptor_DemStatusDataBlock (23u) 
#define NvMConf_NvMBlockDescriptor_NvMBlock_0x0250 (24u) 
#define NvMConf_NvMBlockDescriptor_NvMBlock_0xF18F (25u) 
#define NvMConf_NvMBlockDescriptor_CddNpmGen2_MeasurementsType (26u) 
#define NvMConf_NvMBlockDescriptor_SfdA_LogData (27u) 
#define NvMConf_NvMBlockDescriptor_VKMS_NvRamBlock (28u) 
#define NvMConf_NvMBlockDescriptor_SfdA_PersistentData (29u) 
#define NvMConf_NvMBlockDescriptor_SokFm_SokFunction (30u) 
#define NvMConf_NvMBlockDescriptor_NvMBlock_TestBlockDataSet (31u) 


/* CONST_DESCRIPTOR_TABLE contains all block relevant data, including the compiled config ID
 */
#define NVM_START_SEC_CONST_UNSPECIFIED
#include "NvM_MemMap.h"

/* Additional published parameter because e.g. in case of validate all RAM
 * Blocks it is nice to know the number of Blocks. But take care: this number
 * of Blocks includes Block 0 and Block 1, which are the MultiBlock and the
 * Configuration Block - user Blocks start wiht index 2!
 */
extern CONST(NvM_BlockIdType, NVM_PUBLIC_CONST) NvM_NoOfBlockIds_t;

/* Additional published parameter because in case of a clear EEPROM, it is
 * necessary, to write the Configuration Block containing this Compiled
 * Configuration ID to EEPROM
 */
/* Compiled Configuration ID as defined in NvM_Cfg.c */
extern CONST(NvM_CompiledConfigIdType, NVM_PUBLIC_CONST) NvM_CompiledConfigId_t; /* PRQA S 0759 */ /* MD_MSR_Union */

#define NVM_STOP_SEC_CONST_UNSPECIFIED
#include "NvM_MemMap.h"

/* Component define block (available, if EcuC module is active, otherwise only NVM_DUMMY_STATEMENTs are defined*/
#ifndef NVM_USE_DUMMY_STATEMENT
#define NVM_USE_DUMMY_STATEMENT STD_ON /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef NVM_DUMMY_STATEMENT
#define NVM_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef NVM_DUMMY_STATEMENT_CONST
#define NVM_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */  /* /MICROSAR/vSet/vSetGeneral/vSetDummyStatementKind */
#endif
#ifndef NVM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define NVM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef NVM_ATOMIC_VARIABLE_ACCESS
#define NVM_ATOMIC_VARIABLE_ACCESS 32u /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef NVM_PROCESSOR_TC397X_STEPB
#define NVM_PROCESSOR_TC397X_STEPB
#endif
#ifndef NVM_COMP_TASKING
#define NVM_COMP_TASKING
#endif
#ifndef NVM_GEN_GENERATOR_MSR
#define NVM_GEN_GENERATOR_MSR
#endif
#ifndef NVM_CPUTYPE_BITORDER_LSB2MSB
#define NVM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/vSet/vSetPlatform/vSetBitOrder */
#endif
#ifndef NVM_CONFIGURATION_VARIANT_PRECOMPILE
#define NVM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef NVM_CONFIGURATION_VARIANT_LINKTIME
#define NVM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef NVM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define NVM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef NVM_CONFIGURATION_VARIANT
#define NVM_CONFIGURATION_VARIANT NVM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef NVM_POSTBUILD_VARIANT_SUPPORT
#define NVM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/* ---- end public configuration section ---------------------------------- */
#endif /* NVM_CFG_H_PUBLIC */

/* PRQA L:MemMap */

/**********************************************************************************************************************
 *  END OF FILE: NvM_Cfg.h
 *********************************************************************************************************************/

