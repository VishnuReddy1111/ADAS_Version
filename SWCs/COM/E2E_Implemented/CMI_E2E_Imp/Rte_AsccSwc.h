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
 *             File:  Rte_AsccSwc.h
 *           Config:  StartApplication.dpa
 *        SW-C Type:  AsccSwc
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2300382
 *
 *      Description:  Application header file for SW-C <AsccSwc> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_ASCCSWC_H
# define RTE_ASCCSWC_H

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

# include "Rte_AsccSwc_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_AsccSwc
{
  /* Data Handles section */
  P2VAR(Rte_DE_Acab_Zl_Setg_Req_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Init_Acab_Zl_Setg_Req_Acab_Zl_Setg_Req;
  P2VAR(Rte_DE_Essm_Afic_Mode_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Init_Essm_Afic_Mode_Essm_Afic_Mode;
  P2VAR(Rte_DE_Acab_Veh_Psn_Sus_AtAct_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Acab_Veh_Psn_Sus_AtAct_Acab_Veh_Psn_Sus_AtAct;
  P2VAR(Rte_DE_Acab_Zl_Setg_Req_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Acab_Zl_Setg_Req_Acab_Zl_Setg_Req;
  P2VAR(Rte_DE_Ascc_Emm_Sts_Veh_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Ascc_Emm_Sts_Veh_Ascc_Emm_Sts_Veh;
  P2VAR(Rte_DE_Ascc_Esdd_St_Req_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Ascc_Esdd_St_Req_Ascc_Esdd_St_Req;
  P2VAR(Rte_DE_Bsw_ProgrammingReq_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Bsw_ProgrammingReq_Bsw_ProgrammingReq;
  P2VAR(Rte_DE_Esdd_Accel_AtAvPcb_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Esdd_Accel_AtAvPcb_Esdd_Accel_AtAvPcb;
  P2VAR(Rte_DE_Esdd_Ascc_St_Fb_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Esdd_Ascc_St_Fb_Esdd_Ascc_St_Fb;
  P2VAR(Rte_DE_Esdd_Av_Pg_Var_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Esdd_Av_Pg_Var_Esdd_Av_Pg_Var;
  P2VAR(Rte_DE_Esdd_Emm_Pwr_Lim_Tq_Dmd_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Esdd_Emm_Pwr_Lim_Tq_Dmd_Esdd_Emm_Pwr_Lim_Tq_Dmd;
  P2VAR(Rte_DE_Esdd_PgSnsr_Serial_Data_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Esdd_PgSnsr_Serial_Data_Esdd_PgSnsr_Serial_Data;
  P2VAR(Rte_DE_Esdd_RotorSnsr_Data_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Esdd_RotorSnsr_Data_Esdd_RotorSnsr_Data;
  P2VAR(Rte_DE_Essm_Afic_Mode_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Essm_Afic_Mode_Essm_Afic_Mode;
  P2VAR(Rte_DE_Essm_Ign_Cycle_Cntr_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Essm_Ign_Cycle_Cntr_Essm_Ign_Cycle_Cntr;
  P2VAR(Rte_DE_Fcc_Cap_Plausibility_Diag_Status_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Fcc_Cpby_Plausibility_Diag_Status_Fcc_Cpby_Plausibility_Diag_Status;
  P2VAR(Rte_DE_Pab_Oil_Temp_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Pab_Oil_Temp_Pab_Oil_Temp;
  P2VAR(Rte_DE_Pab_PressureSensor_PreQfr_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_Pab_PressureSensor_PreQfr_Pab_PressureSensor_PreQfr;
  P2VAR(Rte_DE_SG_ZONE_13C_Group_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_SG_ZONE_13C_Group_SG_ZONE_13C_Group;
  P2VAR(Rte_DE_SG_ZONE_3A9_Group_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_SG_ZONE_3A9_Group_SG_ZONE_3A9_Group;
  P2VAR(Rte_DE_SG_ZONE_3B2_Group_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_1ms_SG_ZONE_3B2_Group_SG_ZONE_3B2_Group;
  P2VAR(Rte_DE_ACD_SharedCalibrationData_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Acd_Shared_Param_Acd_Shared_Param;
  P2VAR(Rte_DE_Cse_F_Estn_Lpf_Data_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Cse_F_Estn_Lpf_Data_Cse_F_Estn_Lpf_Data;
  P2VAR(Rte_DE_Cse_Pg_Sys_Estn_Vldy_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Cse_Pg_Sys_Estn_Vldy_Cse_Pg_Sys_Estn_Vldy;
  P2VAR(Rte_DE_Cse_Sts_F_Estn_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Cse_Sts_F_Estn_Cse_Sts_F_Estn;
  P2VAR(Rte_DE_Cse_Sys_Pg_Est_Data_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Cse_Sys_Pg_Est_Data_Cse_Sys_Pg_Est_Data;
  P2VAR(Rte_DE_Csp_Lpf_Data_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Csp_Lpf_Data_Csp_Lpf_Data;
  P2VAR(Rte_DE_Csp_Pg_Var_AtHrm_Vldy_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Csp_Pg_Var_AtHrm_Vldy_Csp_Pg_Var_AtHrm_Vldy;
  P2VAR(Rte_DE_Csp_Procsd_Data_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Csp_Procsd_Data_Csp_Procsd_Data;
  P2VAR(Rte_DE_Csp_Procsd_Veh_Psn_Sus_AtAct_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Csp_Procsd_Veh_Psn_Sus_AtAct_Csp_Procsd_Veh_Psn_Sus_AtAct;
  P2VAR(Rte_DE_Esdd_Emm_Temp_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Esdd_Emm_Temp_Esdd_Emm_Temp;
  P2VAR(Rte_DE_Esdd_Emot_Tq_Dlvrd_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Esdd_Emot_Tq_Dlvrd_Esdd_Emot_Tq_Dlvrd;
  P2VAR(Rte_DE_Esdd_Peak_Tq_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Esdd_Peak_Tq_Esdd_Peak_Tq;
  P2VAR(Rte_DE_Esdd_Sply_Data_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Esdd_Sply_Data_Esdd_Sply_Data;
  P2VAR(Rte_DE_Fcc_F_AtActr_Limit_Lpf_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Fcc_F_AtActr_Limit_Lpf_Fcc_F_AtActr_Limit_Lpf;
  P2VAR(Rte_DE_Fcc_F_Cpby_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Fcc_F_Cpby_Data_Fcc_F_Cpby_Data;
  P2VAR(Rte_DE_Nvm_CustomerHwNumbers_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Nvm_Customer_Hw_Numbers_Nvm_Customer_Hw_Numbers;
  P2VAR(Rte_DE_Nvm_HardwareNumbers_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Nvm_HardwareNumbers_Nvm_HardwareNumbers;
  P2VAR(Rte_DE_Uab_Total_Oper_Cycl_Cntr_Struct, TYPEDEF, RTE_ASCCSWC_APPL_VAR) AsccSwc_Runnable_2ms_Uab_Total_Oper_Cycl_Cntr_Uab_Total_Oper_Cycl_Cntr;
  /* PIM Handles section */
  P2VAR(Nvm_CustomerHwNumbers_Struct, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AsccSwc_CUSTOMER_HW_NUMBERS_NVM_PIM;
  P2VAR(Nvm_HardwareNumbers_Struct, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AsccSwc_HW_NUMBERS_NVM_PIM;
  P2VAR(Essm_Ign_Cycle_Cntr_Struct, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AsccSwc_IGNITION_CYCLE_CNTR_NVM_PIM;
  P2VAR(Uab_Total_Oper_Cycl_Cntr_Struct, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AsccSwc_OPERATION_CYCLE_CNTR_NVM_PIM;
  P2VAR(Fdg_Psm_Max_Err_Struct, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_AsccSwc_PSM_MAX_ERROR_PA_NVM_PIM;
  /* IRV Handles section */
  P2VAR(Essm_Afic_Mode_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Init_IrvEssm_Afic_Mode;
  P2VAR(Essm_St_Fb_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Init_IrvEssm_St_Fb;
  P2VAR(Fdg_Force_Deviation_Diag_Status_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Init_IrvFdg_Force_Deviation_Diag_Status;
  P2VAR(Fdg_Gas_Leakage_Diag_Status_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Init_IrvFdg_Gas_Leakage_Diag_Status;
  P2VAR(Fdg_Oil_Leakage_Diag_Status_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Init_IrvFdg_Oil_Leakage_Diag_Status;
  P2VAR(Bsw_ZONE_13C_Raw_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Runnable_1ms_IrvBsw_ZONE_13C_Raw;
  P2VAR(Essm_Afic_Mode_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Runnable_1ms_IrvEssm_Afic_Mode;
  P2VAR(Essm_St_Fb_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Runnable_1ms_IrvEssm_St_Fb;
  P2VAR(Fdg_Force_Deviation_Diag_Status_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Runnable_1ms_IrvFdg_Force_Deviation_Diag_Status;
  P2VAR(Fdg_Gas_Leakage_Diag_Status_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Runnable_1ms_IrvFdg_Gas_Leakage_Diag_Status;
  P2VAR(Fdg_Oil_Leakage_Diag_Status_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Runnable_1ms_IrvFdg_Oil_Leakage_Diag_Status;
  P2VAR(Bsw_ZONE_13C_Raw_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Runnable_2ms_IrvBsw_ZONE_13C_Raw;
  P2VAR(Essm_Afic_Mode_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Runnable_2ms_IrvEssm_Afic_Mode;
  P2VAR(Essm_St_Fb_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Runnable_2ms_IrvEssm_St_Fb;
  P2VAR(Fdg_Force_Deviation_Diag_Status_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Runnable_2ms_IrvFdg_Force_Deviation_Diag_Status;
  P2VAR(Fdg_Gas_Leakage_Diag_Status_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Runnable_2ms_IrvFdg_Gas_Leakage_Diag_Status;
  P2VAR(Fdg_Oil_Leakage_Diag_Status_Struct, TYPEDEF, RTE_VAR_NOINIT) Irv_AsccSwc_Runnable_2ms_IrvFdg_Oil_Leakage_Diag_Status;
  /* Vendor specific section */
};
typedef struct Rte_CDS_AsccSwc Rte_CDS_AsccSwc;

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONSTP2CONST(struct Rte_CDS_AsccSwc, RTE_CONST, RTE_CONST) Rte_Inst_AsccSwc;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

typedef RTE_INSTANCECONSTP2CONST(struct Rte_CDS_AsccSwc, TYPEDEF, RTE_CONST) Rte_Instance; /* PRQA S 1507 */ /* MD_Rte_1507 */


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AsccSwc_SG_Zone_R_FAS_01_Group_SG_Zone_R_FAS_01_Group(P2VAR(SG_Zone_R_FAS_01_Group_Struct, AUTOMATIC, RTE_ASCCSWC_APPL_VAR) data, P2VAR(Std_TransformerError, AUTOMATIC, RTE_ASCCSWC_APPL_VAR) transformerError); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_AsccSwc_SG_Zone_R_FAS_02_Group_SG_Zone_R_FAS_02_Group(P2VAR(SG_Zone_R_FAS_02_Group_Struct, AUTOMATIC, RTE_ASCCSWC_APPL_VAR) data, P2VAR(Std_TransformerError, AUTOMATIC, RTE_ASCCSWC_APPL_VAR) transformerError); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(boolean, RTE_CODE) Rte_IsUpdated_AsccSwc_SG_Zone_R_FAS_01_Group_SG_Zone_R_FAS_01_Group(void);
FUNC(boolean, RTE_CODE) Rte_IsUpdated_AsccSwc_SG_Zone_R_FAS_02_Group_SG_Zone_R_FAS_02_Group(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AsccSwc_SG_FAS_FL_01_Group_SG_FAS_FL_01_Group(P2CONST(SG_FAS_FL_01_Group_Struct, AUTOMATIC, RTE_ASCCSWC_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AsccSwc_SG_FAS_FR_01_Group_SG_FAS_FR_01_Group(P2CONST(SG_FAS_FR_01_Group_Struct, AUTOMATIC, RTE_ASCCSWC_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AsccSwc_SG_FAS_RL_01_Group_SG_FAS_RL_01_Group(P2CONST(SG_FAS_RL_01_Group_Struct, AUTOMATIC, RTE_ASCCSWC_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_AsccSwc_SG_FAS_RR_01_Group_SG_FAS_RR_01_Group(P2CONST(SG_FAS_RR_01_Group_Struct, AUTOMATIC, RTE_ASCCSWC_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_AsccSwc_msBsw_Control_Debug_Msg_Tx_Bsw_Control_Debug_Msg_Tx_Enum(uint8 nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_AsccSwc_msNm_Network_Release_Nm_Network_Release_Enum(uint8 nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_ACAB_ZONE_R_FAS_01_E2E_AC_ERROR_EVENT_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_ACAB_ZONE_R_FAS_01_E2E_CRC_ERROR_EVENT_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_ACAB_ZONE_R_FAS_01_LOSTCOMM_EVENT_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_ACAB_ZONE_R_FAS_02_E2E_AC_ERROR_EVENT_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_ACAB_ZONE_R_FAS_02_E2E_CRC_ERROR_EVENT_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_ACAB_ZONE_R_FAS_02_LOSTCOMM_EVENT_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_CUSTOMER_HW_NUMBERS_NVM_GetErrorStatus(P2VAR(uint8, AUTOMATIC, RTE_ASCCSWC_APPL_VAR) RequestResultPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_CUSTOMER_HW_NUMBERS_NVM_WriteBlock(NvM_DstPtrType SrcPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_FDG_FORCE_DEVIATION_DETECTED_EVENT_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_FDG_GAS_LEAKAGE_DETECTED_EVENT_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_FDG_OIL_LEAKAGE_DETECTED_EVENT_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_HW_NUMBERS_NVM_GetErrorStatus(P2VAR(uint8, AUTOMATIC, RTE_ASCCSWC_APPL_VAR) RequestResultPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_HW_NUMBERS_NVM_WriteBlock(NvM_DstPtrType SrcPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_IGNITION_CYCLE_CNTR_NVM_GetErrorStatus(P2VAR(uint8, AUTOMATIC, RTE_ASCCSWC_APPL_VAR) RequestResultPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_IGNITION_CYCLE_CNTR_NVM_WriteBlock(NvM_DstPtrType SrcPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_OPERATION_CYCLE_CNTR_NVM_GetErrorStatus(P2VAR(uint8, AUTOMATIC, RTE_ASCCSWC_APPL_VAR) RequestResultPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_OPERATION_CYCLE_CNTR_NVM_WriteBlock(NvM_DstPtrType SrcPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_PAB_DIAGNOSTIC_STATUS_EVENT_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_PAB_TEMPERATURE_EVENT_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_PHASE_TEMP_LOW_CAPABILITY_MARGIN_EVENT_SetEventStatus(Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_PSM_MAX_ERROR_PA_NVM_GetErrorStatus(P2VAR(uint8, AUTOMATIC, RTE_ASCCSWC_APPL_VAR) RequestResultPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_PSM_MAX_ERROR_PA_NVM_WriteBlock(NvM_DstPtrType SrcPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_AsccSwc_UAB_OPERATION_CYCLE_SetOperationCycleState(Dem_OperationCycleStateType CycleState); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Result_AsccSwc_CUSTOMER_HW_NUMBERS_NVM_WriteBlock(); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Result_AsccSwc_HW_NUMBERS_NVM_WriteBlock(); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Result_AsccSwc_IGNITION_CYCLE_CNTR_NVM_WriteBlock(); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Result_AsccSwc_OPERATION_CYCLE_CNTR_NVM_WriteBlock(); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Result_AsccSwc_PSM_MAX_ERROR_PA_NVM_WriteBlock(); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IFeedback_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/


# define Rte_IWrite_AsccSwc_Init_Acab_Zl_Setg_Req_Acab_Zl_Setg_Req(data) \
  ( \
    Rte_Inst_AsccSwc->AsccSwc_Init_Acab_Zl_Setg_Req_Acab_Zl_Setg_Req->value = *(data) \
  )


# define Rte_IWriteRef_AsccSwc_Init_Acab_Zl_Setg_Req_Acab_Zl_Setg_Req() \
  (&Rte_Inst_AsccSwc->AsccSwc_Init_Acab_Zl_Setg_Req_Acab_Zl_Setg_Req->value)


# define Rte_IWrite_AsccSwc_Init_Essm_Afic_Mode_Essm_Afic_Mode(data) \
  ( \
    Rte_Inst_AsccSwc->AsccSwc_Init_Essm_Afic_Mode_Essm_Afic_Mode->value = *(data) \
  )


# define Rte_IWriteRef_AsccSwc_Init_Essm_Afic_Mode_Essm_Afic_Mode() \
  (&Rte_Inst_AsccSwc->AsccSwc_Init_Essm_Afic_Mode_Essm_Afic_Mode->value)


# define Rte_IRead_AsccSwc_Runnable_1ms_Bsw_ProgrammingReq_Bsw_ProgrammingReq() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Bsw_ProgrammingReq_Bsw_ProgrammingReq->value)


# define Rte_IRead_AsccSwc_Runnable_1ms_Esdd_Accel_AtAvPcb_Esdd_Accel_AtAvPcb() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Esdd_Accel_AtAvPcb_Esdd_Accel_AtAvPcb->value)


# define Rte_IRead_AsccSwc_Runnable_1ms_Esdd_Ascc_St_Fb_Esdd_Ascc_St_Fb() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Esdd_Ascc_St_Fb_Esdd_Ascc_St_Fb->value)


# define Rte_IRead_AsccSwc_Runnable_1ms_Esdd_Av_Pg_Var_Esdd_Av_Pg_Var() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Esdd_Av_Pg_Var_Esdd_Av_Pg_Var->value)


# define Rte_IRead_AsccSwc_Runnable_1ms_Esdd_Emm_Pwr_Lim_Tq_Dmd_Esdd_Emm_Pwr_Lim_Tq_Dmd() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Esdd_Emm_Pwr_Lim_Tq_Dmd_Esdd_Emm_Pwr_Lim_Tq_Dmd->value)


# define Rte_IRead_AsccSwc_Runnable_1ms_Esdd_PgSnsr_Serial_Data_Esdd_PgSnsr_Serial_Data() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Esdd_PgSnsr_Serial_Data_Esdd_PgSnsr_Serial_Data->value)


# define Rte_IRead_AsccSwc_Runnable_1ms_Esdd_RotorSnsr_Data_Esdd_RotorSnsr_Data() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Esdd_RotorSnsr_Data_Esdd_RotorSnsr_Data->value)


# define Rte_IRead_AsccSwc_Runnable_1ms_Fcc_Cpby_Plausibility_Diag_Status_Fcc_Cpby_Plausibility_Diag_Status() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Fcc_Cpby_Plausibility_Diag_Status_Fcc_Cpby_Plausibility_Diag_Status->value)


# define Rte_IRead_AsccSwc_Runnable_1ms_Pab_PressureSensor_PreQfr_Pab_PressureSensor_PreQfr() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Pab_PressureSensor_PreQfr_Pab_PressureSensor_PreQfr->value)


# define Rte_IRead_AsccSwc_Runnable_1ms_SG_ZONE_13C_Group_SG_ZONE_13C_Group() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_SG_ZONE_13C_Group_SG_ZONE_13C_Group->value)


# define Rte_IRead_AsccSwc_Runnable_1ms_SG_ZONE_3A9_Group_SG_ZONE_3A9_Group() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_SG_ZONE_3A9_Group_SG_ZONE_3A9_Group->value)


# define Rte_IRead_AsccSwc_Runnable_1ms_SG_ZONE_3B2_Group_SG_ZONE_3B2_Group() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_SG_ZONE_3B2_Group_SG_ZONE_3B2_Group->value)


# define Rte_IWrite_AsccSwc_Runnable_1ms_Acab_Veh_Psn_Sus_AtAct_Acab_Veh_Psn_Sus_AtAct(data) \
  ( \
    Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Acab_Veh_Psn_Sus_AtAct_Acab_Veh_Psn_Sus_AtAct->value = *(data) \
  )


# define Rte_IWriteRef_AsccSwc_Runnable_1ms_Acab_Veh_Psn_Sus_AtAct_Acab_Veh_Psn_Sus_AtAct() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Acab_Veh_Psn_Sus_AtAct_Acab_Veh_Psn_Sus_AtAct->value)


# define Rte_IWrite_AsccSwc_Runnable_1ms_Acab_Zl_Setg_Req_Acab_Zl_Setg_Req(data) \
  ( \
    Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Acab_Zl_Setg_Req_Acab_Zl_Setg_Req->value = *(data) \
  )


# define Rte_IWriteRef_AsccSwc_Runnable_1ms_Acab_Zl_Setg_Req_Acab_Zl_Setg_Req() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Acab_Zl_Setg_Req_Acab_Zl_Setg_Req->value)


# define Rte_IWrite_AsccSwc_Runnable_1ms_Ascc_Emm_Sts_Veh_Ascc_Emm_Sts_Veh(data) \
  ( \
    Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Ascc_Emm_Sts_Veh_Ascc_Emm_Sts_Veh->value = *(data) \
  )


# define Rte_IWriteRef_AsccSwc_Runnable_1ms_Ascc_Emm_Sts_Veh_Ascc_Emm_Sts_Veh() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Ascc_Emm_Sts_Veh_Ascc_Emm_Sts_Veh->value)


# define Rte_IWrite_AsccSwc_Runnable_1ms_Ascc_Esdd_St_Req_Ascc_Esdd_St_Req(data) \
  ( \
    Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Ascc_Esdd_St_Req_Ascc_Esdd_St_Req->value = *(data) \
  )


# define Rte_IWriteRef_AsccSwc_Runnable_1ms_Ascc_Esdd_St_Req_Ascc_Esdd_St_Req() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Ascc_Esdd_St_Req_Ascc_Esdd_St_Req->value)


# define Rte_IWrite_AsccSwc_Runnable_1ms_Essm_Afic_Mode_Essm_Afic_Mode(data) \
  ( \
    Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Essm_Afic_Mode_Essm_Afic_Mode->value = *(data) \
  )


# define Rte_IWriteRef_AsccSwc_Runnable_1ms_Essm_Afic_Mode_Essm_Afic_Mode() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Essm_Afic_Mode_Essm_Afic_Mode->value)


# define Rte_IWrite_AsccSwc_Runnable_1ms_Essm_Ign_Cycle_Cntr_Essm_Ign_Cycle_Cntr(data) \
  ( \
    Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Essm_Ign_Cycle_Cntr_Essm_Ign_Cycle_Cntr->value = *(data) \
  )


# define Rte_IWriteRef_AsccSwc_Runnable_1ms_Essm_Ign_Cycle_Cntr_Essm_Ign_Cycle_Cntr() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Essm_Ign_Cycle_Cntr_Essm_Ign_Cycle_Cntr->value)


# define Rte_IWrite_AsccSwc_Runnable_1ms_Pab_Oil_Temp_Pab_Oil_Temp(data) \
  ( \
    Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Pab_Oil_Temp_Pab_Oil_Temp->value = *(data) \
  )


# define Rte_IWriteRef_AsccSwc_Runnable_1ms_Pab_Oil_Temp_Pab_Oil_Temp() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_1ms_Pab_Oil_Temp_Pab_Oil_Temp->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Acd_Shared_Param_Acd_Shared_Param() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Acd_Shared_Param_Acd_Shared_Param->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Cse_F_Estn_Lpf_Data_Cse_F_Estn_Lpf_Data() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Cse_F_Estn_Lpf_Data_Cse_F_Estn_Lpf_Data->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Cse_Pg_Sys_Estn_Vldy_Cse_Pg_Sys_Estn_Vldy() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Cse_Pg_Sys_Estn_Vldy_Cse_Pg_Sys_Estn_Vldy->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Cse_Sts_F_Estn_Cse_Sts_F_Estn() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Cse_Sts_F_Estn_Cse_Sts_F_Estn->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Cse_Sys_Pg_Est_Data_Cse_Sys_Pg_Est_Data() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Cse_Sys_Pg_Est_Data_Cse_Sys_Pg_Est_Data->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Csp_Lpf_Data_Csp_Lpf_Data() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Csp_Lpf_Data_Csp_Lpf_Data->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Csp_Pg_Var_AtHrm_Vldy_Csp_Pg_Var_AtHrm_Vldy() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Csp_Pg_Var_AtHrm_Vldy_Csp_Pg_Var_AtHrm_Vldy->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Csp_Procsd_Data_Csp_Procsd_Data() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Csp_Procsd_Data_Csp_Procsd_Data->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Csp_Procsd_Veh_Psn_Sus_AtAct_Csp_Procsd_Veh_Psn_Sus_AtAct() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Csp_Procsd_Veh_Psn_Sus_AtAct_Csp_Procsd_Veh_Psn_Sus_AtAct->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Esdd_Emm_Temp_Esdd_Emm_Temp() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Esdd_Emm_Temp_Esdd_Emm_Temp->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Esdd_Emot_Tq_Dlvrd_Esdd_Emot_Tq_Dlvrd() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Esdd_Emot_Tq_Dlvrd_Esdd_Emot_Tq_Dlvrd->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Esdd_Peak_Tq_Esdd_Peak_Tq() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Esdd_Peak_Tq_Esdd_Peak_Tq->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Esdd_Sply_Data_Esdd_Sply_Data() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Esdd_Sply_Data_Esdd_Sply_Data->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Fcc_F_AtActr_Limit_Lpf_Fcc_F_AtActr_Limit_Lpf() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Fcc_F_AtActr_Limit_Lpf_Fcc_F_AtActr_Limit_Lpf->value)


# define Rte_IRead_AsccSwc_Runnable_2ms_Fcc_F_Cpby_Data_Fcc_F_Cpby_Data() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Fcc_F_Cpby_Data_Fcc_F_Cpby_Data->value)


# define Rte_IWrite_AsccSwc_Runnable_2ms_Nvm_Customer_Hw_Numbers_Nvm_Customer_Hw_Numbers(data) \
  ( \
    Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Nvm_Customer_Hw_Numbers_Nvm_Customer_Hw_Numbers->value = *(data) \
  )


# define Rte_IWriteRef_AsccSwc_Runnable_2ms_Nvm_Customer_Hw_Numbers_Nvm_Customer_Hw_Numbers() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Nvm_Customer_Hw_Numbers_Nvm_Customer_Hw_Numbers->value)


# define Rte_IWrite_AsccSwc_Runnable_2ms_Nvm_HardwareNumbers_Nvm_HardwareNumbers(data) \
  ( \
    Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Nvm_HardwareNumbers_Nvm_HardwareNumbers->value = *(data) \
  )


# define Rte_IWriteRef_AsccSwc_Runnable_2ms_Nvm_HardwareNumbers_Nvm_HardwareNumbers() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Nvm_HardwareNumbers_Nvm_HardwareNumbers->value)


# define Rte_IWrite_AsccSwc_Runnable_2ms_Uab_Total_Oper_Cycl_Cntr_Uab_Total_Oper_Cycl_Cntr(data) \
  ( \
    Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Uab_Total_Oper_Cycl_Cntr_Uab_Total_Oper_Cycl_Cntr->value = *(data) \
  )


# define Rte_IWriteRef_AsccSwc_Runnable_2ms_Uab_Total_Oper_Cycl_Cntr_Uab_Total_Oper_Cycl_Cntr() \
  (&Rte_Inst_AsccSwc->AsccSwc_Runnable_2ms_Uab_Total_Oper_Cycl_Cntr_Uab_Total_Oper_Cycl_Cntr->value)


/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_SG_Zone_R_FAS_01_Group_SG_Zone_R_FAS_01_Group Rte_Read_AsccSwc_SG_Zone_R_FAS_01_Group_SG_Zone_R_FAS_01_Group
# define Rte_Read_SG_Zone_R_FAS_02_Group_SG_Zone_R_FAS_02_Group Rte_Read_AsccSwc_SG_Zone_R_FAS_02_Group_SG_Zone_R_FAS_02_Group


/**********************************************************************************************************************
 * Rte_IsUpdated_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_IsUpdated_SG_Zone_R_FAS_01_Group_SG_Zone_R_FAS_01_Group Rte_IsUpdated_AsccSwc_SG_Zone_R_FAS_01_Group_SG_Zone_R_FAS_01_Group
# define Rte_IsUpdated_SG_Zone_R_FAS_02_Group_SG_Zone_R_FAS_02_Group Rte_IsUpdated_AsccSwc_SG_Zone_R_FAS_02_Group_SG_Zone_R_FAS_02_Group


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_SG_FAS_FL_01_Group_SG_FAS_FL_01_Group Rte_Write_AsccSwc_SG_FAS_FL_01_Group_SG_FAS_FL_01_Group
# define Rte_Write_SG_FAS_FR_01_Group_SG_FAS_FR_01_Group Rte_Write_AsccSwc_SG_FAS_FR_01_Group_SG_FAS_FR_01_Group
# define Rte_Write_SG_FAS_RL_01_Group_SG_FAS_RL_01_Group Rte_Write_AsccSwc_SG_FAS_RL_01_Group_SG_FAS_RL_01_Group
# define Rte_Write_SG_FAS_RR_01_Group_SG_FAS_RR_01_Group Rte_Write_AsccSwc_SG_FAS_RR_01_Group_SG_FAS_RR_01_Group


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Switch_msBsw_Control_Debug_Msg_Tx_Bsw_Control_Debug_Msg_Tx_Enum Rte_Switch_AsccSwc_msBsw_Control_Debug_Msg_Tx_Bsw_Control_Debug_Msg_Tx_Enum
# define Rte_Switch_msNm_Network_Release_Nm_Network_Release_Enum Rte_Switch_AsccSwc_msNm_Network_Release_Nm_Network_Release_Enum


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_ACAB_ZONE_R_FAS_01_E2E_AC_ERROR_EVENT_SetEventStatus Rte_Call_AsccSwc_ACAB_ZONE_R_FAS_01_E2E_AC_ERROR_EVENT_SetEventStatus
# define Rte_Call_ACAB_ZONE_R_FAS_01_E2E_CRC_ERROR_EVENT_SetEventStatus Rte_Call_AsccSwc_ACAB_ZONE_R_FAS_01_E2E_CRC_ERROR_EVENT_SetEventStatus
# define Rte_Call_ACAB_ZONE_R_FAS_01_LOSTCOMM_EVENT_SetEventStatus Rte_Call_AsccSwc_ACAB_ZONE_R_FAS_01_LOSTCOMM_EVENT_SetEventStatus
# define Rte_Call_ACAB_ZONE_R_FAS_02_E2E_AC_ERROR_EVENT_SetEventStatus Rte_Call_AsccSwc_ACAB_ZONE_R_FAS_02_E2E_AC_ERROR_EVENT_SetEventStatus
# define Rte_Call_ACAB_ZONE_R_FAS_02_E2E_CRC_ERROR_EVENT_SetEventStatus Rte_Call_AsccSwc_ACAB_ZONE_R_FAS_02_E2E_CRC_ERROR_EVENT_SetEventStatus
# define Rte_Call_ACAB_ZONE_R_FAS_02_LOSTCOMM_EVENT_SetEventStatus Rte_Call_AsccSwc_ACAB_ZONE_R_FAS_02_LOSTCOMM_EVENT_SetEventStatus
# define Rte_Call_CUSTOMER_HW_NUMBERS_NVM_GetErrorStatus Rte_Call_AsccSwc_CUSTOMER_HW_NUMBERS_NVM_GetErrorStatus
# define Rte_Call_CUSTOMER_HW_NUMBERS_NVM_WriteBlock Rte_Call_AsccSwc_CUSTOMER_HW_NUMBERS_NVM_WriteBlock
# define Rte_Call_FDG_FORCE_DEVIATION_DETECTED_EVENT_SetEventStatus Rte_Call_AsccSwc_FDG_FORCE_DEVIATION_DETECTED_EVENT_SetEventStatus
# define Rte_Call_FDG_GAS_LEAKAGE_DETECTED_EVENT_SetEventStatus Rte_Call_AsccSwc_FDG_GAS_LEAKAGE_DETECTED_EVENT_SetEventStatus
# define Rte_Call_FDG_OIL_LEAKAGE_DETECTED_EVENT_SetEventStatus Rte_Call_AsccSwc_FDG_OIL_LEAKAGE_DETECTED_EVENT_SetEventStatus
# define Rte_Call_HW_NUMBERS_NVM_GetErrorStatus Rte_Call_AsccSwc_HW_NUMBERS_NVM_GetErrorStatus
# define Rte_Call_HW_NUMBERS_NVM_WriteBlock Rte_Call_AsccSwc_HW_NUMBERS_NVM_WriteBlock
# define Rte_Call_IGNITION_CYCLE_CNTR_NVM_GetErrorStatus Rte_Call_AsccSwc_IGNITION_CYCLE_CNTR_NVM_GetErrorStatus
# define Rte_Call_IGNITION_CYCLE_CNTR_NVM_WriteBlock Rte_Call_AsccSwc_IGNITION_CYCLE_CNTR_NVM_WriteBlock
# define Rte_Call_OPERATION_CYCLE_CNTR_NVM_GetErrorStatus Rte_Call_AsccSwc_OPERATION_CYCLE_CNTR_NVM_GetErrorStatus
# define Rte_Call_OPERATION_CYCLE_CNTR_NVM_WriteBlock Rte_Call_AsccSwc_OPERATION_CYCLE_CNTR_NVM_WriteBlock
# define Rte_Call_PAB_DIAGNOSTIC_STATUS_EVENT_SetEventStatus Rte_Call_AsccSwc_PAB_DIAGNOSTIC_STATUS_EVENT_SetEventStatus
# define Rte_Call_PAB_TEMPERATURE_EVENT_SetEventStatus Rte_Call_AsccSwc_PAB_TEMPERATURE_EVENT_SetEventStatus
# define Rte_Call_PHASE_TEMP_LOW_CAPABILITY_MARGIN_EVENT_SetEventStatus Rte_Call_AsccSwc_PHASE_TEMP_LOW_CAPABILITY_MARGIN_EVENT_SetEventStatus
# define Rte_Call_PSM_MAX_ERROR_PA_NVM_GetErrorStatus Rte_Call_AsccSwc_PSM_MAX_ERROR_PA_NVM_GetErrorStatus
# define Rte_Call_PSM_MAX_ERROR_PA_NVM_WriteBlock Rte_Call_AsccSwc_PSM_MAX_ERROR_PA_NVM_WriteBlock
# define Rte_Call_UAB_OPERATION_CYCLE_SetOperationCycleState Rte_Call_AsccSwc_UAB_OPERATION_CYCLE_SetOperationCycleState


/**********************************************************************************************************************
 * Rte_Result_<p>_<o> (asynchronous C/S result)
 *********************************************************************************************************************/
# define Rte_Result_CUSTOMER_HW_NUMBERS_NVM_WriteBlock Rte_Result_AsccSwc_CUSTOMER_HW_NUMBERS_NVM_WriteBlock
# define Rte_Result_HW_NUMBERS_NVM_WriteBlock Rte_Result_AsccSwc_HW_NUMBERS_NVM_WriteBlock
# define Rte_Result_IGNITION_CYCLE_CNTR_NVM_WriteBlock Rte_Result_AsccSwc_IGNITION_CYCLE_CNTR_NVM_WriteBlock
# define Rte_Result_OPERATION_CYCLE_CNTR_NVM_WriteBlock Rte_Result_AsccSwc_OPERATION_CYCLE_CNTR_NVM_WriteBlock
# define Rte_Result_PSM_MAX_ERROR_PA_NVM_WriteBlock Rte_Result_AsccSwc_PSM_MAX_ERROR_PA_NVM_WriteBlock


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIWrite_AsccSwc_Init_IrvEssm_Afic_Mode(data) \
  (*(Rte_Inst_AsccSwc->Irv_AsccSwc_Init_IrvEssm_Afic_Mode) = *(data))
# define Rte_IrvIWriteRef_AsccSwc_Init_IrvEssm_Afic_Mode() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Init_IrvEssm_Afic_Mode)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIWrite_AsccSwc_Init_IrvEssm_St_Fb(data) \
  (*(Rte_Inst_AsccSwc->Irv_AsccSwc_Init_IrvEssm_St_Fb) = *(data))
# define Rte_IrvIWriteRef_AsccSwc_Init_IrvEssm_St_Fb() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Init_IrvEssm_St_Fb)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIWrite_AsccSwc_Init_IrvFdg_Force_Deviation_Diag_Status(data) \
  (*(Rte_Inst_AsccSwc->Irv_AsccSwc_Init_IrvFdg_Force_Deviation_Diag_Status) = *(data))
# define Rte_IrvIWriteRef_AsccSwc_Init_IrvFdg_Force_Deviation_Diag_Status() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Init_IrvFdg_Force_Deviation_Diag_Status)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIWrite_AsccSwc_Init_IrvFdg_Gas_Leakage_Diag_Status(data) \
  (*(Rte_Inst_AsccSwc->Irv_AsccSwc_Init_IrvFdg_Gas_Leakage_Diag_Status) = *(data))
# define Rte_IrvIWriteRef_AsccSwc_Init_IrvFdg_Gas_Leakage_Diag_Status() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Init_IrvFdg_Gas_Leakage_Diag_Status)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIWrite_AsccSwc_Init_IrvFdg_Oil_Leakage_Diag_Status(data) \
  (*(Rte_Inst_AsccSwc->Irv_AsccSwc_Init_IrvFdg_Oil_Leakage_Diag_Status) = *(data))
# define Rte_IrvIWriteRef_AsccSwc_Init_IrvFdg_Oil_Leakage_Diag_Status() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Init_IrvFdg_Oil_Leakage_Diag_Status)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIRead_AsccSwc_Runnable_1ms_IrvFdg_Force_Deviation_Diag_Status() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_1ms_IrvFdg_Force_Deviation_Diag_Status)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIRead_AsccSwc_Runnable_1ms_IrvFdg_Gas_Leakage_Diag_Status() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_1ms_IrvFdg_Gas_Leakage_Diag_Status)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIRead_AsccSwc_Runnable_1ms_IrvFdg_Oil_Leakage_Diag_Status() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_1ms_IrvFdg_Oil_Leakage_Diag_Status)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIWrite_AsccSwc_Runnable_1ms_IrvBsw_ZONE_13C_Raw(data) \
  (*(Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_1ms_IrvBsw_ZONE_13C_Raw) = *(data))
# define Rte_IrvIWriteRef_AsccSwc_Runnable_1ms_IrvBsw_ZONE_13C_Raw() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_1ms_IrvBsw_ZONE_13C_Raw)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIWrite_AsccSwc_Runnable_1ms_IrvEssm_Afic_Mode(data) \
  (*(Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_1ms_IrvEssm_Afic_Mode) = *(data))
# define Rte_IrvIWriteRef_AsccSwc_Runnable_1ms_IrvEssm_Afic_Mode() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_1ms_IrvEssm_Afic_Mode)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIWrite_AsccSwc_Runnable_1ms_IrvEssm_St_Fb(data) \
  (*(Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_1ms_IrvEssm_St_Fb) = *(data))
# define Rte_IrvIWriteRef_AsccSwc_Runnable_1ms_IrvEssm_St_Fb() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_1ms_IrvEssm_St_Fb)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIRead_AsccSwc_Runnable_2ms_IrvBsw_ZONE_13C_Raw() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_2ms_IrvBsw_ZONE_13C_Raw)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIRead_AsccSwc_Runnable_2ms_IrvEssm_Afic_Mode() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_2ms_IrvEssm_Afic_Mode)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIRead_AsccSwc_Runnable_2ms_IrvEssm_St_Fb() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_2ms_IrvEssm_St_Fb)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIWrite_AsccSwc_Runnable_2ms_IrvFdg_Force_Deviation_Diag_Status(data) \
  (*(Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_2ms_IrvFdg_Force_Deviation_Diag_Status) = *(data))
# define Rte_IrvIWriteRef_AsccSwc_Runnable_2ms_IrvFdg_Force_Deviation_Diag_Status() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_2ms_IrvFdg_Force_Deviation_Diag_Status)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIWrite_AsccSwc_Runnable_2ms_IrvFdg_Gas_Leakage_Diag_Status(data) \
  (*(Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_2ms_IrvFdg_Gas_Leakage_Diag_Status) = *(data))
# define Rte_IrvIWriteRef_AsccSwc_Runnable_2ms_IrvFdg_Gas_Leakage_Diag_Status() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_2ms_IrvFdg_Gas_Leakage_Diag_Status)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrvIWrite_AsccSwc_Runnable_2ms_IrvFdg_Oil_Leakage_Diag_Status(data) \
  (*(Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_2ms_IrvFdg_Oil_Leakage_Diag_Status) = *(data))
# define Rte_IrvIWriteRef_AsccSwc_Runnable_2ms_IrvFdg_Oil_Leakage_Diag_Status() \
  (Rte_Inst_AsccSwc->Irv_AsccSwc_Runnable_2ms_IrvFdg_Oil_Leakage_Diag_Status)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_Pim_AsccSwc_CUSTOMER_HW_NUMBERS_NVM_PIM() (Rte_Inst_AsccSwc->Pim_AsccSwc_CUSTOMER_HW_NUMBERS_NVM_PIM)

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_Pim_AsccSwc_HW_NUMBERS_NVM_PIM() (Rte_Inst_AsccSwc->Pim_AsccSwc_HW_NUMBERS_NVM_PIM)

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_Pim_AsccSwc_IGNITION_CYCLE_CNTR_NVM_PIM() (Rte_Inst_AsccSwc->Pim_AsccSwc_IGNITION_CYCLE_CNTR_NVM_PIM)

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_Pim_AsccSwc_OPERATION_CYCLE_CNTR_NVM_PIM() (Rte_Inst_AsccSwc->Pim_AsccSwc_OPERATION_CYCLE_CNTR_NVM_PIM)

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_Pim_AsccSwc_PSM_MAX_ERROR_PA_NVM_PIM() (Rte_Inst_AsccSwc->Pim_AsccSwc_PSM_MAX_ERROR_PA_NVM_PIM)




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


# define AsccSwc_START_SEC_CODE
# include "AsccSwc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
 *   void Rte_IrvIWrite_AsccSwc_Init_IrvEssm_Afic_Mode(Essm_Afic_Mode_Struct *data)
 *   Essm_Afic_Mode_Struct *Rte_IrvIWriteRef_AsccSwc_Init_IrvEssm_Afic_Mode(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Init_IrvEssm_St_Fb(Essm_St_Fb_Struct *data)
 *   Essm_St_Fb_Struct *Rte_IrvIWriteRef_AsccSwc_Init_IrvEssm_St_Fb(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Init_IrvFdg_Force_Deviation_Diag_Status(Fdg_Force_Deviation_Diag_Status_Struct *data)
 *   Fdg_Force_Deviation_Diag_Status_Struct *Rte_IrvIWriteRef_AsccSwc_Init_IrvFdg_Force_Deviation_Diag_Status(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Init_IrvFdg_Gas_Leakage_Diag_Status(Fdg_Gas_Leakage_Diag_Status_Struct *data)
 *   Fdg_Gas_Leakage_Diag_Status_Struct *Rte_IrvIWriteRef_AsccSwc_Init_IrvFdg_Gas_Leakage_Diag_Status(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Init_IrvFdg_Oil_Leakage_Diag_Status(Fdg_Oil_Leakage_Diag_Status_Struct *data)
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

# define RTE_RUNNABLE_AsccSwc_Init AsccSwc_Init
FUNC(void, AsccSwc_CODE) AsccSwc_Init(void);

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
 *   Fdg_Force_Deviation_Diag_Status_Struct * Rte_IrvIRead_AsccSwc_Runnable_1ms_IrvFdg_Force_Deviation_Diag_Status(void)
 *   Fdg_Gas_Leakage_Diag_Status_Struct * Rte_IrvIRead_AsccSwc_Runnable_1ms_IrvFdg_Gas_Leakage_Diag_Status(void)
 *   Fdg_Oil_Leakage_Diag_Status_Struct * Rte_IrvIRead_AsccSwc_Runnable_1ms_IrvFdg_Oil_Leakage_Diag_Status(void)
 *
 *   Implicit Write Access:
 *   ----------------------
 *   void Rte_IrvIWrite_AsccSwc_Runnable_1ms_IrvBsw_ZONE_13C_Raw(Bsw_ZONE_13C_Raw_Struct *data)
 *   Bsw_ZONE_13C_Raw_Struct *Rte_IrvIWriteRef_AsccSwc_Runnable_1ms_IrvBsw_ZONE_13C_Raw(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Runnable_1ms_IrvEssm_Afic_Mode(Essm_Afic_Mode_Struct *data)
 *   Essm_Afic_Mode_Struct *Rte_IrvIWriteRef_AsccSwc_Runnable_1ms_IrvEssm_Afic_Mode(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Runnable_1ms_IrvEssm_St_Fb(Essm_St_Fb_Struct *data)
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

# define RTE_RUNNABLE_AsccSwc_Runnable_1ms AsccSwc_Runnable_1ms
FUNC(void, AsccSwc_CODE) AsccSwc_Runnable_1ms(void);

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
 *   Bsw_ZONE_13C_Raw_Struct * Rte_IrvIRead_AsccSwc_Runnable_2ms_IrvBsw_ZONE_13C_Raw(void)
 *   Essm_Afic_Mode_Struct * Rte_IrvIRead_AsccSwc_Runnable_2ms_IrvEssm_Afic_Mode(void)
 *   Essm_St_Fb_Struct * Rte_IrvIRead_AsccSwc_Runnable_2ms_IrvEssm_St_Fb(void)
 *
 *   Implicit Write Access:
 *   ----------------------
 *   void Rte_IrvIWrite_AsccSwc_Runnable_2ms_IrvFdg_Force_Deviation_Diag_Status(Fdg_Force_Deviation_Diag_Status_Struct *data)
 *   Fdg_Force_Deviation_Diag_Status_Struct *Rte_IrvIWriteRef_AsccSwc_Runnable_2ms_IrvFdg_Force_Deviation_Diag_Status(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Runnable_2ms_IrvFdg_Gas_Leakage_Diag_Status(Fdg_Gas_Leakage_Diag_Status_Struct *data)
 *   Fdg_Gas_Leakage_Diag_Status_Struct *Rte_IrvIWriteRef_AsccSwc_Runnable_2ms_IrvFdg_Gas_Leakage_Diag_Status(void)
 *
 *   void Rte_IrvIWrite_AsccSwc_Runnable_2ms_IrvFdg_Oil_Leakage_Diag_Status(Fdg_Oil_Leakage_Diag_Status_Struct *data)
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

# define RTE_RUNNABLE_AsccSwc_Runnable_2ms AsccSwc_Runnable_2ms
FUNC(void, AsccSwc_CODE) AsccSwc_Runnable_2ms(void);

# define AsccSwc_STOP_SEC_CODE
# include "AsccSwc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_DiagnosticMonitor_E_NOT_OK (1U)

# define RTE_E_NvMService_E_NOT_OK (1U)

# define RTE_E_OperationCycle_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_ASCCSWC_H */

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

   MD_Rte_1507:  MISRA rule: Rule5.6
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3449:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
