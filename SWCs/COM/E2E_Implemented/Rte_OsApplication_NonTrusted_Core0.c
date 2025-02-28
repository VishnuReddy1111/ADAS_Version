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
 *             File:  Rte_OsApplication_NonTrusted_Core0.c
 *           Config:  CBD2100170.dpa
 *      ECU-Project:  CBD2100170
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2100170
 *
 *      Description:  RTE implementation file
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0857 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1 */

#define RTE_CORE
#include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_Dir1.1, MD_Rte_Os */
#include "Rte_Type.h"
#include "Rte_Main.h"

#include "Rte_BswM.h"
#include "Rte_CddCc.h"
#include "Rte_CddHv.h"
#include "Rte_CddIShunt.h"
#include "Rte_CddImd.h"
#include "Rte_ComHdl.h"
#include "Rte_ComM.h"
#include "Rte_ConCtrl.h"
#include "Rte_CondMon.h"
#include "Rte_Dcm.h"
#include "Rte_DemMaster_0.h"
#include "Rte_DemSatellite_0.h"
#include "Rte_Det.h"
#include "Rte_EcuM.h"
#include "Rte_FaultMgr.h"
#include "Rte_FiMMaster_0.h"
#include "Rte_FiMSatellite_0.h"
#include "Rte_IoHwAb.h"
#include "Rte_ModeMgr.h"
#include "Rte_NvM.h"
#include "Rte_Os_OsCore0_swc.h"
#include "Rte_StartApplication.h"
#include "Rte_StartApplicationIdentityManagerInformation.h"
#include "SchM_Adc.h"
#include "SchM_BswM.h"
#include "SchM_Can.h"
#include "SchM_CanIf.h"
#include "SchM_CanNm.h"
#include "SchM_CanSM.h"
#include "SchM_CanTp.h"
#include "SchM_Com.h"
#include "SchM_ComM.h"
#include "SchM_ComXf.h"
#include "SchM_Dcm.h"
#include "SchM_Dem.h"
#include "SchM_Det.h"
#include "SchM_Dio.h"
#include "SchM_E2EXf.h"
#include "SchM_Ea.h"
#include "SchM_EcuM.h"
#include "SchM_Eep.h"
#include "SchM_FiM.h"
#include "SchM_Gpt.h"
#include "SchM_IoHwAb.h"
#include "SchM_Mcl.h"
#include "SchM_Mcu.h"
#include "SchM_Nm.h"
#include "SchM_NvM.h"
#include "SchM_PduR.h"
#include "SchM_Port.h"
#include "SchM_Pwm.h"
#include "SchM_Sbc_30_Fs6500.h"
#include "SchM_Spi.h"
#include "SchM_Xcp.h"

#include "Rte_Hook.h"

#include "Com.h"
#if defined(IL_ASRCOM_VERSION)
# define RTE_USE_COM_TXSIGNAL_RDACCESS
#endif

#include "Rte_Cbk.h"

#include "ComXf.h"
#include "E2EXf.h"

/* AUTOSAR 3.x compatibility */
#if !defined (RTE_LOCAL)
# define RTE_LOCAL static
#endif


/**********************************************************************************************************************
 * API for enable / disable interrupts global
 *********************************************************************************************************************/

#if defined(osDisableGlobalKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterrupts() osDisableGlobalKM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterrupts() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableGlobalKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterrupts() osEnableGlobalKM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterrupts() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

/**********************************************************************************************************************
 * API for enable / disable interrupts up to the systemLevel
 *********************************************************************************************************************/

#if defined(osDisableLevelKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterrupts() osDisableLevelKM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterrupts() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableLevelKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterrupts() osEnableLevelKM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterrupts() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif


/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(signalGrp_DccbCddContactorStatus_ImpType, RTE_VAR_INIT) Rte_CddCc_ConCtrlCddContactorStatus_DccbCddContactorStatus = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(signalGrp_DccbCddHvResults_ImpType, RTE_VAR_INIT) Rte_CddHv_CondMonCddHvResults_DccbCddHvResults = {
  0U, 0U, 0U, 0U, 75000
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(signalGrp_DccbCddIShuntData_ImpType, RTE_VAR_INIT) Rte_CddIShunt_CondMonCddIShuntData_DccbCddIShuntData = {
  0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(signalGrp_DccbCddImdResults_ImpType, RTE_VAR_INIT) Rte_CddImd_CondMonCddImdResults_DccbCddImdResults = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbActiveDischargeCmd_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlActiveDischargeCmd_DccbActiveDischargeCmd = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbCanCommStatus_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlCanCommStatus_DccbCanCommStatus = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbChargeCouplerConnectorStatus_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlChargeCouplerConnectorStatus_DccbChargeCouplerConnectorStatus = 5U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbChargeRequest_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlChargeRequest_DccbChargeRequest = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbConSwitchRequest_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlConSwitchRequest_DccbConSwitchRequest = 2U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbEmergShutdownRequest_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlEmergShutdownRequest_DccbEmergShutdownRequest = 2U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbHvbLinkVoltage_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlHvbLinkVoltage_DccbHvbLinkVoltage = 4294967295U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbIgnitionStatus_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlIgnitionStatus_DccbIgnitionStatus = 6U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbIsoMonQuickTest_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlIsoMonQuickTest_DccbIsoMonQuickTest = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbIsoMonReq_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlIsoMonReq_DccbIsoMonReq = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbCddContactorEmergencyOpen_ImpType, RTE_VAR_INIT) Rte_ConCtrl_ConCtrlCddContactorEmergencyOpen_DccbCddContactorEmergencyOpen = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbCddContactorRequest_ImpType, RTE_VAR_INIT) Rte_ConCtrl_ConCtrlCddContactorRequest_DccbCddContactorRequest = 4U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbCddMode_ImpType, RTE_VAR_INIT) Rte_ConCtrl_ConCtrlConCtrlCddMode_DccbCddMode = 1U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbContactorControlErrorState_ImpType, RTE_VAR_INIT) Rte_ConCtrl_ConCtrlConErrorStatus_DccbContactorControlErrorStatus = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbConSwitchActlState_ImpType, RTE_VAR_INIT) Rte_ConCtrl_ConCtrlConSwitchActlState_DccbConSwitchActlState = 3U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbContactorLifeTimeEndStatus_ImpType, RTE_VAR_INIT) Rte_ConCtrl_ConCtrlContactorLifeTimeEndStatus_DccbContactorLifeTimeEndStatus = 2U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbHVLock_ImpType, RTE_VAR_INIT) Rte_ConCtrl_ConCtrlHVLock_DccbHVLock = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbNegContactorStatus_ImpType, RTE_VAR_INIT) Rte_ConCtrl_ConCtrlNegContactorStatus_DccbNegContactorStatus = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbNegContactorStatus_ImpType, RTE_VAR_INIT) Rte_ConCtrl_ConCtrlPosContactorStatus_DccbPosContactorStatus = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbAuxRelayCmd_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonAuxRelayCmd_DccbAuxRelayCmd = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbCddMode_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonCddHvMode_DccbCddMode = 1U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbCddMode_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonCddIShuntMode_DccbCddMode = 1U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbCddImdReset_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonCddImdReset_DccbCddImdReset = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbCddImdStartMeasurement_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonCddImdStartMeasurement_DccbCddImdStartMeasurement = 2U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbConSwitchCurrent_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonConSwitchCurrent_DccbConSwitchCurrent = 75000;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(signalGrp_DccbConSwitchVoltage_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonConSwitchVoltage_DccbConSwitchVoltage = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbEmergOpen_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonEmergOpen_DccbEmergOpen = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbEnergyRequest_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonEnergyRequest_DccbEnergyRequest = 2U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbFuseBlownFaultState_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonFuseBlownFltStatus_DccbFuseBlownFaultState = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbHvFaultState_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonHvFltStatus_DccbHvFaultState = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbHvdcCurrentStatus_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonHvdcCurrentStatus_DccbHvdcCurrentStatus = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbHvdcMaxCurLim_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonHvdcMaxCurLim_DccbHvdcMaxCurLim = 65535U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbHvdcTemperatureStatus_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonHvdcTemperatureStatus_DccbHvdcTemperatureStatus = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbHvdcVoltageStatus_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonHvdcVoltageStatus_DccbHvdcVoltageStatus = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbHvilFaultState_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonHvil1FltStatus_DccbHvilFaultState = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbHvilFaultState_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonHvil2FltStatus_DccbHvilFaultState = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbHvilStatus_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonHvilStatus_DccbHvilStatus = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbInputCurrentFaultState_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonInputCurrentFltStatus_DccbInputCurrentFaultState = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbInterlockState_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonInterlockStateLoop1_DccbInterlockState = 3U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbInterlockState_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonInterlockStateLoop2_DccbInterlockState = 3U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbInterlockState_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonInterlockStateLoop3_DccbInterlockState = 3U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbInterlockState_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonInterlockStateLoop4_DccbInterlockState = 3U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(signalGrp_DccbIsoMonResults_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonIsoMonResults_DccbIsoMonResults = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbIsoMonStatus_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonIsoMonStatus_DccbIsoMonStatus = 15U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbKl30Status_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonKl30Status_DccbKl30Status = 1U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbFaultDetected_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonKl30cFaultStatus_DccbKl30cFaultStatus = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbKl30cStatus_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonKl30cStatus_DccbKl30cStatus = 3U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbMaxTemperature_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonMaxTemperature_DccbMaxTemperature = 65535U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbShortCircuitDetected_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonShortCircuitDetected_DccbShortCircuitDetected = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbTempSensorFaultStatus_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonTempSensorFaultStatus_DccbTempSensorAFaultStatus = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbFaultDetected_ImpType, RTE_VAR_INIT) Rte_FaultMgr_FaultMgrFaultDetected_DccbFaultDetected = 0U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbHvilData, RTE_VAR_INIT) Rte_IoHwAb_CondMonHvilData_DccbHvilAdc = {
  0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbKl30cVoltage, RTE_VAR_INIT) Rte_IoHwAb_CondMonKl30cVoltage_DccbKl30cVoltage = {
  0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbOffboardTemperatures, RTE_VAR_INIT) Rte_IoHwAb_CondMonOffboardTemperatures_DccbOffboardTemperatures = {
  5000U, 5000U, 5000U, 5000U, 5000U, 5000U, 5000U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbOnboardTemperature, RTE_VAR_INIT) Rte_IoHwAb_CondMonOnboardTemperature_DccbOnboardTemperature = {
  5000U, 5000U, 5000U, 5000U, 5000U, 5000U, 5000U, 5000U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbKl30Data, RTE_VAR_INIT) Rte_IoHwAb_DccbQmKL30Data_DccbKl30Data = {
  0U, 0U, 0U
};
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbEcuMode_ImpType, RTE_VAR_INIT) Rte_ModeMgr_ModeMgrEcuVariant_DccbEcuVariant = 3U;
/* PRQA L:L1 */
/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(DccbModeMgrState_ImpType, RTE_VAR_INIT) Rte_ModeMgr_ModeMgrModeMgrState_DccbModeMgrState = 3U;
/* PRQA L:L1 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Per-Instance Memory
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

VAR(EnumActiveComponentType, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_ActiveComponent; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(EnumActiveVariantType, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_ActiveVariant; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_COM_RxSigValue0_Variant_1; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_COM_RxSigValue0_Variant_2; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_COM_TxSigValue0_Variant_1; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_COM_TxSigValue0_Variant_2; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_DIAG_LastRxData; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_MEM_ActiveBlock; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(EnumMEM_BlockStateType, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_MEM_BlockState1; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(EnumMEM_BlockStateType, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_MEM_BlockState2; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_MEM_DataBuffer1; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_MEM_DataBuffer2; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_TxCtrlSigValue; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_TxDataSigValue; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(uint8, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplication_Uptime; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(EnumActiveVariantType, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_StartApplicationIdentityManagerInformation_IdentityManagerVariant; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(DccbComHdlNvm_ImpType, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_ComHdl_DccbComHdlNvm; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(DccbConCtrlNvm_ImpType, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_ConCtrl_DccbConCtrlNvm; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(DccbCondMonNvm_ImpType, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_CondMon_DccbCondMonNvm; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(DccbFaultMgrNvm_ImpType, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_FaultMgr_DccbFaultMgrNvm; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */
VAR(DccbModeMgrNvm_ImpType, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_ModeMgr_DccbModeMgrNvm; /* PRQA S 3408, 1504, 1514, 1533 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514, MD_Rte_1533 */

#define RTE_STOP_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * TxAck/ModeSwitchAck Flags
 *********************************************************************************************************************/


#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

VAR(Rte_OsApplication_NonTrusted_Core0_AckFlagsType, RTE_VAR_INIT) Rte_OsApplication_NonTrusted_Core0_AckFlags = {
  1,
};

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define Rte_OsApplication_NonTrusted_Core0_AckFlagsInit() (Rte_MemClr(&Rte_OsApplication_NonTrusted_Core0_AckFlags, sizeof(Rte_OsApplication_NonTrusted_Core0_AckFlagsType)))
/**********************************************************************************************************************
 * Defines for Rte_ComSendSignalProxy
 *********************************************************************************************************************/
#define RTE_COM_SENDSIGNALPROXY_NOCHANGE       (0U)
#define RTE_COM_SENDSIGNALPROXY_SEND           (1U)
#define RTE_COM_SENDSIGNALPROXY_INVALIDATE     (2U)



/**********************************************************************************************************************
 * Timeout Flags for each external Rx Signals with aliveTimeout != 0
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

VAR(Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlagsType, RTE_VAR_ZERO_INIT) Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlags = {
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U
};

#define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlagsInit() (Rte_MemClr(&Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlags, sizeof(Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlagsType)))


/**********************************************************************************************************************
 * Never Received Flags for each external Rx Signal with handleNeverReceived != 0
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

VAR(Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlagsType, RTE_VAR_ZERO_INIT) Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlags = {
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U
};

#define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlagsInit() (Rte_MemClr(&Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlags, sizeof(Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlagsType)))


/**********************************************************************************************************************
 * Buffer for inter-runnable variables
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* PRQA S 3408, 1504, 1514 L1 */ /* MD_Rte_3408, MD_MSR_Rule8.7, MD_Rte_1514 */
VAR(uint16, RTE_VAR_INIT) Rte_Irv_StartApplication_IrvOccuranceCounterDid = 0U;
/* PRQA L:L1 */

#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, RTE_CODE) Rte_MemClr(P2VAR(void, AUTOMATIC, RTE_VAR_NOINIT) ptr, uint32_least num);
FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 1505, 3408 */ /* MD_MSR_Rule8.7, MD_Rte_3408 */
FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num); /* PRQA S 1505, 3408 */ /* MD_MSR_Rule8.7, MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_BswM_ESH_Mode(BswM_ESH_Mode mode); /* PRQA S 3408 */ /* MD_Rte_3408 */
FUNC(uint8, RTE_CODE) Rte_GetInternalModeIndex_Dcm_DcmEcuReset(Dcm_EcuResetType mode); /* PRQA S 3408 */ /* MD_Rte_3408 */

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Data structures for queue handling
 *********************************************************************************************************************/

#define RTE_Q_OK     ((Rte_QReturnType)0)
#define RTE_Q_EMPTY  ((Rte_QReturnType)1)
#define RTE_Q_FULL   ((Rte_QReturnType)2)

#define RTE_Q_ComHdl_ComHdlScaC2_IgnSw_Stat_SCA (0)

typedef uint8 Rte_QReturnType;
typedef uint8 Rte_QIndexType;

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
RTE_LOCAL FUNC(Rte_QReturnType, RTE_CODE) Rte_QUnqueueElementOsApplication_NonTrusted_Core0(Rte_QIndexType q, P2VAR(void, AUTOMATIC, RTE_APPL_VAR) pData);
#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define Rte_QOverflow_ComHdl_ComHdlScaC2_IgnSw_Stat_SCA (Rte_OsApplication_NonTrusted_Core0_QOverflow.Rte_b0)

#define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

VAR(Rte_OsApplication_NonTrusted_Core0_QOverflowType, RTE_VAR_NOINIT) Rte_OsApplication_NonTrusted_Core0_QOverflow; /* PRQA S 1504 */ /* MD_MSR_Rule8.7 */

#define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



/**********************************************************************************************************************
 * Data structures for mode management
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
VAR(BswM_ESH_Mode, RTE_VAR_INIT) Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_BswM_ESH_Mode_STARTUP; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
VAR(Dcm_EcuResetType, RTE_VAR_INIT) Rte_ModeMachine_Dcm_DcmEcuReset_DcmEcuReset = RTE_MODE_Dcm_DcmEcuReset_NONE; /* PRQA S 3408 */ /* MD_Rte_3408 */
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



/**********************************************************************************************************************
 * Timer handling
 *********************************************************************************************************************/

#if defined OS_US2TICKS_SystemTimer
# define RTE_USEC_SystemTimer OS_US2TICKS_SystemTimer
#else
# define RTE_USEC_SystemTimer(val) ((TickType)RTE_CONST_USEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_MS2TICKS_SystemTimer
# define RTE_MSEC_SystemTimer OS_MS2TICKS_SystemTimer
#else
# define RTE_MSEC_SystemTimer(val) ((TickType)RTE_CONST_MSEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#if defined OS_SEC2TICKS_SystemTimer
# define RTE_SEC_SystemTimer OS_SEC2TICKS_SystemTimer
#else
# define RTE_SEC_SystemTimer(val)  ((TickType)RTE_CONST_SEC_SystemTimer_##val) /* PRQA S 0342 */ /* MD_MSR_Rule20.10_0342 */
#endif

#define RTE_CONST_MSEC_SystemTimer_0 (0UL)
#define RTE_CONST_MSEC_SystemTimer_1 (1UL)
#define RTE_CONST_MSEC_SystemTimer_10 (10UL)
#define RTE_CONST_MSEC_SystemTimer_250 (250UL)
#define RTE_CONST_MSEC_SystemTimer_5 (5UL)

#define RTE_CONST_SEC_SystemTimer_0 (0UL)
#define RTE_CONST_SEC_SystemTimer_1 (1000UL)


/**********************************************************************************************************************
 * Internal definitions
 *********************************************************************************************************************/

#define RTE_TASK_TIMEOUT_EVENT_MASK   ((EventMaskType)0x01)
#define RTE_TASK_WAITPOINT_EVENT_MASK ((EventMaskType)0x02)

/**********************************************************************************************************************
 * RTE life cycle API
 *********************************************************************************************************************/

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


FUNC(void, RTE_CODE) Rte_InitMemory_OsApplication_NonTrusted_Core0(void)
{
  /* reset Rx Timeout Flags */
  Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlagsInit(); /* PRQA S 0315 */ /* MD_Rte_0315 */

  /* reset Rx Never Received Flags */
  Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlagsInit(); /* PRQA S 0315 */ /* MD_Rte_0315 */

  /* set default values for internal data */
  Rte_CddCc_ConCtrlCddContactorStatus_DccbCddContactorStatus = Rte_C_signalGrp_DccbCddContactorStatus_ImpType_0;
  Rte_CddHv_CondMonCddHvResults_DccbCddHvResults = Rte_C_signalGrp_DccbCddHvResults_ImpType_0;
  Rte_CddIShunt_CondMonCddIShuntData_DccbCddIShuntData = Rte_C_signalGrp_DccbCddIShuntData_ImpType_0;
  Rte_CddImd_CondMonCddImdResults_DccbCddImdResults = Rte_C_signalGrp_DccbCddImdResults_ImpType_0;
  Rte_ComHdl_ComHdlActiveDischargeCmd_DccbActiveDischargeCmd = 0U;
  Rte_ComHdl_ComHdlCanCommStatus_DccbCanCommStatus = 0U;
  Rte_ComHdl_ComHdlChargeCouplerConnectorStatus_DccbChargeCouplerConnectorStatus = 5U;
  Rte_ComHdl_ComHdlChargeRequest_DccbChargeRequest = 0U;
  Rte_ComHdl_ComHdlConSwitchRequest_DccbConSwitchRequest = 2U;
  Rte_ComHdl_ComHdlEmergShutdownRequest_DccbEmergShutdownRequest = 2U;
  Rte_ComHdl_ComHdlHvbLinkVoltage_DccbHvbLinkVoltage = 4294967295U;
  Rte_ComHdl_ComHdlIgnitionStatus_DccbIgnitionStatus = 6U;
  Rte_ComHdl_ComHdlIsoMonQuickTest_DccbIsoMonQuickTest = 0U;
  Rte_ComHdl_ComHdlIsoMonReq_DccbIsoMonReq = 0U;
  Rte_ConCtrl_ConCtrlCddContactorEmergencyOpen_DccbCddContactorEmergencyOpen = 0U;
  Rte_ConCtrl_ConCtrlCddContactorRequest_DccbCddContactorRequest = 4U;
  Rte_ConCtrl_ConCtrlConCtrlCddMode_DccbCddMode = 1U;
  Rte_ConCtrl_ConCtrlConErrorStatus_DccbContactorControlErrorStatus = 0U;
  Rte_ConCtrl_ConCtrlConSwitchActlState_DccbConSwitchActlState = 3U;
  Rte_ConCtrl_ConCtrlContactorLifeTimeEndStatus_DccbContactorLifeTimeEndStatus = 2U;
  Rte_ConCtrl_ConCtrlHVLock_DccbHVLock = 0U;
  Rte_ConCtrl_ConCtrlNegContactorStatus_DccbNegContactorStatus = 0U;
  Rte_ConCtrl_ConCtrlPosContactorStatus_DccbPosContactorStatus = 0U;
  Rte_CondMon_CondMonAuxRelayCmd_DccbAuxRelayCmd = 0U;
  Rte_CondMon_CondMonCddHvMode_DccbCddMode = 1U;
  Rte_CondMon_CondMonCddIShuntMode_DccbCddMode = 1U;
  Rte_CondMon_CondMonCddImdReset_DccbCddImdReset = 0U;
  Rte_CondMon_CondMonCddImdStartMeasurement_DccbCddImdStartMeasurement = 2U;
  Rte_CondMon_CondMonConSwitchCurrent_DccbConSwitchCurrent = 75000;
  Rte_CondMon_CondMonConSwitchVoltage_DccbConSwitchVoltage = Rte_C_signalGrp_DccbConSwitchVoltage_ImpType_0;
  Rte_CondMon_CondMonEmergOpen_DccbEmergOpen = 0U;
  Rte_CondMon_CondMonEnergyRequest_DccbEnergyRequest = 2U;
  Rte_CondMon_CondMonFuseBlownFltStatus_DccbFuseBlownFaultState = 0U;
  Rte_CondMon_CondMonHvFltStatus_DccbHvFaultState = 0U;
  Rte_CondMon_CondMonHvdcCurrentStatus_DccbHvdcCurrentStatus = 0U;
  Rte_CondMon_CondMonHvdcMaxCurLim_DccbHvdcMaxCurLim = 65535U;
  Rte_CondMon_CondMonHvdcTemperatureStatus_DccbHvdcTemperatureStatus = 0U;
  Rte_CondMon_CondMonHvdcVoltageStatus_DccbHvdcVoltageStatus = 0U;
  Rte_CondMon_CondMonHvil1FltStatus_DccbHvilFaultState = 0U;
  Rte_CondMon_CondMonHvil2FltStatus_DccbHvilFaultState = 0U;
  Rte_CondMon_CondMonHvilStatus_DccbHvilStatus = 0U;
  Rte_CondMon_CondMonInputCurrentFltStatus_DccbInputCurrentFaultState = 0U;
  Rte_CondMon_CondMonInterlockStateLoop1_DccbInterlockState = 3U;
  Rte_CondMon_CondMonInterlockStateLoop2_DccbInterlockState = 3U;
  Rte_CondMon_CondMonInterlockStateLoop3_DccbInterlockState = 3U;
  Rte_CondMon_CondMonInterlockStateLoop4_DccbInterlockState = 3U;
  Rte_CondMon_CondMonIsoMonResults_DccbIsoMonResults = Rte_C_signalGrp_DccbIsoMonResults_ImpType_0;
  Rte_CondMon_CondMonIsoMonStatus_DccbIsoMonStatus = 15U;
  Rte_CondMon_CondMonKl30Status_DccbKl30Status = 1U;
  Rte_CondMon_CondMonKl30cFaultStatus_DccbKl30cFaultStatus = 0U;
  Rte_CondMon_CondMonKl30cStatus_DccbKl30cStatus = 3U;
  Rte_CondMon_CondMonMaxTemperature_DccbMaxTemperature = 65535U;
  Rte_CondMon_CondMonShortCircuitDetected_DccbShortCircuitDetected = 0U;
  Rte_CondMon_CondMonTempSensorFaultStatus_DccbTempSensorAFaultStatus = 0U;
  Rte_FaultMgr_FaultMgrFaultDetected_DccbFaultDetected = 0U;
  Rte_IoHwAb_CondMonHvilData_DccbHvilAdc = Rte_C_signalGrp_DccbHvilData_ImpType_0;
  Rte_IoHwAb_CondMonKl30cVoltage_DccbKl30cVoltage = Rte_C_signalGrp_DccbKl30cVoltage_ImpType_0;
  Rte_IoHwAb_CondMonOffboardTemperatures_DccbOffboardTemperatures = Rte_C_signalGrp_DccbOffboardTemperatures_ImpType_0;
  Rte_IoHwAb_CondMonOnboardTemperature_DccbOnboardTemperature = Rte_C_signalGrp_DccbOnboardTemperatures_ImpType_0;
  Rte_IoHwAb_DccbQmKL30Data_DccbKl30Data = Rte_C_signalGrp_DccbKl30Data_ImpType_0;
  Rte_ModeMgr_ModeMgrEcuVariant_DccbEcuVariant = 3U;
  Rte_ModeMgr_ModeMgrModeMgrState_DccbModeMgrState = 3U;

  /* reset Tx Ack Flags */
  Rte_OsApplication_NonTrusted_Core0_AckFlagsInit(); /* PRQA S 0315 */ /* MD_Rte_0315 */
  Rte_OsApplication_NonTrusted_Core0_AckFlags.Rte_ModeSwitchAck_Dcm_DcmEcuReset_DcmEcuReset_Ack = 1U;

  /* initialize inter-runnable variables */
  Rte_Irv_StartApplication_IrvOccuranceCounterDid = 0U;

  /* mode management initialization part 1 */

  Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = RTE_MODE_BswM_ESH_Mode_STARTUP;

  Rte_ModeMachine_Dcm_DcmEcuReset_DcmEcuReset = RTE_MODE_Dcm_DcmEcuReset_NONE;

}


/**********************************************************************************************************************
 * Internal/External Tx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CddCc_ConCtrlCddContactorStatus_DccbCddContactorStatus(P2CONST(signalGrp_DccbCddContactorStatus_ImpType, AUTOMATIC, RTE_CDDCC_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CddCc_ConCtrlCddContactorStatus_DccbCddContactorStatus = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CddHv_CondMonCddHvResults_DccbCddHvResults(P2CONST(signalGrp_DccbCddHvResults_ImpType, AUTOMATIC, RTE_CDDHV_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CddHv_CondMonCddHvResults_DccbCddHvResults = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CddIShunt_CondMonCddIShuntData_DccbCddIShuntData(P2CONST(signalGrp_DccbCddIShuntData_ImpType, AUTOMATIC, RTE_CDDISHUNT_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CddIShunt_CondMonCddIShuntData_DccbCddIShuntData = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CddImd_CondMonCddImdResults_DccbCddImdResults(P2CONST(signalGrp_DccbCddImdResults_ImpType, AUTOMATIC, RTE_CDDIMD_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CddImd_CondMonCddImdResults_DccbCddImdResults = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Send_ComHdl_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2(P2CONST(signalGrp_GPM1H1_XMC, AUTOMATIC, RTE_COMHDL_APPL_DATA) data) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  Std_ReturnType retTransformer;
  uint32 lengthBuffer;
  uint32 lengthSendBuffer;
  uint8 transformationBuffer_0[8];

  lengthBuffer = sizeof(transformationBuffer_0);
  retTransformer = ComXf_ComHdl_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2(&(transformationBuffer_0[0]), &lengthBuffer, data); /* PRQA S 1340 */ /* MD_Rte_1340 */
  if (!Rte_IsHardTransformerError(retTransformer))
  {
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer |= E2EXf_ComHdl_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer); /* PRQA S 2983 */ /* MD_Rte_2983 */
  }
  lengthSendBuffer = lengthBuffer;
  if ((lengthSendBuffer <= 8U) && (!Rte_IsHardTransformerError(retTransformer)))
  {
    if (Rte_VarCfgPtr == &Rte_Config_Variant_3)
    {
      ret |= Com_SendSignalGroupArray(ComConf_ComSignalGroup_SG_GPM1H1_XMC_AR2_wdn0u1bi7yijbnxe9bhxiysv_61f71333_Tx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    }
    if ((ret == RTE_E_OK) && (retTransformer != RTE_E_OK))
    {
      ret = RTE_E_SOFT_TRANSFORMER_ERROR;
    }
  }
  else
  {
    ret = RTE_E_HARD_TRANSFORMER_ERROR;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ComHdl_ComHdlDccb1C01_SG_DCCB1_C01_AR5(P2CONST(REC_SG_DCCB1_C01_AR5_wcyc4oh3vv82se49oenjus1n, AUTOMATIC, RTE_COMHDL_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  Std_ReturnType retTransformer;
  uint32 lengthBuffer;
  uint32 lengthSendBuffer;
  uint8 transformationBuffer_0[12];

  retTransformer = ComXf_ComHdl_ComHdlDccb1C01_SG_DCCB1_C01_AR5(&(transformationBuffer_0[0]), &lengthBuffer, data); /* PRQA S 1340 */ /* MD_Rte_1340 */
  if (!Rte_IsHardTransformerError(retTransformer))
  {
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer |= E2EXf_ComHdl_ComHdlDccb1C01_SG_DCCB1_C01_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer); /* PRQA S 2983 */ /* MD_Rte_2983 */
  }
  lengthSendBuffer = lengthBuffer;
  if ((lengthSendBuffer <= 12U) && (!Rte_IsHardTransformerError(retTransformer)))
  {
    if (Rte_VarCfgPtr == &Rte_Config_Variant_1)
    {
      ret |= Com_SendSignalGroupArray(ComConf_ComSignalGroup_SG_DCCB1_C01_AR5_bne86o4su6oef37i9ro5c10b9_636cfa89_Tx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    }
    if ((ret == RTE_E_OK) && (retTransformer != RTE_E_OK))
    {
      ret = RTE_E_SOFT_TRANSFORMER_ERROR;
    }
  }
  else
  {
    ret = RTE_E_HARD_TRANSFORMER_ERROR;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ComHdl_ComHdlDccb2C01_SG_DCCB2_C01_AR5(P2CONST(REC_SG_DCCB2_C01_AR5_a2qglp2324znbwefnu92uartf, AUTOMATIC, RTE_COMHDL_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  Std_ReturnType retTransformer;
  uint32 lengthBuffer;
  uint32 lengthSendBuffer;
  uint8 transformationBuffer_0[8];

  retTransformer = ComXf_ComHdl_ComHdlDccb2C01_SG_DCCB2_C01_AR5(&(transformationBuffer_0[0]), &lengthBuffer, data); /* PRQA S 1340 */ /* MD_Rte_1340 */
  if (!Rte_IsHardTransformerError(retTransformer))
  {
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer |= E2EXf_ComHdl_ComHdlDccb2C01_SG_DCCB2_C01_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer); /* PRQA S 2983 */ /* MD_Rte_2983 */
  }
  lengthSendBuffer = lengthBuffer;
  if ((lengthSendBuffer <= 8U) && (!Rte_IsHardTransformerError(retTransformer)))
  {
    if (Rte_VarCfgPtr == &Rte_Config_Variant_2)
    {
      ret |= Com_SendSignalGroupArray(ComConf_ComSignalGroup_SG_DCCB2_C01_AR5_em0ljh3vew4mv6wgv0qp1uq8e_a904a523_Tx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    }
    if ((ret == RTE_E_OK) && (retTransformer != RTE_E_OK))
    {
      ret = RTE_E_SOFT_TRANSFORMER_ERROR;
    }
  }
  else
  {
    ret = RTE_E_HARD_TRANSFORMER_ERROR;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ComHdl_ComHdlDccbC02_SG_DCCB1_C02_AR5(P2CONST(REC_SG_DCCB1_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv, AUTOMATIC, RTE_COMHDL_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  Std_ReturnType retTransformer;
  uint32 lengthBuffer;
  uint32 lengthSendBuffer;
  uint8 transformationBuffer_0[12];

  retTransformer = ComXf_ComHdl_ComHdlDccbC02_SG_DCCB1_C02_AR5(&(transformationBuffer_0[0]), &lengthBuffer, data); /* PRQA S 1340 */ /* MD_Rte_1340 */
  if (!Rte_IsHardTransformerError(retTransformer))
  {
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer |= E2EXf_ComHdl_ComHdlDccbC02_SG_DCCB1_C02_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer); /* PRQA S 2983 */ /* MD_Rte_2983 */
  }
  lengthSendBuffer = lengthBuffer;
  if ((lengthSendBuffer <= 12U) && (!Rte_IsHardTransformerError(retTransformer)))
  {
    if (Rte_VarCfgPtr == &Rte_Config_Variant_1)
    {
      ret |= Com_SendSignalGroupArray(ComConf_ComSignalGroup_SG_DCCB1_C02_AR5_4ujjmt98jr887lj811pphfbni_45921538_Tx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    }
    if ((ret == RTE_E_OK) && (retTransformer != RTE_E_OK))
    {
      ret = RTE_E_SOFT_TRANSFORMER_ERROR;
    }
  }
  else
  {
    ret = RTE_E_HARD_TRANSFORMER_ERROR;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ComHdl_ComHdlEptoC01_SG_EPTOce_C01_AR5(P2CONST(REC_SG_EPTOce_C01_AR5_1ae8w4ccn5pv3jukyqv8emy5n, AUTOMATIC, RTE_COMHDL_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  Std_ReturnType retTransformer;
  uint32 lengthBuffer;
  uint32 lengthSendBuffer;
  uint8 transformationBuffer_0[7];

  retTransformer = ComXf_ComHdl_ComHdlEptoC01_SG_EPTOce_C01_AR5(&(transformationBuffer_0[0]), &lengthBuffer, data); /* PRQA S 1340 */ /* MD_Rte_1340 */
  if (!Rte_IsHardTransformerError(retTransformer))
  {
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer |= E2EXf_ComHdl_ComHdlEptoC01_SG_EPTOce_C01_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer); /* PRQA S 2983 */ /* MD_Rte_2983 */
  }
  lengthSendBuffer = lengthBuffer;
  if ((lengthSendBuffer <= 7U) && (!Rte_IsHardTransformerError(retTransformer)))
  {
    if (Rte_VarCfgPtr == &Rte_Config_Variant_3)
    {
      ret |= Com_SendSignalGroupArray(ComConf_ComSignalGroup_SG_EPTOce_C01_AR5_1nf7sb3onx9ta72u4gyf5nf4n_dc69b6f0_Tx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    }
    if ((ret == RTE_E_OK) && (retTransformer != RTE_E_OK))
    {
      ret = RTE_E_SOFT_TRANSFORMER_ERROR;
    }
  }
  else
  {
    ret = RTE_E_HARD_TRANSFORMER_ERROR;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ComHdl_ComHdlEptoC02_SG_EPTOce_C02_AR5(P2CONST(REC_SG_EPTOce_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv, AUTOMATIC, RTE_COMHDL_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  Std_ReturnType retTransformer;
  uint32 lengthBuffer;
  uint32 lengthSendBuffer;
  uint8 transformationBuffer_0[12];

  retTransformer = ComXf_ComHdl_ComHdlEptoC02_SG_EPTOce_C02_AR5(&(transformationBuffer_0[0]), &lengthBuffer, data); /* PRQA S 1340 */ /* MD_Rte_1340 */
  if (!Rte_IsHardTransformerError(retTransformer))
  {
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer |= E2EXf_ComHdl_ComHdlEptoC02_SG_EPTOce_C02_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer); /* PRQA S 2983 */ /* MD_Rte_2983 */
  }
  lengthSendBuffer = lengthBuffer;
  if ((lengthSendBuffer <= 12U) && (!Rte_IsHardTransformerError(retTransformer)))
  {
    if (Rte_VarCfgPtr == &Rte_Config_Variant_3)
    {
      ret |= Com_SendSignalGroupArray(ComConf_ComSignalGroup_SG_EPTOce_C02_AR5_3iy57tdinwbbj5xh6sufcubir_bcc23d07_Tx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    }
    if ((ret == RTE_E_OK) && (retTransformer != RTE_E_OK))
    {
      ret = RTE_E_SOFT_TRANSFORMER_ERROR;
    }
  }
  else
  {
    ret = RTE_E_HARD_TRANSFORMER_ERROR;
  }

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CondMon_CondMonConSwitchVoltage_DccbConSwitchVoltage(P2CONST(signalGrp_DccbConSwitchVoltage_ImpType, AUTOMATIC, RTE_CONDMON_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CondMon_CondMonConSwitchVoltage_DccbConSwitchVoltage = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CondMon_CondMonIsoMonResults_DccbIsoMonResults(P2CONST(signalGrp_DccbIsoMonResults_ImpType, AUTOMATIC, RTE_CONDMON_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_CondMon_CondMonIsoMonResults_DccbIsoMonResults = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IoHwAb_CondMonHvdcCurrent_DccbHvdcCurrent(P2CONST(DccbHvdcCurrent, AUTOMATIC, RTE_IOHWAB_APPL_DATA) data) /* PRQA S 1505, 3206, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_2982 */
{
  data = data; /* PRQA S 2983, 1338 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return RTE_E_OK;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IoHwAb_CondMonHvilData_DccbHvilAdc(P2CONST(DccbHvilData, AUTOMATIC, RTE_IOHWAB_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_IoHwAb_CondMonHvilData_DccbHvilAdc = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IoHwAb_CondMonKl30cVoltage_DccbKl30cVoltage(P2CONST(DccbKl30cVoltage, AUTOMATIC, RTE_IOHWAB_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_IoHwAb_CondMonKl30cVoltage_DccbKl30cVoltage = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IoHwAb_CondMonOffboardTemperatures_DccbOffboardTemperatures(P2CONST(DccbOffboardTemperatures, AUTOMATIC, RTE_IOHWAB_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_IoHwAb_CondMonOffboardTemperatures_DccbOffboardTemperatures = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IoHwAb_CondMonOnboardTemperature_DccbOnboardTemperature(P2CONST(DccbOnboardTemperature, AUTOMATIC, RTE_IOHWAB_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_IoHwAb_CondMonOnboardTemperature_DccbOnboardTemperature = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_IoHwAb_DccbQmKL30Data_DccbKl30Data(P2CONST(DccbKl30Data, AUTOMATIC, RTE_IOHWAB_APPL_DATA) data) /* PRQA S 1505, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_2982 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Rte_IoHwAb_DccbQmKL30Data_DccbKl30Data = *(data); /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StartApplication_PpSignal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx_DeSignal_StartAppl_TxCtrl_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_b45ea6bd_Tx(uint8 data) /* PRQA S 1505, 3206, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_2982 */
{
  data = data; /* PRQA S 2983, 1338 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return RTE_E_OK;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_StartApplication_PpSignal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx_DeSignal_StartAppl_TxData_MyECU_omsg_StartAppl_Tx_MyECU_oCAN_8c58228b_Tx(uint8 data) /* PRQA S 1505, 3206, 2982 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_2982 */
{
  data = data; /* PRQA S 2983, 1338 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return RTE_E_OK;
} /* PRQA S 6010, 6030, 6050 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL */


/**********************************************************************************************************************
 * Internal/External Rx connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_PostRunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_0_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BswM_Request_ESH_RunRequest_1_requestedMode(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Receive_ComHdl_ComHdlScaC2_IgnSw_Stat_SCA(P2VAR(c04_IgnSw_Stat, AUTOMATIC, RTE_COMHDL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  {
    Std_ReturnType lost_data = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
    Rte_QReturnType retQueue;
    Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
    if (Rte_QOverflow_ComHdl_ComHdlScaC2_IgnSw_Stat_SCA == 1U)
    {
      /* reset errorflag */
      Rte_QOverflow_ComHdl_ComHdlScaC2_IgnSw_Stat_SCA = 0U;
      lost_data = RTE_E_LOST_DATA;
    }
    Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */
    retQueue = Rte_QUnqueueElementOsApplication_NonTrusted_Core0(RTE_Q_ComHdl_ComHdlScaC2_IgnSw_Stat_SCA, (P2VAR(void, AUTOMATIC, RTE_APPL_VAR))(data)); /* PRQA S 0314 */ /* MD_Rte_0314 */
    if (retQueue == RTE_Q_EMPTY)
    {
      ret = RTE_E_NO_DATA;
    }
    ret |= lost_data; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlBmmC01_HVB_LinkVolt_Cval(P2VAR(c16_V_0_to_3212k75_0k05, AUTOMATIC, RTE_COMHDL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  if (Rte_VarCfgPtr == &Rte_Config_Variant_1)
  {
    {
      c16_V_0_to_3212k75_0k05 localHVB_LinkVolt_Cval_0ef362b9_Rx;
      ret = Com_ReceiveSignal(ComConf_ComSignal_HVB_LinkVolt_Cval_0ef362b9_Rx, &localHVB_LinkVolt_Cval_0ef362b9_Rx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
      *((data)) = localHVB_LinkVolt_Cval_0ef362b9_Rx;
    }
  }
  if (Rte_VarCfgPtr == &Rte_Config_Variant_2)
  {
    {
      c16_V_0_to_3212k75_0k05 localHVB_LinkVolt_Cval_98e9493e_Rx;
      ret = Com_ReceiveSignal(ComConf_ComSignal_HVB_LinkVolt_Cval_98e9493e_Rx, &localHVB_LinkVolt_Cval_98e9493e_Rx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
      *((data)) = localHVB_LinkVolt_Cval_98e9493e_Rx;
    }
  }
  if (Rte_VarCfgPtr == &Rte_Config_Variant_3)
  {
    {
      c16_V_0_to_3212k75_0k05 localHVB_LinkVolt_Cval_e120f148_Rx;
      ret = Com_ReceiveSignal(ComConf_ComSignal_HVB_LinkVolt_Cval_e120f148_Rx, &localHVB_LinkVolt_Cval_e120f148_Rx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
      *((data)) = localHVB_LinkVolt_Cval_e120f148_Rx;
    }
  }
  if (ret != RTE_E_COM_STOPPED)
  {
    if (Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlags.Rte_RxNeverReceived_ComHdl_ComHdlBmmC01_HVB_LinkVolt_Cval == 0U)
    {
      ret = RTE_E_NEVER_RECEIVED;
    }
  }
  if (Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_ComHdl_ComHdlBmmC01_HVB_LinkVolt_Cval != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5(P2VAR(REC_SG_CPC6_C11_AR5_dgfi1nrxtb0voy6rb7ybeonmv, AUTOMATIC, RTE_COMHDL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  Std_ReturnType retTransformer;
  uint32 lengthBuffer;
  uint8 transformationBuffer_0[5];

  if (Rte_VarCfgPtr == &Rte_Config_Variant_3)
  {
    ret |= Com_ReceiveSignalGroupArray(ComConf_ComSignalGroup_SG_CPC6_C11_AR5_37p9dav6q6ic5di6w6o5rvm45_479df52c_Rx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer = E2EXf_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer);
    if (!Rte_IsHardTransformerError(retTransformer))
    {
      retTransformer |= ComXf_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5(&(transformationBuffer_0[0]), lengthBuffer, data); /* PRQA S 2983 */ /* MD_Rte_2983 */
    }
    if (ret != RTE_E_COM_STOPPED)
    {
      if (Rte_IsHardTransformerError(retTransformer))
      {
        ret = RTE_E_HARD_TRANSFORMER_ERROR;
      }
      else if (retTransformer != RTE_E_OK) /* PRQA S 2004 */ /* MD_MSR_EmptyClause */
      {
        ret = RTE_E_SOFT_TRANSFORMER_ERROR;
      }
    }
  }
  if ((Rte_VarCfgPtr == &Rte_Config_Variant_1) || (Rte_VarCfgPtr == &Rte_Config_Variant_2))
  {
    *data = Rte_XDIS_72jl4du3znrujc6xmqdst01el;
    ret = RTE_E_UNCONNECTED;
  }
  if (ret != RTE_E_COM_STOPPED)
  {
    if (Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlags.Rte_RxNeverReceived_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5 == 0U)
    {
      ret = RTE_E_NEVER_RECEIVED;
    }
  }
  if (Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5 != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlConSwitchVoltage_DccbConSwitchVoltage(P2VAR(signalGrp_DccbConSwitchVoltage_ImpType, AUTOMATIC, RTE_COMHDL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CondMon_CondMonConSwitchVoltage_DccbConSwitchVoltage; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5(P2VAR(REC_SG_CPC6_C02_AR5_5wbdxrp8awtkuts7zyf21170w, AUTOMATIC, RTE_COMHDL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  Std_ReturnType retTransformer;
  uint32 lengthBuffer;
  uint8 transformationBuffer_0[32];

  if (Rte_VarCfgPtr == &Rte_Config_Variant_1)
  {
    ret |= Com_ReceiveSignalGroupArray(ComConf_ComSignalGroup_SG_CPC6_C02_AR5_13zdcgtlyiyf2kmwz28jazrw0_0c044d9c_Rx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer = E2EXf_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer);
    if (!Rte_IsHardTransformerError(retTransformer))
    {
      retTransformer |= ComXf_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5(&(transformationBuffer_0[0]), lengthBuffer, data); /* PRQA S 2983 */ /* MD_Rte_2983 */
    }
    if (ret != RTE_E_COM_STOPPED)
    {
      if (Rte_IsHardTransformerError(retTransformer))
      {
        ret = RTE_E_HARD_TRANSFORMER_ERROR;
      }
      else if (retTransformer != RTE_E_OK) /* PRQA S 2004 */ /* MD_MSR_EmptyClause */
      {
        ret = RTE_E_SOFT_TRANSFORMER_ERROR;
      }
    }
  }
  if (Rte_VarCfgPtr == &Rte_Config_Variant_2)
  {
    ret |= Com_ReceiveSignalGroupArray(ComConf_ComSignalGroup_SG_CPC6_C02_AR5_13zdcgtlyiyf2kmwz28jazrw0_ac697073_Rx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer = E2EXf_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer);
    if (!Rte_IsHardTransformerError(retTransformer))
    {
      retTransformer |= ComXf_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5(&(transformationBuffer_0[0]), lengthBuffer, data); /* PRQA S 2983 */ /* MD_Rte_2983 */
    }
    if (ret != RTE_E_COM_STOPPED)
    {
      if (Rte_IsHardTransformerError(retTransformer))
      {
        ret = RTE_E_HARD_TRANSFORMER_ERROR;
      }
      else if (retTransformer != RTE_E_OK) /* PRQA S 2004 */ /* MD_MSR_EmptyClause */
      {
        ret = RTE_E_SOFT_TRANSFORMER_ERROR;
      }
    }
  }
  if (Rte_VarCfgPtr == &Rte_Config_Variant_3)
  {
    ret |= Com_ReceiveSignalGroupArray(ComConf_ComSignalGroup_SG_CPC6_C02_AR5_13zdcgtlyiyf2kmwz28jazrw0_c22f0e83_Rx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer = E2EXf_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer);
    if (!Rte_IsHardTransformerError(retTransformer))
    {
      retTransformer |= ComXf_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5(&(transformationBuffer_0[0]), lengthBuffer, data); /* PRQA S 2983 */ /* MD_Rte_2983 */
    }
    if (ret != RTE_E_COM_STOPPED)
    {
      if (Rte_IsHardTransformerError(retTransformer))
      {
        ret = RTE_E_HARD_TRANSFORMER_ERROR;
      }
      else if (retTransformer != RTE_E_OK) /* PRQA S 2004 */ /* MD_MSR_EmptyClause */
      {
        ret = RTE_E_SOFT_TRANSFORMER_ERROR;
      }
    }
  }
  if (ret != RTE_E_COM_STOPPED)
  {
    if (Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlags.Rte_RxNeverReceived_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5 == 0U)
    {
      ret = RTE_E_NEVER_RECEIVED;
    }
  }
  if (Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5 != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5(P2VAR(REC_SG_CPC6_C05_AR5_2ahxpf4cam3pi2le1l2woky78, AUTOMATIC, RTE_COMHDL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  Std_ReturnType retTransformer;
  uint32 lengthBuffer;
  uint8 transformationBuffer_0[7];

  if (Rte_VarCfgPtr == &Rte_Config_Variant_2)
  {
    ret |= Com_ReceiveSignalGroupArray(ComConf_ComSignalGroup_SG_CPC6_C05_AR5_c0kn88fy4qhcaylfzjelpch8j_2dd29d95_Rx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer = E2EXf_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer);
    if (!Rte_IsHardTransformerError(retTransformer))
    {
      retTransformer |= ComXf_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5(&(transformationBuffer_0[0]), lengthBuffer, data); /* PRQA S 2983 */ /* MD_Rte_2983 */
    }
    if (ret != RTE_E_COM_STOPPED)
    {
      if (Rte_IsHardTransformerError(retTransformer))
      {
        ret = RTE_E_HARD_TRANSFORMER_ERROR;
      }
      else if (retTransformer != RTE_E_OK) /* PRQA S 2004 */ /* MD_MSR_EmptyClause */
      {
        ret = RTE_E_SOFT_TRANSFORMER_ERROR;
      }
    }
  }
  if ((Rte_VarCfgPtr == &Rte_Config_Variant_1) || (Rte_VarCfgPtr == &Rte_Config_Variant_3))
  {
    *data = Rte_XDIS_aojtxaq7d7eubebevfoidspge;
    ret = RTE_E_UNCONNECTED;
  }
  if (ret != RTE_E_COM_STOPPED)
  {
    if (Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlags.Rte_RxNeverReceived_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5 == 0U)
    {
      ret = RTE_E_NEVER_RECEIVED;
    }
  }
  if (Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5 != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5(P2VAR(REC_SG_CPC6_C06_AR5_ulcxeouja3rnfon8plrygyca, AUTOMATIC, RTE_COMHDL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  Std_ReturnType retTransformer;
  uint32 lengthBuffer;
  uint8 transformationBuffer_0[31];

  if (Rte_VarCfgPtr == &Rte_Config_Variant_1)
  {
    ret |= Com_ReceiveSignalGroupArray(ComConf_ComSignalGroup_SG_CPC6_C06_AR5_d6yux088cedsa5d0uys1uc3ub_6cd01b20_Rx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer = E2EXf_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer);
    if (!Rte_IsHardTransformerError(retTransformer))
    {
      retTransformer |= ComXf_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5(&(transformationBuffer_0[0]), lengthBuffer, data); /* PRQA S 2983 */ /* MD_Rte_2983 */
    }
    if (ret != RTE_E_COM_STOPPED)
    {
      if (Rte_IsHardTransformerError(retTransformer))
      {
        ret = RTE_E_HARD_TRANSFORMER_ERROR;
      }
      else if (retTransformer != RTE_E_OK) /* PRQA S 2004 */ /* MD_MSR_EmptyClause */
      {
        ret = RTE_E_SOFT_TRANSFORMER_ERROR;
      }
    }
  }
  if ((Rte_VarCfgPtr == &Rte_Config_Variant_2) || (Rte_VarCfgPtr == &Rte_Config_Variant_3))
  {
    *data = Rte_XDIS_e17dgvdo41d58b5mamu6a6gge;
    ret = RTE_E_UNCONNECTED;
  }
  if (ret != RTE_E_COM_STOPPED)
  {
    if (Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlags.Rte_RxNeverReceived_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5 == 0U)
    {
      ret = RTE_E_NEVER_RECEIVED;
    }
  }
  if (Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5 != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5(P2VAR(REC_SG_CPC6_C16_AR5_1hpstplriukdblrgry0860d7o, AUTOMATIC, RTE_COMHDL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  Std_ReturnType retTransformer;
  uint32 lengthBuffer;
  uint8 transformationBuffer_0[19];

  if (Rte_VarCfgPtr == &Rte_Config_Variant_1)
  {
    ret |= Com_ReceiveSignalGroupArray(ComConf_ComSignalGroup_SG_CPC6_C16_AR5_b40avz6xauighs72cnh3d0f8o_ea578827_Rx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer = E2EXf_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer);
    if (!Rte_IsHardTransformerError(retTransformer))
    {
      retTransformer |= ComXf_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5(&(transformationBuffer_0[0]), lengthBuffer, data); /* PRQA S 2983 */ /* MD_Rte_2983 */
    }
    if (ret != RTE_E_COM_STOPPED)
    {
      if (Rte_IsHardTransformerError(retTransformer))
      {
        ret = RTE_E_HARD_TRANSFORMER_ERROR;
      }
      else if (retTransformer != RTE_E_OK) /* PRQA S 2004 */ /* MD_MSR_EmptyClause */
      {
        ret = RTE_E_SOFT_TRANSFORMER_ERROR;
      }
    }
  }
  if (Rte_VarCfgPtr == &Rte_Config_Variant_2)
  {
    ret |= Com_ReceiveSignalGroupArray(ComConf_ComSignalGroup_SG_CPC6_C16_AR5_b40avz6xauighs72cnh3d0f8o_4a3ab5c8_Rx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer = E2EXf_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer);
    if (!Rte_IsHardTransformerError(retTransformer))
    {
      retTransformer |= ComXf_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5(&(transformationBuffer_0[0]), lengthBuffer, data); /* PRQA S 2983 */ /* MD_Rte_2983 */
    }
    if (ret != RTE_E_COM_STOPPED)
    {
      if (Rte_IsHardTransformerError(retTransformer))
      {
        ret = RTE_E_HARD_TRANSFORMER_ERROR;
      }
      else if (retTransformer != RTE_E_OK) /* PRQA S 2004 */ /* MD_MSR_EmptyClause */
      {
        ret = RTE_E_SOFT_TRANSFORMER_ERROR;
      }
    }
  }
  if (Rte_VarCfgPtr == &Rte_Config_Variant_3)
  {
    *data = Rte_XDIS_dl59olwy28y0ay56bv304wswb;
    ret = RTE_E_UNCONNECTED;
  }
  if (ret != RTE_E_COM_STOPPED)
  {
    if (Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlags.Rte_RxNeverReceived_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5 == 0U)
    {
      ret = RTE_E_NEVER_RECEIVED;
    }
  }
  if (Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5 != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5(P2VAR(REC_SG_CPC6_C22_AR5_cp6wyrd9cg7ec7y2w3khz1gyt, AUTOMATIC, RTE_COMHDL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  Std_ReturnType retTransformer;
  uint32 lengthBuffer;
  uint8 transformationBuffer_0[4];

  if (Rte_VarCfgPtr == &Rte_Config_Variant_1)
  {
    ret |= Com_ReceiveSignalGroupArray(ComConf_ComSignalGroup_SG_CPC6_C22_AR5_9qloh63bqshbof9m4g1344yq2_1a7c3a31_Rx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer = E2EXf_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer);
    if (!Rte_IsHardTransformerError(retTransformer))
    {
      retTransformer |= ComXf_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5(&(transformationBuffer_0[0]), lengthBuffer, data); /* PRQA S 2983 */ /* MD_Rte_2983 */
    }
    if (ret != RTE_E_COM_STOPPED)
    {
      if (Rte_IsHardTransformerError(retTransformer))
      {
        ret = RTE_E_HARD_TRANSFORMER_ERROR;
      }
      else if (retTransformer != RTE_E_OK) /* PRQA S 2004 */ /* MD_MSR_EmptyClause */
      {
        ret = RTE_E_SOFT_TRANSFORMER_ERROR;
      }
    }
  }
  if ((Rte_VarCfgPtr == &Rte_Config_Variant_2) || (Rte_VarCfgPtr == &Rte_Config_Variant_3))
  {
    *data = Rte_XDIS_12490l457fes88dvqlvwjgr41;
    ret = RTE_E_UNCONNECTED;
  }
  if (ret != RTE_E_COM_STOPPED)
  {
    if (Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlags.Rte_RxNeverReceived_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5 == 0U)
    {
      ret = RTE_E_NEVER_RECEIVED;
    }
  }
  if (Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5 != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlEisC02_IgnSw_Stat_EIS(P2VAR(c04_IgnSw_Stat, AUTOMATIC, RTE_COMHDL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  if (Rte_VarCfgPtr == &Rte_Config_Variant_3)
  {
    {
      c04_IgnSw_Stat localIgnSw_Stat_EIS_47773600_Rx;
      ret = Com_ReceiveSignal(ComConf_ComSignal_IgnSw_Stat_EIS_47773600_Rx, &localIgnSw_Stat_EIS_47773600_Rx); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
      *((data)) = localIgnSw_Stat_EIS_47773600_Rx;
    }
  }
  if ((Rte_VarCfgPtr == &Rte_Config_Variant_1) || (Rte_VarCfgPtr == &Rte_Config_Variant_2))
  {
    *data = 15U;
    ret = RTE_E_UNCONNECTED;
  }
  if (ret != RTE_E_COM_STOPPED)
  {
    if (Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlags.Rte_RxNeverReceived_ComHdl_ComHdlEisC02_IgnSw_Stat_EIS == 0U)
    {
      ret = RTE_E_NEVER_RECEIVED;
    }
  }
  if (Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_ComHdl_ComHdlEisC02_IgnSw_Stat_EIS != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5(P2VAR(REC_SG_EVCC1_C01_AR5_515fv9hxb5jrzmunrr9r72aqj, AUTOMATIC, RTE_COMHDL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */
  Std_ReturnType retTransformer;
  uint32 lengthBuffer;
  uint8 transformationBuffer_0[15];

  if (Rte_VarCfgPtr == &Rte_Config_Variant_1)
  {
    ret |= Com_ReceiveSignalGroupArray(ComConf_ComSignalGroup_SG_EVCC1_C01_AR5_bvrdfjnhy7u1wyt6aog6cpucq_392c9d49_Rx, &transformationBuffer_0[0]); /* PRQA S 0315, 2986 */ /* MD_Rte_0315, MD_Rte_2986 */
    lengthBuffer = sizeof(transformationBuffer_0);
    retTransformer = E2EXf_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5(&(transformationBuffer_0[0]), &lengthBuffer, lengthBuffer);
    if (!Rte_IsHardTransformerError(retTransformer))
    {
      retTransformer |= ComXf_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5(&(transformationBuffer_0[0]), lengthBuffer, data); /* PRQA S 2983 */ /* MD_Rte_2983 */
    }
    if (ret != RTE_E_COM_STOPPED)
    {
      if (Rte_IsHardTransformerError(retTransformer))
      {
        ret = RTE_E_HARD_TRANSFORMER_ERROR;
      }
      else if (retTransformer != RTE_E_OK) /* PRQA S 2004 */ /* MD_MSR_EmptyClause */
      {
        ret = RTE_E_SOFT_TRANSFORMER_ERROR;
      }
    }
  }
  if ((Rte_VarCfgPtr == &Rte_Config_Variant_2) || (Rte_VarCfgPtr == &Rte_Config_Variant_3))
  {
    *data = Rte_XDIS_3hgr8e8bezudw2pavuh9wy4bv;
    ret = RTE_E_UNCONNECTED;
  }
  if (ret != RTE_E_COM_STOPPED)
  {
    if (Rte_OsApplication_NonTrusted_Core0_RxNeverReceivedFlags.Rte_RxNeverReceived_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5 == 0U)
    {
      ret = RTE_E_NEVER_RECEIVED;
    }
  }
  if (Rte_OsApplication_NonTrusted_Core0_RxTimeoutFlags.Rte_RxTimeout_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5 != 0U)
  {
    ret |= RTE_E_MAX_AGE_EXCEEDED; /* PRQA S 2986 */ /* MD_Rte_2986 */
  }

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlIsoMonResults_DccbIsoMonResults(P2VAR(signalGrp_DccbIsoMonResults_ImpType, AUTOMATIC, RTE_COMHDL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CondMon_CondMonIsoMonResults_DccbIsoMonResults; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ConCtrl_ConCtrlCddContactorStatus_DccbCddContactorStatus(P2VAR(signalGrp_DccbCddContactorStatus_ImpType, AUTOMATIC, RTE_CONCTRL_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CddCc_ConCtrlCddContactorStatus_DccbCddContactorStatus; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CondMon_CondMonCddHvResults_DccbCddHvResults(P2VAR(signalGrp_DccbCddHvResults_ImpType, AUTOMATIC, RTE_CONDMON_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CddHv_CondMonCddHvResults_DccbCddHvResults; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CondMon_CondMonCddIShuntData_DccbCddIShuntData(P2VAR(signalGrp_DccbCddIShuntData_ImpType, AUTOMATIC, RTE_CONDMON_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CddIShunt_CondMonCddIShuntData_DccbCddIShuntData; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CondMon_CondMonCddImdResults_DccbCddImdResults(P2VAR(signalGrp_DccbCddImdResults_ImpType, AUTOMATIC, RTE_CONDMON_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CddImd_CondMonCddImdResults_DccbCddImdResults; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CondMon_CondMonHvilData_DccbHvilAdc(P2VAR(signalGrp_DccbHvilData_ImpType, AUTOMATIC, RTE_CONDMON_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_IoHwAb_CondMonHvilData_DccbHvilAdc; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CondMon_CondMonKl30Data_DccbKl30Data(P2VAR(signalGrp_DccbKl30Data_ImpType, AUTOMATIC, RTE_CONDMON_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_IoHwAb_DccbQmKL30Data_DccbKl30Data; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CondMon_CondMonKl30cVoltage_DccbKl30cVoltage(P2VAR(signalGrp_DccbKl30cVoltage_ImpType, AUTOMATIC, RTE_CONDMON_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_IoHwAb_CondMonKl30cVoltage_DccbKl30cVoltage; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CondMon_CondMonOffboardTemperatures_DccbOffboardTemperatures(P2VAR(signalGrp_DccbOffboardTemperatures_ImpType, AUTOMATIC, RTE_CONDMON_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_IoHwAb_CondMonOffboardTemperatures_DccbOffboardTemperatures; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CondMon_CondMonOnboardTemperature_DccbOnboardTemperature(P2VAR(signalGrp_DccbOnboardTemperatures_ImpType, AUTOMATIC, RTE_CONDMON_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_IoHwAb_CondMonOnboardTemperature_DccbOnboardTemperature; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_IoHwAb_CondMonAuxRelayCmd_DccbAuxRelayCmd(P2VAR(IOHWAB_UINT8, AUTOMATIC, RTE_IOHWAB_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  *(data) = Rte_CondMon_CondMonAuxRelayCmd_DccbAuxRelayCmd; /* PRQA S 1339, 2982 */ /* MD_Rte_1339, MD_Rte_2982 */

  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StartApplication_PpSignal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx_DeSignal_StartAppl_RxCtrl_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_09591065_Rx(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_StartApplication_PpSignal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx_DeSignal_StartAppl_RxData_MyECU_omsg_StartAppl_Rx_MyECU_oCAN_315f9453_Rx(P2VAR(uint8, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) data) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  *data = 0U;

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Internal C/S connections
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Access_Control_List_Version_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Access_Control_List_Version_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Backend_CA_Certificate_Identification_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Backend_CA_Certificate_Identification_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Backend_CA_Certificate_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Backend_CA_Certificate_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Backend_CA_Certificate_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  DataLength = DataLength;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Calculated_Checksum_for_complete_Variant_Coding_set_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Calculated_Checksum_for_complete_Variant_Coding_set_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Configuration_Write_Counter_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Configuration_Write_Counter_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Current_Operating_Time_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Current_Operating_Time_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_ConditionCheckRead(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Diagnostic_Authentication_Certificate_Identification_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Diagnostic_Authentication_Certificate_Identification_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Diagnostic_Authentication_Certificate_Identification_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  DataLength = DataLength;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Diagnostic_Trace_Memory_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Diagnostic_Trace_Memory_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Diagnostic_Trace_Memory_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  DataLength = DataLength;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Diagnostic_Trace_Memory_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  DataLength = DataLength;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Diagnostic_User_Role_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Diagnostic_User_Role_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_ECU_Certificate_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_ECU_Certificate_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_ECU_Certificate_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  DataLength = DataLength;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_GVC_update_time_stamp_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_GVC_update_time_stamp_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Global_Time_Sync_Measured_Values_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Global_Time_Sync_Measured_Values_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_High_Voltage_Lock_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_High_Voltage_Lock_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_High_Voltage_Lock_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_IO_Manual_HVDC_contactor_control_ControlStatus_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_IO_Manual_HVDC_contactor_control_ControlStatus_ReturnControlToECU(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_IO_Manual_HVDC_contactor_control_ControlStatus_ShortTermAdjustment(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Number_of_available_Onboard_analog_values_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Number_of_available_Onboard_analog_values_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Number_of_available_discrete_value_bytes_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Number_of_available_discrete_value_bytes_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_PV_Dummy_Snapshotdata_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_PV_Dummy_Snapshotdata_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_PV_Fuse_state_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_PV_Fuse_state_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_PV_HVDC_current_evaluation_control_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_PV_HVDC_current_evaluation_control_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Real_Time_Offset_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Real_Time_Offset_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Root_CA_Certificate_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Root_CA_Certificate_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Root_CA_Certificate_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  DataLength = DataLength;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Secured_System_Date_and_Time_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Secured_System_Date_and_Time_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Security_Event_Log_Current_Counter_Values_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Security_Event_Log_Current_Counter_Values_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Security_Event_Log_Current_Counter_Values_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  DataLength = DataLength;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Security_Event_Log_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Security_Event_Log_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Security_Event_Log_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  DataLength = DataLength;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VC_Counter_values_for_Lifetime_monitoring_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VC_Counter_values_for_Lifetime_monitoring_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VC_Counter_values_for_Lifetime_monitoring_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VC_Current_Evaluation_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VC_Current_Evaluation_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VC_Current_Evaluation_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VC_Current_Thresholds_for_Lifetime_monitoring_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VC_Current_Thresholds_for_Lifetime_monitoring_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VC_Current_Thresholds_for_Lifetime_monitoring_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VC_E2E_Protection_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VC_E2E_Protection_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VC_E2E_Protection_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VIN_Odometer_Counter_Limit_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VIN_Odometer_Counter_Limit_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VIN_Odometer_Counter_Limit_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VIN_Odometer_Counter_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VIN_Odometer_Counter_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_VIN_Odometer_Counter_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Vehicle_Odometer_in_Low_Resolution_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Vehicle_Odometer_in_Low_Resolution_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_CalculateChecksumForConfigurationData_Start_Start(P2CONST(Dcm_StartDataIn_Routine_CalculateChecksumForConfigurationData_Start_In_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) In_ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_CalculateChecksumForConfigurationData_Start_Out_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  In_ReqData = In_ReqData;
  OpStatus = OpStatus;
  Out_ResData = Out_ResData;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_ECU_I_O_Test_Start_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_ECU_I_O_Test_Start_Out_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_ResData = Out_ResData;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_ECU_I_O_Test_Start_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_ECU_I_O_Test_Start_Out_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_ResData = Out_ResData;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_ECU_I_O_Test_Start_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_ECU_I_O_Test_Start_Out_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_ResData = Out_ResData;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_FaultMem_Read_E_E_Data_Start(P2CONST(Dcm_StartDataIn_Routine_FaultMem_Read_E_E_Data_In_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) In_ReqData, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  In_ReqData = In_ReqData;
  OpStatus = OpStatus;
  Out_ResData = Out_ResData;
  DataLength = DataLength;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_ReloadOriginalSupplierConfiguration_Start_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_ReloadOriginalSupplierConfiguration_Start_Out_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_ResData = Out_ResData;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Reload_Supplier_Delivery_State_Start_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_Reload_Supplier_Delivery_State_Start_Out_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Out_ResData = Out_ResData;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Flashen_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Key = Key;
  OpStatus = OpStatus;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Flashen_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  OpStatus = OpStatus;
  Seed = Seed;
  ErrorCode = ErrorCode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x03f0e2_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x0bf8f0_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x18f8ef_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x1ae0f3_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x26f0e2_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x2be0f3_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x2ce0f3_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x39e0ff_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x40f0e2_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x70e7e3_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x70e7e4_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x70e7e5_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x71e7e3_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x71e7e4_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x71e7e5_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x72e7e3_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x72e7e4_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x72e7ff_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x73e7e3_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x73e7e4_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x73e7ff_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x74e7e7_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x75e7e7_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x76e7e7_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x77e7e7_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x78e7f4_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x79e7e0_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x79e7e1_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x79e7ff_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x7ae7e0_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x7be7e6_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x7ce7e3_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x7ce7e4_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x7ce7eb_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x7de7e2_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x7de7e3_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x7de7e4_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x7ee7e2_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x7ee7e3_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x7ee7e4_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x7fe7e0_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x7fe7e1_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x80e7e0_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x80e7e1_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x80e7e2_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x80e7e5_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x81e7e3_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x81e7e4_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x81e7e5_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x82e7e3_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x82e7e4_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x82e7e5_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x83e7e2_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x84e7ff_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x85e7e3_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x85e7e4_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x85e7e5_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x85e7ff_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x86e7e2_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0x8fe7eb_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0xa4e7ee_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0xa9e7e6_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0xf02001_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0xf02012_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBFaultDetectCtr_DTC_0xf02015_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  FaultDetectionCounter = FaultDetectionCounter;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_Data_DID_0x133_CombinedSignal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_Data_DID_0x400_CombinedSignal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_Data_DID_0x401_CombinedSignal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_Data_DID_0x403_CombinedSignal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_Data_DID_0x408_Contactor_State_Parameters1_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_Data_DID_0x40a_CombinedSignal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_Data_DID_0x40c_Maximum_temperature_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_Data_DID_0x40e_CombinedSignal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_Data_StandardEnvironmentData_External_Tester_Present_Flag_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_StartApplication_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data) /* PRQA S 1505, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  StartApplication_DIAG_DemReadData(Data);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_Data_DID_0x133_CombinedSignal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_Data_DID_0x400_CombinedSignal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_Data_DID_0x401_CombinedSignal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_Data_DID_0x403_CombinedSignal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_Data_DID_0x408_Contactor_State_Parameters1_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_Data_DID_0x40a_CombinedSignal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_Data_DID_0x40c_Maximum_temperature_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_Data_DID_0x40e_CombinedSignal_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_Data_StandardEnvironmentData_External_Tester_Present_Flag_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemSatellite_0_CBReadData_DemDataElementClass_StartApplication_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) Data) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  Data = Data;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpDemOpCycle_PowerCycle_SetOperationCycleState(Dem_OperationCycleStateType CycleState) /* PRQA S 1505, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = Dem_SetOperationCycleState((uint8)1, CycleState);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpDiagnosticMonitor_DEM_EVENT_StartApplication_SetEventStatus(Dem_EventStatusType EventStatus) /* PRQA S 1505, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = Dem_SetEventStatus((Dem_EventIdType)1, EventStatus);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpIdentityManagerInformation_GetVariant(P2VAR(EnumActiveVariantType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) Variant) /* PRQA S 1505, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  StartApplicationIdentityManagerInformation_GetVariant(Variant);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock1_ReadBlock(dtRef_VOID DstPtr) /* PRQA S 1505, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = NvM_ReadBlock((NvM_BlockIdType)2, DstPtr);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock1_WriteBlock(dtRef_const_VOID SrcPtr) /* PRQA S 1505, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = NvM_WriteBlock((NvM_BlockIdType)2, SrcPtr);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock2_ReadBlock(dtRef_VOID DstPtr) /* PRQA S 1505, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = NvM_ReadBlock((NvM_BlockIdType)3, DstPtr);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_PpPS_StartApplication_NvMBlock2_WriteBlock(dtRef_const_VOID SrcPtr) /* PRQA S 1505, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_Qac */
{
  Std_ReturnType ret;

  ret = NvM_WriteBlock((NvM_BlockIdType)3, SrcPtr);

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_CAN_52ce3533_GetCurrentComMode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ComMode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ComMode = ComMode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_CAN_52ce3533_RequestComMode(ComM_ModeType ComMode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ComMode = ComMode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_Chademo_445f6a37_GetCurrentComMode(P2VAR(ComM_ModeType, AUTOMATIC, RTE_STARTAPPLICATION_APPL_VAR) ComMode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ComMode = ComMode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_StartApplication_UR_CN_Chademo_445f6a37_RequestComMode(ComM_ModeType ComMode) /* PRQA S 1505, 3206, 3673 */ /* MD_MSR_Rule8.7, MD_Rte_3206, MD_Rte_Qac */
{
  Std_ReturnType ret = RTE_E_UNCONNECTED; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  ComMode = ComMode;
  /* call to server runnable removed as client is never triggered */

  return ret;
}


/**********************************************************************************************************************
 * Queue handling functions
 *********************************************************************************************************************/

RTE_LOCAL FUNC(Rte_QReturnType, RTE_CODE) Rte_QUnqueueElementOsApplication_NonTrusted_Core0(Rte_QIndexType q, P2VAR(void, AUTOMATIC, RTE_APPL_VAR) pData)
{
  Rte_QReturnType ret = RTE_Q_EMPTY;
  P2VAR(Rte_QRamInfoType, AUTOMATIC, RTE_VAR_NOINIT) pRamI = &(Rte_QRamInfo[q]);
  P2CONST(Rte_QRomInfoType, AUTOMATIC, RTE_CONST) pRomI = &(Rte_QRomInfo[q]);

  Rte_DisableOSInterrupts(); /* PRQA S 1881, 4558 */ /* MD_Rte_Os, MD_Rte_Os */
  if (0U < pRamI->Rte_ElementCtr)
  {
    uint8_least readCtr = 0U;
    pRamI->Rte_ReadCtr = (uint8)readCtr;
    pRamI->Rte_ElementCtr--;
    Rte_MemCpy(pData, (void *)&((uint8 *)pRomI->Rte_BasePtr)[readCtr * pRomI->Rte_BytesPerElement], pRomI->Rte_BytesPerElement); /* PRQA S 0314, 0315, 0316 */ /* MD_Rte_0314, MD_Rte_0315, MD_Rte_0316 */
    ret = RTE_Q_OK;
  }
  Rte_EnableOSInterrupts(); /* PRQA S 1881, 4558, 2983 */ /* MD_Rte_Os, MD_Rte_Os, MD_Rte_2983 */

  return(ret);
}


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_BswM_Switch_BswMSwitchPort_DcmEcuReset(Dcm_EcuResetType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_ESH_Mode nextMode) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  uint8 internalIndexNextMode = Rte_GetInternalModeIndex_BswM_ESH_Mode(nextMode);
  uint8 internalIndexCurrentMode;
  BswM_ESH_Mode currentMode;
  SuspendOSInterrupts();
  currentMode = Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;
  internalIndexCurrentMode = Rte_GetInternalModeIndex_BswM_ESH_Mode(currentMode);
  if (internalIndexNextMode >= 5U)
  {
    ResumeOSInterrupts();
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT);
    ret = RTE_E_LIMIT;
  }
  else if (internalIndexCurrentMode >= 5U)
  {
    ResumeOSInterrupts();
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE);
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode = nextMode;
    ResumeOSInterrupts();
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */


/**********************************************************************************************************************
 * Mode reading API (Rte_Mode)
 *********************************************************************************************************************/

FUNC(BswM_ESH_Mode, RTE_CODE) Rte_Mode_BswM_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode(void) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  BswM_ESH_Mode curMode;
  curMode = Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;
  return curMode;
}

FUNC(Dcm_EcuResetType, RTE_CODE) Rte_Mode_BswM_Notification_SwcModeNotification_DcmEcuReset_DcmEcuReset(void) /* PRQA S 3408 */ /* MD_Rte_3408 */
{
  Dcm_EcuResetType curMode;
  curMode = Rte_ModeMachine_Dcm_DcmEcuReset_DcmEcuReset;
  return curMode;
}


/**********************************************************************************************************************
 * Transmission/Mode Switch Acknowledgement handling (Rte_Feedback/Rte_SwitchAck)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset(void)
{
  Std_ReturnType ret = RTE_E_TRANSMIT_ACK; /* PRQA S 2981 */ /* MD_MSR_RetVal */


  return ret;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_DCCB1_CHARGING_CANFD1_6y10e01y59ma8wcki4sk79qtl_0c967029_DcmCommunicationControl_ComMConf_ComMChannel_DCCB1_CHARGING_CANFD1_6y10e01y59ma8wcki4sk79qtl_0c967029(Dcm_CommunicationModeType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_DCCB2_CHARGING_CANFD2_exo9e2azzcxb7exsqkywa0tvr_85e2c9dd_DcmCommunicationControl_ComMConf_ComMChannel_DCCB2_CHARGING_CANFD2_exo9e2azzcxb7exsqkywa0tvr_85e2c9dd(Dcm_CommunicationModeType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_EPTOce_EAD_CANFD_6mekclq1qycdsdmnodw1l2m68_27075fff_DcmCommunicationControl_ComMConf_ComMChannel_EPTOce_EAD_CANFD_6mekclq1qycdsdmnodw1l2m68_27075fff(Dcm_CommunicationModeType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting(Dcm_ControlDtcSettingType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset(Dcm_EcuResetType nextMode) /* PRQA S 1505 */ /* MD_MSR_Rule8.7 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  uint8 internalIndexNextMode = Rte_GetInternalModeIndex_Dcm_DcmEcuReset(nextMode);
  uint8 internalIndexCurrentMode;
  Dcm_EcuResetType currentMode;
  SuspendOSInterrupts();
  currentMode = Rte_ModeMachine_Dcm_DcmEcuReset_DcmEcuReset;
  internalIndexCurrentMode = Rte_GetInternalModeIndex_Dcm_DcmEcuReset(currentMode);
  if (internalIndexNextMode >= 7U)
  {
    ResumeOSInterrupts();
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODEARGUMENT);
    ret = RTE_E_LIMIT;
  }
  else if (internalIndexCurrentMode >= 7U)
  {
    ResumeOSInterrupts();
    Rte_CallDetReportError(RTE_SWITCH_SERVICE_ID, RTE_E_DET_MODESTATE);
    ret = RTE_E_LIMIT;
  }
  else
  {
    Rte_ModeMachine_Dcm_DcmEcuReset_DcmEcuReset = nextMode;
    Rte_OsApplication_NonTrusted_Core0_AckFlags.Rte_ModeSwitchAck_Dcm_DcmEcuReset_DcmEcuReset_Ack = 1U;
    ResumeOSInterrupts();
  }

  return ret;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */


/**********************************************************************************************************************
 * Transmission/Mode Switch Acknowledgement handling (Rte_Feedback/Rte_SwitchAck)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_EcuM_currentMode_currentMode(void)
{

  return RTE_E_UNCONNECTED;
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */


/**********************************************************************************************************************
 * Mode Switch API (Rte_Switch)
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_EcuM_currentMode_currentMode(EcuM_StateType nextMode) /* PRQA S 1505, 3206 */ /* MD_MSR_Rule8.7, MD_Rte_3206 */
{
  Std_ReturnType ret = RTE_E_OK; /* PRQA S 2981 */ /* MD_MSR_RetVal */

  nextMode = nextMode;

  return ret;
}


/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     Default_BSW_Async_Task
 * Priority: 30
 * Schedule: NON
 *********************************************************************************************************************/
TASK(Default_BSW_Async_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms | Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms | Rte_Ev_Cyclic_Default_BSW_Async_Task_0_10ms | Rte_Ev_Run_CddHv_CddHv_Runnable_Cyclic); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(Default_BSW_Async_Task, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms | Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms | Rte_Ev_Cyclic_Default_BSW_Async_Task_0_10ms | Rte_Ev_Run_CddHv_CddHv_Runnable_Cyclic)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      CanNm_MainFunction();

      /* call schedulable entity */
      CanSM_MainFunction();

      /* call schedulable entity */
      CanTp_MainFunctionRx();

      /* call schedulable entity */
      CanTp_MainFunctionTx();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      CanXcp_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Can_MainFunction_BusOff();

      /* call schedulable entity */
      Can_MainFunction_Mode();

      /* call schedulable entity */
      Can_MainFunction_Wakeup();

      /* call schedulable entity */
      Can_MainFunction_Write();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms) != (EventMaskType)0)
    {
      /* call runnable */
      ComM_MainFunction_0(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      BswM_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      EcuM_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call schedulable entity */
      Rte_ComSendSignalProxyPeriodic();

      /* call schedulable entity */
      Xcp_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      CddCc_Runnable_Cyclic(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_CddHv_CddHv_Runnable_Cyclic) != (EventMaskType)0)
    {
      /* call runnable */
      CddHv_Runnable_Cyclic(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      CddIShunt_Runnable_Cyclic(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      CddImd_Runnable_Cyclic(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      Dem_MasterMainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      Dem_SatelliteMainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Ea_MainFunction();
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      Dcm_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      NvM_MainFunction(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms) != (EventMaskType)0)
    {
      /* call schedulable entity */
      Com_MainFunctionRx_ComMainFunctionRx();

      /* call schedulable entity */
      Com_MainFunctionTx_ComMainFunctionTx();

      /* call runnable */
      ComM_MainFunction_1(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      ComM_MainFunction_2(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call schedulable entity */
      Eep_MainFunction();
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     StartApplication_Appl_Init_Task
 * Priority: 45
 * Schedule: NON
 *********************************************************************************************************************/
TASK(StartApplication_Appl_Init_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{

  /* call runnable */
  StartApplication_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  ModeMgr_PreInit(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  ComHdl_PreInit(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  CondMon_PreInit(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  ConCtrl_PreInit(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  FaultMgr_PreInit(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  ModeMgr_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  ComHdl_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  CondMon_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  ConCtrl_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  /* call runnable */
  FaultMgr_Init(); /* PRQA S 2987 */ /* MD_Rte_2987 */

  (void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

/**********************************************************************************************************************
 * Task:     StartApplication_Appl_Task
 * Priority: 5
 * Schedule: NON
 *********************************************************************************************************************/
TASK(StartApplication_Appl_Task) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_Unreachable */
{
  EventMaskType ev;

  for(;;)
  {
    (void)WaitEvent(Rte_Ev_Cyclic_StartApplication_Appl_Task_0_10ms | Rte_Ev_Run_IoHwAb_IoHwAb_IoHwAb_Cyclic5ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic1000ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic1ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic250ms | Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxCtrl | Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxData); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)GetEvent(StartApplication_Appl_Task, &ev); /* PRQA S 3417 */ /* MD_Rte_Os */
    (void)ClearEvent(ev & (Rte_Ev_Cyclic_StartApplication_Appl_Task_0_10ms | Rte_Ev_Run_IoHwAb_IoHwAb_IoHwAb_Cyclic5ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic1000ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic1ms | Rte_Ev_Run_StartApplication_StartApplication_Cyclic250ms | Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxCtrl | Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxData)); /* PRQA S 3417 */ /* MD_Rte_Os */

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_Cyclic1000ms) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_Cyclic1000ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_StartApplication_Appl_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_Cyclic10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_Cyclic1ms) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_Cyclic1ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_Cyclic250ms) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_Cyclic250ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxCtrl) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_OnDataRec_RxCtrl(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_StartApplication_StartApplication_OnDataRec_RxData) != (EventMaskType)0)
    {
      /* call runnable */
      StartApplication_OnDataRec_RxData(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Run_IoHwAb_IoHwAb_IoHwAb_Cyclic5ms) != (EventMaskType)0)
    {
      /* call runnable */
      IoHwAb_IoHwAb_Cyclic5ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }

    if ((ev & Rte_Ev_Cyclic_StartApplication_Appl_Task_0_10ms) != (EventMaskType)0)
    {
      /* call runnable */
      IoHwAb_IoHwAb_Cyclic10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      ModeMgr_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      ComHdl_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      CondMon_Cyclic10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      ConCtrl_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */

      /* call runnable */
      FaultMgr_10ms(); /* PRQA S 2987 */ /* MD_Rte_2987 */
    }
  }
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0314:  MISRA rule: Dir1.1
     Reason:     Pointer cast to void because a direct byte access is necessary.
     Risk:       No functional risk. Only a cast to void is performed.
     Prevention: Not required.

   MD_Rte_0315:  MISRA rule: Dir1.1
     Reason:     Pointer cast to void because generic access is necessary.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_0316:  MISRA rule: Dir1.1
     Reason:     Pointer cast to uint8* because a direct byte access is necessary.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_1339:  MISRA rule: Rule17.8
     Reason:     Passing elements by pointer is a well known concept.
     Risk:       No functional risk. Data flow is handled with care.
     Prevention: Not required.

   MD_Rte_1340:  MISRA rule: Rule17.8
     Reason:     Passing elements by pointer is a well known concept.
     Risk:       No functional risk. Data flow is handled with care.
     Prevention: Not required.

   MD_Rte_1514:  MISRA rule: Rule8.9
     Reason:     Because of external definition, misra does not see the call.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_1533:  MISRA rule: Rule8.9
     Reason:     Object is referenced by more than one function in different configurations.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_2982:  MISRA rule: Rule2.2
     Reason:     Used to simplify code generation.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_2983:  MISRA rule: Rule2.2
     Reason:     For generated code it is difficult to check the usage of each object.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_2986:  MISRA rule: Rule2.2
     Reason:     Used to simplify code generation.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_2987:  MISRA rule: Rule2.2
     Reason:     Used to simplify code generation.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: Rule2.7
     Reason:     The parameter are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3408:  MISRA rule: Rule8.4
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Qac:
     Reason:     This justification is used as summary justification for all deviations caused by wrong analysis tool results.
                 The used analysis tool QAC 9.0 sometimes creates wrong messages. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
