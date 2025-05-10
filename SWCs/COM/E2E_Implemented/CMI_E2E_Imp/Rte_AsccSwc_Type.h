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
 *             File:  Rte_AsccSwc_Type.h
 *           Config:  StartApplication.dpa
 *        SW-C Type:  AsccSwc
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2300382
 *
 *      Description:  Application types header file for SW-C <AsccSwc> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_ASCCSWC_TYPE_H
# define RTE_ASCCSWC_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Float_LowerLimit (-FLT_MAX)
#  define Float_UpperLimit (FLT_MAX)

#  define Float_0to11000000_LowerLimit (0.0F)
#  define Float_0to11000000_UpperLimit (11000000.0F)

#  define Float_n0p2to0p2_LowerLimit (-0.2F)
#  define Float_n0p2to0p2_UpperLimit (0.2F)

#  define Float_n200to200_LowerLimit (-200.0F)
#  define Float_n200to200_UpperLimit (200.0F)

#  define Float_n50to150_LowerLimit (-50.0F)
#  define Float_n50to150_UpperLimit (150.0F)

#  define UInt16_LowerLimit (0U)
#  define UInt16_UpperLimit (65535U)

#  define UInt32_LowerLimit (0U)
#  define UInt32_UpperLimit (4294967295U)

#  define UInt8_LowerLimit (0U)
#  define UInt8_UpperLimit (255U)

#  ifndef Afic_Mode_Enum_PASSIVE_OPERATION
#   define Afic_Mode_Enum_PASSIVE_OPERATION (0U)
#  endif

#  ifndef Afic_Mode_Enum_ECO_MAX
#   define Afic_Mode_Enum_ECO_MAX (1U)
#  endif

#  ifndef Afic_Mode_Enum_LOCAL_DAMPING
#   define Afic_Mode_Enum_LOCAL_DAMPING (2U)
#  endif

#  ifndef Afic_Mode_Enum_FORCE_CONTROL
#   define Afic_Mode_Enum_FORCE_CONTROL (3U)
#  endif

#  ifndef Ascc_Mode_Fb_Enum_UNAVAILABLE
#   define Ascc_Mode_Fb_Enum_UNAVAILABLE (0U)
#  endif

#  ifndef Ascc_Mode_Fb_Enum_ECO_MAX
#   define Ascc_Mode_Fb_Enum_ECO_MAX (1U)
#  endif

#  ifndef Ascc_Mode_Fb_Enum_LOCAL_DAMPING
#   define Ascc_Mode_Fb_Enum_LOCAL_DAMPING (2U)
#  endif

#  ifndef Ascc_Mode_Fb_Enum_FORCE_CONTROL
#   define Ascc_Mode_Fb_Enum_FORCE_CONTROL (3U)
#  endif

#  ifndef Ascc_Mode_Fb_Enum_PASSIVE_OPERATION
#   define Ascc_Mode_Fb_Enum_PASSIVE_OPERATION (4U)
#  endif

#  ifndef Ascc_Mode_Req_Enum_PASSIVE_OPERATION
#   define Ascc_Mode_Req_Enum_PASSIVE_OPERATION (0U)
#  endif

#  ifndef Ascc_Mode_Req_Enum_ECO_MAX
#   define Ascc_Mode_Req_Enum_ECO_MAX (1U)
#  endif

#  ifndef Ascc_Mode_Req_Enum_LOCAL_DAMPING
#   define Ascc_Mode_Req_Enum_LOCAL_DAMPING (2U)
#  endif

#  ifndef Ascc_Mode_Req_Enum_FORCE_CONTROL
#   define Ascc_Mode_Req_Enum_FORCE_CONTROL (3U)
#  endif

#  ifndef Ascc_St_Fb_Enum_UNINITIALIZED
#   define Ascc_St_Fb_Enum_UNINITIALIZED (0U)
#  endif

#  ifndef Ascc_St_Fb_Enum_CORNER_STANDBY
#   define Ascc_St_Fb_Enum_CORNER_STANDBY (1U)
#  endif

#  ifndef Ascc_St_Fb_Enum_CORNER_OPERATING
#   define Ascc_St_Fb_Enum_CORNER_OPERATING (2U)
#  endif

#  ifndef Ascc_St_Fb_Enum_CORNER_SHUTDOWN
#   define Ascc_St_Fb_Enum_CORNER_SHUTDOWN (3U)
#  endif

#  ifndef Ascc_St_Rq_Enum_UNINITIALIZED
#   define Ascc_St_Rq_Enum_UNINITIALIZED (0U)
#  endif

#  ifndef Ascc_St_Rq_Enum_GO_TO_OPERATING
#   define Ascc_St_Rq_Enum_GO_TO_OPERATING (1U)
#  endif

#  ifndef Ascc_St_Rq_Enum_GO_TO_CORNER_SLEEP
#   define Ascc_St_Rq_Enum_GO_TO_CORNER_SLEEP (2U)
#  endif

#  ifndef Bsw_Control_Debug_Msg_Tx_Enum_NO_DBG_MSG_TX
#   define Bsw_Control_Debug_Msg_Tx_Enum_NO_DBG_MSG_TX (0U)
#  endif

#  ifndef Bsw_Control_Debug_Msg_Tx_Enum_TX_DBG_MSG
#   define Bsw_Control_Debug_Msg_Tx_Enum_TX_DBG_MSG (1U)
#  endif

#  ifndef Charge_Pwr_Lmt_Enum_CHARGE_NO_LIMIT
#   define Charge_Pwr_Lmt_Enum_CHARGE_NO_LIMIT (0U)
#  endif

#  ifndef Charge_Pwr_Lmt_Enum_CHARGE_LIMITED
#   define Charge_Pwr_Lmt_Enum_CHARGE_LIMITED (1U)
#  endif

#  ifndef Cons_Lmt_Enum_CONS_LIMIT_NOT_APPLIED
#   define Cons_Lmt_Enum_CONS_LIMIT_NOT_APPLIED (0U)
#  endif

#  ifndef Cons_Lmt_Enum_CONS_LIMIT_APPLIED
#   define Cons_Lmt_Enum_CONS_LIMIT_APPLIED (1U)
#  endif

#  ifndef DEM_EVENT_STATUS_PASSED
#   define DEM_EVENT_STATUS_PASSED (0U)
#  endif

#  ifndef DEM_EVENT_STATUS_FAILED
#   define DEM_EVENT_STATUS_FAILED (1U)
#  endif

#  ifndef DEM_EVENT_STATUS_PREPASSED
#   define DEM_EVENT_STATUS_PREPASSED (2U)
#  endif

#  ifndef DEM_EVENT_STATUS_PREFAILED
#   define DEM_EVENT_STATUS_PREFAILED (3U)
#  endif

#  ifndef DEM_CYCLE_STATE_START
#   define DEM_CYCLE_STATE_START (0U)
#  endif

#  ifndef DEM_CYCLE_STATE_END
#   define DEM_CYCLE_STATE_END (1U)
#  endif

#  ifndef Dests_Enum_PASSED
#   define Dests_Enum_PASSED (0U)
#  endif

#  ifndef Dests_Enum_FAILED
#   define Dests_Enum_FAILED (1U)
#  endif

#  ifndef Diag_Event_Status_Enum_PASSED
#   define Diag_Event_Status_Enum_PASSED (0U)
#  endif

#  ifndef Diag_Event_Status_Enum_FAILED
#   define Diag_Event_Status_Enum_FAILED (1U)
#  endif

#  ifndef Diag_Mofr_Enum_DISABLE
#   define Diag_Mofr_Enum_DISABLE (1U)
#  endif

#  ifndef Diag_Mofr_Enum_ENABLE
#   define Diag_Mofr_Enum_ENABLE (0U)
#  endif

#  ifndef Diag_OperationCycle_Status_Enum_DIAG_OPER_CYCLE_START
#   define Diag_OperationCycle_Status_Enum_DIAG_OPER_CYCLE_START (0U)
#  endif

#  ifndef Diag_OperationCycle_Status_Enum_DIAG_OPER_CYCLE_END
#   define Diag_OperationCycle_Status_Enum_DIAG_OPER_CYCLE_END (1U)
#  endif

#  ifndef Discharge_Pwr_Lmt_Enum_DISCHARGE_NO_LIMIT
#   define Discharge_Pwr_Lmt_Enum_DISCHARGE_NO_LIMIT (0U)
#  endif

#  ifndef Discharge_Pwr_Lmt_Enum_DISCHARGE_LIMITED
#   define Discharge_Pwr_Lmt_Enum_DISCHARGE_LIMITED (1U)
#  endif

#  ifndef DrvState_Enum_DRV_ST_NONE
#   define DrvState_Enum_DRV_ST_NONE (0U)
#  endif

#  ifndef DrvState_Enum_DRV_ST_MD
#   define DrvState_Enum_DRV_ST_MD (1U)
#  endif

#  ifndef DrvState_Enum_DRV_ST_AD
#   define DrvState_Enum_DRV_ST_AD (2U)
#  endif

#  ifndef DrvState_Enum_DRV_ST_INVALID
#   define DrvState_Enum_DRV_ST_INVALID (7U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_OK
#   define E2E_Xf_Status_Enum_E_OK (0U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_VALID_REP
#   define E2E_Xf_Status_Enum_E_SAFETY_VALID_REP (1U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_VALID_SEQ
#   define E2E_Xf_Status_Enum_E_SAFETY_VALID_SEQ (2U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_VALID_ERR
#   define E2E_Xf_Status_Enum_E_SAFETY_VALID_ERR (3U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_VALID_NND
#   define E2E_Xf_Status_Enum_E_SAFETY_VALID_NND (5U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_NODATA_OK
#   define E2E_Xf_Status_Enum_E_SAFETY_NODATA_OK (32U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_NODATA_REP
#   define E2E_Xf_Status_Enum_E_SAFETY_NODATA_REP (33U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_NODATA_SEQ
#   define E2E_Xf_Status_Enum_E_SAFETY_NODATA_SEQ (34U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_NODATA_ERR
#   define E2E_Xf_Status_Enum_E_SAFETY_NODATA_ERR (35U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_NODATA_NND
#   define E2E_Xf_Status_Enum_E_SAFETY_NODATA_NND (37U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_INIT_OK
#   define E2E_Xf_Status_Enum_E_SAFETY_INIT_OK (48U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_INIT_REP
#   define E2E_Xf_Status_Enum_E_SAFETY_INIT_REP (49U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_INIT_SEQ
#   define E2E_Xf_Status_Enum_E_SAFETY_INIT_SEQ (50U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_INIT_ERR
#   define E2E_Xf_Status_Enum_E_SAFETY_INIT_ERR (51U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_INIT_NND
#   define E2E_Xf_Status_Enum_E_SAFETY_INIT_NND (53U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_INVALID_OK
#   define E2E_Xf_Status_Enum_E_SAFETY_INVALID_OK (64U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_INVALID_REP
#   define E2E_Xf_Status_Enum_E_SAFETY_INVALID_REP (65U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_INVALID_SEQ
#   define E2E_Xf_Status_Enum_E_SAFETY_INVALID_SEQ (66U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_INVALID_ERR
#   define E2E_Xf_Status_Enum_E_SAFETY_INVALID_ERR (67U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_INVALID_NND
#   define E2E_Xf_Status_Enum_E_SAFETY_INVALID_NND (69U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_SOFT_RUNTIMEERROR
#   define E2E_Xf_Status_Enum_E_SAFETY_SOFT_RUNTIMEERROR (119U)
#  endif

#  ifndef E2E_Xf_Status_Enum_E_SAFETY_HARD_RUNTIMEERROR
#   define E2E_Xf_Status_Enum_E_SAFETY_HARD_RUNTIMEERROR (255U)
#  endif

#  ifndef Emmpp_Mode_Fb_Enum_UNINITIALIZED
#   define Emmpp_Mode_Fb_Enum_UNINITIALIZED (0U)
#  endif

#  ifndef Emmpp_Mode_Fb_Enum_MOTOR_DRIVE_ON
#   define Emmpp_Mode_Fb_Enum_MOTOR_DRIVE_ON (1U)
#  endif

#  ifndef Emmpp_Mode_Fb_Enum_MOTOR_DRIVE_OFF
#   define Emmpp_Mode_Fb_Enum_MOTOR_DRIVE_OFF (2U)
#  endif

#  ifndef Emmpp_Mode_Fb_Enum_MOTOR_DRIVE_SUSPENDED_INTERNAL
#   define Emmpp_Mode_Fb_Enum_MOTOR_DRIVE_SUSPENDED_INTERNAL (3U)
#  endif

#  ifndef Emmpp_Mode_Fb_Enum_MOTOR_DRIVE_SUSPENDED_EXTERNAL
#   define Emmpp_Mode_Fb_Enum_MOTOR_DRIVE_SUSPENDED_EXTERNAL (4U)
#  endif

#  ifndef Emmpp_Mode_Req_Enum_MOTOR_DRIVE_SUSPENDED
#   define Emmpp_Mode_Req_Enum_MOTOR_DRIVE_SUSPENDED (0U)
#  endif

#  ifndef Emmpp_Mode_Req_Enum_MOTOR_DRIVE_ON
#   define Emmpp_Mode_Req_Enum_MOTOR_DRIVE_ON (1U)
#  endif

#  ifndef Emmpp_Mode_Req_Enum_MOTOR_DRIVE_OFF
#   define Emmpp_Mode_Req_Enum_MOTOR_DRIVE_OFF (2U)
#  endif

#  ifndef Emmpp_St_Fb_Enum_OPERATING
#   define Emmpp_St_Fb_Enum_OPERATING (0U)
#  endif

#  ifndef Emmpp_St_Fb_Enum_SHUTDOWN_IN_PROGRESS
#   define Emmpp_St_Fb_Enum_SHUTDOWN_IN_PROGRESS (1U)
#  endif

#  ifndef Emmpp_St_Fb_Enum_READY_TO_SHUTDOWN
#   define Emmpp_St_Fb_Enum_READY_TO_SHUTDOWN (2U)
#  endif

#  ifndef Emmpp_St_Req_Enum_OPERATING
#   define Emmpp_St_Req_Enum_OPERATING (0U)
#  endif

#  ifndef Emmpp_St_Req_Enum_SHUTDOWN
#   define Emmpp_St_Req_Enum_SHUTDOWN (1U)
#  endif

#  ifndef EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_SUSPENDED
#   define EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_SUSPENDED (0U)
#  endif

#  ifndef EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_ON
#   define EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_ON (1U)
#  endif

#  ifndef EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_OFF
#   define EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_OFF (2U)
#  endif

#  ifndef EmoCtl_Sts_Enum_UNINITIALIZED
#   define EmoCtl_Sts_Enum_UNINITIALIZED (0U)
#  endif

#  ifndef EmoCtl_Sts_Enum_MOTOR_DRIVE_ON
#   define EmoCtl_Sts_Enum_MOTOR_DRIVE_ON (1U)
#  endif

#  ifndef EmoCtl_Sts_Enum_MOTOR_DRIVE_OFF
#   define EmoCtl_Sts_Enum_MOTOR_DRIVE_OFF (2U)
#  endif

#  ifndef EmoCtl_Sts_Enum_MOTOR_DRIVE_SUSPENDED_INTERNAL
#   define EmoCtl_Sts_Enum_MOTOR_DRIVE_SUSPENDED_INTERNAL (3U)
#  endif

#  ifndef EmoCtl_Sts_Enum_MOTOR_DRIVE_SUSPENDED_EXTERNAL
#   define EmoCtl_Sts_Enum_MOTOR_DRIVE_SUSPENDED_EXTERNAL (4U)
#  endif

#  ifndef Essm_System_State_Enum_UNINITIALIZED
#   define Essm_System_State_Enum_UNINITIALIZED (0U)
#  endif

#  ifndef Essm_System_State_Enum_CORNER_STANDBY
#   define Essm_System_State_Enum_CORNER_STANDBY (1U)
#  endif

#  ifndef Essm_System_State_Enum_ACTIVE_CAPABLE_PASSIVE_EXTERNAL_CORNER
#   define Essm_System_State_Enum_ACTIVE_CAPABLE_PASSIVE_EXTERNAL_CORNER (2U)
#  endif

#  ifndef Essm_System_State_Enum_ACTIVE_CAPABLE_REDUCED_FUNCTION_EXTERNAL
#   define Essm_System_State_Enum_ACTIVE_CAPABLE_REDUCED_FUNCTION_EXTERNAL (3U)
#  endif

#  ifndef Essm_System_State_Enum_ACTIVE_CAPABLE_ECO_MAX_CORNER
#   define Essm_System_State_Enum_ACTIVE_CAPABLE_ECO_MAX_CORNER (4U)
#  endif

#  ifndef Essm_System_State_Enum_ACTIVE_CAPABLE_FORCE_CONTROL_CORNER
#   define Essm_System_State_Enum_ACTIVE_CAPABLE_FORCE_CONTROL_CORNER (5U)
#  endif

#  ifndef Essm_System_State_Enum_ACTIVE_NOT_CAPABLE_PASSIVE_LATCHING_CORNER
#   define Essm_System_State_Enum_ACTIVE_NOT_CAPABLE_PASSIVE_LATCHING_CORNER (6U)
#  endif

#  ifndef Essm_System_State_Enum_ACTIVE_NOT_CAPABLE_PASSIVE_RECOVERABLE_CORNER
#   define Essm_System_State_Enum_ACTIVE_NOT_CAPABLE_PASSIVE_RECOVERABLE_CORNER (7U)
#  endif

#  ifndef Essm_System_State_Enum_CORNER_SHUTDOWN
#   define Essm_System_State_Enum_CORNER_SHUTDOWN (8U)
#  endif

#  ifndef Faa_Sts_Sst_Enum_UNINITIALIZED
#   define Faa_Sts_Sst_Enum_UNINITIALIZED (0U)
#  endif

#  ifndef Faa_Sts_Sst_Enum_HEALTHY_ACTIVE_NOT_CAPABLE
#   define Faa_Sts_Sst_Enum_HEALTHY_ACTIVE_NOT_CAPABLE (1U)
#  endif

#  ifndef Faa_Sts_Sst_Enum_HEALTHY_ACTIVE_CAPABLE
#   define Faa_Sts_Sst_Enum_HEALTHY_ACTIVE_CAPABLE (2U)
#  endif

#  ifndef Faa_Sts_Sst_Enum_PASSIVE_RECOVERABLE
#   define Faa_Sts_Sst_Enum_PASSIVE_RECOVERABLE (3U)
#  endif

#  ifndef Faa_Sts_Sst_Enum_PASSIVE_LATCHING
#   define Faa_Sts_Sst_Enum_PASSIVE_LATCHING (4U)
#  endif

#  ifndef Fdg_Diag_Reaction_Enum_DISABLE
#   define Fdg_Diag_Reaction_Enum_DISABLE (0U)
#  endif

#  ifndef Fdg_Diag_Reaction_Enum_ENABLE
#   define Fdg_Diag_Reaction_Enum_ENABLE (1U)
#  endif

#  ifndef Force_Priority_Enum_NORMAL
#   define Force_Priority_Enum_NORMAL (0U)
#  endif

#  ifndef Force_Priority_Enum_HIGH
#   define Force_Priority_Enum_HIGH (1U)
#  endif

#  ifndef Impedance_Settings_Enum_Soft_Front_Soft_Rear
#   define Impedance_Settings_Enum_Soft_Front_Soft_Rear (0U)
#  endif

#  ifndef Impedance_Settings_Enum_Firm_Front_Soft_Rear
#   define Impedance_Settings_Enum_Firm_Front_Soft_Rear (1U)
#  endif

#  ifndef Impedance_Settings_Enum_Soft_Front_Firm_Rear
#   define Impedance_Settings_Enum_Soft_Front_Firm_Rear (2U)
#  endif

#  ifndef Impedance_Settings_Enum_Firm_Front_Firm_Rear
#   define Impedance_Settings_Enum_Firm_Front_Firm_Rear (3U)
#  endif

#  ifndef Impedance_Settings_Enum_OpenLoop_Front_OpenLoop_Rear
#   define Impedance_Settings_Enum_OpenLoop_Front_OpenLoop_Rear (4U)
#  endif

#  ifndef Impedance_Settings_Enum_RESERVE_1
#   define Impedance_Settings_Enum_RESERVE_1 (5U)
#  endif

#  ifndef Impedance_Settings_Enum_RESERVE_2
#   define Impedance_Settings_Enum_RESERVE_2 (6U)
#  endif

#  ifndef Impedance_Settings_Enum_RESERVE_3
#   define Impedance_Settings_Enum_RESERVE_3 (7U)
#  endif

#  ifndef Nm_Network_Release_Enum_OPERATING
#   define Nm_Network_Release_Enum_OPERATING (0U)
#  endif

#  ifndef Nm_Network_Release_Enum_READY_TO_SLEEP
#   define Nm_Network_Release_Enum_READY_TO_SLEEP (1U)
#  endif

#  ifndef OperatorState_Enum_OPERATOR_ST_NONE
#   define OperatorState_Enum_OPERATOR_ST_NONE (0U)
#  endif

#  ifndef OperatorState_Enum_OPERATOR_ST_OUTSIDE
#   define OperatorState_Enum_OPERATOR_ST_OUTSIDE (1U)
#  endif

#  ifndef OperatorState_Enum_OPERATOR_ST_AVAILABLE
#   define OperatorState_Enum_OPERATOR_ST_AVAILABLE (2U)
#  endif

#  ifndef OperatorState_Enum_OPERATOR_ST_INSIDE
#   define OperatorState_Enum_OPERATOR_ST_INSIDE (3U)
#  endif

#  ifndef OperatorState_Enum_OPERATOR_ST_INVALID
#   define OperatorState_Enum_OPERATOR_ST_INVALID (7U)
#  endif

#  ifndef Pg_Validity_Enum_INVALID
#   define Pg_Validity_Enum_INVALID (0U)
#  endif

#  ifndef Pg_Validity_Enum_VALID
#   define Pg_Validity_Enum_VALID (1U)
#  endif

#  ifndef Qfr_Enum_UNINITIALIZED
#   define Qfr_Enum_UNINITIALIZED (0U)
#  endif

#  ifndef Qfr_Enum_HEALTHY
#   define Qfr_Enum_HEALTHY (1U)
#  endif

#  ifndef Qfr_Enum_DEGRADED
#   define Qfr_Enum_DEGRADED (2U)
#  endif

#  ifndef Qfr_Enum_UNHEALTHY
#   define Qfr_Enum_UNHEALTHY (3U)
#  endif

#  ifndef Regen_Lmt_Enum_REGEN_LIMIT_NOT_APPLIED
#   define Regen_Lmt_Enum_REGEN_LIMIT_NOT_APPLIED (0U)
#  endif

#  ifndef Regen_Lmt_Enum_REGEN_LIMIT_APPLIED
#   define Regen_Lmt_Enum_REGEN_LIMIT_APPLIED (1U)
#  endif

#  ifndef Shdn_Fb_Enum_NOT_REQUESTED
#   define Shdn_Fb_Enum_NOT_REQUESTED (0U)
#  endif

#  ifndef Shdn_Fb_Enum_SHUTDOWN_READINESS_IN_PROGRESS
#   define Shdn_Fb_Enum_SHUTDOWN_READINESS_IN_PROGRESS (1U)
#  endif

#  ifndef Shdn_Fb_Enum_READY_TO_SHUTDOWN
#   define Shdn_Fb_Enum_READY_TO_SHUTDOWN (2U)
#  endif

#  ifndef Shdn_Req_Enum_NO_SHUTDOWN_REQ
#   define Shdn_Req_Enum_NO_SHUTDOWN_REQ (0U)
#  endif

#  ifndef Shdn_Req_Enum_PREPARE_FOR_SHUTDOWN
#   define Shdn_Req_Enum_PREPARE_FOR_SHUTDOWN (1U)
#  endif

#  ifndef TCU_01_Mth_Enum_UNKNOWN
#   define TCU_01_Mth_Enum_UNKNOWN (0)
#  endif

#  ifndef TCU_01_Mth_Enum_JANUARY
#   define TCU_01_Mth_Enum_JANUARY (1)
#  endif

#  ifndef TCU_01_Mth_Enum_FEBRUARY
#   define TCU_01_Mth_Enum_FEBRUARY (2)
#  endif

#  ifndef TCU_01_Mth_Enum_MARCH
#   define TCU_01_Mth_Enum_MARCH (3)
#  endif

#  ifndef TCU_01_Mth_Enum_APRIL
#   define TCU_01_Mth_Enum_APRIL (4)
#  endif

#  ifndef TCU_01_Mth_Enum_MAY
#   define TCU_01_Mth_Enum_MAY (5)
#  endif

#  ifndef TCU_01_Mth_Enum_JUNE
#   define TCU_01_Mth_Enum_JUNE (6)
#  endif

#  ifndef TCU_01_Mth_Enum_JULY
#   define TCU_01_Mth_Enum_JULY (7)
#  endif

#  ifndef TCU_01_Mth_Enum_SEPTEMBER
#   define TCU_01_Mth_Enum_SEPTEMBER (8)
#  endif

#  ifndef TCU_01_Mth_Enum_OCTOBER
#   define TCU_01_Mth_Enum_OCTOBER (9)
#  endif

#  ifndef TCU_01_Mth_Enum_NOVEMBER
#   define TCU_01_Mth_Enum_NOVEMBER (10)
#  endif

#  ifndef TCU_01_Mth_Enum_DECEMBER
#   define TCU_01_Mth_Enum_DECEMBER (11)
#  endif

#  ifndef TCU_01_Mth_Enum_RESERVED_1
#   define TCU_01_Mth_Enum_RESERVED_1 (12)
#  endif

#  ifndef TCU_01_Mth_Enum_RESERVED_2
#   define TCU_01_Mth_Enum_RESERVED_2 (13)
#  endif

#  ifndef TCU_01_Mth_Enum_INVALID
#   define TCU_01_Mth_Enum_INVALID (14)
#  endif

#  ifndef Validity_Enum_INVALID
#   define Validity_Enum_INVALID (0U)
#  endif

#  ifndef Validity_Enum_VALID
#   define Validity_Enum_VALID (1U)
#  endif

#  ifndef VehSpdLo_Enum_UNKNOWN
#   define VehSpdLo_Enum_UNKNOWN (0U)
#  endif

#  ifndef VehSpdLo_Enum_LOW_SPEED
#   define VehSpdLo_Enum_LOW_SPEED (1U)
#  endif

#  ifndef VehSpdLo_Enum_MEDIUM_TO_HIGH_SPEED
#   define VehSpdLo_Enum_MEDIUM_TO_HIGH_SPEED (2U)
#  endif

#  ifndef VehStateDetailed_Enum_VEH_ST_PARKED
#   define VehStateDetailed_Enum_VEH_ST_PARKED (0U)
#  endif

#  ifndef VehStateDetailed_Enum_VEH_ST_DRVRDY
#   define VehStateDetailed_Enum_VEH_ST_DRVRDY (1U)
#  endif

#  ifndef VehStateDetailed_Enum_VEH_ST_DRIVING
#   define VehStateDetailed_Enum_VEH_ST_DRIVING (2U)
#  endif

#  ifndef VehStateDetailed_Enum_VEH_ST_SWUPDATED
#   define VehStateDetailed_Enum_VEH_ST_SWUPDATED (3U)
#  endif

#  ifndef VehStateDetailed_Enum_VEH_ST_CHARGING
#   define VehStateDetailed_Enum_VEH_ST_CHARGING (4U)
#  endif

#  ifndef VehStateDetailed_Enum_VEH_ST_PWRSWAP
#   define VehStateDetailed_Enum_VEH_ST_PWRSWAP (5U)
#  endif

#  ifndef VehStateDetailed_Enum_VEH_ST_INVALID
#   define VehStateDetailed_Enum_VEH_ST_INVALID (15U)
#  endif

#  ifndef VehStaty_Enum_UNKNOWN
#   define VehStaty_Enum_UNKNOWN (0U)
#  endif

#  ifndef VehStaty_Enum_NON_STATIONARY
#   define VehStaty_Enum_NON_STATIONARY (1U)
#  endif

#  ifndef VehStaty_Enum_STATIONARY
#   define VehStaty_Enum_STATIONARY (2U)
#  endif

# endif /* RTE_CORE */


/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
# ifndef RTE_MODETYPE_Bsw_Control_Debug_Msg_Tx_Enum
#  define RTE_MODETYPE_Bsw_Control_Debug_Msg_Tx_Enum
typedef uint8 Rte_ModeType_Bsw_Control_Debug_Msg_Tx_Enum;
# endif
# ifndef RTE_MODETYPE_Nm_Network_Release_Enum
#  define RTE_MODETYPE_Nm_Network_Release_Enum
typedef uint8 Rte_ModeType_Nm_Network_Release_Enum;
# endif

# define RTE_MODE_AsccSwc_Bsw_Control_Debug_Msg_Tx_Enum_Bsw_Control_Debug_Msg_Tx_Enum_NO_DBG_MSG_TX (0U)
# ifndef RTE_MODE_Bsw_Control_Debug_Msg_Tx_Enum_Bsw_Control_Debug_Msg_Tx_Enum_NO_DBG_MSG_TX
#  define RTE_MODE_Bsw_Control_Debug_Msg_Tx_Enum_Bsw_Control_Debug_Msg_Tx_Enum_NO_DBG_MSG_TX (0U)
# endif
# define RTE_MODE_AsccSwc_Bsw_Control_Debug_Msg_Tx_Enum_Bsw_Control_Debug_Msg_Tx_Enum_TX_DBG_MSG (1U)
# ifndef RTE_MODE_Bsw_Control_Debug_Msg_Tx_Enum_Bsw_Control_Debug_Msg_Tx_Enum_TX_DBG_MSG
#  define RTE_MODE_Bsw_Control_Debug_Msg_Tx_Enum_Bsw_Control_Debug_Msg_Tx_Enum_TX_DBG_MSG (1U)
# endif
# define RTE_TRANSITION_AsccSwc_Bsw_Control_Debug_Msg_Tx_Enum (2U)
# ifndef RTE_TRANSITION_Bsw_Control_Debug_Msg_Tx_Enum
#  define RTE_TRANSITION_Bsw_Control_Debug_Msg_Tx_Enum (2U)
# endif

# define RTE_MODE_AsccSwc_Nm_Network_Release_Enum_Nm_Network_Release_Enum_OPERATING (0U)
# ifndef RTE_MODE_Nm_Network_Release_Enum_Nm_Network_Release_Enum_OPERATING
#  define RTE_MODE_Nm_Network_Release_Enum_Nm_Network_Release_Enum_OPERATING (0U)
# endif
# define RTE_MODE_AsccSwc_Nm_Network_Release_Enum_Nm_Network_Release_Enum_READY_TO_SLEEP (1U)
# ifndef RTE_MODE_Nm_Network_Release_Enum_Nm_Network_Release_Enum_READY_TO_SLEEP
#  define RTE_MODE_Nm_Network_Release_Enum_Nm_Network_Release_Enum_READY_TO_SLEEP (1U)
# endif
# define RTE_TRANSITION_AsccSwc_Nm_Network_Release_Enum (2U)
# ifndef RTE_TRANSITION_Nm_Network_Release_Enum
#  define RTE_TRANSITION_Nm_Network_Release_Enum (2U)
# endif

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_ASCCSWC_TYPE_H */
