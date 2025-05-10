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
 *              File: NvM_Cfg.c
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
 *  MODULE SWITCH
 *********************************************************************************************************************/
/* this switch enables the header file(s) to hide some parts. */
#define NVM_CFG_SOURCE

/* multiple inclusion protection */
#define NVM_H_

/* Required for RTE ROM block definitions */
#define RTE_MICROSAR_PIM_EXPORT

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"

/* This tag will only be replaced, if one or more callbacks via Service Ports had been configured */
#include "Rte_NvM.h"

/**********************************************************************************************************************
 *  MODULE HEADER INCLUDES
 *********************************************************************************************************************/
/* only includes the public part of config */
#include "NvM_Cfg.h"
#include "NvM_PrivateCfg.h"

#include "BswM_NvM.h"

/**********************************************************************************************************************
 *  VERSION CHECKS
 *********************************************************************************************************************/
#if ((NVM_CFG_MAJOR_VERSION != (9u)) \
        || (NVM_CFG_MINOR_VERSION != (2u)))
# error "Version numbers of NvM_Cfg.c and NvM_Cfg.h are inconsistent!"
#endif

/* include list of the callback definitions */
#include "Dem_Cbk.h" 
#include "vFotaH_Stubs.h" 
#include "vSwUpdM_Appl.h" 
#include "vFotaH.h" 
#include "Crypto_30_LibCv.h" 
#include "ivd_c4nva.h" 
#include "CddNpmGen2.h" 
#include "SokFm.h" 
#include "VKMS_NvM.h" 


/* include configured file declaring or defining resource (un)locking service(s) */
#include "SchM_NvM.h"

/**********************************************************************************************************************
 *  PUBLIC CONSTANTS
 *********************************************************************************************************************/
#define NVM_START_SEC_CONST_16
#include "NvM_MemMap.h"

/* maximum number of bytes to be processed in one crc calculation step */
CONST(uint16, NVM_CONFIG_CONST) NvM_NoOfCrcBytes_u16 = 64u;

/* constant holding Crc queue size value */
CONST(uint16, NVM_PRIVATE_CONST) NvM_CrcQueueSize_u16 = NVM_TOTAL_NUM_OF_NVRAM_BLOCKS;

#define NVM_STOP_SEC_CONST_16
#include "NvM_MemMap.h"

/* 8Bit Data section containing the data integrity buffers */
#define NVM_START_SEC_VAR_NO_INIT_8
#include "NvM_MemMap.h"



#if ((NVM_DATA_INTEGRITY_INT_BUFFER == STD_ON) || (NVM_REPAIR_REDUNDANT_BLOCKS_API == STD_ON))
static VAR(uint8, NVM_PRIVATE_DATA) DemAdminDataBlock_Crc[2u]; 
static VAR(uint8, NVM_PRIVATE_DATA) CryptoKeyStorage_Crc[2u]; 
static VAR(uint8, NVM_PRIVATE_DATA) StartApplication_NvMBlock1_Crc[2u]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock0_Crc[2u]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock1_Crc[2u]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock2_Crc[2u]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock3_Crc[2u]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock4_Crc[2u]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock5_Crc[2u]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock6_Crc[2u]; 
static VAR(uint8, NVM_PRIVATE_DATA) DemPrimaryDataBlock7_Crc[2u]; 
static VAR(uint8, NVM_PRIVATE_DATA) vFotaH_NvMModuleInfo_Crc[4u]; 
static VAR(uint8, NVM_PRIVATE_DATA) CddNpmGen2_MeasurementsType_Crc[2u]; 
static VAR(uint8, NVM_PRIVATE_DATA) VKMS_NvRamBlock_Crc[2u]; 
static VAR(uint8, NVM_PRIVATE_DATA) SokFm_SokFunction_Crc[2u]; 


#endif




#define NVM_STOP_SEC_VAR_NO_INIT_8
#include "NvM_MemMap.h"

/* Data section containing the internal buffers. If job forwarding from application to memory core is enabled the buffer must be placed in the shared memory. */
#define NVM_START_SEC_VAR_INTERNAL_BUFFER
#include "NvM_MemMap.h"

#if ((NVM_DATA_INTEGRITY_INT_BUFFER == STD_ON) || (NVM_REPAIR_REDUNDANT_BLOCKS_API == STD_ON) \
    || (NVM_JOB_FORWARDING_TO_MEMORY_CORE == STD_ON) || (NVM_SET_RAM_BLOCK_STATUS_API == STD_ON))
/* create the internal buffer of size NVM_INTERNAL_BUFFER_LENGTH */
VAR(uint8, NVM_PRIVATE_DATA) NvM_InternalBuffer_au8[NVM_INTERNAL_BUFFER_LENGTH]; /* PRQA S 1533 */ /* MD_NvM_Cfg_8.9_InternalBuffer */
#endif


#define NVM_STOP_SEC_VAR_INTERNAL_BUFFER
#include "NvM_MemMap.h"

#define NVM_START_SEC_CONST_UNSPECIFIED
#include "NvM_MemMap.h"

CONST(NvM_BlockIdType, NVM_PUBLIC_CONST) NvM_NoOfBlockIds_t = NVM_TOTAL_NUM_OF_NVRAM_BLOCKS;

CONST(NvM_CompiledConfigIdType, NVM_PUBLIC_CONST) NvM_CompiledConfigId_t = {(uint16)NVM_COMPILED_CONFIG_ID}; /* PRQA S 0759 */ /* MD_MSR_Union */
 

 
/* block descriptor table that holds the static configuration parameters of the RAM, ROM and NVBlocks.
* This table has to be adjusted according to the configuration of the NVManager.
*/

CONST(NvM_BlockDescriptorType, NVM_CONFIG_CONST) NvM_BlockDescriptorTable_at[NVM_TOTAL_NUM_OF_NVRAM_BLOCKS] =
    {
      { /*  MultiBlockRequest  */ 
        NULL_PTR /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
        { 0u } /*  Flags  */ , 
        0x0001u /*  NV block Base number (defined by FEE/EA)  */ , 
        0U /*  NvMNvBlockLength  */ , 
        0U /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        0u /*  NvBlockCount  */ , 
        255u /*  NvMBlockJobPriority  */ , 
        0u /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_DATA_INTEGRITY_OFF /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  NvMConfigBlock  */ 
        (NvM_RamAddressType)&vFotaH_NvMInfoBlock /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_ON, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x06C0u /*  NV block Base number (defined by FEE/EA)  */ , 
        2u /*  NvMNvBlockLength  */ , 
        2u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        2u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_REDUNDANT /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  DemAdminDataBlock  */ 
        (NvM_RamAddressType)&Dem_Cfg_AdminData /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        Dem_NvM_InitAdminData /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        Dem_NvM_JobFinished /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        DemAdminDataBlock_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_ON, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0280u /*  NV block Base number (defined by FEE/EA)  */ , 
        16u /*  NvMNvBlockLength  */ , 
        16u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  CryptoKeyStorage  */ 
        NULL_PTR /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        Crypto_30_LibCv_NvBlock_Init_CryptoNvBlock /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        Crypto_30_LibCv_NvBlock_Callback_CryptoNvBlock /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        Crypto_30_LibCv_NvBlock_ReadFrom_CryptoNvBlock /*  NvMReadRamBlockFromNvCallback  */ , 
        Crypto_30_LibCv_NvBlock_WriteTo_CryptoNvBlock /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        CryptoKeyStorage_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_OFF, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_ON, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_ON, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x05C0u /*  NV block Base number (defined by FEE/EA)  */ , 
        474u /*  NvMNvBlockLength  */ , 
        474u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  StartApplication_NvMBlock2  */ 
        NULL_PTR /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        Rte_Call_NvM_RpNotifyJobEnd_StartApplication_NvMBlock2_JobFinished /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0040u /*  NV block Base number (defined by FEE/EA)  */ , 
        1u /*  NvMNvBlockLength  */ , 
        1u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  StartApplication_NvMBlock1  */ 
        (NvM_RamAddressType)&vFotaH_NvMInfoBlock /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        Rte_Call_NvM_RpNotifyJobEnd_StartApplication_NvMBlock1_JobFinished /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        StartApplication_NvMBlock1_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0140u /*  NV block Base number (defined by FEE/EA)  */ , 
        1u /*  NvMNvBlockLength  */ , 
        1u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  DemPrimaryDataBlock0  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_0 /*  NvMRamBlockDataAddress  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        Dem_NvM_JobFinished /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        DemPrimaryDataBlock0_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_ON, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x02C0u /*  NV block Base number (defined by FEE/EA)  */ , 
        12u /*  NvMNvBlockLength  */ , 
        12u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  DemPrimaryDataBlock1  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_1 /*  NvMRamBlockDataAddress  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        Dem_NvM_JobFinished /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        DemPrimaryDataBlock1_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_ON, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x01C0u /*  NV block Base number (defined by FEE/EA)  */ , 
        12u /*  NvMNvBlockLength  */ , 
        12u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  DemPrimaryDataBlock2  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_2 /*  NvMRamBlockDataAddress  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        Dem_NvM_JobFinished /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        DemPrimaryDataBlock2_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_ON, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0200u /*  NV block Base number (defined by FEE/EA)  */ , 
        12u /*  NvMNvBlockLength  */ , 
        12u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  DemPrimaryDataBlock3  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_3 /*  NvMRamBlockDataAddress  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        Dem_NvM_JobFinished /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        DemPrimaryDataBlock3_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_ON, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0080u /*  NV block Base number (defined by FEE/EA)  */ , 
        12u /*  NvMNvBlockLength  */ , 
        12u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  DemPrimaryDataBlock4  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_4 /*  NvMRamBlockDataAddress  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        Dem_NvM_JobFinished /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        DemPrimaryDataBlock4_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_ON, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0300u /*  NV block Base number (defined by FEE/EA)  */ , 
        12u /*  NvMNvBlockLength  */ , 
        12u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  DemPrimaryDataBlock5  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_5 /*  NvMRamBlockDataAddress  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        Dem_NvM_JobFinished /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        DemPrimaryDataBlock5_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_ON, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x00C0u /*  NV block Base number (defined by FEE/EA)  */ , 
        12u /*  NvMNvBlockLength  */ , 
        12u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  DemPrimaryDataBlock6  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_6 /*  NvMRamBlockDataAddress  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        Dem_NvM_JobFinished /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        DemPrimaryDataBlock6_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_ON, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x03C0u /*  NV block Base number (defined by FEE/EA)  */ , 
        12u /*  NvMNvBlockLength  */ , 
        12u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  DemPrimaryDataBlock7  */ 
        (NvM_RamAddressType)&Dem_Cfg_PrimaryEntry_7 /*  NvMRamBlockDataAddress  */ , 
        (NvM_RomAddressType)&Dem_Cfg_MemoryEntryInit /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        Dem_NvM_JobFinished /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        DemPrimaryDataBlock7_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_ON, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0100u /*  NV block Base number (defined by FEE/EA)  */ , 
        12u /*  NvMNvBlockLength  */ , 
        12u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  vFotaH_NvMModuleInfo  */ 
        (NvM_RamAddressType)&vFotaH_NvMInfoBlock /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        vFotaH_NvMModuleInfo_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_ON, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_ON, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0480u /*  NV block Base number (defined by FEE/EA)  */ , 
        (uint16)sizeof(vFotaH_NvMInfoBlock) /*  NvMNvBlockLength  */ , 
        (uint16)sizeof(vFotaH_NvMInfoBlock) /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_32_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  vSwUpdM_Appl_NvModuleInfo  */ 
        (NvM_RamAddressType)&vSwUpdM_Appl_ModuleInfo /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x04C0u /*  NV block Base number (defined by FEE/EA)  */ , 
        (uint16)sizeof(vSwUpdM_Appl_ModuleInfo) /*  NvMNvBlockLength  */ , 
        (uint16)sizeof(vSwUpdM_Appl_ModuleInfo) /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_DATA_INTEGRITY_OFF /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  vSwUpdM_Appl_NvPartitionInfo  */ 
        (NvM_RamAddressType)&vSwUpdM_Appl_PartitionInfo /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0400u /*  NV block Base number (defined by FEE/EA)  */ , 
        (uint16)sizeof(vSwUpdM_Appl_PartitionInfo) /*  NvMNvBlockLength  */ , 
        (uint16)sizeof(vSwUpdM_Appl_PartitionInfo) /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_DATA_INTEGRITY_OFF /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  vSwUpdM_Appl_NvRegionInfo  */ 
        (NvM_RamAddressType)&vSwUpdM_Appl_RegionInfo /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0440u /*  NV block Base number (defined by FEE/EA)  */ , 
        (uint16)sizeof(vSwUpdM_Appl_RegionInfo) /*  NvMNvBlockLength  */ , 
        (uint16)sizeof(vSwUpdM_Appl_RegionInfo) /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_DATA_INTEGRITY_OFF /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  vSwUpdM_Appl_NvResumeInfo  */ 
        (NvM_RamAddressType)&vSwUpdM_Appl_ResumeInfo /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0340u /*  NV block Base number (defined by FEE/EA)  */ , 
        (uint16)sizeof(vSwUpdM_Appl_ResumeInfo) /*  NvMNvBlockLength  */ , 
        (uint16)sizeof(vSwUpdM_Appl_ResumeInfo) /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_DATA_INTEGRITY_OFF /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  vSwUpdM_Appl_NvSegmentAttributes  */ 
        (NvM_RamAddressType)&vSwUpdM_Appl_SegmentAttributes /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0380u /*  NV block Base number (defined by FEE/EA)  */ , 
        (uint16)sizeof(vSwUpdM_Appl_SegmentAttributes) /*  NvMNvBlockLength  */ , 
        (uint16)sizeof(vSwUpdM_Appl_SegmentAttributes) /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_DATA_INTEGRITY_OFF /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  vSwUpdM_Appl_NvSegmentCount  */ 
        (NvM_RamAddressType)&vSwUpdM_Appl_SegmentCount /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0540u /*  NV block Base number (defined by FEE/EA)  */ , 
        (uint16)sizeof(vSwUpdM_Appl_SegmentCount) /*  NvMNvBlockLength  */ , 
        (uint16)sizeof(vSwUpdM_Appl_SegmentCount) /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_DATA_INTEGRITY_OFF /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  vSwUpdM_Appl_NvSegmentWriteAddress  */ 
        (NvM_RamAddressType)&vSwUpdM_Appl_SegmentWriteAddress /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0240u /*  NV block Base number (defined by FEE/EA)  */ , 
        (uint16)sizeof(vSwUpdM_Appl_SegmentWriteAddress) /*  NvMNvBlockLength  */ , 
        (uint16)sizeof(vSwUpdM_Appl_SegmentWriteAddress) /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_DATA_INTEGRITY_OFF /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  vSwUpdM_Appl_NvUpdateState  */ 
        (NvM_RamAddressType)&vSwUpdM_Appl_UpdateState /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0580u /*  NV block Base number (defined by FEE/EA)  */ , 
        (uint16)sizeof(vSwUpdM_Appl_UpdateState) /*  NvMNvBlockLength  */ , 
        (uint16)sizeof(vSwUpdM_Appl_UpdateState) /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_DATA_INTEGRITY_OFF /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  DemStatusDataBlock  */ 
        NULL_PTR /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0500u /*  NV block Base number (defined by FEE/EA)  */ , 
        128u /*  NvMNvBlockLength  */ , 
        128u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  NvMBlock_0x0250  */ 
        NULL_PTR /*  NvMRamBlockDataAddress  */ , 
        (NvM_RomAddressType)&Ivd_Nvm_0x0250_InitVal_cu8 /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0780u /*  NV block Base number (defined by FEE/EA)  */ , 
        4096u /*  NvMNvBlockLength  */ , 
        4096u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  NvMBlock_0xF18F  */ 
        NULL_PTR /*  NvMRamBlockDataAddress  */ , 
        (NvM_RomAddressType)&Ivd_Nvm_0xF18F_InitVal_cu8 /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0180u /*  NV block Base number (defined by FEE/EA)  */ , 
        4096u /*  NvMNvBlockLength  */ , 
        4096u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  CddNpmGen2_MeasurementsType  */ 
        (NvM_RamAddressType)&CddNpmGen2_Measurements /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        CddNpmGen2_MeasurementsType_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_ON, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0600u /*  NV block Base number (defined by FEE/EA)  */ , 
        15u /*  NvMNvBlockLength  */ , 
        15u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  SfdA_LogData  */ 
        NULL_PTR /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0640u /*  NV block Base number (defined by FEE/EA)  */ , 
        19u /*  NvMNvBlockLength  */ , 
        19u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        54u /*  NvBlockCount  */ , 
        64u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_DATASET /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_32_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  VKMS_NvRamBlock  */ 
        (NvM_RamAddressType)&VKMS_NvRamBlock /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        VKMS_NvRamBlock_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_ON, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0700u /*  NV block Base number (defined by FEE/EA)  */ , 
        46u /*  NvMNvBlockLength  */ , 
        46u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  SfdA_PersistentData  */ 
        NULL_PTR /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0680u /*  NV block Base number (defined by FEE/EA)  */ , 
        38u /*  NvMNvBlockLength  */ , 
        38u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        64u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_32_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  SokFm_SokFunction  */ 
        (NvM_RamAddressType)&SokFm_SokFunction /*  NvMRamBlockDataAddress  */ , 
        (NvM_RomAddressType)&SokFm_SokFunctionInit /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        SokFm_SokFunction_Crc /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_ON, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_ON, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x0740u /*  NV block Base number (defined by FEE/EA)  */ , 
        1u /*  NvMNvBlockLength  */ , 
        1u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        1u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_NATIVE /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }, 
      { /*  NvMBlock_TestBlockDataSet  */ 
        NULL_PTR /*  NvMRamBlockDataAddress  */ , 
        NULL_PTR /*  NvMRomBlockDataAddress  */ , 
        NULL_PTR /*  NvMInitBlockCallback  */ , 
        NULL_PTR /*  NvMInitBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMSingleBlockCallback  */ , 
        NULL_PTR /*  NvMSingleBlockCallback (extended)  */ , 
        NULL_PTR /*  NvMReadRamBlockFromNvCallback  */ , 
        NULL_PTR /*  NvMWriteRamBlockToNvCallback  */ , 
        NULL_PTR /*  NvMBlockPreWriteTransformCallback  */ , 
        NULL_PTR /*  NvMBlockPostReadTransformCallback  */ , 
        NULL_PTR /*  RamBlockDataIntegrity data buffer (defined by NvM)  */ , 
        NULL_PTR /*  CRCCompMechanism CRC data (defined by NvM)  */ , 
                {
          NVM_CALC_RAM_BLOCK_CRC_OFF, 
          NVM_BLOCK_WRITE_PROT_OFF, 
          NVM_BLOCK_WRITE_BLOCK_ONCE_OFF, 
          NVM_RESISTANT_TO_CHANGED_SW_ON, 
          NVM_SELECT_BLOCK_FOR_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_PRE_READALL_OFF, 
          NVM_SELECT_BLOCK_FOR_WRITEALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_READALL_OFF, 
          NVM_INVOKE_CALLBACKS_FOR_WRITEALL_OFF, 
          NVM_BLOCK_USE_SET_RAM_BLOCK_STATUS_OFF, 
          NVM_BLOCK_CHECK_LOSS_OF_REDUNDANCY_OFF, 
          NVM_BLOCK_NOTIFY_BSWM_OFF
        } /*  Flags  */ , 
        0x07C0u /*  NV block Base number (defined by FEE/EA)  */ , 
        16u /*  NvMNvBlockLength  */ , 
        16u /*  NvMNvBlockNVRAMDataLength  */ , 
        0u /*  NvCryptoReference  */ , 
        0u /*  NvMacSize  */ , 
        0u /*  NvMacReference  */ , 
        3u /*  NvBlockCount  */ , 
        127u /*  NvMBlockJobPriority  */ , 
        MEMIF_Fee /*  Device Id (defined by MemIf)  */ , 
        NVM_BLOCK_DATASET /*  NvMBlockManagementType  */ , 
        NVM_BLOCK_CRC_16_ON /*  NvMBlockDataIntegrityType  */ 
      }
    };

/* Permanent RAM and ROM block length checks - compile time (only available for blocks with enabled length check */

/* PRQA S 3494, 3213, 1755 BlockLengthChecks */ /* MD_NvM_Cfg_14.3, MD_NvM_Cfg_2.4 */

/* How does it work:
 * data length = sizeof(ramBlock - CrcLength 
 *     - CRC internal buffer enabled: CRC length == 0, RAM blocks store only data, CRC is handles internally
 *     - CRC internal buffer disabled: CRC length is the number of CRC bytes, for blocks without CRC the length == 0
 *     - for ROM blocks the CRC does not matter
 * Data length has to be > or < or == to configured NvM block length, depending on configuration (see above). 
 * In case the lengths do not match a bitfield with length -1 will be created and shall cause a compiler error.
 * The compiler error shall mark the line with invalid bitfield (bitfield length == -1) - the line includes all required information:
 *     - Block_ + NvM block name
 *     - length error description
 *     - RAM block name, CRC length and configured NvM block length
 */

typedef unsigned int NvM_LengthCheck;
 
/* Block Length Check and Automatic Block Length enabled: error if sizeof RAM block is greater than the configured block length */
#define SizeOfRamBlockGreaterThanConfiguredLength(ramBlock, crcLength, blockLength) (((sizeof(ramBlock) - (crcLength)) > (blockLength)) ? -1 : 1) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/* Block Length Check and Strict Length Check enabled: error if the sizeof RAM block does not match the configured block length */
#define SizeOfRamBlockDoesNotMatchConfiguredLength(ramBlock, crcLength, blockLength) (((sizeof(ramBlock) - (crcLength)) != (blockLength)) ? -1 : 1) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/* Block Length Check enabled and Strict Length Check disabled: error if the sizeof RAM block is less than the configured block length */
#define SizeOfRamBlockLessThanConfiguredLength(ramBlock, crcLength, blockLength) (((sizeof(ramBlock) - (crcLength)) < (blockLength)) ? -1 : 1) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/* RAM block length checks */
struct PermanentRamBlockLengthChecks {
  NvM_LengthCheck Block_vFotaH_NvMModuleInfo : SizeOfRamBlockGreaterThanConfiguredLength(vFotaH_NvMInfoBlock, 0u, 32u);
  NvM_LengthCheck Block_vSwUpdM_Appl_NvModuleInfo : SizeOfRamBlockGreaterThanConfiguredLength(vSwUpdM_Appl_ModuleInfo, 0u, 48u);
  NvM_LengthCheck Block_vSwUpdM_Appl_NvPartitionInfo : SizeOfRamBlockGreaterThanConfiguredLength(vSwUpdM_Appl_PartitionInfo, 0u, 32u);
  NvM_LengthCheck Block_vSwUpdM_Appl_NvRegionInfo : SizeOfRamBlockGreaterThanConfiguredLength(vSwUpdM_Appl_RegionInfo, 0u, 32u);
  NvM_LengthCheck Block_vSwUpdM_Appl_NvResumeInfo : SizeOfRamBlockGreaterThanConfiguredLength(vSwUpdM_Appl_ResumeInfo, 0u, 16u);
  NvM_LengthCheck Block_vSwUpdM_Appl_NvSegmentAttributes : SizeOfRamBlockGreaterThanConfiguredLength(vSwUpdM_Appl_SegmentAttributes, 0u, 1120u);
  NvM_LengthCheck Block_vSwUpdM_Appl_NvSegmentCount : SizeOfRamBlockGreaterThanConfiguredLength(vSwUpdM_Appl_SegmentCount, 0u, 16u);
  NvM_LengthCheck Block_vSwUpdM_Appl_NvSegmentWriteAddress : SizeOfRamBlockGreaterThanConfiguredLength(vSwUpdM_Appl_SegmentWriteAddress, 0u, 560u);
  NvM_LengthCheck Block_vSwUpdM_Appl_NvUpdateState : SizeOfRamBlockGreaterThanConfiguredLength(vSwUpdM_Appl_UpdateState, 0u, 1u);
  NvM_LengthCheck Block_VKMS_NvRamBlock : SizeOfRamBlockLessThanConfiguredLength(VKMS_NvRamBlock, 0u, 46u);
};

/* Block Length Check and Automatic Block Length enabled: error if sizeof ROM block is less than sizeof RAM block */
#define SizeOfRomBlockLessThanSizeOfRamBlock(romBlock, ramBlock) ((sizeof(romBlock) < sizeof(ramBlock)) ? -1 : 1) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/* Block Length Check and Strict Length Check enabled: error if the sizeof ROM block does not match the configured block length */
#define SizeOfRomBlockDoesNotMatchConfiguredLength(romBlock, blockLength) ((sizeof(romBlock) != (blockLength)) ? -1 : 1) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */
/* Block Length Check enabled, Strict Length disabled: error if the sizeof ROM block is less than the configured block length */
#define SizeOfRomBlockLessThanConfiguredLength(romBlock, blockLength) ((sizeof(romBlock) < (blockLength)) ? -1 : 1) /* PRQA S 3453 */ /* MD_MSR_FctLikeMacro */

/* ROM block length checks */



/* PRQA L:BlockLengthChecks */

/* Permanent RAM and ROM block length checks - END */

#define NVM_STOP_SEC_CONST_UNSPECIFIED
#include "NvM_MemMap.h"

#define NVM_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "NvM_MemMap.h"

#if(NVM_API_CONFIG_CLASS != NVM_API_CONFIG_CLASS_1)
/* Job Queue used for normal and immediate prio jobs */
VAR(NvM_QueueEntryType, NVM_PRIVATE_DATA) NvM_JobQueue_at[NVM_SIZE_STANDARD_JOB_QUEUE + NVM_SIZE_IMMEDIATE_JOB_QUEUE];
#endif

#define NVM_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "NvM_MemMap.h"

#define NVM_START_SEC_CODE
#include "NvM_MemMap.h"

/**********************************************************************************************************************
*  NvM_EnterCriticalSection
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 enter SchM exclusive area for NvM 
 * \endinternal
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_EnterCriticalSection(void)
{
  /* do what ever was defined to do for locking the resources */
  SchM_Enter_NvM_NVM_EXCLUSIVE_AREA_0();
}

/**********************************************************************************************************************
*  NvM_ExitCriticalSection
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 exit SchM exclusive area for NvM 
 * \endinternal
 */
FUNC(void, NVM_PRIVATE_CODE) NvM_ExitCriticalSection(void)
{
  /* do what ever was defined to do for unlocking the resources */
  SchM_Exit_NvM_NVM_EXCLUSIVE_AREA_0();
}

/* PRQA S 3453 1 */ /* MD_MSR_FctLikeMacro */
#define NvM_invokeMultiBlockMode(serv, res) BswM_NvM_CurrentJobMode((serv),(res)) /*  if NvMBswMMultiBlockJobStatusInformation is TRUE  */

/* PRQA S 3453 1 */ /* MD_MSR_FctLikeMacro */
#define NvM_invokeMultiCbk(serv, res)   /*  if Multi Block Callback is configured  */

/* PRQA S 3453 1 */ /* MD_MSR_FctLikeMacro */
#define NvM_invokeDetectedLossOfRedundancyCallback(blockId) NVM_DUMMY_STATEMENT((blockId))

/**********************************************************************************************************************
*  NvM_MultiBlockCbk
**********************************************************************************************************************/
/*!
 * \internal
 *  - #10 invoke the BSWM notification if any is configured
 *  - #20 in case the given job result isn't set to pending, invoke the multi block job end notification
 * \endinternal
 */
/* PRQA S 3206 1 */ /* MD_NvM_Cfg_2.7 */
FUNC(void, NVM_PRIVATE_CODE) NvM_MultiBlockCbk(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult)
{
  /* The complete function body is designed to be optimized away by the compiler, if it is not needed    *
   * If the used macro is empty, the compiler may decide to remove code because it would contain         *
   * empty execution blocks (it does not matter whether conditions were TRUE or FALSE                    */
  NvM_invokeMultiBlockMode(ServiceId, JobResult);

  if(JobResult != NVM_REQ_PENDING)
  {
    NvM_invokeMultiCbk(ServiceId, JobResult);
  }   
}

/**********************************************************************************************************************
*  NvM_NotifyLossOfRedundancy
**********************************************************************************************************************/
/*!
 * \internal
 *  - invoke the notification callback if any is configured
 * \endinternal
 */
/* PRQA S 3206 1 */ /* MD_NvM_Cfg_2.7 */
FUNC(void, NVM_PRIVATE_CODE) NvM_NotifyLossOfRedundancy(NvM_BlockIdType BlockId)
{
  NvM_invokeDetectedLossOfRedundancyCallback(BlockId);
}

#define NVM_STOP_SEC_CODE
#include "NvM_MemMap.h"

/* PRQA L:MemMap */

/* Justification for module specific MISRA deviations:

MD_NvM_Cfg_2.4
Reason: NvM provides compile time block length checks via structures with bitfields with positive or negative length -
        the negative length lead to compiler errors. It is possible to use == or even >= check, if only one is used,
        the other one will never be used. The macros are always available. The created structures will never be used by NvM.
Risk: No risk.
Prevention: No prevention.

MD_NvM_Cfg_2.7:
Reason: The function NvM_MultiBlockCbk gets all needed parameters to invoke the BSWM and multi block job end callback.
        If both are disabled, the function is empty and does nothing - the passed parameters remain unused.
Risk: No risk.
Prevention: No prevention.

MD_NvM_Cfg_8.9_InternalBuffer:
Reason: NvM uses an internal buffer for explicit synchronization, in internal CRC buffer use case and for repair redundant blocks.
        Depending on configuration all, one or even none of the uses is enabled - therefore sometimes the internal buffer is
        used only once.
Risk: No risk.
Prevention: No prevention.

MD_NvM_Cfg_8.11:
Reason: Array of unknown size is used in order to reduce dependencies.
Risk: In case the array size shall be determined it would be incorrect.
Prevention: No prevention.

MD_NvM_Cfg_14.3:
Reason: NvM provides compile time block length checks via bitfields with positive or negative length - the negative length
        lead to compiler errors. With valid configuration (all block length are configured correctly), all checks are false.
Risk: No risk.
Prevention: No prevention. If needed the compile time checks can be disabled via configuration.

 */

/**********************************************************************************************************************
 *  END OF FILE: NvM_Cfg.c
 *********************************************************************************************************************/


