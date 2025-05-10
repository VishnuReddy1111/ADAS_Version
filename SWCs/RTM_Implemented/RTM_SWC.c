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
 *             File:  Rtm_SWC.c
 *           Config:  D:/SIPs/adasplatformdemo/02_EcuCfg/ADAS.dpa
 *        SW-C Type:  Rtm_SWC
 *  Generation Time:  2024-08-05 15:12:28
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2201090
 *
 *      Description:  C-Code implementation template for SW-C <Rtm_SWC>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_Rtm_SWC.h"
#include "Rtm.h"
#include "Rtm_cfg.h"

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
 *********************************************************************************************************************/


#define Rtm_SWC_START_SEC_CODE
#include "Rtm_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Appl_Rtm_Main
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Appl_Rtm_Main_doc
 *********************************************************************************************************************/
static uint32 g_CPULoadOverall_u32;
static uint32 g_CPULoadAverage_u32;
static uint32 g_CPUMax_u32;
static uint32 g_CPUMin_u32;
static uint32 g_RTVehcommmain_RunOverall_u32;
static uint32 g_RTVehcommmain_RunAverage_u32;
static uint32 ComTxMain_RunOverall_u32;
static uint32 ComTxMain_RunAverage_u32;
//uint8 flag = 0u;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Rtm_SWC_CODE) Appl_Rtm_Main(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Appl_Rtm_Main
 *********************************************************************************************************************/
//  if(flag == 1u)
//  {
//   Rtm_Start_CpuLoadMeasurement();
//   flag = 0u;
//  }
//  else if(flag == 2u)
//  {
//   Rtm_Stop_CpuLoadMeasurement();
//   flag = 0u;
//  }









Rtm_PrepareMPSettings(RTM_MP_SETTING_ENABLE_ALL,0u);
Rtm_StartMeasurement(0u);
Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_Rtm_CpuLoadMeasurement,RTM_ITEM_CPU_LOAD_CURRENT,&g_CPULoadOverall_u32);
Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_Rtm_CpuLoadMeasurement,RTM_ITEM_CPU_LOAD_AVERAGE,&g_CPULoadAverage_u32);

Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_Rtm_CpuLoadMeasurement,RTM_ITEM_MAX,&g_CPUMax_u32);
Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_Rtm_CpuLoadMeasurement,RTM_ITEM_MIN,&g_CPUMin_u32);

Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_Rte_Runnable_RT_VehComm_RT_VehComm_Main,RTM_ITEM_RUNTIME_OVERALL,&g_RTVehcommmain_RunOverall_u32);
Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_Rte_Runnable_RT_VehComm_RT_VehComm_Main,RTM_ITEM_RUNTIME_AVERAGE,&g_RTVehcommmain_RunAverage_u32);

Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_SchM_Schedulable_Com_Com_MainFunctionTx_ComMainFunctionTx,RTM_ITEM_RUNTIME_OVERALL,&ComTxMain_RunOverall_u32);
Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_SchM_Schedulable_Com_Com_MainFunctionTx_ComMainFunctionTx,RTM_ITEM_RUNTIME_AVERAGE,&ComTxMain_RunAverage_u32);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

static uint32 g_StmTimer_u32 = 0;
static uint32 *g_Rtm_TimerValue_u32;
Rtm_TimestampType Rtm_GetTimeMeasurement(void)
{
g_Rtm_TimerValue_u32= 0XF0001010; /*Base Address & Offset Address of STM 
Timer 0*/
g_StmTimer_u32 = *g_Rtm_TimerValue_u32;
return g_StmTimer_u32;
}

#define Rtm_SWC_STOP_SEC_CODE
#include "Rtm_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
