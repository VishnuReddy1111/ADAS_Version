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
 *             File:  Rte_ComHdl.h
 *           Config:  CBD2100170.dpa
 *      ECU-Project:  CBD2100170
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2100170
 *
 *      Description:  Application header file for SW-C <ComHdl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_COMHDL_H
# define RTE_COMHDL_H

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

# include "Rte_ComHdl_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(DccbActiveDischargeCmd_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlActiveDischargeCmd_DccbActiveDischargeCmd;
extern VAR(DccbCanCommStatus_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlCanCommStatus_DccbCanCommStatus;
extern VAR(DccbChargeCouplerConnectorStatus_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlChargeCouplerConnectorStatus_DccbChargeCouplerConnectorStatus;
extern VAR(DccbChargeRequest_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlChargeRequest_DccbChargeRequest;
extern VAR(DccbConSwitchRequest_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlConSwitchRequest_DccbConSwitchRequest;
extern VAR(DccbEmergShutdownRequest_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlEmergShutdownRequest_DccbEmergShutdownRequest;
extern VAR(DccbHvbLinkVoltage_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlHvbLinkVoltage_DccbHvbLinkVoltage;
extern VAR(DccbIgnitionStatus_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlIgnitionStatus_DccbIgnitionStatus;
extern VAR(DccbIsoMonQuickTest_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlIsoMonQuickTest_DccbIsoMonQuickTest;
extern VAR(DccbIsoMonReq_ImpType, RTE_VAR_INIT) Rte_ComHdl_ComHdlIsoMonReq_DccbIsoMonReq;
extern VAR(DccbConSwitchActlState_ImpType, RTE_VAR_INIT) Rte_ConCtrl_ConCtrlConSwitchActlState_DccbConSwitchActlState;
extern VAR(DccbConSwitchCurrent_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonConSwitchCurrent_DccbConSwitchCurrent;
extern VAR(DccbEcuMode_ImpType, RTE_VAR_INIT) Rte_ModeMgr_ModeMgrEcuVariant_DccbEcuVariant;
extern VAR(DccbEnergyRequest_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonEnergyRequest_DccbEnergyRequest;
extern VAR(DccbContactorControlErrorState_ImpType, RTE_VAR_INIT) Rte_ConCtrl_ConCtrlConErrorStatus_DccbContactorControlErrorStatus;
extern VAR(DccbFaultDetected_ImpType, RTE_VAR_INIT) Rte_FaultMgr_FaultMgrFaultDetected_DccbFaultDetected;
extern VAR(DccbHvdcMaxCurLim_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonHvdcMaxCurLim_DccbHvdcMaxCurLim;
extern VAR(DccbInterlockState_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonInterlockStateLoop1_DccbInterlockState;
extern VAR(DccbInterlockState_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonInterlockStateLoop2_DccbInterlockState;
extern VAR(DccbInterlockState_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonInterlockStateLoop3_DccbInterlockState;
extern VAR(DccbInterlockState_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonInterlockStateLoop4_DccbInterlockState;
extern VAR(DccbIsoMonStatus_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonIsoMonStatus_DccbIsoMonStatus;
extern VAR(DccbKl30cStatus_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonKl30cStatus_DccbKl30cStatus;
extern VAR(DccbMaxTemperature_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonMaxTemperature_DccbMaxTemperature;
extern VAR(DccbModeMgrState_ImpType, RTE_VAR_INIT) Rte_ModeMgr_ModeMgrModeMgrState_DccbModeMgrState;
extern VAR(DccbShortCircuitDetected_ImpType, RTE_VAR_INIT) Rte_CondMon_CondMonShortCircuitDetected_DccbShortCircuitDetected;

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ComHdlActiveDischargeCmd_DccbActiveDischargeCmd (0U)
#  define Rte_InitValue_ComHdlBmmC01_HVB_LinkVolt_Cval (65535U)
#  define Rte_InitValue_ComHdlCanCommStatus_DccbCanCommStatus (0U)
#  define Rte_InitValue_ComHdlChargeCouplerConnectorStatus_DccbChargeCouplerConnectorStatus (5U)
#  define Rte_InitValue_ComHdlChargeRequest_DccbChargeRequest (0U)
#  define Rte_InitValue_ComHdlConSwitchActlState_DccbConSwitchActlState (3U)
#  define Rte_InitValue_ComHdlConSwitchCurrent_DccbConSwitchCurrent (75000)
#  define Rte_InitValue_ComHdlEcuVariant_DccbEcuVariant (3U)
#  define Rte_InitValue_ComHdlEisC02_IgnSw_Stat_EIS (15U)
#  define Rte_InitValue_ComHdlEmergShutdownRequest_DccbEmergShutdownRequest (2U)
#  define Rte_InitValue_ComHdlEnergyRequest_DccbEnergyRequest (2U)
#  define Rte_InitValue_ComHdlErrorStatus_DccbContactorControlErrorStatus (0U)
#  define Rte_InitValue_ComHdlFaultDetected_DccbFaultDetected (0U)
#  define Rte_InitValue_ComHdlHvbLinkVoltage_DccbHvbLinkVoltage (4294967295U)
#  define Rte_InitValue_ComHdlHvdcMaxCurLim_DccbHvdcMaxCurLim (65535U)
#  define Rte_InitValue_ComHdlIgnitionStatus_DccbIgnitionStatus (6U)
#  define Rte_InitValue_ComHdlInterlockStateLoop1_DccbInterlockState (3U)
#  define Rte_InitValue_ComHdlInterlockStateLoop2_DccbInterlockState (3U)
#  define Rte_InitValue_ComHdlInterlockStateLoop3_DccbInterlockState (3U)
#  define Rte_InitValue_ComHdlInterlockStateLoop4_DccbInterlockState (3U)
#  define Rte_InitValue_ComHdlIsoMonQuickTest_DccbIsoMonQuickTest (0U)
#  define Rte_InitValue_ComHdlIsoMonReq_DccbIsoMonReq (0U)
#  define Rte_InitValue_ComHdlIsoMonStatus_DccbIsoMonStatus (15U)
#  define Rte_InitValue_ComHdlKl30cStatus_DccbKl30cStatus (3U)
#  define Rte_InitValue_ComHdlMaxTemperature_DccbMaxTemperature (65535U)
#  define Rte_InitValue_ComHdlModeMgrState_DccbModeMgrState (3U)
#  define Rte_InitValue_ComHdlShortCircuitDetected_DccbShortCircuitDetected (0U)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Receive_ComHdl_ComHdlScaC2_IgnSw_Stat_SCA(P2VAR(c04_IgnSw_Stat, AUTOMATIC, RTE_COMHDL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlBmmC01_HVB_LinkVolt_Cval(P2VAR(c16_V_0_to_3212k75_0k05, AUTOMATIC, RTE_COMHDL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5(P2VAR(REC_SG_CPC6_C11_AR5_dgfi1nrxtb0voy6rb7ybeonmv, AUTOMATIC, RTE_COMHDL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlConSwitchVoltage_DccbConSwitchVoltage(P2VAR(signalGrp_DccbConSwitchVoltage_ImpType, AUTOMATIC, RTE_COMHDL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5(P2VAR(REC_SG_CPC6_C02_AR5_5wbdxrp8awtkuts7zyf21170w, AUTOMATIC, RTE_COMHDL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5(P2VAR(REC_SG_CPC6_C05_AR5_2ahxpf4cam3pi2le1l2woky78, AUTOMATIC, RTE_COMHDL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5(P2VAR(REC_SG_CPC6_C06_AR5_ulcxeouja3rnfon8plrygyca, AUTOMATIC, RTE_COMHDL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5(P2VAR(REC_SG_CPC6_C16_AR5_1hpstplriukdblrgry0860d7o, AUTOMATIC, RTE_COMHDL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5(P2VAR(REC_SG_CPC6_C22_AR5_cp6wyrd9cg7ec7y2w3khz1gyt, AUTOMATIC, RTE_COMHDL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlEisC02_IgnSw_Stat_EIS(P2VAR(c04_IgnSw_Stat, AUTOMATIC, RTE_COMHDL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5(P2VAR(REC_SG_EVCC1_C01_AR5_515fv9hxb5jrzmunrr9r72aqj, AUTOMATIC, RTE_COMHDL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ComHdl_ComHdlIsoMonResults_DccbIsoMonResults(P2VAR(signalGrp_DccbIsoMonResults_ImpType, AUTOMATIC, RTE_COMHDL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Send_ComHdl_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2(P2CONST(signalGrp_GPM1H1_XMC, AUTOMATIC, RTE_COMHDL_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ComHdl_ComHdlDccb1C01_SG_DCCB1_C01_AR5(P2CONST(REC_SG_DCCB1_C01_AR5_wcyc4oh3vv82se49oenjus1n, AUTOMATIC, RTE_COMHDL_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ComHdl_ComHdlDccb2C01_SG_DCCB2_C01_AR5(P2CONST(REC_SG_DCCB2_C01_AR5_a2qglp2324znbwefnu92uartf, AUTOMATIC, RTE_COMHDL_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ComHdl_ComHdlDccbC02_SG_DCCB1_C02_AR5(P2CONST(REC_SG_DCCB1_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv, AUTOMATIC, RTE_COMHDL_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ComHdl_ComHdlEptoC01_SG_EPTOce_C01_AR5(P2CONST(REC_SG_EPTOce_C01_AR5_1ae8w4ccn5pv3jukyqv8emy5n, AUTOMATIC, RTE_COMHDL_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ComHdl_ComHdlEptoC02_SG_EPTOce_C02_AR5(P2CONST(REC_SG_EPTOce_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv, AUTOMATIC, RTE_COMHDL_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Receive_<p>_<d> (explicit S/R communication with isQueued = true)
 *********************************************************************************************************************/
#  define Rte_Receive_ComHdlScaC2_IgnSw_Stat_SCA Rte_Receive_ComHdl_ComHdlScaC2_IgnSw_Stat_SCA


/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ComHdlBmmC01_HVB_LinkVolt_Cval Rte_Read_ComHdl_ComHdlBmmC01_HVB_LinkVolt_Cval
#  define Rte_Read_ComHdlCPCC11_SG_CPC6_C11_AR5 Rte_Read_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5
#  define Rte_Read_ComHdlConSwitchActlState_DccbConSwitchActlState Rte_Read_ComHdl_ComHdlConSwitchActlState_DccbConSwitchActlState
#  define Rte_Read_ComHdl_ComHdlConSwitchActlState_DccbConSwitchActlState(data) (*(data) = Rte_ConCtrl_ConCtrlConSwitchActlState_DccbConSwitchActlState, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlConSwitchCurrent_DccbConSwitchCurrent Rte_Read_ComHdl_ComHdlConSwitchCurrent_DccbConSwitchCurrent
#  define Rte_Read_ComHdl_ComHdlConSwitchCurrent_DccbConSwitchCurrent(data) (*(data) = Rte_CondMon_CondMonConSwitchCurrent_DccbConSwitchCurrent, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlConSwitchVoltage_DccbConSwitchVoltage Rte_Read_ComHdl_ComHdlConSwitchVoltage_DccbConSwitchVoltage
#  define Rte_Read_ComHdlCpcC02_SG_CPC6_C02_AR5 Rte_Read_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5
#  define Rte_Read_ComHdlCpcC05_SG_CPC6_C05_AR5 Rte_Read_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5
#  define Rte_Read_ComHdlCpcC06_SG_CPC6_C06_AR5 Rte_Read_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5
#  define Rte_Read_ComHdlCpcC16_SG_CPC6_C16_AR5 Rte_Read_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5
#  define Rte_Read_ComHdlCpcC22_SG_CPC6_C22_AR5 Rte_Read_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5
#  define Rte_Read_ComHdlEcuVariant_DccbEcuVariant Rte_Read_ComHdl_ComHdlEcuVariant_DccbEcuVariant
#  define Rte_Read_ComHdl_ComHdlEcuVariant_DccbEcuVariant(data) (*(data) = Rte_ModeMgr_ModeMgrEcuVariant_DccbEcuVariant, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlEisC02_IgnSw_Stat_EIS Rte_Read_ComHdl_ComHdlEisC02_IgnSw_Stat_EIS
#  define Rte_Read_ComHdlEnergyRequest_DccbEnergyRequest Rte_Read_ComHdl_ComHdlEnergyRequest_DccbEnergyRequest
#  define Rte_Read_ComHdl_ComHdlEnergyRequest_DccbEnergyRequest(data) (*(data) = Rte_CondMon_CondMonEnergyRequest_DccbEnergyRequest, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlErrorStatus_DccbContactorControlErrorStatus Rte_Read_ComHdl_ComHdlErrorStatus_DccbContactorControlErrorStatus
#  define Rte_Read_ComHdl_ComHdlErrorStatus_DccbContactorControlErrorStatus(data) (*(data) = Rte_ConCtrl_ConCtrlConErrorStatus_DccbContactorControlErrorStatus, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlEvccC01_SG_EVCC1_C01_AR5 Rte_Read_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5
#  define Rte_Read_ComHdlFaultDetected_DccbFaultDetected Rte_Read_ComHdl_ComHdlFaultDetected_DccbFaultDetected
#  define Rte_Read_ComHdl_ComHdlFaultDetected_DccbFaultDetected(data) (*(data) = Rte_FaultMgr_FaultMgrFaultDetected_DccbFaultDetected, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlHvdcMaxCurLim_DccbHvdcMaxCurLim Rte_Read_ComHdl_ComHdlHvdcMaxCurLim_DccbHvdcMaxCurLim
#  define Rte_Read_ComHdl_ComHdlHvdcMaxCurLim_DccbHvdcMaxCurLim(data) (*(data) = Rte_CondMon_CondMonHvdcMaxCurLim_DccbHvdcMaxCurLim, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlInterlockStateLoop1_DccbInterlockState Rte_Read_ComHdl_ComHdlInterlockStateLoop1_DccbInterlockState
#  define Rte_Read_ComHdl_ComHdlInterlockStateLoop1_DccbInterlockState(data) (*(data) = Rte_CondMon_CondMonInterlockStateLoop1_DccbInterlockState, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlInterlockStateLoop2_DccbInterlockState Rte_Read_ComHdl_ComHdlInterlockStateLoop2_DccbInterlockState
#  define Rte_Read_ComHdl_ComHdlInterlockStateLoop2_DccbInterlockState(data) (*(data) = Rte_CondMon_CondMonInterlockStateLoop2_DccbInterlockState, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlInterlockStateLoop3_DccbInterlockState Rte_Read_ComHdl_ComHdlInterlockStateLoop3_DccbInterlockState
#  define Rte_Read_ComHdl_ComHdlInterlockStateLoop3_DccbInterlockState(data) (*(data) = Rte_CondMon_CondMonInterlockStateLoop3_DccbInterlockState, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlInterlockStateLoop4_DccbInterlockState Rte_Read_ComHdl_ComHdlInterlockStateLoop4_DccbInterlockState
#  define Rte_Read_ComHdl_ComHdlInterlockStateLoop4_DccbInterlockState(data) (*(data) = Rte_CondMon_CondMonInterlockStateLoop4_DccbInterlockState, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlIsoMonResults_DccbIsoMonResults Rte_Read_ComHdl_ComHdlIsoMonResults_DccbIsoMonResults
#  define Rte_Read_ComHdlIsoMonStatus_DccbIsoMonStatus Rte_Read_ComHdl_ComHdlIsoMonStatus_DccbIsoMonStatus
#  define Rte_Read_ComHdl_ComHdlIsoMonStatus_DccbIsoMonStatus(data) (*(data) = Rte_CondMon_CondMonIsoMonStatus_DccbIsoMonStatus, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlKl30cStatus_DccbKl30cStatus Rte_Read_ComHdl_ComHdlKl30cStatus_DccbKl30cStatus
#  define Rte_Read_ComHdl_ComHdlKl30cStatus_DccbKl30cStatus(data) (*(data) = Rte_CondMon_CondMonKl30cStatus_DccbKl30cStatus, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlMaxTemperature_DccbMaxTemperature Rte_Read_ComHdl_ComHdlMaxTemperature_DccbMaxTemperature
#  define Rte_Read_ComHdl_ComHdlMaxTemperature_DccbMaxTemperature(data) (*(data) = Rte_CondMon_CondMonMaxTemperature_DccbMaxTemperature, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlModeMgrState_DccbModeMgrState Rte_Read_ComHdl_ComHdlModeMgrState_DccbModeMgrState
#  define Rte_Read_ComHdl_ComHdlModeMgrState_DccbModeMgrState(data) (*(data) = Rte_ModeMgr_ModeMgrModeMgrState_DccbModeMgrState, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_ComHdlShortCircuitDetected_DccbShortCircuitDetected Rte_Read_ComHdl_ComHdlShortCircuitDetected_DccbShortCircuitDetected
#  define Rte_Read_ComHdl_ComHdlShortCircuitDetected_DccbShortCircuitDetected(data) (*(data) = Rte_CondMon_CondMonShortCircuitDetected_DccbShortCircuitDetected, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Send_<p>_<d> (explicit S/R communication with isQueued = true)
 *********************************************************************************************************************/
#  define Rte_Send_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2 Rte_Send_ComHdl_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_ComHdlActiveDischargeCmd_DccbActiveDischargeCmd Rte_Write_ComHdl_ComHdlActiveDischargeCmd_DccbActiveDischargeCmd
#  define Rte_Write_ComHdl_ComHdlActiveDischargeCmd_DccbActiveDischargeCmd(data) (Rte_ComHdl_ComHdlActiveDischargeCmd_DccbActiveDischargeCmd = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_ComHdlCanCommStatus_DccbCanCommStatus Rte_Write_ComHdl_ComHdlCanCommStatus_DccbCanCommStatus
#  define Rte_Write_ComHdl_ComHdlCanCommStatus_DccbCanCommStatus(data) (Rte_ComHdl_ComHdlCanCommStatus_DccbCanCommStatus = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_ComHdlChargeCouplerConnectorStatus_DccbChargeCouplerConnectorStatus Rte_Write_ComHdl_ComHdlChargeCouplerConnectorStatus_DccbChargeCouplerConnectorStatus
#  define Rte_Write_ComHdl_ComHdlChargeCouplerConnectorStatus_DccbChargeCouplerConnectorStatus(data) (Rte_ComHdl_ComHdlChargeCouplerConnectorStatus_DccbChargeCouplerConnectorStatus = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_ComHdlChargeRequest_DccbChargeRequest Rte_Write_ComHdl_ComHdlChargeRequest_DccbChargeRequest
#  define Rte_Write_ComHdl_ComHdlChargeRequest_DccbChargeRequest(data) (Rte_ComHdl_ComHdlChargeRequest_DccbChargeRequest = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_ComHdlConSwitchRequest_DccbConSwitchRequest Rte_Write_ComHdl_ComHdlConSwitchRequest_DccbConSwitchRequest
#  define Rte_Write_ComHdl_ComHdlConSwitchRequest_DccbConSwitchRequest(data) (Rte_ComHdl_ComHdlConSwitchRequest_DccbConSwitchRequest = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_ComHdlDccb1C01_SG_DCCB1_C01_AR5 Rte_Write_ComHdl_ComHdlDccb1C01_SG_DCCB1_C01_AR5
#  define Rte_Write_ComHdlDccb2C01_SG_DCCB2_C01_AR5 Rte_Write_ComHdl_ComHdlDccb2C01_SG_DCCB2_C01_AR5
#  define Rte_Write_ComHdlDccbC02_SG_DCCB1_C02_AR5 Rte_Write_ComHdl_ComHdlDccbC02_SG_DCCB1_C02_AR5
#  define Rte_Write_ComHdlEmergShutdownRequest_DccbEmergShutdownRequest Rte_Write_ComHdl_ComHdlEmergShutdownRequest_DccbEmergShutdownRequest
#  define Rte_Write_ComHdl_ComHdlEmergShutdownRequest_DccbEmergShutdownRequest(data) (Rte_ComHdl_ComHdlEmergShutdownRequest_DccbEmergShutdownRequest = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_ComHdlEptoC01_SG_EPTOce_C01_AR5 Rte_Write_ComHdl_ComHdlEptoC01_SG_EPTOce_C01_AR5
#  define Rte_Write_ComHdlEptoC02_SG_EPTOce_C02_AR5 Rte_Write_ComHdl_ComHdlEptoC02_SG_EPTOce_C02_AR5
#  define Rte_Write_ComHdlHvbLinkVoltage_DccbHvbLinkVoltage Rte_Write_ComHdl_ComHdlHvbLinkVoltage_DccbHvbLinkVoltage
#  define Rte_Write_ComHdl_ComHdlHvbLinkVoltage_DccbHvbLinkVoltage(data) (Rte_ComHdl_ComHdlHvbLinkVoltage_DccbHvbLinkVoltage = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_ComHdlIgnitionStatus_DccbIgnitionStatus Rte_Write_ComHdl_ComHdlIgnitionStatus_DccbIgnitionStatus
#  define Rte_Write_ComHdl_ComHdlIgnitionStatus_DccbIgnitionStatus(data) (Rte_ComHdl_ComHdlIgnitionStatus_DccbIgnitionStatus = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_ComHdlIsoMonQuickTest_DccbIsoMonQuickTest Rte_Write_ComHdl_ComHdlIsoMonQuickTest_DccbIsoMonQuickTest
#  define Rte_Write_ComHdl_ComHdlIsoMonQuickTest_DccbIsoMonQuickTest(data) (Rte_ComHdl_ComHdlIsoMonQuickTest_DccbIsoMonQuickTest = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_ComHdlIsoMonReq_DccbIsoMonReq Rte_Write_ComHdl_ComHdlIsoMonReq_DccbIsoMonReq
#  define Rte_Write_ComHdl_ComHdlIsoMonReq_DccbIsoMonReq(data) (Rte_ComHdl_ComHdlIsoMonReq_DccbIsoMonReq = (data), ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_NVM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVM_APPL_VAR) ErrorStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_ReadBlock(NvM_BlockIdType parg0, dtRef_VOID DstPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_WriteBlock(NvM_BlockIdType parg0, dtRef_const_VOID SrcPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_NVM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define Rte_Call_DccbComHdlNvm_GetErrorStatus(arg1) (NvM_GetErrorStatus((NvM_BlockIdType)4, arg1))
#  define Rte_Call_DccbComHdlNvm_ReadBlock(arg1) (NvM_ReadBlock((NvM_BlockIdType)4, arg1))
#  define Rte_Call_DccbComHdlNvm_SetRamBlockStatus(arg1) (NvM_SetRamBlockStatus((NvM_BlockIdType)4, arg1))
#  define Rte_Call_DccbComHdlNvm_WriteBlock(arg1) (NvM_WriteBlock((NvM_BlockIdType)4, arg1))

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#   include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(DccbComHdlNvm_ImpType, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_ComHdl_DccbComHdlNvm;

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#   include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  endif

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Pim_DccbComHdlNvm() (&((*RtePim_DccbComHdlNvm())[0]))
#  define RtePim_DccbComHdlNvm() \
  (&Rte_ComHdl_DccbComHdlNvm)
/* PRQA L:L1 */


# endif /* !defined(RTE_CORE) */


# define ComHdl_START_SEC_CODE
# include "ComHdl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ComHdl_10ms ComHdl_10ms
#  define RTE_RUNNABLE_ComHdl_Init ComHdl_Init
#  define RTE_RUNNABLE_ComHdl_PreInit ComHdl_PreInit
# endif

FUNC(void, ComHdl_CODE) ComHdl_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, ComHdl_CODE) ComHdl_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, ComHdl_CODE) ComHdl_PreInit(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define ComHdl_STOP_SEC_CODE
# include "ComHdl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NvMService_AC2_SRBS_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_COMHDL_H */

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
