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
 *             File:  Appl_Rtm.c
 *           Config:  C:/GITHUBREPO/Workspace_2/adasplatformdemo/02_EcuCfg/ADAS.dpa
 *        SW-C Type:  Appl_Rtm
 *  Generation Time:  2024-07-18 11:56:00
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2201090
 *
 *      Description:  C-Code implementation template for SW-C <Appl_Rtm>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_Appl_Rtm.h"

#include "Rtm.h"
#include "Rtm_Cfg.h"
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


#define Appl_Rtm_START_SEC_CODE
#include "Appl_Rtm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Appl_Rtm_main
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Appl_Rtm_main_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
static uint32 g_CPULoadOverall_u32;
static uint32 g_CPULoadAverage_u32;
static uint32 g_CPUMax_u32;
static uint32 g_CPUMin_u32;
static uint32 g_RTVehcommmain_RunOverall_u32;
static uint32 g_RTVehcommmain_RunAverage_u32;
static uint32 g_ComRxRunOverall_u32;
static uint32 g_ComRxRunAverage_u32;
static uint32 g_ComTxRunOverall_u32;
static uint32 g_ComTxRunAverage_u32;
static uint32 g_Vkms_main_RunOverall_u32;
static uint32 g_Vkms_main_RunAverage_u32;
static uint32 inf_overall;
static uint32 inf_Avg;
static uint8 g_StartCpuLoad_u8 = 0U;

FUNC(void, Appl_Rtm_CODE) Appl_Rtm_main(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Appl_Rtm_main
 *********************************************************************************************************************/
  
  if(g_StartCpuLoad_u8 == 1U)
  {
    Rtm_Start_CpuLoadMeasurement();
    g_StartCpuLoad_u8 = 0U;
  }
  else if(g_StartCpuLoad_u8 == 2U)
  {
     Rtm_Stop_CpuLoadMeasurement();
     g_StartCpuLoad_u8 = 0U;
  }
  else
  {
    ;
  }

  Rtm_PrepareMPSettings(RTM_MP_SETTING_ENABLE_ALL,0u); //To Enable Autostart by C_API method//
  Rtm_StartMeasurement(0);
  
  Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_Rtm_CpuLoadMeasurement,RTM_ITEM_CPU_LOAD_CURRENT,&g_CPULoadOverall_u32);
  Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_Rtm_CpuLoadMeasurement,RTM_ITEM_CPU_LOAD_AVERAGE,&g_CPULoadAverage_u32);

  Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_Rtm_CpuLoadMeasurement,RTM_ITEM_MAX,&g_CPUMax_u32);
  Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_Rtm_CpuLoadMeasurement,RTM_ITEM_MIN,&g_CPUMin_u32);
  
  Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_Rte_Runnable_RT_VehComm_RT_VehComm_Main,RTM_ITEM_RUNTIME_OVERALL,&g_RTVehcommmain_RunOverall_u32);
  Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_Rte_Runnable_RT_VehComm_RT_VehComm_Main,RTM_ITEM_RUNTIME_AVERAGE,&g_RTVehcommmain_RunAverage_u32);

  Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_SchM_Schedulable_Com_Com_MainFunctionRx_ComMainFunctionRx,RTM_ITEM_RUNTIME_OVERALL,&g_ComRxRunOverall_u32);
  Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_SchM_Schedulable_Com_Com_MainFunctionRx_ComMainFunctionRx,RTM_ITEM_RUNTIME_AVERAGE,&g_ComRxRunAverage_u32);

  Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_SchM_Schedulable_Com_Com_MainFunctionTx_ComMainFunctionTx,RTM_ITEM_RUNTIME_OVERALL,&g_ComTxRunOverall_u32);
  Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_SchM_Schedulable_Com_Com_MainFunctionTx_ComMainFunctionTx,RTM_ITEM_RUNTIME_AVERAGE,&g_ComTxRunAverage_u32);

  Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_VKMS_MainFunction,RTM_ITEM_RUNTIME_OVERALL,&g_Vkms_main_RunOverall_u32);
  Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_VKMS_MainFunction,RTM_ITEM_RUNTIME_AVERAGE,&g_Vkms_main_RunAverage_u32);

  Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_Rte_Runnable_RT_VehComm_CPU_Load_Test_Runnable,RTM_ITEM_RUNTIME_OVERALL,&inf_overall);
  Rtm_GetMeasurementItem(RtmConf_RtmMeasurementPoint_Rte_Runnable_RT_VehComm_CPU_Load_Test_Runnable,RTM_ITEM_RUNTIME_AVERAGE,&inf_Avg);




/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

 static uint32 g_StmTimer_u32 = 0;
 static uint32 *g_Rtm_TimerValue_u32;
 Rtm_TimestampType Rtm_GetTimeMeasurement(void)
 {
   g_Rtm_TimerValue_u32= 0XF0001010; /*Base Address & Offset Address of STM Timer 0*/
   g_StmTimer_u32 = *g_Rtm_TimerValue_u32;
   return g_StmTimer_u32;
 }

#define Appl_Rtm_STOP_SEC_CODE
#include "Appl_Rtm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
