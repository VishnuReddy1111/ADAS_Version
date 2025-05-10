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
 *             File:  RT_VehComm.c
 *           Config:  D:/SIPs/SOKFM_RTM/adasplatformdemo/02_EcuCfg/ADAS.dpa
 *        SW-C Type:  RT_VehComm
 *  Generation Time:  2024-08-23 16:48:57
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2201090
 *
 *      Description:  C-Code implementation template for SW-C <RT_VehComm>
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
 * BJB_ErrMem_State
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * BswM_ESH_RunRequest
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * ComM_ModeType
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
 * Dcm_StartDataIn_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_ReqData_001PrimitiveType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_StartDataIn_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_ReqData_001Type
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_StartDataOut_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_RoutineInfoPrimitiveType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_StartDataOut_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_RoutineInfoType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dem_EventStatusType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Ivd_RequestPostRun
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * SfdA_ProjectIdType
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 *********************************************************************************************************************/

#include "Rte_RT_VehComm.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Dio.h"
#include "Dio_Cfg.h"
#include "NvM.h"
#undef RTE_APPLICATION_HEADER_FILE

#include "SfdA_Cfg.h"
#include "SfdA_Int.h"
#include "VKMS_NvM.h"
#include "VKMS_Cfg.h"


const uint8 SFDKEY[SFDA_KEY_SIZE] = {0xFF};

Signal_MyECU_SecOC_Tx2 send_Data = 0xB7;
static uint8 ReadData_vehComm = 0xFF;
static uint8 retVal_u8;
static uint8 receiveData = 0xFF;
static uint16 receiveData_u16 = 0xFF;
static uint8 C10B_Data_R = 0x7F;
static uint8 eventstatus_0x184C00 = 1u;
static uint8 eventstatus_0x1D5AF0 = 1u;

static uint16 counter = 0;

static boolean NvMWriteFlag = FALSE;
static uint8 NvmReadFlag = 0;
static uint8 NvmWriteData[255] = {0};
static uint8 NvmReadData[4096] = {0};
static uint8 SFD_Init_Status = E_NOT_OK;

SfdA_VersionInfoType VersionInfoSFD;
static uint8 SFD_CurMode = 0U;

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
 * BJB_ErrMem_State: Integer in interval [1...3]
 * BswM_ESH_RunRequest: Integer in interval [0...255]
 * ComM_ModeType: Integer in interval [0...3]
 * Dcm_NegativeResponseCodeType: Integer in interval [0...255]
 * Dcm_OpStatusType: Integer in interval [0...64]
 * Dcm_StartDataIn_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_ReqData_001PrimitiveType: Integer in interval [0...255]
 * Dcm_StartDataIn_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_ReqData_001Type: Integer in interval [0...255]
 * Dcm_StartDataOut_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_RoutineInfoPrimitiveType: Integer in interval [0...255]
 * Dcm_StartDataOut_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_RoutineInfoType: Integer in interval [0...255]
 * Dem_EventStatusType: Integer in interval [0...255]
 * Ivd_RequestPostRun: Integer in interval [0...1]
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
 * Rte_DT_SG_BMC_HV_02_39: Integer in interval [0...3]
 * Rte_DT_SG_BMC_HV_02_4: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_02_40: Integer in interval [0...31]
 * Rte_DT_SG_BMC_HV_02_41: Integer in interval [0...255]
 * Rte_DT_SG_BMC_HV_02_42: Integer in interval [0...255]
 * Rte_DT_SG_BMC_HV_02_43: Integer in interval [0...255]
 * Rte_DT_SG_BMC_HV_02_44: Integer in interval [0...255]
 * Rte_DT_SG_BMC_HV_02_5: Integer in interval [0...3]
 * Rte_DT_SG_BMC_HV_02_6: Integer in interval [0...1023]
 *   Unit: [Unit_PerCent], Factor: 0.1, Offset: 0
 * Rte_DT_SG_BMC_HV_02_7: Integer in interval [0...65535]
 *   Unit: [Unit_WattHour], Factor: 4, Offset: 0
 * Rte_DT_SG_BMC_HV_02_8: Integer in interval [0...1]
 * Rte_DT_SG_BMC_HV_02_9: Integer in interval [0...2]
 * Rte_DT_SG_BMC_HV_13_2: Integer in interval [0...511]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_13_3: Integer in interval [0...511]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_13_4: Integer in interval [0...511]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_BMC_HV_13_5: Integer in interval [0...511]
 *   Unit: [Unit_None], Factor: 1, Offset: 0
 * Rte_DT_SG_UI1_01_3: Integer in interval [0...255]
 *   Unit: [Unit_Volt], Factor: 0.1, Offset: 0
 * Rte_DT_SG_UI1_01_4: Integer in interval [0...1048575]
 *   Unit: [Unit_Amper], Factor: 0.005, Offset: -2621
 * SfdA_ProjectIdType: Integer in interval [0...4294967295]
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint64: Integer in interval [0...18446744073709551615] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Array Types:
 * ============
 * AppData_Data128Byte: Array with 128 element(s) of type uint8
 * DataArrayType_uint8_1: Array with 1 element(s) of type uint8
 * Dcm_Data105ByteType: Array with 105 element(s) of type uint8
 * Dcm_Data11ByteType: Array with 11 element(s) of type uint8
 * Dcm_Data1ByteType: Array with 1 element(s) of type uint8
 * Dcm_Data20ByteType: Array with 20 element(s) of type uint8
 * Dcm_Data23ByteType: Array with 23 element(s) of type uint8
 * Dcm_Data24ByteType: Array with 24 element(s) of type uint8
 * Dcm_Data26ByteType: Array with 26 element(s) of type uint8
 * Dcm_Data2ByteType: Array with 2 element(s) of type uint8
 * Dcm_Data3ByteType: Array with 3 element(s) of type uint8
 * Dcm_Data4ByteType: Array with 4 element(s) of type uint8
 * Dcm_Data50ByteType: Array with 50 element(s) of type uint8
 * Dcm_Data517ByteType: Array with 517 element(s) of type uint8
 * Dcm_Data8192ByteType: Array with 8192 element(s) of type uint8
 * Dcm_StartFlexibleOutArrayData_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_DataOut_ReqStructureType: Array with 442 element(s) of type uint8
 * SOK_Zeit_Hybrid_01_Zeit: Array with 7 element(s) of type uint8
 * SfdA_EcuGroupIdType: Array with 23 element(s) of type uint8
 *
 * Record Types:
 * =============
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
 *   SignalVoid_BMC_HV_02_0 of type Rte_DT_SG_BMC_HV_02_39
 *   SignalVoid_BMC_HV_02_1 of type Rte_DT_SG_BMC_HV_02_40
 *   SignalVoid_BMC_HV_02_2 of type Rte_DT_SG_BMC_HV_02_41
 *   SignalVoid_BMC_HV_02_3 of type Rte_DT_SG_BMC_HV_02_42
 *   SignalVoid_BMC_HV_02_4 of type Rte_DT_SG_BMC_HV_02_43
 *   SignalVoid_BMC_HV_02_5 of type Rte_DT_SG_BMC_HV_02_44
 * SG_BMC_HV_13: Record with elements
 *   BMC_HV_13_BZ of type uint8
 *   BMC_HV_13_CRC of type uint8
 *   BMC_Unterspannungszaehler_CMC01 of type Rte_DT_SG_BMC_HV_13_2
 *   BMC_Unterspannungszaehler_CMC02 of type Rte_DT_SG_BMC_HV_13_3
 *   BMC_Unterspannungszaehler_CMC03 of type Rte_DT_SG_BMC_HV_13_4
 *   BMC_Unterspannungszaehler_CMC04 of type Rte_DT_SG_BMC_HV_13_5
 *   SignalVoid_BMC_HV_13_0 of type uint8
 *   SignalVoid_BMC_HV_13_1 of type uint8
 * SG_UI1_01: Record with elements
 *   SignalVoid_UI1_01_0 of type uint8
 *   SignalVoid_UI1_01_1 of type uint8
 *   SignalVoid_UI1_01_2 of type uint8
 *   UI1_KL30_Spannung of type Rte_DT_SG_UI1_01_3
 *   UI1_Strom of type Rte_DT_SG_UI1_01_4
 *   UISensorIso_01_BZ of type uint8
 *   UISensorIso_01_CRC of type uint8
 * SfdA_VersionInfoType: Record with elements
 *   vendorID of type uint16
 *   moduleID of type uint16
 *   sw_major_version of type uint8
 *   sw_minor_version of type uint8
 *   sw_patch_version of type uint8
 *
 *********************************************************************************************************************/


#define RT_VehComm_START_SEC_CODE
#include "RT_VehComm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AppDataA_Runnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Data> of PortPrototype <AdaptionCodingOrDsdl2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType AppDataA_Runnable(uint8 cmd, uint16 id, uint8 *ptrResultData, uint16 *ptrResultDataLength)
 *     Argument ptrResultData: uint8* is of type AppData_Data128Byte
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_AppData_AdaptionCodingOrDsdl2_E_NOT_OK
 *   RTE_E_AppData_AdaptionCodingOrDsdl2_E_PENDING
 *   RTE_E_AppData_AdaptionCodingOrDsdl2_E_WAIT_FOR_DATA
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AppDataA_Runnable_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) AppDataA_Runnable(uint8 cmd, uint16 id, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ptrResultData, P2VAR(uint16, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ptrResultDataLength) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AppDataA_Runnable (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CBReadData_Data_PID_0x4_Param_CalcuLOADValue_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CBReadData_Data_PID_0x4_Param_CalcuLOADValue>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CBReadData_Data_PID_0x4_Param_CalcuLOADValue_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_Data_PID_0x4_Param_CalcuLOADValue_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_PID_0x4_Param_CalcuLOADValue_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) CBReadData_Data_PID_0x4_Param_CalcuLOADValue_ReadData(P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_Data_PID_0x4_Param_CalcuLOADValue_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<1; counter++)
    {
      Data[counter] = 0x05;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CPU_Load_Test_Runnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CPU_Load_Test_Runnable_doc
 *********************************************************************************************************************/

static uint8 inf_flag = 0xFF;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, RT_VehComm_CODE) CPU_Load_Test_Runnable(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CPU_Load_Test_Runnable
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data24ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<=23; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data105ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadData (returns application error)
 *********************************************************************************************************************/

    /* 0xF1AF: Local Variable Declaration */
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<=104; counter++)
    {
      Data[counter] = 0x0BU;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadDataLength
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadDataLength> of PortPrototype <DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadDataLength(Dcm_OpStatusType OpStatus, uint16 *DataLength)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadDataLength_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) DataLength) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadDataLength (returns application error)
 *********************************************************************************************************************/

  /* 0xF1AF: Local Variable Declaration */
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check DataLength is not NULL Pointer */
	if (NULL_PTR != DataLength)
	{
		/* Set Data Length to 105 bytes as per "VOD_CDS_ADAS_DC_v1.0 and CDS_ADAS_DC_v2.0" sheet */
		*DataLength = 105U;
		/* Return Ok */
		retval_u8 =  RTE_E_OK;
	}
	else
	{
        /* Do Nothing */
	}
 
	/* Return retval */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<1; counter++)
    {
      Data[counter] = 0x0A;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<1; counter++)
    {
      Data[counter] = 0x07;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_CalibIdent_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_CalibIdent_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data8192ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<=255; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadDataLength
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadDataLength> of PortPrototype <DataServices_Data_DiagnServi_TABROW_CalibIdent_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadDataLength(Dcm_OpStatusType OpStatus, uint16 *DataLength)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadDataLength_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) DataLength) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadDataLength (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check DataLength is not NULL Pointer */
	if (NULL_PTR != DataLength)
	{
		/* Set Data Length to 105 bytes as per "VOD_CDS_ADAS_DC_v1.0 and CDS_ADAS_DC_v2.0" sheet */
		*DataLength = 8192;
		/* Return Ok */
		retval_u8 =  RTE_E_OK;
	}
	else
	{
        /* Do Nothing */
	}
 
	/* Return retval */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<2; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_ECUNA_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_ECUNA_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data20ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<20; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data20ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<20; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<1; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_EnginRPM_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_EnginRPM_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<2; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<4; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_Produ_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_Produ_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_Produ_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_Produ_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_Produ_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_Produ_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_Produ_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_Produ_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_Produ_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_Produ_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_Produ_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data3ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_Produ_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_Produ_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_Produ_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_Produ_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_Produ_Read_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<3; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_Produ_Read_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_Produ_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_Produ_Read_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data3ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_Produ_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_Produ_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_Produ_Read_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_Produ_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_Produ_Read_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data517ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadData (returns application error)
 *********************************************************************************************************************/

  /* 0xF1AF: Local Variable Declaration */
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<=516; counter++)
    {
      Data[counter] = 0x05;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadDataLength
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadDataLength> of PortPrototype <DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadDataLength(Dcm_OpStatusType OpStatus, uint16 *DataLength)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadDataLength_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) DataLength) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadDataLength (returns application error)
 *********************************************************************************************************************/

  /* 0xF1AF: Local Variable Declaration */
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check DataLength is not NULL Pointer */
	if (NULL_PTR != DataLength)
	{
		/* Set Data Length to 105 bytes as per "VOD_CDS_ADAS_DC_v1.0 and CDS_ADAS_DC_v2.0" sheet */
		*DataLength = 517U;
		/* Return Ok */
		retval_u8 =  RTE_E_OK;
	}
	else
	{
        /* Do Nothing */
	}
 
	/* Return retval */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data26ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ReadData (returns application error)
 *********************************************************************************************************************/

  /* 0xF1AF: Local Variable Declaration */
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<=25; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data2ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<2; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

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

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
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

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData (returns application error)
 *********************************************************************************************************************/

  /* 0xF1AF: Local Variable Declaration */
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<=4; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<1; counter++)
    {
      Data[counter] = 0x03;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_WriteData(const uint8 *Data, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data23ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ReadData (returns application error)
 *********************************************************************************************************************/

  /* 0xF1AF: Local Variable Declaration */
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<=22; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data11ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ReadData (returns application error)
 *********************************************************************************************************************/

  /* 0xF1AF: Local Variable Declaration */
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<=10; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ReadData (returns application error)
 *********************************************************************************************************************/
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<1; counter++)
    {
      Data[counter] = 0x06;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data50ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_WriteData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <WriteData> of PortPrototype <DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_WriteData(const uint8 *Data, uint16 DataLength, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument Data: uint8* is of type Dcm_Data50ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_WriteData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_WriteData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_SysteIdent_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_TABROW_SysteIdent_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_SysteIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_SysteIdent_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_SysteIdent_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_SysteIdent_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_SysteIdent_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_SysteIdent_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_SysteIdent_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_TABROW_SysteIdent_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_SysteIdent_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_SysteIdent_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_SysteIdent_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_SysteIdent_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_SysteIdent_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_SysteIdent_Read_ReadData (returns application error)
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

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
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

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData (returns application error)
 *********************************************************************************************************************/

  /* 0xF1AF: Local Variable Declaration */
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<=10; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data3ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_DCM_E_PENDING
 *   RTE_E_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ReadData (returns application error)
 *********************************************************************************************************************/

  /* 0xF1AF: Local Variable Declaration */
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */
 
	/* Check Data is not NULL Pointer */
	if (NULL_PTR != Data)
	{
		for (counter=0; counter<=2; counter++)
    {
      Data[counter] = counter;
    }
		/* Read Data success, return OK */
		retval_u8 = RTE_E_OK;
	}
	else
	{
		/*Do nothing */
	}
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RT_VehComm_Init
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
 *   Std_ReturnType Rte_Call_UR_CN_HCP5_CANFD01_84d44928_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_VehComm_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, RT_VehComm_CODE) RT_VehComm_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_VehComm_Init
 *********************************************************************************************************************/

	Dio_WriteChannel(DioConf_DioChannel_DioChannel_LED_1, 1u);

	Dio_WriteChannel(DioConf_DioChannel_DioChannel_LED_2, 1u);

	Dio_WriteChannel(DioConf_DioChannel_DioChannel_LED_3, 1u);

	Dio_WriteChannel(DioConf_DioChannel_DioChannel_LED_4, 1u);

	Dio_WriteChannel(DioConf_DioChannel_DioChannel_Buzzer, 0u);

	Rte_Call_UR_CN_BMC_CAN01_908d0059_RequestComMode(COMM_FULL_COMMUNICATION);
	Rte_Call_UR_CN_HCP5_CANFD01_84d44928_RequestComMode(COMM_FULL_COMMUNICATION);

	Rte_Call_RP_CddNpmGen2_K15State_SetK15State(TRUE);
	
	Rte_Write_RT_VehComm_PP_BswM_MDGP_ESH_RunRequest_requestedMode(1U);


#if 0
	  uint32 i;
	  VKMS_NvRamBlock.ecuTrainingCounter = 0u;
	  #if 0
	  for (i = 0; i < 1; i++)
	  {
	    VKMS_NvRamBlock.dataElementWrittenLength[i] = 0u;
	  }
	  #endif
	  VKMS_NvRamBlock.identityCounter = 0xFFFFu;

	  for (i = 0; i < 2; i++)
	  {
	    VKMS_NvRamBlock.keyMetaData[i].keyFlags = 0u;
	    VKMS_NvRamBlock.keyMetaData[i].trainingCounter = 0u;
	    VKMS_NvRamBlock.keyMetaData[i].keyGenus = 0u;
	    if (VKMS_GetTypeIdOfKeyConfig(i) == 21)
	    {
	      /* Set KeyGenus of PSS Key */
	      VKMS_NvRamBlock.keyMetaData[i].keyGenus = 0x11u;
	    }
	  }

	  /* #5 Initialize the verification checksum */
	  for(i = 0; i < 16; i++)
	  {
		VKMS_NvRamBlock.verificationChecksum[i] = 0U;
	  }
	  for(i = 0; i < 17; i++)
	  {
	  VKMS_NvRamBlock.dlcVin[i] = 0x2Du;
	  }
	  for(i = 0; i < 3; i++)
	  {
		 VKMS_NvRamBlock.masterKeyRef[i] = 0xFFU;
	  }

	  NvM_WriteBlock((NvM_BlockIdType)28, &VKMS_NvRamBlock);
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RT_VehComm_Main
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
 *   Std_ReturnType Rte_Read_IF_VDSO_Vx3d_DE_VDSO_Vx3d(uint16 *data)
 *   Std_ReturnType Rte_Read_RP_BJB_CALID_Index_01_DE_BJB_CALID_Index_01(uint8 *data)
 *   Std_ReturnType Rte_Read_RP_SOK_Zeit_Hybrid_01_Zeit_SOK_Zeit_Hybrid_01_Zeit(uint8 *data)
 *     Argument data: uint8* is of type SOK_Zeit_Hybrid_01_Zeit
 *   Std_ReturnType Rte_Read_R_WFS_VIN_1_DE_VIN_1(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_IF_BMC_CMC_Zellspannung_079_DE_BMC_CMC_Zellspannung_079(uint16 data)
 *   Std_ReturnType Rte_Write_IF_BMC_EnergieVorhalt_DE_BMC_EnergieVorhalt(uint16 data)
 *   Std_ReturnType Rte_Write_PP_BswM_MDGP_ESH_RunRequest_requestedMode(BswM_ESH_RunRequest data)
 *   Std_ReturnType Rte_Write_PP_SG_BMC_HV_13_SG_BMC_HV_13(const SG_BMC_HV_13 *data)
 *   Std_ReturnType Rte_Write_SG_BMC_HV_01_SG_BMC_HV_01(const SG_BMC_HV_01 *data)
 *   Std_ReturnType Rte_Write_SG_BMC_HV_02_SG_BMC_HV_02(const SG_BMC_HV_02 *data)
 *   Std_ReturnType Rte_Write_SP_BMC_HV_04_CRC_DE_BMC_HV_04_CRC(uint8 data)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_SP_BasicSFD_BasicSFDRole(uint8 mode)
 *   Modes of Rte_ModeType_BasicSFD:
 *   - RTE_MODE_BasicSFD_ALLOW
 *   - RTE_MODE_BasicSFD_DISALLOW
 *   - RTE_TRANSITION_BasicSFD
 *   Std_ReturnType Rte_Switch_SP_E2eSFD_E2eSFDRole(uint8 mode)
 *   Modes of Rte_ModeType_E2eSFD:
 *   - RTE_MODE_E2eSFD_ALLOW
 *   - RTE_MODE_E2eSFD_DISALLOW
 *   - RTE_TRANSITION_E2eSFD
 *   Std_ReturnType Rte_Switch_SP_EptiSFD_EptiSFDRole(uint8 mode)
 *   Modes of Rte_ModeType_EptiSFD:
 *   - RTE_MODE_EptiSFD_ALLOW
 *   - RTE_MODE_EptiSFD_DISALLOW
 *   - RTE_TRANSITION_EptiSFD
 *   Std_ReturnType Rte_Switch_SP_ExtendedSFD_ExtendedSFDRole(uint8 mode)
 *   Modes of Rte_ModeType_ExtendedSFD:
 *   - RTE_MODE_ExtendedSFD_ALLOW
 *   - RTE_MODE_ExtendedSFD_DISALLOW
 *   - RTE_TRANSITION_ExtendedSFD
 *   Std_ReturnType Rte_Switch_SP_OtaSFD_OtaSFDRole(uint8 mode)
 *   Modes of Rte_ModeType_OtaSFD:
 *   - RTE_MODE_OtaSFD_ALLOW
 *   - RTE_MODE_OtaSFD_DISALLOW
 *   - RTE_TRANSITION_OtaSFD
 *   Std_ReturnType Rte_Switch_SP_ProductionSFD_ProductionSFDRole(uint8 mode)
 *   Modes of Rte_ModeType_ProductionSFD:
 *   - RTE_MODE_ProductionSFD_ALLOW
 *   - RTE_MODE_ProductionSFD_DISALLOW
 *   - RTE_TRANSITION_ProductionSFD
 *   Std_ReturnType Rte_Switch_SP_SuperUserSFD_SuperUserSFDRole(uint8 mode)
 *   Modes of Rte_ModeType_SuperUserSFD:
 *   - RTE_MODE_SuperUserSFD_ALLOW
 *   - RTE_MODE_SuperUserSFD_DISALLOW
 *   - RTE_TRANSITION_SuperUserSFD
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SfdAInitState_GetSFDInitState(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SfdAInitState_E_NOT_OK
 *   Std_ReturnType Rte_Call_SfdAVersionInfo_GetVersionInfo(SfdA_VersionInfoType *VersionInfoPtr)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_Event_DTC_0x184c00_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_Event_DTC_0x1d5af0_SetEventStatus(Dem_EventStatusType EventStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticMonitor_E_NOT_OK
 *   Std_ReturnType Rte_Call_RP_CddNpmGen2_BEM3State_SetBEM3State(boolean state)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CddNpmGen2_BEM3State_E_NOT_OK
 *   Std_ReturnType Rte_Call_RP_CddNpmGen2_K15State_SetK15State(boolean state)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CddNpmGen2_K15State_E_NOT_OK
 *   Std_ReturnType Rte_Call_RP_CddNpmGen2_VetoState_SetVetoState(boolean stateECUVeto, boolean stateBusVeto)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CddNpmGen2_VetoState_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_VehComm_Main_doc
 *********************************************************************************************************************/
static uint8 testVar_u8 = 0U;
static uint8 rec;
static SG_BMC_HV_13 send = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
static uint8 SendChallenge = 0;
static uint8 data_sok[8] = {0};
static SG_BMC_HV_01 SOK_BMC_HV01_Data;
static SG_BMC_HV_02 SOK_BMC_HV02_Data;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, RT_VehComm_CODE) RT_VehComm_Main(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_VehComm_Main
 *********************************************************************************************************************/
	static uint8 DIO_Level_u8 = 0x01;
	static uint8 DIO_Level1_u8 = 0x00;
	static uint8 tempVal_u8 = 0x05;
	static uint8 retVal_u8;
	static uint8 Writedata = 0x05;
	static uint16 Writedata_u16 = 0xA5;

	// SFD_CurMode = Rte_Mode_Switch_BswMSwitchPort_DcmRoleNotification_MG_SfdARole();

	// (void)Rte_Switch_SP_BasicSFD_BasicSFDRole(RTE_MODE_BasicSFD_ALLOW);
	// Rte_Switch_SP_E2eSFD_E2eSFDRole(RTE_MODE_E2eSFD_ALLOW);
	// Rte_Switch_SP_EptiSFD_EptiSFDRole(RTE_MODE_EptiSFD_ALLOW);
	// Rte_Switch_SP_ExtendedSFD_ExtendedSFDRole(RTE_MODE_ExtendedSFD_ALLOW);
	// Rte_Switch_SP_OtaSFD_OtaSFDRole(RTE_MODE_OtaSFD_ALLOW);
	// Rte_Switch_SP_ProductionSFD_ProductionSFDRole(RTE_MODE_ProductionSFD_ALLOW);
	// Rte_Switch_SP_SuperUserSFD_SuperUserSFDRole(RTE_MODE_SuperUserSFD_ALLOW);

	// ****************************DEM_Implementation***************************//

	if(eventstatus_0x184C00 == 0)
	{
		Rte_Call_Event_DTC_0x184c00_SetEventStatus(DEM_EVENT_STATUS_PASSED);
	}
	else if (eventstatus_0x184C00 == 1u)
	{
		Rte_Call_Event_DTC_0x184c00_SetEventStatus(DEM_EVENT_STATUS_FAILED);
	}
	else
	{
		/*PASS*/
	}

	if(eventstatus_0x1D5AF0 == 0)
	{
		Rte_Call_Event_DTC_0x1d5af0_SetEventStatus(DEM_EVENT_STATUS_PASSED);
	}
	else if (eventstatus_0x1D5AF0 == 1)
	{
		Rte_Call_Event_DTC_0x1d5af0_SetEventStatus(DEM_EVENT_STATUS_FAILED);
	}
	else
	{
		/*PASS*/
	}

	// *****************************NVM_IMPLEMENTATION**************************//

	// if (NvMWriteFlag == TRUE)
	// {
	// Rte_Call_PS_NvMBlock_0x0250_WriteBlock(&NvmWriteData);
	// NvMWriteFlag = FALSE;
	// }
	// else
	// {
	// 	//*****PASS*****//
	// }

	// if (NvmReadFlag == TRUE)
	// {
	// Rte_Call_PS_NvMBlock_0x0250_ReadBlock(&NvmReadData);
	// NvmReadFlag = FALSE;
	// }
	// else
	// {
	// 	//*****PASS*****//
	// }

	//****************************COM_Implementation***************************//

	Rte_Read_R_WFS_VIN_1_DE_VIN_1(&receiveData);

	retVal_u8 = Rte_Write_IF_BMC_CMC_Zellspannung_079_DE_BMC_CMC_Zellspannung_079(send_Data);

	Rte_Write_IF_BMC_EnergieVorhalt_DE_BMC_EnergieVorhalt(Writedata_u16);

	(void)Rte_Read_IF_VDSO_Vx3d_DE_VDSO_Vx3d(&receiveData_u16);
	
	(void)Rte_Read_RP_BJB_CALID_Index_01_DE_BJB_CALID_Index_01(&rec);
	(void)Rte_Write_PP_SG_BMC_HV_13_SG_BMC_HV_13(&send);

/******************************************************************************************************
                                          Demo Code
*******************************************************************************************************/	
	
	if(testVar_u8 == 1U)
	{
		(void)Rte_Call_UR_CN_HCP5_CANFD01_84d44928_RequestComMode(COMM_NO_COMMUNICATION);  
		(void)Rte_Write_RT_VehComm_PP_BswM_MDGP_ESH_RunRequest_requestedMode(0U);
	}

	/**************************SFD_INITIALIZATION_STATUS_START**************************/

	SFD_Init_Status = Rte_Call_SfdAInitState_GetSFDInitState();

	/**************************SFD_INITIALIZATION_STATUS_END***************************/

	Rte_Call_SfdAVersionInfo_GetVersionInfo(&VersionInfoSFD);


	/******************** SokFm challenge trigger *************************************/

    if(SendChallenge == 1)
	{
		Rte_Read_RP_SOK_Zeit_Hybrid_01_Zeit_SOK_Zeit_Hybrid_01_Zeit(&data_sok);
        Rte_Write_SG_BMC_HV_01_SG_BMC_HV_01(&SOK_BMC_HV01_Data);
        Rte_Write_SG_BMC_HV_02_SG_BMC_HV_02(&SOK_BMC_HV02_Data);
		
	}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_Start
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Start> of PortPrototype <RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_Start(Dcm_StartDataIn_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_ReqData_001Type ReqData_001, Dcm_OpStatusType OpStatus, Dcm_StartDataOut_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_RoutineInfoType *RoutineInfo, uint8 *DataOut_ReqStructure, uint16 *DataLength, Dcm_NegativeResponseCodeType *ErrorCode)
 *     Argument DataOut_ReqStructure: uint8* is of type Dcm_StartFlexibleOutArrayData_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_DataOut_ReqStructureType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_DCM_E_FORCE_RCRRP
 *   RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_DCM_E_PENDING
 *   RTE_E_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_Start(Dcm_StartDataIn_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_ReqData_001Type ReqData_001, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_RoutineInfoType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) RoutineInfo, P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) DataOut_ReqStructure, P2VAR(uint16, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_Start (returns application error)
 *********************************************************************************************************************/

  /* 0xF1AF: Local Variable Declaration */
	uint8 retval_u8 = RTE_E_INVALID; /*PRQA S 2981 */ /*MD_MSR_RetVal */

	/* Check Data is not NULL Pointer */
	// if (NULL_PTR != ResData)
	// {
	// 	for (counter=0; counter<=442; counter++)
    // {
    //   ResData[counter] = 0x05;
    // }
	// 	/* Read Data success, return OK */
	// 	retval_u8 = RTE_E_OK;
	// }
	// else
	// {
	// 	/*Do nothing */
	// }

	/* Check DataLength is not NULL Pointer */
	// if (NULL_PTR != DataLength)
	// {
	// 	/* Set Data Length to 105 bytes as per "VOD_CDS_ADAS_DC_v1.0 and CDS_ADAS_DC_v2.0" sheet */
	// 	*DataLength = 443U;
	// 	/* Return Ok */
	// 	retval_u8 =  RTE_E_OK;
	// }
	// else
	// {
    //     /* Do Nothing */
	// }

	*ErrorCode = DCM_E_REQUESTOUTOFRANGE;
	retval_u8 =  RTE_E_INVALID;
 
	/* Return revtal */
	return retval_u8;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SfdA_GetIds_GetEcuGroupId
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEcuGroupId> of PortPrototype <SfdA_GetIds>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SfdA_GetIds_GetEcuGroupId(uint8 *EcuGroupId)
 *     Argument EcuGroupId: uint8* is of type SfdA_EcuGroupIdType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SfdA_GetIds_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SfdA_GetIds_GetEcuGroupId_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) SfdA_GetIds_GetEcuGroupId(P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) EcuGroupId) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SfdA_GetIds_GetEcuGroupId (returns application error)
 *********************************************************************************************************************/
	EcuGroupId = 0x0A;
  	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SfdA_GetIds_GetEcuId
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEcuId> of PortPrototype <SfdA_GetIds>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SfdA_GetIds_GetEcuId(uint8 *EcuId)
 *     Argument EcuId: uint8* is of type SfdA_EcuGroupIdType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SfdA_GetIds_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SfdA_GetIds_GetEcuId_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) SfdA_GetIds_GetEcuId(P2VAR(uint8, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) EcuId) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SfdA_GetIds_GetEcuId (returns application error)
 *********************************************************************************************************************/
	EcuId = 0x05;
  	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SfdA_GetIds_GetProjectId
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetProjectId> of PortPrototype <SfdA_GetIds>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SfdA_GetIds_GetProjectId(SfdA_ProjectIdType *ProjectId)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SfdA_GetIds_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SfdA_GetIds_GetProjectId_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) SfdA_GetIds_GetProjectId(P2VAR(SfdA_ProjectIdType, AUTOMATIC, RTE_RT_VEHCOMM_APPL_VAR) ProjectId) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SfdA_GetIds_GetProjectId (returns application error)
 *********************************************************************************************************************/
	ProjectId = 0x07;
  	return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SokFmCrTransmitterConfig_BMC_HV_01_ChallengeReceivedIndication
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ChallengeReceivedIndication> of PortPrototype <SokFmCrTransmitterConfig_BMC_HV_01>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SokFmCrTransmitterConfig_BMC_HV_01_ChallengeReceivedIndication(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SokFm_CrTransmitter_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SokFmCrTransmitterConfig_BMC_HV_01_ChallengeReceivedIndication_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_VehComm_CODE) SokFmCrTransmitterConfig_BMC_HV_01_ChallengeReceivedIndication(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SokFmCrTransmitterConfig_BMC_HV_01_ChallengeReceivedIndication (returns application error)
 *********************************************************************************************************************/
  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define RT_VehComm_STOP_SEC_CODE
#include "RT_VehComm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
FUNC(void,CDDNPMGEN2_APPL_CODE)Appl_CddNpmGen2_BUS_Knock_Out_PerformShutDown(void)
{
    Rte_Write_RT_VehComm_PP_BswM_MDGP_ESH_RunRequest_requestedMode(0);
}



FUNC(void,CDDNPMGEN2_APPL_CODE)Appl_CddNpmGen2_ECU_Knock_Out_PerformShutDown(void)
{
    Rte_Write_RT_VehComm_PP_BswM_MDGP_ESH_RunRequest_requestedMode(0);
}

FUNC(Std_ReturnType, VKMS_CODE) Appl_VKMS_PersistKeyStorage_Start( void )
{
	return E_OK;
}

FUNC(Std_ReturnType, VKMS_CODE) Appl_VKMS_PersistKeyStorage_Status(void)
{
	return E_OK;
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



#if 0
/***  Start of saved code (symbol: documentation area:DataServices_Data_TABROW_SFDDevelModeActiv_Read_WriteData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:DataServices_Data_TABROW_SFDDevelModeActiv_Read_ReadData)  */

  Data = C10B_Data_R;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:DataServices_Data_TABROW_SFDDevelModeActiv_Read_ReadData_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:DataServices_Data_TABROW_SFDDevelModeActiv_Read_ConditionCheckRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:DataServices_Data_TABROW_SFDDevelModeActiv_Read_WriteData)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:DataServices_Data_TABROW_SFDDevelModeActiv_Read_ConditionCheckRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif


#if 0
/***  Start of saved code (symbol: runnable implementation:SokFmCrTransmitterConfig_ChallengeReceivedIndication)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:SokFmCrTransmitterConfig_ChallengeReceivedIndication_doc)  */


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
