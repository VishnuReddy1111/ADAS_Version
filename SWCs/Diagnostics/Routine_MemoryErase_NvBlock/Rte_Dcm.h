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
 *             File:  Rte_Dcm.h
 *           Config:  ADAS.dpa
 *      ECU-Project:  ADAS
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2201090
 *
 *      Description:  Application header file for SW-C <Dcm>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_DCM_H
# define RTE_DCM_H

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

# include "Rte_Dcm_Type.h"
# include "Rte_DataHandleType.h"


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(uint8, RTE_CODE) Rte_Mode_Dcm_Dcm_Read_BasicSFDRole_Dcm_Read_BasicSFDRole(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) previousMode, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) nextMode);
FUNC(uint8, RTE_CODE) Rte_Mode_Dcm_Dcm_Read_E2eSFDRole_Dcm_Read_E2eSFDRole(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) previousMode, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) nextMode);
FUNC(uint8, RTE_CODE) Rte_Mode_Dcm_Dcm_Read_EptiSFDRole_Dcm_Read_EptiSFDRole(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) previousMode, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) nextMode);
FUNC(uint8, RTE_CODE) Rte_Mode_Dcm_Dcm_Read_ExtendedSFDRole_Dcm_Read_ExtendedSFDRole(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) previousMode, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) nextMode);
FUNC(uint8, RTE_CODE) Rte_Mode_Dcm_Dcm_Read_OtaSFDRole_Dcm_Read_OtaSFDRole(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) previousMode, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) nextMode);
FUNC(uint8, RTE_CODE) Rte_Mode_Dcm_Dcm_Read_ProductionSFDRole_Dcm_Read_ProductionSFDRole(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) previousMode, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) nextMode);
FUNC(uint8, RTE_CODE) Rte_Mode_Dcm_Dcm_Read_SuperUserSFDRole_Dcm_Read_SuperUserSFDRole(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) previousMode, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_CN_BMC_CAN01_78a85e89_DcmCommunicationControl_ComMConf_ComMChannel_CN_BMC_CAN01_78a85e89(Dcm_CommunicationModeType nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_CN_HCP5_CANFD01_54d90215_DcmCommunicationControl_ComMConf_ComMChannel_CN_HCP5_CANFD01_54d90215(Dcm_CommunicationModeType nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting(Dcm_ControlDtcSettingType nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset(Dcm_EcuResetType nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Hybrid_Kundendienstfehler_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Hybrid_Kundendienstfehler_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Hybrid_Kundendienstfehler_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_IWU_Status_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_IWU_Status_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_IWU_Status_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Mode_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Mode_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Mode_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Status_DCLS_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Status_DCLS_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Status_DCLS_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Strom_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Strom_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Strom_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Vorlade_Zielspannung_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Vorlade_Zielspannung_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_BMC_Vorlade_Zielspannung_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_amount_of_modules_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_amount_of_modules_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_amount_of_modules_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_banks_actual_mode_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_banks_actual_mode_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_banks_actual_mode_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_banks_actual_voltage_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_banks_actual_voltage_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_banks_actual_voltage_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_banks_allowed_modes_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_banks_allowed_modes_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_banks_allowed_modes_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_contactors_actual_states_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_contactors_actual_states_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_contactors_actual_states_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_displayed_state_of_charge_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_displayed_state_of_charge_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_displayed_state_of_charge_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_energy_content_actual_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_energy_content_actual_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_energy_content_actual_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_energy_content_maximum_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_energy_content_maximum_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_energy_content_maximum_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_flow_temperature_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_flow_temperature_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_isolation_measurement_actual_and_requested_state_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_isolation_measurement_actual_and_requested_state_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_isolation_measurement_actual_and_requested_state_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_technical_state_of_charge_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_technical_state_of_charge_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Battery_technical_state_of_charge_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Charisma_requestet_driving_program_hv_battery_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Charisma_requestet_driving_program_hv_battery_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Charisma_requestet_driving_program_hv_battery_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DC_charging_station_actual_voltage_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DC_charging_station_actual_voltage_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DC_charging_station_actual_voltage_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_ConditionCheckRead(P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_ReadData(P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DID_StartApplication_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_part_number_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_part_number_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_part_number_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_part_number_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_part_number_Read_WriteData(P2CONST(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_production_data_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_production_data_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_production_data_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data22ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_production_data_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_production_data_Read_WriteData(P2CONST(Dcm_Data22ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BCUe_part_number_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BCUe_part_number_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BCUe_part_number_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BCUe_part_number_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BCUe_part_number_Read_WriteData(P2CONST(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BMCE_part_number_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BMCE_part_number_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BMCE_part_number_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BMCE_part_number_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BMCE_part_number_Read_WriteData(P2CONST(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BMC_clamp_30c_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BMC_clamp_30c_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BMC_clamp_30c_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BMC_serial_number_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BMC_serial_number_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BMC_serial_number_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data10ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BMC_serial_number_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_BMC_serial_number_Read_WriteData(P2CONST(Dcm_Data10ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Cell_part_number_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Cell_part_number_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Cell_part_number_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Cell_part_number_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Cell_part_number_Read_WriteData(P2CONST(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_HV_battery_modules_actual_voltage_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_HV_battery_modules_actual_voltage_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_HV_battery_modules_actual_voltage_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Module_part_number_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Module_part_number_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Module_part_number_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Module_part_number_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Module_part_number_Read_WriteData(P2CONST(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data25ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileVersi_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileVersi_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileVersi_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data6ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentBasicSettiStatu_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentBasicSettiStatu_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentBasicSettiStatu_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_SOH_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_SOH_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_SOH_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data26ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_WriteData(P2CONST(Dcm_Data26ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0x0EF_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0x0EF_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0x0EF_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data20ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data20ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Finge_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Finge_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Finge_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data9ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Finge_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Finge_Read_WriteData(P2CONST(Dcm_Data9ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Milea_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Milea_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Milea_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_MonitStatuSinceDTCsClear_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_MonitStatuSinceDTCsClear_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_MonitStatuSinceDTCsClear_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuECUIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuECUIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuECUIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu1_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu1_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu1_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu2_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu2_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu2_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_10_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_10_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_10_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_11_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_11_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_11_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_12_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_12_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_12_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_13_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_13_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_13_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data6ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_14_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_14_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_14_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_15_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_15_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_15_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_16_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_16_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_16_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_17_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_17_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_17_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_18_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_18_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_18_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_19_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_19_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_19_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_20_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_20_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_20_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data110ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_22_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_22_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_22_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_23_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_23_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_23_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data6ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_24_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_24_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_24_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_25_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_25_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_25_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_26_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_26_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_26_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data27ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data27ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data27ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data27ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data27ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data27ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data27ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data27ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data27ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data27ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data27ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data27ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_6_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_6_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_6_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_7_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_7_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_7_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_8_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_8_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_8_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_6_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_6_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_6_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data12ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data12ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_31_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_31_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_31_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_32_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_32_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_32_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data9ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data48ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_34_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_34_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_34_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_35_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_35_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_35_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_37_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_37_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_37_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_38_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_38_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_38_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_39_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_40_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_40_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_40_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_41_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_41_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_41_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data14ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_42_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_42_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_42_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data64ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data64ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data64ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data64ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data64ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data64ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data64ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data64ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data64ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data64ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data64ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data64ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_45_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_45_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_45_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data6ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data152ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data152ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data152ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data152ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data152ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data152ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data152ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data152ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data152ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data152ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data152ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data152ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_47_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_47_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_47_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_48_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_48_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_48_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_50_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_50_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_50_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_51_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_51_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_51_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_52_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_52_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_52_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data48ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_53_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_53_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_53_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data12ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_55_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_55_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_55_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data110ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_56_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_56_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_56_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data240ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_13_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_13_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_13_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_14_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_14_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_14_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_2_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_2_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_2_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_58_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_58_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_58_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_59_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_59_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_59_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_6_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_6_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_6_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_61_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_61_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_61_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data386ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_71_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_71_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_71_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_72_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_72_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_72_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_73_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_73_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_73_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_74_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_74_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_74_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_82_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_82_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_82_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_83_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_83_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_83_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_84_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_84_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_84_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_WriteData(P2CONST(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Produ_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Produ_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Produ_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Produ_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Produ_Read_WriteData(P2CONST(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROECUPr_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROECUPr_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROECUPr_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data517ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROOBDDr_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROOBDDr_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROOBDDr_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABRORespo_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABRORespo_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABRORespo_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data26ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_UnlocStatuOfECUOfProteOfVehicDiagn_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_UnlocStatuOfECUOfProteOfVehicDiagn_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_UnlocStatuOfECUOfProteOfVehicDiagn_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_WriteData(P2CONST(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data23ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BCUe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BCUe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BCUe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BCUe_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BCUe_Read_WriteData(P2CONST(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BMCE_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BMCE_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BMCE_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BMCE_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BMCE_Read_WriteData(P2CONST(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_assembly_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_assembly_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_assembly_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_assembly_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_assembly_Read_WriteData(P2CONST(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_Spannung_Nebenverbraucher_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_Spannung_Nebenverbraucher_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_Spannung_Nebenverbraucher_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_continuous_charging_power_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_continuous_charging_power_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_continuous_charging_power_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_continuous_discharge_power_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_continuous_discharge_power_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_continuous_discharge_power_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_charging_current_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_charging_current_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_charging_current_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_charging_power_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_charging_power_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_charging_power_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_discharge_current_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_discharge_current_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_discharge_current_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_discharge_power_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_discharge_power_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_discharge_power_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_performance_indicator_charging_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_performance_indicator_charging_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_performance_indicator_charging_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_performance_indicator_discharging_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_performance_indicator_discharging_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_battery_performance_indicator_discharging_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_coordinator_requestet_voltage_hv_battery_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_coordinator_requestet_voltage_hv_battery_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_HV_coordinator_requestet_voltage_hv_battery_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_High_voltage_battery_total_voltage_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_High_voltage_battery_total_voltage_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_High_voltage_battery_total_voltage_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Maximum_Charge_Voltage_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Maximum_Charge_Voltage_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Maximum_Charge_Voltage_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Minimum_Discharge_Voltage_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Minimum_Discharge_Voltage_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Minimum_Discharge_Voltage_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Prozessorauslastung_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Prozessorauslastung_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Prozessorauslastung_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_State_Of_Charge_Battery_customer_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_State_Of_Charge_Battery_customer_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_State_Of_Charge_Battery_customer_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Strommesung_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Strommesung_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Strommesung_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKEoHVLState_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKEoHVLState_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKEoHVLState_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleHVIL_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleHVIL_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleHVIL_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleInter_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleInter_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleInter_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleSD_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleSD_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleSD_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeAvera_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeAvera_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeAvera_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeMaxim_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeMaxim_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeMaxim_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeMinim_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeMinim_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeMinim_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellStateOfChargMaxim_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellStateOfChargMaxim_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellStateOfChargMaxim_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellStateOfChargMinim_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellStateOfChargMinim_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellStateOfChargMinim_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaMaxim_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaMaxim_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaMaxim_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data7ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaMinim_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaMinim_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaMinim_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data7ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaSum_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaSum_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaSum_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode1_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode1_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode1_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode1_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode1_Read_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode2_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode2_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode2_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode2_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode2_Read_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_IsolaResisSysteMinus_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_IsolaResisSysteMinus_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_IsolaResisSysteMinus_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_IsolaResisSystePlus_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_IsolaResisSystePlus_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_IsolaResisSystePlus_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ModeOfProteOfVehicDiagn_ReadDataByIdentifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ModeOfProteOfVehicDiagn_ReadDataByIdentifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ModeOfProteOfVehicDiagn_ReadDataByIdentifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_OBDClassDescr_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_OBDClassDescr_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_OBDClassDescr_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_OBDType_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_OBDType_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_OBDType_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ProgrPreco_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ProgrPreco_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ProgrPreco_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data256ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ProgrPreco_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data50ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_WriteData(P2CONST(Dcm_Data50ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3572ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKGenerInfor_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKGenerInfor_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKGenerInfor_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data512ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data512ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKTimeInfor_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKTimeInfor_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKTimeInfor_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data512ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ServiDiscoState_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ServiDiscoState_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_ServiDiscoState_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StandAmbieCondi_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StandAmbieCondi_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StandAmbieCondi_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data9ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBatteMIL_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBatteMIL_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBatteMIL_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBattePowerReduc_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBattePowerReduc_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBattePowerReduc_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBatteShutoCrash_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBatteShutoCrash_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBatteShutoCrash_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StatePCM_ReadDataByIdent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StatePCM_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StatePCM_ReadDataByIdent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StatuECUStandMode_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StatuECUStandMode_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StatuECUStandMode_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StatuProdu_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StatuProdu_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_StatuProdu_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SysteIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SysteIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_SysteIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_WriteData(P2CONST(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data9ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data9ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data14ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data14ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data9ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data9ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data9ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data9ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data14ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_WriteData(P2CONST(Dcm_Data14ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data14ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data14ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data14ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROVWDat_Read_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROVWDat_Read_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROVWDat_Read_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROVWDat_Read_1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_TABROVWDat_Read_1_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWSysteNameOrEnginType_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWSysteNameOrEnginType_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWSysteNameOrEnginType_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data13ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWWorksSysteName_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWWorksSysteName_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VWWorksSysteName_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VehicIdentNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VehicIdentNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VehicIdentNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data17ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VishnDID_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VishnDID_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VishnDID_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data100ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1022ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data512ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VkmsTrainCount_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VkmsTrainCount_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VkmsTrainCount_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VkmsVkmsv_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VkmsVkmsv_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_TABROW_VkmsVkmsv_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data18ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Zero_Potential_Status_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Zero_Potential_Status_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Zero_Potential_Status_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestFlexibleOutArrayData_Routine_DiagnServi_Get_Charge_Power_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_Start(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_Get_Charge_Power_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_Start(P2CONST(Dcm_StartFlexibleInArrayData_Routine_DiagnServi_Get_Charge_Power_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_Get_Charge_Power_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_Get_Charge_Power_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_Get_Charge_Power_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrDepen_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_RoutiContrCheckProgrDepen_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrDepen_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_RoutiContrCheckProgrDepen_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrPreco_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrPreco_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartFlexibleOutArrayData_Routine_DiagnServi_RoutiContrCheckProgrPreco_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_BeginOfWritiOfSecurDataOfProteOfVehicDiagn_Start_Routine_Start(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_BeginOfWritiOfSecurDataOfProteOfVehicDiagn_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_BeginOfWritiOfSecurDataOfProteOfVehicDiagn_Start_Routine_Start(P2CONST(Dcm_StartFlexibleInArrayData_Routine_DiagnServi_TABROW_BeginOfWritiOfSecurDataOfProteOfVehicDiagn_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_BeginOfWritiOfSecurDataOfProteOfVehicDiagn_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_CalcuConfiStateFingeOfProteOfVehicDiagn_Start_Routine_Start(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_CalcuConfiStateFingeOfProteOfVehicDiagn_Start_Routine_Start(P2CONST(Dcm_StartFlexibleInArrayData_Routine_DiagnServi_TABROW_CalcuConfiStateFingeOfProteOfVehicDiagn_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartFlexibleOutArrayData_Routine_DiagnServi_TABROW_CalcuConfiStateFingeOfProteOfVehicDiagn_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestFlexibleOutArrayData_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiImmedResul_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_NeuRoutiImmedResul_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiImmedResul_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiImmedResul_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_NeuRoutiImmedResul_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NeuRoutiImmedResul_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_RequeConfiOfProteOfVehicDiagn_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_RequeConfiOfProteOfVehicDiagn_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_RequeConfiOfProteOfVehicDiagn_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_RequeConfiOfProteOfVehicDiagn_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartFlexibleOutArrayData_Routine_DiagnServi_TABROW_RequeConfiOfProteOfVehicDiagn_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartFlexibleOutArrayData_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_RequeLoggiDataOfProteOfVehicDiagn_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_RequeLoggiDataOfProteOfVehicDiagn_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_RequeLoggiDataOfProteOfVehicDiagn_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_RequeLoggiDataOfProteOfVehicDiagn_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartFlexibleOutArrayData_Routine_DiagnServi_TABROW_RequeLoggiDataOfProteOfVehicDiagn_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHealiInhib_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_ResetHealiInhib_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetHealiInhib_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHealiInhib_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_ResetHealiInhib_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetHealiInhib_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetProteOfVehicDiagn_Start_Routine_Start(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetProteOfVehicDiagn_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetProteOfVehicDiagn_Start_Routine_Start(P2CONST(Dcm_StartFlexibleInArrayData_Routine_DiagnServi_TABROW_ResetProteOfVehicDiagn_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetProteOfVehicDiagn_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_UnlocProteOfVehicDiagn_Start_Routine_Start(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_UnlocProteOfVehicDiagn_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_UnlocProteOfVehicDiagn_Start_Routine_Start(P2CONST(Dcm_StartFlexibleInArrayData_Routine_DiagnServi_TABROW_UnlocProteOfVehicDiagn_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_UnlocProteOfVehicDiagn_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_Verify_partial_software_checksum_Start_Routine_Start(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_Verify_partial_software_checksum_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_Verify_partial_software_checksum_Start_Routine_Start(P2CONST(Dcm_StartFlexibleInArrayData_Routine_DiagnServi_Verify_partial_software_checksum_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_Verify_partial_software_checksum_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestFlexibleOutArrayData_Routine_Get_Energy_from_SOC_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_Start(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_Get_Energy_from_SOC_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_Start(P2CONST(Dcm_StartFlexibleInArrayData_Routine_Get_Energy_from_SOC_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_Get_Energy_from_SOC_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_Get_Energy_from_SOC_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_Get_Energy_from_SOC_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_CheckCalibPreCondi_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_TABROW_CheckCalibPreCondi_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_CheckCalibPreCondi_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_TABROW_CheckCalibPreCondi_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartFlexibleOutArrayData_Routine_TABROW_CheckCalibPreCondi_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_EndOfWritiSecurDataOfProteOfVehicDiagn_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_TABROW_EndOfWritiSecurDataOfProteOfVehicDiagn_Start_Routine_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_TABROW_EndOfWritiSecurDataOfProteOfVehicDiagn_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_EndOfWritiSecurDataOfProteOfVehicDiagn_Start_Routine_Start(P2CONST(Dcm_StartDataIn_Routine_TABROW_EndOfWritiSecurDataOfProteOfVehicDiagn_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_TABROW_EndOfWritiSecurDataOfProteOfVehicDiagn_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_LockProteOfVehicDiagn_Start_Routine_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_TABROW_LockProteOfVehicDiagn_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_LockProteOfVehicDiagn_Start_Routine_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_TABROW_LockProteOfVehicDiagn_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_Start(P2CONST(Dcm_StartDataIn_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_ReqDataArrayType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_Start(P2CONST(Dcm_StartDataIn_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_VkmsDebug_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_VkmsDebug_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestFlexibleOutArrayData_Routine_TABROW_VkmsDebug_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_VkmsDebug_Start_Routine_Start(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_VkmsDebug_Start_Routine_Start(P2CONST(Dcm_StartFlexibleInArrayData_Routine_TABROW_VkmsDebug_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_VkmsHandlDownl_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_TABROW_VkmsHandlDownl_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_VkmsHandlDownl_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_TABROW_VkmsHandlDownl_Start_Routine_ResDataType, AUTOMATIC, RTE_DCM_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_VkmsHandlDownl_Start_Routine_Start(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_TABROW_VkmsHandlDownl_Start_Routine_Start(P2CONST(Dcm_StartFlexibleInArrayData_Routine_TABROW_VkmsHandlDownl_Start_Routine_ReqDataType, AUTOMATIC, RTE_DCM_APPL_DATA) ReqData, Dcm_OpStatusType OpStatus, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_Dcm_Read_BasicSFDRole_Dcm_Read_BasicSFDRole Rte_Mode_Dcm_Dcm_Read_BasicSFDRole_Dcm_Read_BasicSFDRole
#  define Rte_Mode_Dcm_Read_E2eSFDRole_Dcm_Read_E2eSFDRole Rte_Mode_Dcm_Dcm_Read_E2eSFDRole_Dcm_Read_E2eSFDRole
#  define Rte_Mode_Dcm_Read_EptiSFDRole_Dcm_Read_EptiSFDRole Rte_Mode_Dcm_Dcm_Read_EptiSFDRole_Dcm_Read_EptiSFDRole
#  define Rte_Mode_Dcm_Read_ExtendedSFDRole_Dcm_Read_ExtendedSFDRole Rte_Mode_Dcm_Dcm_Read_ExtendedSFDRole_Dcm_Read_ExtendedSFDRole
#  define Rte_Mode_Dcm_Read_OtaSFDRole_Dcm_Read_OtaSFDRole Rte_Mode_Dcm_Dcm_Read_OtaSFDRole_Dcm_Read_OtaSFDRole
#  define Rte_Mode_Dcm_Read_ProductionSFDRole_Dcm_Read_ProductionSFDRole Rte_Mode_Dcm_Dcm_Read_ProductionSFDRole_Dcm_Read_ProductionSFDRole
#  define Rte_Mode_Dcm_Read_SuperUserSFDRole_Dcm_Read_SuperUserSFDRole Rte_Mode_Dcm_Dcm_Read_SuperUserSFDRole_Dcm_Read_SuperUserSFDRole


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_DcmCommunicationControl_ComMConf_ComMChannel_CN_BMC_CAN01_78a85e89_DcmCommunicationControl_ComMConf_ComMChannel_CN_BMC_CAN01_78a85e89 Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_CN_BMC_CAN01_78a85e89_DcmCommunicationControl_ComMConf_ComMChannel_CN_BMC_CAN01_78a85e89
#  define Rte_Switch_DcmCommunicationControl_ComMConf_ComMChannel_CN_HCP5_CANFD01_54d90215_DcmCommunicationControl_ComMConf_ComMChannel_CN_HCP5_CANFD01_54d90215 Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_CN_HCP5_CANFD01_54d90215_DcmCommunicationControl_ComMConf_ComMChannel_CN_HCP5_CANFD01_54d90215
#  define Rte_Switch_DcmControlDtcSetting_DcmControlDtcSetting Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting
#  define Rte_Switch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl
#  define Rte_Switch_DcmEcuReset_DcmEcuReset Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset


/**********************************************************************************************************************
 * Rte_Feedback_<p>_<m> (mode switch acknowledge)
 *********************************************************************************************************************/
#  define Rte_SwitchAck_DcmEcuReset_DcmEcuReset Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGA_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Data0x0250_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGA_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Data0x0250_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_VAR_NOINIT) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Data0x0250_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4096ByteType, AUTOMATIC, RTE_VAR_NOINIT) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Data0x0250_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DIAGA_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Data0x0250_WriteData(P2CONST(uint8, AUTOMATIC, RTE_VAR_NOINIT) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_VAR_NOINIT) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Data0x0250_WriteData(P2CONST(Dcm_Data4096ByteType, AUTOMATIC, RTE_VAR_NOINIT) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_VAR_NOINIT) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Data0x0245_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGA_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Data0x0245_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGA_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Data0x0245_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_DIAGA_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Data0x0249_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGA_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Data0x0249_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGA_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Data0x0249_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_DIAGA_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Routine0x0254_Start(uint8 Type_of_hash_value, uint8 Type_of_hash, P2CONST(uint8, AUTOMATIC, RTE_DIAGA_APPL_DATA) Individual_hash_value_id, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGA_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DIAGA_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGA_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Routine0x0254_Start(uint8 Type_of_hash_value, uint8 Type_of_hash, P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_DIAGA_APPL_DATA) Individual_hash_value_id, Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4096ByteType, AUTOMATIC, RTE_DIAGA_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DIAGA_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGA_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Routine0x0253_Start(uint8 Type_of_calculation, uint8 Type_of_hash_value, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGA_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DIAGA_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGA_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_DIAGA_APPL_CODE) Routine0x0253_Start(uint8 Type_of_calculation, uint8 Type_of_hash_value, Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4096ByteType, AUTOMATIC, RTE_DIAGA_APPL_VAR) ResData, P2VAR(uint16, AUTOMATIC, RTE_DIAGA_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGA_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif

#  define RTE_STOP_SEC_DIAGA_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_RT_VEHCOMM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_RT_VEHCOMM_APPL_CODE) DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VEHCOMM_APPL_CODE) DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VEHCOMM_APPL_CODE) DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
FUNC(Std_ReturnType, RTE_RT_VEHCOMM_APPL_CODE) DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VEHCOMM_APPL_CODE) DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VEHCOMM_APPL_CODE) DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
FUNC(Std_ReturnType, RTE_RT_VEHCOMM_APPL_CODE) DataServices_Data_TABROW_SFDDevelModeActiv_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VEHCOMM_APPL_CODE) DataServices_Data_TABROW_SFDDevelModeActiv_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VEHCOMM_APPL_CODE) DataServices_Data_TABROW_SFDDevelModeActiv_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VEHCOMM_APPL_CODE) DataServices_Data_TABROW_SFDDevelModeActiv_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VEHCOMM_APPL_CODE) DataServices_Data_TABROW_SFDDevelModeActiv_Read_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif

#  define RTE_STOP_SEC_RT_VEHCOMM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_RT_VISHNU_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_WriteData(P2CONST(Dcm_Data5ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data100ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_TABROW_CanTPData_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_TABROW_CanTPData_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_TABROW_CanTPData_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data150ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_TABROW_CanTPData_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_TABROW_CanTPData_Read_WriteData(P2CONST(Dcm_Data150ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_TABROW_PIMDID_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_TABROW_PIMDID_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_TABROW_PIMDID_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data10ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_TABROW_PIMDID_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_TABROW_PIMDID_Read_WriteData(P2CONST(Dcm_Data10ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_Vishnu_DID_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_Vishnu_DID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_Vishnu_DID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_Vishnu_DID_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) DataLength); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_Vishnu_DID_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) DataServices_Data_Vishnu_DID_WriteData(P2CONST(Dcm_Data8ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) SecurityAccess_Unlock_L1_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) SecurityAccess_Unlock_L1_CompareKey(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif
#  ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) SecurityAccess_Unlock_L1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  else
FUNC(Std_ReturnType, RTE_RT_VISHNU_APPL_CODE) SecurityAccess_Unlock_L1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
#  endif

#  define RTE_STOP_SEC_RT_VISHNU_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define Rte_Call_DataServices_Data_BMC_Hybrid_Kundendienstfehler_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_BMC_Hybrid_Kundendienstfehler_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_BMC_Hybrid_Kundendienstfehler_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_BMC_Hybrid_Kundendienstfehler_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_BMC_IWU_Status_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_BMC_IWU_Status_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_BMC_IWU_Status_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_BMC_IWU_Status_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_BMC_Mode_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_BMC_Mode_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_BMC_Mode_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_BMC_Mode_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_BMC_Status_DCLS_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_BMC_Status_DCLS_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_BMC_Status_DCLS_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_BMC_Status_DCLS_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_BMC_Strom_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_BMC_Strom_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_BMC_Strom_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_BMC_Strom_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_BMC_Vorlade_Zielspannung_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_BMC_Vorlade_Zielspannung_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_BMC_Vorlade_Zielspannung_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_BMC_Vorlade_Zielspannung_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Battery_amount_of_modules_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Battery_amount_of_modules_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Battery_amount_of_modules_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Battery_amount_of_modules_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Battery_banks_actual_mode_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Battery_banks_actual_mode_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Battery_banks_actual_mode_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Battery_banks_actual_mode_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Battery_banks_actual_voltage_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Battery_banks_actual_voltage_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Battery_banks_actual_voltage_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Battery_banks_actual_voltage_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Battery_banks_allowed_modes_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Battery_banks_allowed_modes_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Battery_banks_allowed_modes_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Battery_banks_allowed_modes_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Battery_contactors_actual_states_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Battery_contactors_actual_states_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Battery_contactors_actual_states_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Battery_contactors_actual_states_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Battery_displayed_state_of_charge_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Battery_displayed_state_of_charge_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Battery_displayed_state_of_charge_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Battery_displayed_state_of_charge_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Battery_energy_content_actual_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Battery_energy_content_actual_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Battery_energy_content_actual_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Battery_energy_content_actual_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Battery_energy_content_maximum_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Battery_energy_content_maximum_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Battery_energy_content_maximum_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Battery_energy_content_maximum_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Battery_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Battery_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Battery_flow_temperature_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Battery_flow_temperature_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Battery_isolation_measurement_actual_and_requested_state_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Battery_isolation_measurement_actual_and_requested_state_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Battery_isolation_measurement_actual_and_requested_state_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Battery_isolation_measurement_actual_and_requested_state_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ReadData DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_WriteData DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_WriteData
#  define Rte_Call_DataServices_Data_Battery_technical_state_of_charge_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Battery_technical_state_of_charge_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Battery_technical_state_of_charge_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Battery_technical_state_of_charge_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Charisma_requestet_driving_program_hv_battery_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Charisma_requestet_driving_program_hv_battery_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Charisma_requestet_driving_program_hv_battery_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Charisma_requestet_driving_program_hv_battery_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_DC_charging_station_actual_voltage_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DC_charging_station_actual_voltage_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DC_charging_station_actual_voltage_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_DC_charging_station_actual_voltage_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_DID_StartApplication_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DID_StartApplication_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DID_StartApplication_ReadData Rte_Call_Dcm_DataServices_Data_DID_StartApplication_ReadData
#  define Rte_Call_DataServices_Data_DID_StartApplication_WriteData Rte_Call_Dcm_DataServices_Data_DID_StartApplication_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_Assembly_part_number_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_part_number_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_Assembly_part_number_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_part_number_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_Assembly_part_number_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_part_number_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_Assembly_production_data_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_production_data_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_Assembly_production_data_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_production_data_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_Assembly_production_data_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_Assembly_production_data_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_BCUe_part_number_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_BCUe_part_number_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_BCUe_part_number_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_BCUe_part_number_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_BCUe_part_number_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_BCUe_part_number_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_BMCE_part_number_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_BMCE_part_number_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_BMCE_part_number_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_BMCE_part_number_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_BMCE_part_number_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_BMCE_part_number_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_BMC_clamp_30c_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_BMC_clamp_30c_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_BMC_clamp_30c_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_BMC_clamp_30c_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_BMC_serial_number_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_BMC_serial_number_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_BMC_serial_number_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_BMC_serial_number_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_BMC_serial_number_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_BMC_serial_number_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_Cell_part_number_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_Cell_part_number_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_Cell_part_number_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_Cell_part_number_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_Cell_part_number_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_Cell_part_number_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_HV_battery_modules_actual_voltage_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_HV_battery_modules_actual_voltage_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_HV_battery_modules_actual_voltage_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_HV_battery_modules_actual_voltage_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_Module_part_number_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_Module_part_number_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_Module_part_number_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_Module_part_number_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_Module_part_number_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_Module_part_number_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_ReadDataLength Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_ReadDataLength
#  define Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileVersi_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileVersi_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileVersi_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileVersi_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentBasicSettiStatu_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentBasicSettiStatu_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentBasicSettiStatu_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentBasicSettiStatu_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_ReadDataLength Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_ReadDataLength
#  define Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_SOH_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_SOH_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_SOH_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_SOH_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadDataLength Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadDataLength
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ReadData DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadDataLength Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadDataLength
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0x0EF_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0x0EF_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0x0EF_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0x0EF_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_3_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_3_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_3_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_Finge_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Finge_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_Finge_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Finge_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_Finge_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Finge_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_IntegValidDataConfiList_Read_ConditionCheckRead Data0x0250_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_IntegValidDataConfiList_Read_ReadData Data0x0250_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_IntegValidDataConfiList_Read_ReadDataLength Data0x0250_ReadDataLength
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_IntegValidDataConfiList_Read_WriteData Data0x0250_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_Milea_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Milea_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_Milea_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Milea_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_MonitStatuSinceDTCsClear_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_MonitStatuSinceDTCsClear_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_MonitStatuSinceDTCsClear_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_MonitStatuSinceDTCsClear_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuECUIdent_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuECUIdent_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuECUIdent_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuECUIdent_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu1_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu1_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu1_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu1_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu2_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu2_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu2_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu2_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_10_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_10_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_10_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_10_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_11_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_11_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_11_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_11_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_12_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_12_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_12_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_12_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_13_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_13_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_13_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_13_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_14_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_14_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_14_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_14_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_15_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_15_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_15_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_15_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_16_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_16_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_16_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_16_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_17_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_17_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_17_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_17_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_18_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_18_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_18_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_18_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_19_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_19_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_19_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_19_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_20_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_20_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_20_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_20_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_22_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_22_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_22_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_22_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_23_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_23_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_23_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_23_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_24_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_24_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_24_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_24_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_25_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_25_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_25_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_25_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_26_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_26_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_26_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_26_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_5_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_5_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_5_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_5_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_6_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_6_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_6_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_6_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_7_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_7_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_7_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_7_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_8_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_8_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_8_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_8_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_3_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_3_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_3_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_4_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_4_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_4_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_4_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_5_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_5_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_5_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_5_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_6_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_6_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_6_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_6_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_3_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_3_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_3_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_4_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_4_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_4_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_4_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_5_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_5_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_5_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_5_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_3_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_3_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_3_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_3_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_3_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_3_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_31_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_31_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_31_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_31_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_32_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_32_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_32_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_32_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_34_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_34_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_34_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_34_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_35_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_35_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_35_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_35_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_3_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_3_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_3_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_37_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_37_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_37_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_37_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_38_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_38_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_38_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_38_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_39_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_39_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_39_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_39_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_4_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_4_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_4_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_4_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_40_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_40_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_40_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_40_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_41_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_41_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_41_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_41_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_42_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_42_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_42_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_42_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_45_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_45_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_45_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_45_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_3_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_3_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_3_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_47_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_47_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_47_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_47_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_48_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_48_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_48_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_48_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_5_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_5_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_5_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_5_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_50_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_50_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_50_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_50_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_51_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_51_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_51_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_51_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_52_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_52_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_52_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_52_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_53_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_53_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_53_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_53_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_55_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_55_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_55_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_55_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_56_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_56_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_56_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_56_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_ReadDataLength Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_ReadDataLength
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_13_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_13_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_13_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_13_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_14_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_14_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_14_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_14_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_2_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_2_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_2_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_2_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_58_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_58_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_58_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_58_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_59_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_59_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_59_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_59_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_6_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_6_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_6_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_6_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_3_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_3_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_3_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_61_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_61_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_61_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_61_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_71_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_71_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_71_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_71_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_72_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_72_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_72_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_72_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_73_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_73_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_73_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_73_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_74_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_74_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_74_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_74_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_82_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_82_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_82_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_82_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_83_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_83_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_83_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_83_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_84_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_84_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_84_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_84_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_2_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_2_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_Produ_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Produ_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_Produ_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Produ_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_Produ_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_Produ_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_ReadDataLength Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_ReadDataLength
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_TABROECUPr_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROECUPr_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_TABROECUPr_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROECUPr_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadDataLength Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadDataLength
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_TABROOBDDr_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROOBDDr_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_TABROOBDDr_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABROOBDDr_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_TABRORespo_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABRORespo_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_TABRORespo_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TABRORespo_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_UnlocStatuOfECUOfProteOfVehicDiagn_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_UnlocStatuOfECUOfProteOfVehicDiagn_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_UnlocStatuOfECUOfProteOfVehicDiagn_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_UnlocStatuOfECUOfProteOfVehicDiagn_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_ReadDataLength Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_ReadDataLength
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_ReadDataLength Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_ReadDataLength
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ReadData DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_Type_number_BCUe_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BCUe_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_Type_number_BCUe_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BCUe_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_Type_number_BCUe_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BCUe_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_Type_number_BMCE_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BMCE_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_Type_number_BMCE_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BMCE_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_Type_number_BMCE_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_BMCE_Read_WriteData
#  define Rte_Call_DataServices_Data_DiagnServi_Type_number_assembly_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_assembly_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_DiagnServi_Type_number_assembly_Read_ReadData Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_assembly_Read_ReadData
#  define Rte_Call_DataServices_Data_DiagnServi_Type_number_assembly_Read_WriteData Rte_Call_Dcm_DataServices_Data_DiagnServi_Type_number_assembly_Read_WriteData
#  define Rte_Call_DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ConditionCheckRead DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ReadData DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_HV_Spannung_Nebenverbraucher_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_HV_Spannung_Nebenverbraucher_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_HV_Spannung_Nebenverbraucher_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_HV_Spannung_Nebenverbraucher_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_HV_battery_continuous_charging_power_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_HV_battery_continuous_charging_power_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_HV_battery_continuous_charging_power_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_HV_battery_continuous_charging_power_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_HV_battery_continuous_discharge_power_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_HV_battery_continuous_discharge_power_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_HV_battery_continuous_discharge_power_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_HV_battery_continuous_discharge_power_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_HV_battery_maximum_charging_current_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_charging_current_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_HV_battery_maximum_charging_current_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_charging_current_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_HV_battery_maximum_charging_power_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_charging_power_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_HV_battery_maximum_charging_power_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_charging_power_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_HV_battery_maximum_discharge_current_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_discharge_current_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_HV_battery_maximum_discharge_current_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_discharge_current_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_HV_battery_maximum_discharge_power_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_discharge_power_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_HV_battery_maximum_discharge_power_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_HV_battery_maximum_discharge_power_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_HV_battery_performance_indicator_charging_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_HV_battery_performance_indicator_charging_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_HV_battery_performance_indicator_charging_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_HV_battery_performance_indicator_charging_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_HV_battery_performance_indicator_discharging_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_HV_battery_performance_indicator_discharging_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_HV_battery_performance_indicator_discharging_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_HV_battery_performance_indicator_discharging_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_HV_coordinator_requestet_voltage_hv_battery_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_HV_coordinator_requestet_voltage_hv_battery_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_HV_coordinator_requestet_voltage_hv_battery_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_HV_coordinator_requestet_voltage_hv_battery_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_High_voltage_battery_total_voltage_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_High_voltage_battery_total_voltage_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_High_voltage_battery_total_voltage_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_High_voltage_battery_total_voltage_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Maximum_Charge_Voltage_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Maximum_Charge_Voltage_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Maximum_Charge_Voltage_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Maximum_Charge_Voltage_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Minimum_Discharge_Voltage_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Minimum_Discharge_Voltage_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Minimum_Discharge_Voltage_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Minimum_Discharge_Voltage_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Prozessorauslastung_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Prozessorauslastung_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Prozessorauslastung_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Prozessorauslastung_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_State_Of_Charge_Battery_customer_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_State_Of_Charge_Battery_customer_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_State_Of_Charge_Battery_customer_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_State_Of_Charge_Battery_customer_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Strommesung_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Strommesung_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Strommesung_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Strommesung_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_BMCHVKEoHVLState_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKEoHVLState_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_BMCHVKEoHVLState_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKEoHVLState_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_BMCHVKFehleHVIL_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleHVIL_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_BMCHVKFehleHVIL_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleHVIL_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_BMCHVKFehleInter_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleInter_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_BMCHVKFehleInter_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleInter_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_BMCHVKFehleSD_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleSD_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_BMCHVKFehleSD_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_BMCHVKFehleSD_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_BatteTempeAvera_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeAvera_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_BatteTempeAvera_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeAvera_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_BatteTempeMaxim_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeMaxim_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_BatteTempeMaxim_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeMaxim_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_BatteTempeMinim_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeMinim_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_BatteTempeMinim_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_BatteTempeMinim_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_CanTPData_Read_ConditionCheckRead DataServices_Data_TABROW_CanTPData_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_CanTPData_Read_ReadData DataServices_Data_TABROW_CanTPData_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_CanTPData_Read_WriteData DataServices_Data_TABROW_CanTPData_Read_WriteData
#  define Rte_Call_DataServices_Data_TABROW_CellStateOfChargMaxim_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_CellStateOfChargMaxim_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_CellStateOfChargMaxim_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_CellStateOfChargMaxim_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_CellStateOfChargMinim_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_CellStateOfChargMinim_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_CellStateOfChargMinim_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_CellStateOfChargMinim_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_CellVoltaMaxim_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaMaxim_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_CellVoltaMaxim_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaMaxim_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_CellVoltaMinim_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaMinim_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_CellVoltaMinim_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaMinim_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_CellVoltaSum_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaSum_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_CellVoltaSum_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_CellVoltaSum_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_ConfiHash_Read_ConditionCheckRead Data0x0245_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_ConfiHash_Read_ReadData Data0x0245_ReadData
#  define Rte_Call_DataServices_Data_TABROW_ECUStandMode1_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode1_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_ECUStandMode1_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode1_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_ECUStandMode1_Read_WriteData Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode1_Read_WriteData
#  define Rte_Call_DataServices_Data_TABROW_ECUStandMode2_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode2_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_ECUStandMode2_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode2_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_ECUStandMode2_Read_WriteData Rte_Call_Dcm_DataServices_Data_TABROW_ECUStandMode2_Read_WriteData
#  define Rte_Call_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_ReadDataLength Rte_Call_Dcm_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_ReadDataLength
#  define Rte_Call_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_ReadDataLength Rte_Call_Dcm_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_ReadDataLength
#  define Rte_Call_DataServices_Data_TABROW_IsolaResisSysteMinus_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_IsolaResisSysteMinus_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_IsolaResisSysteMinus_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_IsolaResisSysteMinus_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_IsolaResisSystePlus_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_IsolaResisSystePlus_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_IsolaResisSystePlus_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_IsolaResisSystePlus_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_ModeOfProteOfVehicDiagn_ReadDataByIdentifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_ModeOfProteOfVehicDiagn_ReadDataByIdentifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_ModeOfProteOfVehicDiagn_ReadDataByIdentifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_ModeOfProteOfVehicDiagn_ReadDataByIdentifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_OBDClassDescr_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_OBDClassDescr_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_OBDClassDescr_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_OBDClassDescr_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_OBDType_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_OBDType_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_OBDType_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_OBDType_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_PIMDID_Read_ConditionCheckRead DataServices_Data_TABROW_PIMDID_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_PIMDID_Read_ReadData DataServices_Data_TABROW_PIMDID_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_PIMDID_Read_WriteData DataServices_Data_TABROW_PIMDID_Read_WriteData
#  define Rte_Call_DataServices_Data_TABROW_ProgrHash_Read_ConditionCheckRead Data0x0249_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_ProgrHash_Read_ReadData Data0x0249_ReadData
#  define Rte_Call_DataServices_Data_TABROW_ProgrPreco_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_ProgrPreco_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_ProgrPreco_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_ProgrPreco_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_ProgrPreco_Read_ReadDataLength Rte_Call_Dcm_DataServices_Data_TABROW_ProgrPreco_Read_ReadDataLength
#  define Rte_Call_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_WriteData Rte_Call_Dcm_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_WriteData
#  define Rte_Call_DataServices_Data_TABROW_SFDDevelModeActiv_Read_ConditionCheckRead DataServices_Data_TABROW_SFDDevelModeActiv_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_SFDDevelModeActiv_Read_ReadData DataServices_Data_TABROW_SFDDevelModeActiv_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_SFDDevelModeActiv_Read_WriteData DataServices_Data_TABROW_SFDDevelModeActiv_Read_WriteData
#  define Rte_Call_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_ReadDataLength Rte_Call_Dcm_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_ReadDataLength
#  define Rte_Call_DataServices_Data_TABROW_SOKGenerInfor_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_SOKGenerInfor_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_SOKGenerInfor_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_SOKGenerInfor_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_ReadDataLength Rte_Call_Dcm_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_ReadDataLength
#  define Rte_Call_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_ReadDataLength Rte_Call_Dcm_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_ReadDataLength
#  define Rte_Call_DataServices_Data_TABROW_SOKTimeInfor_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_SOKTimeInfor_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_SOKTimeInfor_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_SOKTimeInfor_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_ReadDataLength Rte_Call_Dcm_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_ReadDataLength
#  define Rte_Call_DataServices_Data_TABROW_ServiDiscoState_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_ServiDiscoState_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_ServiDiscoState_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_ServiDiscoState_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_StandAmbieCondi_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_StandAmbieCondi_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_StandAmbieCondi_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_StandAmbieCondi_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_StateOfBatteMIL_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBatteMIL_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_StateOfBatteMIL_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBatteMIL_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_StateOfBattePowerReduc_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBattePowerReduc_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_StateOfBattePowerReduc_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBattePowerReduc_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_StateOfBatteShutoCrash_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBatteShutoCrash_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_StateOfBatteShutoCrash_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_StateOfBatteShutoCrash_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_StatePCM_ReadDataByIdent_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_StatePCM_ReadDataByIdent_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_StatePCM_ReadDataByIdent_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_StatePCM_ReadDataByIdent_ReadData
#  define Rte_Call_DataServices_Data_TABROW_StatuECUStandMode_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_StatuECUStandMode_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_StatuECUStandMode_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_StatuECUStandMode_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_StatuProdu_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_StatuProdu_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_StatuProdu_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_StatuProdu_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_SysteIdent_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_SysteIdent_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_SysteIdent_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_SysteIdent_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_WriteData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_WriteData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_WriteData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_WriteData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_2_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_2_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_2_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_3_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_3_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_3_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_4_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_4_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_4_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROSyste_Read_4_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROVWDat_Read_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_TABROVWDat_Read_1_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_TABROVWDat_Read_1_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_TABROVWDat_Read_1_ReadData
#  define Rte_Call_DataServices_Data_TABROW_TABROVWDat_Read_1_WriteData Rte_Call_Dcm_DataServices_Data_TABROW_TABROVWDat_Read_1_WriteData
#  define Rte_Call_DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_ReadDataLength Rte_Call_Dcm_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_ReadDataLength
#  define Rte_Call_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_ReadDataLength Rte_Call_Dcm_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_ReadDataLength
#  define Rte_Call_DataServices_Data_TABROW_VWSysteNameOrEnginType_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_VWSysteNameOrEnginType_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_VWSysteNameOrEnginType_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_VWSysteNameOrEnginType_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_VWWorksSysteName_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_VWWorksSysteName_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_VWWorksSysteName_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_VWWorksSysteName_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_VehicIdentNumbe_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_VehicIdentNumbe_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_VehicIdentNumbe_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_VehicIdentNumbe_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_VishnDID_Read_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_VishnDID_Read_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_VishnDID_Read_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_VishnDID_Read_ReadData
#  define Rte_Call_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_ReadDataLength Rte_Call_Dcm_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_ReadDataLength
#  define Rte_Call_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_ReadDataLength Rte_Call_Dcm_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_ReadDataLength
#  define Rte_Call_DataServices_Data_TABROW_VkmsTrainCount_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_VkmsTrainCount_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_VkmsTrainCount_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_VkmsTrainCount_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_TABROW_VkmsVkmsv_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_TABROW_VkmsVkmsv_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_TABROW_VkmsVkmsv_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_TABROW_VkmsVkmsv_Read_Data_By_Identifier_ReadData
#  define Rte_Call_DataServices_Data_Vishnu_DID_ConditionCheckRead DataServices_Data_Vishnu_DID_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Vishnu_DID_ReadData DataServices_Data_Vishnu_DID_ReadData
#  define Rte_Call_DataServices_Data_Vishnu_DID_ReadDataLength DataServices_Data_Vishnu_DID_ReadDataLength
#  define Rte_Call_DataServices_Data_Vishnu_DID_WriteData DataServices_Data_Vishnu_DID_WriteData
#  define Rte_Call_DataServices_Data_Zero_Potential_Status_Read_Data_By_Identifier_ConditionCheckRead Rte_Call_Dcm_DataServices_Data_Zero_Potential_Status_Read_Data_By_Identifier_ConditionCheckRead
#  define Rte_Call_DataServices_Data_Zero_Potential_Status_Read_Data_By_Identifier_ReadData Rte_Call_Dcm_DataServices_Data_Zero_Potential_Status_Read_Data_By_Identifier_ReadData
#  define Rte_Call_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrDepen_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrDepen_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrPreco_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrPreco_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_BeginOfWritiOfSecurDataOfProteOfVehicDiagn_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_BeginOfWritiOfSecurDataOfProteOfVehicDiagn_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_CalcuConfiStateFingeOfProteOfVehicDiagn_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_CalcuConfiStateFingeOfProteOfVehicDiagn_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_CalcuIndivHashValue_Start_Routine_Start Routine0x0254_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_CalcuIntegValidData_Start_Routine_Start Routine0x0253_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiImmedResul_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiImmedResul_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_RequestResults RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Start RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Stop RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_RequeConfiOfProteOfVehicDiagn_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_RequeConfiOfProteOfVehicDiagn_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_RequeLoggiDataOfProteOfVehicDiagn_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_RequeLoggiDataOfProteOfVehicDiagn_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetHealiInhib_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetHealiInhib_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetProteOfVehicDiagn_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetProteOfVehicDiagn_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_Stop Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_Stop
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_UnlocProteOfVehicDiagn_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_UnlocProteOfVehicDiagn_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_DiagnServi_Verify_partial_software_checksum_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_DiagnServi_Verify_partial_software_checksum_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_Stop Rte_Call_Dcm_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_Stop
#  define Rte_Call_RoutineServices_Routine_TABROW_CheckCalibPreCondi_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_TABROW_CheckCalibPreCondi_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_TABROW_EndOfWritiSecurDataOfProteOfVehicDiagn_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_TABROW_EndOfWritiSecurDataOfProteOfVehicDiagn_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_TABROW_LockProteOfVehicDiagn_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_TABROW_LockProteOfVehicDiagn_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_RequestResults Rte_Call_Dcm_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_RequestResults
#  define Rte_Call_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_Start Rte_Call_Dcm_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_Start
#  define Rte_Call_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_Stop Rte_Call_Dcm_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_Stop
#  define Rte_Call_RoutineServices_Routine_TABROW_VkmsDebug_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_TABROW_VkmsDebug_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_TABROW_VkmsDebug_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_TABROW_VkmsDebug_Start_Routine_Start
#  define Rte_Call_RoutineServices_Routine_TABROW_VkmsHandlDownl_Start_Routine_RequestResults Rte_Call_Dcm_RoutineServices_Routine_TABROW_VkmsHandlDownl_Start_Routine_RequestResults
#  define Rte_Call_RoutineServices_Routine_TABROW_VkmsHandlDownl_Start_Routine_Start Rte_Call_Dcm_RoutineServices_Routine_TABROW_VkmsHandlDownl_Start_Routine_Start
#  define Rte_Call_SecurityAccess_Unlock_L1_CompareKey SecurityAccess_Unlock_L1_CompareKey
#  define Rte_Call_SecurityAccess_Unlock_L1_GetSeed SecurityAccess_Unlock_L1_GetSeed

# endif /* !defined(RTE_CORE) */


# define Dcm_START_SEC_CODE
# include "Dcm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Dcm_MainFunction Dcm_MainFunction
#  define RTE_RUNNABLE_GetActiveProtocol Dcm_GetActiveProtocol
#  define RTE_RUNNABLE_GetRequestKind Dcm_GetRequestKind
#  define RTE_RUNNABLE_GetSecurityLevel Dcm_GetSecurityLevel
#  define RTE_RUNNABLE_GetSesCtrlType Dcm_GetSesCtrlType
#  define RTE_RUNNABLE_ResetToDefaultSession Dcm_ResetToDefaultSession
#  define RTE_RUNNABLE_SetActiveDiagnostic Dcm_SetActiveDiagnostic
# endif

FUNC(void, Dcm_CODE) Dcm_MainFunction(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetActiveProtocol(P2VAR(Dcm_ProtocolType, AUTOMATIC, RTE_DCM_APPL_VAR) ActiveProtocol); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetRequestKind(uint16 TesterSourceAddress, P2VAR(Dcm_RequestKindType, AUTOMATIC, RTE_DCM_APPL_VAR) RequestKind); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSecurityLevel(P2VAR(Dcm_SecLevelType, AUTOMATIC, RTE_DCM_APPL_VAR) SecLevel); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSesCtrlType(P2VAR(Dcm_SesCtrlType, AUTOMATIC, RTE_DCM_APPL_VAR) SesCtrlType); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_ResetToDefaultSession(void); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_SetActiveDiagnostic(boolean active); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define Dcm_STOP_SEC_CODE
# include "Dcm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_DCMServices_E_NOT_OK (1U)

#  define RTE_E_DCMServices_E_OK (0U)

#  define RTE_E_DataServices_Data_BMC_Hybrid_Kundendienstfehler_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_BMC_Hybrid_Kundendienstfehler_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_BMC_IWU_Status_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_BMC_IWU_Status_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_BMC_Mode_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_BMC_Mode_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_BMC_Status_DCLS_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_BMC_Status_DCLS_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_BMC_Strom_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_BMC_Strom_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_BMC_Vorlade_Zielspannung_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_BMC_Vorlade_Zielspannung_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Battery_amount_of_modules_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Battery_amount_of_modules_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Battery_banks_actual_mode_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Battery_banks_actual_mode_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Battery_banks_actual_voltage_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Battery_banks_actual_voltage_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Battery_banks_allowed_modes_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Battery_banks_allowed_modes_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Battery_contactors_actual_states_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Battery_contactors_actual_states_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Battery_displayed_state_of_charge_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Battery_displayed_state_of_charge_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Battery_energy_content_actual_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Battery_energy_content_actual_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Battery_energy_content_maximum_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Battery_energy_content_maximum_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Battery_flow_temperature_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Battery_flow_temperature_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Battery_isolation_measurement_actual_and_requested_state_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Battery_isolation_measurement_actual_and_requested_state_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Battery_technical_state_of_charge_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Battery_technical_state_of_charge_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Charisma_requestet_driving_program_hv_battery_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Charisma_requestet_driving_program_hv_battery_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DC_charging_station_actual_voltage_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DC_charging_station_actual_voltage_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DID_StartApplication_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_Assembly_part_number_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_Assembly_part_number_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_Assembly_production_data_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_Assembly_production_data_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_BCUe_part_number_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_BCUe_part_number_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_BMCE_part_number_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_BMCE_part_number_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_BMC_clamp_30c_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_BMC_clamp_30c_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_BMC_serial_number_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_BMC_serial_number_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_Cell_part_number_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_Cell_part_number_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_HV_battery_modules_actual_voltage_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_HV_battery_modules_actual_voltage_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_Module_part_number_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_Module_part_number_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileVersi_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileVersi_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentBasicSettiStatu_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentBasicSettiStatu_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_SOH_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_SOH_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0x0EF_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0x0EF_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_Finge_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_Finge_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_IntegValidDataConfiList_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_IntegValidDataConfiList_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_Milea_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_Milea_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_MonitStatuSinceDTCsClear_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_MonitStatuSinceDTCsClear_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuECUIdent_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuECUIdent_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu1_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu1_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu2_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu2_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_10_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_10_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_11_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_11_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_12_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_12_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_13_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_13_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_14_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_14_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_15_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_15_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_16_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_16_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_17_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_17_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_18_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_18_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_19_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_19_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_20_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_20_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_22_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_22_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_23_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_23_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_24_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_24_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_25_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_25_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_26_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_26_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_5_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_6_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_6_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_7_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_7_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_8_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_8_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_4_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_5_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_6_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_6_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_4_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_5_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_31_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_31_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_32_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_32_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_34_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_34_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_35_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_35_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_37_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_37_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_38_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_38_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_39_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_39_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_4_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_40_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_40_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_41_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_41_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_42_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_42_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_45_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_45_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_47_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_47_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_48_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_48_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_5_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_50_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_50_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_51_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_51_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_52_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_52_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_53_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_53_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_55_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_55_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_56_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_56_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_13_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_13_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_14_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_14_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_2_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_2_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_58_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_58_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_59_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_59_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_6_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_6_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_61_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_61_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_71_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_71_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_72_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_72_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_73_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_73_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_74_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_74_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_82_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_82_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_83_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_83_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_84_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_84_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_Produ_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_Produ_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TABROECUPr_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TABROECUPr_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TABROOBDDr_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TABROOBDDr_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TABRORespo_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TABRORespo_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_UnlocStatuOfECUOfProteOfVehicDiagn_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_UnlocStatuOfECUOfProteOfVehicDiagn_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_Type_number_BCUe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_Type_number_BCUe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_Type_number_BMCE_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_Type_number_BMCE_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_Type_number_assembly_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_Type_number_assembly_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_HV_Spannung_Nebenverbraucher_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_HV_Spannung_Nebenverbraucher_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_HV_battery_continuous_charging_power_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_HV_battery_continuous_charging_power_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_HV_battery_continuous_discharge_power_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_HV_battery_continuous_discharge_power_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_HV_battery_maximum_charging_current_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_HV_battery_maximum_charging_current_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_HV_battery_maximum_charging_power_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_HV_battery_maximum_charging_power_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_HV_battery_maximum_discharge_current_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_HV_battery_maximum_discharge_current_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_HV_battery_maximum_discharge_power_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_HV_battery_maximum_discharge_power_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_HV_battery_performance_indicator_charging_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_HV_battery_performance_indicator_charging_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_HV_battery_performance_indicator_discharging_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_HV_battery_performance_indicator_discharging_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_HV_coordinator_requestet_voltage_hv_battery_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_HV_coordinator_requestet_voltage_hv_battery_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_High_voltage_battery_total_voltage_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_High_voltage_battery_total_voltage_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Maximum_Charge_Voltage_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Maximum_Charge_Voltage_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Minimum_Discharge_Voltage_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Minimum_Discharge_Voltage_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Prozessorauslastung_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Prozessorauslastung_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_State_Of_Charge_Battery_customer_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_State_Of_Charge_Battery_customer_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Strommesung_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Strommesung_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_BMCHVKEoHVLState_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_BMCHVKEoHVLState_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_BMCHVKFehleHVIL_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_BMCHVKFehleHVIL_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_BMCHVKFehleInter_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_BMCHVKFehleInter_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_BMCHVKFehleSD_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_BMCHVKFehleSD_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_BatteTempeAvera_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_BatteTempeAvera_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_BatteTempeMaxim_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_BatteTempeMaxim_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_BatteTempeMinim_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_BatteTempeMinim_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_CanTPData_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_CanTPData_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_CellStateOfChargMaxim_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_CellStateOfChargMaxim_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_CellStateOfChargMinim_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_CellStateOfChargMinim_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_CellVoltaMaxim_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_CellVoltaMaxim_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_CellVoltaMinim_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_CellVoltaMinim_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_CellVoltaSum_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_CellVoltaSum_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_ConfiHash_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_ConfiHash_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_ECUStandMode1_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_ECUStandMode1_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_ECUStandMode2_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_ECUStandMode2_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_IsolaResisSysteMinus_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_IsolaResisSysteMinus_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_IsolaResisSystePlus_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_IsolaResisSystePlus_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_ModeOfProteOfVehicDiagn_ReadDataByIdentifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_ModeOfProteOfVehicDiagn_ReadDataByIdentifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_OBDClassDescr_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_OBDClassDescr_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_OBDType_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_OBDType_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_PIMDID_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_PIMDID_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_ProgrHash_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_ProgrHash_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_ProgrPreco_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_ProgrPreco_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_SFDDevelModeActiv_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_SFDDevelModeActiv_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_SOKGenerInfor_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_SOKGenerInfor_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_SOKTimeInfor_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_SOKTimeInfor_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_ServiDiscoState_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_ServiDiscoState_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_StandAmbieCondi_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_StandAmbieCondi_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_StateOfBatteMIL_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_StateOfBatteMIL_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_StateOfBattePowerReduc_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_StateOfBattePowerReduc_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_StateOfBatteShutoCrash_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_StateOfBatteShutoCrash_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_StatePCM_ReadDataByIdent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_StatePCM_ReadDataByIdent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_StatuECUStandMode_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_StatuECUStandMode_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_StatuProdu_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_StatuProdu_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_SysteIdent_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_SysteIdent_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROSyste_Read_4_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_TABROVWDat_Read_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_TABROVWDat_Read_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VWECUHardwNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VWECUHardwNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VWSysteNameOrEnginType_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VWSysteNameOrEnginType_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VWWorksSysteName_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VWWorksSysteName_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VehicIdentNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VehicIdentNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VishnDID_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VishnDID_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VkmsTrainCount_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VkmsTrainCount_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VkmsVkmsv_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VkmsVkmsv_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Vishnu_DID_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Vishnu_DID_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Zero_Potential_Status_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Zero_Potential_Status_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrDepen_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrDepen_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrDepen_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrPreco_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrPreco_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrPreco_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_BeginOfWritiOfSecurDataOfProteOfVehicDiagn_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_BeginOfWritiOfSecurDataOfProteOfVehicDiagn_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_BeginOfWritiOfSecurDataOfProteOfVehicDiagn_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_CalcuConfiStateFingeOfProteOfVehicDiagn_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_CalcuConfiStateFingeOfProteOfVehicDiagn_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_CalcuConfiStateFingeOfProteOfVehicDiagn_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_CalcuIndivHashValue_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_CalcuIndivHashValue_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_CalcuIndivHashValue_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_CalcuIntegValidData_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_CalcuIntegValidData_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_CalcuIntegValidData_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiImmedResul_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiImmedResul_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiImmedResul_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeConfiOfProteOfVehicDiagn_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeConfiOfProteOfVehicDiagn_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeConfiOfProteOfVehicDiagn_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeLoggiDataOfProteOfVehicDiagn_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeLoggiDataOfProteOfVehicDiagn_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeLoggiDataOfProteOfVehicDiagn_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetHealiInhib_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetHealiInhib_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetHealiInhib_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetProteOfVehicDiagn_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetProteOfVehicDiagn_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetProteOfVehicDiagn_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_UnlocProteOfVehicDiagn_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_UnlocProteOfVehicDiagn_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_UnlocProteOfVehicDiagn_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_Verify_partial_software_checksum_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_Verify_partial_software_checksum_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_Verify_partial_software_checksum_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_TABROW_CheckCalibPreCondi_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_TABROW_CheckCalibPreCondi_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_TABROW_CheckCalibPreCondi_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_TABROW_EndOfWritiSecurDataOfProteOfVehicDiagn_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_TABROW_EndOfWritiSecurDataOfProteOfVehicDiagn_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_TABROW_EndOfWritiSecurDataOfProteOfVehicDiagn_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_TABROW_LockProteOfVehicDiagn_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_TABROW_LockProteOfVehicDiagn_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_TABROW_LockProteOfVehicDiagn_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_TABROW_VkmsDebug_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_TABROW_VkmsDebug_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_TABROW_VkmsDebug_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_TABROW_VkmsHandlDownl_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_TABROW_VkmsHandlDownl_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_TABROW_VkmsHandlDownl_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_Unlock_L1_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_Unlock_L1_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_Unlock_L1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_DCM_H */

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

   MD_Rte_1330:  MISRA rule: Rule8.3
     Reason:     The RTE Generator uses default names for parameter identifiers of port defined arguments of service modules.
                 Therefore the parameter identifiers in the function declaration differs from those of the implementation of the BSW module.
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
