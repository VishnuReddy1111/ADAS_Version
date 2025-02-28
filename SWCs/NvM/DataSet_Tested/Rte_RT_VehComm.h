/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_RT_VehComm.h
 *           Config:  ADAS.dpa
 *      ECU-Project:  ADAS
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2201090
 *
 *      Description:  Application header file for SW-C <RT_VehComm>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_RT_VEHCOMM_H
# define RTE_RT_VEHCOMM_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_RT_VehComm_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(BswM_ESH_RunRequest, RTE_VAR_INIT) Rte_RT_VehComm_PP_BswM_MDGP_ESH_RunRequest_requestedMode;

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_IF_BMC_CMC_Zellspannung_079_DE_BMC_CMC_Zellspannung_079 (0U)
#  define Rte_InitValue_IF_BMC_EnergieVorhalt_DE_BMC_EnergieVorhalt (0U)
#  define Rte_InitValue_IF_VDSO_Vx3d_DE_VDSO_Vx3d (0U)
#  define Rte_InitValue_RP_BJB_CALID_Index_01_DE_BJB_CALID_Index_01 (0U)
#  define Rte_InitValue_RP_BJB_ErrMem_State_BJB_ErrMem_State (2U)
#  define Rte_InitValue_R_WFS_VIN_1_DE_VIN_1 (0U)
#  define Rte_InitValue_RequestPOSTRUN_Request (1U)
#  define Rte_InitValue_SP_BMC_HV_04_CRC_DE_BMC_HV_04_CRC (0U)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_VehComm_RP_SOK_Zeit_Hybrid_01_Zeit_SOK_Zeit_Hybrid_01_Zeit(P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_VehComm_RP_SOK_Zeit_Hybrid_01_Zeit_SOK_Zeit_Hybrid_01_Zeit(P2VAR(SOK_Zeit_Hybrid_01_Zeit, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_RT_VehComm_IF_BMC_CMC_Zellspannung_079_DE_BMC_CMC_Zellspannung_079(uint16 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_RT_VehComm_IF_BMC_EnergieVorhalt_DE_BMC_EnergieVorhalt(uint16 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_RT_VehComm_PP_SG_BMC_HV_13_SG_BMC_HV_13(P2CONST(SG_BMC_HV_13, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_RT_VehComm_SG_BMC_HV_01_SG_BMC_HV_01(P2CONST(SG_BMC_HV_01, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_IF_VDSO_Vx3d_DE_VDSO_Vx3d Rte_Read_RT_VehComm_IF_VDSO_Vx3d_DE_VDSO_Vx3d
#  define Rte_Read_RT_VehComm_IF_VDSO_Vx3d_DE_VDSO_Vx3d(data) (Com_ReceiveSignal(ComConf_ComSignal_VDSO_Vx3d_XIX_VDSO_05_XIX_HCP5_CANFD01_16f2eb37_Rx, (data)))
#  define Rte_Read_RP_BJB_CALID_Index_01_DE_BJB_CALID_Index_01 Rte_Read_RT_VehComm_RP_BJB_CALID_Index_01_DE_BJB_CALID_Index_01
#  define Rte_Read_RT_VehComm_RP_BJB_CALID_Index_01_DE_BJB_CALID_Index_01(data) (Com_ReceiveSignal(ComConf_ComSignal_BJB_CALID_Index_01_XIX_BJB_CALID_01_XIX_BMC_CAN01_14e77ef7_Rx, (data)))
#  define Rte_Read_RP_SOK_Zeit_Hybrid_01_Zeit_SOK_Zeit_Hybrid_01_Zeit Rte_Read_RT_VehComm_RP_SOK_Zeit_Hybrid_01_Zeit_SOK_Zeit_Hybrid_01_Zeit
#  define Rte_Read_R_WFS_VIN_1_DE_VIN_1 Rte_Read_RT_VehComm_R_WFS_VIN_1_DE_VIN_1
#  define Rte_Read_RT_VehComm_R_WFS_VIN_1_DE_VIN_1(data) (Com_ReceiveSignal(ComConf_ComSignal_VIN_1_XIX_WFS_02_XIX_HCP5_CANFD01_7a318e94_Rx, (data)))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_IF_BMC_CMC_Zellspannung_079_DE_BMC_CMC_Zellspannung_079 Rte_Write_RT_VehComm_IF_BMC_CMC_Zellspannung_079_DE_BMC_CMC_Zellspannung_079
#  define Rte_Write_IF_BMC_EnergieVorhalt_DE_BMC_EnergieVorhalt Rte_Write_RT_VehComm_IF_BMC_EnergieVorhalt_DE_BMC_EnergieVorhalt
#  define Rte_Write_PP_BswM_MDGP_ESH_RunRequest_requestedMode Rte_Write_RT_VehComm_PP_BswM_MDGP_ESH_RunRequest_requestedMode
#  define Rte_Write_RT_VehComm_PP_BswM_MDGP_ESH_RunRequest_requestedMode(data) (Rte_RT_VehComm_PP_BswM_MDGP_ESH_RunRequest_requestedMode = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_PP_SG_BMC_HV_13_SG_BMC_HV_13 Rte_Write_RT_VehComm_PP_SG_BMC_HV_13_SG_BMC_HV_13
#  define Rte_Write_SG_BMC_HV_01_SG_BMC_HV_01 Rte_Write_RT_VehComm_SG_BMC_HV_01_SG_BMC_HV_01
#  define Rte_Write_SP_BMC_HV_04_CRC_DE_BMC_HV_04_CRC Rte_Write_RT_VehComm_SP_BMC_HV_04_CRC_DE_BMC_HV_04_CRC
#  define Rte_Write_RT_VehComm_SP_BMC_HV_04_CRC_DE_BMC_HV_04_CRC(data) (RTE_E_OK)


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_SP_BasicSFD_BasicSFDRole Rte_Switch_RT_VehComm_SP_BasicSFD_BasicSFDRole
#  define Rte_Switch_RT_VehComm_SP_BasicSFD_BasicSFDRole(mode) (RTE_E_OK)
#  define Rte_Switch_SP_E2eSFD_E2eSFDRole Rte_Switch_RT_VehComm_SP_E2eSFD_E2eSFDRole
#  define Rte_Switch_RT_VehComm_SP_E2eSFD_E2eSFDRole(mode) (RTE_E_OK)
#  define Rte_Switch_SP_EptiSFD_EptiSFDRole Rte_Switch_RT_VehComm_SP_EptiSFD_EptiSFDRole
#  define Rte_Switch_RT_VehComm_SP_EptiSFD_EptiSFDRole(mode) (RTE_E_OK)
#  define Rte_Switch_SP_ExtendedSFD_ExtendedSFDRole Rte_Switch_RT_VehComm_SP_ExtendedSFD_ExtendedSFDRole
#  define Rte_Switch_RT_VehComm_SP_ExtendedSFD_ExtendedSFDRole(mode) (RTE_E_OK)
#  define Rte_Switch_SP_OtaSFD_OtaSFDRole Rte_Switch_RT_VehComm_SP_OtaSFD_OtaSFDRole
#  define Rte_Switch_RT_VehComm_SP_OtaSFD_OtaSFDRole(mode) (RTE_E_OK)
#  define Rte_Switch_SP_ProductionSFD_ProductionSFDRole Rte_Switch_RT_VehComm_SP_ProductionSFD_ProductionSFDRole
#  define Rte_Switch_RT_VehComm_SP_ProductionSFD_ProductionSFDRole(mode) (RTE_E_OK)
#  define Rte_Switch_SP_SuperUserSFD_SuperUserSFDRole Rte_Switch_RT_VehComm_SP_SuperUserSFD_SuperUserSFDRole
#  define Rte_Switch_RT_VehComm_SP_SuperUserSFD_SuperUserSFDRole(mode) (RTE_E_OK)


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDDNPMGEN2_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_CDDNPMGEN2_APPL_CODE) CddNpmGen2_SetBEM3State(boolean state); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CDDNPMGEN2_APPL_CODE) CddNpmGen2_SetK15State(boolean state); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CDDNPMGEN2_APPL_CODE) CddNpmGen2_SetVetoState(boolean stateECUVeto, boolean stateBusVeto); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_CDDNPMGEN2_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_COMM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_COMM_APPL_CODE) ComM_RequestComMode(ComM_UserHandleType parg0, ComM_ModeType ComMode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_COMM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_DCM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_DCM_APPL_CODE) Dcm_GetSesCtrlType(P2VAR(Dcm_SesCtrlType, AUTOMATIC, RTE_DCM_APPL_VAR) SesCtrlType); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_DCM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_NVM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_GetDataIndex(NvM_BlockIdType parg0, P2VAR(uint8, AUTOMATIC, RTE_NVM_APPL_VAR) DataIndex); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVM_APPL_VAR) ErrorStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_ReadBlock(NvM_BlockIdType parg0, dtRef_VOID DstPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_SetDataIndex(NvM_BlockIdType parg0, uint8 DataIndex); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_WriteBlock(NvM_BlockIdType parg0, dtRef_const_VOID SrcPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_NVM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_SFDA_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_SFDA_APPL_CODE) SfdA_GetSFDInitState(void); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(void, RTE_SFDA_APPL_CODE) SfdA_GetVersionInfo(P2VAR(SfdA_VersionInfoType, AUTOMATIC, RTE_SFDA_APPL_VAR) VersionInfoPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_SFDA_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VKMS_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_VKMS_APPL_CODE) VKMS_AnnounceFazitID(P2CONST(uint8, AUTOMATIC, RTE_VKMS_APPL_DATA) id); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_VKMS_APPL_CODE) VKMS_AnnounceFazitID(P2CONST(VKMS_FazitIdBufferType, AUTOMATIC, RTE_VKMS_APPL_DATA) id); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_VKMS_APPL_CODE) VKMS_AnnounceVin(P2CONST(uint8, AUTOMATIC, RTE_VKMS_APPL_DATA) vin); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_VKMS_APPL_CODE) VKMS_AnnounceVin(P2CONST(VKMS_VinBufferType, AUTOMATIC, RTE_VKMS_APPL_DATA) vin); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
FUNC(Std_ReturnType, RTE_VKMS_APPL_CODE) VKMS_GetVerificationHash(void); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_VKMS_APPL_CODE) VKMS_GetVerificationHash_result(P2VAR(uint8, AUTOMATIC, RTE_VKMS_APPL_VAR) targetHash); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_VKMS_APPL_CODE) VKMS_GetVerificationHash_result(P2VAR(VKMS_Hash16ByteBufferType, AUTOMATIC, RTE_VKMS_APPL_VAR) targetHash); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif

#  define RTE_STOP_SEC_VKMS_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define Rte_Call_DCMServices_GetSesCtrlType Dcm_GetSesCtrlType
#  define Rte_Call_Event_DTC_0x184c00_SetEventStatus(arg1) (RTE_E_UNCONNECTED)
#  define Rte_Call_Event_DTC_0x1d5af0_SetEventStatus(arg1) (RTE_E_UNCONNECTED)
#  define Rte_Call_PS_NvMBlock_TestBlockDataSet_GetDataIndex(arg1) (NvM_GetDataIndex((NvM_BlockIdType)31, arg1))
#  define Rte_Call_PS_NvMBlock_TestBlockDataSet_GetErrorStatus(arg1) (NvM_GetErrorStatus((NvM_BlockIdType)31, arg1))
#  define Rte_Call_PS_NvMBlock_TestBlockDataSet_ReadBlock(arg1) (NvM_ReadBlock((NvM_BlockIdType)31, arg1))
#  define Rte_Call_PS_NvMBlock_TestBlockDataSet_SetDataIndex(arg1) (NvM_SetDataIndex((NvM_BlockIdType)31, arg1))
#  define Rte_Call_PS_NvMBlock_TestBlockDataSet_SetRamBlockStatus(arg1) (NvM_SetRamBlockStatus((NvM_BlockIdType)31, arg1))
#  define Rte_Call_PS_NvMBlock_TestBlockDataSet_WriteBlock(arg1) (NvM_WriteBlock((NvM_BlockIdType)31, arg1))
#  define Rte_Call_RP_CddNpmGen2_BEM3State_SetBEM3State CddNpmGen2_SetBEM3State
#  define Rte_Call_RP_CddNpmGen2_K15State_SetK15State CddNpmGen2_SetK15State
#  define Rte_Call_RP_CddNpmGen2_VetoState_SetVetoState CddNpmGen2_SetVetoState
#  define Rte_Call_SfdAInitState_GetSFDInitState SfdA_GetSFDInitState
#  define Rte_Call_SfdAVersionInfo_GetVersionInfo(arg1) (SfdA_GetVersionInfo(arg1), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Call_UR_CN_BMC_CAN01_908d0059_RequestComMode(arg1) (ComM_RequestComMode((ComM_UserHandleType)0, arg1))
#  define Rte_Call_UR_CN_HCP5_CANFD01_84d44928_RequestComMode(arg1) (ComM_RequestComMode((ComM_UserHandleType)1, arg1))
#  define Rte_Call_VKMS_ApplServices_AnnounceFazitID VKMS_AnnounceFazitID
#  define Rte_Call_VKMS_ApplServices_AnnounceVin VKMS_AnnounceVin
#  define Rte_Call_VKMS_ApplServices_GetVerificationHash VKMS_GetVerificationHash
#  define Rte_Call_VKMS_ApplServices_GetVerificationHash_result VKMS_GetVerificationHash_result

# endif /* !defined(RTE_CORE) */


# define RT_VehComm_START_SEC_CODE
# include "RT_VehComm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_AppDataA_Runnable AppDataA_Runnable
#  define RTE_RUNNABLE_CBReadData_Data_PID_0x4_Param_CalcuLOADValue_ReadData CBReadData_Data_PID_0x4_Param_CalcuLOADValue_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ConditionCheckRead DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ReadData DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadData DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadDataLength DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadDataLength
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ReadData DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ReadData DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ReadData DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadData DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadDataLength DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadDataLength
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ReadData DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ReadData DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ReadData DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ReadData DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ReadData DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ReadData DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_Produ_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_Produ_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_Produ_Read_ReadData DataServices_Data_DiagnServi_TABROW_Produ_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_Produ_Read_WriteData DataServices_Data_DiagnServi_TABROW_Produ_Read_WriteData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadData DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadDataLength DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadDataLength
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ReadData DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ReadData DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ReadData DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_WriteData DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_WriteData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ReadData DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ReadData DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ReadData DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ConditionCheckRead DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ReadData DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_WriteData DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_WriteData
#  define RTE_RUNNABLE_DataServices_Data_TABROW_SysteIdent_Read_ConditionCheckRead DataServices_Data_TABROW_SysteIdent_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_TABROW_SysteIdent_Read_ReadData DataServices_Data_TABROW_SysteIdent_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ConditionCheckRead DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ReadData DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ReadData
#  define RTE_RUNNABLE_DataServices_DcmDspData_TestDID_RDBI_ConditionCheckRead DataServices_DcmDspData_TestDID_RDBI_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_DcmDspData_TestDID_RDBI_ReadData DataServices_DcmDspData_TestDID_RDBI_ReadData
#  define RTE_RUNNABLE_RT_VehComm_Init RT_VehComm_Init
#  define RTE_RUNNABLE_RT_VehComm_Main RT_VehComm_Main
#  define RTE_RUNNABLE_Re_DataServices_DcmDspData_TestDID_RDBI_ConditionCheckRead Re_DataServices_DcmDspData_TestDID_RDBI_ConditionCheckRead
#  define RTE_RUNNABLE_Re_DataServices_DcmDspData_TestDID_RDBI_ReadData Re_DataServices_DcmDspData_TestDID_RDBI_ReadData
#  define RTE_RUNNABLE_Re_DataServices_DcmDspData_TestDID_RDBI_WriteData Re_DataServices_DcmDspData_TestDID_RDBI_WriteData
#  define RTE_RUNNABLE_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_Start RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_Start
#  define RTE_RUNNABLE_SfdA_GetIds_GetEcuGroupId SfdA_GetIds_GetEcuGroupId
#  define RTE_RUNNABLE_SfdA_GetIds_GetEcuId SfdA_GetIds_GetEcuId
#  define RTE_RUNNABLE_SfdA_GetIds_GetProjectId SfdA_GetIds_GetProjectId
#  define RTE_RUNNABLE_SokFmCrTransmitterConfig_BMC_HV_01_ChallengeReceivedIndication SokFmCrTransmitterConfig_BMC_HV_01_ChallengeReceivedIndication
# endif

# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) AppDataA_Runnable(uint8 cmd, uint16 id, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ptrResultData, P2VAR(uint16, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ptrResultDataLength); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) AppDataA_Runnable(uint8 cmd, uint16 id, P2VAR(AppData_Data128Byte, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ptrResultData, P2VAR(uint16, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ptrResultDataLength); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) CBReadData_Data_PID_0x4_Param_CalcuLOADValue_ReadData(P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) CBReadData_Data_PID_0x4_Param_CalcuLOADValue_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data105ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) DataLength); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) DataLength); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data20ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data20ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_Produ_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_Produ_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_Produ_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_Produ_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_Produ_Read_WriteData(P2CONST(Dcm_Data3ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data517ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) DataLength); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data26ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data23ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data50ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_WriteData(P2CONST(Dcm_Data50ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_SysteIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_SysteIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_SysteIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(void, RT_VehComm_CODE) DataServices_DcmDspData_TestDID_RDBI_ConditionCheckRead(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, RT_VehComm_CODE) DataServices_DcmDspData_TestDID_RDBI_ReadData(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, RT_VehComm_CODE) RT_VehComm_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, RT_VehComm_CODE) RT_VehComm_Main(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(Std_ReturnType, RT_VehComm_CODE) Re_DataServices_DcmDspData_TestDID_RDBI_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) Re_DataServices_DcmDspData_TestDID_RDBI_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) Re_DataServices_DcmDspData_TestDID_RDBI_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) Re_DataServices_DcmDspData_TestDID_RDBI_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) Re_DataServices_DcmDspData_TestDID_RDBI_WriteData(P2CONST(Dcm_Data32ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_Start(Dcm_StartDataIn_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_ReqData_001Type ReqData_001, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_RoutineInfoType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) RoutineInfo, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) DataOut_ReqStructure, P2VAR(uint16, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_Start(Dcm_StartDataIn_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_ReqData_001Type ReqData_001, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_RoutineInfoType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) RoutineInfo, P2VAR(Dcm_StartFlexibleOutArrayData_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_DataOut_ReqStructureType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) DataOut_ReqStructure, P2VAR(uint16, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) SfdA_GetIds_GetEcuGroupId(P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) EcuGroupId); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) SfdA_GetIds_GetEcuGroupId(P2VAR(SfdA_EcuGroupIdType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) EcuGroupId); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_VehComm_CODE) SfdA_GetIds_GetEcuId(P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) EcuId); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_VehComm_CODE) SfdA_GetIds_GetEcuId(P2VAR(SfdA_EcuGroupIdType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) EcuId); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_VehComm_CODE) SfdA_GetIds_GetProjectId(P2VAR(SfdA_ProjectIdType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ProjectId); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RT_VehComm_CODE) SokFmCrTransmitterConfig_BMC_HV_01_ChallengeReceivedIndication(void); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RT_VehComm_STOP_SEC_CODE
# include "RT_VehComm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_AppData_AdaptionCodingOrDsdl2_E_NOT_OK (1U)

#  define RTE_E_AppData_AdaptionCodingOrDsdl2_E_PENDING (10U)

#  define RTE_E_AppData_AdaptionCodingOrDsdl2_E_WAIT_FOR_DATA (2U)

#  define RTE_E_CSDataServices_Data_PID_0x4_Param_CalcuLOADValue_E_NOT_OK (1U)

#  define RTE_E_CddNpmGen2_BEM3State_E_NOT_OK (1U)

#  define RTE_E_CddNpmGen2_K15State_E_NOT_OK (1U)

#  define RTE_E_CddNpmGen2_VetoState_E_NOT_OK (1U)

#  define RTE_E_ComM_UserRequest_E_MODE_LIMITATION (2U)

#  define RTE_E_ComM_UserRequest_E_NOT_OK (1U)

#  define RTE_E_DCMServices_E_OK (0U)

#  define RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_Produ_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_Produ_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_SysteIdent_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_SysteIdent_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VWECUHardwNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VWECUHardwNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_TestDID_RDBI_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_TestDID_RDBI_E_NOT_OK (1U)

#  define RTE_E_DiagnosticMonitor_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC2_SRBS_DS_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_SfdAInitState_E_NOT_OK (1U)

#  define RTE_E_SfdA_GetIds_E_NOT_OK (1U)

#  define RTE_E_SokFm_CrTransmitter_E_NOT_OK (1U)

#  define RTE_E_VKMS_ApplServices_VKMS_ERR_BUSY (23U)

#  define RTE_E_VKMS_ApplServices_VKMS_ERR_CRYPTO_E_BUSY (50U)

#  define RTE_E_VKMS_ApplServices_VKMS_ERR_CRYPTO_E_KEY_SIZE_MISMATCH (54U)

#  define RTE_E_VKMS_ApplServices_VKMS_ERR_CRYPTO_E_KEY_WRITE_FAIL (53U)

#  define RTE_E_VKMS_ApplServices_VKMS_ERR_CRYPTO_E_QUEUE_FULL (51U)

#  define RTE_E_VKMS_ApplServices_VKMS_ERR_GENERAL_ERROR (1U)

#  define RTE_E_VKMS_ApplServices_VKMS_ERR_PENDING_REQUEST (55U)

#  define RTE_E_VKMS_ApplServices_VKMS_ERR_SMALL_BUFFER (25U)

#  define RTE_E_VKMS_ApplServices_VKMS_ERR_TYPEID_NOT_SUPPORTED (21U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_RT_VEHCOMM_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_0786:  MISRA rule: Rule5.5
     Reason:     Same macro and idintifier names in first 63 characters are required to meet AUTOSAR spec.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3449:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
