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
 *             File:  Rte_RT_Diag_SWC.h
 *           Config:  StartApplication.dpa
 *        SW-C Type:  RT_Diag_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2300382
 *
 *      Description:  Application header file for SW-C <RT_Diag_SWC> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_RT_DIAG_SWC_H
# define RTE_RT_DIAG_SWC_H

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

# include "Rte_RT_Diag_SWC_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_RT_Diag_SWC
{
  /* PIM Handles section */
  P2VAR(meta_fingerprint, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PerInstanceMemory_MetaData;
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PerInstanceMemory_SecurityFlag;
  /* Vendor specific section */
};
typedef struct Rte_CDS_RT_Diag_SWC Rte_CDS_RT_Diag_SWC;

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONSTP2CONST(struct Rte_CDS_RT_Diag_SWC, RTE_CONST, RTE_CONST) Rte_Inst_RT_Diag_SWC;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

typedef RTE_INSTANCECONSTP2CONST(struct Rte_CDS_RT_Diag_SWC, TYPEDEF, RTE_CONST) Rte_Instance; /* PRQA S 1507 */ /* MD_Rte_1507 */


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Diag_SWC_AsccCdd_SystemTimer_AsccCdd_SystemTimer(P2VAR(AsccCdd_SystemTimer_Struct, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Diag_SWC_Esdd_Emm_Temp_Esdd_Emm_Temp(P2VAR(Esdd_Emm_Temp_Struct, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Diag_SWC_Esdd_Sply_Data_Esdd_Sply_Data(P2VAR(Esdd_Sply_Data_Struct, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Diag_SWC_Essm_Ign_Cycle_Cntr_Essm_Ign_Cycle_Cntr(P2VAR(Essm_Ign_Cycle_Cntr_Struct, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Diag_SWC_Fcc_F_AtActr_Limit_Lpf_Fcc_F_AtActr_Limit_Lpf(P2VAR(Fcc_F_AtActr_Limit_Lpf_Struct, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Diag_SWC_Nvm_Customer_Hw_Numbers_Nvm_Customer_Hw_Numbers(P2VAR(Nvm_CustomerHwNumbers_Struct, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Diag_SWC_Nvm_HardwareNumbers_Nvm_HardwareNumbers(P2VAR(Nvm_HardwareNumbers_Struct, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Diag_SWC_SG_ZONE_3A9_Group_SG_ZONE_3A9_Group(P2VAR(SG_ZONE_3A9_Group_Struct, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Diag_SWC_SG_ZONE_3B2_Group_SG_ZONE_3B2_Group(P2VAR(SG_ZONE_3B2_Group_Struct, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Diag_SWC_Uab_Total_Oper_Cycl_Cntr_Uab_Total_Oper_Cycl_Cntr(P2VAR(Uab_Total_Oper_Cycl_Cntr_Struct, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(uint8, RTE_CODE) Rte_Mode_RT_Diag_SWC_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_RT_Diag_SWC_DCMServices_GetSecurityLevel(P2VAR(Dcm_SecLevelType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) SecLevel); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_RT_Diag_SWC_DCMServices_GetSesCtrlType(P2VAR(Dcm_SesCtrlType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) SesCtrlType); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_RT_Diag_SWC_SecurityFlag_NVM_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_RT_Diag_SWC_SecurityFlag_NVM_ReadBlock(dtRef_VOID DstPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_RT_Diag_SWC_SecurityFlag_NVM_WriteBlock(dtRef_const_VOID SrcPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(void, RTE_CODE) Rte_IrTrigger_RT_Diag_SWC_RT_Diag_SWC_Main_ITP_RT_Diag_SWC_Main(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AsccCdd_SystemTimer_AsccCdd_SystemTimer Rte_Read_RT_Diag_SWC_AsccCdd_SystemTimer_AsccCdd_SystemTimer
# define Rte_Read_Esdd_Emm_Temp_Esdd_Emm_Temp Rte_Read_RT_Diag_SWC_Esdd_Emm_Temp_Esdd_Emm_Temp
# define Rte_Read_Esdd_Sply_Data_Esdd_Sply_Data Rte_Read_RT_Diag_SWC_Esdd_Sply_Data_Esdd_Sply_Data
# define Rte_Read_Essm_Ign_Cycle_Cntr_Essm_Ign_Cycle_Cntr Rte_Read_RT_Diag_SWC_Essm_Ign_Cycle_Cntr_Essm_Ign_Cycle_Cntr
# define Rte_Read_Fcc_F_AtActr_Limit_Lpf_Fcc_F_AtActr_Limit_Lpf Rte_Read_RT_Diag_SWC_Fcc_F_AtActr_Limit_Lpf_Fcc_F_AtActr_Limit_Lpf
# define Rte_Read_Nvm_Customer_Hw_Numbers_Nvm_Customer_Hw_Numbers Rte_Read_RT_Diag_SWC_Nvm_Customer_Hw_Numbers_Nvm_Customer_Hw_Numbers
# define Rte_Read_Nvm_HardwareNumbers_Nvm_HardwareNumbers Rte_Read_RT_Diag_SWC_Nvm_HardwareNumbers_Nvm_HardwareNumbers
# define Rte_Read_SG_ZONE_3A9_Group_SG_ZONE_3A9_Group Rte_Read_RT_Diag_SWC_SG_ZONE_3A9_Group_SG_ZONE_3A9_Group
# define Rte_Read_SG_ZONE_3B2_Group_SG_ZONE_3B2_Group Rte_Read_RT_Diag_SWC_SG_ZONE_3B2_Group_SG_ZONE_3B2_Group
# define Rte_Read_Uab_Total_Oper_Cycl_Cntr_Uab_Total_Oper_Cycl_Cntr Rte_Read_RT_Diag_SWC_Uab_Total_Oper_Cycl_Cntr_Uab_Total_Oper_Cycl_Cntr


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl Rte_Mode_RT_Diag_SWC_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_DCMServices_GetSecurityLevel Rte_Call_RT_Diag_SWC_DCMServices_GetSecurityLevel
# define Rte_Call_DCMServices_GetSesCtrlType Rte_Call_RT_Diag_SWC_DCMServices_GetSesCtrlType
# define Rte_Call_SecurityFlag_NVM_GetErrorStatus Rte_Call_RT_Diag_SWC_SecurityFlag_NVM_GetErrorStatus
# define Rte_Call_SecurityFlag_NVM_ReadBlock Rte_Call_RT_Diag_SWC_SecurityFlag_NVM_ReadBlock
# define Rte_Call_SecurityFlag_NVM_WriteBlock Rte_Call_RT_Diag_SWC_SecurityFlag_NVM_WriteBlock


/**********************************************************************************************************************
 * Inter-runnable triggering (Rte_IrTrigger API)
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_IrTrigger_RT_Diag_SWC_Main_ITP_RT_Diag_SWC_Main() \
  Rte_IrTrigger_RT_Diag_SWC_RT_Diag_SWC_Main_ITP_RT_Diag_SWC_Main()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_Pim_PerInstanceMemory_SecurityFlag() (Rte_Inst_RT_Diag_SWC->Pim_PerInstanceMemory_SecurityFlag)

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
# define Rte_Pim_PerInstanceMemory_MetaData() (Rte_Inst_RT_Diag_SWC->Pim_PerInstanceMemory_MetaData)




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_PerInstanceMemory_SecurityFlag(void)
 *   meta_fingerprint *Rte_Pim_PerInstanceMemory_MetaData(void)
 *
 *********************************************************************************************************************/


# define RT_Diag_SWC_START_SEC_CODE
# include "RT_Diag_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_FAASupplierExtendedData_EMM_Phase_Temperature_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_FAASupplierExtendedData_EMM_Phase_Temperature>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_FAASupplierExtendedData_EMM_Phase_Temperature_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_FAASupplierExtendedData_EMM_Phase_Temperature_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_FAASupplierExtendedData_EMM_Phase_Temperature_ReadData CBReadData_FAASupplierExtendedData_EMM_Phase_Temperature_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_EMM_Phase_Temperature_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_FAASupplierExtendedData_EMM_Powerup_Cycle_Counter_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_FAASupplierExtendedData_EMM_Powerup_Cycle_Counter>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_FAASupplierExtendedData_EMM_Powerup_Cycle_Counter_ReadData(DataPrimitiveType_uint32 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_FAASupplierExtendedData_EMM_Powerup_Cycle_Counter_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_FAASupplierExtendedData_EMM_Powerup_Cycle_Counter_ReadData CBReadData_FAASupplierExtendedData_EMM_Powerup_Cycle_Counter_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_EMM_Powerup_Cycle_Counter_ReadData(P2VAR(DataPrimitiveType_uint32, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_FAASupplierExtendedData_FAA_Oil_Temperature_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_FAASupplierExtendedData_FAA_Oil_Temperature>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_FAASupplierExtendedData_FAA_Oil_Temperature_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_FAASupplierExtendedData_FAA_Oil_Temperature_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_FAASupplierExtendedData_FAA_Oil_Temperature_ReadData CBReadData_FAASupplierExtendedData_FAA_Oil_Temperature_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_FAA_Oil_Temperature_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_FAASupplierExtendedData_FAA_SW_ID_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_FAASupplierExtendedData_FAA_SW_ID>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_FAASupplierExtendedData_FAA_SW_ID_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_32
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_FAASupplierExtendedData_FAA_SW_ID_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_FAASupplierExtendedData_FAA_SW_ID_ReadData CBReadData_FAASupplierExtendedData_FAA_SW_ID_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_FAA_SW_ID_ReadData(P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_FAA_SW_ID_ReadData(P2VAR(DataArrayType_uint8_32, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_FAASupplierExtendedData_FAA_System_Timer_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_FAASupplierExtendedData_FAA_System_Timer>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_FAASupplierExtendedData_FAA_System_Timer_ReadData(DataPrimitiveType_uint32 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_FAASupplierExtendedData_FAA_System_Timer_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_FAASupplierExtendedData_FAA_System_Timer_ReadData CBReadData_FAASupplierExtendedData_FAA_System_Timer_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_FAA_System_Timer_ReadData(P2VAR(DataPrimitiveType_uint32, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Final_Force_Command_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Final_Force_Command>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Final_Force_Command_ReadData(DataPrimitiveType_uint16 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_FAASupplierExtendedData_FAS_Corner_Actuator_Final_Force_Command_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Final_Force_Command_ReadData CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Final_Force_Command_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Final_Force_Command_ReadData(P2VAR(DataPrimitiveType_uint16, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Mode_Request_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Mode_Request>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Mode_Request_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_FAASupplierExtendedData_FAS_Corner_Actuator_Mode_Request_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Mode_Request_ReadData CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Mode_Request_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Mode_Request_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_FAASupplierExtendedData_Fault_ID_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_FAASupplierExtendedData_Fault_ID>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_FAASupplierExtendedData_Fault_ID_ReadData(Dem_EventIdType EventId, DataPrimitiveType_uint16 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_FAASupplierExtendedData_Fault_ID_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_FAASupplierExtendedData_Fault_ID_ReadData CBReadData_FAASupplierExtendedData_Fault_ID_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_Fault_ID_ReadData(Dem_EventIdType EventId, P2VAR(DataPrimitiveType_uint16, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_FAASupplierExtendedData_Vehicle_Operating_Cycle_Counter_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_FAASupplierExtendedData_Vehicle_Operating_Cycle_Counter>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_FAASupplierExtendedData_Vehicle_Operating_Cycle_Counter_ReadData(DataPrimitiveType_uint32 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_FAASupplierExtendedData_Vehicle_Operating_Cycle_Counter_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_FAASupplierExtendedData_Vehicle_Operating_Cycle_Counter_ReadData CBReadData_FAASupplierExtendedData_Vehicle_Operating_Cycle_Counter_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_Vehicle_Operating_Cycle_Counter_ReadData(P2VAR(DataPrimitiveType_uint32, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_StandardEnvironmentData_48V_Battery_voltage_V_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_StandardEnvironmentData_48V_Battery_voltage_V>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_StandardEnvironmentData_48V_Battery_voltage_V_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_StandardEnvironmentData_48V_Battery_voltage_V_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_StandardEnvironmentData_48V_Battery_voltage_V_ReadData CBReadData_StandardEnvironmentData_48V_Battery_voltage_V_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_48V_Battery_voltage_V_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_StandardEnvironmentData_Odometer_Value_Km_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_StandardEnvironmentData_Odometer_Value_Km>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_StandardEnvironmentData_Odometer_Value_Km_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_3
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_StandardEnvironmentData_Odometer_Value_Km_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_StandardEnvironmentData_Odometer_Value_Km_ReadData CBReadData_StandardEnvironmentData_Odometer_Value_Km_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Odometer_Value_Km_ReadData(P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Odometer_Value_Km_ReadData(P2VAR(DataArrayType_uint8_3, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_StandardEnvironmentData_Timestamp_Day_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_StandardEnvironmentData_Timestamp_Day>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_StandardEnvironmentData_Timestamp_Day_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_StandardEnvironmentData_Timestamp_Day_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_StandardEnvironmentData_Timestamp_Day_ReadData CBReadData_StandardEnvironmentData_Timestamp_Day_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Timestamp_Day_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_StandardEnvironmentData_Timestamp_Hour_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_StandardEnvironmentData_Timestamp_Hour>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_StandardEnvironmentData_Timestamp_Hour_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_StandardEnvironmentData_Timestamp_Hour_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_StandardEnvironmentData_Timestamp_Hour_ReadData CBReadData_StandardEnvironmentData_Timestamp_Hour_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Timestamp_Hour_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_StandardEnvironmentData_Timestamp_Minute_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_StandardEnvironmentData_Timestamp_Minute>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_StandardEnvironmentData_Timestamp_Minute_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_StandardEnvironmentData_Timestamp_Minute_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_StandardEnvironmentData_Timestamp_Minute_ReadData CBReadData_StandardEnvironmentData_Timestamp_Minute_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Timestamp_Minute_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_StandardEnvironmentData_Timestamp_Month_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_StandardEnvironmentData_Timestamp_Month>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_StandardEnvironmentData_Timestamp_Month_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_StandardEnvironmentData_Timestamp_Month_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_StandardEnvironmentData_Timestamp_Month_ReadData CBReadData_StandardEnvironmentData_Timestamp_Month_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Timestamp_Month_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_StandardEnvironmentData_Timestamp_Second_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_StandardEnvironmentData_Timestamp_Second>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_StandardEnvironmentData_Timestamp_Second_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_StandardEnvironmentData_Timestamp_Second_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_StandardEnvironmentData_Timestamp_Second_ReadData CBReadData_StandardEnvironmentData_Timestamp_Second_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Timestamp_Second_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_StandardEnvironmentData_Timestamp_Year_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_StandardEnvironmentData_Timestamp_Year>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_StandardEnvironmentData_Timestamp_Year_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_StandardEnvironmentData_Timestamp_Year_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CBReadData_StandardEnvironmentData_Timestamp_Year_ReadData CBReadData_StandardEnvironmentData_Timestamp_Year_ReadData
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Timestamp_Year_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_1001_EMM_Hardware_Part_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_EMM_Hardware_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_1001_EMM_Hardware_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_EMM_Hardware_Part_Number_EMM_Hardware_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_EMM_Hardware_Part_Number_EMM_Hardware_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_1001_EMM_Hardware_Part_Number_ConditionCheckRead DataServices_1001_EMM_Hardware_Part_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1001_EMM_Hardware_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_1001_EMM_Hardware_Part_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_EMM_Hardware_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_1001_EMM_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data32ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_EMM_Hardware_Part_Number_EMM_Hardware_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_EMM_Hardware_Part_Number_EMM_Hardware_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_1001_EMM_Hardware_Part_Number_ReadData DataServices_1001_EMM_Hardware_Part_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1001_EMM_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1001_EMM_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_1002_EMM_Serial_Part_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_EMM_Serial_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_1002_EMM_Serial_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_EMM_Serial_Part_Number_EMM_Serial_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_EMM_Serial_Part_Number_EMM_Serial_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_1002_EMM_Serial_Part_Number_ConditionCheckRead DataServices_1002_EMM_Serial_Part_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1002_EMM_Serial_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_1002_EMM_Serial_Part_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_EMM_Serial_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_1002_EMM_Serial_Part_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data32ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_EMM_Serial_Part_Number_EMM_Serial_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_EMM_Serial_Part_Number_EMM_Serial_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_1002_EMM_Serial_Part_Number_ReadData DataServices_1002_EMM_Serial_Part_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1002_EMM_Serial_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1002_EMM_Serial_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_1003_AV_Hardware_Part_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_AV_Hardware_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_1003_AV_Hardware_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_AV_Hardware_Part_Number_AV_Hardware_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_AV_Hardware_Part_Number_AV_Hardware_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_1003_AV_Hardware_Part_Number_ConditionCheckRead DataServices_1003_AV_Hardware_Part_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1003_AV_Hardware_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_1003_AV_Hardware_Part_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_AV_Hardware_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_1003_AV_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data32ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_AV_Hardware_Part_Number_AV_Hardware_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_AV_Hardware_Part_Number_AV_Hardware_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_1003_AV_Hardware_Part_Number_ReadData DataServices_1003_AV_Hardware_Part_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1003_AV_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1003_AV_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_1004_AV_Serial_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_AV_Serial_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_1004_AV_Serial_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_AV_Serial_Number_AV_Serial_Number_DCM_E_PENDING
 *   RTE_E_DataServices_AV_Serial_Number_AV_Serial_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_1004_AV_Serial_Number_ConditionCheckRead DataServices_1004_AV_Serial_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1004_AV_Serial_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_1004_AV_Serial_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_AV_Serial_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_1004_AV_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data32ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_AV_Serial_Number_AV_Serial_Number_DCM_E_PENDING
 *   RTE_E_DataServices_AV_Serial_Number_AV_Serial_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_1004_AV_Serial_Number_ReadData DataServices_1004_AV_Serial_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1004_AV_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1004_AV_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_1005_ACB_Hardware_Part_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_ACB_Hardware_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_1005_ACB_Hardware_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ACB_Hardware_Part_Number_ACB_Hardware_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_ACB_Hardware_Part_Number_ACB_Hardware_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_1005_ACB_Hardware_Part_Number_ConditionCheckRead DataServices_1005_ACB_Hardware_Part_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1005_ACB_Hardware_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_1005_ACB_Hardware_Part_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_ACB_Hardware_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_1005_ACB_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data32ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ACB_Hardware_Part_Number_ACB_Hardware_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_ACB_Hardware_Part_Number_ACB_Hardware_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_1005_ACB_Hardware_Part_Number_ReadData DataServices_1005_ACB_Hardware_Part_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1005_ACB_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1005_ACB_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_1006_ACB_Serial_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_ACB_Serial_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_1006_ACB_Serial_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ACB_Serial_Number_ACB_Serial_Number_DCM_E_PENDING
 *   RTE_E_DataServices_ACB_Serial_Number_ACB_Serial_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_1006_ACB_Serial_Number_ConditionCheckRead DataServices_1006_ACB_Serial_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1006_ACB_Serial_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_1006_ACB_Serial_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_ACB_Serial_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_1006_ACB_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data32ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_ACB_Serial_Number_ACB_Serial_Number_DCM_E_PENDING
 *   RTE_E_DataServices_ACB_Serial_Number_ACB_Serial_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_1006_ACB_Serial_Number_ReadData DataServices_1006_ACB_Serial_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1006_ACB_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1006_ACB_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F110_FAA_customer_Hardware_Part_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_customer_Hardware_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F110_FAA_customer_Hardware_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_customer_Hardware_Part_Number_FAA_customer_Hardware_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_customer_Hardware_Part_Number_FAA_customer_Hardware_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F110_FAA_customer_Hardware_Part_Number_ConditionCheckRead DataServices_F110_FAA_customer_Hardware_Part_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F110_FAA_customer_Hardware_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F110_FAA_customer_Hardware_Part_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_customer_Hardware_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F110_FAA_customer_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data11ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_customer_Hardware_Part_Number_FAA_customer_Hardware_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_customer_Hardware_Part_Number_FAA_customer_Hardware_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F110_FAA_customer_Hardware_Part_Number_ReadData DataServices_F110_FAA_customer_Hardware_Part_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F110_FAA_customer_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F110_FAA_customer_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F111_FAA_customer_Hardware_Baseline_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_customer_Hardware_Baseline>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F111_FAA_customer_Hardware_Baseline_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_customer_Hardware_Baseline_FAA_customer_Hardware_Baseline_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_customer_Hardware_Baseline_FAA_customer_Hardware_Baseline_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F111_FAA_customer_Hardware_Baseline_ConditionCheckRead DataServices_F111_FAA_customer_Hardware_Baseline_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F111_FAA_customer_Hardware_Baseline_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F111_FAA_customer_Hardware_Baseline_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_customer_Hardware_Baseline>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F111_FAA_customer_Hardware_Baseline_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_customer_Hardware_Baseline_FAA_customer_Hardware_Baseline_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_customer_Hardware_Baseline_FAA_customer_Hardware_Baseline_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F111_FAA_customer_Hardware_Baseline_ReadData DataServices_F111_FAA_customer_Hardware_Baseline_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F111_FAA_customer_Hardware_Baseline_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F111_FAA_customer_Hardware_Baseline_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F118_FAA_Customer_Software_Part_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_Customer_Software_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F118_FAA_Customer_Software_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Customer_Software_Part_Number_FAA_Customer_Software_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Customer_Software_Part_Number_FAA_Customer_Software_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F118_FAA_Customer_Software_Part_Number_ConditionCheckRead DataServices_F118_FAA_Customer_Software_Part_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F118_FAA_Customer_Software_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F118_FAA_Customer_Software_Part_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_Customer_Software_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F118_FAA_Customer_Software_Part_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data11ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Customer_Software_Part_Number_FAA_Customer_Software_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Customer_Software_Part_Number_FAA_Customer_Software_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F118_FAA_Customer_Software_Part_Number_ReadData DataServices_F118_FAA_Customer_Software_Part_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F118_FAA_Customer_Software_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F118_FAA_Customer_Software_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F119_FAA_Customer_Software_Baseline_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_Customer_Software_Baseline>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F119_FAA_Customer_Software_Baseline_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Customer_Software_Baseline_FAA_Customer_Software_Baseline_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Customer_Software_Baseline_FAA_Customer_Software_Baseline_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F119_FAA_Customer_Software_Baseline_ConditionCheckRead DataServices_F119_FAA_Customer_Software_Baseline_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F119_FAA_Customer_Software_Baseline_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F119_FAA_Customer_Software_Baseline_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_Customer_Software_Baseline>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F119_FAA_Customer_Software_Baseline_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Customer_Software_Baseline_FAA_Customer_Software_Baseline_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Customer_Software_Baseline_FAA_Customer_Software_Baseline_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F119_FAA_Customer_Software_Baseline_ReadData DataServices_F119_FAA_Customer_Software_Baseline_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F119_FAA_Customer_Software_Baseline_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F119_FAA_Customer_Software_Baseline_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F130_FAA_Customer_Calibration_Part_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_Customer_Calibration_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F130_FAA_Customer_Calibration_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Customer_Calibration_Part_Number_FAA_Customer_Calibration_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Customer_Calibration_Part_Number_FAA_Customer_Calibration_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F130_FAA_Customer_Calibration_Part_Number_ConditionCheckRead DataServices_F130_FAA_Customer_Calibration_Part_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F130_FAA_Customer_Calibration_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F130_FAA_Customer_Calibration_Part_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_Customer_Calibration_Part_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F130_FAA_Customer_Calibration_Part_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data11ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Customer_Calibration_Part_Number_FAA_Customer_Calibration_Part_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Customer_Calibration_Part_Number_FAA_Customer_Calibration_Part_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F130_FAA_Customer_Calibration_Part_Number_ReadData DataServices_F130_FAA_Customer_Calibration_Part_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F130_FAA_Customer_Calibration_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F130_FAA_Customer_Calibration_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F131_FAA_Customer_Calibration_Baseline_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_Customer_Calibration_Baseline>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F131_FAA_Customer_Calibration_Baseline_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Customer_Calibration_Baseline_FAA_Customer_Calibration_Baseline_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Customer_Calibration_Baseline_FAA_Customer_Calibration_Baseline_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F131_FAA_Customer_Calibration_Baseline_ConditionCheckRead DataServices_F131_FAA_Customer_Calibration_Baseline_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F131_FAA_Customer_Calibration_Baseline_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F131_FAA_Customer_Calibration_Baseline_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_Customer_Calibration_Baseline>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F131_FAA_Customer_Calibration_Baseline_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Customer_Calibration_Baseline_FAA_Customer_Calibration_Baseline_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Customer_Calibration_Baseline_FAA_Customer_Calibration_Baseline_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F131_FAA_Customer_Calibration_Baseline_ReadData DataServices_F131_FAA_Customer_Calibration_Baseline_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F131_FAA_Customer_Calibration_Baseline_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F131_FAA_Customer_Calibration_Baseline_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F150_FAA_Bootloader_Version_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_Bootloader_Version_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F150_FAA_Bootloader_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Bootloader_Version_Number_FAA_Bootloader_Version_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Bootloader_Version_Number_FAA_Bootloader_Version_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F150_FAA_Bootloader_Version_Number_ConditionCheckRead DataServices_F150_FAA_Bootloader_Version_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F150_FAA_Bootloader_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F150_FAA_Bootloader_Version_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_Bootloader_Version_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F150_FAA_Bootloader_Version_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data32ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Bootloader_Version_Number_FAA_Bootloader_Version_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Bootloader_Version_Number_FAA_Bootloader_Version_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F150_FAA_Bootloader_Version_Number_ReadData DataServices_F150_FAA_Bootloader_Version_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F150_FAA_Bootloader_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F150_FAA_Bootloader_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F151_FAA_Supplier_Calibration_Version_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_Supplier_Calibration_Version_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F151_FAA_Supplier_Calibration_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Supplier_Calibration_Version_Number_FAA_Supplier_Calibration_Version_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Supplier_Calibration_Version_Number_FAA_Supplier_Calibration_Version_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F151_FAA_Supplier_Calibration_Version_Number_ConditionCheckRead DataServices_F151_FAA_Supplier_Calibration_Version_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F151_FAA_Supplier_Calibration_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F151_FAA_Supplier_Calibration_Version_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_Supplier_Calibration_Version_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F151_FAA_Supplier_Calibration_Version_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data36ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Supplier_Calibration_Version_Number_FAA_Supplier_Calibration_Version_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Supplier_Calibration_Version_Number_FAA_Supplier_Calibration_Version_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F151_FAA_Supplier_Calibration_Version_Number_ReadData DataServices_F151_FAA_Supplier_Calibration_Version_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F151_FAA_Supplier_Calibration_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F151_FAA_Supplier_Calibration_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data36ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F186_Active_Session_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Active_Diagnostic_Session>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F186_Active_Session_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Active_Diagnostic_Session_Active_Session_DCM_E_PENDING
 *   RTE_E_DataServices_Active_Diagnostic_Session_Active_Session_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F186_Active_Session_ConditionCheckRead DataServices_F186_Active_Session_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F186_Active_Session_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F186_Active_Session_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Active_Diagnostic_Session>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F186_Active_Session_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Active_Diagnostic_Session_Active_Session_DCM_E_PENDING
 *   RTE_E_DataServices_Active_Diagnostic_Session_Active_Session_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F186_Active_Session_ReadData DataServices_F186_Active_Session_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F186_Active_Session_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F186_Active_Session_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F18A_FAA_System_Supplier_Identifier_Data_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_System_Supplier_Identifier_Data>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F18A_FAA_System_Supplier_Identifier_Data_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_System_Supplier_Identifier_Data_FAA_System_Supplier_Identifier_Data_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_System_Supplier_Identifier_Data_FAA_System_Supplier_Identifier_Data_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F18A_FAA_System_Supplier_Identifier_Data_ConditionCheckRead DataServices_F18A_FAA_System_Supplier_Identifier_Data_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18A_FAA_System_Supplier_Identifier_Data_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F18A_FAA_System_Supplier_Identifier_Data_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_System_Supplier_Identifier_Data>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F18A_FAA_System_Supplier_Identifier_Data_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data8ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_System_Supplier_Identifier_Data_FAA_System_Supplier_Identifier_Data_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_System_Supplier_Identifier_Data_FAA_System_Supplier_Identifier_Data_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F18A_FAA_System_Supplier_Identifier_Data_ReadData DataServices_F18A_FAA_System_Supplier_Identifier_Data_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18A_FAA_System_Supplier_Identifier_Data_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18A_FAA_System_Supplier_Identifier_Data_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F18B_FAA_Manufacturing_Date_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_Manufacturing_Date>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F18B_FAA_Manufacturing_Date_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Manufacturing_Date_FAA_Manufacturing_Date_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Manufacturing_Date_FAA_Manufacturing_Date_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F18B_FAA_Manufacturing_Date_ConditionCheckRead DataServices_F18B_FAA_Manufacturing_Date_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18B_FAA_Manufacturing_Date_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F18B_FAA_Manufacturing_Date_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_Manufacturing_Date>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F18B_FAA_Manufacturing_Date_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data3ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Manufacturing_Date_FAA_Manufacturing_Date_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Manufacturing_Date_FAA_Manufacturing_Date_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F18B_FAA_Manufacturing_Date_ReadData DataServices_F18B_FAA_Manufacturing_Date_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18B_FAA_Manufacturing_Date_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18B_FAA_Manufacturing_Date_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F18C_FAA_Serial_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_Serial_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F18C_FAA_Serial_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Serial_Number_FAA_Serial_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Serial_Number_FAA_Serial_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F18C_FAA_Serial_Number_ConditionCheckRead DataServices_F18C_FAA_Serial_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18C_FAA_Serial_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F18C_FAA_Serial_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_Serial_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F18C_FAA_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data32ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Serial_Number_FAA_Serial_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Serial_Number_FAA_Serial_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F18C_FAA_Serial_Number_ReadData DataServices_F18C_FAA_Serial_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18C_FAA_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18C_FAA_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F193_FAA_Supplier_Hardware_Version_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_Supplier_Hardware_Version_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F193_FAA_Supplier_Hardware_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Supplier_Hardware_Version_Number_FAA_Supplier_Hardware_Version_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Supplier_Hardware_Version_Number_FAA_Supplier_Hardware_Version_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F193_FAA_Supplier_Hardware_Version_Number_ConditionCheckRead DataServices_F193_FAA_Supplier_Hardware_Version_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F193_FAA_Supplier_Hardware_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F193_FAA_Supplier_Hardware_Version_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_Supplier_Hardware_Version_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F193_FAA_Supplier_Hardware_Version_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data32ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Supplier_Hardware_Version_Number_FAA_Supplier_Hardware_Version_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Supplier_Hardware_Version_Number_FAA_Supplier_Hardware_Version_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F193_FAA_Supplier_Hardware_Version_Number_ReadData DataServices_F193_FAA_Supplier_Hardware_Version_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F193_FAA_Supplier_Hardware_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F193_FAA_Supplier_Hardware_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F195_FAA_Supplier_Software_Version_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_Supplier_Software_Version_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F195_FAA_Supplier_Software_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Supplier_Software_Version_Number_FAA_Supplier_Software_Version_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Supplier_Software_Version_Number_FAA_Supplier_Software_Version_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F195_FAA_Supplier_Software_Version_Number_ConditionCheckRead DataServices_F195_FAA_Supplier_Software_Version_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F195_FAA_Supplier_Software_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_F195_FAA_Supplier_Software_Version_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_Supplier_Software_Version_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_F195_FAA_Supplier_Software_Version_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data32ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Supplier_Software_Version_Number_FAA_Supplier_Software_Version_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Supplier_Software_Version_Number_FAA_Supplier_Software_Version_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_F195_FAA_Supplier_Software_Version_Number_ReadData DataServices_F195_FAA_Supplier_Software_Version_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F195_FAA_Supplier_Software_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F195_FAA_Supplier_Software_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_FAA_BootManager_Version_Number_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_BootManager_Version_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_FAA_BootManager_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Bootloader_Version_Number_FAA_BootManager_Version_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Bootloader_Version_Number_FAA_BootManager_Version_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_FAA_BootManager_Version_Number_ConditionCheckRead DataServices_FAA_BootManager_Version_Number_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_FAA_BootManager_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_FAA_BootManager_Version_Number_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_BootManager_Version_Number>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_FAA_BootManager_Version_Number_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data32ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Bootloader_Version_Number_FAA_BootManager_Version_Number_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Bootloader_Version_Number_FAA_BootManager_Version_Number_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_FAA_BootManager_Version_Number_ReadData DataServices_FAA_BootManager_Version_Number_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_FAA_BootManager_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_FAA_BootManager_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ConditionCheckRead DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data3ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_DCM_E_PENDING
 *   RTE_E_DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ReadData DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Read_Fingerprint_Programming_Fingerprint_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Read_Fingerprint_Programming_Fingerprint>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Read_Fingerprint_Programming_Fingerprint_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Read_Fingerprint_Programming_Fingerprint_DCM_E_PENDING
 *   RTE_E_DataServices_Read_Fingerprint_Programming_Fingerprint_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Read_Fingerprint_Programming_Fingerprint_ConditionCheckRead DataServices_Read_Fingerprint_Programming_Fingerprint_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_Read_Fingerprint_Programming_Fingerprint_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Read_Fingerprint_Programming_Fingerprint_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Read_Fingerprint_Programming_Fingerprint>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Read_Fingerprint_Programming_Fingerprint_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data12ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Read_Fingerprint_Programming_Fingerprint_DCM_E_PENDING
 *   RTE_E_DataServices_Read_Fingerprint_Programming_Fingerprint_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Read_Fingerprint_Programming_Fingerprint_ReadData DataServices_Read_Fingerprint_Programming_Fingerprint_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_Read_Fingerprint_Programming_Fingerprint_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_Read_Fingerprint_Programming_Fingerprint_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data12ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_DCM_E_PENDING
 *   RTE_E_DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ConditionCheckRead DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ConditionCheckRead
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_DCM_E_PENDING
 *   RTE_E_DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ReadData DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ReadData
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RT_Diag_SWC_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RT_Diag_SWC_Init RT_Diag_SWC_Init
FUNC(void, RT_Diag_SWC_CODE) RT_Diag_SWC_Init(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RT_Diag_SWC_Main
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
 *   Std_ReturnType Rte_Read_AsccCdd_SystemTimer_AsccCdd_SystemTimer(AsccCdd_SystemTimer_Struct *data)
 *   Std_ReturnType Rte_Read_Esdd_Emm_Temp_Esdd_Emm_Temp(Esdd_Emm_Temp_Struct *data)
 *   Std_ReturnType Rte_Read_Esdd_Sply_Data_Esdd_Sply_Data(Esdd_Sply_Data_Struct *data)
 *   Std_ReturnType Rte_Read_Essm_Ign_Cycle_Cntr_Essm_Ign_Cycle_Cntr(Essm_Ign_Cycle_Cntr_Struct *data)
 *   Std_ReturnType Rte_Read_Fcc_F_AtActr_Limit_Lpf_Fcc_F_AtActr_Limit_Lpf(Fcc_F_AtActr_Limit_Lpf_Struct *data)
 *   Std_ReturnType Rte_Read_Nvm_Customer_Hw_Numbers_Nvm_Customer_Hw_Numbers(Nvm_CustomerHwNumbers_Struct *data)
 *   Std_ReturnType Rte_Read_Nvm_HardwareNumbers_Nvm_HardwareNumbers(Nvm_HardwareNumbers_Struct *data)
 *   Std_ReturnType Rte_Read_SG_ZONE_3A9_Group_SG_ZONE_3A9_Group(SG_ZONE_3A9_Group_Struct *data)
 *   Std_ReturnType Rte_Read_SG_ZONE_3B2_Group_SG_ZONE_3B2_Group(SG_ZONE_3B2_Group_Struct *data)
 *   Std_ReturnType Rte_Read_Uab_Total_Oper_Cycl_Cntr_Uab_Total_Oper_Cycl_Cntr(Uab_Total_Oper_Cycl_Cntr_Struct *data)
 *
 * Internal Trigger Interfaces:
 * ============================
 *   Unqueued Internal Triggering:
 *   -----------------------------
 *   void Rte_IrTrigger_RT_Diag_SWC_Main_ITP_RT_Diag_SWC_Main(void)
 *
 * Mode Interfaces:
 * ================
 *   uint8 Rte_Mode_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(void)
 *   Modes of Rte_ModeType_DcmDiagnosticSessionControl:
 *   - RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION
 *   - RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION
 *   - RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION
 *   - RTE_TRANSITION_DcmDiagnosticSessionControl
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DCMServices_GetSecurityLevel(Dcm_SecLevelType *SecLevel)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DCMServices_E_OK
 *   Std_ReturnType Rte_Call_DCMServices_GetSesCtrlType(Dcm_SesCtrlType *SesCtrlType)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DCMServices_E_OK
 *   Std_ReturnType Rte_Call_SecurityFlag_NVM_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_SecurityFlag_NVM_ReadBlock(dtRef_VOID DstPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_SecurityFlag_NVM_WriteBlock(dtRef_const_VOID SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RT_Diag_SWC_Main RT_Diag_SWC_Main
FUNC(void, RT_Diag_SWC_CODE) RT_Diag_SWC_Main(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_CheckProgrammingPreCondition_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_CheckProgrammingPreCondition>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_CheckProgrammingPreCondition_Start(Dcm_OpStatusType OpStatus, Dcm_StartDataOut_CheckProgrammingPreCondition_Out_No_of_PreconditionsType *Out_No_of_Preconditions, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_CheckProgrammingPreCondition_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_CheckProgrammingPreCondition_DCM_E_PENDING
 *   RTE_E_RoutineServices_CheckProgrammingPreCondition_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RoutineServices_CheckProgrammingPreCondition_Start RoutineServices_CheckProgrammingPreCondition_Start
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) RoutineServices_CheckProgrammingPreCondition_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_CheckProgrammingPreCondition_Out_No_of_PreconditionsType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Out_No_of_Preconditions, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SecurityAccess_Level02_03_GetSeed
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetSeed> of PortPrototype <SecurityAccess_DcmDspSecurityRow_Level02>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SecurityAccess_Level02_03_GetSeed(Dcm_OpStatusType OpStatus, uint8 *Seed, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Seed: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SecurityAccess_DcmDspSecurityRow_Level02_DCM_E_PENDING
 *   RTE_E_SecurityAccess_DcmDspSecurityRow_Level02_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SecurityAccess_Level02_03_GetSeed SecurityAccess_Level02_03_GetSeed
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) SecurityAccess_Level02_03_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) SecurityAccess_Level02_03_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SecurityAccess_Level02_04_CompareKey
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CompareKey> of PortPrototype <SecurityAccess_DcmDspSecurityRow_Level02>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SecurityAccess_Level02_04_CompareKey(const uint8 *Key, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Key: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SecurityAccess_DcmDspSecurityRow_Level02_DCM_E_COMPARE_KEY_FAILED
 *   RTE_E_SecurityAccess_DcmDspSecurityRow_Level02_DCM_E_PENDING
 *   RTE_E_SecurityAccess_DcmDspSecurityRow_Level02_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SecurityAccess_Level02_04_CompareKey SecurityAccess_Level02_04_CompareKey
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) SecurityAccess_Level02_04_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Diag_SWC_CODE) SecurityAccess_Level02_04_CompareKey(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

# define RT_Diag_SWC_STOP_SEC_CODE
# include "RT_Diag_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_CSDataServices_FAASupplierExtendedData_EMM_Phase_Temperature_E_NOT_OK (1U)

# define RTE_E_CSDataServices_FAASupplierExtendedData_EMM_Powerup_Cycle_Counter_E_NOT_OK (1U)

# define RTE_E_CSDataServices_FAASupplierExtendedData_FAA_Oil_Temperature_E_NOT_OK (1U)

# define RTE_E_CSDataServices_FAASupplierExtendedData_FAA_SW_ID_E_NOT_OK (1U)

# define RTE_E_CSDataServices_FAASupplierExtendedData_FAA_System_Timer_E_NOT_OK (1U)

# define RTE_E_CSDataServices_FAASupplierExtendedData_FAS_Corner_Actuator_Final_Force_Command_E_NOT_OK (1U)

# define RTE_E_CSDataServices_FAASupplierExtendedData_FAS_Corner_Actuator_Mode_Request_E_NOT_OK (1U)

# define RTE_E_CSDataServices_FAASupplierExtendedData_Fault_ID_E_NOT_OK (1U)

# define RTE_E_CSDataServices_FAASupplierExtendedData_Vehicle_Operating_Cycle_Counter_E_NOT_OK (1U)

# define RTE_E_CSDataServices_StandardEnvironmentData_48V_Battery_voltage_V_E_NOT_OK (1U)

# define RTE_E_CSDataServices_StandardEnvironmentData_Odometer_Value_Km_E_NOT_OK (1U)

# define RTE_E_CSDataServices_StandardEnvironmentData_Timestamp_Day_E_NOT_OK (1U)

# define RTE_E_CSDataServices_StandardEnvironmentData_Timestamp_Hour_E_NOT_OK (1U)

# define RTE_E_CSDataServices_StandardEnvironmentData_Timestamp_Minute_E_NOT_OK (1U)

# define RTE_E_CSDataServices_StandardEnvironmentData_Timestamp_Month_E_NOT_OK (1U)

# define RTE_E_CSDataServices_StandardEnvironmentData_Timestamp_Second_E_NOT_OK (1U)

# define RTE_E_CSDataServices_StandardEnvironmentData_Timestamp_Year_E_NOT_OK (1U)

# define RTE_E_DCMServices_E_OK (0U)

# define RTE_E_DataServices_ACB_Hardware_Part_Number_ACB_Hardware_Part_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_ACB_Hardware_Part_Number_ACB_Hardware_Part_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_ACB_Serial_Number_ACB_Serial_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_ACB_Serial_Number_ACB_Serial_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_AV_Hardware_Part_Number_AV_Hardware_Part_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_AV_Hardware_Part_Number_AV_Hardware_Part_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_AV_Serial_Number_AV_Serial_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_AV_Serial_Number_AV_Serial_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_Active_Diagnostic_Session_Active_Session_DCM_E_PENDING (10U)

# define RTE_E_DataServices_Active_Diagnostic_Session_Active_Session_E_NOT_OK (1U)

# define RTE_E_DataServices_EMM_Hardware_Part_Number_EMM_Hardware_Part_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_EMM_Hardware_Part_Number_EMM_Hardware_Part_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_EMM_Serial_Part_Number_EMM_Serial_Part_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_EMM_Serial_Part_Number_EMM_Serial_Part_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_Bootloader_Version_Number_FAA_BootManager_Version_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_Bootloader_Version_Number_FAA_BootManager_Version_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_Bootloader_Version_Number_FAA_Bootloader_Version_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_Bootloader_Version_Number_FAA_Bootloader_Version_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_Customer_Calibration_Baseline_FAA_Customer_Calibration_Baseline_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_Customer_Calibration_Baseline_FAA_Customer_Calibration_Baseline_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_Customer_Calibration_Part_Number_FAA_Customer_Calibration_Part_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_Customer_Calibration_Part_Number_FAA_Customer_Calibration_Part_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_Customer_Software_Baseline_FAA_Customer_Software_Baseline_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_Customer_Software_Baseline_FAA_Customer_Software_Baseline_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_Customer_Software_Part_Number_FAA_Customer_Software_Part_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_Customer_Software_Part_Number_FAA_Customer_Software_Part_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_Manufacturing_Date_FAA_Manufacturing_Date_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_Manufacturing_Date_FAA_Manufacturing_Date_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_Serial_Number_FAA_Serial_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_Serial_Number_FAA_Serial_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_Supplier_Calibration_Version_Number_FAA_Supplier_Calibration_Version_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_Supplier_Calibration_Version_Number_FAA_Supplier_Calibration_Version_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_Supplier_Hardware_Version_Number_FAA_Supplier_Hardware_Version_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_Supplier_Hardware_Version_Number_FAA_Supplier_Hardware_Version_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_Supplier_Software_Version_Number_FAA_Supplier_Software_Version_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_Supplier_Software_Version_Number_FAA_Supplier_Software_Version_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_System_Supplier_Identifier_Data_FAA_System_Supplier_Identifier_Data_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_System_Supplier_Identifier_Data_FAA_System_Supplier_Identifier_Data_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_customer_Hardware_Baseline_FAA_customer_Hardware_Baseline_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_customer_Hardware_Baseline_FAA_customer_Hardware_Baseline_E_NOT_OK (1U)

# define RTE_E_DataServices_FAA_customer_Hardware_Part_Number_FAA_customer_Hardware_Part_Number_DCM_E_PENDING (10U)

# define RTE_E_DataServices_FAA_customer_Hardware_Part_Number_FAA_customer_Hardware_Part_Number_E_NOT_OK (1U)

# define RTE_E_DataServices_Read_Fingerprint_Programming_Fingerprint_DCM_E_PENDING (10U)

# define RTE_E_DataServices_Read_Fingerprint_Programming_Fingerprint_E_NOT_OK (1U)

# define RTE_E_DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_DCM_E_PENDING (10U)

# define RTE_E_DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# define RTE_E_RoutineServices_CheckProgrammingPreCondition_DCM_E_FORCE_RCRRP (12U)

# define RTE_E_RoutineServices_CheckProgrammingPreCondition_DCM_E_PENDING (10U)

# define RTE_E_RoutineServices_CheckProgrammingPreCondition_E_NOT_OK (1U)

# define RTE_E_SecurityAccess_DcmDspSecurityRow_Level02_DCM_E_COMPARE_KEY_FAILED (11U)

# define RTE_E_SecurityAccess_DcmDspSecurityRow_Level02_DCM_E_PENDING (10U)

# define RTE_E_SecurityAccess_DcmDspSecurityRow_Level02_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_RT_DIAG_SWC_H */

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
