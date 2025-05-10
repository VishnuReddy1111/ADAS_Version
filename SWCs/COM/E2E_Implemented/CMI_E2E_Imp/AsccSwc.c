/**********************************************************************************************************************
 *  FILE REQUIRES USER MODIFICATIONS
 *  Template Scope: sections marked with Start and End comments
 *  -------------------------------------------------------------------------------------------------------------------
 *  This file includes template code that must be completed and/or adapted during BSW integration.
 *  The template code is incomplete and only intended for providing a signature and an empty implementation.
 *  It is neither intended nor qualified for use in series production without applying suitable quality measures.
 *  The template code must be completed as described in the instructions given within this file and/or in the.
 *  Technical Reference.
 *  The completed implementation must be tested with diligent care and must comply with all quality requirements which.
 *  are necessary according to the state of the art before its use.
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  AsccSwc.c
 *           Config:  StartApplication.dpa
 *        SW-C Type:  AsccSwc
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2300382
 *
 *      Description:  C-Code implementation template for SW-C <AsccSwc>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * ACD_SharedCalibrationData_Struct
 *   Structure to hold AV Calibration data for AFIC(global parameters).
 *
 * Acab_FAS_Xx_01_Raw_Struct
 *   Elements to be defined in alphabetical order to help mapping in architecture to SG_*_Group_Struct
 *
 * Ascc_Esdd_St_Req_Struct
 *   Motor Control Operation Request
 *
 * Bsw_Zone_R_Fas_01_Raw_Struct
 *   Elements to be defined in alphabetical order to help mapping in architecture to SG_*_Group_Struct
 *
 * Bsw_Zone_R_Fas_02_Raw_Struct
 *   Elements to be defined in alphabetical order to help mapping in architecture to SG_*_Group_Struct
 *
 * Cse_F_Estn_Lpf_Data_Struct
 *   Bus to hold Low Pass Filtered Force Estimation value calculated by CSE SWC.
 *
 * Cse_Sys_Pg_Est_Data_Struct
 *   Structure to hold the System Pressure Estimate.
 *
 * Csp_Lpf_Data_Struct
 *   Structure to hold Low Pass Filtered data for performing FAA Diagnostics.
 *
 * Csp_Procsd_Data_Struct
 *   Corner Signal Processor Output Data
 *
 * DCD_FDG_Gas_Leakage_Struct
 *   Calibrations to enable/disable fault reaction for Gas Leakage diagnostics.
 *
 * DCD_FDG_Oil_Leakage_Struct
 *   Calibrations to Oil Leakage diagnostics.
 *
 * DCD_FDG_Psm_Struct
 *   Tune parameters for Pressure Sensor Monitor
 *
 * DCD_PAB_PgSnsrSerialDataHandler_Struct
 *   Tune Parameters for Pressure Sensor Serial Data Handler.
 *
 * Esdd_Accel_AtAvPcb_Struct
 *   Wheel Acceleration Estimate Sensor Data
 *
 * Esdd_Av_Pg_Var_Struct
 *   Pressure Sensor Data
 *
 * Esdd_Emm_Amnt_ActunCpby_Struct
 *   Structure to hold EMM Actuation Capability.
 *
 * Esdd_Emm_Pwr_Lim_Tq_Dmd_Struct
 *   Esdd generated Power limited torque demand
 *
 * Esdd_Emm_Temp_Struct
 *   Structure to hold Temperatures from ESDD
 *
 * Esdd_PgSnsr_Serial_Data_Struct
 *   Pressure Sensor Serial Data
 *
 * Esdd_RotorSnsr_Data_Struct
 *   Rotor Sensor Data 
 *
 * Essm_Emmpp_St_Req_Struct
 *   Motor Control Operation Request
 *
 * Essm_Faa_Amnt_ActunCpbyMrgn_Struct
 *   Structure to hold FAA Actuation Capability.
 *
 * Essm_Faa_Amnt_ActunCpby_Struct
 *   Structure to hold FAA Actuation Capability.
 *
 * Essm_Nm_Network_Release_Struct
 *   Structure to hold NM Network release request to BSW.
 *
 * Essm_St_Fb_Struct
 *   ASCC state feedback to ASMC
 *
 * Essm_Sys_State_Internal_Struct
 *   Bus to hold EMM Internal System State
 *
 * FCD_WAE_Struct
 *   Structure to hold WAE parameters for FAA.
 *
 * Fcc_F_Cpby_Struct
 *   Force Core Controller Calculated Force Capability.
 *
 * Fdg_Force_Deviation_Diag_Status_Struct
 *   Force Deviation Detection Flag
 *
 * Fdg_Force_Deviation_Diagnostics_Event_Struct
 *   Structure to Force Deviation diaganostic Event
 *
 * Fdg_Gas_Leakage_Diag_Status_Struct
 *   Structure to hold Gas Leakage Faa Diagnostics Status.
 *
 * Fdg_Oil_Leakage_Diag_Status_Struct
 *   Structure to hold Oil Leakage Faa Diagnostics Status.
 *
 * Pab_PgSnsrSerialDataHandler_Events_Struct
 *   Event raised by Pressure Sensor Fast Data Handler
 *
 * SG_FAS_FL_01_Group_Struct
 *   Matches signal names in DBC
 *      Elements to be defined in alphabetical order to match BSW code generation
 *
 * SG_FAS_FR_01_Group_Struct
 *   Matches signal names in DBC
 *      Elements to be defined in alphabetical order to match BSW code generation
 *
 * SG_FAS_RL_01_Group_Struct
 *   Matches signal names in DBC
 *      Elements to be defined in alphabetical order to match BSW code generation
 *
 * SG_FAS_RR_01_Group_Struct
 *   Matches signal names in DBC
 *      Elements to be defined in alphabetical order to match BSW code generation
 *
 * SG_Zone_R_FAS_01_Group_Struct
 *   Matches signal names in DBC
 *      Elements to be defined in alphabetical order to match BSW code generation
 *
 * SG_Zone_R_FAS_02_Group_Struct
 *   Matches signal names in DBC
 *      Elements to be defined in alphabetical order to match BSW code generation
 *
 *
 * Mode Declaration Groups:
 * ========================
 * Bsw_Control_Debug_Msg_Tx_Enum
 *   Enumeration to control transmission of debug CAN Messages
 *
 * Nm_Network_Release_Enum
 *   ESSM NM Network release enumeration.
 *
 *********************************************************************************************************************/

#include "Rte_AsccSwc.h"
extern FUNC (Std_ReturnType, E2E_CODE) E2E_SMCheck (E2E_SMProfileStatusType ProfileStatus,
                                             E2E_SMConfigPtrType ConfigPtr,
                                             E2E_SMStatePtrType StatePtr);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * NvM_DstPtrType: DataReference
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Afic_Mode_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Afic_Mode_Enum_PASSIVE_OPERATION (0U)
 *   Afic_Mode_Enum_ECO_MAX (1U)
 *   Afic_Mode_Enum_LOCAL_DAMPING (2U)
 *   Afic_Mode_Enum_FORCE_CONTROL (3U)
 * Ascc_Mode_Fb_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Ascc_Mode_Fb_Enum_UNAVAILABLE (0U)
 *   Ascc_Mode_Fb_Enum_ECO_MAX (1U)
 *   Ascc_Mode_Fb_Enum_LOCAL_DAMPING (2U)
 *   Ascc_Mode_Fb_Enum_FORCE_CONTROL (3U)
 *   Ascc_Mode_Fb_Enum_PASSIVE_OPERATION (4U)
 * Ascc_Mode_Req_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Ascc_Mode_Req_Enum_PASSIVE_OPERATION (0U)
 *   Ascc_Mode_Req_Enum_ECO_MAX (1U)
 *   Ascc_Mode_Req_Enum_LOCAL_DAMPING (2U)
 *   Ascc_Mode_Req_Enum_FORCE_CONTROL (3U)
 * Ascc_St_Fb_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Ascc_St_Fb_Enum_UNINITIALIZED (0U)
 *   Ascc_St_Fb_Enum_CORNER_STANDBY (1U)
 *   Ascc_St_Fb_Enum_CORNER_OPERATING (2U)
 *   Ascc_St_Fb_Enum_CORNER_SHUTDOWN (3U)
 * Ascc_St_Rq_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Ascc_St_Rq_Enum_UNINITIALIZED (0U)
 *   Ascc_St_Rq_Enum_GO_TO_OPERATING (1U)
 *   Ascc_St_Rq_Enum_GO_TO_CORNER_SLEEP (2U)
 * Bsw_Control_Debug_Msg_Tx_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Bsw_Control_Debug_Msg_Tx_Enum_NO_DBG_MSG_TX (0U)
 *   Bsw_Control_Debug_Msg_Tx_Enum_TX_DBG_MSG (1U)
 * Charge_Pwr_Lmt_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Charge_Pwr_Lmt_Enum_CHARGE_NO_LIMIT (0U)
 *   Charge_Pwr_Lmt_Enum_CHARGE_LIMITED (1U)
 * Cons_Lmt_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Cons_Lmt_Enum_CONS_LIMIT_NOT_APPLIED (0U)
 *   Cons_Lmt_Enum_CONS_LIMIT_APPLIED (1U)
 * Dem_EventStatusType: Enumeration of integer in interval [0...3] with enumerators
 *   DEM_EVENT_STATUS_PASSED (0U)
 *   DEM_EVENT_STATUS_FAILED (1U)
 *   DEM_EVENT_STATUS_PREPASSED (2U)
 *   DEM_EVENT_STATUS_PREFAILED (3U)
 * Dem_OperationCycleStateType: Enumeration of integer in interval [0...1] with enumerators
 *   DEM_CYCLE_STATE_START (0U)
 *   DEM_CYCLE_STATE_END (1U)
 * Dests_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Dests_Enum_PASSED (0U)
 *   Dests_Enum_FAILED (1U)
 * Diag_Event_Status_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Diag_Event_Status_Enum_PASSED (0U)
 *   Diag_Event_Status_Enum_FAILED (1U)
 * Diag_Mofr_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Diag_Mofr_Enum_DISABLE (1U)
 *   Diag_Mofr_Enum_ENABLE (0U)
 * Diag_OperationCycle_Status_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Diag_OperationCycle_Status_Enum_DIAG_OPER_CYCLE_START (0U)
 *   Diag_OperationCycle_Status_Enum_DIAG_OPER_CYCLE_END (1U)
 * Discharge_Pwr_Lmt_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Discharge_Pwr_Lmt_Enum_DISCHARGE_NO_LIMIT (0U)
 *   Discharge_Pwr_Lmt_Enum_DISCHARGE_LIMITED (1U)
 * DrvState_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   DrvState_Enum_DRV_ST_NONE (0U)
 *   DrvState_Enum_DRV_ST_MD (1U)
 *   DrvState_Enum_DRV_ST_AD (2U)
 *   DrvState_Enum_DRV_ST_INVALID (7U)
 * E2E_Xf_Status_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   E2E_Xf_Status_Enum_E_OK (0U)
 *   E2E_Xf_Status_Enum_E_SAFETY_VALID_REP (1U)
 *   E2E_Xf_Status_Enum_E_SAFETY_VALID_SEQ (2U)
 *   E2E_Xf_Status_Enum_E_SAFETY_VALID_ERR (3U)
 *   E2E_Xf_Status_Enum_E_SAFETY_VALID_NND (5U)
 *   E2E_Xf_Status_Enum_E_SAFETY_NODATA_OK (32U)
 *   E2E_Xf_Status_Enum_E_SAFETY_NODATA_REP (33U)
 *   E2E_Xf_Status_Enum_E_SAFETY_NODATA_SEQ (34U)
 *   E2E_Xf_Status_Enum_E_SAFETY_NODATA_ERR (35U)
 *   E2E_Xf_Status_Enum_E_SAFETY_NODATA_NND (37U)
 *   E2E_Xf_Status_Enum_E_SAFETY_INIT_OK (48U)
 *   E2E_Xf_Status_Enum_E_SAFETY_INIT_REP (49U)
 *   E2E_Xf_Status_Enum_E_SAFETY_INIT_SEQ (50U)
 *   E2E_Xf_Status_Enum_E_SAFETY_INIT_ERR (51U)
 *   E2E_Xf_Status_Enum_E_SAFETY_INIT_NND (53U)
 *   E2E_Xf_Status_Enum_E_SAFETY_INVALID_OK (64U)
 *   E2E_Xf_Status_Enum_E_SAFETY_INVALID_REP (65U)
 *   E2E_Xf_Status_Enum_E_SAFETY_INVALID_SEQ (66U)
 *   E2E_Xf_Status_Enum_E_SAFETY_INVALID_ERR (67U)
 *   E2E_Xf_Status_Enum_E_SAFETY_INVALID_NND (69U)
 *   E2E_Xf_Status_Enum_E_SAFETY_SOFT_RUNTIMEERROR (119U)
 *   E2E_Xf_Status_Enum_E_SAFETY_HARD_RUNTIMEERROR (255U)
 * Emmpp_Mode_Fb_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Emmpp_Mode_Fb_Enum_UNINITIALIZED (0U)
 *   Emmpp_Mode_Fb_Enum_MOTOR_DRIVE_ON (1U)
 *   Emmpp_Mode_Fb_Enum_MOTOR_DRIVE_OFF (2U)
 *   Emmpp_Mode_Fb_Enum_MOTOR_DRIVE_SUSPENDED_INTERNAL (3U)
 *   Emmpp_Mode_Fb_Enum_MOTOR_DRIVE_SUSPENDED_EXTERNAL (4U)
 * Emmpp_Mode_Req_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Emmpp_Mode_Req_Enum_MOTOR_DRIVE_SUSPENDED (0U)
 *   Emmpp_Mode_Req_Enum_MOTOR_DRIVE_ON (1U)
 *   Emmpp_Mode_Req_Enum_MOTOR_DRIVE_OFF (2U)
 * Emmpp_St_Fb_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Emmpp_St_Fb_Enum_OPERATING (0U)
 *   Emmpp_St_Fb_Enum_SHUTDOWN_IN_PROGRESS (1U)
 *   Emmpp_St_Fb_Enum_READY_TO_SHUTDOWN (2U)
 * Emmpp_St_Req_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Emmpp_St_Req_Enum_OPERATING (0U)
 *   Emmpp_St_Req_Enum_SHUTDOWN (1U)
 * EmoCtl_Req_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_SUSPENDED (0U)
 *   EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_SUSPENDED (0U)
 *   EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_ON (1U)
 *   EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_ON (1U)
 *   EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_OFF (2U)
 *   EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_OFF (2U)
 * EmoCtl_Sts_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   EmoCtl_Sts_Enum_UNINITIALIZED (0U)
 *   EmoCtl_Sts_Enum_MOTOR_DRIVE_ON (1U)
 *   EmoCtl_Sts_Enum_MOTOR_DRIVE_OFF (2U)
 *   EmoCtl_Sts_Enum_MOTOR_DRIVE_SUSPENDED_INTERNAL (3U)
 *   EmoCtl_Sts_Enum_MOTOR_DRIVE_SUSPENDED_EXTERNAL (4U)
 * Essm_System_State_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Essm_System_State_Enum_UNINITIALIZED (0U)
 *   Essm_System_State_Enum_CORNER_STANDBY (1U)
 *   Essm_System_State_Enum_ACTIVE_CAPABLE_PASSIVE_EXTERNAL_CORNER (2U)
 *   Essm_System_State_Enum_ACTIVE_CAPABLE_REDUCED_FUNCTION_EXTERNAL (3U)
 *   Essm_System_State_Enum_ACTIVE_CAPABLE_ECO_MAX_CORNER (4U)
 *   Essm_System_State_Enum_ACTIVE_CAPABLE_FORCE_CONTROL_CORNER (5U)
 *   Essm_System_State_Enum_ACTIVE_NOT_CAPABLE_PASSIVE_LATCHING_CORNER (6U)
 *   Essm_System_State_Enum_ACTIVE_NOT_CAPABLE_PASSIVE_RECOVERABLE_CORNER (7U)
 *   Essm_System_State_Enum_CORNER_SHUTDOWN (8U)
 * Faa_Sts_Sst_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Faa_Sts_Sst_Enum_UNINITIALIZED (0U)
 *   Faa_Sts_Sst_Enum_HEALTHY_ACTIVE_NOT_CAPABLE (1U)
 *   Faa_Sts_Sst_Enum_HEALTHY_ACTIVE_CAPABLE (2U)
 *   Faa_Sts_Sst_Enum_PASSIVE_RECOVERABLE (3U)
 *   Faa_Sts_Sst_Enum_PASSIVE_LATCHING (4U)
 * Fdg_Diag_Reaction_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Fdg_Diag_Reaction_Enum_DISABLE (0U)
 *   Fdg_Diag_Reaction_Enum_ENABLE (1U)
 * Force_Priority_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Force_Priority_Enum_NORMAL (0U)
 *   Force_Priority_Enum_HIGH (1U)
 * Impedance_Settings_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Impedance_Settings_Enum_Soft_Front_Soft_Rear (0U)
 *   Impedance_Settings_Enum_Firm_Front_Soft_Rear (1U)
 *   Impedance_Settings_Enum_Soft_Front_Firm_Rear (2U)
 *   Impedance_Settings_Enum_Firm_Front_Firm_Rear (3U)
 *   Impedance_Settings_Enum_OpenLoop_Front_OpenLoop_Rear (4U)
 *   Impedance_Settings_Enum_RESERVE_1 (5U)
 *   Impedance_Settings_Enum_RESERVE_2 (6U)
 *   Impedance_Settings_Enum_RESERVE_3 (7U)
 * Nm_Network_Release_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Nm_Network_Release_Enum_OPERATING (0U)
 *   Nm_Network_Release_Enum_READY_TO_SLEEP (1U)
 * OperatorState_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   OperatorState_Enum_OPERATOR_ST_NONE (0U)
 *   OperatorState_Enum_OPERATOR_ST_OUTSIDE (1U)
 *   OperatorState_Enum_OPERATOR_ST_AVAILABLE (2U)
 *   OperatorState_Enum_OPERATOR_ST_INSIDE (3U)
 *   OperatorState_Enum_OPERATOR_ST_INVALID (7U)
 * Pg_Validity_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Pg_Validity_Enum_INVALID (0U)
 *   Pg_Validity_Enum_VALID (1U)
 * Qfr_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Qfr_Enum_UNINITIALIZED (0U)
 *   Qfr_Enum_UNINITIALIZED (0U)
 *   Qfr_Enum_HEALTHY (1U)
 *   Qfr_Enum_HEALTHY (1U)
 *   Qfr_Enum_DEGRADED (2U)
 *   Qfr_Enum_DEGRADED (2U)
 *   Qfr_Enum_UNHEALTHY (3U)
 *   Qfr_Enum_UNHEALTHY (3U)
 * Regen_Lmt_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Regen_Lmt_Enum_REGEN_LIMIT_NOT_APPLIED (0U)
 *   Regen_Lmt_Enum_REGEN_LIMIT_APPLIED (1U)
 * Shdn_Fb_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Shdn_Fb_Enum_NOT_REQUESTED (0U)
 *   Shdn_Fb_Enum_NOT_REQUESTED (0U)
 *   Shdn_Fb_Enum_SHUTDOWN_READINESS_IN_PROGRESS (1U)
 *   Shdn_Fb_Enum_SHUTDOWN_READINESS_IN_PROGRESS (1U)
 *   Shdn_Fb_Enum_READY_TO_SHUTDOWN (2U)
 *   Shdn_Fb_Enum_READY_TO_SHUTDOWN (2U)
 * Shdn_Req_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Shdn_Req_Enum_NO_SHUTDOWN_REQ (0U)
 *   Shdn_Req_Enum_NO_SHUTDOWN_REQ (0U)
 *   Shdn_Req_Enum_PREPARE_FOR_SHUTDOWN (1U)
 *   Shdn_Req_Enum_PREPARE_FOR_SHUTDOWN (1U)
 * TCU_01_Mth_Enum: Enumeration of integer in interval [-2147483648...2147483647] with enumerators
 *   TCU_01_Mth_Enum_UNKNOWN (0)
 *   TCU_01_Mth_Enum_JANUARY (1)
 *   TCU_01_Mth_Enum_FEBRUARY (2)
 *   TCU_01_Mth_Enum_MARCH (3)
 *   TCU_01_Mth_Enum_APRIL (4)
 *   TCU_01_Mth_Enum_MAY (5)
 *   TCU_01_Mth_Enum_JUNE (6)
 *   TCU_01_Mth_Enum_JULY (7)
 *   TCU_01_Mth_Enum_SEPTEMBER (8)
 *   TCU_01_Mth_Enum_OCTOBER (9)
 *   TCU_01_Mth_Enum_NOVEMBER (10)
 *   TCU_01_Mth_Enum_DECEMBER (11)
 *   TCU_01_Mth_Enum_RESERVED_1 (12)
 *   TCU_01_Mth_Enum_RESERVED_2 (13)
 *   TCU_01_Mth_Enum_INVALID (14)
 * Validity_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Validity_Enum_INVALID (0U)
 *   Validity_Enum_VALID (1U)
 * VehSpdLo_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   VehSpdLo_Enum_UNKNOWN (0U)
 *   VehSpdLo_Enum_UNKNOWN (0U)
 *   VehSpdLo_Enum_LOW_SPEED (1U)
 *   VehSpdLo_Enum_LOW_SPEED (1U)
 *   VehSpdLo_Enum_MEDIUM_TO_HIGH_SPEED (2U)
 *   VehSpdLo_Enum_MEDIUM_TO_HIGH_SPEED (2U)
 * VehStateDetailed_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   VehStateDetailed_Enum_VEH_ST_PARKED (0U)
 *   VehStateDetailed_Enum_VEH_ST_DRVRDY (1U)
 *   VehStateDetailed_Enum_VEH_ST_DRIVING (2U)
 *   VehStateDetailed_Enum_VEH_ST_SWUPDATED (3U)
 *   VehStateDetailed_Enum_VEH_ST_CHARGING (4U)
 *   VehStateDetailed_Enum_VEH_ST_PWRSWAP (5U)
 *   VehStateDetailed_Enum_VEH_ST_INVALID (15U)
 * VehStaty_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   VehStaty_Enum_UNKNOWN (0U)
 *   VehStaty_Enum_UNKNOWN (0U)
 *   VehStaty_Enum_NON_STATIONARY (1U)
 *   VehStaty_Enum_NON_STATIONARY (1U)
 *   VehStaty_Enum_STATIONARY (2U)
 *   VehStaty_Enum_STATIONARY (2U)
 *
 * Array Types:
 * ============
 * rt_Array_float32_10: Array with 10 element(s) of type float32
 * rt_Array_float32_12: Array with 12 element(s) of type float32
 * rt_Array_float32_6: Array with 6 element(s) of type float32
 * rt_Array_uint8_11: Array with 11 element(s) of type uint8
 * rt_Array_uint8_2: Array with 2 element(s) of type uint8
 * rt_Array_uint8_3: Array with 3 element(s) of type uint8
 * rt_Array_uint8_32: Array with 32 element(s) of type uint8
 *
 * Record Types:
 * =============
 * ACD_SharedCalibrationData_Struct: Record with elements
 *   ACD_INV_PRESSURE_NORM of type float32
 *   ACD_PUMP_DISPLACEMENT of type float32
 *   ACD_FDG_ANTIALIAS_LPF_FREQ of type float32
 *   ACD_FEST_LPF_FREQ of type float32
 *   ACD_INV_PUMP_DISPLACEMENT of type float32
 *   ACD_SYS_PE_TEMP_DATA_ARY of type rt_Array_float32_6
 *   ACD_SYS_PE_TEMP_BKP_ARY of type rt_Array_float32_6
 * Acab_Ascc_Events_Struct: Record with elements
 *   ACAB_ZONE_R_FAS_01_LOSTCOMM_EVENT of type Diag_Event_Status_Enum
 *   ACAB_ZONE_R_FAS_01_E2E_AC_ERROR_EVENT of type Diag_Event_Status_Enum
 *   ACAB_ZONE_R_FAS_01_E2E_CRC_ERROR_EVENT of type Diag_Event_Status_Enum
 *   ACAB_ZONE_R_FAS_02_LOSTCOMM_EVENT of type Diag_Event_Status_Enum
 *   ACAB_ZONE_R_FAS_02_E2E_AC_ERROR_EVENT of type Diag_Event_Status_Enum
 *   ACAB_ZONE_R_FAS_02_E2E_CRC_ERROR_EVENT of type Diag_Event_Status_Enum
 * Acab_Ascc_Mode_Req_Struct: Record with elements
 *   Acab_Ascc_Mode_Req of type Ascc_Mode_Req_Enum
 *   Acab_Ascc_Mode_Req_Qfr of type Qfr_Enum
 * Acab_Ascc_St_Req_Struct: Record with elements
 *   Acab_Ascc_St_Req of type Ascc_St_Rq_Enum
 * Acab_AsmcCom_Qfr_Struct: Record with elements
 *   Acab_AsmcCom_Qfr of type Qfr_Enum
 * Acab_FAS_Xx_01_Raw_Struct: Record with elements
 *   Acab_Ascc_Id_Sw_Xx_Na of type uint32
 *   Acab_Ascc_Mode_Fb_Xx_Na of type Ascc_Mode_Fb_Enum
 *   Acab_Ascc_St_Fb_Xx_Na of type Ascc_St_Fb_Enum
 *   Acab_Faa_Amnt_ActunCpby_Xx_Na of type uint8
 *   Acab_Faa_Id_Hw_Xx_Na of type uint32
 *   Acab_Faa_Pwr_UBus48_Xx_Watt of type uint16
 *   Acab_Faa_Sts_Pwr48_Xx_Qfr_Na of type Qfr_Enum
 *   Acab_Faa_Sts_Sst_Xx_Na of type Faa_Sts_Sst_Enum
 *   Acab_Fas_Id_Sys_Xx_Na of type uint32
 *   Acab_Amnt_CpbyMrgn_Xx_Na of type uint8
 * Acab_F_AtActr_Struct: Record with elements
 *   Acab_F_AtActr_Cmd of type float32
 *   Acab_F_AtActr_Cmd_Qfr of type Qfr_Enum
 * Acab_Sts_VehState_Struct: Record with elements
 *   Acab_Sts_VehStaty of type VehStaty_Enum
 *   Acab_Sts_VehSpdLo of type VehSpdLo_Enum
 * Acab_Veh_Psn_Sus_AtAct_Struct: Record with elements
 *   Acab_Veh_Psn_Sus_AtAct of type float32
 *   Acab_Veh_Sts_Psn_Sus_Qfr_Na of type Qfr_Enum
 * Acab_Zl_Setg_Req_Struct: Record with elements
 *   Acab_Zl_Setg_Req of type Impedance_Settings_Enum
 * Ascc_Emm_Sts_Veh_Struct: Record with elements
 *   Ascc_Emm_Sts_VehStaty_Na of type VehStaty_Enum
 *   Ascc_Emm_Sts_VehSpdLo_Na of type VehSpdLo_Enum
 * Ascc_Esdd_St_Req_Struct: Record with elements
 *   Ascc_EmoCtl_Req_Na of type EmoCtl_Req_Enum
 *   Ascc_Shdn_Req_Na of type Shdn_Req_Enum
 * Bsw_ProgrammingReq_Struct: Record with elements
 *   Bsw_ProgrammingReq of type boolean
 * Bsw_ZONE_13C_Raw_Struct: Record with elements
 *   Bsw_DrvState of type DrvState_Enum
 *   Bsw_DrvState_SrvSts of type Validity_Enum
 *   Bsw_OperatorState of type OperatorState_Enum
 *   Bsw_OperatorState_SrvSts of type Validity_Enum
 *   Bsw_VehStateDetailed of type VehStateDetailed_Enum
 *   Bsw_VehStateDetailed_SrvSts of type Validity_Enum
 * Bsw_ZONE_3A9_Raw_Struct: Record with elements
 *   Bsw_VehOdometer of type uint32
 * Bsw_ZONE_3B2_Raw_Struct: Record with elements
 *   Bsw_Day of type uint8
 *   Bsw_Hr of type uint8
 *   Bsw_Min of type uint8
 *   Bsw_MSec of type uint16
 *   Bsw_Mth of type uint8
 *   Bsw_Sec of type uint8
 *   Bsw_Yr of type uint8
 * Bsw_Zone_R_Fas_01_Raw_Struct: Record with elements
 *   Bsw_Zone_R_FAS_01_E2eXfSts of type E2E_Xf_Status_Enum
 *   Bsw_Zone_R_FAS_01_IsUpdated of type boolean
 *   Bsw_Ascc_St_Req_Na of type Ascc_St_Rq_Enum
 *   Bsw_Faa_Cons_Pwr_Limit_Watt of type uint16
 *   Bsw_Faa_Pwr48_ConsLmt_Actv_Na of type Discharge_Pwr_Lmt_Enum
 *   Bsw_Faa_Pwr48_RegenLmt_Actv_Na of type Charge_Pwr_Lmt_Enum
 *   Bsw_Faa_Regen_Pwr_Limit_Watt of type uint16
 *   Bsw_Faa_Sf_Diag_Mofr_Na of type Diag_Mofr_Enum
 *   Bsw_Faa_Sts_Cons_Pwr_Limit_Qfr_Na of type Validity_Enum
 *   Bsw_Faa_Sts_Regen_Pwr_Limit_Qfr_Na of type Validity_Enum
 *   Bsw_Faa_Zl_Setg_Req_Na of type Impedance_Settings_Enum
 *   Bsw_Fas_Oper_Mins of type uint32
 *   Bsw_Fas_Sts_VehSpdLo_Na of type VehSpdLo_Enum
 *   Bsw_Fas_Sts_VehStaty_Na of type VehStaty_Enum
 *   Bsw_Veh_Psn_Sus_AtAct_Fl_Mm of type uint16
 *   Bsw_Veh_Psn_Sus_AtAct_Fr_Mm of type uint16
 *   Bsw_Veh_Psn_Sus_AtAct_Rl_Mm of type uint16
 *   Bsw_Veh_Psn_Sus_AtAct_Rr_Mm of type uint16
 *   Bsw_Veh_Sts_Psn_Sus_Fl_Qfr_Na of type Validity_Enum
 *   Bsw_Veh_Sts_Psn_Sus_Fr_Qfr_Na of type Validity_Enum
 *   Bsw_Veh_Sts_Psn_Sus_Rl_Qfr_Na of type Validity_Enum
 *   Bsw_Veh_Sts_Psn_Sus_Rr_Qfr_Na of type Validity_Enum
 * Bsw_Zone_R_Fas_02_Raw_Struct: Record with elements
 *   Bsw_Zone_R_Fas_02_E2eXfSts of type E2E_Xf_Status_Enum
 *   Bsw_Zone_R_FAS_02_IsUpdated of type boolean
 *   Bsw_Ascc_F_Prio_Na of type Force_Priority_Enum
 *   Bsw_Ascc_Mode_Req_Na of type Ascc_Mode_Req_Enum
 *   Bsw_Faa_F_Fl_AtActr_Cmd_Nwt of type uint16
 *   Bsw_Faa_F_Fr_AtActr_Cmd_Nwt of type uint16
 *   Bsw_Faa_F_Rl_AtActr_Cmd_Nwt of type uint16
 *   Bsw_Faa_F_Rr_AtActr_Cmd_Nwt of type uint16
 * Cse_F_Estn_Lpf_Data_Struct: Record with elements
 *   Cse_F_Estn_Lpf of type float32
 * Cse_Pg_Sys_Estn_Vldy_Struct: Record with elements
 *   Cse_Pg_Sys_Estn_Vldy_Na of type Validity_Enum
 * Cse_Sts_F_Estn_Struct: Record with elements
 *   Cse_Sts_F_Est_Na of type Validity_Enum
 * Cse_Sys_Pg_Est_Data_Struct: Record with elements
 *   Cse_Sys_Pg_Est_Pa of type float32
 * Csp_Lpf_Data_Struct: Record with elements
 *   Csp_F_AtActr_Cmd_Lpf of type float32
 *   Csp_Pg_Var_AtHrm_Lpf of type float32
 *   Csp_Oil_Temp_Lpf of type float32
 *   Csp_Vagr_OfRotr_Radsec_Lpf of type float32
 *   Csp_Veh_Psn_Sus_AtAct_m_Lpf of type float32
 *   Csp_Tq_Dlvrd_Nm_Lpf of type float32
 * Csp_Pg_Var_AtHrm_Vldy_Struct: Record with elements
 *   Csp_Pg_Var_AtHrm_Vldy_Na of type Validity_Enum
 * Csp_Procsd_Data_Struct: Record with elements
 *   Csp_F_AtActr_Cmd_Nwt of type float32
 *   Csp_Pg_Var_AtHrm_Pa of type float32
 *   Csp_Vagr_OfRotr_Radsec of type float32
 *   Csp_Ag_Emot_Rad of type float32
 *   Csp_Oil_Temp_C of type float32
 * Csp_Procsd_Veh_Psn_Sus_AtAct_Struct: Record with elements
 *   Csp_Veh_Psn_Sus_AtAct_m of type float32
 *   Csp_Veh_Psn_Sus_AtAct_Vldy_Na of type Validity_Enum
 * DCD_ACAB_1msComRx_Struct: Record with elements
 *   DCD_DISABLE_E2E_CRC_MC_DIAG of type boolean
 *   DCD_ZONE_R_FAS_01_E2E_DEBOUNCE_TIME of type uint16
 *   DCD_ZONE_R_FAS_01_E2E_RECOVERY_TIME of type uint16
 *   DCD_ZONE_R_FAS_02_E2E_DEBOUNCE_TIME of type uint16
 *   DCD_ZONE_R_FAS_02_E2E_RECOVERY_TIME of type uint16
 *   DCD_VEH_SUS_POS_TIMEOUT of type uint16
 * DCD_ESSM_FaaActuationCapability_Struct: Record with elements
 *   DCD_FAA_CAPABILITY_RATE_LIMIT of type float32
 *   DCD_CPBY_MRGN_FAIL_DEBOUNCE_TIME of type uint16
 *   DCD_CPBY_MRGN_FAIL_RECOVERY_TIME of type uint16
 *   DCD_CPBYMRGN_TEMP_BP of type rt_Array_float32_6
 *   DCD_CPBYMRGN_CAP_TEMP of type rt_Array_float32_6
 *   DCD_FAA_ACTUNCPBY_DURING_DEBOUNCE of type float32
 *   DCD_CPBY_MRGN_FAIL_THRESHOLD of type uint8
 *   DCD_CPBY_MRGN_RECOVERY_THRESHOLD of type uint8
 *   DCD_CAPABILITY_PLAUSIBILITY_THRESHOLD of type uint8
 * DCD_ESSM_SafeStateOperation_Struct: Record with elements
 *   DCD_FORCE_CONTROL_F_THRESHOLD of type float32
 *   DCD_PRC_RECOVERY_THRESHOLD_TIME of type uint16
 * DCD_FDG_Force_Deviation_Struct: Record with elements
 *   DCD_DISABLE_FORCE_DEVIATION_REACTION of type Fdg_Diag_Reaction_Enum
 *   DCD_FDD_ERR_LPF of type float32
 *   DCD_FDD_FRONT_DZN_UP of type float32
 *   DCD_FDD_FRONT_DZN_LO of type float32
 *   DCD_FDD_FRONT_ERR_SAT_UP of type float32
 *   DCD_FDD_ERR_GAIN of type float32
 *   DCD_FDD_REAR_DZN_UP of type float32
 *   DCD_FDD_REAR_DZN_LO of type float32
 *   DCD_FDD_REAR_ERR_SAT_UP of type float32
 *   DCD_FDD_INT_LKG of type float32
 *   DCD_FDD_TEMP_THD_UP of type float32
 *   DCD_FDD_TEMP_THD_LO of type float32
 *   DCD_FDD_ACTUNCPBY_THD of type float32
 *   DCD_FDD_ERR_HPF of type float32
 *   DCD_FDD_INITN_TI_THD of type uint16
 * DCD_FDG_Gas_Leakage_Struct: Record with elements
 *   DCD_DISABLE_GAS_LEAKAGE_REACTION of type Fdg_Diag_Reaction_Enum
 *   DCD_GLD_EVENT_DEBOUNCE_TIMEOUT of type uint16
 *   DCD_GLD_SYS_PG_EST_LPF_FREQ of type float32
 *   DCD_GLD_OIL_TEMP_LPF_FREQ of type float32
 *   DCD_GLD_INITN_TI_THD of type uint16
 *   DCD_GLD_SYS_PG_THD of type rt_Array_float32_10
 *   DCD_GLD_OIL_TEMP_THD of type rt_Array_float32_10
 * DCD_FDG_Oil_Leakage_Struct: Record with elements
 *   DCD_DISABLE_OIL_LEAKAGE_REACTION of type Fdg_Diag_Reaction_Enum
 *   DCD_OLD_EVENT_DEBOUNCE_TIMEOUT of type uint16
 *   DCD_OLD_F_THD_UPPR of type float32
 *   DCD_OLD_F_THD_LOWR of type float32
 *   DCD_OLD_PG_VAR_FLT_THD of type float32
 *   DCD_OLD_VARIABLE_PRESSURE_LPF_FREQ of type float32
 *   DCD_OLD_FORCE_COMMAND_LPF_FREQ of type float32
 *   DCD_OLD_INITN_TI_THD of type uint16
 * DCD_FDG_Psm_Struct: Record with elements
 *   DCD_PSM_ROT_INERTIA of type float32
 *   DCD_PSM_DRG_LINEAR of type float32
 *   DCD_PSM_DRG_NONLINEAR of type float32
 *   DCD_PSM_BP_FREQ of type float32
 *   DCD_PSM_BP_WIDTH of type float32
 *   DCD_PSM_LPF_FREQ of type float32
 *   DCD_PSM_INIT_TIME of type uint16
 *   DCD_PSM_ERR_SAT_UP of type float32
 *   DCD_PSM_ERR_SAT_LO of type float32
 * DCD_PAB_PgSnsrSerialDataHandler_Struct: Record with elements
 *   DCD_PRESSURE_DIAGNOSTIC_INTERNAL_TIMEOUT of type uint16
 *   DCD_PRESSURE_DIAGNOSTIC_EVENT_DEBOUNCE_TIMEOUT of type uint16
 *   DCD_PRESSURE_DIAGNOSTIC_EVENT_RECOVERY_TIMEOUT of type uint16
 *   DCD_OIL_TEMPERATURE_INTERNAL_TIMEOUT of type uint16
 *   DCD_OIL_TEMPERATURE_EVENT_DEBOUNCE_TIMEOUT of type uint16
 *   DCD_OIL_TEMPERATURE_EVENT_RECOVERY_TIMEOUT of type uint16
 * Esdd_Accel_AtAvPcb_Struct: Record with elements
 *   Esdd_A_X_AtAvPcb_Msec2 of type float32
 *   Esdd_A_X_AtAvPcb_Qfr_Na of type Qfr_Enum
 *   Esdd_A_Y_AtAvPcb_Msec2 of type float32
 *   Esdd_A_Y_AtAvPcb_Qfr_Na of type Qfr_Enum
 *   Esdd_A_Z_AtAvPcb_Msec2 of type float32
 *   Esdd_A_Z_AtAvPcb_Qfr_Na of type Qfr_Enum
 * Esdd_Ascc_St_Fb_Struct: Record with elements
 *   Esdd_EmoCtl_Sts_Na of type EmoCtl_Sts_Enum
 *   Esdd_Shdn_Fb_Na of type Shdn_Fb_Enum
 * Esdd_Av_Pg_Var_Struct: Record with elements
 *   Esdd_Av_Pg_Var_Pa of type float32
 *   Esdd_Av_Pg_Var_Vldy of type Pg_Validity_Enum
 * Esdd_Emm_Amnt_ActunCpby_Struct: Record with elements
 *   Essd_Emm_Amnt_ActunCpby_Na of type float32
 * Esdd_Emm_Bus_Struct: Record with elements
 *   Esdd_Emm_U_Bus_Volt of type float32
 *   Esdd_Emm_I_Bus_Ampr of type float32
 *   Esdd_Emm_Pwr_48PwrCns_Watt of type float32
 * Esdd_Emm_Pwr_Lim_Tq_Dmd_Struct: Record with elements
 *   Esdd_Emm_Pwr_Lim_Tq_Dmd_Nwtm of type float32
 * Esdd_Emm_Temp_Struct: Record with elements
 *   Esdd_Emm_Temp_Emms_DegC of type float32
 *   Esdd_Emm_Temp_Pcba_DegC of type float32
 *   Esdd_Emm_Temp_AtPhase_U_Deg of type float32
 *   Esdd_Emm_Temp_AtPhase_V_Deg of type float32
 *   Esdd_Emm_Temp_AtPhase_W_Deg of type float32
 * Esdd_Emmpp_St_Fb_Struct: Record with elements
 *   Esdd_Emmpp_Mode_Fb_Na of type Emmpp_Mode_Fb_Enum
 *   Esdd_Emmpp_St_Fb_Na of type Emmpp_St_Fb_Enum
 * Esdd_Emot_Tq_Dlvrd_Struct: Record with elements
 *   Esdd_Emot_Tq_Dlvrd_Nwtm of type float32
 * Esdd_Peak_Tq_Struct: Record with elements
 *   Esdd_Peak_Tq_Pcnt of type float32
 * Esdd_PgSnsr_Serial_Data_Struct: Record with elements
 *   Esdd_PgSnsr_DiagSt_Na of type Dests_Enum
 *   Esdd_PgSnsr_DiagSt_IsValidandFresh_Na of type boolean
 *   Esdd_Oil_Temp_C of type float32
 *   Esdd_Oil_Temp_IsValidandFresh_Na of type boolean
 * Esdd_RotorSnsr_Data_Struct: Record with elements
 *   Esdd_RotorSnsr_Ag_Rad of type float32
 *   Esdd_RotorSnsr_Vagr_Radsec of type float32
 * Esdd_Sply_Data_Struct: Record with elements
 *   Esdd_SplyU_Volt of type float32
 *   Esdd_SplyI_Amp of type float32
 *   Esdd_Bus_Pwr_Est_Watt of type float32
 * Essm_Afic_Mode_Struct: Record with elements
 *   Essm_Afic_Mode of type Afic_Mode_Enum
 * Essm_Cap_Mrgn_Diagnostics_Event_Struct: Record with elements
 *   PHASE_TEMP_LOW_CAPABILITY_MARGIN_EVENT of type Diag_Event_Status_Enum
 * Essm_Emmpp_St_Req_Struct: Record with elements
 *   Essm_Emmpp_Mode_Req_Na of type Emmpp_Mode_Req_Enum
 *   Essm_Emmpp_St_Req_Na of type Emmpp_St_Req_Enum
 * Essm_Faa_Amnt_ActunCpbyMrgn_Struct: Record with elements
 *   Essm_Faa_Amnt_ActunCpbyMrgn of type float32
 * Essm_Faa_Amnt_ActunCpby_Struct: Record with elements
 *   Essm_Faa_Amnt_ActunCpby of type float32
 * Essm_Ign_Cycle_Cntr_Reset_Req_Struct: Record with elements
 *   Essm_Ign_Cycle_Cntr_Reset_Req of type boolean
 * Essm_Ign_Cycle_Cntr_Struct: Record with elements
 *   Essm_Ign_Cycl_Cntr of type uint32
 * Essm_Ign_Cycle_Cntr_Write_Trigger_Struct: Record with elements
 *   Essm_Ign_Cycle_Cntr_Write_Trigger of type boolean
 * Essm_Nm_Network_Release_Struct: Record with elements
 *   Essm_Nm_Network_Release of type Nm_Network_Release_Enum
 * Essm_St_Fb_Struct: Record with elements
 *   Essm_Mode_Fb of type Ascc_Mode_Fb_Enum
 *   Essm_Sts_Sst of type Faa_Sts_Sst_Enum
 *   Essm_St_Fb of type Ascc_St_Fb_Enum
 * Essm_Sys_State_Internal_Struct: Record with elements
 *   Essm_System_State_Internal of type Essm_System_State_Enum
 * FCD_WAE_Struct: Record with elements
 *   FCD_A_SNSR_XYZ_TRANSFORM_GAINS_TO_FAA_Z_MTX of type rt_Array_float32_12
 * Fcc_Cap_Plausibility_Diag_Status_Struct: Record with elements
 *   Fcc_Cpby_Plausibility_Diag_Status of type Dests_Enum
 * Fcc_F_AtActr_Limit_Lpf_Struct: Record with elements
 *   Fcc_F_AtActr_Limit_Cmd_Lpf of type float32
 * Fcc_F_Cpby_Struct: Record with elements
 *   Fcc_F_PositiveCpby_Pct of type float32
 *   Fcc_F_NegativeCpby_Pct of type float32
 * Fdg_Force_Deviation_Cumulative_Err_Struct: Record with elements
 *   Fdg_Force_Deviation_Cumulative_Error of type float32
 * Fdg_Force_Deviation_Diag_Status_Struct: Record with elements
 *   Fdg_Force_Deviation_Diag_Status of type Dests_Enum
 * Fdg_Force_Deviation_Diagnostics_Event_Struct: Record with elements
 *   FDG_FORCE_DEVIATION_DETECTED_EVENT of type Diag_Event_Status_Enum
 * Fdg_Gas_Leakage_Diag_Status_Struct: Record with elements
 *   Fdg_Gas_Leakage_Diag_Status of type Dests_Enum
 * Fdg_Gas_Leakage_Diagnostics_Event_Struct: Record with elements
 *   FDG_GAS_LEAKAGE_DETECTED_EVENT of type Diag_Event_Status_Enum
 * Fdg_Oil_Leakage_Diag_Status_Struct: Record with elements
 *   Fdg_Oil_Leakage_Diag_Status of type Dests_Enum
 * Fdg_Oil_Leakage_Diagnostics_Event_Struct: Record with elements
 *   FDG_OIL_LEAKAGE_DETECTED_EVENT of type Diag_Event_Status_Enum
 * Fdg_Psm_Err_Struct: Record with elements
 *   Psm_Rms_Error_Pa of type float32
 * Fdg_Psm_Max_Err_Struct: Record with elements
 *   Psm_Err_CurrMax_Pa of type float32
 * Nvm_CustomerHwNumbers_Struct: Record with elements
 *   F110_FAA_Customer_HW_Part_Number of type rt_Array_uint8_11
 *   F111_FAA_Customer_HW_Baseline of type rt_Array_uint8_2
 *   F18B_FAA_Manufacturing_Date of type rt_Array_uint8_3
 * Nvm_HardwareNumbers_Struct: Record with elements
 *   EMM_Part_Number of type rt_Array_uint8_32
 *   EMM_Serial_Number of type rt_Array_uint8_32
 *   AV_Part_Number of type rt_Array_uint8_32
 *   AV_Serial_Number of type rt_Array_uint8_32
 *   ACB_Part_Number of type rt_Array_uint8_32
 *   ACB_Serial_Number of type rt_Array_uint8_32
 *   FAA_Part_Number of type rt_Array_uint8_32
 *   FAA_Serial_Number of type rt_Array_uint8_32
 * Pab_Oil_Temp_Struct: Record with elements
 *   Pab_Oil_Temp_C of type float32
 *   Pab_Oil_Temp_Qfr_Na of type Qfr_Enum
 * Pab_PgSnsrSerialDataHandler_Events_Struct: Record with elements
 *   PAB_TEMPERATURE_EVENT of type Diag_Event_Status_Enum
 *   PAB_DIAGNOSTIC_STATUS_EVENT of type Diag_Event_Status_Enum
 * Pab_PgSnsr_Qfr_Struct: Record with elements
 *   Pab_PgSnsr_Qfr_Na of type Qfr_Enum
 * Pab_PressureSensor_PreQfr_Struct: Record with elements
 *   Pab_PressureSensor_PreQfr_Na of type Qfr_Enum
 * Psm_Max_Error_Pa_Reset_Req_Struct: Record with elements
 *   Psm_Max_Error_Reset_Req of type boolean
 * SG_FAS_FL_01_Group_Struct: Record with elements
 *   Ascc_Id_Sw_Fl_Na of type uint32
 *   Ascc_Mode_Fb_Fl_Na of type uint8
 *   Ascc_St_Fb_Fl_Na of type uint8
 *   Faa_25Hz_Msg_Fl_AlvCtr of type uint8
 *   Faa_25Hz_Msg_Fl_Crc of type uint16
 *   Faa_Amnt_ActunCpby_Fl_Na of type uint8
 *   Faa_Amnt_CpbyMrgn_Fl_Na of type uint8
 *   Faa_Id_Hw_Fl_Na of type uint32
 *   Faa_Sts_Sst_Fl_Na of type uint8
 *   Fas_Id_Sys_Fl_Na of type uint32
 * SG_FAS_FR_01_Group_Struct: Record with elements
 *   Ascc_Id_Sw_Fr_Na of type uint32
 *   Ascc_Mode_Fb_Fr_Na of type uint8
 *   Ascc_St_Fb_Fr_Na of type uint8
 *   Faa_25Hz_Msg_Fr_AlvCtr of type uint8
 *   Faa_25Hz_Msg_Fr_Crc of type uint16
 *   Faa_Amnt_ActunCpby_Fr_Na of type uint8
 *   Faa_Amnt_CpbyMrgn_Fr_Na of type uint8
 *   Faa_Id_Hw_Fr_Na of type uint32
 *   Faa_Sts_Sst_Fr_Na of type uint8
 *   Fas_Id_Sys_Fr_Na of type uint32
 * SG_FAS_RL_01_Group_Struct: Record with elements
 *   Ascc_Id_Sw_Rl_Na of type uint32
 *   Ascc_Mode_Fb_Rl_Na of type uint8
 *   Ascc_St_Fb_Rl_Na of type uint8
 *   Faa_25Hz_Msg_Rl_AlvCtr of type uint8
 *   Faa_25Hz_Msg_Rl_Crc of type uint16
 *   Faa_Amnt_ActunCpby_Rl_Na of type uint8
 *   Faa_Amnt_CpbyMrgn_Rl_Na of type uint8
 *   Faa_Id_Hw_Rl_Na of type uint32
 *   Faa_Sts_Sst_Rl_Na of type uint8
 *   Fas_Id_Sys_Rl_Na of type uint32
 * SG_FAS_RR_01_Group_Struct: Record with elements
 *   Ascc_Id_Sw_Rr_Na of type uint32
 *   Ascc_Mode_Fb_Rr_Na of type uint8
 *   Ascc_St_Fb_Rr_Na of type uint8
 *   Faa_25Hz_Msg_Rr_AlvCtr of type uint8
 *   Faa_25Hz_Msg_Rr_Crc of type uint16
 *   Faa_Amnt_ActunCpby_Rr_Na of type uint8
 *   Faa_Amnt_CpbyMrgn_Rr_Na of type uint8
 *   Faa_Id_Hw_Rr_Na of type uint32
 *   Faa_Sts_Sst_Rr_Na of type uint8
 *   Fas_Id_Sys_Rr_Na of type uint32
 * SG_ZONE_13C_Group_Struct: Record with elements
 *   DrvState of type DrvState_Enum
 *   DrvState_SrvSts of type Validity_Enum
 *   OperatorState of type OperatorState_Enum
 *   OperatorState_SrvSts of type Validity_Enum
 *   VehStateDetailed of type VehStateDetailed_Enum
 *   VehStateDetailed_SrvSts of type Validity_Enum
 * SG_ZONE_3A9_Group_Struct: Record with elements
 *   VehOdometer of type uint32
 * SG_ZONE_3B2_Group_Struct: Record with elements
 *   Day of type uint8
 *   Hr of type uint8
 *   Min of type uint8
 *   MSec of type uint16
 *   Mth of type uint8
 *   Sec of type uint8
 *   Yr of type uint8
 * SG_Zone_R_FAS_01_Group_Struct: Record with elements
 *   Ascc_St_Req_Na of type uint8
 *   Asmc_100Hz_Msg_AlvCtr of type uint8
 *   Asmc_100Hz_Msg_Crc of type uint16
 *   Faa_Cons_Pwr_Limit_Watt of type uint16
 *   Faa_Pwr48_ConsLmt_Actv_Na of type uint8
 *   Faa_Pwr48_RegenLmt_Actv_Na of type uint8
 *   Faa_Regen_Pwr_Limit_Watt of type uint16
 *   Faa_Sf_Diag_Mofr_Na of type uint8
 *   Faa_Sts_Cons_Pwr_Limit_Qfr_Na of type uint8
 *   Faa_Sts_Regen_Pwr_Limit_Qfr_Na of type uint8
 *   Faa_Zl_Setg_Req_Na of type uint8
 *   Fas_Oper_Mins of type uint32
 *   Fas_Sts_VehSpdLo_Na of type uint8
 *   Fas_Sts_VehStaty_Na of type uint8
 *   Veh_Psn_Sus_AtAct_Fl_Mm of type uint16
 *   Veh_Psn_Sus_AtAct_Fr_Mm of type uint16
 *   Veh_Psn_Sus_AtAct_Rl_Mm of type uint16
 *   Veh_Psn_Sus_AtAct_Rr_Mm of type uint16
 *   Veh_Sts_Psn_Sus_Fl_Qfr_Na of type uint8
 *   Veh_Sts_Psn_Sus_Fr_Qfr_Na of type uint8
 *   Veh_Sts_Psn_Sus_Rl_Qfr_Na of type uint8
 *   Veh_Sts_Psn_Sus_Rr_Qfr_Na of type uint8
 * SG_Zone_R_FAS_02_Group_Struct: Record with elements
 *   Ascc_F_Prio_Na of type uint8
 *   Ascc_Mode_Req_Na of type uint8
 *   Asmc_1000Hz_F_Cmd_AlvCtr of type uint8
 *   Asmc_1000Hz_F_Cmd_Crc of type uint8
 *   Faa_F_Fl_AtActr_Cmd_Nwt of type uint16
 *   Faa_F_Fr_AtActr_Cmd_Nwt of type uint16
 *   Faa_F_Rl_AtActr_Cmd_Nwt of type uint16
 *   Faa_F_Rr_AtActr_Cmd_Nwt of type uint16
 * Uab_Oper_Cycle_Cntr_Reset_Req_Struct: Record with elements
 *   Uab_Oper_Cycle_Cntr_Reset_Req of type boolean
 * Uab_Oper_Cycle_Cntr_Write_Trigger_Struct: Record with elements
 *   Uab_Oper_Cycle_Cntr_Write_Trigger of type boolean
 * Uab_OperationCycle_State_Struct: Record with elements
 *   Uab_OperationCycle_State of type Diag_OperationCycle_Status_Enum
 * Uab_Total_Oper_Cycl_Cntr_Struct: Record with elements
 *   UAB_Total_Operation_Cycle_Cntr of type uint32
 * Wae_Whl_A_Z_AtAct_Est_Struct: Record with elements
 *   Wae_Whl_A_Z_AtAct_Est_Msec2 of type float32
 *   Wae_Whl_Sts_AZ_Qfr_Na of type Qfr_Enum
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   Nvm_CustomerHwNumbers_Struct *Rte_Pim_AsccSwc_CUSTOMER_HW_NUMBERS_NVM_PIM(void)
 *   Nvm_HardwareNumbers_Struct *Rte_Pim_AsccSwc_HW_NUMBERS_NVM_PIM(void)
 *   Essm_Ign_Cycle_Cntr_Struct *Rte_Pim_AsccSwc_IGNITION_CYCLE_CNTR_NVM_PIM(void)
 *   Uab_Total_Oper_Cycl_Cntr_Struct *Rte_Pim_AsccSwc_OPERATION_CYCLE_CNTR_NVM_PIM(void)
 *   Fdg_Psm_Max_Err_Struct *Rte_Pim_AsccSwc_PSM_MAX_ERROR_PA_NVM_PIM(void)
 *
 *********************************************************************************************************************/


#define AsccSwc_START_SEC_CODE
#include "AsccSwc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#include <Rte_Type.h>

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AsccSwc_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SG_FAS_FL_01_Group_SG_FAS_FL_01_Group(const SG_FAS_FL_01_Group_Struct *data)
 *   Std_ReturnType Rte_Write_SG_FAS_FR_01_Group_SG_FAS_FR_01_Group(const SG_FAS_FR_01_Group_Struct *data)
 *   Std_ReturnType Rte_Write_SG_FAS_RL_01_Group_SG_FAS_RL_01_Group(const SG_FAS_RL_01_Group_Struct *data)
 *   Std_ReturnType Rte_Write_SG_FAS_RR_01_Group_SG_FAS_RR_01_Group(const SG_FAS_RR_01_Group_Struct *data)
 *
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_AsccSwc_Init_Acab_Zl_Setg_Req_Acab_Zl_Setg_Req(const Acab_Zl_Setg_Req_Struct *data)
 *   Acab_Zl_Setg_Req_Struct *Rte_IWriteRef_AsccSwc_Init_Acab_Zl_Setg_Req_Acab_Zl_Setg_Req(void)
 *   void Rte_IWrite_AsccSwc_Init_Essm_Afic_Mode_Essm_Afic_Mode(const Essm_Afic_Mode_Struct *data)
 *   Essm_Afic_Mode_Struct *Rte_IWriteRef_AsccSwc_Init_Essm_Afic_Mode_Essm_Afic_Mode(void)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_msBsw_Control_Debug_Msg_Tx_Bsw_Control_Debug_Msg_Tx_Enum(uint8 mode)
 *   Modes of Rte_ModeType_Bsw_Control_Debug_Msg_Tx_Enum:
 *   - RTE_MODE_Bsw_Control_Debug_Msg_Tx_Enum_Bsw_Control_Debug_Msg_Tx_Enum_NO_DBG_MSG_TX
 *   - RTE_MODE_Bsw_Control_Debug_Msg_Tx_Enum_Bsw_Control_Debug_Msg_Tx_Enum_TX_DBG_MSG
 *   - RTE_TRANSITION_Bsw_Control_Debug_Msg_Tx_Enum
 *   Std_ReturnType Rte_Switch_msNm_Network_Release_Nm_Network_Release_Enum(uint8 mode)
 *   Modes of Rte_ModeType_Nm_Network_Release_Enum:
 *   - RTE_MODE_Nm_Network_Release_Enum_Nm_Network_Release_Enum_OPERATING
 *   - RTE_MODE_Nm_Network_Release_Enum_Nm_Network_Release_Enum_READY_TO_SLEEP
 *   - RTE_TRANSITION_Nm_Network_Release_Enum
 *
 * Inter Runnable Variables:
 * =========================
 *   Implicit Write Access:
 *   ----------------------
 *   void Rte_IrvIWrite_AsccSwc_Init_IrvEssm_Afic_Mode(const Essm_Afic_Mode_Struct *data)
 *   Essm_Afic_Mode_Struct *Rte_IrvIWriteRef_AsccSwc_Init_IrvEssm_Afic_Mode(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Init_IrvEssm_St_Fb(const Essm_St_Fb_Struct *data)
 *   Essm_St_Fb_Struct *Rte_IrvIWriteRef_AsccSwc_Init_IrvEssm_St_Fb(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Init_IrvFdg_Force_Deviation_Diag_Status(const Fdg_Force_Deviation_Diag_Status_Struct *data)
 *   Fdg_Force_Deviation_Diag_Status_Struct *Rte_IrvIWriteRef_AsccSwc_Init_IrvFdg_Force_Deviation_Diag_Status(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Init_IrvFdg_Gas_Leakage_Diag_Status(const Fdg_Gas_Leakage_Diag_Status_Struct *data)
 *   Fdg_Gas_Leakage_Diag_Status_Struct *Rte_IrvIWriteRef_AsccSwc_Init_IrvFdg_Gas_Leakage_Diag_Status(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Init_IrvFdg_Oil_Leakage_Diag_Status(const Fdg_Oil_Leakage_Diag_Status_Struct *data)
 *   Fdg_Oil_Leakage_Diag_Status_Struct *Rte_IrvIWriteRef_AsccSwc_Init_IrvFdg_Oil_Leakage_Diag_Status(void)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CUSTOMER_HW_NUMBERS_NVM_GetErrorStatus(uint8 *RequestResultPtr)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_NvMService_E_NOT_OK
 *   Std_ReturnType Rte_Call_CUSTOMER_HW_NUMBERS_NVM_WriteBlock(NvM_DstPtrType SrcPtr)
 *     Asynchronous Service Invocation
 *   Std_ReturnType Rte_Call_HW_NUMBERS_NVM_GetErrorStatus(uint8 *RequestResultPtr)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_NvMService_E_NOT_OK
 *   Std_ReturnType Rte_Call_HW_NUMBERS_NVM_WriteBlock(NvM_DstPtrType SrcPtr)
 *     Asynchronous Service Invocation
 *   Std_ReturnType Rte_Call_IGNITION_CYCLE_CNTR_NVM_GetErrorStatus(uint8 *RequestResultPtr)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_NvMService_E_NOT_OK
 *   Std_ReturnType Rte_Call_IGNITION_CYCLE_CNTR_NVM_WriteBlock(NvM_DstPtrType SrcPtr)
 *     Asynchronous Service Invocation
 *   Std_ReturnType Rte_Call_OPERATION_CYCLE_CNTR_NVM_GetErrorStatus(uint8 *RequestResultPtr)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_NvMService_E_NOT_OK
 *   Std_ReturnType Rte_Call_OPERATION_CYCLE_CNTR_NVM_WriteBlock(NvM_DstPtrType SrcPtr)
 *     Asynchronous Service Invocation
 *   Std_ReturnType Rte_Call_PSM_MAX_ERROR_PA_NVM_GetErrorStatus(uint8 *RequestResultPtr)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_NvMService_E_NOT_OK
 *   Std_ReturnType Rte_Call_PSM_MAX_ERROR_PA_NVM_WriteBlock(NvM_DstPtrType SrcPtr)
 *     Asynchronous Service Invocation
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AsccSwc_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AsccSwc_CODE) AsccSwc_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AsccSwc_Init
 *********************************************************************************************************************/

#ifdef RTE_INIT_IMPLICIT_BUFFERS
  Rte_IWrite_AsccSwc_Init_Acab_Sts_VehStsStaty_Acab_Sts_VehStsStaty(&Rte_C_Ascc_Sts_VehStaty_Struct_0);
  Rte_IWrite_AsccSwc_Init_Ascc_Esdd_St_Req_Ascc_Esdd_St_Req(&Rte_C_Ascc_Esdd_St_Req_Struct_0);
  Rte_IWrite_AsccSwc_Init_Ascc_Id_Sw_Fl_Na_Ascc_Id_Sw_Fl_Na(Rte_InitValue_Ascc_Id_Sw_Fl_Na_Ascc_Id_Sw_Fl_Na);
  Rte_IWrite_AsccSwc_Init_Ascc_Id_Sw_Fr_Na_Ascc_Id_Sw_Fr_Na(Rte_InitValue_Ascc_Id_Sw_Fr_Na_Ascc_Id_Sw_Fr_Na);
  Rte_IWrite_AsccSwc_Init_Ascc_Id_Sw_Rl_Na_Ascc_Id_Sw_Rl_Na(Rte_InitValue_Ascc_Id_Sw_Rl_Na_Ascc_Id_Sw_Rl_Na);
  Rte_IWrite_AsccSwc_Init_Ascc_Id_Sw_Rr_Na_Ascc_Id_Sw_Rr_Na(Rte_InitValue_Ascc_Id_Sw_Rr_Na_Ascc_Id_Sw_Rr_Na);
  Rte_IWrite_AsccSwc_Init_Ascc_St_Fb_Fl_Na_Ascc_St_Fb_Fl_Na(Rte_InitValue_Ascc_St_Fb_Fl_Na_Ascc_St_Fb_Fl_Na);
  Rte_IWrite_AsccSwc_Init_Ascc_St_Fb_Fr_Na_Ascc_St_Fb_Fr_Na(Rte_InitValue_Ascc_St_Fb_Fr_Na_Ascc_St_Fb_Fr_Na);
  Rte_IWrite_AsccSwc_Init_Ascc_St_Fb_Na_Ascc_St_Fb_Na(Rte_InitValue_Ascc_St_Fb_Na_Ascc_St_Fb_Na);
  Rte_IWrite_AsccSwc_Init_Ascc_St_Fb_Rl_Na_Ascc_St_Fb_Rl_Na(Rte_InitValue_Ascc_St_Fb_Rl_Na_Ascc_St_Fb_Rl_Na);
  Rte_IWrite_AsccSwc_Init_Ascc_St_Fb_Rr_Na_Ascc_St_Fb_Rr_Na(Rte_InitValue_Ascc_St_Fb_Rr_Na_Ascc_St_Fb_Rr_Na);
  Rte_IWrite_AsccSwc_Init_Av_Pg_Var_AtHrm_Fl_Pa_Av_Pg_Var_AtHrm_Fl_Pa(Rte_InitValue_Av_Pg_Var_AtHrm_Fl_Pa_Av_Pg_Var_AtHrm_Fl_Pa);
  Rte_IWrite_AsccSwc_Init_Av_Pg_Var_AtHrm_Fr_Pa_Av_Pg_Var_AtHrm_Fr_Pa(Rte_InitValue_Av_Pg_Var_AtHrm_Fr_Pa_Av_Pg_Var_AtHrm_Fr_Pa);
  Rte_IWrite_AsccSwc_Init_Av_Pg_Var_AtHrm_Pa_Av_Pg_Var_AtHrm_Pa(Rte_InitValue_Av_Pg_Var_AtHrm_Pa_Av_Pg_Var_AtHrm_Pa);
  Rte_IWrite_AsccSwc_Init_Av_Pg_Var_AtHrm_Rl_Pa_Av_Pg_Var_AtHrm_Rl_Pa(Rte_InitValue_Av_Pg_Var_AtHrm_Rl_Pa_Av_Pg_Var_AtHrm_Rl_Pa);
  Rte_IWrite_AsccSwc_Init_Av_Pg_Var_AtHrm_Rr_Pa_Av_Pg_Var_AtHrm_Rr_Pa(Rte_InitValue_Av_Pg_Var_AtHrm_Rr_Pa_Av_Pg_Var_AtHrm_Rr_Pa);
  Rte_IWrite_AsccSwc_Init_Emm_Ag_OfRotr_Rad_Emm_Ag_OfRotr_Rad(Rte_InitValue_Emm_Ag_OfRotr_Rad_Emm_Ag_OfRotr_Rad);
  Rte_IWrite_AsccSwc_Init_Emm_Err_Code_Na_Emm_Err_Code_Na(Rte_InitValue_Emm_Err_Code_Na_Emm_Err_Code_Na);
  Rte_IWrite_AsccSwc_Init_Emm_I_Bus_Ampr_Emm_I_Bus_Ampr(Rte_InitValue_Emm_I_Bus_Ampr_Emm_I_Bus_Ampr);
  Rte_IWrite_AsccSwc_Init_Emm_I_Bus_Fl_Ampr_Emm_I_Bus_Fl_Ampr(Rte_InitValue_Emm_I_Bus_Fl_Ampr_Emm_I_Bus_Fl_Ampr);
  Rte_IWrite_AsccSwc_Init_Emm_I_Bus_Fr_Ampr_Emm_I_Bus_Fr_Ampr(Rte_InitValue_Emm_I_Bus_Fr_Ampr_Emm_I_Bus_Fr_Ampr);
  Rte_IWrite_AsccSwc_Init_Emm_I_Bus_Rl_Ampr_Emm_I_Bus_Rl_Ampr(Rte_InitValue_Emm_I_Bus_Rl_Ampr_Emm_I_Bus_Rl_Ampr);
  Rte_IWrite_AsccSwc_Init_Emm_I_Bus_Rr_Ampr_Emm_I_Bus_Rr_Ampr(Rte_InitValue_Emm_I_Bus_Rr_Ampr_Emm_I_Bus_Rr_Ampr);
  Rte_IWrite_AsccSwc_Init_Emm_Temp_Brdg_DegC_Emm_Temp_Brdg_DegC(Rte_InitValue_Emm_Temp_Brdg_DegC_Emm_Temp_Brdg_DegC);
  Rte_IWrite_AsccSwc_Init_Emm_Tq_Dmd_Nm_Emm_Tq_Dmd_Nm(Rte_InitValue_Emm_Tq_Dmd_Nm_Emm_Tq_Dmd_Nm);
  Rte_IWrite_AsccSwc_Init_Emm_Tq_Est_Fl_Nm_Emm_Tq_Est_Fl_Nm(Rte_InitValue_Emm_Tq_Est_Fl_Nm_Emm_Tq_Est_Fl_Nm);
  Rte_IWrite_AsccSwc_Init_Emm_Tq_Est_Fr_Nm_Emm_Tq_Est_Fr_Nm(Rte_InitValue_Emm_Tq_Est_Fr_Nm_Emm_Tq_Est_Fr_Nm);
  Rte_IWrite_AsccSwc_Init_Emm_Tq_Est_Nm_Emm_Tq_Est_Nm(Rte_InitValue_Emm_Tq_Est_Nm_Emm_Tq_Est_Nm);
  Rte_IWrite_AsccSwc_Init_Emm_Tq_Est_Rl_Nm_Emm_Tq_Est_Rl_Nm(Rte_InitValue_Emm_Tq_Est_Rl_Nm_Emm_Tq_Est_Rl_Nm);
  Rte_IWrite_AsccSwc_Init_Emm_Tq_Est_Rr_Nm_Emm_Tq_Est_Rr_Nm(Rte_InitValue_Emm_Tq_Est_Rr_Nm_Emm_Tq_Est_Rr_Nm);
  Rte_IWrite_AsccSwc_Init_Emm_U_Bus_Fl_Volt_Emm_U_Bus_Fl_Volt(Rte_InitValue_Emm_U_Bus_Fl_Volt_Emm_U_Bus_Fl_Volt);
  Rte_IWrite_AsccSwc_Init_Emm_U_Bus_Fr_Volt_Emm_U_Bus_Fr_Volt(Rte_InitValue_Emm_U_Bus_Fr_Volt_Emm_U_Bus_Fr_Volt);
  Rte_IWrite_AsccSwc_Init_Emm_U_Bus_Rl_Volt_Emm_U_Bus_Rl_Volt(Rte_InitValue_Emm_U_Bus_Rl_Volt_Emm_U_Bus_Rl_Volt);
  Rte_IWrite_AsccSwc_Init_Emm_U_Bus_Rr_Volt_Emm_U_Bus_Rr_Volt(Rte_InitValue_Emm_U_Bus_Rr_Volt_Emm_U_Bus_Rr_Volt);
  Rte_IWrite_AsccSwc_Init_Emm_U_Bus_Volt_Emm_U_Bus_Volt(Rte_InitValue_Emm_U_Bus_Volt_Emm_U_Bus_Volt);
  Rte_IWrite_AsccSwc_Init_Emm_Vagr_OfRotr_Fl_Radsec_Emm_Vagr_OfRotr_Fl_Radsec(Rte_InitValue_Emm_Vagr_OfRotr_Fl_Radsec_Emm_Vagr_OfRotr_Fl_Radsec);
  Rte_IWrite_AsccSwc_Init_Emm_Vagr_OfRotr_Fr_Radsec_Emm_Vagr_OfRotr_Fr_Radsec(Rte_InitValue_Emm_Vagr_OfRotr_Fr_Radsec_Emm_Vagr_OfRotr_Fr_Radsec);
  Rte_IWrite_AsccSwc_Init_Emm_Vagr_OfRotr_Radsec_Emm_Vagr_OfRotr_Radsec(Rte_InitValue_Emm_Vagr_OfRotr_Radsec_Emm_Vagr_OfRotr_Radsec);
  Rte_IWrite_AsccSwc_Init_Emm_Vagr_OfRotr_Rl_Radsec_Emm_Vagr_OfRotr_Rl_Radsec(Rte_InitValue_Emm_Vagr_OfRotr_Rl_Radsec_Emm_Vagr_OfRotr_Rl_Radsec);
  Rte_IWrite_AsccSwc_Init_Emm_Vagr_OfRotr_Rr_Radsec_Emm_Vagr_OfRotr_Rr_Radsec(Rte_InitValue_Emm_Vagr_OfRotr_Rr_Radsec_Emm_Vagr_OfRotr_Rr_Radsec);
  Rte_IWrite_AsccSwc_Init_Essm_AficMode_Data_Essm_AficMode_Data(&Rte_C_Essm_AficMode_Data_Struct_0);
  Rte_IWrite_AsccSwc_Init_Faa_Amnt_ActunCpby_Fl_Na_Faa_Amnt_ActunCpby_Fl_Na(Rte_InitValue_Faa_Amnt_ActunCpby_Fl_Na_Faa_Amnt_ActunCpby_Fl_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Amnt_ActunCpby_Fr_Na_Faa_Amnt_ActunCpby_Fr_Na(Rte_InitValue_Faa_Amnt_ActunCpby_Fr_Na_Faa_Amnt_ActunCpby_Fr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Amnt_ActunCpby_Rl_Na_Faa_Amnt_ActunCpby_Rl_Na(Rte_InitValue_Faa_Amnt_ActunCpby_Rl_Na_Faa_Amnt_ActunCpby_Rl_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Amnt_ActunCpby_Rr_Na_Faa_Amnt_ActunCpby_Rr_Na(Rte_InitValue_Faa_Amnt_ActunCpby_Rr_Na_Faa_Amnt_ActunCpby_Rr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Id_Hw_Fl_Na_Faa_Id_Hw_Fl_Na(Rte_InitValue_Faa_Id_Hw_Fl_Na_Faa_Id_Hw_Fl_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Id_Hw_Fr_Na_Faa_Id_Hw_Fr_Na(Rte_InitValue_Faa_Id_Hw_Fr_Na_Faa_Id_Hw_Fr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Id_Hw_Rl_Na_Faa_Id_Hw_Rl_Na(Rte_InitValue_Faa_Id_Hw_Rl_Na_Faa_Id_Hw_Rl_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Id_Hw_Rr_Na_Faa_Id_Hw_Rr_Na(Rte_InitValue_Faa_Id_Hw_Rr_Na_Faa_Id_Hw_Rr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Pwr_UBus48_Fl_Est_Watt_Faa_Pwr_UBus48_Fl_Est_Watt(Rte_InitValue_Faa_Pwr_UBus48_Fl_Est_Watt_Faa_Pwr_UBus48_Fl_Est_Watt);
  Rte_IWrite_AsccSwc_Init_Faa_Pwr_UBus48_Fr_Est_Watt_Faa_Pwr_UBus48_Fr_Est_Watt(Rte_InitValue_Faa_Pwr_UBus48_Fr_Est_Watt_Faa_Pwr_UBus48_Fr_Est_Watt);
  Rte_IWrite_AsccSwc_Init_Faa_Pwr_UBus48_Rl_Est_Watt_Faa_Pwr_UBus48_Rl_Est_Watt(Rte_InitValue_Faa_Pwr_UBus48_Rl_Est_Watt_Faa_Pwr_UBus48_Rl_Est_Watt);
  Rte_IWrite_AsccSwc_Init_Faa_Pwr_UBus48_Rr_Est_Watt_Faa_Pwr_UBus48_Rr_Est_Watt(Rte_InitValue_Faa_Pwr_UBus48_Rr_Est_Watt_Faa_Pwr_UBus48_Rr_Est_Watt);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_ActunCpby_Fl_Qfr_Na_Faa_Sts_ActunCpby_Fl_Qfr_Na(Rte_InitValue_Faa_Sts_ActunCpby_Fl_Qfr_Na_Faa_Sts_ActunCpby_Fl_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_ActunCpby_Fr_Qfr_Na_Faa_Sts_ActunCpby_Fr_Qfr_Na(Rte_InitValue_Faa_Sts_ActunCpby_Fr_Qfr_Na_Faa_Sts_ActunCpby_Fr_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_ActunCpby_Rl_Qfr_Na_Faa_Sts_ActunCpby_Rl_Qfr_Na(Rte_InitValue_Faa_Sts_ActunCpby_Rl_Qfr_Na_Faa_Sts_ActunCpby_Rl_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_ActunCpby_Rr_Qfr_Na_Faa_Sts_ActunCpby_Rr_Qfr_Na(Rte_InitValue_Faa_Sts_ActunCpby_Rr_Qfr_Na_Faa_Sts_ActunCpby_Rr_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_Pwr48_Fl_Qfr_Na_Faa_Sts_Pwr48_Fl_Qfr_Na(Rte_InitValue_Faa_Sts_Pwr48_Fl_Qfr_Na_Faa_Sts_Pwr48_Fl_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_Pwr48_Fr_Qfr_Na_Faa_Sts_Pwr48_Fr_Qfr_Na(Rte_InitValue_Faa_Sts_Pwr48_Fr_Qfr_Na_Faa_Sts_Pwr48_Fr_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_Pwr48_Rl_Qfr_Na_Faa_Sts_Pwr48_Rl_Qfr_Na(Rte_InitValue_Faa_Sts_Pwr48_Rl_Qfr_Na_Faa_Sts_Pwr48_Rl_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_Pwr48_Rr_Qfr_Na_Faa_Sts_Pwr48_Rr_Qfr_Na(Rte_InitValue_Faa_Sts_Pwr48_Rr_Qfr_Na_Faa_Sts_Pwr48_Rr_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_Sst_Fl_Na_Faa_Sts_Sst_Fl_Na(Rte_InitValue_Faa_Sts_Sst_Fl_Na_Faa_Sts_Sst_Fl_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_Sst_Fr_Na_Faa_Sts_Sst_Fr_Na(Rte_InitValue_Faa_Sts_Sst_Fr_Na_Faa_Sts_Sst_Fr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_Sst_Rl_Na_Faa_Sts_Sst_Rl_Na(Rte_InitValue_Faa_Sts_Sst_Rl_Na_Faa_Sts_Sst_Rl_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_Sst_Rr_Na_Faa_Sts_Sst_Rr_Na(Rte_InitValue_Faa_Sts_Sst_Rr_Na_Faa_Sts_Sst_Rr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_Temp_Fl_Qfr_Na_Faa_Sts_Temp_Fl_Qfr_Na(Rte_InitValue_Faa_Sts_Temp_Fl_Qfr_Na_Faa_Sts_Temp_Fl_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_Temp_Fr_Qfr_Na_Faa_Sts_Temp_Fr_Qfr_Na(Rte_InitValue_Faa_Sts_Temp_Fr_Qfr_Na_Faa_Sts_Temp_Fr_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_Temp_Rl_Qfr_Na_Faa_Sts_Temp_Rl_Qfr_Na(Rte_InitValue_Faa_Sts_Temp_Rl_Qfr_Na_Faa_Sts_Temp_Rl_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Sts_Temp_Rr_Qfr_Na_Faa_Sts_Temp_Rr_Qfr_Na(Rte_InitValue_Faa_Sts_Temp_Rr_Qfr_Na_Faa_Sts_Temp_Rr_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Faa_Temp_Fl_AtCtlr_DegC_Faa_Temp_Fl_AtCtlr_DegC(Rte_InitValue_Faa_Temp_Fl_AtCtlr_DegC_Faa_Temp_Fl_AtCtlr_DegC);
  Rte_IWrite_AsccSwc_Init_Faa_Temp_Fr_AtCtlr_DegC_Faa_Temp_Fr_AtCtlr_DegC(Rte_InitValue_Faa_Temp_Fr_AtCtlr_DegC_Faa_Temp_Fr_AtCtlr_DegC);
  Rte_IWrite_AsccSwc_Init_Faa_Temp_Rl_AtCtlr_DegC_Faa_Temp_Rl_AtCtlr_DegC(Rte_InitValue_Faa_Temp_Rl_AtCtlr_DegC_Faa_Temp_Rl_AtCtlr_DegC);
  Rte_IWrite_AsccSwc_Init_Faa_Temp_Rr_AtCtlr_DegC_Faa_Temp_Rr_AtCtlr_DegC(Rte_InitValue_Faa_Temp_Rr_AtCtlr_DegC_Faa_Temp_Rr_AtCtlr_DegC);
  Rte_IWrite_AsccSwc_Init_Pab_Oil_Temp_Pab_Oil_Temp(&Rte_C_Pab_Oil_Temp_Struct_0);
  Rte_IWrite_AsccSwc_Init_Whl_A_Z_AtAct_Est_Msec2_Whl_A_Z_AtAct_Est_Msec2(Rte_InitValue_Whl_A_Z_AtAct_Est_Msec2_Whl_A_Z_AtAct_Est_Msec2);
  Rte_IWrite_AsccSwc_Init_Whl_A_Z_Fl_AtAct_Est_Msec2_Whl_A_Z_Fl_AtAct_Est_Msec2(Rte_InitValue_Whl_A_Z_Fl_AtAct_Est_Msec2_Whl_A_Z_Fl_AtAct_Est_Msec2);
  Rte_IWrite_AsccSwc_Init_Whl_A_Z_Fr_AtAct_Est_Msec_Whl_A_Z_Fr_AtAct_Est_Msec(Rte_InitValue_Whl_A_Z_Fr_AtAct_Est_Msec_Whl_A_Z_Fr_AtAct_Est_Msec);
  Rte_IWrite_AsccSwc_Init_Whl_A_Z_Rl_AtAct_Est_Msec_Whl_A_Z_Rl_AtAct_Est_Msec(Rte_InitValue_Whl_A_Z_Rl_AtAct_Est_Msec_Whl_A_Z_Rl_AtAct_Est_Msec);
  Rte_IWrite_AsccSwc_Init_Whl_A_Z_Rr_AtAct_Est_Msec_Whl_A_Z_Rr_AtAct_Est_Msec(Rte_InitValue_Whl_A_Z_Rr_AtAct_Est_Msec_Whl_A_Z_Rr_AtAct_Est_Msec);
  Rte_IWrite_AsccSwc_Init_Whl_Sts_AZ_Fl_Qfr_Na_Whl_Sts_AZ_Fl_Qfr_Na(Rte_InitValue_Whl_Sts_AZ_Fl_Qfr_Na_Whl_Sts_AZ_Fl_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Whl_Sts_AZ_Fr_Qfr_Na_Whl_Sts_AZ_Fr_Qfr_Na(Rte_InitValue_Whl_Sts_AZ_Fr_Qfr_Na_Whl_Sts_AZ_Fr_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Whl_Sts_AZ_Rl_Qfr_Na_Whl_Sts_AZ_Rl_Qfr_Na(Rte_InitValue_Whl_Sts_AZ_Rl_Qfr_Na_Whl_Sts_AZ_Rl_Qfr_Na);
  Rte_IWrite_AsccSwc_Init_Whl_Sts_AZ_Rr_Qfr_Na_Whl_Sts_AZ_Rr_Qfr_Na(Rte_InitValue_Whl_Sts_AZ_Rr_Qfr_Na_Whl_Sts_AZ_Rr_Qfr_Na);
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AsccSwc_Runnable_1ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 1ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_SG_Zone_R_FAS_01_Group_SG_Zone_R_FAS_01_Group(SG_Zone_R_FAS_01_Group_Struct *data, Std_TransformerError *transformerError)
 *   Std_ReturnType Rte_Read_SG_Zone_R_FAS_02_Group_SG_Zone_R_FAS_02_Group(SG_Zone_R_FAS_02_Group_Struct *data, Std_TransformerError *transformerError)
 *   boolean Rte_IsUpdated_SG_Zone_R_FAS_01_Group_SG_Zone_R_FAS_01_Group(void)
 *   boolean Rte_IsUpdated_SG_Zone_R_FAS_02_Group_SG_Zone_R_FAS_02_Group(void)
 *
 *   Implicit S/R API:
 *   -----------------
 *   Bsw_ProgrammingReq_Struct *Rte_IRead_AsccSwc_Runnable_1ms_Bsw_ProgrammingReq_Bsw_ProgrammingReq(void)
 *   Esdd_Accel_AtAvPcb_Struct *Rte_IRead_AsccSwc_Runnable_1ms_Esdd_Accel_AtAvPcb_Esdd_Accel_AtAvPcb(void)
 *   Esdd_Ascc_St_Fb_Struct *Rte_IRead_AsccSwc_Runnable_1ms_Esdd_Ascc_St_Fb_Esdd_Ascc_St_Fb(void)
 *   Esdd_Av_Pg_Var_Struct *Rte_IRead_AsccSwc_Runnable_1ms_Esdd_Av_Pg_Var_Esdd_Av_Pg_Var(void)
 *   Esdd_Emm_Pwr_Lim_Tq_Dmd_Struct *Rte_IRead_AsccSwc_Runnable_1ms_Esdd_Emm_Pwr_Lim_Tq_Dmd_Esdd_Emm_Pwr_Lim_Tq_Dmd(void)
 *   Esdd_PgSnsr_Serial_Data_Struct *Rte_IRead_AsccSwc_Runnable_1ms_Esdd_PgSnsr_Serial_Data_Esdd_PgSnsr_Serial_Data(void)
 *   Esdd_RotorSnsr_Data_Struct *Rte_IRead_AsccSwc_Runnable_1ms_Esdd_RotorSnsr_Data_Esdd_RotorSnsr_Data(void)
 *   Fcc_Cap_Plausibility_Diag_Status_Struct *Rte_IRead_AsccSwc_Runnable_1ms_Fcc_Cpby_Plausibility_Diag_Status_Fcc_Cpby_Plausibility_Diag_Status(void)
 *   Pab_PressureSensor_PreQfr_Struct *Rte_IRead_AsccSwc_Runnable_1ms_Pab_PressureSensor_PreQfr_Pab_PressureSensor_PreQfr(void)
 *   SG_ZONE_13C_Group_Struct *Rte_IRead_AsccSwc_Runnable_1ms_SG_ZONE_13C_Group_SG_ZONE_13C_Group(void)
 *   SG_ZONE_3A9_Group_Struct *Rte_IRead_AsccSwc_Runnable_1ms_SG_ZONE_3A9_Group_SG_ZONE_3A9_Group(void)
 *   SG_ZONE_3B2_Group_Struct *Rte_IRead_AsccSwc_Runnable_1ms_SG_ZONE_3B2_Group_SG_ZONE_3B2_Group(void)
 *
 * Output Interfaces:
 * ==================
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_AsccSwc_Runnable_1ms_Acab_Veh_Psn_Sus_AtAct_Acab_Veh_Psn_Sus_AtAct(const Acab_Veh_Psn_Sus_AtAct_Struct *data)
 *   Acab_Veh_Psn_Sus_AtAct_Struct *Rte_IWriteRef_AsccSwc_Runnable_1ms_Acab_Veh_Psn_Sus_AtAct_Acab_Veh_Psn_Sus_AtAct(void)
 *   void Rte_IWrite_AsccSwc_Runnable_1ms_Acab_Zl_Setg_Req_Acab_Zl_Setg_Req(const Acab_Zl_Setg_Req_Struct *data)
 *   Acab_Zl_Setg_Req_Struct *Rte_IWriteRef_AsccSwc_Runnable_1ms_Acab_Zl_Setg_Req_Acab_Zl_Setg_Req(void)
 *   void Rte_IWrite_AsccSwc_Runnable_1ms_Ascc_Emm_Sts_Veh_Ascc_Emm_Sts_Veh(const Ascc_Emm_Sts_Veh_Struct *data)
 *   Ascc_Emm_Sts_Veh_Struct *Rte_IWriteRef_AsccSwc_Runnable_1ms_Ascc_Emm_Sts_Veh_Ascc_Emm_Sts_Veh(void)
 *   void Rte_IWrite_AsccSwc_Runnable_1ms_Ascc_Esdd_St_Req_Ascc_Esdd_St_Req(const Ascc_Esdd_St_Req_Struct *data)
 *   Ascc_Esdd_St_Req_Struct *Rte_IWriteRef_AsccSwc_Runnable_1ms_Ascc_Esdd_St_Req_Ascc_Esdd_St_Req(void)
 *   void Rte_IWrite_AsccSwc_Runnable_1ms_Essm_Afic_Mode_Essm_Afic_Mode(const Essm_Afic_Mode_Struct *data)
 *   Essm_Afic_Mode_Struct *Rte_IWriteRef_AsccSwc_Runnable_1ms_Essm_Afic_Mode_Essm_Afic_Mode(void)
 *   void Rte_IWrite_AsccSwc_Runnable_1ms_Essm_Ign_Cycle_Cntr_Essm_Ign_Cycle_Cntr(const Essm_Ign_Cycle_Cntr_Struct *data)
 *   Essm_Ign_Cycle_Cntr_Struct *Rte_IWriteRef_AsccSwc_Runnable_1ms_Essm_Ign_Cycle_Cntr_Essm_Ign_Cycle_Cntr(void)
 *   void Rte_IWrite_AsccSwc_Runnable_1ms_Pab_Oil_Temp_Pab_Oil_Temp(const Pab_Oil_Temp_Struct *data)
 *   Pab_Oil_Temp_Struct *Rte_IWriteRef_AsccSwc_Runnable_1ms_Pab_Oil_Temp_Pab_Oil_Temp(void)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_msBsw_Control_Debug_Msg_Tx_Bsw_Control_Debug_Msg_Tx_Enum(uint8 mode)
 *   Modes of Rte_ModeType_Bsw_Control_Debug_Msg_Tx_Enum:
 *   - RTE_MODE_Bsw_Control_Debug_Msg_Tx_Enum_Bsw_Control_Debug_Msg_Tx_Enum_NO_DBG_MSG_TX
 *   - RTE_MODE_Bsw_Control_Debug_Msg_Tx_Enum_Bsw_Control_Debug_Msg_Tx_Enum_TX_DBG_MSG
 *   - RTE_TRANSITION_Bsw_Control_Debug_Msg_Tx_Enum
 *   Std_ReturnType Rte_Switch_msNm_Network_Release_Nm_Network_Release_Enum(uint8 mode)
 *   Modes of Rte_ModeType_Nm_Network_Release_Enum:
 *   - RTE_MODE_Nm_Network_Release_Enum_Nm_Network_Release_Enum_OPERATING
 *   - RTE_MODE_Nm_Network_Release_Enum_Nm_Network_Release_Enum_READY_TO_SLEEP
 *   - RTE_TRANSITION_Nm_Network_Release_Enum
 *
 * Inter Runnable Variables:
 * =========================
 *   Implicit Read Access:
 *   ---------------------
 *   Fdg_Force_Deviation_Diag_Status_Struct *Rte_IrvIRead_AsccSwc_Runnable_1ms_IrvFdg_Force_Deviation_Diag_Status(void)
 *   Fdg_Gas_Leakage_Diag_Status_Struct *Rte_IrvIRead_AsccSwc_Runnable_1ms_IrvFdg_Gas_Leakage_Diag_Status(void)
 *   Fdg_Oil_Leakage_Diag_Status_Struct *Rte_IrvIRead_AsccSwc_Runnable_1ms_IrvFdg_Oil_Leakage_Diag_Status(void)
 *
 *   Implicit Write Access:
 *   ----------------------
 *   void Rte_IrvIWrite_AsccSwc_Runnable_1ms_IrvBsw_ZONE_13C_Raw(const Bsw_ZONE_13C_Raw_Struct *data)
 *   Bsw_ZONE_13C_Raw_Struct *Rte_IrvIWriteRef_AsccSwc_Runnable_1ms_IrvBsw_ZONE_13C_Raw(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Runnable_1ms_IrvEssm_Afic_Mode(const Essm_Afic_Mode_Struct *data)
 *   Essm_Afic_Mode_Struct *Rte_IrvIWriteRef_AsccSwc_Runnable_1ms_IrvEssm_Afic_Mode(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Runnable_1ms_IrvEssm_St_Fb(const Essm_St_Fb_Struct *data)
 *   Essm_St_Fb_Struct *Rte_IrvIWriteRef_AsccSwc_Runnable_1ms_IrvEssm_St_Fb(void)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ACAB_ZONE_R_FAS_01_E2E_AC_ERROR_EVENT_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_ACAB_ZONE_R_FAS_01_E2E_CRC_ERROR_EVENT_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_ACAB_ZONE_R_FAS_01_LOSTCOMM_EVENT_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_ACAB_ZONE_R_FAS_02_E2E_AC_ERROR_EVENT_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_ACAB_ZONE_R_FAS_02_E2E_CRC_ERROR_EVENT_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_ACAB_ZONE_R_FAS_02_LOSTCOMM_EVENT_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_IGNITION_CYCLE_CNTR_NVM_WriteBlock(NvM_DstPtrType SrcPtr)
 *     Asynchronous Service Invocation
 *   Std_ReturnType Rte_Call_PAB_DIAGNOSTIC_STATUS_EVENT_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_PAB_TEMPERATURE_EVENT_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AsccSwc_Runnable_1ms_doc
 *********************************************************************************************************************/
static SG_Zone_R_FAS_02_Group_Struct Zone_r_fas_02_Data;
Rte_TransformerError TF_Error;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AsccSwc_CODE) AsccSwc_Runnable_1ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AsccSwc_Runnable_1ms
 *********************************************************************************************************************/

Rte_Read_SG_Zone_R_FAS_02_Group_SG_Zone_R_FAS_02_Group(&Zone_r_fas_02_Data,&TF_Error);

if( var == 1u)
{
Rte_Switch_msNm_Network_Release_Nm_Network_Release_Enum(RULE_MATCH);
}

#ifdef RTE_INIT_IMPLICIT_BUFFERS
  Rte_IWrite_AsccSwc_Runnable_1ms_Acab_Sts_VehStsStaty_Acab_Sts_VehStsStaty(&Rte_C_Ascc_Sts_VehStaty_Struct_0);
  Rte_IWrite_AsccSwc_Runnable_1ms_Ascc_Esdd_St_Req_Ascc_Esdd_St_Req(&Rte_C_Ascc_Esdd_St_Req_Struct_0);
  Rte_IWrite_AsccSwc_Runnable_1ms_Av_Pg_Var_AtHrm_Fl_Pa_Av_Pg_Var_AtHrm_Fl_Pa(Rte_InitValue_Av_Pg_Var_AtHrm_Fl_Pa_Av_Pg_Var_AtHrm_Fl_Pa);
  Rte_IWrite_AsccSwc_Runnable_1ms_Av_Pg_Var_AtHrm_Fr_Pa_Av_Pg_Var_AtHrm_Fr_Pa(Rte_InitValue_Av_Pg_Var_AtHrm_Fr_Pa_Av_Pg_Var_AtHrm_Fr_Pa);
  Rte_IWrite_AsccSwc_Runnable_1ms_Av_Pg_Var_AtHrm_Pa_Av_Pg_Var_AtHrm_Pa(Rte_InitValue_Av_Pg_Var_AtHrm_Pa_Av_Pg_Var_AtHrm_Pa);
  Rte_IWrite_AsccSwc_Runnable_1ms_Av_Pg_Var_AtHrm_Rl_Pa_Av_Pg_Var_AtHrm_Rl_Pa(Rte_InitValue_Av_Pg_Var_AtHrm_Rl_Pa_Av_Pg_Var_AtHrm_Rl_Pa);
  Rte_IWrite_AsccSwc_Runnable_1ms_Av_Pg_Var_AtHrm_Rr_Pa_Av_Pg_Var_AtHrm_Rr_Pa(Rte_InitValue_Av_Pg_Var_AtHrm_Rr_Pa_Av_Pg_Var_AtHrm_Rr_Pa);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_Ag_OfRotr_Rad_Emm_Ag_OfRotr_Rad(Rte_InitValue_Emm_Ag_OfRotr_Rad_Emm_Ag_OfRotr_Rad);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_I_Bus_Ampr_Emm_I_Bus_Ampr(Rte_InitValue_Emm_I_Bus_Ampr_Emm_I_Bus_Ampr);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_I_Bus_Fl_Ampr_Emm_I_Bus_Fl_Ampr(Rte_InitValue_Emm_I_Bus_Fl_Ampr_Emm_I_Bus_Fl_Ampr);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_I_Bus_Fr_Ampr_Emm_I_Bus_Fr_Ampr(Rte_InitValue_Emm_I_Bus_Fr_Ampr_Emm_I_Bus_Fr_Ampr);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_I_Bus_Rl_Ampr_Emm_I_Bus_Rl_Ampr(Rte_InitValue_Emm_I_Bus_Rl_Ampr_Emm_I_Bus_Rl_Ampr);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_I_Bus_Rr_Ampr_Emm_I_Bus_Rr_Ampr(Rte_InitValue_Emm_I_Bus_Rr_Ampr_Emm_I_Bus_Rr_Ampr);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_Tq_Dmd_Nm_Emm_Tq_Dmd_Nm(Rte_InitValue_Emm_Tq_Dmd_Nm_Emm_Tq_Dmd_Nm);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_Tq_Est_Fl_Nm_Emm_Tq_Est_Fl_Nm(Rte_InitValue_Emm_Tq_Est_Fl_Nm_Emm_Tq_Est_Fl_Nm);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_Tq_Est_Fr_Nm_Emm_Tq_Est_Fr_Nm(Rte_InitValue_Emm_Tq_Est_Fr_Nm_Emm_Tq_Est_Fr_Nm);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_Tq_Est_Nm_Emm_Tq_Est_Nm(Rte_InitValue_Emm_Tq_Est_Nm_Emm_Tq_Est_Nm);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_Tq_Est_Rl_Nm_Emm_Tq_Est_Rl_Nm(Rte_InitValue_Emm_Tq_Est_Rl_Nm_Emm_Tq_Est_Rl_Nm);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_Tq_Est_Rr_Nm_Emm_Tq_Est_Rr_Nm(Rte_InitValue_Emm_Tq_Est_Rr_Nm_Emm_Tq_Est_Rr_Nm);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_U_Bus_Fl_Volt_Emm_U_Bus_Fl_Volt(Rte_InitValue_Emm_U_Bus_Fl_Volt_Emm_U_Bus_Fl_Volt);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_U_Bus_Fr_Volt_Emm_U_Bus_Fr_Volt(Rte_InitValue_Emm_U_Bus_Fr_Volt_Emm_U_Bus_Fr_Volt);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_U_Bus_Rl_Volt_Emm_U_Bus_Rl_Volt(Rte_InitValue_Emm_U_Bus_Rl_Volt_Emm_U_Bus_Rl_Volt);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_U_Bus_Rr_Volt_Emm_U_Bus_Rr_Volt(Rte_InitValue_Emm_U_Bus_Rr_Volt_Emm_U_Bus_Rr_Volt);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_U_Bus_Volt_Emm_U_Bus_Volt(Rte_InitValue_Emm_U_Bus_Volt_Emm_U_Bus_Volt);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_Vagr_OfRotr_Fl_Radsec_Emm_Vagr_OfRotr_Fl_Radsec(Rte_InitValue_Emm_Vagr_OfRotr_Fl_Radsec_Emm_Vagr_OfRotr_Fl_Radsec);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_Vagr_OfRotr_Fr_Radsec_Emm_Vagr_OfRotr_Fr_Radsec(Rte_InitValue_Emm_Vagr_OfRotr_Fr_Radsec_Emm_Vagr_OfRotr_Fr_Radsec);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_Vagr_OfRotr_Radsec_Emm_Vagr_OfRotr_Radsec(Rte_InitValue_Emm_Vagr_OfRotr_Radsec_Emm_Vagr_OfRotr_Radsec);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_Vagr_OfRotr_Rl_Radsec_Emm_Vagr_OfRotr_Rl_Radsec(Rte_InitValue_Emm_Vagr_OfRotr_Rl_Radsec_Emm_Vagr_OfRotr_Rl_Radsec);
  Rte_IWrite_AsccSwc_Runnable_1ms_Emm_Vagr_OfRotr_Rr_Radsec_Emm_Vagr_OfRotr_Rr_Radsec(Rte_InitValue_Emm_Vagr_OfRotr_Rr_Radsec_Emm_Vagr_OfRotr_Rr_Radsec);
  Rte_IWrite_AsccSwc_Runnable_1ms_Essm_AficMode_Data_Essm_AficMode_Data(&Rte_C_Essm_AficMode_Data_Struct_0);
  Rte_IWrite_AsccSwc_Runnable_1ms_Pab_Oil_Temp_Pab_Oil_Temp(&Rte_C_Pab_Oil_Temp_Struct_0);
  Rte_IWrite_AsccSwc_Runnable_1ms_Whl_A_Z_AtAct_Est_Msec2_Whl_A_Z_AtAct_Est_Msec2(Rte_InitValue_Whl_A_Z_AtAct_Est_Msec2_Whl_A_Z_AtAct_Est_Msec2);
  Rte_IWrite_AsccSwc_Runnable_1ms_Whl_A_Z_Fl_AtAct_Est_Msec2_Whl_A_Z_Fl_AtAct_Est_Msec2(Rte_InitValue_Whl_A_Z_Fl_AtAct_Est_Msec2_Whl_A_Z_Fl_AtAct_Est_Msec2);
  Rte_IWrite_AsccSwc_Runnable_1ms_Whl_A_Z_Fr_AtAct_Est_Msec_Whl_A_Z_Fr_AtAct_Est_Msec(Rte_InitValue_Whl_A_Z_Fr_AtAct_Est_Msec_Whl_A_Z_Fr_AtAct_Est_Msec);
  Rte_IWrite_AsccSwc_Runnable_1ms_Whl_A_Z_Rl_AtAct_Est_Msec_Whl_A_Z_Rl_AtAct_Est_Msec(Rte_InitValue_Whl_A_Z_Rl_AtAct_Est_Msec_Whl_A_Z_Rl_AtAct_Est_Msec);
  Rte_IWrite_AsccSwc_Runnable_1ms_Whl_A_Z_Rr_AtAct_Est_Msec_Whl_A_Z_Rr_AtAct_Est_Msec(Rte_InitValue_Whl_A_Z_Rr_AtAct_Est_Msec_Whl_A_Z_Rr_AtAct_Est_Msec);
  Rte_IWrite_AsccSwc_Runnable_1ms_Whl_Sts_AZ_Fl_Qfr_Na_Whl_Sts_AZ_Fl_Qfr_Na(Rte_InitValue_Whl_Sts_AZ_Fl_Qfr_Na_Whl_Sts_AZ_Fl_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_1ms_Whl_Sts_AZ_Fr_Qfr_Na_Whl_Sts_AZ_Fr_Qfr_Na(Rte_InitValue_Whl_Sts_AZ_Fr_Qfr_Na_Whl_Sts_AZ_Fr_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_1ms_Whl_Sts_AZ_Rl_Qfr_Na_Whl_Sts_AZ_Rl_Qfr_Na(Rte_InitValue_Whl_Sts_AZ_Rl_Qfr_Na_Whl_Sts_AZ_Rl_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_1ms_Whl_Sts_AZ_Rr_Qfr_Na_Whl_Sts_AZ_Rr_Qfr_Na(Rte_InitValue_Whl_Sts_AZ_Rr_Qfr_Na_Whl_Sts_AZ_Rr_Qfr_Na);
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AsccSwc_Runnable_2ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Implicit S/R API:
 *   -----------------
 *   ACD_SharedCalibrationData_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Acd_Shared_Param_Acd_Shared_Param(void)
 *   Cse_F_Estn_Lpf_Data_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Cse_F_Estn_Lpf_Data_Cse_F_Estn_Lpf_Data(void)
 *   Cse_Pg_Sys_Estn_Vldy_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Cse_Pg_Sys_Estn_Vldy_Cse_Pg_Sys_Estn_Vldy(void)
 *   Cse_Sts_F_Estn_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Cse_Sts_F_Estn_Cse_Sts_F_Estn(void)
 *   Cse_Sys_Pg_Est_Data_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Cse_Sys_Pg_Est_Data_Cse_Sys_Pg_Est_Data(void)
 *   Csp_Lpf_Data_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Csp_Lpf_Data_Csp_Lpf_Data(void)
 *   Csp_Pg_Var_AtHrm_Vldy_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Csp_Pg_Var_AtHrm_Vldy_Csp_Pg_Var_AtHrm_Vldy(void)
 *   Csp_Procsd_Data_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Csp_Procsd_Data_Csp_Procsd_Data(void)
 *   Csp_Procsd_Veh_Psn_Sus_AtAct_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Csp_Procsd_Veh_Psn_Sus_AtAct_Csp_Procsd_Veh_Psn_Sus_AtAct(void)
 *   Esdd_Emm_Temp_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Esdd_Emm_Temp_Esdd_Emm_Temp(void)
 *   Esdd_Emot_Tq_Dlvrd_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Esdd_Emot_Tq_Dlvrd_Esdd_Emot_Tq_Dlvrd(void)
 *   Esdd_Peak_Tq_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Esdd_Peak_Tq_Esdd_Peak_Tq(void)
 *   Esdd_Sply_Data_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Esdd_Sply_Data_Esdd_Sply_Data(void)
 *   Fcc_F_AtActr_Limit_Lpf_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Fcc_F_AtActr_Limit_Lpf_Fcc_F_AtActr_Limit_Lpf(void)
 *   Fcc_F_Cpby_Struct *Rte_IRead_AsccSwc_Runnable_2ms_Fcc_F_Cpby_Data_Fcc_F_Cpby_Data(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SG_FAS_FL_01_Group_SG_FAS_FL_01_Group(const SG_FAS_FL_01_Group_Struct *data)
 *   Std_ReturnType Rte_Write_SG_FAS_FL_01_Group_SG_FAS_FL_01_Group(const SG_FAS_FL_01_Group_Struct *data)
 *   Std_ReturnType Rte_Write_SG_FAS_FR_01_Group_SG_FAS_FR_01_Group(const SG_FAS_FR_01_Group_Struct *data)
 *   Std_ReturnType Rte_Write_SG_FAS_FR_01_Group_SG_FAS_FR_01_Group(const SG_FAS_FR_01_Group_Struct *data)
 *   Std_ReturnType Rte_Write_SG_FAS_RL_01_Group_SG_FAS_RL_01_Group(const SG_FAS_RL_01_Group_Struct *data)
 *   Std_ReturnType Rte_Write_SG_FAS_RL_01_Group_SG_FAS_RL_01_Group(const SG_FAS_RL_01_Group_Struct *data)
 *   Std_ReturnType Rte_Write_SG_FAS_RR_01_Group_SG_FAS_RR_01_Group(const SG_FAS_RR_01_Group_Struct *data)
 *   Std_ReturnType Rte_Write_SG_FAS_RR_01_Group_SG_FAS_RR_01_Group(const SG_FAS_RR_01_Group_Struct *data)
 *
 *   Implicit S/R API:
 *   -----------------
 *   void Rte_IWrite_AsccSwc_Runnable_2ms_Nvm_Customer_Hw_Numbers_Nvm_Customer_Hw_Numbers(const Nvm_CustomerHwNumbers_Struct *data)
 *   Nvm_CustomerHwNumbers_Struct *Rte_IWriteRef_AsccSwc_Runnable_2ms_Nvm_Customer_Hw_Numbers_Nvm_Customer_Hw_Numbers(void)
 *   void Rte_IWrite_AsccSwc_Runnable_2ms_Nvm_HardwareNumbers_Nvm_HardwareNumbers(const Nvm_HardwareNumbers_Struct *data)
 *   Nvm_HardwareNumbers_Struct *Rte_IWriteRef_AsccSwc_Runnable_2ms_Nvm_HardwareNumbers_Nvm_HardwareNumbers(void)
 *   void Rte_IWrite_AsccSwc_Runnable_2ms_Uab_Total_Oper_Cycl_Cntr_Uab_Total_Oper_Cycl_Cntr(const Uab_Total_Oper_Cycl_Cntr_Struct *data)
 *   Uab_Total_Oper_Cycl_Cntr_Struct *Rte_IWriteRef_AsccSwc_Runnable_2ms_Uab_Total_Oper_Cycl_Cntr_Uab_Total_Oper_Cycl_Cntr(void)
 *
 * Inter Runnable Variables:
 * =========================
 *   Implicit Read Access:
 *   ---------------------
 *   Bsw_ZONE_13C_Raw_Struct *Rte_IrvIRead_AsccSwc_Runnable_2ms_IrvBsw_ZONE_13C_Raw(void)
 *   Essm_Afic_Mode_Struct *Rte_IrvIRead_AsccSwc_Runnable_2ms_IrvEssm_Afic_Mode(void)
 *   Essm_St_Fb_Struct *Rte_IrvIRead_AsccSwc_Runnable_2ms_IrvEssm_St_Fb(void)
 *
 *   Implicit Write Access:
 *   ----------------------
 *   void Rte_IrvIWrite_AsccSwc_Runnable_2ms_IrvFdg_Force_Deviation_Diag_Status(const Fdg_Force_Deviation_Diag_Status_Struct *data)
 *   Fdg_Force_Deviation_Diag_Status_Struct *Rte_IrvIWriteRef_AsccSwc_Runnable_2ms_IrvFdg_Force_Deviation_Diag_Status(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Runnable_2ms_IrvFdg_Gas_Leakage_Diag_Status(const Fdg_Gas_Leakage_Diag_Status_Struct *data)
 *   Fdg_Gas_Leakage_Diag_Status_Struct *Rte_IrvIWriteRef_AsccSwc_Runnable_2ms_IrvFdg_Gas_Leakage_Diag_Status(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Runnable_2ms_IrvFdg_Oil_Leakage_Diag_Status(const Fdg_Oil_Leakage_Diag_Status_Struct *data)
 *   Fdg_Oil_Leakage_Diag_Status_Struct *Rte_IrvIWriteRef_AsccSwc_Runnable_2ms_IrvFdg_Oil_Leakage_Diag_Status(void)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CUSTOMER_HW_NUMBERS_NVM_WriteBlock(NvM_DstPtrType SrcPtr)
 *     Asynchronous Service Invocation
 *   Std_ReturnType Rte_Call_FDG_FORCE_DEVIATION_DETECTED_EVENT_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_FDG_GAS_LEAKAGE_DETECTED_EVENT_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_FDG_OIL_LEAKAGE_DETECTED_EVENT_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_HW_NUMBERS_NVM_WriteBlock(NvM_DstPtrType SrcPtr)
 *     Asynchronous Service Invocation
 *   Std_ReturnType Rte_Call_OPERATION_CYCLE_CNTR_NVM_WriteBlock(NvM_DstPtrType SrcPtr)
 *     Asynchronous Service Invocation
 *   Std_ReturnType Rte_Call_PHASE_TEMP_LOW_CAPABILITY_MARGIN_EVENT_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_PSM_MAX_ERROR_PA_NVM_WriteBlock(NvM_DstPtrType SrcPtr)
 *     Asynchronous Service Invocation
 *   Std_ReturnType Rte_Call_UAB_OPERATION_CYCLE_SetOperationCycleState(Dem_OperationCycleStateType CycleState)
 *     Synchronous Service Invocation. Timeout: 1us
 *     Returned Application Errors: RTE_E_OperationCycle_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AsccSwc_Runnable_2ms_doc
 *********************************************************************************************************************/
boolean Shutdown =FALSE; /* 0 -No shutdown ; 1- Shutdown requested TO be remove after Application implementation of Shutdown request by CM

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AsccSwc_CODE) AsccSwc_Runnable_2ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AsccSwc_Runnable_2ms
 *********************************************************************************************************************/

#ifdef RTE_INIT_IMPLICIT_BUFFERS
  Rte_IWrite_AsccSwc_Runnable_2ms_Ascc_Id_Sw_Fl_Na_Ascc_Id_Sw_Fl_Na(Rte_InitValue_Ascc_Id_Sw_Fl_Na_Ascc_Id_Sw_Fl_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Ascc_Id_Sw_Fr_Na_Ascc_Id_Sw_Fr_Na(Rte_InitValue_Ascc_Id_Sw_Fr_Na_Ascc_Id_Sw_Fr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Ascc_Id_Sw_Rl_Na_Ascc_Id_Sw_Rl_Na(Rte_InitValue_Ascc_Id_Sw_Rl_Na_Ascc_Id_Sw_Rl_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Ascc_Id_Sw_Rr_Na_Ascc_Id_Sw_Rr_Na(Rte_InitValue_Ascc_Id_Sw_Rr_Na_Ascc_Id_Sw_Rr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Ascc_St_Fb_Fl_Na_Ascc_St_Fb_Fl_Na(Rte_InitValue_Ascc_St_Fb_Fl_Na_Ascc_St_Fb_Fl_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Ascc_St_Fb_Fr_Na_Ascc_St_Fb_Fr_Na(Rte_InitValue_Ascc_St_Fb_Fr_Na_Ascc_St_Fb_Fr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Ascc_St_Fb_Na_Ascc_St_Fb_Na(Rte_InitValue_Ascc_St_Fb_Na_Ascc_St_Fb_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Ascc_St_Fb_Rl_Na_Ascc_St_Fb_Rl_Na(Rte_InitValue_Ascc_St_Fb_Rl_Na_Ascc_St_Fb_Rl_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Ascc_St_Fb_Rr_Na_Ascc_St_Fb_Rr_Na(Rte_InitValue_Ascc_St_Fb_Rr_Na_Ascc_St_Fb_Rr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Emm_Err_Code_Na_Emm_Err_Code_Na(Rte_InitValue_Emm_Err_Code_Na_Emm_Err_Code_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Emm_Temp_Brdg_DegC_Emm_Temp_Brdg_DegC(Rte_InitValue_Emm_Temp_Brdg_DegC_Emm_Temp_Brdg_DegC);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Amnt_ActunCpby_Fl_Na_Faa_Amnt_ActunCpby_Fl_Na(Rte_InitValue_Faa_Amnt_ActunCpby_Fl_Na_Faa_Amnt_ActunCpby_Fl_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Amnt_ActunCpby_Fr_Na_Faa_Amnt_ActunCpby_Fr_Na(Rte_InitValue_Faa_Amnt_ActunCpby_Fr_Na_Faa_Amnt_ActunCpby_Fr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Amnt_ActunCpby_Rl_Na_Faa_Amnt_ActunCpby_Rl_Na(Rte_InitValue_Faa_Amnt_ActunCpby_Rl_Na_Faa_Amnt_ActunCpby_Rl_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Amnt_ActunCpby_Rr_Na_Faa_Amnt_ActunCpby_Rr_Na(Rte_InitValue_Faa_Amnt_ActunCpby_Rr_Na_Faa_Amnt_ActunCpby_Rr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Id_Hw_Fl_Na_Faa_Id_Hw_Fl_Na(Rte_InitValue_Faa_Id_Hw_Fl_Na_Faa_Id_Hw_Fl_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Id_Hw_Fr_Na_Faa_Id_Hw_Fr_Na(Rte_InitValue_Faa_Id_Hw_Fr_Na_Faa_Id_Hw_Fr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Id_Hw_Rl_Na_Faa_Id_Hw_Rl_Na(Rte_InitValue_Faa_Id_Hw_Rl_Na_Faa_Id_Hw_Rl_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Id_Hw_Rr_Na_Faa_Id_Hw_Rr_Na(Rte_InitValue_Faa_Id_Hw_Rr_Na_Faa_Id_Hw_Rr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Pwr_UBus48_Fl_Est_Watt_Faa_Pwr_UBus48_Fl_Est_Watt(Rte_InitValue_Faa_Pwr_UBus48_Fl_Est_Watt_Faa_Pwr_UBus48_Fl_Est_Watt);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Pwr_UBus48_Fr_Est_Watt_Faa_Pwr_UBus48_Fr_Est_Watt(Rte_InitValue_Faa_Pwr_UBus48_Fr_Est_Watt_Faa_Pwr_UBus48_Fr_Est_Watt);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Pwr_UBus48_Rl_Est_Watt_Faa_Pwr_UBus48_Rl_Est_Watt(Rte_InitValue_Faa_Pwr_UBus48_Rl_Est_Watt_Faa_Pwr_UBus48_Rl_Est_Watt);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Pwr_UBus48_Rr_Est_Watt_Faa_Pwr_UBus48_Rr_Est_Watt(Rte_InitValue_Faa_Pwr_UBus48_Rr_Est_Watt_Faa_Pwr_UBus48_Rr_Est_Watt);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_ActunCpby_Fl_Qfr_Na_Faa_Sts_ActunCpby_Fl_Qfr_Na(Rte_InitValue_Faa_Sts_ActunCpby_Fl_Qfr_Na_Faa_Sts_ActunCpby_Fl_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_ActunCpby_Fr_Qfr_Na_Faa_Sts_ActunCpby_Fr_Qfr_Na(Rte_InitValue_Faa_Sts_ActunCpby_Fr_Qfr_Na_Faa_Sts_ActunCpby_Fr_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_ActunCpby_Rl_Qfr_Na_Faa_Sts_ActunCpby_Rl_Qfr_Na(Rte_InitValue_Faa_Sts_ActunCpby_Rl_Qfr_Na_Faa_Sts_ActunCpby_Rl_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_ActunCpby_Rr_Qfr_Na_Faa_Sts_ActunCpby_Rr_Qfr_Na(Rte_InitValue_Faa_Sts_ActunCpby_Rr_Qfr_Na_Faa_Sts_ActunCpby_Rr_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_Pwr48_Fl_Qfr_Na_Faa_Sts_Pwr48_Fl_Qfr_Na(Rte_InitValue_Faa_Sts_Pwr48_Fl_Qfr_Na_Faa_Sts_Pwr48_Fl_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_Pwr48_Fr_Qfr_Na_Faa_Sts_Pwr48_Fr_Qfr_Na(Rte_InitValue_Faa_Sts_Pwr48_Fr_Qfr_Na_Faa_Sts_Pwr48_Fr_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_Pwr48_Rl_Qfr_Na_Faa_Sts_Pwr48_Rl_Qfr_Na(Rte_InitValue_Faa_Sts_Pwr48_Rl_Qfr_Na_Faa_Sts_Pwr48_Rl_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_Pwr48_Rr_Qfr_Na_Faa_Sts_Pwr48_Rr_Qfr_Na(Rte_InitValue_Faa_Sts_Pwr48_Rr_Qfr_Na_Faa_Sts_Pwr48_Rr_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_Sst_Fl_Na_Faa_Sts_Sst_Fl_Na(Rte_InitValue_Faa_Sts_Sst_Fl_Na_Faa_Sts_Sst_Fl_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_Sst_Fr_Na_Faa_Sts_Sst_Fr_Na(Rte_InitValue_Faa_Sts_Sst_Fr_Na_Faa_Sts_Sst_Fr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_Sst_Rl_Na_Faa_Sts_Sst_Rl_Na(Rte_InitValue_Faa_Sts_Sst_Rl_Na_Faa_Sts_Sst_Rl_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_Sst_Rr_Na_Faa_Sts_Sst_Rr_Na(Rte_InitValue_Faa_Sts_Sst_Rr_Na_Faa_Sts_Sst_Rr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_Temp_Fl_Qfr_Na_Faa_Sts_Temp_Fl_Qfr_Na(Rte_InitValue_Faa_Sts_Temp_Fl_Qfr_Na_Faa_Sts_Temp_Fl_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_Temp_Fr_Qfr_Na_Faa_Sts_Temp_Fr_Qfr_Na(Rte_InitValue_Faa_Sts_Temp_Fr_Qfr_Na_Faa_Sts_Temp_Fr_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_Temp_Rl_Qfr_Na_Faa_Sts_Temp_Rl_Qfr_Na(Rte_InitValue_Faa_Sts_Temp_Rl_Qfr_Na_Faa_Sts_Temp_Rl_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Sts_Temp_Rr_Qfr_Na_Faa_Sts_Temp_Rr_Qfr_Na(Rte_InitValue_Faa_Sts_Temp_Rr_Qfr_Na_Faa_Sts_Temp_Rr_Qfr_Na);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Temp_Fl_AtCtlr_DegC_Faa_Temp_Fl_AtCtlr_DegC(Rte_InitValue_Faa_Temp_Fl_AtCtlr_DegC_Faa_Temp_Fl_AtCtlr_DegC);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Temp_Fr_AtCtlr_DegC_Faa_Temp_Fr_AtCtlr_DegC(Rte_InitValue_Faa_Temp_Fr_AtCtlr_DegC_Faa_Temp_Fr_AtCtlr_DegC);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Temp_Rl_AtCtlr_DegC_Faa_Temp_Rl_AtCtlr_DegC(Rte_InitValue_Faa_Temp_Rl_AtCtlr_DegC_Faa_Temp_Rl_AtCtlr_DegC);
  Rte_IWrite_AsccSwc_Runnable_2ms_Faa_Temp_Rr_AtCtlr_DegC_Faa_Temp_Rr_AtCtlr_DegC(Rte_InitValue_Faa_Temp_Rr_AtCtlr_DegC_Faa_Temp_Rr_AtCtlr_DegC);
#endif
/*RTE Mode Switch API used to trigger shutdown; TO be removed after Application implementation of Shutdown request by CM*/
if (Shutdown==TRUE) /*Test Code*/
{
  Rte_Switch_msBsw_Shdn_Req_Bsw_Shdn_Req_Enum(RTE_MODE_Bsw_Shdn_Req_Enum_Bsw_Shdn_Req_Enum_SHUTDOWN_REQ);
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define AsccSwc_STOP_SEC_CODE
#include "AsccSwc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: Rule2.7
     Reason:     The parameter are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

*/
