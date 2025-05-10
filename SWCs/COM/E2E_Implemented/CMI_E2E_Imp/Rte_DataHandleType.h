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
 *             File:  Rte_DataHandleType.h
 *           Config:  StartApplication.dpa
 *        SW-C Type:  AsccSwc
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2300382
 *
 *      Description:  Header file containing Data Handle type declarations for component data structures (ContractPhase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_DATA_HANDLE_TYPE_H
# define RTE_DATA_HANDLE_TYPE_H


/**********************************************************************************************************************
 * Type definitions for implicit access to S/R communication
 *********************************************************************************************************************/
/* Types for Data Handles section */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Acab_Zl_Setg_Req_Struct value;
} Rte_DE_Acab_Zl_Setg_Req_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Essm_Afic_Mode_Struct value;
} Rte_DE_Essm_Afic_Mode_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Bsw_ProgrammingReq_Struct value;
} Rte_DE_Bsw_ProgrammingReq_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Esdd_Accel_AtAvPcb_Struct value;
} Rte_DE_Esdd_Accel_AtAvPcb_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Esdd_Ascc_St_Fb_Struct value;
} Rte_DE_Esdd_Ascc_St_Fb_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Esdd_Av_Pg_Var_Struct value;
} Rte_DE_Esdd_Av_Pg_Var_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Esdd_Emm_Pwr_Lim_Tq_Dmd_Struct value;
} Rte_DE_Esdd_Emm_Pwr_Lim_Tq_Dmd_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Esdd_PgSnsr_Serial_Data_Struct value;
} Rte_DE_Esdd_PgSnsr_Serial_Data_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Esdd_RotorSnsr_Data_Struct value;
} Rte_DE_Esdd_RotorSnsr_Data_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Fcc_Cap_Plausibility_Diag_Status_Struct value;
} Rte_DE_Fcc_Cap_Plausibility_Diag_Status_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Pab_PressureSensor_PreQfr_Struct value;
} Rte_DE_Pab_PressureSensor_PreQfr_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  SG_ZONE_13C_Group_Struct value;
} Rte_DE_SG_ZONE_13C_Group_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  SG_ZONE_3A9_Group_Struct value;
} Rte_DE_SG_ZONE_3A9_Group_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  SG_ZONE_3B2_Group_Struct value;
} Rte_DE_SG_ZONE_3B2_Group_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Acab_Veh_Psn_Sus_AtAct_Struct value;
} Rte_DE_Acab_Veh_Psn_Sus_AtAct_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Ascc_Emm_Sts_Veh_Struct value;
} Rte_DE_Ascc_Emm_Sts_Veh_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Ascc_Esdd_St_Req_Struct value;
} Rte_DE_Ascc_Esdd_St_Req_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Essm_Ign_Cycle_Cntr_Struct value;
} Rte_DE_Essm_Ign_Cycle_Cntr_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Pab_Oil_Temp_Struct value;
} Rte_DE_Pab_Oil_Temp_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  ACD_SharedCalibrationData_Struct value;
} Rte_DE_ACD_SharedCalibrationData_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Cse_F_Estn_Lpf_Data_Struct value;
} Rte_DE_Cse_F_Estn_Lpf_Data_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Cse_Pg_Sys_Estn_Vldy_Struct value;
} Rte_DE_Cse_Pg_Sys_Estn_Vldy_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Cse_Sts_F_Estn_Struct value;
} Rte_DE_Cse_Sts_F_Estn_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Cse_Sys_Pg_Est_Data_Struct value;
} Rte_DE_Cse_Sys_Pg_Est_Data_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Csp_Lpf_Data_Struct value;
} Rte_DE_Csp_Lpf_Data_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Csp_Pg_Var_AtHrm_Vldy_Struct value;
} Rte_DE_Csp_Pg_Var_AtHrm_Vldy_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Csp_Procsd_Data_Struct value;
} Rte_DE_Csp_Procsd_Data_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Csp_Procsd_Veh_Psn_Sus_AtAct_Struct value;
} Rte_DE_Csp_Procsd_Veh_Psn_Sus_AtAct_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Esdd_Emm_Temp_Struct value;
} Rte_DE_Esdd_Emm_Temp_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Esdd_Emot_Tq_Dlvrd_Struct value;
} Rte_DE_Esdd_Emot_Tq_Dlvrd_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Esdd_Peak_Tq_Struct value;
} Rte_DE_Esdd_Peak_Tq_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Esdd_Sply_Data_Struct value;
} Rte_DE_Esdd_Sply_Data_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Fcc_F_AtActr_Limit_Lpf_Struct value;
} Rte_DE_Fcc_F_AtActr_Limit_Lpf_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Fcc_F_Cpby_Struct value;
} Rte_DE_Fcc_F_Cpby_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Nvm_CustomerHwNumbers_Struct value;
} Rte_DE_Nvm_CustomerHwNumbers_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Nvm_HardwareNumbers_Struct value;
} Rte_DE_Nvm_HardwareNumbers_Struct;
/* PRQA L:L1 */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Uab_Total_Oper_Cycl_Cntr_Struct value;
} Rte_DE_Uab_Total_Oper_Cycl_Cntr_Struct;
/* PRQA L:L1 */

#endif /* RTE_DATA_HANDLE_TYPE_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1039:  MISRA rule: Rule1.2
     Reason:     Same macro and function names are required to meet AUTOSAR spec.
     Risk:       No functional risk. Macro will be undefined before function definition.
     Prevention: Not required.

*/
