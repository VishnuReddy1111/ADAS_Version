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
 *             File:  Rte_Type.h
 *           Config:  StartApplication.dpa
 *        SW-C Type:  RT_Diag_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2300382
 *
 *      Description:  Header file containing user defined AUTOSAR types and RTE structures (Contract Phase)
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/* double include prevention */
#ifndef RTE_TYPE_H
# define RTE_TYPE_H

# include "Rte.h"

/* PRQA S 1039 EOF */ /* MD_Rte_1039 */

/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

# define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

# define Rte_TypeDef_DataArrayType_uint8_3
typedef uint8 DataArrayType_uint8_3[3];

# define Rte_TypeDef_DataArrayType_uint8_32
typedef uint8 DataArrayType_uint8_32[32];

# define Rte_TypeDef_Dcm_Data11ByteType
typedef uint8 Dcm_Data11ByteType[11];

# define Rte_TypeDef_Dcm_Data12ByteType
typedef uint8 Dcm_Data12ByteType[12];

# define Rte_TypeDef_Dcm_Data1ByteType
typedef uint8 Dcm_Data1ByteType[1];

# define Rte_TypeDef_Dcm_Data2ByteType
typedef uint8 Dcm_Data2ByteType[2];

# define Rte_TypeDef_Dcm_Data32ByteType
typedef uint8 Dcm_Data32ByteType[32];

# define Rte_TypeDef_Dcm_Data36ByteType
typedef uint8 Dcm_Data36ByteType[36];

# define Rte_TypeDef_Dcm_Data3ByteType
typedef uint8 Dcm_Data3ByteType[3];

# define Rte_TypeDef_Dcm_Data4ByteType
typedef uint8 Dcm_Data4ByteType[4];

# define Rte_TypeDef_Dcm_Data8ByteType
typedef uint8 Dcm_Data8ByteType[8];

# define Rte_TypeDef_Rte_DT_meta_fingerprint_0
typedef uint8 Rte_DT_meta_fingerprint_0[12];

# define Rte_TypeDef_Rte_DT_meta_fingerprint_1
typedef uint8 Rte_DT_meta_fingerprint_1[2];

# define Rte_TypeDef_Rte_DT_meta_fingerprint_2
typedef uint8 Rte_DT_meta_fingerprint_2[2];

# define Rte_TypeDef_rt_Array_uint8_11
typedef uint8 rt_Array_uint8_11[11];

# define Rte_TypeDef_rt_Array_uint8_2
typedef uint8 rt_Array_uint8_2[2];

# define Rte_TypeDef_rt_Array_uint8_3
typedef uint8 rt_Array_uint8_3[3];

# define Rte_TypeDef_rt_Array_uint8_32
typedef uint8 rt_Array_uint8_32[32];

# define Rte_TypeDef_AsccCdd_SystemTimer_Struct
typedef struct
{
  uint32 AsccCdd_SystemTimer;
} AsccCdd_SystemTimer_Struct;

# define Rte_TypeDef_Esdd_Emm_Temp_Struct
typedef struct
{
  float32 Esdd_Emm_Temp_Emms_DegC;
  float32 Esdd_Emm_Temp_Pcba_DegC;
  float32 Esdd_Emm_Temp_AtPhase_U_Deg;
  float32 Esdd_Emm_Temp_AtPhase_V_Deg;
  float32 Esdd_Emm_Temp_AtPhase_W_Deg;
} Esdd_Emm_Temp_Struct;

# define Rte_TypeDef_Esdd_Sply_Data_Struct
typedef struct
{
  float32 Esdd_SplyU_Volt;
  float32 Esdd_SplyI_Amp;
  float32 Esdd_Bus_Pwr_Est_Watt;
} Esdd_Sply_Data_Struct;

# define Rte_TypeDef_Essm_Ign_Cycle_Cntr_Struct
typedef struct
{
  uint32 Essm_Ign_Cycl_Cntr;
} Essm_Ign_Cycle_Cntr_Struct;

# define Rte_TypeDef_Fcc_F_AtActr_Limit_Lpf_Struct
typedef struct
{
  float32 Fcc_F_AtActr_Limit_Cmd_Lpf;
} Fcc_F_AtActr_Limit_Lpf_Struct;

# define Rte_TypeDef_SG_ZONE_3A9_Group_Struct
typedef struct
{
  uint32 VehOdometer;
} SG_ZONE_3A9_Group_Struct;

# define Rte_TypeDef_SG_ZONE_3B2_Group_Struct
typedef struct
{
  uint8 Day;
  uint8 Hr;
  uint8 Min;
  uint16 MSec;
  uint8 Mth;
  uint8 Sec;
  uint8 Yr;
} SG_ZONE_3B2_Group_Struct;

# define Rte_TypeDef_Uab_Total_Oper_Cycl_Cntr_Struct
typedef struct
{
  uint32 UAB_Total_Operation_Cycle_Cntr;
} Uab_Total_Oper_Cycl_Cntr_Struct;

# define Rte_TypeDef_DataPrimitiveType_uint16
typedef uint16 DataPrimitiveType_uint16;

# define Rte_TypeDef_DataPrimitiveType_uint32
typedef uint32 DataPrimitiveType_uint32;

# define Rte_TypeDef_DataPrimitiveType_uint8
typedef uint8 DataPrimitiveType_uint8;

# define Rte_TypeDef_Dcm_StartDataOut_CheckProgrammingPreCondition_Out_No_of_PreconditionsPrimitiveType
typedef uint8 Dcm_StartDataOut_CheckProgrammingPreCondition_Out_No_of_PreconditionsPrimitiveType;

# define Rte_TypeDef_Dcm_StartDataOut_CheckProgrammingPreCondition_Out_No_of_PreconditionsType
typedef Dcm_StartDataOut_CheckProgrammingPreCondition_Out_No_of_PreconditionsPrimitiveType Dcm_StartDataOut_CheckProgrammingPreCondition_Out_No_of_PreconditionsType;

# define Rte_TypeDef_Dem_EventIdType
typedef uint16 Dem_EventIdType;

# define Rte_TypeDef_Dcm_NegativeResponseCodeType
typedef uint8 Dcm_NegativeResponseCodeType;

# define Rte_TypeDef_Dcm_OpStatusType
typedef uint8 Dcm_OpStatusType;

# define Rte_TypeDef_Dcm_SecLevelType
typedef uint8 Dcm_SecLevelType;

# define Rte_TypeDef_Dcm_SesCtrlType
typedef uint8 Dcm_SesCtrlType;

# define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

# define Rte_TypeDef_Nvm_CustomerHwNumbers_Struct
typedef struct
{
  rt_Array_uint8_11 F110_FAA_Customer_HW_Part_Number;
  rt_Array_uint8_2 F111_FAA_Customer_HW_Baseline;
  rt_Array_uint8_3 F18B_FAA_Manufacturing_Date;
} Nvm_CustomerHwNumbers_Struct;

# define Rte_TypeDef_Nvm_HardwareNumbers_Struct
typedef struct
{
  rt_Array_uint8_32 EMM_Part_Number;
  rt_Array_uint8_32 EMM_Serial_Number;
  rt_Array_uint8_32 AV_Part_Number;
  rt_Array_uint8_32 AV_Serial_Number;
  rt_Array_uint8_32 ACB_Part_Number;
  rt_Array_uint8_32 ACB_Serial_Number;
  rt_Array_uint8_32 FAA_Part_Number;
  rt_Array_uint8_32 FAA_Serial_Number;
} Nvm_HardwareNumbers_Struct;

# define Rte_TypeDef_meta_fingerprint
typedef struct
{
  Rte_DT_meta_fingerprint_0 Fingerprint;
  Rte_DT_meta_fingerprint_1 progattemp;
  Rte_DT_meta_fingerprint_2 progcounter;
} meta_fingerprint;


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_AficMode_Enum
typedef uint8 AficMode_Enum;

#  define Rte_TypeDef_Asmc_HlthTest_Req_Enum
typedef uint8 Asmc_HlthTest_Req_Enum;

#  define Rte_TypeDef_Boolean
typedef boolean Boolean;

#  define Rte_TypeDef_Bsw_Shdn_Req_Enum
typedef uint8 Bsw_Shdn_Req_Enum;

#  define Rte_TypeDef_CcSstSts_Enum
typedef uint8 CcSstSts_Enum;

#  define Rte_TypeDef_CcStFb_Enum
typedef uint8 CcStFb_Enum;

#  define Rte_TypeDef_Dem_DTCFormatType
typedef uint8 Dem_DTCFormatType;

#  define Rte_TypeDef_Dem_DTRControlType
typedef uint8 Dem_DTRControlType;

#  define Rte_TypeDef_Dem_EventStatusExtendedType
typedef uint8 Dem_EventStatusExtendedType;

#  define Rte_TypeDef_Dem_IndicatorStatusType
typedef uint8 Dem_IndicatorStatusType;

#  define Rte_TypeDef_Dem_IumprDenomCondStatusType
typedef uint8 Dem_IumprDenomCondStatusType;

#  define Rte_TypeDef_Disable_Fdg_Enum
typedef uint8 Disable_Fdg_Enum;

#  define Rte_TypeDef_Float
typedef float32 Float;

#  define Rte_TypeDef_NvM_DstPtrType
typedef void * NvM_DstPtrType;

#  define Rte_TypeDef_Afic_Mode_Enum
typedef uint8 Afic_Mode_Enum;

#  define Rte_TypeDef_Ascc_Mode_Fb_Enum
typedef uint8 Ascc_Mode_Fb_Enum;

#  define Rte_TypeDef_Ascc_Mode_Req_Enum
typedef uint8 Ascc_Mode_Req_Enum;

#  define Rte_TypeDef_Ascc_St_Fb_Enum
typedef uint8 Ascc_St_Fb_Enum;

#  define Rte_TypeDef_Ascc_St_Rq_Enum
typedef uint8 Ascc_St_Rq_Enum;

#  define Rte_TypeDef_Bsw_Control_Debug_Msg_Tx_Enum
typedef uint8 Bsw_Control_Debug_Msg_Tx_Enum;

#  define Rte_TypeDef_Charge_Pwr_Lmt_Enum
typedef uint8 Charge_Pwr_Lmt_Enum;

#  define Rte_TypeDef_Cons_Lmt_Enum
typedef uint8 Cons_Lmt_Enum;

#  define Rte_TypeDef_Csp_Ctrl_Temp_DataIp_Enum
typedef uint8 Csp_Ctrl_Temp_DataIp_Enum;

#  define Rte_TypeDef_Dem_EventStatusType
typedef uint8 Dem_EventStatusType;

#  define Rte_TypeDef_Dem_OperationCycleStateType
typedef uint8 Dem_OperationCycleStateType;

#  define Rte_TypeDef_Dests_Enum
typedef uint8 Dests_Enum;

#  define Rte_TypeDef_Diag_Event_Status_Enum
typedef uint8 Diag_Event_Status_Enum;

#  define Rte_TypeDef_Diag_Mofr_Enum
typedef uint8 Diag_Mofr_Enum;

#  define Rte_TypeDef_Diag_OperationCycle_Status_Enum
typedef uint8 Diag_OperationCycle_Status_Enum;

#  define Rte_TypeDef_Discharge_Pwr_Lmt_Enum
typedef uint8 Discharge_Pwr_Lmt_Enum;

#  define Rte_TypeDef_DrvState_Enum
typedef uint8 DrvState_Enum;

#  define Rte_TypeDef_E2E_Xf_Status_Enum
typedef uint8 E2E_Xf_Status_Enum;

#  define Rte_TypeDef_EcuReset_Req_Enum
typedef uint8 EcuReset_Req_Enum;

#  define Rte_TypeDef_Emmpp_Mode_Fb_Enum
typedef uint8 Emmpp_Mode_Fb_Enum;

#  define Rte_TypeDef_Emmpp_Mode_Req_Enum
typedef uint8 Emmpp_Mode_Req_Enum;

#  define Rte_TypeDef_Emmpp_St_Fb_Enum
typedef uint8 Emmpp_St_Fb_Enum;

#  define Rte_TypeDef_Emmpp_St_Req_Enum
typedef uint8 Emmpp_St_Req_Enum;

#  define Rte_TypeDef_EmoCtl_Req_Enum
typedef uint8 EmoCtl_Req_Enum;

#  define Rte_TypeDef_EmoCtl_Sts_Enum
typedef uint8 EmoCtl_Sts_Enum;

#  define Rte_TypeDef_Essm_System_State_Enum
typedef uint8 Essm_System_State_Enum;

#  define Rte_TypeDef_Faa_Sts_Sst_Enum
typedef uint8 Faa_Sts_Sst_Enum;

#  define Rte_TypeDef_Fdg_Diag_Reaction_Enum
typedef uint8 Fdg_Diag_Reaction_Enum;

#  define Rte_TypeDef_Force_Priority_Enum
typedef uint8 Force_Priority_Enum;

#  define Rte_TypeDef_Impedance_Settings_Enum
typedef uint8 Impedance_Settings_Enum;

#  define Rte_TypeDef_Nm_Network_Release_Enum
typedef uint8 Nm_Network_Release_Enum;

#  define Rte_TypeDef_OperatorState_Enum
typedef uint8 OperatorState_Enum;

#  define Rte_TypeDef_Pg_Validity_Enum
typedef uint8 Pg_Validity_Enum;

#  define Rte_TypeDef_Qfr_Enum
typedef uint8 Qfr_Enum;

#  define Rte_TypeDef_Regen_Lmt_Enum
typedef uint8 Regen_Lmt_Enum;

#  define Rte_TypeDef_Shdn_Fb_Enum
typedef uint8 Shdn_Fb_Enum;

#  define Rte_TypeDef_Shdn_Req_Enum
typedef uint8 Shdn_Req_Enum;

#  define Rte_TypeDef_TCU_01_Mth_Enum
typedef sint32 TCU_01_Mth_Enum;

#  define Rte_TypeDef_Validity_Enum
typedef uint8 Validity_Enum;

#  define Rte_TypeDef_VehSpdLo_Enum
typedef uint8 VehSpdLo_Enum;

#  define Rte_TypeDef_VehStateDetailed_Enum
typedef uint8 VehStateDetailed_Enum;

#  define Rte_TypeDef_VehStaty_Enum
typedef uint8 VehStaty_Enum;

#  define Rte_TypeDef_DataArrayType_uint8_2
typedef uint8 DataArrayType_uint8_2[2];

#  define Rte_TypeDef_DataArray_Type_2
typedef uint8 DataArray_Type_2[2];

#  define Rte_TypeDef_Dem_MaxDataValueType
typedef uint8 Dem_MaxDataValueType[51];

#  define Rte_TypeDef_Rte_DT_rt_ary_dummy_sanpshot_0
typedef uint8 Rte_DT_rt_ary_dummy_sanpshot_0[2000];

#  define Rte_TypeDef_rt_Array_float32_10
typedef float32 rt_Array_float32_10[10];

#  define Rte_TypeDef_rt_Array_float32_11
typedef float32 rt_Array_float32_11[11];

#  define Rte_TypeDef_rt_Array_float32_12
typedef float32 rt_Array_float32_12[12];

#  define Rte_TypeDef_rt_Array_float32_6
typedef float32 rt_Array_float32_6[6];

#  define Rte_TypeDef_rt_Array_float32_9
typedef float32 rt_Array_float32_9[9];

#  define Rte_TypeDef_Acab_Ascc_Events_Struct
typedef struct
{
  Diag_Event_Status_Enum ACAB_ZONE_R_FAS_01_LOSTCOMM_EVENT;
  Diag_Event_Status_Enum ACAB_ZONE_R_FAS_01_E2E_AC_ERROR_EVENT;
  Diag_Event_Status_Enum ACAB_ZONE_R_FAS_01_E2E_CRC_ERROR_EVENT;
  Diag_Event_Status_Enum ACAB_ZONE_R_FAS_02_LOSTCOMM_EVENT;
  Diag_Event_Status_Enum ACAB_ZONE_R_FAS_02_E2E_AC_ERROR_EVENT;
  Diag_Event_Status_Enum ACAB_ZONE_R_FAS_02_E2E_CRC_ERROR_EVENT;
} Acab_Ascc_Events_Struct;

#  define Rte_TypeDef_Acab_Ascc_Mode_Req_Struct
typedef struct
{
  Ascc_Mode_Req_Enum Acab_Ascc_Mode_Req;
  Qfr_Enum Acab_Ascc_Mode_Req_Qfr;
} Acab_Ascc_Mode_Req_Struct;

#  define Rte_TypeDef_Acab_Ascc_St_Req_Struct
typedef struct
{
  Ascc_St_Rq_Enum Acab_Ascc_St_Req;
} Acab_Ascc_St_Req_Struct;

#  define Rte_TypeDef_Acab_AsmcCom_Qfr_Struct
typedef struct
{
  Qfr_Enum Acab_AsmcCom_Qfr;
} Acab_AsmcCom_Qfr_Struct;

#  define Rte_TypeDef_Acab_FAA_100HZ_FLT_PWR_XX_Struct
typedef struct
{
  sint16 Faa_Pwr_UBus48_xx_Est_Watt;
  Qfr_Enum Faa_Sts_Pwr48_xx_Qfr_Na;
  CcSstSts_Enum Faa_Sts_Sst_xx_Na;
} Acab_FAA_100HZ_FLT_PWR_XX_Struct;

#  define Rte_TypeDef_Acab_FAA_10HZ_CPBY_TEMP_XX_Struct
typedef struct
{
  uint8 Faa_Amnt_ActunCpby_xx_Na;
  Qfr_Enum Faa_Sts_ActunCpby_xx_Qfr_Na;
  sint8 Faa_Temp_xx_AtCtlr_DegC;
  Qfr_Enum Faa_Sts_Temp_xx_Qfr_Na;
} Acab_FAA_10HZ_CPBY_TEMP_XX_Struct;

#  define Rte_TypeDef_Acab_FAA_25HZ_ID_ST_FB_XX_Struct
typedef struct
{
  uint32 Ascc_Id_Sw_xx_Na;
  uint32 Faa_Id_Hw_xx_Na;
  CcStFb_Enum Ascc_St_Fb_xx_Na;
} Acab_FAA_25HZ_ID_ST_FB_XX_Struct;

#  define Rte_TypeDef_Acab_FAA_500HZ_A_WHL_XX_Struct
typedef struct
{
  sint16 Whl_A_Z_xx_AtAct_Est_Msec2;
  Qfr_Enum Whl_Sts_AZ_xx_Qfr_Na;
} Acab_FAA_500HZ_A_WHL_XX_Struct;

#  define Rte_TypeDef_Acab_FAA_DBG_1000Hz_MSG1_Struct
typedef struct
{
  sint16 Emm_I_Bus_Ampr;
  uint16 Emm_U_Bus_Volt;
  sint16 Whl_A_Z_AtAct_Est_Msec2;
  uint16 Av_Pg_Var_AtHrm_Pa;
  uint16 Emm_Ag_OfRotr_Rad;
  sint16 Emm_Vagr_OfRotr_Radsec;
  sint16 Emm_Tq_Dmd_Nm;
  sint16 Emm_Tq_Est_Nm;
} Acab_FAA_DBG_1000Hz_MSG1_Struct;

#  define Rte_TypeDef_Acab_FAA_DBG_10Hz_MSGXX_Struct
typedef struct
{
  sint16 Emm_Temp_AtPcb_DegC;
  sint16 Emm_Temp_AtHrm_DegC;
  sint16 Emm_Temp_AtCtlr_Est_DegC;
} Acab_FAA_DBG_10Hz_MSGXX_Struct;

#  define Rte_TypeDef_Acab_FAA_DBG_500Hz_MSG_XX_Struct
typedef struct
{
  sint16 Emm_I_Bus_xx_Ampr;
  uint16 Emm_U_Bus_xx_Volt;
  uint16 Av_Pg_Var_AtHrm_xx_Pa;
  sint16 Emm_Vagr_OfRotr_xx_Radsec;
  uint16 Emm_Ag_OfRotr_xx_Rad;
  sint16 Emm_Tq_Est_xx_Nm;
} Acab_FAA_DBG_500Hz_MSG_XX_Struct;

#  define Rte_TypeDef_Acab_FAS_Xx_01_Raw_Struct
typedef struct
{
  uint32 Acab_Ascc_Id_Sw_Xx_Na;
  Ascc_Mode_Fb_Enum Acab_Ascc_Mode_Fb_Xx_Na;
  Ascc_St_Fb_Enum Acab_Ascc_St_Fb_Xx_Na;
  uint8 Acab_Faa_Amnt_ActunCpby_Xx_Na;
  uint32 Acab_Faa_Id_Hw_Xx_Na;
  uint16 Acab_Faa_Pwr_UBus48_Xx_Watt;
  Qfr_Enum Acab_Faa_Sts_Pwr48_Xx_Qfr_Na;
  Faa_Sts_Sst_Enum Acab_Faa_Sts_Sst_Xx_Na;
  uint32 Acab_Fas_Id_Sys_Xx_Na;
  uint8 Acab_Amnt_CpbyMrgn_Xx_Na;
} Acab_FAS_Xx_01_Raw_Struct;

#  define Rte_TypeDef_Acab_FAS_Xx_02_Raw_Struct
typedef struct
{
  sint16 Acab_Whl_A_Z_Xx_AtAct_Est_Msec2;
  Qfr_Enum Acab_Whl_Sts_AZ_Xx_Qfr_Na;
} Acab_FAS_Xx_02_Raw_Struct;

#  define Rte_TypeDef_Acab_F_AtActr_Hlth_Struct
typedef struct
{
  Qfr_Enum Acab_Sts_F_Qfr_Na;
  Qfr_Enum Acab_F_AtActr_Com_Qfr_Na;
} Acab_F_AtActr_Hlth_Struct;

#  define Rte_TypeDef_Acab_F_AtActr_Struct
typedef struct
{
  float32 Acab_F_AtActr_Cmd;
  Qfr_Enum Acab_F_AtActr_Cmd_Qfr;
} Acab_F_AtActr_Struct;

#  define Rte_TypeDef_Acab_St_Req_Struct
typedef struct
{
  Ascc_St_Rq_Enum Acab_St_Req_Na;
} Acab_St_Req_Struct;

#  define Rte_TypeDef_Acab_Sts_VehState_Struct
typedef struct
{
  VehStaty_Enum Acab_Sts_VehStaty;
  VehSpdLo_Enum Acab_Sts_VehSpdLo;
} Acab_Sts_VehState_Struct;

#  define Rte_TypeDef_Acab_Veh_Psn_Sus_AtAct_Struct
typedef struct
{
  float32 Acab_Veh_Psn_Sus_AtAct;
  Qfr_Enum Acab_Veh_Sts_Psn_Sus_Qfr_Na;
} Acab_Veh_Psn_Sus_AtAct_Struct;

#  define Rte_TypeDef_Acab_Veh_Psn_Sus_AtWhl_Struct
typedef struct
{
  float32 Acab_Veh_Psn_Sus_AtWhl;
  Qfr_Enum Acab_Veh_Sts_Psn_Sus_Qfr_Na;
} Acab_Veh_Psn_Sus_AtWhl_Struct;

#  define Rte_TypeDef_Acab_Zl_Setg_Req_Struct
typedef struct
{
  Impedance_Settings_Enum Acab_Zl_Setg_Req;
} Acab_Zl_Setg_Req_Struct;

#  define Rte_TypeDef_Ascc_Bsw_Shdn_Req_Struct
typedef struct
{
  Bsw_Shdn_Req_Enum Ascc_Bsw_Shdn_Req_Na;
} Ascc_Bsw_Shdn_Req_Struct;

#  define Rte_TypeDef_Ascc_EcuReset_Req_Struct
typedef struct
{
  EcuReset_Req_Enum Ascc_EcuReset_Req_Na;
} Ascc_EcuReset_Req_Struct;

#  define Rte_TypeDef_Ascc_Emm_Sts_Veh_Struct
typedef struct
{
  VehStaty_Enum Ascc_Emm_Sts_VehStaty_Na;
  VehSpdLo_Enum Ascc_Emm_Sts_VehSpdLo_Na;
} Ascc_Emm_Sts_Veh_Struct;

#  define Rte_TypeDef_Ascc_Esdd_St_Req_Struct
typedef struct
{
  EmoCtl_Req_Enum Ascc_EmoCtl_Req_Na;
  Shdn_Req_Enum Ascc_Shdn_Req_Na;
} Ascc_Esdd_St_Req_Struct;

#  define Rte_TypeDef_Ascc_Sts_VehStaty_Struct
typedef struct
{
  VehStaty_Enum Ascc_Sts_VehStaty_Na;
} Ascc_Sts_VehStaty_Struct;

#  define Rte_TypeDef_Bsw_ASMC_1000HZ_F_CMD_FAA_Struct
typedef struct
{
  boolean ASMC_1000HZ_F_CMD_FAA_Is_Updated;
  Qfr_Enum Fas_Sts_F_Qfr_Na;
} Bsw_ASMC_1000HZ_F_CMD_FAA_Struct;

#  define Rte_TypeDef_Bsw_ASMC_100HZ_STATY_ST_REQ_FAA_Struct
typedef struct
{
  boolean ASMC_100HZ_STATY_ST_REQ_FAA_Is_Updated;
  VehStaty_Enum Fas_Sts_VehStaty_Na;
  Qfr_Enum Fas_Sts_VehStsStaty_Qfr_Na;
  VehSpdLo_Enum Fas_Sts_VehSpdLo_Na;
  Qfr_Enum Fas_Sts_VehStsSpdLo_Qfr_Na;
} Bsw_ASMC_100HZ_STATY_ST_REQ_FAA_Struct;

#  define Rte_TypeDef_Bsw_ASMC_100HZ_ZL_MOFR_FAA_Struct
typedef struct
{
  boolean ASMC_100HZ_ZL_MOFR_FAA_Is_Updated;
} Bsw_ASMC_100HZ_ZL_MOFR_FAA_Struct;

#  define Rte_TypeDef_Bsw_ASMC_25HZ_ST_REQ_FAA_Struct
typedef struct
{
  boolean ASMC_25HZ_ST_REQ_FAA_Is_Updated;
  Ascc_St_Rq_Enum Ascc_St_Req_Na;
  Asmc_HlthTest_Req_Enum Asmc_Req_DaHlthTest_Na;
} Bsw_ASMC_25HZ_ST_REQ_FAA_Struct;

#  define Rte_TypeDef_Bsw_ProgrammingReq_Struct
typedef struct
{
  boolean Bsw_ProgrammingReq;
} Bsw_ProgrammingReq_Struct;

#  define Rte_TypeDef_Bsw_ZONE_13C_Raw_Struct
typedef struct
{
  DrvState_Enum Bsw_DrvState;
  Validity_Enum Bsw_DrvState_SrvSts;
  OperatorState_Enum Bsw_OperatorState;
  Validity_Enum Bsw_OperatorState_SrvSts;
  VehStateDetailed_Enum Bsw_VehStateDetailed;
  Validity_Enum Bsw_VehStateDetailed_SrvSts;
} Bsw_ZONE_13C_Raw_Struct;

#  define Rte_TypeDef_Bsw_ZONE_3A9_Raw_Struct
typedef struct
{
  uint32 Bsw_VehOdometer;
} Bsw_ZONE_3A9_Raw_Struct;

#  define Rte_TypeDef_Bsw_ZONE_3B2_Raw_Struct
typedef struct
{
  uint8 Bsw_Day;
  uint8 Bsw_Hr;
  uint8 Bsw_Min;
  uint16 Bsw_MSec;
  uint8 Bsw_Mth;
  uint8 Bsw_Sec;
  uint8 Bsw_Yr;
} Bsw_ZONE_3B2_Raw_Struct;

#  define Rte_TypeDef_Bsw_Zone_R_Fas_01_Raw_Struct
typedef struct
{
  E2E_Xf_Status_Enum Bsw_Zone_R_FAS_01_E2eXfSts;
  boolean Bsw_Zone_R_FAS_01_IsUpdated;
  Ascc_St_Rq_Enum Bsw_Ascc_St_Req_Na;
  uint16 Bsw_Faa_Cons_Pwr_Limit_Watt;
  Discharge_Pwr_Lmt_Enum Bsw_Faa_Pwr48_ConsLmt_Actv_Na;
  Charge_Pwr_Lmt_Enum Bsw_Faa_Pwr48_RegenLmt_Actv_Na;
  uint16 Bsw_Faa_Regen_Pwr_Limit_Watt;
  Diag_Mofr_Enum Bsw_Faa_Sf_Diag_Mofr_Na;
  Validity_Enum Bsw_Faa_Sts_Cons_Pwr_Limit_Qfr_Na;
  Validity_Enum Bsw_Faa_Sts_Regen_Pwr_Limit_Qfr_Na;
  Impedance_Settings_Enum Bsw_Faa_Zl_Setg_Req_Na;
  uint32 Bsw_Fas_Oper_Mins;
  VehSpdLo_Enum Bsw_Fas_Sts_VehSpdLo_Na;
  VehStaty_Enum Bsw_Fas_Sts_VehStaty_Na;
  uint16 Bsw_Veh_Psn_Sus_AtAct_Fl_Mm;
  uint16 Bsw_Veh_Psn_Sus_AtAct_Fr_Mm;
  uint16 Bsw_Veh_Psn_Sus_AtAct_Rl_Mm;
  uint16 Bsw_Veh_Psn_Sus_AtAct_Rr_Mm;
  Validity_Enum Bsw_Veh_Sts_Psn_Sus_Fl_Qfr_Na;
  Validity_Enum Bsw_Veh_Sts_Psn_Sus_Fr_Qfr_Na;
  Validity_Enum Bsw_Veh_Sts_Psn_Sus_Rl_Qfr_Na;
  Validity_Enum Bsw_Veh_Sts_Psn_Sus_Rr_Qfr_Na;
} Bsw_Zone_R_Fas_01_Raw_Struct;

#  define Rte_TypeDef_Bsw_Zone_R_Fas_02_Raw_Struct
typedef struct
{
  E2E_Xf_Status_Enum Bsw_Zone_R_Fas_02_E2eXfSts;
  boolean Bsw_Zone_R_FAS_02_IsUpdated;
  Force_Priority_Enum Bsw_Ascc_F_Prio_Na;
  Ascc_Mode_Req_Enum Bsw_Ascc_Mode_Req_Na;
  uint16 Bsw_Faa_F_Fl_AtActr_Cmd_Nwt;
  uint16 Bsw_Faa_F_Fr_AtActr_Cmd_Nwt;
  uint16 Bsw_Faa_F_Rl_AtActr_Cmd_Nwt;
  uint16 Bsw_Faa_F_Rr_AtActr_Cmd_Nwt;
} Bsw_Zone_R_Fas_02_Raw_Struct;

#  define Rte_TypeDef_Bsw_Zone_TCU_01_Raw_Struct
typedef struct
{
  boolean Bsw_TCU_01_Is_Updated;
  uint8 Bsw_Day;
  uint8 Bsw_Hr;
  uint8 Bsw_Min;
  uint16 Bsw_MSec;
  TCU_01_Mth_Enum Bsw_Mth;
  uint8 Bsw_Sec;
  uint8 Bsw_Yr;
} Bsw_Zone_TCU_01_Raw_Struct;

#  define Rte_TypeDef_Cse_F_Estn_Lpf_Data_Struct
typedef struct
{
  float32 Cse_F_Estn_Lpf;
} Cse_F_Estn_Lpf_Data_Struct;

#  define Rte_TypeDef_Cse_Pg_Sys_Estn_Vldy_Struct
typedef struct
{
  Validity_Enum Cse_Pg_Sys_Estn_Vldy_Na;
} Cse_Pg_Sys_Estn_Vldy_Struct;

#  define Rte_TypeDef_Cse_Sts_F_Estn_Struct
typedef struct
{
  Validity_Enum Cse_Sts_F_Est_Na;
} Cse_Sts_F_Estn_Struct;

#  define Rte_TypeDef_Cse_Sys_Pg_Est_Data_Struct
typedef struct
{
  float32 Cse_Sys_Pg_Est_Pa;
} Cse_Sys_Pg_Est_Data_Struct;

#  define Rte_TypeDef_Csp_Lpf_Data_Struct
typedef struct
{
  float32 Csp_F_AtActr_Cmd_Lpf;
  float32 Csp_Pg_Var_AtHrm_Lpf;
  float32 Csp_Oil_Temp_Lpf;
  float32 Csp_Vagr_OfRotr_Radsec_Lpf;
  float32 Csp_Veh_Psn_Sus_AtAct_m_Lpf;
  float32 Csp_Tq_Dlvrd_Nm_Lpf;
} Csp_Lpf_Data_Struct;

#  define Rte_TypeDef_Csp_Pg_Var_AtHrm_Vldy_Struct
typedef struct
{
  Validity_Enum Csp_Pg_Var_AtHrm_Vldy_Na;
} Csp_Pg_Var_AtHrm_Vldy_Struct;

#  define Rte_TypeDef_Csp_Procsd_Data_Struct
typedef struct
{
  float32 Csp_F_AtActr_Cmd_Nwt;
  float32 Csp_Pg_Var_AtHrm_Pa;
  float32 Csp_Vagr_OfRotr_Radsec;
  float32 Csp_Ag_Emot_Rad;
  float32 Csp_Oil_Temp_C;
} Csp_Procsd_Data_Struct;

#  define Rte_TypeDef_Csp_Procsd_Veh_Psn_Sus_AtAct_Struct
typedef struct
{
  float32 Csp_Veh_Psn_Sus_AtAct_m;
  Validity_Enum Csp_Veh_Psn_Sus_AtAct_Vldy_Na;
} Csp_Procsd_Veh_Psn_Sus_AtAct_Struct;

#  define Rte_TypeDef_DCD_ACAB_1msComRx_Struct
typedef struct
{
  boolean DCD_DISABLE_E2E_CRC_MC_DIAG;
  uint16 DCD_ZONE_R_FAS_01_E2E_DEBOUNCE_TIME;
  uint16 DCD_ZONE_R_FAS_01_E2E_RECOVERY_TIME;
  uint16 DCD_ZONE_R_FAS_02_E2E_DEBOUNCE_TIME;
  uint16 DCD_ZONE_R_FAS_02_E2E_RECOVERY_TIME;
  uint16 DCD_VEH_SUS_POS_TIMEOUT;
} DCD_ACAB_1msComRx_Struct;

#  define Rte_TypeDef_DCD_CSP_Temp_Input_Struct
typedef struct
{
  Csp_Ctrl_Temp_DataIp_Enum DCD_CSP_TEMP_INPUT;
} DCD_CSP_Temp_Input_Struct;

#  define Rte_TypeDef_DCD_ESSM_SafeStateOperation_Struct
typedef struct
{
  float32 DCD_FORCE_CONTROL_F_THRESHOLD;
  uint16 DCD_PRC_RECOVERY_THRESHOLD_TIME;
} DCD_ESSM_SafeStateOperation_Struct;

#  define Rte_TypeDef_DCD_ESSM_Ssto_Struct
typedef struct
{
  float32 DCD_ESSM_F_THRESHOLD;
} DCD_ESSM_Ssto_Struct;

#  define Rte_TypeDef_DCD_FDG_Force_Deviation_Struct
typedef struct
{
  Fdg_Diag_Reaction_Enum DCD_DISABLE_FORCE_DEVIATION_REACTION;
  float32 DCD_FDD_ERR_LPF;
  float32 DCD_FDD_FRONT_DZN_UP;
  float32 DCD_FDD_FRONT_DZN_LO;
  float32 DCD_FDD_FRONT_ERR_SAT_UP;
  float32 DCD_FDD_ERR_GAIN;
  float32 DCD_FDD_REAR_DZN_UP;
  float32 DCD_FDD_REAR_DZN_LO;
  float32 DCD_FDD_REAR_ERR_SAT_UP;
  float32 DCD_FDD_INT_LKG;
  float32 DCD_FDD_TEMP_THD_UP;
  float32 DCD_FDD_TEMP_THD_LO;
  float32 DCD_FDD_ACTUNCPBY_THD;
  float32 DCD_FDD_ERR_HPF;
  uint16 DCD_FDD_INITN_TI_THD;
} DCD_FDG_Force_Deviation_Struct;

#  define Rte_TypeDef_DCD_FDG_Oil_Leakage_Struct
typedef struct
{
  Fdg_Diag_Reaction_Enum DCD_DISABLE_OIL_LEAKAGE_REACTION;
  uint16 DCD_OLD_EVENT_DEBOUNCE_TIMEOUT;
  float32 DCD_OLD_F_THD_UPPR;
  float32 DCD_OLD_F_THD_LOWR;
  float32 DCD_OLD_PG_VAR_FLT_THD;
  float32 DCD_OLD_VARIABLE_PRESSURE_LPF_FREQ;
  float32 DCD_OLD_FORCE_COMMAND_LPF_FREQ;
  uint16 DCD_OLD_INITN_TI_THD;
} DCD_FDG_Oil_Leakage_Struct;

#  define Rte_TypeDef_DCD_FDG_Psm_Struct
typedef struct
{
  float32 DCD_PSM_ROT_INERTIA;
  float32 DCD_PSM_DRG_LINEAR;
  float32 DCD_PSM_DRG_NONLINEAR;
  float32 DCD_PSM_BP_FREQ;
  float32 DCD_PSM_BP_WIDTH;
  float32 DCD_PSM_LPF_FREQ;
  uint16 DCD_PSM_INIT_TIME;
  float32 DCD_PSM_ERR_SAT_UP;
  float32 DCD_PSM_ERR_SAT_LO;
} DCD_FDG_Psm_Struct;

#  define Rte_TypeDef_DCD_PAB_PgSnsrSerialDataHandler_Struct
typedef struct
{
  uint16 DCD_PRESSURE_DIAGNOSTIC_INTERNAL_TIMEOUT;
  uint16 DCD_PRESSURE_DIAGNOSTIC_EVENT_DEBOUNCE_TIMEOUT;
  uint16 DCD_PRESSURE_DIAGNOSTIC_EVENT_RECOVERY_TIMEOUT;
  uint16 DCD_OIL_TEMPERATURE_INTERNAL_TIMEOUT;
  uint16 DCD_OIL_TEMPERATURE_EVENT_DEBOUNCE_TIMEOUT;
  uint16 DCD_OIL_TEMPERATURE_EVENT_RECOVERY_TIMEOUT;
} DCD_PAB_PgSnsrSerialDataHandler_Struct;

#  define Rte_TypeDef_Esdd_Accel_AtAvPcb_Struct
typedef struct
{
  float32 Esdd_A_X_AtAvPcb_Msec2;
  Qfr_Enum Esdd_A_X_AtAvPcb_Qfr_Na;
  float32 Esdd_A_Y_AtAvPcb_Msec2;
  Qfr_Enum Esdd_A_Y_AtAvPcb_Qfr_Na;
  float32 Esdd_A_Z_AtAvPcb_Msec2;
  Qfr_Enum Esdd_A_Z_AtAvPcb_Qfr_Na;
} Esdd_Accel_AtAvPcb_Struct;

#  define Rte_TypeDef_Esdd_Ascc_St_Fb_Struct
typedef struct
{
  EmoCtl_Sts_Enum Esdd_EmoCtl_Sts_Na;
  Shdn_Fb_Enum Esdd_Shdn_Fb_Na;
} Esdd_Ascc_St_Fb_Struct;

#  define Rte_TypeDef_Esdd_Av_Pg_Var_Struct
typedef struct
{
  float32 Esdd_Av_Pg_Var_Pa;
  Pg_Validity_Enum Esdd_Av_Pg_Var_Vldy;
} Esdd_Av_Pg_Var_Struct;

#  define Rte_TypeDef_Esdd_Emm_Amnt_ActunCpby_Struct
typedef struct
{
  float32 Essd_Emm_Amnt_ActunCpby_Na;
} Esdd_Emm_Amnt_ActunCpby_Struct;

#  define Rte_TypeDef_Esdd_Emm_Bus_Struct
typedef struct
{
  float32 Esdd_Emm_U_Bus_Volt;
  float32 Esdd_Emm_I_Bus_Ampr;
  float32 Esdd_Emm_Pwr_48PwrCns_Watt;
} Esdd_Emm_Bus_Struct;

#  define Rte_TypeDef_Esdd_Emm_PosAgr_Struct
typedef struct
{
  float32 Esdd_Emm_PosAgr_Emmr_Rad;
} Esdd_Emm_PosAgr_Struct;

#  define Rte_TypeDef_Esdd_Emm_Pwr_Lim_Tq_Dmd_Struct
typedef struct
{
  float32 Esdd_Emm_Pwr_Lim_Tq_Dmd_Nwtm;
} Esdd_Emm_Pwr_Lim_Tq_Dmd_Struct;

#  define Rte_TypeDef_Esdd_Emm_Tq_Dlvd_Struct
typedef struct
{
  float32 Esdd_Emm_Tq_Dlvd_Nwtm;
} Esdd_Emm_Tq_Dlvd_Struct;

#  define Rte_TypeDef_Esdd_Emm_Vagr_Struct
typedef struct
{
  float32 Esdd_Emm_Vagr_Rads;
} Esdd_Emm_Vagr_Struct;

#  define Rte_TypeDef_Esdd_Emmpp_St_Fb_Struct
typedef struct
{
  Emmpp_Mode_Fb_Enum Esdd_Emmpp_Mode_Fb_Na;
  Emmpp_St_Fb_Enum Esdd_Emmpp_St_Fb_Na;
} Esdd_Emmpp_St_Fb_Struct;

#  define Rte_TypeDef_Esdd_Emot_Tq_Dlvrd_Struct
typedef struct
{
  float32 Esdd_Emot_Tq_Dlvrd_Nwtm;
} Esdd_Emot_Tq_Dlvrd_Struct;

#  define Rte_TypeDef_Esdd_Peak_Tq_Struct
typedef struct
{
  float32 Esdd_Peak_Tq_Pcnt;
} Esdd_Peak_Tq_Struct;

#  define Rte_TypeDef_Esdd_PgSnsr_Serial_Data_Struct
typedef struct
{
  Dests_Enum Esdd_PgSnsr_DiagSt_Na;
  boolean Esdd_PgSnsr_DiagSt_IsValidandFresh_Na;
  float32 Esdd_Oil_Temp_C;
  boolean Esdd_Oil_Temp_IsValidandFresh_Na;
} Esdd_PgSnsr_Serial_Data_Struct;

#  define Rte_TypeDef_Esdd_RotorSnsr_Data_Struct
typedef struct
{
  float32 Esdd_RotorSnsr_Ag_Rad;
  float32 Esdd_RotorSnsr_Vagr_Radsec;
} Esdd_RotorSnsr_Data_Struct;

#  define Rte_TypeDef_Esdd_Temp_Data_Struct
typedef struct
{
  float32 Esdd_Emot_Temp_C;
  float32 Esdd_Ecu_Temp_C;
} Esdd_Temp_Data_Struct;

#  define Rte_TypeDef_Essm_Afic_Mode_Struct
typedef struct
{
  Afic_Mode_Enum Essm_Afic_Mode;
} Essm_Afic_Mode_Struct;

#  define Rte_TypeDef_Essm_Cap_Mrgn_Diagnostics_Event_Struct
typedef struct
{
  Diag_Event_Status_Enum PHASE_TEMP_LOW_CAPABILITY_MARGIN_EVENT;
} Essm_Cap_Mrgn_Diagnostics_Event_Struct;

#  define Rte_TypeDef_Essm_Cap_Plausibility_Diag_Status_Struct
typedef struct
{
  Dests_Enum Essm_Cap_Plausibility_Diag_Status;
} Essm_Cap_Plausibility_Diag_Status_Struct;

#  define Rte_TypeDef_Essm_Cap_Plausibility_Diagnostics_Event_Struct
typedef struct
{
  Diag_Event_Status_Enum REDUCED_FAA_CAPABILITY_PLAUSIBILITY_FAIL_EVENT;
  Diag_Event_Status_Enum FAA_CAPABILITY_PLAUSIBILITY_FAIL_EVENT;
} Essm_Cap_Plausibility_Diagnostics_Event_Struct;

#  define Rte_TypeDef_Essm_Emmpp_St_Req_Struct
typedef struct
{
  Emmpp_Mode_Req_Enum Essm_Emmpp_Mode_Req_Na;
  Emmpp_St_Req_Enum Essm_Emmpp_St_Req_Na;
} Essm_Emmpp_St_Req_Struct;

#  define Rte_TypeDef_Essm_Faa_Amnt_ActunCpbyMrgn_Struct
typedef struct
{
  float32 Essm_Faa_Amnt_ActunCpbyMrgn;
} Essm_Faa_Amnt_ActunCpbyMrgn_Struct;

#  define Rte_TypeDef_Essm_Faa_Amnt_ActunCpby_Struct
typedef struct
{
  float32 Essm_Faa_Amnt_ActunCpby;
} Essm_Faa_Amnt_ActunCpby_Struct;

#  define Rte_TypeDef_Essm_Fdg_Data_Struct
typedef struct
{
  Disable_Fdg_Enum Essm_Disable_Fdg;
} Essm_Fdg_Data_Struct;

#  define Rte_TypeDef_Essm_Ign_Cycle_Cntr_Reset_Req_Struct
typedef struct
{
  boolean Essm_Ign_Cycle_Cntr_Reset_Req;
} Essm_Ign_Cycle_Cntr_Reset_Req_Struct;

#  define Rte_TypeDef_Essm_Ign_Cycle_Cntr_Write_Trigger_Struct
typedef struct
{
  boolean Essm_Ign_Cycle_Cntr_Write_Trigger;
} Essm_Ign_Cycle_Cntr_Write_Trigger_Struct;

#  define Rte_TypeDef_Essm_Nm_Network_Release_Struct
typedef struct
{
  Nm_Network_Release_Enum Essm_Nm_Network_Release;
} Essm_Nm_Network_Release_Struct;

#  define Rte_TypeDef_Essm_St_Fb_Struct
typedef struct
{
  Ascc_Mode_Fb_Enum Essm_Mode_Fb;
  Faa_Sts_Sst_Enum Essm_Sts_Sst;
  Ascc_St_Fb_Enum Essm_St_Fb;
} Essm_St_Fb_Struct;

#  define Rte_TypeDef_Essm_Sts_Sst_Struct
typedef struct
{
  CcSstSts_Enum Essm_Sts_Sst_Na;
} Essm_Sts_Sst_Struct;

#  define Rte_TypeDef_Essm_Sys_State_Internal_Struct
typedef struct
{
  Essm_System_State_Enum Essm_System_State_Internal;
} Essm_Sys_State_Internal_Struct;

#  define Rte_TypeDef_Fcc_Cap_Events_Struct
typedef struct
{
  Diag_Event_Status_Enum FAA_OIL_TEMP_CPBY_PLAUSIBILITY_FAIL_EVENT;
  Diag_Event_Status_Enum FAA_SYS_PG_CPBY_PLAUSIBILITY_FAIL_EVENT;
  Diag_Event_Status_Enum FAA_OIL_TEMP_DERATE_EVENT;
  Diag_Event_Status_Enum FAA_SYS_PG_DERATE_EVENT;
} Fcc_Cap_Events_Struct;

#  define Rte_TypeDef_Fcc_Cap_Plausibility_Diag_Status_Struct
typedef struct
{
  Dests_Enum Fcc_Cpby_Plausibility_Diag_Status;
} Fcc_Cap_Plausibility_Diag_Status_Struct;

#  define Rte_TypeDef_Fcc_F_Cpby_Struct
typedef struct
{
  float32 Fcc_F_PositiveCpby_Pct;
  float32 Fcc_F_NegativeCpby_Pct;
} Fcc_F_Cpby_Struct;

#  define Rte_TypeDef_Fdg_Force_Deviation_Cumulative_Err_Struct
typedef struct
{
  float32 Fdg_Force_Deviation_Cumulative_Error;
} Fdg_Force_Deviation_Cumulative_Err_Struct;

#  define Rte_TypeDef_Fdg_Force_Deviation_Diag_Status_Struct
typedef struct
{
  Dests_Enum Fdg_Force_Deviation_Diag_Status;
} Fdg_Force_Deviation_Diag_Status_Struct;

#  define Rte_TypeDef_Fdg_Force_Deviation_Diagnostics_Event_Struct
typedef struct
{
  Diag_Event_Status_Enum FDG_FORCE_DEVIATION_DETECTED_EVENT;
} Fdg_Force_Deviation_Diagnostics_Event_Struct;

#  define Rte_TypeDef_Fdg_Gas_Leakage_Diag_Status_Struct
typedef struct
{
  Dests_Enum Fdg_Gas_Leakage_Diag_Status;
} Fdg_Gas_Leakage_Diag_Status_Struct;

#  define Rte_TypeDef_Fdg_Gas_Leakage_Diagnostics_Event_Struct
typedef struct
{
  Diag_Event_Status_Enum FDG_GAS_LEAKAGE_DETECTED_EVENT;
} Fdg_Gas_Leakage_Diagnostics_Event_Struct;

#  define Rte_TypeDef_Fdg_Oil_Leakage_Diag_Status_Struct
typedef struct
{
  Dests_Enum Fdg_Oil_Leakage_Diag_Status;
} Fdg_Oil_Leakage_Diag_Status_Struct;

#  define Rte_TypeDef_Fdg_Oil_Leakage_Diagnostics_Event_Struct
typedef struct
{
  Diag_Event_Status_Enum FDG_OIL_LEAKAGE_DETECTED_EVENT;
} Fdg_Oil_Leakage_Diagnostics_Event_Struct;

#  define Rte_TypeDef_Fdg_Psm_Err_Struct
typedef struct
{
  float32 Psm_Rms_Error_Pa;
} Fdg_Psm_Err_Struct;

#  define Rte_TypeDef_Fdg_Psm_Max_Err_Struct
typedef struct
{
  float32 Psm_Err_CurrMax_Pa;
} Fdg_Psm_Max_Err_Struct;

#  define Rte_TypeDef_Pab_Oil_Temp_Struct
typedef struct
{
  float32 Pab_Oil_Temp_C;
  Qfr_Enum Pab_Oil_Temp_Qfr_Na;
} Pab_Oil_Temp_Struct;

#  define Rte_TypeDef_Pab_PgSnsrFastDataHandler_Events_Struct
typedef struct
{
  Diag_Event_Status_Enum PAB_PRESSURE_EVENT;
} Pab_PgSnsrFastDataHandler_Events_Struct;

#  define Rte_TypeDef_Pab_PgSnsrSerialDataHandler_Events_Struct
typedef struct
{
  Diag_Event_Status_Enum PAB_TEMPERATURE_EVENT;
  Diag_Event_Status_Enum PAB_DIAGNOSTIC_STATUS_EVENT;
} Pab_PgSnsrSerialDataHandler_Events_Struct;

#  define Rte_TypeDef_Pab_PgSnsr_Qfr_Struct
typedef struct
{
  Qfr_Enum Pab_PgSnsr_Qfr_Na;
} Pab_PgSnsr_Qfr_Struct;

#  define Rte_TypeDef_Pab_PressureSensor_PreQfr_Struct
typedef struct
{
  Qfr_Enum Pab_PressureSensor_PreQfr_Na;
} Pab_PressureSensor_PreQfr_Struct;

#  define Rte_TypeDef_Psm_Max_Error_Pa_Reset_Req_Struct
typedef struct
{
  boolean Psm_Max_Error_Reset_Req;
} Psm_Max_Error_Pa_Reset_Req_Struct;

#  define Rte_TypeDef_SG_FAA_DBG_1000Hz_MSG1_Group
typedef struct
{
  uint16 Av_Pg_Var_AtHrm_Pa;
  uint16 Emm_Ag_OfRotr_Rad;
  sint16 Emm_I_Bus_Ampr;
  sint16 Emm_Tq_Dmd_Nm;
  sint16 Emm_Tq_Est_Nm;
  uint16 Emm_U_Bus_Volt;
  sint16 Emm_Vagr_OfRotr_Radsec;
  sint16 Whl_A_Z_AtAct_Est_Msec2;
} SG_FAA_DBG_1000Hz_MSG1_Group;

#  define Rte_TypeDef_SG_FAA_DBG_1000Hz_MSG1_Group_Struct
typedef struct
{
  uint16 Av_Pg_Var_AtHrm_Pa;
  uint16 Emm_Ag_OfRotr_Rad;
  sint16 Emm_I_Bus_Ampr;
  sint16 Emm_Tq_Dmd_Nm;
  sint16 Emm_Tq_Est_Nm;
  uint16 Emm_U_Bus_Volt;
  sint16 Emm_Vagr_OfRotr_Radsec;
  sint16 Whl_A_Z_AtAct_Est_Msec2;
} SG_FAA_DBG_1000Hz_MSG1_Group_Struct;

#  define Rte_TypeDef_SG_FAA_DBG_10Hz_MSG1_Group
typedef struct
{
  uint8 Dem_Event_Id_Na;
  uint8 Dem_Event_Status_Na;
  sint8 Emm_Temp_AtCtlr_Est_DegC;
  sint8 Emm_Temp_AtHrm_DegC;
  sint8 Emm_Temp_AtPcb_DegC;
  sint8 Emm_Temp_AtPhase_U_DegC;
  sint8 Emm_Temp_AtPhase_V_DegC;
  sint8 Emm_Temp_AtPhase_W_DegC;
  uint8 Lic_Id_Na;
  uint8 Lic_Value_Na;
} SG_FAA_DBG_10Hz_MSG1_Group;

#  define Rte_TypeDef_SG_FAA_DBG_10Hz_MSG1_Group_Struct
typedef struct
{
  uint8 Dem_Event_Id_Na;
  uint8 Dem_Event_Status_Na;
  sint8 Emm_Temp_AtCtlr_Est_DegC;
  sint8 Emm_Temp_AtHrm_DegC;
  sint8 Emm_Temp_AtPcb_DegC;
  sint8 Emm_Temp_AtPhase_U_DegC;
  sint8 Emm_Temp_AtPhase_V_DegC;
  sint8 Emm_Temp_AtPhase_W_DegC;
  uint8 Lic_Id_Na;
  uint8 Lic_Value_Na;
} SG_FAA_DBG_10Hz_MSG1_Group_Struct;

#  define Rte_TypeDef_SG_FAA_DBG_10Hz_MSG_FL_Group
typedef struct
{
  uint8 Dem_Event_Id_Fl_Na;
  uint8 Dem_Event_Status_Fl_Na;
  sint8 Emm_Temp_AtCtlr_Est_Fl_DegC;
  sint8 Emm_Temp_AtHrm_Fl_DegC;
  sint8 Emm_Temp_AtPcb_Fl_DegC;
  sint8 Emm_Temp_AtPhase_U_Fl_DegC;
  sint8 Emm_Temp_AtPhase_V_Fl_DegC;
  sint8 Emm_Temp_AtPhase_W_Fl_DegC;
  uint8 Lic_Id_Fl_Na;
  uint8 Lic_Value_Fl_Na;
} SG_FAA_DBG_10Hz_MSG_FL_Group;

#  define Rte_TypeDef_SG_FAA_DBG_10Hz_MSG_FL_Group_Struct
typedef struct
{
  uint8 Dem_Event_Id_Fl_Na;
  uint8 Dem_Event_Status_Fl_Na;
  sint8 Emm_Temp_AtCtlr_Est_Fl_DegC;
  sint8 Emm_Temp_AtHrm_Fl_DegC;
  sint8 Emm_Temp_AtPcb_Fl_DegC;
  sint8 Emm_Temp_AtPhase_U_Fl_DegC;
  sint8 Emm_Temp_AtPhase_V_Fl_DegC;
  sint8 Emm_Temp_AtPhase_W_Fl_DegC;
  uint8 Lic_Id_Fl_Na;
  uint8 Lic_Value_Fl_Na;
} SG_FAA_DBG_10Hz_MSG_FL_Group_Struct;

#  define Rte_TypeDef_SG_FAA_DBG_10Hz_MSG_FR_Group
typedef struct
{
  uint8 Dem_Event_Id_Fr_Na;
  uint8 Dem_Event_Status_Fr_Na;
  sint8 Emm_Temp_AtCtlr_Est_Fr_DegC;
  sint8 Emm_Temp_AtHrm_Fr_DegC;
  sint8 Emm_Temp_AtPcb_Fr_DegC;
  sint8 Emm_Temp_AtPhase_U_Fr_DegC;
  sint8 Emm_Temp_AtPhase_V_Fr_DegC;
  sint8 Emm_Temp_AtPhase_W_Fr_DegC;
  uint8 Lic_Id_Fr_Na;
  uint8 Lic_Value_Fr_Na;
} SG_FAA_DBG_10Hz_MSG_FR_Group;

#  define Rte_TypeDef_SG_FAA_DBG_10Hz_MSG_FR_Group_Struct
typedef struct
{
  uint8 Dem_Event_Id_Fr_Na;
  uint8 Dem_Event_Status_Fr_Na;
  sint8 Emm_Temp_AtCtlr_Est_Fr_DegC;
  sint8 Emm_Temp_AtHrm_Fr_DegC;
  sint8 Emm_Temp_AtPcb_Fr_DegC;
  sint8 Emm_Temp_AtPhase_U_Fr_DegC;
  sint8 Emm_Temp_AtPhase_V_Fr_DegC;
  sint8 Emm_Temp_AtPhase_W_Fr_DegC;
  uint8 Lic_Id_Fr_Na;
  uint8 Lic_Value_Fr_Na;
} SG_FAA_DBG_10Hz_MSG_FR_Group_Struct;

#  define Rte_TypeDef_SG_FAA_DBG_10Hz_MSG_RL_Group
typedef struct
{
  uint8 Dem_Event_Id_Rl_Na;
  uint8 Dem_Event_Status_Rl_Na;
  sint8 Emm_Temp_AtCtlr_Est_Rl_DegC;
  sint8 Emm_Temp_AtHrm_Rl_DegC;
  sint8 Emm_Temp_AtPcb_Rl_DegC;
  sint8 Emm_Temp_AtPhase_U_Rl_DegC;
  sint8 Emm_Temp_AtPhase_V_Rl_DegC;
  sint8 Emm_Temp_AtPhase_W_Rl_DegC;
  uint8 Lic_Id_Rl_Na;
  uint8 Lic_Value_Rl_Na;
} SG_FAA_DBG_10Hz_MSG_RL_Group;

#  define Rte_TypeDef_SG_FAA_DBG_10Hz_MSG_RL_Group_Struct
typedef struct
{
  uint8 Dem_Event_Id_Rl_Na;
  uint8 Dem_Event_Status_Rl_Na;
  sint8 Emm_Temp_AtCtlr_Est_Rl_DegC;
  sint8 Emm_Temp_AtHrm_Rl_DegC;
  sint8 Emm_Temp_AtPcb_Rl_DegC;
  sint8 Emm_Temp_AtPhase_U_Rl_DegC;
  sint8 Emm_Temp_AtPhase_V_Rl_DegC;
  sint8 Emm_Temp_AtPhase_W_Rl_DegC;
  uint8 Lic_Id_Rl_Na;
  uint8 Lic_Value_Rl_Na;
} SG_FAA_DBG_10Hz_MSG_RL_Group_Struct;

#  define Rte_TypeDef_SG_FAA_DBG_10Hz_MSG_RR_Group
typedef struct
{
  uint8 Dem_Event_Id_Rr_Na;
  uint8 Dem_Event_Status_Rr_Na;
  sint8 Emm_Temp_AtCtlr_Est_Rr_DegC;
  sint8 Emm_Temp_AtHrm_Rr_DegC;
  sint8 Emm_Temp_AtPcb_Rr_DegC;
  sint8 Emm_Temp_AtPhase_U_Rr_DegC;
  sint8 Emm_Temp_AtPhase_V_Rr_DegC;
  sint8 Emm_Temp_AtPhase_W_Rr_DegC;
  uint8 Lic_Id_Rr_Na;
  uint8 Lic_Value_Rr_Na;
} SG_FAA_DBG_10Hz_MSG_RR_Group;

#  define Rte_TypeDef_SG_FAA_DBG_10Hz_MSG_RR_Group_Struct
typedef struct
{
  uint8 Dem_Event_Id_Rr_Na;
  uint8 Dem_Event_Status_Rr_Na;
  sint8 Emm_Temp_AtCtlr_Est_Rr_DegC;
  sint8 Emm_Temp_AtHrm_Rr_DegC;
  sint8 Emm_Temp_AtPcb_Rr_DegC;
  sint8 Emm_Temp_AtPhase_U_Rr_DegC;
  sint8 Emm_Temp_AtPhase_V_Rr_DegC;
  sint8 Emm_Temp_AtPhase_W_Rr_DegC;
  uint8 Lic_Id_Rr_Na;
  uint8 Lic_Value_Rr_Na;
} SG_FAA_DBG_10Hz_MSG_RR_Group_Struct;

#  define Rte_TypeDef_SG_FAA_DBG_500Hz_MSG_FL_Group
typedef struct
{
  uint16 Av_Pg_Var_AtHrm_Fl_Pa;
  uint16 Emm_Ag_OfRotr_Fl_Rad;
  sint16 Emm_I_Bus_Fl_Ampr;
  sint16 Emm_Tq_Est_Fl_Nm;
  uint16 Emm_U_Bus_Fl_Volt;
  sint16 Emm_Vagr_OfRotr_Fl_Radsec;
} SG_FAA_DBG_500Hz_MSG_FL_Group;

#  define Rte_TypeDef_SG_FAA_DBG_500Hz_MSG_FL_Group_Struct
typedef struct
{
  uint16 Av_Pg_Var_AtHrm_Fl_Pa;
  uint16 Emm_Ag_OfRotr_Fl_Rad;
  sint16 Emm_I_Bus_Fl_Ampr;
  sint16 Emm_Tq_Est_Fl_Nm;
  uint16 Emm_U_Bus_Fl_Volt;
  sint16 Emm_Vagr_OfRotr_Fl_Radsec;
} SG_FAA_DBG_500Hz_MSG_FL_Group_Struct;

#  define Rte_TypeDef_SG_FAA_DBG_500Hz_MSG_FR_Group
typedef struct
{
  uint16 Av_Pg_Var_AtHrm_Fr_Pa;
  uint16 Emm_Ag_OfRotr_Fr_Rad;
  sint16 Emm_I_Bus_Fr_Ampr;
  sint16 Emm_Tq_Est_Fr_Nm;
  uint16 Emm_U_Bus_Fr_Volt;
  sint16 Emm_Vagr_OfRotr_Fr_Radsec;
} SG_FAA_DBG_500Hz_MSG_FR_Group;

#  define Rte_TypeDef_SG_FAA_DBG_500Hz_MSG_FR_Group_Struct
typedef struct
{
  uint16 Av_Pg_Var_AtHrm_Fr_Pa;
  uint16 Emm_Ag_OfRotr_Fr_Rad;
  sint16 Emm_I_Bus_Fr_Ampr;
  sint16 Emm_Tq_Est_Fr_Nm;
  uint16 Emm_U_Bus_Fr_Volt;
  sint16 Emm_Vagr_OfRotr_Fr_Radsec;
} SG_FAA_DBG_500Hz_MSG_FR_Group_Struct;

#  define Rte_TypeDef_SG_FAA_DBG_500Hz_MSG_RL_Group
typedef struct
{
  uint16 Av_Pg_Var_AtHrm_Rl_Pa;
  uint16 Emm_Ag_OfRotr_Rl_Rad;
  sint16 Emm_I_Bus_Rl_Ampr;
  sint16 Emm_Tq_Est_Rl_Nm;
  uint16 Emm_U_Bus_Rl_Volt;
  sint16 Emm_Vagr_OfRotr_Rl_Radsec;
} SG_FAA_DBG_500Hz_MSG_RL_Group;

#  define Rte_TypeDef_SG_FAA_DBG_500Hz_MSG_RL_Group_Struct
typedef struct
{
  uint16 Av_Pg_Var_AtHrm_Rl_Pa;
  uint16 Emm_Ag_OfRotr_Rl_Rad;
  sint16 Emm_I_Bus_Rl_Ampr;
  sint16 Emm_Tq_Est_Rl_Nm;
  uint16 Emm_U_Bus_Rl_Volt;
  sint16 Emm_Vagr_OfRotr_Rl_Radsec;
} SG_FAA_DBG_500Hz_MSG_RL_Group_Struct;

#  define Rte_TypeDef_SG_FAA_DBG_500Hz_MSG_RR_Group
typedef struct
{
  uint16 Av_Pg_Var_AtHrm_Rr_Pa;
  uint16 Emm_Ag_OfRotr_Rr_Rad;
  sint16 Emm_I_Bus_Rr_Ampr;
  sint16 Emm_Tq_Est_Rr_Nm;
  uint16 Emm_U_Bus_Rr_Volt;
  sint16 Emm_Vagr_OfRotr_Rr_Radsec;
} SG_FAA_DBG_500Hz_MSG_RR_Group;

#  define Rte_TypeDef_SG_FAA_DBG_500Hz_MSG_RR_Group_Struct
typedef struct
{
  uint16 Av_Pg_Var_AtHrm_Rr_Pa;
  uint16 Emm_Ag_OfRotr_Rr_Rad;
  sint16 Emm_I_Bus_Rr_Ampr;
  sint16 Emm_Tq_Est_Rr_Nm;
  uint16 Emm_U_Bus_Rr_Volt;
  sint16 Emm_Vagr_OfRotr_Rr_Radsec;
} SG_FAA_DBG_500Hz_MSG_RR_Group_Struct;

#  define Rte_TypeDef_SG_FAS_FL_01_Group_Struct
typedef struct
{
  uint32 Ascc_Id_Sw_Fl_Na;
  uint8 Ascc_Mode_Fb_Fl_Na;
  uint8 Ascc_St_Fb_Fl_Na;
  uint8 Faa_25Hz_Msg_Fl_AlvCtr;
  uint16 Faa_25Hz_Msg_Fl_Crc;
  uint8 Faa_Amnt_ActunCpby_Fl_Na;
  uint8 Faa_Amnt_CpbyMrgn_Fl_Na;
  uint32 Faa_Id_Hw_Fl_Na;
  uint8 Faa_Sts_Sst_Fl_Na;
  uint32 Fas_Id_Sys_Fl_Na;
} SG_FAS_FL_01_Group_Struct;

#  define Rte_TypeDef_SG_FAS_FL_02_Group_Struct
typedef struct
{
  sint16 Whl_A_Z_Fl_AtAct_Est_Msec2;
  uint8 Whl_Sts_AZ_Fl_Qfr_Na;
} SG_FAS_FL_02_Group_Struct;

#  define Rte_TypeDef_SG_FAS_FR_01_Group_Struct
typedef struct
{
  uint32 Ascc_Id_Sw_Fr_Na;
  uint8 Ascc_Mode_Fb_Fr_Na;
  uint8 Ascc_St_Fb_Fr_Na;
  uint8 Faa_25Hz_Msg_Fr_AlvCtr;
  uint16 Faa_25Hz_Msg_Fr_Crc;
  uint8 Faa_Amnt_ActunCpby_Fr_Na;
  uint8 Faa_Amnt_CpbyMrgn_Fr_Na;
  uint32 Faa_Id_Hw_Fr_Na;
  uint8 Faa_Sts_Sst_Fr_Na;
  uint32 Fas_Id_Sys_Fr_Na;
} SG_FAS_FR_01_Group_Struct;

#  define Rte_TypeDef_SG_FAS_FR_02_Group_Struct
typedef struct
{
  sint16 Whl_A_Z_Fr_AtAct_Est_Msec2;
  uint8 Whl_Sts_AZ_Fr_Qfr_Na;
} SG_FAS_FR_02_Group_Struct;

#  define Rte_TypeDef_SG_FAS_RL_01_Group_Struct
typedef struct
{
  uint32 Ascc_Id_Sw_Rl_Na;
  uint8 Ascc_Mode_Fb_Rl_Na;
  uint8 Ascc_St_Fb_Rl_Na;
  uint8 Faa_25Hz_Msg_Rl_AlvCtr;
  uint16 Faa_25Hz_Msg_Rl_Crc;
  uint8 Faa_Amnt_ActunCpby_Rl_Na;
  uint8 Faa_Amnt_CpbyMrgn_Rl_Na;
  uint32 Faa_Id_Hw_Rl_Na;
  uint8 Faa_Sts_Sst_Rl_Na;
  uint32 Fas_Id_Sys_Rl_Na;
} SG_FAS_RL_01_Group_Struct;

#  define Rte_TypeDef_SG_FAS_RL_02_Group_Struct
typedef struct
{
  sint16 Whl_A_Z_Rl_AtAct_Est_Msec2;
  uint8 Whl_Sts_AZ_Rl_Qfr_Na;
} SG_FAS_RL_02_Group_Struct;

#  define Rte_TypeDef_SG_FAS_RR_01_Group_Struct
typedef struct
{
  uint32 Ascc_Id_Sw_Rr_Na;
  uint8 Ascc_Mode_Fb_Rr_Na;
  uint8 Ascc_St_Fb_Rr_Na;
  uint8 Faa_25Hz_Msg_Rr_AlvCtr;
  uint16 Faa_25Hz_Msg_Rr_Crc;
  uint8 Faa_Amnt_ActunCpby_Rr_Na;
  uint8 Faa_Amnt_CpbyMrgn_Rr_Na;
  uint32 Faa_Id_Hw_Rr_Na;
  uint8 Faa_Sts_Sst_Rr_Na;
  uint32 Fas_Id_Sys_Rr_Na;
} SG_FAS_RR_01_Group_Struct;

#  define Rte_TypeDef_SG_FAS_RR_02_Group_Struct
typedef struct
{
  sint16 Whl_A_Z_Rr_AtAct_Est_Msec2;
  uint8 Whl_Sts_AZ_Rr_Qfr_Na;
} SG_FAS_RR_02_Group_Struct;

#  define Rte_TypeDef_SG_ZONE_13C_Group_Struct
typedef struct
{
  DrvState_Enum DrvState;
  Validity_Enum DrvState_SrvSts;
  OperatorState_Enum OperatorState;
  Validity_Enum OperatorState_SrvSts;
  VehStateDetailed_Enum VehStateDetailed;
  Validity_Enum VehStateDetailed_SrvSts;
} SG_ZONE_13C_Group_Struct;

#  define Rte_TypeDef_SG_ZONE_3A9_Group
typedef struct
{
  uint32 VehOdometer;
} SG_ZONE_3A9_Group;

#  define Rte_TypeDef_SG_Zone_13C_Struct
typedef struct
{
  DrvState_Enum DrvState;
  Validity_Enum DrvState_SrvSts;
  OperatorState_Enum OperatorState;
  Validity_Enum OperatorState_SrvSts;
  VehStateDetailed_Enum VehStateDetailed;
  Validity_Enum VehStateDetailed_SrvSts;
} SG_Zone_13C_Struct;

#  define Rte_TypeDef_SG_Zone_3A9_Struct
typedef struct
{
  uint32 VehOdometer;
} SG_Zone_3A9_Struct;

#  define Rte_TypeDef_SG_Zone_3B2_Struct
typedef struct
{
  uint8 Day;
  uint8 Hr;
  uint8 Min;
  uint16 MSec;
  uint8 Mth;
  uint8 Sec;
  uint8 Yr;
} SG_Zone_3B2_Struct;

#  define Rte_TypeDef_SG_Zone_R_FAS_01_Group_Struct
typedef struct
{
  uint8 Ascc_St_Req_Na;
  uint8 Asmc_100Hz_Msg_AlvCtr;
  uint16 Asmc_100Hz_Msg_Crc;
  uint16 Faa_Cons_Pwr_Limit_Watt;
  uint8 Faa_Pwr48_ConsLmt_Actv_Na;
  uint8 Faa_Pwr48_RegenLmt_Actv_Na;
  uint16 Faa_Regen_Pwr_Limit_Watt;
  uint8 Faa_Sf_Diag_Mofr_Na;
  uint8 Faa_Sts_Cons_Pwr_Limit_Qfr_Na;
  uint8 Faa_Sts_Regen_Pwr_Limit_Qfr_Na;
  uint8 Faa_Zl_Setg_Req_Na;
  uint32 Fas_Oper_Mins;
  uint8 Fas_Sts_VehSpdLo_Na;
  uint8 Fas_Sts_VehStaty_Na;
  uint16 Veh_Psn_Sus_AtAct_Fl_Mm;
  uint16 Veh_Psn_Sus_AtAct_Fr_Mm;
  uint16 Veh_Psn_Sus_AtAct_Rl_Mm;
  uint16 Veh_Psn_Sus_AtAct_Rr_Mm;
  uint8 Veh_Sts_Psn_Sus_Fl_Qfr_Na;
  uint8 Veh_Sts_Psn_Sus_Fr_Qfr_Na;
  uint8 Veh_Sts_Psn_Sus_Rl_Qfr_Na;
  uint8 Veh_Sts_Psn_Sus_Rr_Qfr_Na;
} SG_Zone_R_FAS_01_Group_Struct;

#  define Rte_TypeDef_SG_Zone_R_FAS_02_Group_Struct
typedef struct
{
  uint8 Ascc_F_Prio_Na;
  uint8 Ascc_Mode_Req_Na;
  uint8 Asmc_1000Hz_F_Cmd_AlvCtr;
  uint8 Asmc_1000Hz_F_Cmd_Crc;
  uint16 Faa_F_Fl_AtActr_Cmd_Nwt;
  uint16 Faa_F_Fr_AtActr_Cmd_Nwt;
  uint16 Faa_F_Rl_AtActr_Cmd_Nwt;
  uint16 Faa_F_Rr_AtActr_Cmd_Nwt;
} SG_Zone_R_FAS_02_Group_Struct;

#  define Rte_TypeDef_SG_Zone_TCU_01_Group_Struct
typedef struct
{
  uint8 Day;
  uint8 Hr;
  uint8 Min;
  uint16 MSec;
  uint8 Mth;
  uint8 Sec;
  uint8 Yr;
} SG_Zone_TCU_01_Group_Struct;

#  define Rte_TypeDef_Tas_Tq_Dmd_Struct
typedef struct
{
  float32 Tas_Tq_Dmd_Nwtm;
} Tas_Tq_Dmd_Struct;

#  define Rte_TypeDef_Uab_Oper_Cycle_Cntr_Reset_Req_Struct
typedef struct
{
  boolean Uab_Oper_Cycle_Cntr_Reset_Req;
} Uab_Oper_Cycle_Cntr_Reset_Req_Struct;

#  define Rte_TypeDef_Uab_Oper_Cycle_Cntr_Write_Trigger_Struct
typedef struct
{
  boolean Uab_Oper_Cycle_Cntr_Write_Trigger;
} Uab_Oper_Cycle_Cntr_Write_Trigger_Struct;

#  define Rte_TypeDef_Uab_OperationCycle_State_Struct
typedef struct
{
  Diag_OperationCycle_Status_Enum Uab_OperationCycle_State;
} Uab_OperationCycle_State_Struct;

#  define Rte_TypeDef_Wae_Whl_A_Z_AtAct_Est_Struct
typedef struct
{
  float32 Wae_Whl_A_Z_AtAct_Est_Msec2;
  Qfr_Enum Wae_Whl_Sts_AZ_Qfr_Na;
} Wae_Whl_A_Z_AtAct_Est_Struct;

#  define Rte_TypeDef_Ascc_Id_Sw_Fl_Na
typedef uint32 Ascc_Id_Sw_Fl_Na;

#  define Rte_TypeDef_Ascc_Id_Sw_Fr_Na
typedef uint32 Ascc_Id_Sw_Fr_Na;

#  define Rte_TypeDef_Ascc_Id_Sw_Rl_Na
typedef uint32 Ascc_Id_Sw_Rl_Na;

#  define Rte_TypeDef_Ascc_Id_Sw_Rr_Na
typedef uint32 Ascc_Id_Sw_Rr_Na;

#  define Rte_TypeDef_Ascc_St_Fb_Fl_Na
typedef uint8 Ascc_St_Fb_Fl_Na;

#  define Rte_TypeDef_Ascc_St_Fb_Fr_Na
typedef uint8 Ascc_St_Fb_Fr_Na;

#  define Rte_TypeDef_Ascc_St_Fb_Na
typedef uint8 Ascc_St_Fb_Na;

#  define Rte_TypeDef_Ascc_St_Fb_Rl_Na
typedef uint8 Ascc_St_Fb_Rl_Na;

#  define Rte_TypeDef_Ascc_St_Fb_Rr_Na
typedef uint8 Ascc_St_Fb_Rr_Na;

#  define Rte_TypeDef_Ascc_St_Req_Na
typedef uint8 Ascc_St_Req_Na;

#  define Rte_TypeDef_Asmc_1000Hz_F_Cmd_AlvCtr
typedef uint8 Asmc_1000Hz_F_Cmd_AlvCtr;

#  define Rte_TypeDef_Asmc_1000Hz_F_Cmd_Crc
typedef uint8 Asmc_1000Hz_F_Cmd_Crc;

#  define Rte_TypeDef_Asmc_100Hz_Sts_VehStaty_AlvCtr
typedef uint8 Asmc_100Hz_Sts_VehStaty_AlvCtr;

#  define Rte_TypeDef_Asmc_100Hz_Sts_VehStaty_Crc
typedef uint8 Asmc_100Hz_Sts_VehStaty_Crc;

#  define Rte_TypeDef_Asmc_100Hz_Zl_Mofr_AlvCtr
typedef uint8 Asmc_100Hz_Zl_Mofr_AlvCtr;

#  define Rte_TypeDef_Asmc_25Hz_Sts_AlvCtr
typedef uint8 Asmc_25Hz_Sts_AlvCtr;

#  define Rte_TypeDef_Asmc_Req_DaHlthTest_Na
typedef uint8 Asmc_Req_DaHlthTest_Na;

#  define Rte_TypeDef_Av_Pg_Var_AtHrm_Fl_Pa
typedef uint16 Av_Pg_Var_AtHrm_Fl_Pa;

#  define Rte_TypeDef_Av_Pg_Var_AtHrm_Fr_Pa
typedef uint16 Av_Pg_Var_AtHrm_Fr_Pa;

#  define Rte_TypeDef_Av_Pg_Var_AtHrm_Pa
typedef uint16 Av_Pg_Var_AtHrm_Pa;

#  define Rte_TypeDef_Av_Pg_Var_AtHrm_Rl_Pa
typedef uint16 Av_Pg_Var_AtHrm_Rl_Pa;

#  define Rte_TypeDef_Av_Pg_Var_AtHrm_Rr_Pa
typedef uint16 Av_Pg_Var_AtHrm_Rr_Pa;

#  define Rte_TypeDef_ComM_InhibitionStatusType
typedef uint8 ComM_InhibitionStatusType;

#  define Rte_TypeDef_ComM_ModeType
typedef uint8 ComM_ModeType;

#  define Rte_TypeDef_ComM_UserHandleType
typedef uint16 ComM_UserHandleType;

#  define Rte_TypeDef_Dem_DTCGroupType
typedef uint32 Dem_DTCGroupType;

#  define Rte_TypeDef_Dem_DTCStatusMaskType
typedef uint8 Dem_DTCStatusMaskType;

#  define Rte_TypeDef_Dem_OperationCycleIdType
typedef uint8 Dem_OperationCycleIdType;

#  define Rte_TypeDef_Dem_RatioIdType
typedef uint16 Dem_RatioIdType;

#  define Rte_TypeDef_Dem_UdsStatusByteType
typedef uint8 Dem_UdsStatusByteType;

#  define Rte_TypeDef_EcuM_TimeType
typedef uint32 EcuM_TimeType;

#  define Rte_TypeDef_EcuM_UserType
typedef uint8 EcuM_UserType;

#  define Rte_TypeDef_Emm_Ag_OfRotr_Fl_Rad
typedef uint16 Emm_Ag_OfRotr_Fl_Rad;

#  define Rte_TypeDef_Emm_Ag_OfRotr_Fr_Rad
typedef uint16 Emm_Ag_OfRotr_Fr_Rad;

#  define Rte_TypeDef_Emm_Ag_OfRotr_Rad
typedef uint16 Emm_Ag_OfRotr_Rad;

#  define Rte_TypeDef_Emm_Ag_OfRotr_Rl_Rad
typedef uint16 Emm_Ag_OfRotr_Rl_Rad;

#  define Rte_TypeDef_Emm_Ag_OfRotr_Rr_Rad
typedef uint16 Emm_Ag_OfRotr_Rr_Rad;

#  define Rte_TypeDef_Emm_Err_Code_Na
typedef uint8 Emm_Err_Code_Na;

#  define Rte_TypeDef_Emm_I_Bus_Ampr
typedef sint16 Emm_I_Bus_Ampr;

#  define Rte_TypeDef_Emm_I_Bus_Fl_Ampr
typedef sint16 Emm_I_Bus_Fl_Ampr;

#  define Rte_TypeDef_Emm_I_Bus_Fr_Ampr
typedef sint16 Emm_I_Bus_Fr_Ampr;

#  define Rte_TypeDef_Emm_I_Bus_Rl_Ampr
typedef sint16 Emm_I_Bus_Rl_Ampr;

#  define Rte_TypeDef_Emm_I_Bus_Rr_Ampr
typedef sint16 Emm_I_Bus_Rr_Ampr;

#  define Rte_TypeDef_Emm_Temp_AtCtlr_Est_DegC
typedef sint8 Emm_Temp_AtCtlr_Est_DegC;

#  define Rte_TypeDef_Emm_Temp_AtCtlr_Est_Fl_DegC
typedef sint8 Emm_Temp_AtCtlr_Est_Fl_DegC;

#  define Rte_TypeDef_Emm_Temp_AtCtlr_Est_Fr_DegC
typedef sint8 Emm_Temp_AtCtlr_Est_Fr_DegC;

#  define Rte_TypeDef_Emm_Temp_AtCtlr_Est_Rl_DegC
typedef sint8 Emm_Temp_AtCtlr_Est_Rl_DegC;

#  define Rte_TypeDef_Emm_Temp_AtCtlr_Est_Rr_DegC
typedef sint8 Emm_Temp_AtCtlr_Est_Rr_DegC;

#  define Rte_TypeDef_Emm_Temp_AtHrm_DegC
typedef sint8 Emm_Temp_AtHrm_DegC;

#  define Rte_TypeDef_Emm_Temp_AtHrm_Fl_DegC
typedef sint8 Emm_Temp_AtHrm_Fl_DegC;

#  define Rte_TypeDef_Emm_Temp_AtHrm_Fr_DegC
typedef sint8 Emm_Temp_AtHrm_Fr_DegC;

#  define Rte_TypeDef_Emm_Temp_AtHrm_Rl_DegC
typedef sint8 Emm_Temp_AtHrm_Rl_DegC;

#  define Rte_TypeDef_Emm_Temp_AtHrm_Rr_DegC
typedef sint8 Emm_Temp_AtHrm_Rr_DegC;

#  define Rte_TypeDef_Emm_Temp_AtPcb_DegC
typedef sint8 Emm_Temp_AtPcb_DegC;

#  define Rte_TypeDef_Emm_Temp_AtPcb_Fl_DegC
typedef sint8 Emm_Temp_AtPcb_Fl_DegC;

#  define Rte_TypeDef_Emm_Temp_AtPcb_Fr_DegC
typedef sint8 Emm_Temp_AtPcb_Fr_DegC;

#  define Rte_TypeDef_Emm_Temp_AtPcb_Rl_DegC
typedef sint8 Emm_Temp_AtPcb_Rl_DegC;

#  define Rte_TypeDef_Emm_Temp_AtPcb_Rr_DegC
typedef sint8 Emm_Temp_AtPcb_Rr_DegC;

#  define Rte_TypeDef_Emm_Temp_Brdg_DegC
typedef sint16 Emm_Temp_Brdg_DegC;

#  define Rte_TypeDef_Emm_Tq_Dmd_Nm
typedef sint16 Emm_Tq_Dmd_Nm;

#  define Rte_TypeDef_Emm_Tq_Est_Fl_Nm
typedef sint16 Emm_Tq_Est_Fl_Nm;

#  define Rte_TypeDef_Emm_Tq_Est_Fr_Nm
typedef sint16 Emm_Tq_Est_Fr_Nm;

#  define Rte_TypeDef_Emm_Tq_Est_Nm
typedef sint16 Emm_Tq_Est_Nm;

#  define Rte_TypeDef_Emm_Tq_Est_Rl_Nm
typedef sint16 Emm_Tq_Est_Rl_Nm;

#  define Rte_TypeDef_Emm_Tq_Est_Rr_Nm
typedef sint16 Emm_Tq_Est_Rr_Nm;

#  define Rte_TypeDef_Emm_U_Bus_Fl_Volt
typedef uint16 Emm_U_Bus_Fl_Volt;

#  define Rte_TypeDef_Emm_U_Bus_Fr_Volt
typedef uint16 Emm_U_Bus_Fr_Volt;

#  define Rte_TypeDef_Emm_U_Bus_Rl_Volt
typedef uint16 Emm_U_Bus_Rl_Volt;

#  define Rte_TypeDef_Emm_U_Bus_Rr_Volt
typedef uint16 Emm_U_Bus_Rr_Volt;

#  define Rte_TypeDef_Emm_U_Bus_Volt
typedef uint16 Emm_U_Bus_Volt;

#  define Rte_TypeDef_Emm_Vagr_OfRotr_Fl_Radsec
typedef sint16 Emm_Vagr_OfRotr_Fl_Radsec;

#  define Rte_TypeDef_Emm_Vagr_OfRotr_Fr_Radsec
typedef sint16 Emm_Vagr_OfRotr_Fr_Radsec;

#  define Rte_TypeDef_Emm_Vagr_OfRotr_Radsec
typedef sint16 Emm_Vagr_OfRotr_Radsec;

#  define Rte_TypeDef_Emm_Vagr_OfRotr_Rl_Radsec
typedef sint16 Emm_Vagr_OfRotr_Rl_Radsec;

#  define Rte_TypeDef_Emm_Vagr_OfRotr_Rr_Radsec
typedef sint16 Emm_Vagr_OfRotr_Rr_Radsec;

#  define Rte_TypeDef_EnumActiveComponentType
typedef uint8 EnumActiveComponentType;

#  define Rte_TypeDef_EnumMEM_BlockStateType
typedef uint8 EnumMEM_BlockStateType;

#  define Rte_TypeDef_Faa_100Hz_Flt_Pwr_Fl_AlvCtr
typedef uint8 Faa_100Hz_Flt_Pwr_Fl_AlvCtr;

#  define Rte_TypeDef_Faa_100Hz_Flt_Pwr_Fl_Crc
typedef uint8 Faa_100Hz_Flt_Pwr_Fl_Crc;

#  define Rte_TypeDef_Faa_100Hz_Flt_Pwr_Fr_AlvCtr
typedef uint8 Faa_100Hz_Flt_Pwr_Fr_AlvCtr;

#  define Rte_TypeDef_Faa_100Hz_Flt_Pwr_Fr_Crc
typedef uint8 Faa_100Hz_Flt_Pwr_Fr_Crc;

#  define Rte_TypeDef_Faa_100Hz_Flt_Pwr_Rl_AlvCtr
typedef uint8 Faa_100Hz_Flt_Pwr_Rl_AlvCtr;

#  define Rte_TypeDef_Faa_100Hz_Flt_Pwr_Rl_Crc
typedef uint8 Faa_100Hz_Flt_Pwr_Rl_Crc;

#  define Rte_TypeDef_Faa_100Hz_Flt_Pwr_Rr_AlvCtr
typedef uint8 Faa_100Hz_Flt_Pwr_Rr_AlvCtr;

#  define Rte_TypeDef_Faa_100Hz_Flt_Pwr_Rr_Crc
typedef uint8 Faa_100Hz_Flt_Pwr_Rr_Crc;

#  define Rte_TypeDef_Faa_10Hz_Cpby_Temp_Fl_AlvCtr
typedef uint8 Faa_10Hz_Cpby_Temp_Fl_AlvCtr;

#  define Rte_TypeDef_Faa_10Hz_Cpby_Temp_Fr_AlvCtr
typedef uint8 Faa_10Hz_Cpby_Temp_Fr_AlvCtr;

#  define Rte_TypeDef_Faa_10Hz_Cpby_Temp_Rl_AlvCtr
typedef uint8 Faa_10Hz_Cpby_Temp_Rl_AlvCtr;

#  define Rte_TypeDef_Faa_10Hz_Cpby_Temp_Rr_AlvCtr
typedef uint8 Faa_10Hz_Cpby_Temp_Rr_AlvCtr;

#  define Rte_TypeDef_Faa_25Hz_Id_StFb_Fl_AlvCtr
typedef uint8 Faa_25Hz_Id_StFb_Fl_AlvCtr;

#  define Rte_TypeDef_Faa_25Hz_Id_StFb_Fl_Crc
typedef uint8 Faa_25Hz_Id_StFb_Fl_Crc;

#  define Rte_TypeDef_Faa_25Hz_Id_StFb_Fr_AlvCtr
typedef uint8 Faa_25Hz_Id_StFb_Fr_AlvCtr;

#  define Rte_TypeDef_Faa_25Hz_Id_StFb_Fr_Crc
typedef uint8 Faa_25Hz_Id_StFb_Fr_Crc;

#  define Rte_TypeDef_Faa_25Hz_Id_StFb_Rl_AlvCtr
typedef uint8 Faa_25Hz_Id_StFb_Rl_AlvCtr;

#  define Rte_TypeDef_Faa_25Hz_Id_StFb_Rl_Crc
typedef uint8 Faa_25Hz_Id_StFb_Rl_Crc;

#  define Rte_TypeDef_Faa_25Hz_Id_StFb_Rr_AlvCtr
typedef uint8 Faa_25Hz_Id_StFb_Rr_AlvCtr;

#  define Rte_TypeDef_Faa_25Hz_Id_StFb_Rr_Crc
typedef uint8 Faa_25Hz_Id_StFb_Rr_Crc;

#  define Rte_TypeDef_Faa_500Hz_A_Whl_Fl_AlvCtr
typedef uint8 Faa_500Hz_A_Whl_Fl_AlvCtr;

#  define Rte_TypeDef_Faa_500Hz_A_Whl_Fl_Crc
typedef uint8 Faa_500Hz_A_Whl_Fl_Crc;

#  define Rte_TypeDef_Faa_500Hz_A_Whl_Fr_AlvCtr
typedef uint8 Faa_500Hz_A_Whl_Fr_AlvCtr;

#  define Rte_TypeDef_Faa_500Hz_A_Whl_Fr_Crc
typedef uint8 Faa_500Hz_A_Whl_Fr_Crc;

#  define Rte_TypeDef_Faa_500Hz_A_Whl_Rl_AlvCtr
typedef uint8 Faa_500Hz_A_Whl_Rl_AlvCtr;

#  define Rte_TypeDef_Faa_500Hz_A_Whl_Rl_Crc
typedef uint8 Faa_500Hz_A_Whl_Rl_Crc;

#  define Rte_TypeDef_Faa_500Hz_A_Whl_Rr_AlvCtr
typedef uint8 Faa_500Hz_A_Whl_Rr_AlvCtr;

#  define Rte_TypeDef_Faa_500Hz_A_Whl_Rr_Crc
typedef uint8 Faa_500Hz_A_Whl_Rr_Crc;

#  define Rte_TypeDef_Faa_Amnt_ActunCpby_Fl_Na
typedef uint8 Faa_Amnt_ActunCpby_Fl_Na;

#  define Rte_TypeDef_Faa_Amnt_ActunCpby_Fr_Na
typedef uint8 Faa_Amnt_ActunCpby_Fr_Na;

#  define Rte_TypeDef_Faa_Amnt_ActunCpby_Rl_Na
typedef uint8 Faa_Amnt_ActunCpby_Rl_Na;

#  define Rte_TypeDef_Faa_Amnt_ActunCpby_Rr_Na
typedef uint8 Faa_Amnt_ActunCpby_Rr_Na;

#  define Rte_TypeDef_Faa_Da_Fl_Hlth_Na
typedef uint8 Faa_Da_Fl_Hlth_Na;

#  define Rte_TypeDef_Faa_Da_Fr_Hlth_Na
typedef uint8 Faa_Da_Fr_Hlth_Na;

#  define Rte_TypeDef_Faa_Da_Rl_Hlth_Na
typedef uint8 Faa_Da_Rl_Hlth_Na;

#  define Rte_TypeDef_Faa_Da_Rr_Hlth_Na
typedef uint8 Faa_Da_Rr_Hlth_Na;

#  define Rte_TypeDef_Faa_F_Fl_AtActr_Cmd_Nwt
typedef sint16 Faa_F_Fl_AtActr_Cmd_Nwt;

#  define Rte_TypeDef_Faa_F_Fr_AtActr_Cmd_Nwt
typedef sint16 Faa_F_Fr_AtActr_Cmd_Nwt;

#  define Rte_TypeDef_Faa_F_Rl_AtActr_Cmd_Nwt
typedef sint16 Faa_F_Rl_AtActr_Cmd_Nwt;

#  define Rte_TypeDef_Faa_F_Rr_AtActr_Cmd_Nwt
typedef sint16 Faa_F_Rr_AtActr_Cmd_Nwt;

#  define Rte_TypeDef_Faa_Frq_Fn_ZlFil_Ce_Hz
typedef uint8 Faa_Frq_Fn_ZlFil_Ce_Hz;

#  define Rte_TypeDef_Faa_Frq_Re_ZlFil_Ce_Hz
typedef uint8 Faa_Frq_Re_ZlFil_Ce_Hz;

#  define Rte_TypeDef_Faa_Gain_Fn_ZlFil_Na
typedef uint8 Faa_Gain_Fn_ZlFil_Na;

#  define Rte_TypeDef_Faa_Gain_Re_ZlFil_Na
typedef uint8 Faa_Gain_Re_ZlFil_Na;

#  define Rte_TypeDef_Faa_Id_Hw_Fl_Na
typedef uint32 Faa_Id_Hw_Fl_Na;

#  define Rte_TypeDef_Faa_Id_Hw_Fr_Na
typedef uint32 Faa_Id_Hw_Fr_Na;

#  define Rte_TypeDef_Faa_Id_Hw_Rl_Na
typedef uint32 Faa_Id_Hw_Rl_Na;

#  define Rte_TypeDef_Faa_Id_Hw_Rr_Na
typedef uint32 Faa_Id_Hw_Rr_Na;

#  define Rte_TypeDef_Faa_Mofr_Fn_ZlGain_Na
typedef uint8 Faa_Mofr_Fn_ZlGain_Na;

#  define Rte_TypeDef_Faa_Mofr_Re_ZlGain_Na
typedef uint8 Faa_Mofr_Re_ZlGain_Na;

#  define Rte_TypeDef_Faa_Pwr_UBus48_Fl_Est_Watt
typedef sint16 Faa_Pwr_UBus48_Fl_Est_Watt;

#  define Rte_TypeDef_Faa_Pwr_UBus48_Fl_Watt
typedef sint16 Faa_Pwr_UBus48_Fl_Watt;

#  define Rte_TypeDef_Faa_Pwr_UBus48_Fr_Est_Watt
typedef sint16 Faa_Pwr_UBus48_Fr_Est_Watt;

#  define Rte_TypeDef_Faa_Pwr_UBus48_Fr_Watt
typedef sint16 Faa_Pwr_UBus48_Fr_Watt;

#  define Rte_TypeDef_Faa_Pwr_UBus48_Rl_Est_Watt
typedef sint16 Faa_Pwr_UBus48_Rl_Est_Watt;

#  define Rte_TypeDef_Faa_Pwr_UBus48_Rl_Watt
typedef sint16 Faa_Pwr_UBus48_Rl_Watt;

#  define Rte_TypeDef_Faa_Pwr_UBus48_Rr_Est_Watt
typedef sint16 Faa_Pwr_UBus48_Rr_Est_Watt;

#  define Rte_TypeDef_Faa_Pwr_UBus48_Rr_Watt
typedef sint16 Faa_Pwr_UBus48_Rr_Watt;

#  define Rte_TypeDef_Faa_Sts_ActunCpby_Fl_Qfr_Na
typedef uint8 Faa_Sts_ActunCpby_Fl_Qfr_Na;

#  define Rte_TypeDef_Faa_Sts_ActunCpby_Fr_Qfr_Na
typedef uint8 Faa_Sts_ActunCpby_Fr_Qfr_Na;

#  define Rte_TypeDef_Faa_Sts_ActunCpby_Rl_Qfr_Na
typedef uint8 Faa_Sts_ActunCpby_Rl_Qfr_Na;

#  define Rte_TypeDef_Faa_Sts_ActunCpby_Rr_Qfr_Na
typedef uint8 Faa_Sts_ActunCpby_Rr_Qfr_Na;

#  define Rte_TypeDef_Faa_Sts_F_Qfr_Na
typedef uint8 Faa_Sts_F_Qfr_Na;

#  define Rte_TypeDef_Faa_Sts_Pwr48_Fl_Qfr_Na
typedef uint8 Faa_Sts_Pwr48_Fl_Qfr_Na;

#  define Rte_TypeDef_Faa_Sts_Pwr48_Fr_Qfr_Na
typedef uint8 Faa_Sts_Pwr48_Fr_Qfr_Na;

#  define Rte_TypeDef_Faa_Sts_Pwr48_Rl_Qfr_Na
typedef uint8 Faa_Sts_Pwr48_Rl_Qfr_Na;

#  define Rte_TypeDef_Faa_Sts_Pwr48_Rr_Qfr_Na
typedef uint8 Faa_Sts_Pwr48_Rr_Qfr_Na;

#  define Rte_TypeDef_Faa_Sts_Sst_Fl_Na
typedef uint8 Faa_Sts_Sst_Fl_Na;

#  define Rte_TypeDef_Faa_Sts_Sst_Fr_Na
typedef uint8 Faa_Sts_Sst_Fr_Na;

#  define Rte_TypeDef_Faa_Sts_Sst_Rl_Na
typedef uint8 Faa_Sts_Sst_Rl_Na;

#  define Rte_TypeDef_Faa_Sts_Sst_Rr_Na
typedef uint8 Faa_Sts_Sst_Rr_Na;

#  define Rte_TypeDef_Faa_Sts_Temp_Fl_Qfr_Na
typedef uint8 Faa_Sts_Temp_Fl_Qfr_Na;

#  define Rte_TypeDef_Faa_Sts_Temp_Fr_Qfr_Na
typedef uint8 Faa_Sts_Temp_Fr_Qfr_Na;

#  define Rte_TypeDef_Faa_Sts_Temp_Rl_Qfr_Na
typedef uint8 Faa_Sts_Temp_Rl_Qfr_Na;

#  define Rte_TypeDef_Faa_Sts_Temp_Rr_Qfr_Na
typedef uint8 Faa_Sts_Temp_Rr_Qfr_Na;

#  define Rte_TypeDef_Faa_Sts_ZlMofr_Fn_Qfr_Na
typedef uint8 Faa_Sts_ZlMofr_Fn_Qfr_Na;

#  define Rte_TypeDef_Faa_Sts_ZlMofr_Re_Qfr_Na
typedef uint8 Faa_Sts_ZlMofr_Re_Qfr_Na;

#  define Rte_TypeDef_Faa_Temp_Fl_AtCtlr_DegC
typedef sint8 Faa_Temp_Fl_AtCtlr_DegC;

#  define Rte_TypeDef_Faa_Temp_Fr_AtCtlr_DegC
typedef sint8 Faa_Temp_Fr_AtCtlr_DegC;

#  define Rte_TypeDef_Faa_Temp_Rl_AtCtlr_DegC
typedef sint8 Faa_Temp_Rl_AtCtlr_DegC;

#  define Rte_TypeDef_Faa_Temp_Rr_AtCtlr_DegC
typedef sint8 Faa_Temp_Rr_AtCtlr_DegC;

#  define Rte_TypeDef_Faa_Wi_Fn_ZlFil_Na
typedef uint8 Faa_Wi_Fn_ZlFil_Na;

#  define Rte_TypeDef_Faa_Wi_Re_ZlFil_Na
typedef uint8 Faa_Wi_Re_ZlFil_Na;

#  define Rte_TypeDef_Fas_Sts_VehSpdLo_Na
typedef uint8 Fas_Sts_VehSpdLo_Na;

#  define Rte_TypeDef_Fas_Sts_VehStaty_Na
typedef uint8 Fas_Sts_VehStaty_Na;

#  define Rte_TypeDef_Fas_Sts_VehStsSpdLo_Qfr_Na
typedef uint8 Fas_Sts_VehStsSpdLo_Qfr_Na;

#  define Rte_TypeDef_Fas_Sts_VehStsStaty_Qfr_Na
typedef uint8 Fas_Sts_VehStsStaty_Qfr_Na;

#  define Rte_TypeDef_NvM_BlockIdType
typedef uint16 NvM_BlockIdType;

#  define Rte_TypeDef_NvM_ServiceIdType
typedef uint8 NvM_ServiceIdType;

#  define Rte_TypeDef_Rte_DT_SG_FAS_FL_01_Group_1
typedef uint8 Rte_DT_SG_FAS_FL_01_Group_1;

#  define Rte_TypeDef_Rte_DT_SG_FAS_FL_01_Group_10
typedef uint8 Rte_DT_SG_FAS_FL_01_Group_10;

#  define Rte_TypeDef_Rte_DT_SG_FAS_FL_01_Group_2
typedef uint8 Rte_DT_SG_FAS_FL_01_Group_2;

#  define Rte_TypeDef_Rte_DT_SG_FAS_FL_01_Group_9
typedef uint8 Rte_DT_SG_FAS_FL_01_Group_9;

#  define Rte_TypeDef_Rte_DT_SG_FAS_FL_02_Group_1
typedef uint8 Rte_DT_SG_FAS_FL_02_Group_1;

#  define Rte_TypeDef_Rte_DT_SG_FAS_FR_01_Group_1
typedef uint8 Rte_DT_SG_FAS_FR_01_Group_1;

#  define Rte_TypeDef_Rte_DT_SG_FAS_FR_01_Group_10
typedef uint8 Rte_DT_SG_FAS_FR_01_Group_10;

#  define Rte_TypeDef_Rte_DT_SG_FAS_FR_01_Group_2
typedef uint8 Rte_DT_SG_FAS_FR_01_Group_2;

#  define Rte_TypeDef_Rte_DT_SG_FAS_FR_01_Group_9
typedef uint8 Rte_DT_SG_FAS_FR_01_Group_9;

#  define Rte_TypeDef_Rte_DT_SG_FAS_FR_02_Group_1
typedef uint8 Rte_DT_SG_FAS_FR_02_Group_1;

#  define Rte_TypeDef_Rte_DT_SG_FAS_RL_01_Group_1
typedef uint8 Rte_DT_SG_FAS_RL_01_Group_1;

#  define Rte_TypeDef_Rte_DT_SG_FAS_RL_01_Group_10
typedef uint8 Rte_DT_SG_FAS_RL_01_Group_10;

#  define Rte_TypeDef_Rte_DT_SG_FAS_RL_01_Group_2
typedef uint8 Rte_DT_SG_FAS_RL_01_Group_2;

#  define Rte_TypeDef_Rte_DT_SG_FAS_RL_01_Group_9
typedef uint8 Rte_DT_SG_FAS_RL_01_Group_9;

#  define Rte_TypeDef_Rte_DT_SG_FAS_RL_02_Group_1
typedef uint8 Rte_DT_SG_FAS_RL_02_Group_1;

#  define Rte_TypeDef_Rte_DT_SG_FAS_RR_01_Group_1
typedef uint8 Rte_DT_SG_FAS_RR_01_Group_1;

#  define Rte_TypeDef_Rte_DT_SG_FAS_RR_01_Group_10
typedef uint8 Rte_DT_SG_FAS_RR_01_Group_10;

#  define Rte_TypeDef_Rte_DT_SG_FAS_RR_01_Group_2
typedef uint8 Rte_DT_SG_FAS_RR_01_Group_2;

#  define Rte_TypeDef_Rte_DT_SG_FAS_RR_01_Group_9
typedef uint8 Rte_DT_SG_FAS_RR_01_Group_9;

#  define Rte_TypeDef_Rte_DT_SG_FAS_RR_02_Group_1
typedef uint8 Rte_DT_SG_FAS_RR_02_Group_1;

#  define Rte_TypeDef_Rte_DT_SG_ZONE_13C_Group_0
typedef uint8 Rte_DT_SG_ZONE_13C_Group_0;

#  define Rte_TypeDef_Rte_DT_SG_ZONE_13C_Group_1
typedef boolean Rte_DT_SG_ZONE_13C_Group_1;

#  define Rte_TypeDef_Rte_DT_SG_ZONE_13C_Group_2
typedef uint8 Rte_DT_SG_ZONE_13C_Group_2;

#  define Rte_TypeDef_Rte_DT_SG_ZONE_13C_Group_3
typedef boolean Rte_DT_SG_ZONE_13C_Group_3;

#  define Rte_TypeDef_Rte_DT_SG_ZONE_13C_Group_4
typedef uint8 Rte_DT_SG_ZONE_13C_Group_4;

#  define Rte_TypeDef_Rte_DT_SG_ZONE_13C_Group_5
typedef boolean Rte_DT_SG_ZONE_13C_Group_5;

#  define Rte_TypeDef_Rte_DT_SG_ZONE_3B2_Group_4
typedef uint8 Rte_DT_SG_ZONE_3B2_Group_4;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_01_Group_0
typedef uint8 Rte_DT_SG_Zone_R_FAS_01_Group_0;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_01_Group_10
typedef uint8 Rte_DT_SG_Zone_R_FAS_01_Group_10;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_01_Group_12
typedef uint8 Rte_DT_SG_Zone_R_FAS_01_Group_12;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_01_Group_13
typedef uint8 Rte_DT_SG_Zone_R_FAS_01_Group_13;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_01_Group_18
typedef boolean Rte_DT_SG_Zone_R_FAS_01_Group_18;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_01_Group_19
typedef boolean Rte_DT_SG_Zone_R_FAS_01_Group_19;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_01_Group_20
typedef boolean Rte_DT_SG_Zone_R_FAS_01_Group_20;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_01_Group_21
typedef boolean Rte_DT_SG_Zone_R_FAS_01_Group_21;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_01_Group_4
typedef boolean Rte_DT_SG_Zone_R_FAS_01_Group_4;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_01_Group_5
typedef boolean Rte_DT_SG_Zone_R_FAS_01_Group_5;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_01_Group_7
typedef boolean Rte_DT_SG_Zone_R_FAS_01_Group_7;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_01_Group_8
typedef boolean Rte_DT_SG_Zone_R_FAS_01_Group_8;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_01_Group_9
typedef boolean Rte_DT_SG_Zone_R_FAS_01_Group_9;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_02_Group_0
typedef boolean Rte_DT_SG_Zone_R_FAS_02_Group_0;

#  define Rte_TypeDef_Rte_DT_SG_Zone_R_FAS_02_Group_1
typedef uint8 Rte_DT_SG_Zone_R_FAS_02_Group_1;

#  define Rte_TypeDef_Rte_DT_SG_Zone_TCU_01_Group_4
typedef uint8 Rte_DT_SG_Zone_TCU_01_Group_4;

#  define Rte_TypeDef_TimeInMicrosecondsType
typedef uint32 TimeInMicrosecondsType;

#  define Rte_TypeDef_Whl_A_Z_AtAct_Est_Msec2
typedef sint16 Whl_A_Z_AtAct_Est_Msec2;

#  define Rte_TypeDef_Whl_A_Z_Fl_AtAct_Est_Msec2
typedef sint16 Whl_A_Z_Fl_AtAct_Est_Msec2;

#  define Rte_TypeDef_Whl_A_Z_Fr_AtAct_Est_Msec2
typedef sint16 Whl_A_Z_Fr_AtAct_Est_Msec2;

#  define Rte_TypeDef_Whl_A_Z_Rl_AtAct_Est_Msec2
typedef sint16 Whl_A_Z_Rl_AtAct_Est_Msec2;

#  define Rte_TypeDef_Whl_A_Z_Rr_AtAct_Est_Msec2
typedef sint16 Whl_A_Z_Rr_AtAct_Est_Msec2;

#  define Rte_TypeDef_Whl_Sts_AZ_Fl_Qfr_Na
typedef uint8 Whl_Sts_AZ_Fl_Qfr_Na;

#  define Rte_TypeDef_Whl_Sts_AZ_Fr_Qfr_Na
typedef uint8 Whl_Sts_AZ_Fr_Qfr_Na;

#  define Rte_TypeDef_Whl_Sts_AZ_Rl_Qfr_Na
typedef uint8 Whl_Sts_AZ_Rl_Qfr_Na;

#  define Rte_TypeDef_Whl_Sts_AZ_Rr_Qfr_Na
typedef uint8 Whl_Sts_AZ_Rr_Qfr_Na;

#  define Rte_TypeDef_BswM_ESH_Mode
typedef uint8 BswM_ESH_Mode;

#  define Rte_TypeDef_BswM_ESH_RunRequest
typedef uint8 BswM_ESH_RunRequest;

#  define Rte_TypeDef_Dcm_CommunicationModeType
typedef uint8 Dcm_CommunicationModeType;

#  define Rte_TypeDef_Dcm_ConfirmationStatusType
typedef uint8 Dcm_ConfirmationStatusType;

#  define Rte_TypeDef_Dcm_ControlDtcSettingType
typedef uint8 Dcm_ControlDtcSettingType;

#  define Rte_TypeDef_Dcm_DiagnosticSessionControlType
typedef uint8 Dcm_DiagnosticSessionControlType;

#  define Rte_TypeDef_Dcm_EcuResetType
typedef uint8 Dcm_EcuResetType;

#  define Rte_TypeDef_Dcm_ProtocolType
typedef uint8 Dcm_ProtocolType;

#  define Rte_TypeDef_Dcm_RequestKindType
typedef uint8 Dcm_RequestKindType;

#  define Rte_TypeDef_Dem_DTCKindType
typedef uint8 Dem_DTCKindType;

#  define Rte_TypeDef_Dem_DTCOriginType
typedef uint16 Dem_DTCOriginType;

#  define Rte_TypeDef_Dem_DTCSeverityType
typedef uint8 Dem_DTCSeverityType;

#  define Rte_TypeDef_Dem_DebounceResetStatusType
typedef uint8 Dem_DebounceResetStatusType;

#  define Rte_TypeDef_Dem_DebouncingStateType
typedef uint8 Dem_DebouncingStateType;

#  define Rte_TypeDef_Dem_InitMonitorReasonType
typedef uint8 Dem_InitMonitorReasonType;

#  define Rte_TypeDef_Dem_IumprDenomCondIdType
typedef uint8 Dem_IumprDenomCondIdType;

#  define Rte_TypeDef_Dem_IumprReadinessGroupType
typedef uint8 Dem_IumprReadinessGroupType;

#  define Rte_TypeDef_Dem_MonitorStatusType
typedef uint8 Dem_MonitorStatusType;

#  define Rte_TypeDef_EcuM_BootTargetType
typedef uint8 EcuM_BootTargetType;

#  define Rte_TypeDef_EcuM_ModeType
typedef uint8 EcuM_ModeType;

#  define Rte_TypeDef_EcuM_ShutdownCauseType
typedef uint8 EcuM_ShutdownCauseType;

#  define Rte_TypeDef_EcuM_StateType
typedef uint8 EcuM_StateType;

#  define Rte_TypeDef_rt_ary_dummy_sanpshot
typedef Rte_DT_rt_ary_dummy_sanpshot_0 rt_ary_dummy_sanpshot[1];

#  define Rte_TypeDef_ACD_SharedCalibrationData_Struct
typedef struct
{
  float32 ACD_INV_PRESSURE_NORM;
  float32 ACD_PUMP_DISPLACEMENT;
  float32 ACD_FDG_ANTIALIAS_LPF_FREQ;
  float32 ACD_FEST_LPF_FREQ;
  float32 ACD_INV_PUMP_DISPLACEMENT;
  rt_Array_float32_6 ACD_SYS_PE_TEMP_DATA_ARY;
  rt_Array_float32_6 ACD_SYS_PE_TEMP_BKP_ARY;
} ACD_SharedCalibrationData_Struct;

#  define Rte_TypeDef_AEOL_FCC_Struct
typedef struct
{
  rt_Array_float32_9 AEOL_FCC_PRESSURE_GAINADJ_DATA_ARY;
  rt_Array_float32_9 AEOL_FCC_PRESSURE_GAINADJ_BKP_ARY;
} AEOL_FCC_Struct;

#  define Rte_TypeDef_DCD_ESSM_FaaActuationCapability_Struct
typedef struct
{
  float32 DCD_FAA_CAPABILITY_RATE_LIMIT;
  uint16 DCD_CPBY_MRGN_FAIL_DEBOUNCE_TIME;
  uint16 DCD_CPBY_MRGN_FAIL_RECOVERY_TIME;
  rt_Array_float32_6 DCD_CPBYMRGN_TEMP_BP;
  rt_Array_float32_6 DCD_CPBYMRGN_CAP_TEMP;
  float32 DCD_FAA_ACTUNCPBY_DURING_DEBOUNCE;
  uint8 DCD_CPBY_MRGN_FAIL_THRESHOLD;
  uint8 DCD_CPBY_MRGN_RECOVERY_THRESHOLD;
  uint8 DCD_CAPABILITY_PLAUSIBILITY_THRESHOLD;
} DCD_ESSM_FaaActuationCapability_Struct;

#  define Rte_TypeDef_DCD_FDG_Gas_Leakage_Struct
typedef struct
{
  Fdg_Diag_Reaction_Enum DCD_DISABLE_GAS_LEAKAGE_REACTION;
  uint16 DCD_GLD_EVENT_DEBOUNCE_TIMEOUT;
  float32 DCD_GLD_SYS_PG_EST_LPF_FREQ;
  float32 DCD_GLD_OIL_TEMP_LPF_FREQ;
  uint16 DCD_GLD_INITN_TI_THD;
  rt_Array_float32_10 DCD_GLD_SYS_PG_THD;
  rt_Array_float32_10 DCD_GLD_OIL_TEMP_THD;
} DCD_FDG_Gas_Leakage_Struct;

#  define Rte_TypeDef_FCD_WAE_Struct
typedef struct
{
  rt_Array_float32_12 FCD_A_SNSR_XYZ_TRANSFORM_GAINS_TO_FAA_Z_MTX;
} FCD_WAE_Struct;

#  define Rte_TypeDef_FEOL_FCC_Struct
typedef struct
{
  rt_Array_float32_9 FEOL_FCC_FORCE_GAINADJ_DATA_ARY;
  rt_Array_float32_9 FEOL_FCC_FORCE_GAINADJ_BKP_ARY;
  rt_Array_float32_11 FEOL_FCC_DRAG_VELOCITY_TORQUE_BKP_ARY;
  rt_Array_float32_11 FEOL_FCC_DRAG_VELOCITY_TORQUE_DATA_ARY;
} FEOL_FCC_Struct;

#  define Rte_TypeDef_SG_FAS_FL_01_Group
typedef struct
{
  uint32 Ascc_Id_Sw_Fl_Na;
  Rte_DT_SG_FAS_FL_01_Group_1 Ascc_Mode_Fb_Fl_Na;
  Rte_DT_SG_FAS_FL_01_Group_2 Ascc_St_Fb_Fl_Na;
  uint8 Faa_25Hz_Msg_Fl_AlvCtr;
  uint16 Faa_25Hz_Msg_Fl_Crc;
  uint8 Faa_Amnt_ActunCpby_Fl_Na;
  uint8 Faa_Amnt_CpbyMrgn_Fl_Na;
  uint32 Faa_Id_Hw_Fl_Na;
  uint16 Faa_Pwr_UBus48_Fl_Watt;
  Rte_DT_SG_FAS_FL_01_Group_9 Faa_Sts_Pwr48_Fl_Qfr_Na;
  Rte_DT_SG_FAS_FL_01_Group_10 Faa_Sts_Sst_Fl_Na;
  uint32 Fas_Id_Sys_Fl_Na;
} SG_FAS_FL_01_Group;

#  define Rte_TypeDef_SG_FAS_FL_02_Group
typedef struct
{
  sint16 Whl_A_Z_Fl_AtAct_Est_Msec2;
  Rte_DT_SG_FAS_FL_02_Group_1 Whl_Sts_AZ_Fl_Qfr_Na;
} SG_FAS_FL_02_Group;

#  define Rte_TypeDef_SG_FAS_FR_01_Group
typedef struct
{
  uint32 Ascc_Id_Sw_Fr_Na;
  Rte_DT_SG_FAS_FR_01_Group_1 Ascc_Mode_Fb_Fr_Na;
  Rte_DT_SG_FAS_FR_01_Group_2 Ascc_St_Fb_Fr_Na;
  uint8 Faa_25Hz_Msg_Fr_AlvCtr;
  uint16 Faa_25Hz_Msg_Fr_Crc;
  uint8 Faa_Amnt_ActunCpby_Fr_Na;
  uint8 Faa_Amnt_CpbyMrgn_Fr_Na;
  uint32 Faa_Id_Hw_Fr_Na;
  uint16 Faa_Pwr_UBus48_Fr_Watt;
  Rte_DT_SG_FAS_FR_01_Group_9 Faa_Sts_Pwr48_Fr_Qfr_Na;
  Rte_DT_SG_FAS_FR_01_Group_10 Faa_Sts_Sst_Fr_Na;
  uint32 Fas_Id_Sys_Fr_Na;
} SG_FAS_FR_01_Group;

#  define Rte_TypeDef_SG_FAS_FR_02_Group
typedef struct
{
  sint16 Whl_A_Z_Fr_AtAct_Est_Msec2;
  Rte_DT_SG_FAS_FR_02_Group_1 Whl_Sts_AZ_Fr_Qfr_Na;
} SG_FAS_FR_02_Group;

#  define Rte_TypeDef_SG_FAS_RL_01_Group
typedef struct
{
  uint32 Ascc_Id_Sw_Rl_Na;
  Rte_DT_SG_FAS_RL_01_Group_1 Ascc_Mode_Fb_Rl_Na;
  Rte_DT_SG_FAS_RL_01_Group_2 Ascc_St_Fb_Rl_Na;
  uint8 Faa_25Hz_Msg_Rl_AlvCtr;
  uint16 Faa_25Hz_Msg_Rl_Crc;
  uint8 Faa_Amnt_ActunCpby_Rl_Na;
  uint8 Faa_Amnt_CpbyMrgn_Rl_Na;
  uint32 Faa_Id_Hw_Rl_Na;
  uint16 Faa_Pwr_UBus48_Rl_Watt;
  Rte_DT_SG_FAS_RL_01_Group_9 Faa_Sts_Pwr48_Rl_Qfr_Na;
  Rte_DT_SG_FAS_RL_01_Group_10 Faa_Sts_Sst_Rl_Na;
  uint32 Fas_Id_Sys_Rl_Na;
} SG_FAS_RL_01_Group;

#  define Rte_TypeDef_SG_FAS_RL_02_Group
typedef struct
{
  sint16 Whl_A_Z_Rl_AtAct_Est_Msec2;
  Rte_DT_SG_FAS_RL_02_Group_1 Whl_Sts_AZ_Rl_Qfr_Na;
} SG_FAS_RL_02_Group;

#  define Rte_TypeDef_SG_FAS_RR_01_Group
typedef struct
{
  uint32 Ascc_Id_Sw_Rr_Na;
  Rte_DT_SG_FAS_RR_01_Group_1 Ascc_Mode_Fb_Rr_Na;
  Rte_DT_SG_FAS_RR_01_Group_2 Ascc_St_Fb_Rr_Na;
  uint8 Faa_25Hz_Msg_Rr_AlvCtr;
  uint16 Faa_25Hz_Msg_Rr_Crc;
  uint8 Faa_Amnt_ActunCpby_Rr_Na;
  uint8 Faa_Amnt_CpbyMrgn_Rr_Na;
  uint32 Faa_Id_Hw_Rr_Na;
  uint16 Faa_Pwr_UBus48_Rr_Watt;
  Rte_DT_SG_FAS_RR_01_Group_9 Faa_Sts_Pwr48_Rr_Qfr_Na;
  Rte_DT_SG_FAS_RR_01_Group_10 Faa_Sts_Sst_Rr_Na;
  uint32 Fas_Id_Sys_Rr_Na;
} SG_FAS_RR_01_Group;

#  define Rte_TypeDef_SG_FAS_RR_02_Group
typedef struct
{
  sint16 Whl_A_Z_Rr_AtAct_Est_Msec2;
  Rte_DT_SG_FAS_RR_02_Group_1 Whl_Sts_AZ_Rr_Qfr_Na;
} SG_FAS_RR_02_Group;

#  define Rte_TypeDef_SG_ZONE_13C_Group
typedef struct
{
  Rte_DT_SG_ZONE_13C_Group_0 DrvState;
  Rte_DT_SG_ZONE_13C_Group_1 DrvState_SrvSts;
  Rte_DT_SG_ZONE_13C_Group_2 OperatorState;
  Rte_DT_SG_ZONE_13C_Group_3 OperatorState_SrvSts;
  Rte_DT_SG_ZONE_13C_Group_4 VehStateDetailed;
  Rte_DT_SG_ZONE_13C_Group_5 VehStateDetailed_SrvSts;
  uint8 ZONE_13C_CRC;
  uint8 ZONE_13C_MsgCntr;
} SG_ZONE_13C_Group;

#  define Rte_TypeDef_SG_ZONE_3B2_Group
typedef struct
{
  uint8 Day;
  uint8 Hr;
  uint8 Min;
  uint16 MSec;
  Rte_DT_SG_ZONE_3B2_Group_4 Mth;
  uint8 Sec;
  uint8 Yr;
} SG_ZONE_3B2_Group;

#  define Rte_TypeDef_SG_Zone_R_FAS_01_Group
typedef struct
{
  Rte_DT_SG_Zone_R_FAS_01_Group_0 Ascc_St_Req_Na;
  uint8 Asmc_100Hz_Msg_AlvCtr;
  uint16 Asmc_100Hz_Msg_Crc;
  uint16 Faa_Cons_Pwr_Limit_Watt;
  Rte_DT_SG_Zone_R_FAS_01_Group_4 Faa_Pwr48_ConsLmt_Actv_Na;
  Rte_DT_SG_Zone_R_FAS_01_Group_5 Faa_Pwr48_RegenLmt_Actv_Na;
  uint16 Faa_Regen_Pwr_Limit_Watt;
  Rte_DT_SG_Zone_R_FAS_01_Group_7 Faa_Sf_Diag_Mofr_Na;
  Rte_DT_SG_Zone_R_FAS_01_Group_8 Faa_Sts_Cons_Pwr_Limit_Qfr_Na;
  Rte_DT_SG_Zone_R_FAS_01_Group_9 Faa_Sts_Regen_Pwr_Limit_Qfr_Na;
  Rte_DT_SG_Zone_R_FAS_01_Group_10 Faa_Zl_Setg_Req_Na;
  uint32 Fas_Oper_Mins;
  Rte_DT_SG_Zone_R_FAS_01_Group_12 Fas_Sts_VehSpdLo_Na;
  Rte_DT_SG_Zone_R_FAS_01_Group_13 Fas_Sts_VehStaty_Na;
  uint16 Veh_Psn_Sus_AtAct_Fl_Mm;
  uint16 Veh_Psn_Sus_AtAct_Fr_Mm;
  uint16 Veh_Psn_Sus_AtAct_Rl_Mm;
  uint16 Veh_Psn_Sus_AtAct_Rr_Mm;
  Rte_DT_SG_Zone_R_FAS_01_Group_18 Veh_Sts_Psn_Sus_Fl_Qfr_Na;
  Rte_DT_SG_Zone_R_FAS_01_Group_19 Veh_Sts_Psn_Sus_Fr_Qfr_Na;
  Rte_DT_SG_Zone_R_FAS_01_Group_20 Veh_Sts_Psn_Sus_Rl_Qfr_Na;
  Rte_DT_SG_Zone_R_FAS_01_Group_21 Veh_Sts_Psn_Sus_Rr_Qfr_Na;
} SG_Zone_R_FAS_01_Group;

#  define Rte_TypeDef_SG_Zone_R_FAS_02_Group
typedef struct
{
  Rte_DT_SG_Zone_R_FAS_02_Group_0 Ascc_F_Prio_Na;
  Rte_DT_SG_Zone_R_FAS_02_Group_1 Ascc_Mode_Req_Na;
  uint8 Asmc_1000Hz_F_Cmd_AlvCtr;
  uint8 Asmc_1000Hz_F_Cmd_Crc;
  uint16 Faa_F_Fl_AtActr_Cmd_Nwt;
  uint16 Faa_F_Fr_AtActr_Cmd_Nwt;
  uint16 Faa_F_Rl_AtActr_Cmd_Nwt;
  uint16 Faa_F_Rr_AtActr_Cmd_Nwt;
} SG_Zone_R_FAS_02_Group;

#  define Rte_TypeDef_SG_Zone_TCU_01_Group
typedef struct
{
  uint8 Day;
  uint8 Hr;
  uint8 Min;
  uint16 MSec;
  Rte_DT_SG_Zone_TCU_01_Group_4 Mth;
  uint8 Sec;
  uint8 Yr;
} SG_Zone_TCU_01_Group;

# endif

#endif /* RTE_TYPE_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1039:  MISRA rule: Rule1.2
     Reason:     Same macro and function names are required to meet AUTOSAR spec.
     Risk:       No functional risk. Macro will be undefined before function definition.
     Prevention: Not required.

*/
