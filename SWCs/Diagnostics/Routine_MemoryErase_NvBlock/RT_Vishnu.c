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
 *             File:  RT_Vishnu.c
 *           Config:  D:/SIPs/CARIAD/Backups/ADAS/ADAS/02_EcuCfg/ADAS.dpa
 *        SW-C Type:  RT_Vishnu
 *  Generation Time:  2024-10-21 20:01:23
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2201090
 *
 *      Description:  C-Code implementation template for SW-C <RT_Vishnu>
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
 * ComM_ModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DataPrimitiveType_uint8
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_NegativeResponseCodeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_OpStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_StartDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_StopDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_EventIdType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Dem_EventStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_OperationCycleStateType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Door_Status_Imp
 *   boolean has the value space required to support the mathematical concept of 
 *      binary-valued logic: {true, false}.
 *
 * NvM_RequestResultType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_RT_Vishnu.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 
 
 static uint8 EcuHw[11] = {0x12,0x34,0x1A,0x8B,0x39,0x39,0x54,0xFF,0xFF,0xFF,0xC1};
 static uint8 RT_Data[150] = {0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x10,
                              0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x20,
                              0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x30,
                              0x31,0x32,0x33,0x44,0x35,0x36,0x37,0x38,0x39,0x40,
                              0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x50,
                              0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x60,
                              0x61,0x62,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x70,
                              0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x80,
                              0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x90,
                              0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x100,
                              0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x10,
                              0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x20,
                              0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x30,
                              0x31,0x32,0x33,0x44,0x35,0x36,0x37,0x38,0x39,0x40,
                              0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x50};


 static uint8 AppSwVer[4] = { 0x1A, 0x1B, 0x1A, 0x1B};
 static SG_BMC_HV_10 SG_10_data;
 static SG_BMC_HV_12 SG_12_data;
 static SG_BMC_HV_04 SG_04_data = {0x10,0x15,0x07,0x1,0x1,0x1,0x1,0x1,0x1,0x06,0x15,0x15,0x15,0x15,0x15};
 static SG_BMC_HV_11 SG_11_Data = {0x255,0x15,0x03,0x500,0x501,0x5000,0x5001};
 static AT_SG_BJB_10 Receive10;
 static AT_SG_BJB_11 Receive11;
 static AT_SG_BJB_12 Receive12;
 static AT_SG_BJB_13 Receive13;
 static AT_SG_UI1_01 ReceiveUI1_01;
 static AT_SG_UI1_02 ReceiveUI1_02;
 static AT_SG_UI2_01 ReceiveUI2_01;
 static AT_SG_UI2_02 ReceiveUI2_02;
 static AT_SG_UI2_03 ReceiveUI2_03;
 static uint8 Alive_ounter = 0x00;
 static uint8 Trnellette = 0x00;
 static uint8 CRC_Count = 0x00;
 uint8 RT_PIM[10] = {0x00};


                            

 /////////////////                     CAN-FD ( HCP)           ////////////////////////

 static AT_SG_HVK_03 SG_HVK_03_Data;
 static AT_SG_HVLM_14 SG_HVLM_14_Data;
 static AT_SG_ORU_Control_A_01 SG_ORU_Control_A_01_Data;
 static AT_SG_ORU_Control_D_01 SG_ORU_Control_D_01_Data;
 static AT_SG_OTAMC_D_01 SG_OTAMC_D_01_Data;

#define COM_COT_ENABLE 1 
#if COM_COT_ENABLE

FUNC(void, COM_APPL_CODE) ComInvalidNotification_SG_BJB_10_XIX_BMC_CAN01_5b37bed6_Rx(void)
{
  Rte_Call_Event_DTC_0xe40000_SetEventStatus(DEM_EVENT_STATUS_FAILED);
}

FUNC(void, COM_APPL_CODE) ComTimeoutNotification_SG_BJB_10_XIX_BMC_CAN01_5b37bed6_Rx(void)
{
 Rte_Call_Event_DTC_0xe40011_SetEventStatus(DEM_EVENT_STATUS_FAILED);
}

FUNC(void, COM_APPL_CODE) ComNotification_SG_BJB_10_XIX_BMC_CAN01_5b37bed6_Rx(void)
{
  ;
}
FUNC(void, COM_APPL_CODE) ComNotification_SG_BMC_HV_10_XIX_BMC_CAN01_284dd772_Tx(void)
{
  ;
}

FUNC(void, COM_APPL_CODE) ComTimeoutNotification_SG_BMC_HV_10_XIX_BMC_CAN01_284dd772_Tx(void)
{
  ;
}

FUNC(boolean, COM_APPL_CODE) ComIPduCallout_BJB_10_XIX_BMC_CAN01_E2E_968516b3_Rx(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
  return TRUE;
}

FUNC(boolean, COM_APPL_CODE) ComIPduCallout_BMC_HV_10_XIX_BMC_CAN01_E2E_28add151_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
  return TRUE;
}

FUNC(void, COM_APPL_CODE) ComInvalidNotification_SG_BJB_11_XIX_BMC_CAN01_e2cc653e_Rx(void)
{
  Rte_Call_Event_DTC_0xe40012_SetEventStatus(DEM_EVENT_STATUS_FAILED);
}



#endif
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
 * ComM_ModeType: Integer in interval [0...3]
 * DataPrimitiveType_uint8: Integer in interval [0...255]
 * Dcm_NegativeResponseCodeType: Integer in interval [0...255]
 * Dcm_OpStatusType: Integer in interval [0...64]
 * Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType: Integer in interval [0...255]
 * Dcm_StartDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType: Integer in interval [0...255]
 * Dcm_StopDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType: Integer in interval [0...255]
 * Dem_EventIdType: Integer in interval [1...65535]
 * Dem_EventStatusType: Integer in interval [0...255]
 * Dem_OperationCycleStateType: Integer in interval [0...1]
 * Door_Status_Imp: Boolean
 * NvM_RequestResultType: Integer in interval [0...8]
 * Rte_DT_SG_BJB_11_2: Integer in interval [0...3]
 * Rte_DT_SG_BJB_11_3: Integer in interval [0...511]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BJB_11_4: Integer in interval [0...511]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BJB_11_5: Integer in interval [0...65535]
 *   Unit: [Unit_None], Factor: 10, Offset: 0
 * Rte_DT_SG_BJB_11_6: Integer in interval [0...65535]
 *   Unit: [Unit_None], Factor: 10, Offset: 0
 * Rte_DT_SG_BMC_HV_01_0: Integer in interval [0...15]
 * Rte_DT_SG_BMC_HV_01_10: Integer in interval [0...16383]
 *   Unit: [Unit_Volt], Factor: 0.0625, Offset: 0
 * Rte_DT_SG_BMC_HV_01_11: Integer in interval [0...16383]
 *   Unit: [Unit_Volt], Factor: 0.0625, Offset: 0
 * Rte_DT_SG_BMC_HV_01_12: Integer in interval [0...3]
 * Rte_DT_SG_BMC_HV_01_13: Integer in interval [0...65535]
 *   Unit: [Unit_Amper], Factor: 0.0625, Offset: -2047
 * Rte_DT_SG_BMC_HV_01_14: Integer in interval [0...131071]
 *   Unit: [Unit_Amper], Factor: 0.0625, Offset: -3250
 * Rte_DT_SG_BMC_HV_01_15: Integer in interval [0...255]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_01_3: Integer in interval [0...3]
 * Rte_DT_SG_BMC_HV_01_4: Integer in interval [0...3]
 * Rte_DT_SG_BMC_HV_01_5: Integer in interval [0...3]
 * Rte_DT_SG_BMC_HV_01_6: Integer in interval [0...3]
 * Rte_DT_SG_BMC_HV_01_7: Integer in interval [0...15]
 * Rte_DT_SG_BMC_HV_01_8: Integer in interval [0...16383]
 *   Unit: [Unit_Volt], Factor: 0.0625, Offset: 0
 * Rte_DT_SG_BMC_HV_01_9: Integer in interval [0...255]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_02_0: Integer in interval [0...1023]
 *   Unit: [Unit_PerCent], Factor: 0.1, Offset: 0
 * Rte_DT_SG_BMC_HV_02_1: Integer in interval [0...3]
 * Rte_DT_SG_BMC_HV_02_12: Integer in interval [0...4095]
 *   Unit: [Unit_MilliVolt], Factor: 1, Offset: 1000
 * Rte_DT_SG_BMC_HV_02_13: Integer in interval [0...4095]
 *   Unit: [Unit_MilliVolt], Factor: 1, Offset: 1000
 * Rte_DT_SG_BMC_HV_02_14: Integer in interval [0...6]
 * Rte_DT_SG_BMC_HV_02_15: Integer in interval [0...65535]
 *   Unit: [Unit_Ohm], Factor: 100, Offset: 0
 * Rte_DT_SG_BMC_HV_02_16: Integer in interval [0...65535]
 *   Unit: [Unit_Ohm], Factor: 100, Offset: 0
 * Rte_DT_SG_BMC_HV_02_17: Integer in interval [0...1023]
 *   Unit: [Unit_Volt], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_02_18: Integer in interval [0...8191]
 *   Unit: [Unit_Watt], Factor: 100, Offset: 0
 * Rte_DT_SG_BMC_HV_02_19: Integer in interval [0...8191]
 *   Unit: [Unit_Amper], Factor: 0.2, Offset: 0
 * Rte_DT_SG_BMC_HV_02_2: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_02_20: Integer in interval [0...8191]
 *   Unit: [Unit_Watt], Factor: 100, Offset: 0
 * Rte_DT_SG_BMC_HV_02_21: Integer in interval [0...8191]
 *   Unit: [Unit_Amper], Factor: 0.2, Offset: 0
 * Rte_DT_SG_BMC_HV_02_22: Integer in interval [0...1023]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_02_23: Integer in interval [0...1023]
 *   Unit: [Unit_Volt], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_02_24: Integer in interval [0...15]
 * Rte_DT_SG_BMC_HV_02_25: Integer in interval [0...4095]
 *   Unit: [Unit_PerCent], Factor: 0.05, Offset: -20
 * Rte_DT_SG_BMC_HV_02_26: Integer in interval [0...1023]
 *   Unit: [Unit_PerCent], Factor: 0.2, Offset: 0
 * Rte_DT_SG_BMC_HV_02_27: Integer in interval [0...1023]
 *   Unit: [Unit_PerCent], Factor: 0.2, Offset: 0
 * Rte_DT_SG_BMC_HV_02_28: Integer in interval [0...4095]
 *   Unit: [Unit_Watt], Factor: 200, Offset: 0
 * Rte_DT_SG_BMC_HV_02_29: Integer in interval [0...32767]
 *   Unit: [Unit_Volt], Factor: 0.0625, Offset: -1023
 * Rte_DT_SG_BMC_HV_02_3: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_02_30: Integer in interval [0...3]
 * Rte_DT_SG_BMC_HV_02_31: Integer in interval [0...2047]
 *   Unit: [Unit_PerCent], Factor: 0.05, Offset: 0
 * Rte_DT_SG_BMC_HV_02_32: Integer in interval [0...7]
 * Rte_DT_SG_BMC_HV_02_33: Integer in interval [0...2]
 * Rte_DT_SG_BMC_HV_02_34: Integer in interval [0...2]
 * Rte_DT_SG_BMC_HV_02_35: Integer in interval [0...1023]
 *   Unit: [Unit_Volt], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_02_36: Integer in interval [0...1023]
 *   Unit: [Unit_DegreCelsi], Factor: 0.125, Offset: -40
 * Rte_DT_SG_BMC_HV_02_37: Integer in interval [0...1023]
 *   Unit: [Unit_DegreCelsi], Factor: 0.125, Offset: -40
 * Rte_DT_SG_BMC_HV_02_38: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_02_4: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_02_5: Integer in interval [0...3]
 * Rte_DT_SG_BMC_HV_02_6: Integer in interval [0...1023]
 *   Unit: [Unit_PerCent], Factor: 0.1, Offset: 0
 * Rte_DT_SG_BMC_HV_02_7: Integer in interval [0...65535]
 *   Unit: [Unit_WattHour], Factor: 4, Offset: 0
 * Rte_DT_SG_BMC_HV_02_8: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_02_9: Integer in interval [0...2]
 * Rte_DT_SG_BMC_HV_04_0: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_04_1: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_04_4: Integer in interval [0...7]
 * Rte_DT_SG_BMC_HV_04_5: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_04_6: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_04_7: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_04_8: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_10_0: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_10_3: Integer in interval [0...131071]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_10_4: Integer in interval [0...3]
 * Rte_DT_SG_BMC_HV_10_5: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_10_6: Integer in interval [0...7]
 * Rte_DT_SG_BMC_HV_11_2: Integer in interval [0...3]
 * Rte_DT_SG_BMC_HV_11_3: Integer in interval [0...511]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_11_4: Integer in interval [0...511]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_11_5: Integer in interval [0...65535]
 *   Unit: [Unit_None], Factor: 10, Offset: 0
 * Rte_DT_SG_BMC_HV_11_6: Integer in interval [0...65535]
 *   Unit: [Unit_None], Factor: 10, Offset: 0
 * Rte_DT_SG_BMC_HV_12_2: Integer in interval [0...3]
 * Rte_DT_SG_BMC_HV_12_3: Integer in interval [0...511]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_12_4: Integer in interval [0...511]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_12_5: Integer in interval [0...65535]
 *   Unit: [Unit_Ohm], Factor: 10, Offset: 0
 * Rte_DT_SG_BMC_HV_12_6: Integer in interval [0...65535]
 *   Unit: [Unit_None], Factor: 10, Offset: 0
 * Rte_DT_SG_BMC_HV_13_2: Integer in interval [0...511]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_13_3: Integer in interval [0...511]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_13_4: Integer in interval [0...511]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_13_5: Integer in interval [0...511]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_KS_Hybrid_01_ReqFrame_1: Integer in interval [0...1]
 * Rte_DT_SG_KS_Hybrid_01_ReqFrame_2: Integer in interval [0...1]
 * Rte_DT_SG_KS_Hybrid_01_ReqFrame_7: Integer in interval [0...1]
 * Rte_DT_SG_UI1_01_3: Integer in interval [0...255]
 *   Unit: [Unit_Volt], Factor: 0.1, Offset: 0
 * Rte_DT_SG_UI1_01_4: Integer in interval [0...1048575]
 *   Unit: [Unit_Amper], Factor: 0.005, Offset: -2621
 * SG_BJB_10_BJB_10_BZ_type: Integer in interval [0...255]
 * SG_BJB_10_BJB_10_CRC_type: Integer in interval [0...255]
 * SG_BJB_10_BJB_Lebensdauer_Trennelemente_type: Integer in interval [0...4294967295]
 * SG_BJB_10_BJB_Sperrung_Unterspannung_type: Integer in interval [0...255]
 * SG_BJB_10_BJB_Status_HV_Spannungssensorik_type: Boolean
 * SG_BJB_10_BJB_Status_Trennelemente_type: Integer in interval [0...255]
 * SG_BJB_11_BJB_11_BZ_type: Integer in interval [0...255]
 * SG_BJB_11_BJB_11_CRC_type: Integer in interval [0...255]
 * SG_BJB_11_BJB_Sperrung_Ueberspannung_type: Integer in interval [0...255]
 * SG_BJB_11_BJB_Ueberspannungszaehler_CMC01_type: Integer in interval [0...65535]
 * SG_BJB_11_BJB_Ueberspannungszaehler_CMC02_type: Integer in interval [0...65535]
 * SG_BJB_11_BJB_Uebertemperaturzaehler_CMC01_type: Integer in interval [0...65535]
 * SG_BJB_11_BJB_Uebertemperaturzaehler_CMC02_type: Integer in interval [0...65535]
 * SG_BJB_12_BJB_12_BZ_type: Integer in interval [0...255]
 * SG_BJB_12_BJB_12_CRC_type: Integer in interval [0...255]
 * SG_BJB_12_BJB_Sperrung_Uebertemperatur_type: Integer in interval [0...255]
 * SG_BJB_12_BJB_Ueberspannungszaehler_CMC03_type: Integer in interval [0...65535]
 * SG_BJB_12_BJB_Ueberspannungszaehler_CMC04_type: Integer in interval [0...65535]
 * SG_BJB_12_BJB_Uebertemperaturzaehler_CMC03_type: Integer in interval [0...65535]
 * SG_BJB_12_BJB_Uebertemperaturzaehler_CMC04_type: Integer in interval [0...65535]
 * SG_BJB_13_BJB_13_BZ_type: Integer in interval [0...255]
 * SG_BJB_13_BJB_13_CRC_type: Integer in interval [0...255]
 * SG_BJB_13_BJB_Unterspannungszaehler_CMC01_type: Integer in interval [0...65535]
 * SG_BJB_13_BJB_Unterspannungszaehler_CMC02_type: Integer in interval [0...65535]
 * SG_BJB_13_BJB_Unterspannungszaehler_CMC03_type: Integer in interval [0...65535]
 * SG_BJB_13_BJB_Unterspannungszaehler_CMC04_type: Integer in interval [0...65535]
 * SG_HVK_03_HVK_03_BZ_type: Integer in interval [0...255]
 * SG_HVK_03_HVK_03_CRC_type: Integer in interval [0...255]
 * SG_HVK_03_HVK_BMC_Sollmodus_type: Integer in interval [0...255]
 * SG_HVK_03_HVK_BMC_Spannung_Anf_type: Integer in interval [0...255]
 * SG_HVK_03_HVK_Iso_Messung_Start_type: Integer in interval [0...255]
 * SG_HVK_03_HVK_Istmodus_Anf_type: Boolean
 * SG_HVLM_14_HVLM_14_BZ_type: Integer in interval [0...255]
 * SG_HVLM_14_HVLM_14_CRC_type: Integer in interval [0...255]
 * SG_HVLM_14_HVLM_DC_Aufstartmodus_type: Integer in interval [0...255]
 * SG_HVLM_14_HVLM_Start_Pulserkennung_type: Boolean
 * SG_HVLM_14_HVLM_Steckerstatus_type: Integer in interval [0...255]
 * SG_HVLM_14_HVLM_ZustandLadeablauf_type: Integer in interval [0...255]
 * SG_ORU_Control_A_01_ORU_Control_A_01_BZ_type: Integer in interval [0...255]
 * SG_ORU_Control_A_01_ORU_Control_A_01_CRC_type: Integer in interval [0...255]
 * SG_ORU_Control_A_01_OnlineRemoteUpdateControlA_type: Integer in interval [0...255]
 * SG_ORU_Control_A_01_OnlineRemoteUpdateControlOldA_type: Integer in interval [0...255]
 * SG_ORU_Control_A_01_OruControlReleaseA_type: Integer in interval [0...65535]
 * SG_ORU_Control_D_01_ORU_Control_D_01_BZ_type: Integer in interval [0...255]
 * SG_ORU_Control_D_01_ORU_Control_D_01_CRC_type: Integer in interval [0...255]
 * SG_ORU_Control_D_01_OnlineRemoteUpdateControlD_type: Integer in interval [0...255]
 * SG_ORU_Control_D_01_OnlineRemoteUpdateControlOldD_type: Integer in interval [0...255]
 * SG_ORU_Control_D_01_OruControlReleaseD_type: Integer in interval [0...65535]
 * SG_OTAMC_D_01_OTAMC_D_01_BZ_type: Integer in interval [0...255]
 * SG_OTAMC_D_01_OTAMC_D_01_CRC_type: Integer in interval [0...255]
 * SG_OTAMC_D_01_VehicleProtectedEnvironment_D_type: Integer in interval [0...255]
 * SG_UI1_01_UI1_KL30_Spannung_type: Integer in interval [0...255]
 * SG_UI1_01_UI1_Strom_type: Integer in interval [0...4294967295]
 * SG_UI1_01_UISensorIso_01_BZ_type: Integer in interval [0...255]
 * SG_UI1_01_UISensorIso_01_CRC_type: Integer in interval [0...255]
 * SG_UI1_02_UI1_Spannung1_Schalt_Status_type: Integer in interval [0...255]
 * SG_UI1_02_UI1_Spannung1_type: Integer in interval [0...65535]
 * SG_UI1_02_UI1_Spannung2_Schalt_Status_type: Integer in interval [0...255]
 * SG_UI1_02_UI1_Spannung2_type: Integer in interval [0...65535]
 * SG_UI1_02_UI1_Spannung3_type: Integer in interval [0...65535]
 * SG_UI1_02_UISensorIso_02_BZ_type: Integer in interval [0...255]
 * SG_UI1_02_UISensorIso_02_CRC_type: Integer in interval [0...255]
 * SG_UI2_01_UI2_KL30_Spannung_type: Integer in interval [0...255]
 * SG_UI2_01_UI2_Strom_type: Integer in interval [0...4294967295]
 * SG_UI2_01_UISensorPyro_01_BZ_type: Integer in interval [0...255]
 * SG_UI2_01_UISensorPyro_01_CRC_type: Integer in interval [0...255]
 * SG_UI2_02_UI2_Spannung1_Schalt_Status_type: Integer in interval [0...255]
 * SG_UI2_02_UI2_Spannung1_type: Integer in interval [0...65535]
 * SG_UI2_02_UI2_Spannung2_Schalt_Status_type: Integer in interval [0...255]
 * SG_UI2_02_UI2_Spannung2_type: Integer in interval [0...65535]
 * SG_UI2_02_UI2_Spannung3_type: Integer in interval [0...65535]
 * SG_UI2_02_UISensorPyro_02_BZ_type: Integer in interval [0...255]
 * SG_UI2_02_UISensorPyro_02_CRC_type: Integer in interval [0...255]
 * SG_UI2_03_UI2_HW_Crashleitung_Status_type: Integer in interval [0...255]
 * SG_UI2_03_UI2_Pyro_Status_type: Integer in interval [0...255]
 * SG_UI2_03_UI2_Spannung4_type: Integer in interval [0...65535]
 * SG_UI2_03_UI2_Spannung5_type: Integer in interval [0...65535]
 * SG_UI2_03_UI2_Spannung6_type: Integer in interval [0...65535]
 * SG_UI2_03_UISensorPyro_03_BZ_type: Integer in interval [0...255]
 * SG_UI2_03_UISensorPyro_03_CRC_type: Integer in interval [0...255]
 * boolean: Boolean (standard type)
 * boolean: Boolean (standard type)
 * dtRef_VOID: DataReference
 * dtRef_const_VOID: DataReference
 * uint16: Integer in interval [0...65535] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Array Types:
 * ============
 * DataArrayType_uint8_3: Array with 3 element(s) of type uint8
 * DataArrayType_uint8_5: Array with 5 element(s) of type uint8
 * Dcm_Data100ByteType: Array with 100 element(s) of type uint8
 * Dcm_Data10ByteType: Array with 10 element(s) of type uint8
 * Dcm_Data11ByteType: Array with 11 element(s) of type uint8
 * Dcm_Data150ByteType: Array with 150 element(s) of type uint8
 * Dcm_Data4ByteType: Array with 4 element(s) of type uint8
 * Dcm_Data5ByteType: Array with 5 element(s) of type uint8
 * Dcm_Data8ByteType: Array with 8 element(s) of type uint8
 * Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataType: Array with 1 element(s) of type Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType
 * Dcm_StartDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataType: Array with 1 element(s) of type Dcm_StartDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType
 * Dcm_StopDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataType: Array with 1 element(s) of type Dcm_StopDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType
 * KS_Hybrid_01_ChK: Array with 8 element(s) of type uint8
 * KS_Hybrid_01_ReK: Array with 8 element(s) of type uint8
 *
 * Record Types:
 * =============
 * AT_SG_BJB_10: Record with elements
 *   BJB_10_BZ of type SG_BJB_10_BJB_10_BZ_type
 *   BJB_10_CRC of type SG_BJB_10_BJB_10_CRC_type
 *   BJB_Lebensdauer_Trennelemente of type SG_BJB_10_BJB_Lebensdauer_Trennelemente_type
 *   BJB_Sperrung_Unterspannung of type SG_BJB_10_BJB_Sperrung_Unterspannung_type
 *   BJB_Status_HV_Spannungssensorik of type SG_BJB_10_BJB_Status_HV_Spannungssensorik_type
 *   BJB_Status_Trennelemente of type SG_BJB_10_BJB_Status_Trennelemente_type
 * AT_SG_BJB_11: Record with elements
 *   BJB_11_BZ of type SG_BJB_11_BJB_11_BZ_type
 *   BJB_11_CRC of type SG_BJB_11_BJB_11_CRC_type
 *   BJB_Sperrung_Ueberspannung of type SG_BJB_11_BJB_Sperrung_Ueberspannung_type
 *   BJB_Ueberspannungszaehler_CMC01 of type SG_BJB_11_BJB_Ueberspannungszaehler_CMC01_type
 *   BJB_Ueberspannungszaehler_CMC02 of type SG_BJB_11_BJB_Ueberspannungszaehler_CMC02_type
 *   BJB_Uebertemperaturzaehler_CMC01 of type SG_BJB_11_BJB_Uebertemperaturzaehler_CMC01_type
 *   BJB_Uebertemperaturzaehler_CMC02 of type SG_BJB_11_BJB_Uebertemperaturzaehler_CMC02_type
 * AT_SG_BJB_12: Record with elements
 *   BJB_12_BZ of type SG_BJB_12_BJB_12_BZ_type
 *   BJB_12_CRC of type SG_BJB_12_BJB_12_CRC_type
 *   BJB_Sperrung_Uebertemperatur of type SG_BJB_12_BJB_Sperrung_Uebertemperatur_type
 *   BJB_Ueberspannungszaehler_CMC03 of type SG_BJB_12_BJB_Ueberspannungszaehler_CMC03_type
 *   BJB_Ueberspannungszaehler_CMC04 of type SG_BJB_12_BJB_Ueberspannungszaehler_CMC04_type
 *   BJB_Uebertemperaturzaehler_CMC03 of type SG_BJB_12_BJB_Uebertemperaturzaehler_CMC03_type
 *   BJB_Uebertemperaturzaehler_CMC04 of type SG_BJB_12_BJB_Uebertemperaturzaehler_CMC04_type
 * AT_SG_BJB_13: Record with elements
 *   BJB_13_BZ of type SG_BJB_13_BJB_13_BZ_type
 *   BJB_13_CRC of type SG_BJB_13_BJB_13_CRC_type
 *   BJB_Unterspannungszaehler_CMC01 of type SG_BJB_13_BJB_Unterspannungszaehler_CMC01_type
 *   BJB_Unterspannungszaehler_CMC02 of type SG_BJB_13_BJB_Unterspannungszaehler_CMC02_type
 *   BJB_Unterspannungszaehler_CMC03 of type SG_BJB_13_BJB_Unterspannungszaehler_CMC03_type
 *   BJB_Unterspannungszaehler_CMC04 of type SG_BJB_13_BJB_Unterspannungszaehler_CMC04_type
 * AT_SG_HVK_03: Record with elements
 *   HVK_03_BZ of type SG_HVK_03_HVK_03_BZ_type
 *   HVK_03_CRC of type SG_HVK_03_HVK_03_CRC_type
 *   HVK_BMC_Sollmodus of type SG_HVK_03_HVK_BMC_Sollmodus_type
 *   HVK_BMC_Spannung_Anf of type SG_HVK_03_HVK_BMC_Spannung_Anf_type
 *   HVK_Iso_Messung_Start of type SG_HVK_03_HVK_Iso_Messung_Start_type
 *   HVK_Istmodus_Anf of type SG_HVK_03_HVK_Istmodus_Anf_type
 * AT_SG_HVLM_14: Record with elements
 *   HVLM_14_BZ of type SG_HVLM_14_HVLM_14_BZ_type
 *   HVLM_14_CRC of type SG_HVLM_14_HVLM_14_CRC_type
 *   HVLM_DC_Aufstartmodus of type SG_HVLM_14_HVLM_DC_Aufstartmodus_type
 *   HVLM_Start_Pulserkennung of type SG_HVLM_14_HVLM_Start_Pulserkennung_type
 *   HVLM_Steckerstatus of type SG_HVLM_14_HVLM_Steckerstatus_type
 *   HVLM_ZustandLadeablauf of type SG_HVLM_14_HVLM_ZustandLadeablauf_type
 * AT_SG_ORU_Control_A_01: Record with elements
 *   ORU_Control_A_01_BZ of type SG_ORU_Control_A_01_ORU_Control_A_01_BZ_type
 *   ORU_Control_A_01_CRC of type SG_ORU_Control_A_01_ORU_Control_A_01_CRC_type
 *   OnlineRemoteUpdateControlA of type SG_ORU_Control_A_01_OnlineRemoteUpdateControlA_type
 *   OnlineRemoteUpdateControlOldA of type SG_ORU_Control_A_01_OnlineRemoteUpdateControlOldA_type
 *   OruControlReleaseA of type SG_ORU_Control_A_01_OruControlReleaseA_type
 * AT_SG_ORU_Control_D_01: Record with elements
 *   ORU_Control_D_01_BZ of type SG_ORU_Control_D_01_ORU_Control_D_01_BZ_type
 *   ORU_Control_D_01_CRC of type SG_ORU_Control_D_01_ORU_Control_D_01_CRC_type
 *   OnlineRemoteUpdateControlD of type SG_ORU_Control_D_01_OnlineRemoteUpdateControlD_type
 *   OnlineRemoteUpdateControlOldD of type SG_ORU_Control_D_01_OnlineRemoteUpdateControlOldD_type
 *   OruControlReleaseD of type SG_ORU_Control_D_01_OruControlReleaseD_type
 * AT_SG_OTAMC_D_01: Record with elements
 *   OTAMC_D_01_BZ of type SG_OTAMC_D_01_OTAMC_D_01_BZ_type
 *   OTAMC_D_01_CRC of type SG_OTAMC_D_01_OTAMC_D_01_CRC_type
 *   VehicleProtectedEnvironment_D of type SG_OTAMC_D_01_VehicleProtectedEnvironment_D_type
 * AT_SG_UI1_01: Record with elements
 *   UI1_KL30_Spannung of type SG_UI1_01_UI1_KL30_Spannung_type
 *   UI1_Strom of type SG_UI1_01_UI1_Strom_type
 *   UISensorIso_01_BZ of type SG_UI1_01_UISensorIso_01_BZ_type
 *   UISensorIso_01_CRC of type SG_UI1_01_UISensorIso_01_CRC_type
 * AT_SG_UI1_02: Record with elements
 *   UI1_Spannung1 of type SG_UI1_02_UI1_Spannung1_type
 *   UI1_Spannung1_Schalt_Status of type SG_UI1_02_UI1_Spannung1_Schalt_Status_type
 *   UI1_Spannung2 of type SG_UI1_02_UI1_Spannung2_type
 *   UI1_Spannung2_Schalt_Status of type SG_UI1_02_UI1_Spannung2_Schalt_Status_type
 *   UI1_Spannung3 of type SG_UI1_02_UI1_Spannung3_type
 *   UISensorIso_02_BZ of type SG_UI1_02_UISensorIso_02_BZ_type
 *   UISensorIso_02_CRC of type SG_UI1_02_UISensorIso_02_CRC_type
 * AT_SG_UI2_01: Record with elements
 *   UI2_KL30_Spannung of type SG_UI2_01_UI2_KL30_Spannung_type
 *   UI2_Strom of type SG_UI2_01_UI2_Strom_type
 *   UISensorPyro_01_BZ of type SG_UI2_01_UISensorPyro_01_BZ_type
 *   UISensorPyro_01_CRC of type SG_UI2_01_UISensorPyro_01_CRC_type
 * AT_SG_UI2_02: Record with elements
 *   UI2_Spannung1 of type SG_UI2_02_UI2_Spannung1_type
 *   UI2_Spannung1_Schalt_Status of type SG_UI2_02_UI2_Spannung1_Schalt_Status_type
 *   UI2_Spannung2 of type SG_UI2_02_UI2_Spannung2_type
 *   UI2_Spannung2_Schalt_Status of type SG_UI2_02_UI2_Spannung2_Schalt_Status_type
 *   UI2_Spannung3 of type SG_UI2_02_UI2_Spannung3_type
 *   UISensorPyro_02_BZ of type SG_UI2_02_UISensorPyro_02_BZ_type
 *   UISensorPyro_02_CRC of type SG_UI2_02_UISensorPyro_02_CRC_type
 * AT_SG_UI2_03: Record with elements
 *   UI2_HW_Crashleitung_Status of type SG_UI2_03_UI2_HW_Crashleitung_Status_type
 *   UI2_Pyro_Status of type SG_UI2_03_UI2_Pyro_Status_type
 *   UI2_Spannung4 of type SG_UI2_03_UI2_Spannung4_type
 *   UI2_Spannung5 of type SG_UI2_03_UI2_Spannung5_type
 *   UI2_Spannung6 of type SG_UI2_03_UI2_Spannung6_type
 *   UISensorPyro_03_BZ of type SG_UI2_03_UISensorPyro_03_BZ_type
 *   UISensorPyro_03_CRC of type SG_UI2_03_UISensorPyro_03_CRC_type
 * SG_BJB_11: Record with elements
 *   BJB_11_BZ of type uint8
 *   BJB_11_CRC of type uint8
 *   BJB_Sperrung_Ueberspannung of type Rte_DT_SG_BJB_11_2
 *   BJB_Ueberspannungszaehler_CMC01 of type Rte_DT_SG_BJB_11_3
 *   BJB_Ueberspannungszaehler_CMC02 of type Rte_DT_SG_BJB_11_4
 *   BJB_Uebertemperaturzaehler_CMC01 of type Rte_DT_SG_BJB_11_5
 *   BJB_Uebertemperaturzaehler_CMC02 of type Rte_DT_SG_BJB_11_6
 * SG_BMC_HV_01: Record with elements
 *   BMC_Bankstatus of type Rte_DT_SG_BMC_HV_01_0
 *   BMC_HV_01_BZ of type uint8
 *   BMC_HV_01_CRC of type uint8
 *   BMC_HVK_EoHVL_Status of type Rte_DT_SG_BMC_HV_01_3
 *   BMC_HVK_Fehler_HVIL of type Rte_DT_SG_BMC_HV_01_4
 *   BMC_HVK_Fehler_Intern of type Rte_DT_SG_BMC_HV_01_5
 *   BMC_HVK_Fehler_SD of type Rte_DT_SG_BMC_HV_01_6
 *   BMC_Modus of type Rte_DT_SG_BMC_HV_01_7
 *   BMC_Spannung of type Rte_DT_SG_BMC_HV_01_8
 *   BMC_Spannung_Messzeit of type Rte_DT_SG_BMC_HV_01_9
 *   BMC_Spannung_ZwischenKreis of type Rte_DT_SG_BMC_HV_01_10
 *   BMC_Spannung_ZwischenKreis_2 of type Rte_DT_SG_BMC_HV_01_11
 *   BMC_Status_Spgfreiheit of type Rte_DT_SG_BMC_HV_01_12
 *   BMC_Strom of type Rte_DT_SG_BMC_HV_01_13
 *   BMC_Strom_02 of type Rte_DT_SG_BMC_HV_01_14
 *   BMC_Strom_Messzeit of type Rte_DT_SG_BMC_HV_01_15
 *   SignalVoid_BMC_HV_01_0 of type uint8
 * SG_BMC_HV_02: Record with elements
 *   Anzeige_SOC of type Rte_DT_SG_BMC_HV_02_0
 *   BMC_AC_Laden of type Rte_DT_SG_BMC_HV_02_1
 *   BMC_Bank_Notlauf_erlaubt of type Rte_DT_SG_BMC_HV_02_2
 *   BMC_Bank_parallel_erlaubt of type Rte_DT_SG_BMC_HV_02_3
 *   BMC_Bank_seriell_erlaubt of type Rte_DT_SG_BMC_HV_02_4
 *   BMC_DC_Laden of type Rte_DT_SG_BMC_HV_02_5
 *   BMC_Energie_Sockel_SoC of type Rte_DT_SG_BMC_HV_02_6
 *   BMC_Energieinhalt of type Rte_DT_SG_BMC_HV_02_7
 *   BMC_Fehler_Leistungsred of type Rte_DT_SG_BMC_HV_02_8
 *   BMC_Fehler_Warnung of type Rte_DT_SG_BMC_HV_02_9
 *   BMC_HV_02_BZ of type uint8
 *   BMC_HV_02_CRC of type uint8
 *   BMC_IstZellspannungMax of type Rte_DT_SG_BMC_HV_02_12
 *   BMC_IstZellspannungMin of type Rte_DT_SG_BMC_HV_02_13
 *   BMC_IWU_Status of type Rte_DT_SG_BMC_HV_02_14
 *   BMC_IWU_Wert_neg of type Rte_DT_SG_BMC_HV_02_15
 *   BMC_IWU_Wert_pos of type Rte_DT_SG_BMC_HV_02_16
 *   BMC_Leerlaufspannung of type Rte_DT_SG_BMC_HV_02_17
 *   BMC_Max_Entladeleistung of type Rte_DT_SG_BMC_HV_02_18
 *   BMC_Max_Entladestrom of type Rte_DT_SG_BMC_HV_02_19
 *   BMC_Max_Ladeleistung of type Rte_DT_SG_BMC_HV_02_20
 *   BMC_Max_Ladestrom of type Rte_DT_SG_BMC_HV_02_21
 *   BMC_MinDyn_Entladespannung of type Rte_DT_SG_BMC_HV_02_22
 *   BMC_MinDyn_Ladespannung of type Rte_DT_SG_BMC_HV_02_23
 *   BMC_MMTR_Status of type Rte_DT_SG_BMC_HV_02_24
 *   BMC_NutzbarerSOC of type Rte_DT_SG_BMC_HV_02_25
 *   BMC_PerfInd_Entladen of type Rte_DT_SG_BMC_HV_02_26
 *   BMC_PerfInd_Laden of type Rte_DT_SG_BMC_HV_02_27
 *   BMC_PredLeistung_StuetzungNV of type Rte_DT_SG_BMC_HV_02_28
 *   BMC_Spannung_DC_Ladesaeule of type Rte_DT_SG_BMC_HV_02_29
 *   BMC_Status_DCLS of type Rte_DT_SG_BMC_HV_02_30
 *   BMC_TechnischerSOC of type Rte_DT_SG_BMC_HV_02_31
 *   BMC_Unterboden_Warnung of type Rte_DT_SG_BMC_HV_02_32
 *   BMC_Verbauinfo_ACSchuetz of type Rte_DT_SG_BMC_HV_02_33
 *   BMC_Verbauinfo_Bank of type Rte_DT_SG_BMC_HV_02_34
 *   BMC_Vorlade_Zielspannung of type Rte_DT_SG_BMC_HV_02_35
 *   BMC_ZellTemp_virtuell_max of type Rte_DT_SG_BMC_HV_02_36
 *   BMC_ZellTemp_virtuell_min of type Rte_DT_SG_BMC_HV_02_37
 *   Hybrid_01_OBD_Lampe_Anf of type Rte_DT_SG_BMC_HV_02_38
 *   SignalVoid_BMC_HV_02_0 of type uint8
 *   SignalVoid_BMC_HV_02_1 of type uint8
 *   SignalVoid_BMC_HV_02_2 of type uint8
 *   SignalVoid_BMC_HV_02_3 of type uint8
 *   SignalVoid_BMC_HV_02_4 of type uint8
 *   SignalVoid_BMC_HV_02_5 of type uint8
 * SG_BMC_HV_04: Record with elements
 *   BMC_Dev_Freigabe of type Rte_DT_SG_BMC_HV_04_0
 *   BMC_Flash_Freigabe of type Rte_DT_SG_BMC_HV_04_1
 *   BMC_HV_04_BZ of type uint8
 *   BMC_HV_04_CRC of type uint8
 *   BMC_Iso_Mode_Anf of type Rte_DT_SG_BMC_HV_04_4
 *   BMC_UI1_Spannung1_Schalt_Anf of type Rte_DT_SG_BMC_HV_04_5
 *   BMC_UI1_Spannung2_Schalt_Anf of type Rte_DT_SG_BMC_HV_04_6
 *   BMC_UI2_Spannung1_Schalt_Anf of type Rte_DT_SG_BMC_HV_04_7
 *   BMC_UI2_Spannung2_Schalt_Anf of type Rte_DT_SG_BMC_HV_04_8
 *   SignalVoid_BMC_HV_04_0 of type uint8
 *   SignalVoid_BMC_HV_04_1 of type uint8
 *   SignalVoid_BMC_HV_04_2 of type uint8
 *   SignalVoid_BMC_HV_04_3 of type uint8
 *   SignalVoid_BMC_HV_04_4 of type uint8
 *   SignalVoid_BMC_HV_04_5 of type uint8
 * SG_BMC_HV_10: Record with elements
 *   BMC_Datenuebernahme_Anf of type Rte_DT_SG_BMC_HV_10_0
 *   BMC_HV_10_BZ of type uint8
 *   BMC_HV_10_CRC of type uint8
 *   BMC_Lebensdauer_Trennelemente of type Rte_DT_SG_BMC_HV_10_3
 *   BMC_Sperrung_Unterspannung of type Rte_DT_SG_BMC_HV_10_4
 *   BMC_Status_HV_Spannungssensorik of type Rte_DT_SG_BMC_HV_10_5
 *   BMC_Status_Trennelemente of type Rte_DT_SG_BMC_HV_10_6
 *   SignalVoid_BMC_HV_10_0 of type uint8
 *   SignalVoid_BMC_HV_10_1 of type uint8
 *   SignalVoid_BMC_HV_10_2 of type uint8
 *   SignalVoid_BMC_HV_10_3 of type uint8
 * SG_BMC_HV_11: Record with elements
 *   BMC_HV_11_BZ of type uint8
 *   BMC_HV_11_CRC of type uint8
 *   BMC_Sperrung_Ueberspannung of type Rte_DT_SG_BMC_HV_11_2
 *   BMC_Ueberspannungszaehler_CMC01 of type Rte_DT_SG_BMC_HV_11_3
 *   BMC_Ueberspannungszaehler_CMC02 of type Rte_DT_SG_BMC_HV_11_4
 *   BMC_Uebertemperaturzaehler_CMC01 of type Rte_DT_SG_BMC_HV_11_5
 *   BMC_Uebertemperaturzaehler_CMC02 of type Rte_DT_SG_BMC_HV_11_6
 * SG_BMC_HV_12: Record with elements
 *   BMC_HV_12_BZ of type uint8
 *   BMC_HV_12_CRC of type uint8
 *   BMC_Sperrung_Uebertemperatur of type Rte_DT_SG_BMC_HV_12_2
 *   BMC_Ueberspannungszaehler_CMC03 of type Rte_DT_SG_BMC_HV_12_3
 *   BMC_Ueberspannungszaehler_CMC04 of type Rte_DT_SG_BMC_HV_12_4
 *   BMC_Uebertemperaturzaehler_CMC03 of type Rte_DT_SG_BMC_HV_12_5
 *   BMC_Uebertemperaturzaehler_CMC04 of type Rte_DT_SG_BMC_HV_12_6
 * SG_BMC_HV_13: Record with elements
 *   BMC_HV_13_BZ of type uint8
 *   BMC_HV_13_CRC of type uint8
 *   BMC_Unterspannungszaehler_CMC01 of type Rte_DT_SG_BMC_HV_13_2
 *   BMC_Unterspannungszaehler_CMC02 of type Rte_DT_SG_BMC_HV_13_3
 *   BMC_Unterspannungszaehler_CMC03 of type Rte_DT_SG_BMC_HV_13_4
 *   BMC_Unterspannungszaehler_CMC04 of type Rte_DT_SG_BMC_HV_13_5
 *   SignalVoid_BMC_HV_13_0 of type uint8
 *   SignalVoid_BMC_HV_13_1 of type uint8
 * SG_KS_Hybrid_01_Challenge_K: Record with elements
 *   KS_Hybrid_01_ChK of type KS_Hybrid_01_ChK
 *   KS_Hybrid_01_ChK_IKACtr of type uint8
 *   KS_Hybrid_01_ChK_SID of type uint16
 * SG_KS_Hybrid_01_ReqFrame: Record with elements
 *   KS_Hybrid_01_Req_ErrCtr of type uint8
 *   KS_Hybrid_01_Req_IKA_Retry of type Rte_DT_SG_KS_Hybrid_01_ReqFrame_1
 *   KS_Hybrid_01_Req_Prio of type Rte_DT_SG_KS_Hybrid_01_ReqFrame_2
 *   KS_Hybrid_01_Req_SID of type uint16
 *   KS_Hybrid_01_Req_SWMaj of type uint8
 *   KS_Hybrid_01_Req_SWMin of type uint8
 *   KS_Hybrid_01_Req_SWPat of type uint8
 *   KS_Hybrid_01_Req_VKMS_Err of type Rte_DT_SG_KS_Hybrid_01_ReqFrame_7
 * SG_KS_Hybrid_01_Response_K: Record with elements
 *   KS_Hybrid_01_ReK of type KS_Hybrid_01_ReK
 *   KS_Hybrid_01_ReK_IKACtr of type uint8
 *   KS_Hybrid_01_ReK_SID of type uint16
 * SG_UI1_01: Record with elements
 *   SignalVoid_UI1_01_0 of type uint8
 *   SignalVoid_UI1_01_1 of type uint8
 *   SignalVoid_UI1_01_2 of type uint8
 *   UI1_KL30_Spannung of type Rte_DT_SG_UI1_01_3
 *   UI1_Strom of type Rte_DT_SG_UI1_01_4
 *   UISensorIso_01_BZ of type uint8
 *   UISensorIso_01_CRC of type uint8
 * Vishnu_Imp_DT: Record with elements
 *   Vishnu_ID of type uint8
 *   Vishnu_Sal of type uint8
 *
 *********************************************************************************************************************/


#define RT_Vishnu_START_SEC_CODE
#include "RT_Vishnu_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_DID_0xF404_Calculate_Load_Value_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_DID_0xF404_Calculate_Load_Value>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_DID_0xF404_Calculate_Load_Value_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_0xF404_Calculate_Load_Value_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xF404_Calculate_Load_Value_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_DID_0xF404_Calculate_Load_Value_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xF404_Calculate_Load_Value_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 16;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_DID_0xF405_Engine_Coolent_temperature_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_DID_0xF405_Engine_Coolent_temperature>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_DID_0xF405_Engine_Coolent_temperature_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_0xF405_Engine_Coolent_temperature_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xF405_Engine_Coolent_temperature_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_DID_0xF405_Engine_Coolent_temperature_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xF405_Engine_Coolent_temperature_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 17;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_DID_0xF40C_Engine_RPM_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_DID_0xF40C_Engine_RPM>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_DID_0xF40C_Engine_RPM_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_0xF40C_Engine_RPM_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xF40C_Engine_RPM_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_DID_0xF40C_Engine_RPM_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xF40C_Engine_RPM_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 18;
  Data[1] = 19;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_DID_0xF40D_Vehicle_Speed_Sensor_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_DID_0xF40D_Vehicle_Speed_Sensor>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_DID_0xF40D_Vehicle_Speed_Sensor_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_0xF40D_Vehicle_Speed_Sensor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xF40D_Vehicle_Speed_Sensor_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_DID_0xF40D_Vehicle_Speed_Sensor_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xF40D_Vehicle_Speed_Sensor_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 20;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_DID_0xF41F_Time_Since_Engin_Start_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_DID_0xF41F_Time_Since_Engin_Start>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_DID_0xF41F_Time_Since_Engin_Start_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_0xF41F_Time_Since_Engin_Start_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xF41F_Time_Since_Engin_Start_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_DID_0xF41F_Time_Since_Engin_Start_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xF41F_Time_Since_Engin_Start_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 21;
  Data[1] = 22;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_DID_0xF442_Controle_Module_Voltage_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_DID_0xF442_Controle_Module_Voltage>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_DID_0xF442_Controle_Module_Voltage_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_0xF442_Controle_Module_Voltage_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xF442_Controle_Module_Voltage_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_DID_0xF442_Controle_Module_Voltage_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xF442_Controle_Module_Voltage_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 23;
  Data[1] = 24;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_DID_0xF449_Accelerator_Pedal_Position_D_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_DID_0xF449_Accelerator_Pedal_Position_D>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_DID_0xF449_Accelerator_Pedal_Position_D_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DID_0xF449_Accelerator_Pedal_Position_D_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xF449_Accelerator_Pedal_Position_D_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_DID_0xF449_Accelerator_Pedal_Position_D_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_DID_0xF449_Accelerator_Pedal_Position_D_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 25;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_Data_StandardDTCInformation_Param_DTCPrior_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_Data_StandardDTCInformation_Param_DTCPrior>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_Data_StandardDTCInformation_Param_DTCPrior_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_Data_StandardDTCInformation_Param_DTCPrior_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_StandardDTCInformation_Param_DTCPrior_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_StandardDTCInformation_Param_DTCPrior_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_StandardDTCInformation_Param_DTCPrior_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 11;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_Data_StandardDTCInformation_Param_OccurCount_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * This runnable is never executed by the RTE.
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_StandardDTCInformation_Param_OccurCount_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, RT_Vishnu_CODE) CBReadData_Data_StandardDTCInformation_Param_OccurCount_ReadData(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_StandardDTCInformation_Param_OccurCount_ReadData
 *********************************************************************************************************************/
   

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_Data_StandardFreezeFrame1_Param_AgingCount_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_Data_StandardFreezeFrame1_Param_AgingCount>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_Data_StandardFreezeFrame1_Param_AgingCount_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_Data_StandardFreezeFrame1_Param_AgingCount_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_StandardFreezeFrame1_Param_AgingCount_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_StandardFreezeFrame1_Param_AgingCount_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_StandardFreezeFrame1_Param_AgingCount_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 16;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_Data_StandardFreezeFrame1_Param_KmMilea_1_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_Data_StandardFreezeFrame1_Param_KmMilea_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_Data_StandardFreezeFrame1_Param_KmMilea_1_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_3
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_Data_StandardFreezeFrame1_Param_KmMilea_1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_StandardFreezeFrame1_Param_KmMilea_1_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_StandardFreezeFrame1_Param_KmMilea_1_ReadData(P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_StandardFreezeFrame1_Param_KmMilea_1_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 17;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_Data_StandardFreezeFrame1_Param_Reser_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_Data_StandardFreezeFrame1_Param_Reser>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_Data_StandardFreezeFrame1_Param_Reser_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_Data_StandardFreezeFrame1_Param_Reser_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_StandardFreezeFrame1_Param_Reser_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_StandardFreezeFrame1_Param_Reser_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_StandardFreezeFrame1_Param_Reser_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 18;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_Data_StandardFreezeFrame1_Param_TimeStamp_STRUC_Bitfi_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_Data_StandardFreezeFrame1_Param_TimeStamp_STRUC_Bitfi>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_Data_StandardFreezeFrame1_Param_TimeStamp_STRUC_Bitfi_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_5
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_Data_StandardFreezeFrame1_Param_TimeStamp_STRUC_Bitfi_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_StandardFreezeFrame1_Param_TimeStamp_STRUC_Bitfi_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_StandardFreezeFrame1_Param_TimeStamp_STRUC_Bitfi_ReadData(P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_StandardFreezeFrame1_Param_TimeStamp_STRUC_Bitfi_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 19;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_Data_SupplementalMonitorActivityData_Param_MonitActivNumerCount_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_Data_SupplementalMonitorActivityData_Param_MonitActivNumerCount>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_Data_SupplementalMonitorActivityData_Param_MonitActivNumerCount_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_Data_SupplementalMonitorActivityData_Param_MonitActivNumerCount_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_SupplementalMonitorActivityData_Param_MonitActivNumerCount_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_SupplementalMonitorActivityData_Param_MonitActivNumerCount_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_SupplementalMonitorActivityData_Param_MonitActivNumerCount_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 20;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_Data_SupplementalMonitorActivityData_Param_StoreMonitActivRatio_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_Data_SupplementalMonitorActivityData_Param_StoreMonitActivRatio>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_Data_SupplementalMonitorActivityData_Param_StoreMonitActivRatio_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_Data_SupplementalMonitorActivityData_Param_StoreMonitActivRatio_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_SupplementalMonitorActivityData_Param_StoreMonitActivRatio_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_SupplementalMonitorActivityData_Param_StoreMonitActivRatio_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_SupplementalMonitorActivityData_Param_StoreMonitActivRatio_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 21;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_Data_Vishnu_ExtData_Param_VishnDOB_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_Data_Vishnu_ExtData_Param_VishnDOB>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_Data_Vishnu_ExtData_Param_VishnDOB_ReadData(Dem_EventIdType EventId, DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_Data_Vishnu_ExtData_Param_VishnDOB_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_Vishnu_ExtData_Param_VishnDOB_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_Vishnu_ExtData_Param_VishnDOB_ReadData(Dem_EventIdType EventId, P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_Vishnu_ExtData_Param_VishnDOB_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = EventId;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_Data_Vishnu_ExtData_Param_VishnRes_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_Data_Vishnu_ExtData_Param_VishnRes>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_Data_Vishnu_ExtData_Param_VishnRes_ReadData(DataPrimitiveType_uint8 *Data)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_Data_Vishnu_ExtData_Param_VishnRes_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_Vishnu_ExtData_Param_VishnRes_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_Vishnu_ExtData_Param_VishnRes_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_Vishnu_ExtData_Param_VishnRes_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = 15;
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DTC_Testing
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_Event_DTC_0x10000a_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0x10000b_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0xd12000_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0xd12001_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0xd12002_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0xd12004_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0xd12011_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0xd12025_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0xd12026_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0xd12101_ResetEventStatus(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0xd12102_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0xd12103_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0xe40000_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0xe40011_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0xe40012_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0xe40013_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_OpCycle_RT_Test_OpCycle_GetOperationCycleState(Dem_OperationCycleStateType *CycleState)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_OperationCycle_E_NOT_OK, RTE_E_OperationCycle_E_OK
 *   Std_ReturnType Rte_Call_OpCycle_RT_Test_OpCycle_SetOperationCycleState(Dem_OperationCycleStateType CycleState)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_OperationCycle_E_NOT_OK, RTE_E_OperationCycle_E_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DTC_Testing_doc
 *********************************************************************************************************************/

static uint8 Debouce_Event_0x10000A = 0xFF;
static uint8 OpCycle_Flag = 0xFF;
static uint8 DTC_Overstore = 0xFF;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, RT_Vishnu_CODE) DTC_Testing(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DTC_Testing
 *********************************************************************************************************************/


if(DTC_Overstore == 1)
{
Rte_Call_Event_DTC_0xd12000_SetEventStatus(DEM_EVENT_STATUS_FAILED);
Rte_Call_Event_DTC_0xd12001_SetEventStatus(DEM_EVENT_STATUS_FAILED);
Rte_Call_Event_DTC_0xd12002_SetEventStatus(DEM_EVENT_STATUS_FAILED);
Rte_Call_Event_DTC_0xd12004_SetEventStatus(DEM_EVENT_STATUS_FAILED);
Rte_Call_Event_DTC_0xd12011_SetEventStatus(DEM_EVENT_STATUS_FAILED);
Rte_Call_Event_DTC_0xd12025_SetEventStatus(DEM_EVENT_STATUS_FAILED);
Rte_Call_Event_DTC_0xd12026_SetEventStatus(DEM_EVENT_STATUS_FAILED);
Rte_Call_Event_DTC_0xd12102_SetEventStatus(DEM_EVENT_STATUS_FAILED);
Rte_Call_Event_DTC_0xd12103_SetEventStatus(DEM_EVENT_STATUS_FAILED);

DTC_Overstore = 0u;
}



//******************************  Operation Cycle Testing ( Start/Stop)  **************************************/

if(OpCycle_Flag == 1u)
{
Rte_Call_OpCycle_RT_Test_OpCycle_SetOperationCycleState(DEM_CYCLE_STATE_START); // Operation cycle Start 
OpCycle_Flag = 0u;
}
else if(OpCycle_Flag == 2u)
{
Rte_Call_OpCycle_RT_Test_OpCycle_SetOperationCycleState(DEM_CYCLE_STATE_END);  // Operation cycle Stop  
OpCycle_Flag = 0u; 
}


//Note : When operation cycle completed successfully only, then only count will increase 



//******************************  Counter Debouncing Testing **************************************/



 //********************* failure Threshold Start ******************************************/

 //*******   Debouncing failure Threshold = 5 
 //*******   Debouncing Increment Step Size = 1 

   //   Repeat step 1 to 5

 // After step 5 , DTC will be active i.e. Bit 0 and Bit 3 will be set to 1 

 if(Debouce_Event_0x10000A==1u)  // Step 1 
 {
  Rte_Call_Event_DTC_0x10000a_SetEventStatus(DEM_EVENT_STATUS_PREFAILED);
  Debouce_Event_0x10000A = 0u;
 }
 else if(Debouce_Event_0x10000A==2u)  // Step 2
 {
  Rte_Call_Event_DTC_0x10000a_SetEventStatus(DEM_EVENT_STATUS_PREFAILED);
  Debouce_Event_0x10000A = 0u;
 }
  else if(Debouce_Event_0x10000A==3u)  // Step 3
 {
  Rte_Call_Event_DTC_0x10000a_SetEventStatus(DEM_EVENT_STATUS_PREFAILED);
  Debouce_Event_0x10000A = 0u;
 }
  else if(Debouce_Event_0x10000A==4u)  // Step 4
 {
  Rte_Call_Event_DTC_0x10000a_SetEventStatus(DEM_EVENT_STATUS_PREFAILED);
  Debouce_Event_0x10000A = 0u;
 }
  else if(Debouce_Event_0x10000A==5u) // Step 5
 {
  Rte_Call_Event_DTC_0x10000a_SetEventStatus(DEM_EVENT_STATUS_PREFAILED);
  Debouce_Event_0x10000A = 0u;
 }


  //********************* Passed Threshold Start ******************************************/

 //*******   Debouncing Passed Threshold = 5 
 //*******   Debouncing Decrement Step Size = 1 


 if(Debouce_Event_0x10000A==6u)  // Step 6
 {
  Rte_Call_Event_DTC_0x10000a_SetEventStatus(DEM_EVENT_STATUS_PREPASSED);
  Debouce_Event_0x10000A = 0u;
 }
 else if(Debouce_Event_0x10000A==7u) // Step 7
 {
  Rte_Call_Event_DTC_0x10000a_SetEventStatus(DEM_EVENT_STATUS_PREPASSED);
  Debouce_Event_0x10000A = 0u;
 }
  else if(Debouce_Event_0x10000A==8u)  // Step 8
 {
  Rte_Call_Event_DTC_0x10000a_SetEventStatus(DEM_EVENT_STATUS_PREPASSED);
  Debouce_Event_0x10000A = 0u;
 }
  else if(Debouce_Event_0x10000A==9u)  // Step 9
 {
  Rte_Call_Event_DTC_0x10000a_SetEventStatus(DEM_EVENT_STATUS_PREPASSED);
  Debouce_Event_0x10000A = 0u;
 }
  else if(Debouce_Event_0x10000A==10u)  // Step 10
 {
  Rte_Call_Event_DTC_0x10000a_SetEventStatus(DEM_EVENT_STATUS_PREPASSED);
  Debouce_Event_0x10000A = 0u;
 }


//****************************** Timer Debouncing Testing **************************************/


//Rte_Call_Event_DTC_0x10000b_SetEventStatus(DEM_EVENT_STATUS_PREFAILED);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data5ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ReadData (returns application error)
 *********************************************************************************************************************/
 
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data5ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_WriteData (returns application error)
 *********************************************************************************************************************/
  Rte_Call_PS_NvMBlock_0x0250_WriteBlock(&Data);
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData (returns application error)
 *********************************************************************************************************************/
   uint8 temp_Index;
   if(Data != NULL_PTR)
   {
  for(temp_Index=0;temp_Index<4;temp_Index++)
  {
    Data[temp_Index] = AppSwVer[temp_Index];
  }
   }
  return RTE_E_OK;
  

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_DCM_E_PENDING
 *   RTE_E_DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data100ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_DCM_E_PENDING
 *   RTE_E_DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ReadData (returns application error)
 *********************************************************************************************************************/

  uint8 i;
  
  for(i=0;i<100;i++)
  {
    Data[i] = RT_Data[i];
  }
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_CanTPData_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_TABROW_CanTPData_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_CanTPData_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_CanTPData_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_CanTPData_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_CanTPData_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_CanTPData_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_CanTPData_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_CanTPData_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_TABROW_CanTPData_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_CanTPData_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data150ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_CanTPData_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_CanTPData_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_CanTPData_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_CanTPData_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_CanTPData_Read_ReadData (returns application error)
 *********************************************************************************************************************/

for(uint8 i=0;i<150;i++)
{
 Data[i] = RT_Data[i];
}
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_CanTPData_Read_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_Data_TABROW_CanTPData_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_CanTPData_Read_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data150ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_CanTPData_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_CanTPData_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_CanTPData_Read_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_CanTPData_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_CanTPData_Read_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_PIMDID_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_TABROW_PIMDID_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_PIMDID_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_PIMDID_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_PIMDID_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_PIMDID_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_PIMDID_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_PIMDID_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_PIMDID_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_TABROW_PIMDID_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_PIMDID_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data10ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_PIMDID_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_PIMDID_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_PIMDID_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_PIMDID_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_PIMDID_Read_ReadData (returns application error)
 *********************************************************************************************************************/

 if(Data != NULL_PTR)
{
  for(uint8 i=0;i<5;i++)
  {
    Data[i] = RT_PIM[i];
  }

}
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_PIMDID_Read_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_Data_TABROW_PIMDID_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_PIMDID_Read_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data10ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_PIMDID_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_PIMDID_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_PIMDID_Read_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_PIMDID_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_PIMDID_Read_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_TABROW_VWECUHardwNumbe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_VWECUHardwNumbe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_VWECUHardwNumbe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_TABROW_VWECUHardwNumbe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data11ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_VWECUHardwNumbe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_VWECUHardwNumbe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData (returns application error)
 *********************************************************************************************************************/
 uint8 temp_Index;
  for(temp_Index=0;temp_Index<11;temp_Index++)
  {
    Data[temp_Index] = EcuHw[temp_Index];
  }
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Vishnu_DID_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_Vishnu_DID>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Vishnu_DID_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Vishnu_DID_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Vishnu_DID_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Vishnu_DID_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Vishnu_DID_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Vishnu_DID_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Vishnu_DID_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_Vishnu_DID>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Vishnu_DID_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data8ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Vishnu_DID_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Vishnu_DID_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Vishnu_DID_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Vishnu_DID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Vishnu_DID_ReadData (returns application error)
 *********************************************************************************************************************/
  
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Vishnu_DID_ReadDataLength
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadDataLength> of PortPrototype <DataServices_Data_Vishnu_DID>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Vishnu_DID_ReadDataLength(Dcm_OpStatusType OpStatus, uint16 *DataLength)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Vishnu_DID_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Vishnu_DID_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Vishnu_DID_ReadDataLength_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Vishnu_DID_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) DataLength) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Vishnu_DID_ReadDataLength (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_Vishnu_DID_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_Data_Vishnu_DID>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_Vishnu_DID_WriteData(const uint8 *Data, uint16 DataLength, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data8ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_Vishnu_DID_DCM_E_PENDING
 *   RTE_E_DataServices_Data_Vishnu_DID_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Vishnu_DID_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Vishnu_DID_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_Vishnu_DID_WriteData (returns application error)
 *********************************************************************************************************************/
 
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RT_Block_Test
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 50ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PS_CddNpmGen2_MeasurementsType_EraseBlock(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_PS_CddNpmGen2_MeasurementsType_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_PS_CddNpmGen2_MeasurementsType_InvalidateNvBlock(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_PS_CddNpmGen2_MeasurementsType_ReadBlock(dtRef_VOID DstPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_PS_CddNpmGen2_MeasurementsType_SetRamBlockStatus(boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_PS_CddNpmGen2_MeasurementsType_WriteBlock(dtRef_const_VOID SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Block_Test_doc
 *********************************************************************************************************************/
static uint8 NvM_Flag = 0;
static uint8 Write_Data[10];
static uint8 Read_Data[10];
static uint8 job_status;
static uint8 Count = 0;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, RT_Vishnu_CODE) RT_Block_Test(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Block_Test
 *********************************************************************************************************************/

Rte_Call_PS_CddNpmGen2_MeasurementsType_GetErrorStatus(&job_status);

if(NvM_Flag == 1)
{
  for(uint8 i=0;i<10;i++)
  {
    Write_Data[i] = Count++;
  }
  Rte_Call_PS_CddNpmGen2_MeasurementsType_WriteBlock(Write_Data);
  NvM_Flag = 0;
}
else if(NvM_Flag == 2)
{
  Rte_Call_PS_CddNpmGen2_MeasurementsType_ReadBlock(Read_Data);
  NvM_Flag = 0;
}
else if(NvM_Flag == 3)
{
 Rte_Call_PS_CddNpmGen2_MeasurementsType_EraseBlock();
 NvM_Flag = 0;
}
else if(NvM_Flag == 4)
{
 Rte_Call_PS_CddNpmGen2_MeasurementsType_InvalidateNvBlock();
 NvM_Flag = 0;
}


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RT_Vishnu_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_UR_CN_BMC_CAN01_908d0059_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Vishnu_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, RT_Vishnu_CODE) RT_Vishnu_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Vishnu_Init
 *********************************************************************************************************************/
 Rte_Call_UR_CN_BMC_CAN01_908d0059_RequestComMode(COMM_FULL_COMMUNICATION);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RT_Vishnu_Main
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_IF_SG_BJB_10_DE_SG_BJB_10(AT_SG_BJB_10 *data)
 *   Std_ReturnType Rte_Read_IF_SG_BJB_11_DE_SG_BJB_11(AT_SG_BJB_11 *data)
 *   Std_ReturnType Rte_Read_IF_SG_BJB_12_DE_SG_BJB_12(AT_SG_BJB_12 *data)
 *   Std_ReturnType Rte_Read_IF_SG_BJB_13_DE_SG_BJB_13(AT_SG_BJB_13 *data)
 *   Std_ReturnType Rte_Read_IF_SG_HVK_03_DE_SG_HVK_03(AT_SG_HVK_03 *data)
 *   Std_ReturnType Rte_Read_IF_SG_HVLM_14_DE_SG_HVLM_14(AT_SG_HVLM_14 *data)
 *   Std_ReturnType Rte_Read_IF_SG_ORU_Control_A_01_DE_SG_ORU_Control_A_01(AT_SG_ORU_Control_A_01 *data)
 *   Std_ReturnType Rte_Read_IF_SG_ORU_Control_D_01_DE_SG_ORU_Control_D_01(AT_SG_ORU_Control_D_01 *data)
 *   Std_ReturnType Rte_Read_IF_SG_OTAMC_D_01_DE_SG_OTAMC_D_01(AT_SG_OTAMC_D_01 *data)
 *   Std_ReturnType Rte_Read_IF_SG_UI1_01_DE_SG_UI1_01(AT_SG_UI1_01 *data)
 *   Std_ReturnType Rte_Read_IF_SG_UI1_02_DE_SG_UI1_02(AT_SG_UI1_02 *data)
 *   Std_ReturnType Rte_Read_IF_SG_UI2_01_DE_SG_UI2_01(AT_SG_UI2_01 *data)
 *   Std_ReturnType Rte_Read_IF_SG_UI2_02_DE_SG_UI2_02(AT_SG_UI2_02 *data)
 *   Std_ReturnType Rte_Read_IF_SG_UI2_03_DE_SG_UI2_03(AT_SG_UI2_03 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens01_CALID_Index_01_DE_UI2Sens01_CALID_Index_01(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens01_CALID_Index_02_DE_UI2Sens01_CALID_Index_02(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens01_CALID_Index_03_DE_UI2Sens01_CALID_Index_03(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens02_CALID_Index_04_DE_UI2Sens02_CALID_Index_04(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens02_CALID_Index_05_DE_UI2Sens02_CALID_Index_05(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens02_CALID_Index_06_DE_UI2Sens02_CALID_Index_06(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens02_CALID_Index_07_DE_UI2Sens02_CALID_Index_07(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens02_CALID_Index_08_DE_UI2Sens02_CALID_Index_08(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens02_CALID_Index_09_DE_UI2Sens02_CALID_Index_09(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens02_CALID_Index_10_DE_UI2Sens02_CALID_Index_10(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens02_CALID_Index_11_DE_UI2Sens02_CALID_Index_11(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens02_CALID_Index_12_DE_UI2Sens02_CALID_Index_12(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens02_CALID_Index_13_DE_UI2Sens02_CALID_Index_13(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens02_CALID_Index_14_DE_UI2Sens02_CALID_Index_14(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens02_CALID_Index_15_DE_UI2Sens02_CALID_Index_15(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_UI2Sens02_CALID_Index_16_DE_UI2Sens02_CALID_Index_16(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SG_BMC_HV_01_SG_BMC_HV_01(const SG_BMC_HV_01 *data)
 *   Std_ReturnType Rte_Write_SG_BMC_HV_02_SG_BMC_HV_02(const SG_BMC_HV_02 *data)
 *   Std_ReturnType Rte_Write_SG_BMC_HV_04_SG_BMC_HV_04(const SG_BMC_HV_04 *data)
 *   Std_ReturnType Rte_Write_SG_BMC_HV_10_SG_BMC_HV_10(const SG_BMC_HV_10 *data)
 *   Std_ReturnType Rte_Write_SG_BMC_HV_12_SG_BMC_HV_12(const SG_BMC_HV_12 *data)
 *   Std_ReturnType Rte_Write_SG_BMC_HV_16_SG_BMC_HV_11(const SG_BMC_HV_11 *data)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_ECU_PerformReset_IF_ECU_Perform_Reset_Indication(uint8 mode)
 *   Modes of Rte_ModeType_Reset:
 *   - RTE_MODE_Reset_NoReset
 *   - RTE_MODE_Reset_PerformHard
 *   - RTE_TRANSITION_Reset
 *   uint8 Rte_Mode_DcmEcuReset_DcmEcuReset(void)
 *   Modes of Rte_ModeType_DcmEcuReset:
 *   - RTE_MODE_DcmEcuReset_EXECUTE
 *   - RTE_MODE_DcmEcuReset_HARD
 *   - RTE_MODE_DcmEcuReset_JUMPTOBOOTLOADER
 *   - RTE_MODE_DcmEcuReset_JUMPTOSYSSUPPLIERBOOTLOADER
 *   - RTE_MODE_DcmEcuReset_KEYONOFF
 *   - RTE_MODE_DcmEcuReset_NONE
 *   - RTE_MODE_DcmEcuReset_SOFT
 *   - RTE_TRANSITION_DcmEcuReset
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_K15State_SetK15State(boolean state)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CddNpmGen2_K15State_E_NOT_OK
 *   Std_ReturnType Rte_Call_PS_NvMBlock_0x0250_ReadBlock(dtRef_VOID DstPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_PS_NvMBlock_0x0250_WriteBlock(dtRef_const_VOID SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Vishnu_Main_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, RT_Vishnu_CODE) RT_Vishnu_Main(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Vishnu_Main
 *********************************************************************************************************************/
   
   //****************************   DEM_Implementation  ***************************//

     ///////////////////               ECU Reset                 ///////////

     uint8 dcmEcu_Reset;

     dcmEcu_Reset = Rte_Mode_DcmEcuReset_DcmEcuReset();
     
     if(dcmEcu_Reset == RTE_MODE_DcmEcuReset_EXECUTE)
     {
       Rte_Switch_ECU_PerformReset_IF_ECU_Perform_Reset_Indication(RTE_MODE_Reset_PerformHard);
     }

         //////////////////    Key ON/OFF  ///////////////

      
              ////////          Counter Debouncing     ///////////


  // if(EventStatus_0x40000 == 1u)
  // {
  // Rte_Call_Event_DTC_0xe40000_SetEventStatus(DEM_EVENT_STATUS_PREFAILED);
  // EventStatus_0x40000 = 0u;
  // }
 

  // if(EventStatus_0x10000a == 1u)
  // {
  //  Rte_Call_Event_DTC_0x10000a_SetEventStatus(DEM_EVENT_STATUS_FAILED);
  //  Rte_Call_Event_DTC_0x10000b_SetEventStatus(DEM_EVENT_STATUS_FAILED);
  //  Rte_Call_Event_DTC_0xe40013_SetEventStatus(DEM_EVENT_STATUS_FAILED);
  //  Rte_Call_Event_DTC_0xe40011_SetEventStatus(DEM_EVENT_STATUS_FAILED);
  //  Rte_Call_Event_DTC_0xe40012_SetEventStatus(DEM_EVENT_STATUS_FAILED);
  //  EventStatus_0x10000a = 0u;
  // }

  //if(EventStatus_0x10000b == 0) 
  //{
   //Rte_Call_Event_DTC_0x10000b_SetEventStatus(DEM_EVENT_STATUS_PASSED);
 // }
  //else if (EventStatus_0x10000b == 1u)
  //{
  // Rte_Call_Event_DTC_0x10000b_SetEventStatus(DEM_EVENT_STATUS_FAILED);
  //}
  //else{
    // do nothing //
  //}

  //if(EventStatus_0x10000d == 0)
  //{
  // /Rte_Call_Event_DTC_0x10000d_SetEventStatus(DEM_EVENT_STATUS_PASSED);
  //}
  //else if (EventStatus_0x10000d == 1u)
  //{
   ///Rte_Call_Event_DTC_0x10000d_SetEventStatus(DEM_EVENT_STATUS_FAILED);
  //}
  //else{
    // do nothing //
  //}
   
   //if(EventStatus_0x10000e == 1)
   //{
    //Rte_Call_Event_DTC_0x10000e_SetEventStatus(DEM_EVENT_STATUS_FAILED);
   //}
   //else
   //{
    // Do nothing // 
   //}

   //if(EventStatus_0x100000 == 1)
   //{
    //Rte_Call_Event_DTC_0x100000_SetEventStatus(DEM_EVENT_STATUS_FAILED);
   //}
   //else
   //{
    // Do nothing // 
   //}
  //****************************COM_Implementation***************************//

                            //     CAN (BMC) /////////////
      // Signal Groups //
                   
                        // Transmission //

  SG_10_data.BMC_HV_10_BZ = Alive_ounter++;
  SG_10_data.BMC_HV_10_CRC = CRC_Count++;
  SG_10_data.BMC_Lebensdauer_Trennelemente = Trnellette;

  if(Alive_ounter == 15 && CRC_Count == 15 && Trnellette == 15)
  {
    Alive_ounter = 0u;
    CRC_Count = 0u;
    Trnellette = 0u;
  }

   // if signal values are greater than equal to 5 , ComtxModeTrue should trigger with 2000ms
  SG_12_data.BMC_HV_12_BZ = 0x05;  
  SG_12_data.BMC_HV_12_CRC = 0x05;
  
  //SG_12_data.BMC_Sperrung_Uebertemperatur = NEVER; - In this case, it should be always ComTxModeFalse should be triggered 

  // if signal values are less than equal to 5 , ComtxModeflase should trigger with 1000ms

  // SG_12_data.BMC_HV_12_BZ = 0x04;  
  // SG_12_data.BMC_HV_12_CRC = 0x04;

  (void)Rte_Write_SG_BMC_HV_12_SG_BMC_HV_12(&SG_12_data);
  (void)Rte_Write_SG_BMC_HV_10_SG_BMC_HV_10(&SG_10_data);
  (void)Rte_Write_SG_BMC_HV_04_SG_BMC_HV_04(&SG_04_data);
  (void)Rte_Write_SG_BMC_HV_16_SG_BMC_HV_11(&SG_11_Data);

                      // Reception // 

  (void)Rte_Read_IF_SG_BJB_10_DE_SG_BJB_10(&Receive10);
  (void)Rte_Read_IF_SG_BJB_11_DE_SG_BJB_11(&Receive11);
  (void)Rte_Read_IF_SG_BJB_12_DE_SG_BJB_12(&Receive12);
  (void)Rte_Read_IF_SG_BJB_13_DE_SG_BJB_13(&Receive13);
  (void)Rte_Read_IF_SG_UI1_01_DE_SG_UI1_01(&ReceiveUI1_01);
  (void)Rte_Read_IF_SG_UI1_02_DE_SG_UI1_02(&ReceiveUI1_02);
  (void)Rte_Read_IF_SG_UI2_01_DE_SG_UI2_01(&ReceiveUI2_01);
  (void)Rte_Read_IF_SG_UI2_02_DE_SG_UI2_02(&ReceiveUI2_02);
  (void)Rte_Read_IF_SG_UI2_03_DE_SG_UI2_03(&ReceiveUI2_03);

  //  Normal Signals // 

  

  /////////////////////      CAN-FD ( HCP )      ///////////////////////

  ////////////////////       Signal Groups          ///////////////////////


  ///////////////////        Transmission          ///////////////////////

  // (void)Rte_Write_SG_BMC_HV_01_SG_BMC_HV_01(&SG01_Data);
  // (void)Rte_Write_SG_BMC_HV_02_SG_BMC_HV_02(&SG02_Data);


  //////////////////         Reception            //////////////////////

  (void)Rte_Read_IF_SG_HVK_03_DE_SG_HVK_03(&SG_HVK_03_Data);
  (void)Rte_Read_IF_SG_HVLM_14_DE_SG_HVLM_14(&SG_HVLM_14_Data);
  (void)Rte_Read_IF_SG_ORU_Control_A_01_DE_SG_ORU_Control_A_01(&SG_ORU_Control_A_01_Data);
  (void)Rte_Read_IF_SG_ORU_Control_D_01_DE_SG_ORU_Control_D_01(&SG_ORU_Control_D_01_Data);
  (void)Rte_Read_IF_SG_OTAMC_D_01_DE_SG_OTAMC_D_01(&SG_OTAMC_D_01_Data);


   
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_RequestResults
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <RequestResults> of PortPrototype <RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType *ResData, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument ResData: Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType* is of type Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_DCM_E_PENDING
 *   RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_RequestResults_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_RequestResults (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Start(Dcm_OpStatusType OpStatus, Dcm_StartDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType *ResData, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument ResData: Dcm_StartDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType* is of type Dcm_StartDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_DCM_E_PENDING
 *   RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Start (returns application error)
 *********************************************************************************************************************/

  Rte_Call_PS_CddNpmGen2_MeasurementsType_InvalidateNvBlock();
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Stop
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Stop> of PortPrototype <RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Stop(Dcm_OpStatusType OpStatus, Dcm_StopDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType *ResData, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument ResData: Dcm_StopDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType* is of type Dcm_StopDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_DCM_E_PENDING
 *   RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Stop_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Stop (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SecurityAccess_Unlock_L1_CompareKey
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <CompareKey> of PortPrototype <SecurityAccess_Unlock_L1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SecurityAccess_Unlock_L1_CompareKey(const uint8 *Key, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Key: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SecurityAccess_Unlock_L1_DCM_E_COMPARE_KEY_FAILED
 *   RTE_E_SecurityAccess_Unlock_L1_DCM_E_PENDING
 *   RTE_E_SecurityAccess_Unlock_L1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Unlock_L1_CompareKey_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) SecurityAccess_Unlock_L1_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Unlock_L1_CompareKey (returns application error)
 *********************************************************************************************************************/
  uint8 key_1[4] = {0x12,0x34,0x56,0x78};
  uint8 retval = E_NOT_OK;
  uint8 i;
  uint8 count=0;
  for(i=0;i<4;i++)
  {
  if(key_1[i] == Key[i])
  {
   count++;
  }
  else 
  {
   return RTE_E_SecurityAccess_Unlock_L1_DCM_E_COMPARE_KEY_FAILED;
  }
  }
  if(count == 4)
  {
    retval = RTE_E_OK;
    return retval;
  }    


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SecurityAccess_Unlock_L1_GetSeed
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetSeed> of PortPrototype <SecurityAccess_Unlock_L1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SecurityAccess_Unlock_L1_GetSeed(Dcm_OpStatusType OpStatus, uint8 *Seed, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Seed: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SecurityAccess_Unlock_L1_DCM_E_PENDING
 *   RTE_E_SecurityAccess_Unlock_L1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Unlock_L1_GetSeed_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Vishnu_CODE) SecurityAccess_Unlock_L1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Unlock_L1_GetSeed (returns application error)
 *********************************************************************************************************************/
  Seed[0] = 0x12;
  Seed[1] = 0x34;
  Seed[2] = 0x56;
  Seed[3] = 0x78;

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define RT_Vishnu_STOP_SEC_CODE
#include "RT_Vishnu_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



#if 0
/***  Start of saved code (symbol: runnable implementation:DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData)  */
  uint8 temp_Index;
  for(temp_Index=0;temp_Index<4;temp_Index++)
  {
    Data[temp_Index] = AppSwVer[temp_Index];
  }
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif


#if 0
/***  Start of saved code (symbol: documentation area:DataServices_Data_DiagnServi_Assembly_part_number_Read_ConditionCheckRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:DataServices_Data_DiagnServi_Assembly_part_number_Read_ConditionCheckRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:DataServices_Data_DiagnServi_Assembly_part_number_Read_ReadData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:DataServices_Data_DiagnServi_Assembly_part_number_Read_WriteData)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:DataServices_Data_DiagnServi_Assembly_part_number_Read_WriteData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:DataServices_Data_DiagnServi_Assembly_part_number_Read_ReadData)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif


#if 0
/***  Start of saved code (symbol: runnable implementation:CBReadData_Data_Vishnu_ExtData_Param_VishnRes_ReadData)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:CBReadData_Data_SupplementalMonitorActivityData_Param_MonitActivNumerCount_ReadData)  */
  Data[0] = 100;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:CBReadData_Data_StandardFreezeFrame1_Param_AgingCount_ReadData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:CBReadData_Data_StandardDTCInformation_Param_OccurCount_ReadData)  */
  Data[0] = 18;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:CBReadData_Data_StandardFreezeFrame1_Param_Reser_ReadData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:CBReadData_Data_StandardFreezeFrame1_Param_KmMilea_1_ReadData)  */
  Data[0] = 0x250;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:CBReadData_Data_SupplementalMonitorActivityData_Param_StoreMonitActivRatio_ReadData)  */
  Data[0] = 101;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:CBReadData_Data_Vishnu_ExtData_Param_VishnDOB_ReadData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:CBReadData_Data_Vishnu_ExtData_Param_VishnRes_ReadData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:CBReadData_Data_StandardFreezeFrame1_Param_AgingCount_ReadData)  */
  Data[0] = 0x20;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:CBReadData_Data_StandardFreezeFrame1_Param_Reser_ReadData)  */
  Data[0] = 251;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:CBReadData_Data_StandardFreezeFrame1_Param_TimeStamp_STRUC_Bitfi_ReadData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:CBReadData_Data_StandardFreezeFrame1_Param_TimeStamp_STRUC_Bitfi_ReadData)  */
  Data[0] = 249;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:CBReadData_Data_SupplementalMonitorActivityData_Param_MonitActivNumerCount_ReadData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:CBReadData_Data_StandardDTCInformation_Param_DTCPrior_ReadData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:CBReadData_Data_StandardDTCInformation_Param_OccurCount_ReadData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:CBReadData_Data_StandardFreezeFrame1_Param_KmMilea_1_ReadData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:CBReadData_Data_Vishnu_ExtData_Param_VishnDOB_ReadData)  */
  Data[0] = EventId;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:CBReadData_Data_SupplementalMonitorActivityData_Param_StoreMonitActivRatio_ReadData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:CBReadData_Data_StandardDTCInformation_Param_DTCPrior_ReadData)  */
  Data[0] = 0x01;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

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
