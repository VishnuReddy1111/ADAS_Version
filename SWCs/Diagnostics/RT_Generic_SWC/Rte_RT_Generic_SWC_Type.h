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
 *             File:  Rte_RT_Generic_SWC_Type.h
 *           Config:  StartApplication.dpa
 *        SW-C Type:  RT_Generic_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2300382
 *
 *      Description:  Application types header file for SW-C <RT_Generic_SWC> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_RT_GENERIC_SWC_TYPE_H
# define RTE_RT_GENERIC_SWC_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define Av_Pg_Var_AtHrm_Fl_Pa_adt_LowerLimit (0U)
#  define Av_Pg_Var_AtHrm_Fl_Pa_adt_UpperLimit (4883U)

#  define Emm_I_Bus_Fl_Ampr_adt_LowerLimit (-800)
#  define Emm_I_Bus_Fl_Ampr_adt_UpperLimit (800)

#  define Emm_Temp_Brdg_DegC_adt_LowerLimit (-400)
#  define Emm_Temp_Brdg_DegC_adt_UpperLimit (400)

#  define Emm_Tq_Est_Fl_Nm_adt_LowerLimit (-768)
#  define Emm_Tq_Est_Fl_Nm_adt_UpperLimit (768)

#  define Emm_U_Bus_Fl_Volt_adt_LowerLimit (0U)
#  define Emm_U_Bus_Fl_Volt_adt_UpperLimit (1016U)

#  define Emm_Vagr_OfRotr_Fl_Radsec_adt_LowerLimit (-500)
#  define Emm_Vagr_OfRotr_Fl_Radsec_adt_UpperLimit (500)

#  define Faa_Amnt_ActunCpby_Fl_Na_adt_LowerLimit (0U)
#  define Faa_Amnt_ActunCpby_Fl_Na_adt_UpperLimit (32U)

#  define Faa_Amnt_ActunCpby_Fr_Na_adt_LowerLimit (0U)
#  define Faa_Amnt_ActunCpby_Fr_Na_adt_UpperLimit (32U)

#  define Faa_Amnt_ActunCpby_Rl_Na_adt_LowerLimit (0U)
#  define Faa_Amnt_ActunCpby_Rl_Na_adt_UpperLimit (32U)

#  define Faa_Amnt_ActunCpby_Rr_Na_adt_LowerLimit (0U)
#  define Faa_Amnt_ActunCpby_Rr_Na_adt_UpperLimit (32U)

#  define Faa_F_Fl_AtActr_Cmd_Nwt_adt_LowerLimit (-2000)
#  define Faa_F_Fl_AtActr_Cmd_Nwt_adt_UpperLimit (2000)

#  define Faa_F_Fr_AtActr_Cmd_Nwt_adt_LowerLimit (-2000)
#  define Faa_F_Fr_AtActr_Cmd_Nwt_adt_UpperLimit (2000)

#  define Faa_F_Rl_AtActr_Cmd_Nwt_adt_LowerLimit (-2000)
#  define Faa_F_Rl_AtActr_Cmd_Nwt_adt_UpperLimit (2000)

#  define Faa_F_Rr_AtActr_Cmd_Nwt_adt_LowerLimit (-2000)
#  define Faa_F_Rr_AtActr_Cmd_Nwt_adt_UpperLimit (2000)

#  define Faa_Frq_Fn_ZlFil_Ce_Hz_adt_LowerLimit (8U)
#  define Faa_Frq_Fn_ZlFil_Ce_Hz_adt_UpperLimit (120U)

#  define Faa_Frq_Re_ZlFil_Ce_Hz_adt_LowerLimit (8U)
#  define Faa_Frq_Re_ZlFil_Ce_Hz_adt_UpperLimit (120U)

#  define Faa_Gain_Fn_ZlFil_Na_adt_LowerLimit (0U)
#  define Faa_Gain_Fn_ZlFil_Na_adt_UpperLimit (72U)

#  define Faa_Gain_Re_ZlFil_Na_adt_LowerLimit (0U)
#  define Faa_Gain_Re_ZlFil_Na_adt_UpperLimit (72U)

#  define Faa_Mofr_Fn_ZlGain_Na_adt_LowerLimit (0U)
#  define Faa_Mofr_Fn_ZlGain_Na_adt_UpperLimit (16U)

#  define Faa_Mofr_Re_ZlGain_Na_adt_LowerLimit (0U)
#  define Faa_Mofr_Re_ZlGain_Na_adt_UpperLimit (16U)

#  define Faa_Pwr_UBus48_Fl_Est_Watt_adt_LowerLimit (-375)
#  define Faa_Pwr_UBus48_Fl_Est_Watt_adt_UpperLimit (375)

#  define Faa_Pwr_UBus48_Fr_Est_Watt_adt_LowerLimit (-375)
#  define Faa_Pwr_UBus48_Fr_Est_Watt_adt_UpperLimit (375)

#  define Faa_Pwr_UBus48_Rl_Est_Watt_adt_LowerLimit (-375)
#  define Faa_Pwr_UBus48_Rl_Est_Watt_adt_UpperLimit (375)

#  define Faa_Pwr_UBus48_Rr_Est_Watt_adt_LowerLimit (-375)
#  define Faa_Pwr_UBus48_Rr_Est_Watt_adt_UpperLimit (375)

#  define Faa_Temp_Fl_AtCtlr_DegC_adt_LowerLimit (-83)
#  define Faa_Temp_Fl_AtCtlr_DegC_adt_UpperLimit (82)

#  define Faa_Temp_Fr_AtCtlr_DegC_adt_LowerLimit (-83)
#  define Faa_Temp_Fr_AtCtlr_DegC_adt_UpperLimit (82)

#  define Faa_Temp_Rl_AtCtlr_DegC_adt_LowerLimit (-83)
#  define Faa_Temp_Rl_AtCtlr_DegC_adt_UpperLimit (82)

#  define Faa_Temp_Rr_AtCtlr_DegC_adt_LowerLimit (-83)
#  define Faa_Temp_Rr_AtCtlr_DegC_adt_UpperLimit (82)

#  define Faa_Wi_Fn_ZlFil_Na_adt_LowerLimit (0U)
#  define Faa_Wi_Fn_ZlFil_Na_adt_UpperLimit (64U)

#  define Faa_Wi_Re_ZlFil_Na_adt_LowerLimit (0U)
#  define Faa_Wi_Re_ZlFil_Na_adt_UpperLimit (64U)

#  define General_adt_LowerLimit (0U)
#  define General_adt_UpperLimit (31U)

#  define Whl_A_Z_AtAct_Est_Msec2_adt_LowerLimit (-8000)
#  define Whl_A_Z_AtAct_Est_Msec2_adt_UpperLimit (8000)

#  define Whl_A_Z_Fl_AtAct_Est_Msec2_adt_LowerLimit (-8000)
#  define Whl_A_Z_Fl_AtAct_Est_Msec2_adt_UpperLimit (8000)

#  define Whl_A_Z_Fr_AtAct_Est_Msec2_adt_LowerLimit (-8000)
#  define Whl_A_Z_Fr_AtAct_Est_Msec2_adt_UpperLimit (8000)

#  define Whl_A_Z_Rl_AtAct_Est_Msec2_adt_LowerLimit (-8000)
#  define Whl_A_Z_Rl_AtAct_Est_Msec2_adt_UpperLimit (8000)

#  define Whl_A_Z_Rr_AtAct_Est_Msec2_adt_LowerLimit (-8000)
#  define Whl_A_Z_Rr_AtAct_Est_Msec2_adt_UpperLimit (8000)

#  define Emm_I_Bus_Ampr_adt_LowerLimit (-800)
#  define Emm_I_Bus_Ampr_adt_UpperLimit (800)

#  define Emm_I_Bus_Fr_Ampr_adt_LowerLimit (-800)
#  define Emm_I_Bus_Fr_Ampr_adt_UpperLimit (800)

#  define Emm_I_Bus_Rl_Ampr_adt_LowerLimit (-800)
#  define Emm_I_Bus_Rl_Ampr_adt_UpperLimit (800)

#  define Emm_I_Bus_Rr_Ampr_adt_LowerLimit (-800)
#  define Emm_I_Bus_Rr_Ampr_adt_UpperLimit (800)

#  define Emm_Tq_Dmd_Nm_adt_LowerLimit (-768)
#  define Emm_Tq_Dmd_Nm_adt_UpperLimit (768)

#  define Emm_Tq_Est_Fr_Nm_adt_LowerLimit (-768)
#  define Emm_Tq_Est_Fr_Nm_adt_UpperLimit (768)

#  define Emm_Tq_Est_Nm_adt_LowerLimit (-768)
#  define Emm_Tq_Est_Nm_adt_UpperLimit (768)

#  define Emm_Tq_Est_Rl_Nm_adt_LowerLimit (-768)
#  define Emm_Tq_Est_Rl_Nm_adt_UpperLimit (768)

#  define Emm_Tq_Est_Rr_Nm_adt_LowerLimit (-768)
#  define Emm_Tq_Est_Rr_Nm_adt_UpperLimit (768)

#  define Emm_Vagr_OfRotr_Fr_Radsec_adt_LowerLimit (-500)
#  define Emm_Vagr_OfRotr_Fr_Radsec_adt_UpperLimit (500)

#  define Emm_Vagr_OfRotr_Radsec_adt_LowerLimit (-500)
#  define Emm_Vagr_OfRotr_Radsec_adt_UpperLimit (500)

#  define Emm_Vagr_OfRotr_Rl_Radsec_adt_LowerLimit (-500)
#  define Emm_Vagr_OfRotr_Rl_Radsec_adt_UpperLimit (500)

#  define Emm_Vagr_OfRotr_Rr_Radsec_adt_LowerLimit (-500)
#  define Emm_Vagr_OfRotr_Rr_Radsec_adt_UpperLimit (500)

#  define Emm_Temp_AtCtlr_Est_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtCtlr_Est_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtCtlr_Est_Fl_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtCtlr_Est_Fl_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtCtlr_Est_Fr_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtCtlr_Est_Fr_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtCtlr_Est_Rl_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtCtlr_Est_Rl_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtCtlr_Est_Rr_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtCtlr_Est_Rr_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtHrm_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtHrm_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtHrm_Fl_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtHrm_Fl_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtHrm_Fr_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtHrm_Fr_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtHrm_Rl_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtHrm_Rl_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtHrm_Rr_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtHrm_Rr_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPcb_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPcb_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPcb_Fl_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPcb_Fl_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPcb_Fr_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPcb_Fr_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPcb_Rl_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPcb_Rl_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPcb_Rr_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPcb_Rr_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_U_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_U_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_U_Fl_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_U_Fl_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_U_Fr_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_U_Fr_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_U_Rl_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_U_Rl_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_U_Rr_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_U_Rr_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_V_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_V_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_V_Fl_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_V_Fl_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_V_Fr_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_V_Fr_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_V_Rl_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_V_Rl_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_V_Rr_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_V_Rr_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_W_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_W_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_W_Fl_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_W_Fl_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_W_Fr_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_W_Fr_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_W_Rl_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_W_Rl_DegC_adt_UpperLimit (100)

#  define Emm_Temp_AtPhase_W_Rr_DegC_adt_LowerLimit (-100)
#  define Emm_Temp_AtPhase_W_Rr_DegC_adt_UpperLimit (100)

#  define Av_Pg_Var_AtHrm_Fr_Pa_adt_LowerLimit (0U)
#  define Av_Pg_Var_AtHrm_Fr_Pa_adt_UpperLimit (5371U)

#  define Av_Pg_Var_AtHrm_Pa_adt_LowerLimit (0U)
#  define Av_Pg_Var_AtHrm_Pa_adt_UpperLimit (5371U)

#  define Av_Pg_Var_AtHrm_Rl_Pa_adt_LowerLimit (0U)
#  define Av_Pg_Var_AtHrm_Rl_Pa_adt_UpperLimit (5371U)

#  define Av_Pg_Var_AtHrm_Rr_Pa_adt_LowerLimit (0U)
#  define Av_Pg_Var_AtHrm_Rr_Pa_adt_UpperLimit (5371U)

#  define Emm_Ag_OfRotr_Fr_Rad_adt_LowerLimit (0U)
#  define Emm_Ag_OfRotr_Fr_Rad_adt_UpperLimit (503U)

#  define Emm_Ag_OfRotr_Rad_adt_LowerLimit (0U)
#  define Emm_Ag_OfRotr_Rad_adt_UpperLimit (503U)

#  define Emm_Ag_OfRotr_Rl_Rad_adt_LowerLimit (0U)
#  define Emm_Ag_OfRotr_Rl_Rad_adt_UpperLimit (503U)

#  define Emm_Ag_OfRotr_Rr_Rad_adt_LowerLimit (0U)
#  define Emm_Ag_OfRotr_Rr_Rad_adt_UpperLimit (503U)

#  define Emm_U_Bus_Fr_Volt_adt_LowerLimit (0U)
#  define Emm_U_Bus_Fr_Volt_adt_UpperLimit (1016U)

#  define Emm_U_Bus_Rl_Volt_adt_LowerLimit (0U)
#  define Emm_U_Bus_Rl_Volt_adt_UpperLimit (1016U)

#  define Emm_U_Bus_Rr_Volt_adt_LowerLimit (0U)
#  define Emm_U_Bus_Rr_Volt_adt_UpperLimit (1016U)

#  define Emm_U_Bus_Volt_adt_LowerLimit (0U)
#  define Emm_U_Bus_Volt_adt_UpperLimit (1016U)

#  define MSec_adt_LowerLimit (0U)
#  define MSec_adt_UpperLimit (1023U)

#  define Day_adt_LowerLimit (0U)
#  define Day_adt_UpperLimit (31U)

#  define Dem_Event_Id_Fl_Na_adt_LowerLimit (0U)
#  define Dem_Event_Id_Fl_Na_adt_UpperLimit (255U)

#  define Dem_Event_Id_Fr_Na_adt_LowerLimit (0U)
#  define Dem_Event_Id_Fr_Na_adt_UpperLimit (255U)

#  define Dem_Event_Id_Na_adt_LowerLimit (0U)
#  define Dem_Event_Id_Na_adt_UpperLimit (255U)

#  define Dem_Event_Id_Rl_Na_adt_LowerLimit (0U)
#  define Dem_Event_Id_Rl_Na_adt_UpperLimit (255U)

#  define Dem_Event_Id_Rr_Na_adt_LowerLimit (0U)
#  define Dem_Event_Id_Rr_Na_adt_UpperLimit (255U)

#  define Dem_Event_Status_Fl_Na_adt_LowerLimit (0U)
#  define Dem_Event_Status_Fl_Na_adt_UpperLimit (255U)

#  define Dem_Event_Status_Fr_Na_adt_LowerLimit (0U)
#  define Dem_Event_Status_Fr_Na_adt_UpperLimit (255U)

#  define Dem_Event_Status_Na_adt_LowerLimit (0U)
#  define Dem_Event_Status_Na_adt_UpperLimit (255U)

#  define Dem_Event_Status_Rl_Na_adt_LowerLimit (0U)
#  define Dem_Event_Status_Rl_Na_adt_UpperLimit (255U)

#  define Dem_Event_Status_Rr_Na_adt_LowerLimit (0U)
#  define Dem_Event_Status_Rr_Na_adt_UpperLimit (255U)

#  define Hr_adt_LowerLimit (0U)
#  define Hr_adt_UpperLimit (23U)

#  define Lic_Id_Fl_Na_adt_LowerLimit (0U)
#  define Lic_Id_Fl_Na_adt_UpperLimit (255U)

#  define Lic_Id_Fr_Na_adt_LowerLimit (0U)
#  define Lic_Id_Fr_Na_adt_UpperLimit (255U)

#  define Lic_Id_Na_adt_LowerLimit (0U)
#  define Lic_Id_Na_adt_UpperLimit (255U)

#  define Lic_Id_Rl_Na_adt_LowerLimit (0U)
#  define Lic_Id_Rl_Na_adt_UpperLimit (255U)

#  define Lic_Id_Rr_Na_adt_LowerLimit (0U)
#  define Lic_Id_Rr_Na_adt_UpperLimit (255U)

#  define Lic_Value_Fl_Na_adt_LowerLimit (0U)
#  define Lic_Value_Fl_Na_adt_UpperLimit (255U)

#  define Lic_Value_Fr_Na_adt_LowerLimit (0U)
#  define Lic_Value_Fr_Na_adt_UpperLimit (255U)

#  define Lic_Value_Na_adt_LowerLimit (0U)
#  define Lic_Value_Na_adt_UpperLimit (255U)

#  define Lic_Value_Rl_Na_adt_LowerLimit (0U)
#  define Lic_Value_Rl_Na_adt_UpperLimit (255U)

#  define Lic_Value_Rr_Na_adt_LowerLimit (0U)
#  define Lic_Value_Rr_Na_adt_UpperLimit (255U)

#  define Min_adt_LowerLimit (0U)
#  define Min_adt_UpperLimit (59U)

#  define Sec_adt_LowerLimit (0U)
#  define Sec_adt_UpperLimit (59U)

#  define Yr_adt_LowerLimit (0U)
#  define Yr_adt_UpperLimit (254U)

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

#  define Whl_Sts_AZ_Fl_Qfr_Na_adt_LowerLimit (0U)
#  define Whl_Sts_AZ_Fl_Qfr_Na_adt_UpperLimit (3U)

#  ifndef Cx0_Uninitialized
#   define Cx0_Uninitialized (0U)
#  endif

#  ifndef Cx1_Healthy
#   define Cx1_Healthy (1U)
#  endif

#  ifndef Cx2_Degraded
#   define Cx2_Degraded (2U)
#  endif

#  ifndef Cx3_Unhealthy
#   define Cx3_Unhealthy (3U)
#  endif

#  define Whl_Sts_AZ_Fr_Qfr_Na_adt_LowerLimit (0U)
#  define Whl_Sts_AZ_Fr_Qfr_Na_adt_UpperLimit (3U)

#  ifndef Cx0_Uninitialized
#   define Cx0_Uninitialized (0U)
#  endif

#  ifndef Cx1_Healthy
#   define Cx1_Healthy (1U)
#  endif

#  ifndef Cx2_Degraded
#   define Cx2_Degraded (2U)
#  endif

#  ifndef Cx3_Unhealthy
#   define Cx3_Unhealthy (3U)
#  endif

#  define Whl_Sts_AZ_Rl_Qfr_Na_adt_LowerLimit (0U)
#  define Whl_Sts_AZ_Rl_Qfr_Na_adt_UpperLimit (3U)

#  ifndef Cx0_Uninitialized
#   define Cx0_Uninitialized (0U)
#  endif

#  ifndef Cx1_Healthy
#   define Cx1_Healthy (1U)
#  endif

#  ifndef Cx2_Degraded
#   define Cx2_Degraded (2U)
#  endif

#  ifndef Cx3_Unhealthy
#   define Cx3_Unhealthy (3U)
#  endif

#  define Whl_Sts_AZ_Rr_Qfr_Na_adt_LowerLimit (0U)
#  define Whl_Sts_AZ_Rr_Qfr_Na_adt_UpperLimit (3U)

#  ifndef Cx0_Uninitialized
#   define Cx0_Uninitialized (0U)
#  endif

#  ifndef Cx1_Healthy
#   define Cx1_Healthy (1U)
#  endif

#  ifndef Cx2_Degraded
#   define Cx2_Degraded (2U)
#  endif

#  ifndef Cx3_Unhealthy
#   define Cx3_Unhealthy (3U)
#  endif

#  define Mth_adt_LowerLimit (0U)
#  define Mth_adt_UpperLimit (15U)

#  ifndef Cx0_Unknown
#   define Cx0_Unknown (0U)
#  endif

#  ifndef Cx1_January
#   define Cx1_January (1U)
#  endif

#  ifndef Cx2_February
#   define Cx2_February (2U)
#  endif

#  ifndef Cx3_March
#   define Cx3_March (3U)
#  endif

#  ifndef Cx4_April
#   define Cx4_April (4U)
#  endif

#  ifndef Cx5_May
#   define Cx5_May (5U)
#  endif

#  ifndef Cx6_June
#   define Cx6_June (6U)
#  endif

#  ifndef Cx7_July
#   define Cx7_July (7U)
#  endif

#  ifndef Cx8_August
#   define Cx8_August (8U)
#  endif

#  ifndef Cx9_September
#   define Cx9_September (9U)
#  endif

#  ifndef CxA_October
#   define CxA_October (10U)
#  endif

#  ifndef CxB_November
#   define CxB_November (11U)
#  endif

#  ifndef CxC_December
#   define CxC_December (12U)
#  endif

#  ifndef CxD_Reserved
#   define CxD_Reserved (13U)
#  endif

#  ifndef CxE_Reserved
#   define CxE_Reserved (14U)
#  endif

#  ifndef CxF_Invalid
#   define CxF_Invalid (15U)
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

# endif /* RTE_CORE */


/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
# ifndef RTE_MODETYPE_DcmEcuReset
#  define RTE_MODETYPE_DcmEcuReset
typedef uint8 Rte_ModeType_DcmEcuReset;
# endif
# ifndef RTE_MODETYPE_ECU_Reset_Indication
#  define RTE_MODETYPE_ECU_Reset_Indication
typedef uint8 Rte_ModeType_ECU_Reset_Indication;
# endif

# define RTE_MODE_RT_Generic_SWC_DcmEcuReset_NONE (0U)
# ifndef RTE_MODE_DcmEcuReset_NONE
#  define RTE_MODE_DcmEcuReset_NONE (0U)
# endif
# define RTE_MODE_RT_Generic_SWC_DcmEcuReset_HARD (1U)
# ifndef RTE_MODE_DcmEcuReset_HARD
#  define RTE_MODE_DcmEcuReset_HARD (1U)
# endif
# define RTE_MODE_RT_Generic_SWC_DcmEcuReset_KEYONOFF (2U)
# ifndef RTE_MODE_DcmEcuReset_KEYONOFF
#  define RTE_MODE_DcmEcuReset_KEYONOFF (2U)
# endif
# define RTE_MODE_RT_Generic_SWC_DcmEcuReset_SOFT (3U)
# ifndef RTE_MODE_DcmEcuReset_SOFT
#  define RTE_MODE_DcmEcuReset_SOFT (3U)
# endif
# define RTE_MODE_RT_Generic_SWC_DcmEcuReset_JUMPTOBOOTLOADER (4U)
# ifndef RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER
#  define RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER (4U)
# endif
# define RTE_MODE_RT_Generic_SWC_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER (5U)
# ifndef RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER
#  define RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER (5U)
# endif
# define RTE_MODE_RT_Generic_SWC_DcmEcuReset_EXECUTE (6U)
# ifndef RTE_MODE_DcmEcuReset_EXECUTE
#  define RTE_MODE_DcmEcuReset_EXECUTE (6U)
# endif
# define RTE_TRANSITION_RT_Generic_SWC_DcmEcuReset (7U)
# ifndef RTE_TRANSITION_DcmEcuReset
#  define RTE_TRANSITION_DcmEcuReset (7U)
# endif

# define RTE_MODE_RT_Generic_SWC_ECU_Reset_Indication_NoReset (0U)
# ifndef RTE_MODE_ECU_Reset_Indication_NoReset
#  define RTE_MODE_ECU_Reset_Indication_NoReset (0U)
# endif
# define RTE_MODE_RT_Generic_SWC_ECU_Reset_Indication_PerformReset (1U)
# ifndef RTE_MODE_ECU_Reset_Indication_PerformReset
#  define RTE_MODE_ECU_Reset_Indication_PerformReset (1U)
# endif
# define RTE_TRANSITION_RT_Generic_SWC_ECU_Reset_Indication (2U)
# ifndef RTE_TRANSITION_ECU_Reset_Indication
#  define RTE_TRANSITION_ECU_Reset_Indication (2U)
# endif

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_RT_GENERIC_SWC_TYPE_H */
