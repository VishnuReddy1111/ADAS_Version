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
 *             File:  RT_Diag_SWC.c
 *           Config:  StartApplication.dpa
 *        SW-C Type:  RT_Diag_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2300382
 *
 *      Description:  C-Code implementation template for SW-C <RT_Diag_SWC>
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
 * DataPrimitiveType_uint16
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * DataPrimitiveType_uint32
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
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
 * Dcm_SecLevelType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_SesCtrlType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_StartDataOut_CheckProgrammingPreCondition_Out_No_of_PreconditionsPrimitiveType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Dcm_StartDataOut_CheckProgrammingPreCondition_Out_No_of_PreconditionsType
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
 * Esdd_Emm_Temp_Struct
 *   Structure to hold Temperatures from ESDD
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

#include "Rte_RT_Diag_SWC.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "CornerId.h"
#include "EMMApp_VersionInfo.h"
#include "string.h"
#include "SeedKeyGen.h"
#include "SeedKeyGen_private.h"
#include "NvM.h"
#include "NvM_Cfg.h"

// #include "Sec_SeedKey.h"
/*MACROs and Global variables defined after #incude i.e. at top of file*/

#define FAA_HARDWARE_PART_NUMBER_LENGTH               11U
#define FAA_HARDWARE_BASELINE_LENGTH                  2U
#define FAA_SOFTWARE_PART_NUMBER_LENGTH               11U
#define FAA_SOFTWARE_BASELINE_LENGTH                  2U
#define FAA_CALIBRATION_PART_NUMBER_LENGTH            11U
#define FAA_CALIBRATION_BASELINE_LENGTH               2U
#define FAA_SYSTEM_SUPPLIER_IDENTIFIER_DATA_LENGTH    8U
#define FAA_MANUFACTURING_DATE_LENGTH                 3U
#define EMM_PART_NUMBER_LENGTH                        32U
#define EMM_SERIAL_NUMBER_LENGTH                      32U
#define AV_PART_NUMBER_LENGTH                         32U
#define AV_SERIAL_NUMBER_LENGTH                       32U
#define ACB_PART_NUMBER_LENGTH                        32U
#define ACB_SERIAL_NUMBER_LENGTH                      32U
#define FAA_PART_NUMBER_LENGTH                        32U
#define FAA_SERIAL_NUMBER_LENGTH                      32U
#define FAA_SUPPLIER_SOFTWARE_VERSION_NUMBER_LENGTH   32U

#define FAA_SOFTWARE_PART_NUMBER_FL "P0341579 AA" /* Updated by Jenkins build */ 
#define FAA_SOFTWARE_PART_NUMBER_FR "P0341581 AA" /* Updated by Jenkins build */ 
#define FAA_SOFTWARE_PART_NUMBER_RL "P0341582 AA" /* Updated by Jenkins build */ 
#define FAA_SOFTWARE_PART_NUMBER_RR "P0341583 AA" /* Updated by Jenkins build */ 

#define FAA_SOFTWARE_BASELINE "01" /* Updated by Jenkins build */

#define FAA_CALIBRATION_PART_NUMBER_FL "P0342253 AA" /* Updated by Jenkins build */
#define FAA_CALIBRATION_PART_NUMBER_FR "P0342254 AA" /* Updated by Jenkins build */
#define FAA_CALIBRATION_PART_NUMBER_RL "P0342255 AA" /* Updated by Jenkins build */
#define FAA_CALIBRATION_PART_NUMBER_RR "P0342256 AA" /* Updated by Jenkins build */

#define FAA_CALIBRATION_BASELINE "01" /* Updated by Jenkins build */

#define LOW_VOLTAGE_LEVEL 36.0F /*the signed value (magic number) is 36 is defined as macro named as  #define LOW_VOLTAGE_LEVEL 36.0f to make the operands compatible*/
#define HIGH_VOLTAGE_LEVEL 52.0F /*the signed value (magic number) is 52 is defined as macro named as  #define HIGH_VOLTAGE_LEVEL 52.0f to make the operands compatible*/

#define FBL_ADDR 0xa0020048U /*the const number is defined as macro #define FBL_ADDR 0xa0020048u*/
#define BM_ADDR 0xa001ffb8U /*the const number is defined as macro #define BM_ADDR 0xa001ffb8u*/

# define START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */ 

const uint8 FAA_Software_Part_Number_FL[FAA_SOFTWARE_PART_NUMBER_LENGTH] = FAA_SOFTWARE_PART_NUMBER_FL; /*lint !e9075 */ /*lint !e9019*/ /*Suppress ID 9075 The variable is updated by jenkins build. Cannot be made local. Suppress ID 9019 as #include is present after the stop secton of code this warning is suppressed*/
const uint8 FAA_Software_Part_Number_FR[FAA_SOFTWARE_PART_NUMBER_LENGTH] = FAA_SOFTWARE_PART_NUMBER_FR; /*lint !e9075 */ /*Suppress ID 9075 The variable is updated by jenkins build. Cannot be made local*/
const uint8 FAA_Software_Part_Number_RL[FAA_SOFTWARE_PART_NUMBER_LENGTH] = FAA_SOFTWARE_PART_NUMBER_RL; /*lint !e9075 */ /*Suppress ID 9075 The variable is updated by jenkins build. Cannot be made local*/
const uint8 FAA_Software_Part_Number_RR[FAA_SOFTWARE_PART_NUMBER_LENGTH] = FAA_SOFTWARE_PART_NUMBER_RR; /*lint !e9075 */ /*Suppress ID 9075 The variable is updated by jenkins build. Cannot be made local*/

const uint8 FAA_Software_Baseline[FAA_SOFTWARE_BASELINE_LENGTH] = FAA_SOFTWARE_BASELINE; /*lint !e9075 *//*Suppress ID 9075 The variable is updated by jenkins build. Cannot be made local*/

# define STOP_SEC_CONST
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define RT_Diag_SWC_START_SEC_CALIB
#include "RT_Diag_SWC_CALIB_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

const uint8 FAA_Calibration_Part_Number_FL[FAA_CALIBRATION_PART_NUMBER_LENGTH] = FAA_CALIBRATION_PART_NUMBER_FL; /*lint !e9075 *//*Suppress ID 9075 The variable is updated by jenkins build. Cannot be made local*/
const uint8 FAA_Calibration_Part_Number_FR[FAA_CALIBRATION_PART_NUMBER_LENGTH] = FAA_CALIBRATION_PART_NUMBER_FR; /*lint !e9075 *//*Suppress ID 9075 The variable is updated by jenkins build. Cannot be made local*/
const uint8 FAA_Calibration_Part_Number_RL[FAA_CALIBRATION_PART_NUMBER_LENGTH] = FAA_CALIBRATION_PART_NUMBER_RL; /*lint !e9075 *//*Suppress ID 9075 The variable is updated by jenkins build. Cannot be made local*/
const uint8 FAA_Calibration_Part_Number_RR[FAA_CALIBRATION_PART_NUMBER_LENGTH] = FAA_CALIBRATION_PART_NUMBER_RR; /*lint !e9075 *//*Suppress ID 9075 The variable is updated by jenkins build. Cannot be made local*/

const uint8 FAA_Calibration_Baseline[FAA_CALIBRATION_BASELINE_LENGTH] = FAA_CALIBRATION_BASELINE; /*lint !e9075 *//*Suppress ID 9075The variable is updated by jenkins build. Cannot be made local*/
 
#define RT_Diag_SWC_STOP_SEC_CALIB
#include "RT_Diag_SWC_CALIB_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define RT_Diag_SWC_START_SEC_CODE
#include "RT_Diag_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
static uint8 FAA_System_Supplier_Identifier_Data_FL[FAA_SYSTEM_SUPPLIER_IDENTIFIER_DATA_LENGTH] = "V63755  ";

extern Acab_Ascc_Mode_Req_Struct Acab_Ascc_Mode_Req_TP;/* '<S1>/1MSRX_Acab_1ms_ComRx' */
extern Pab_Oil_Temp_Struct Pab_Oil_Temp_TP;           /* '<S1>/PSSD_PressureSensorSerialDataHandler' */


uint32 Seed_Value4bytes =0x0;
uint8 seed_t[4];
uint8 CRC8_Calculate_Lvl02(uint8* data, uint8 length);
uint8 byte_CRC[7] = {0}; 

uint8 FailedAttempts = 0xFF;
uint8 tmp_Flag;
uint8 recheck_Flag = 0x00;
uint8 initial_tmp = 0x00;
NvM_RequestResultType error_sts;
// Security_Flag tmp_Flag_read;

uint8 CRC8_Calculate_Lvl02(uint8* data, uint8 length)
{
    uint8 t_crc;
    uint8 f, b;
    t_crc = 0xFF;
 
    for (f = 0; f < length; f++)
    {
        t_crc ^= data[f];
 
        for (b = 0; b < 8; b++)
        {
            if ((t_crc & 0x80) != 0)
            {
                t_crc <<= 1;
                t_crc ^= 0x1D;
            }
            else
            {
                t_crc <<= 1;
            }
        }
    }
 
    return ~t_crc;
}

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
 * DataPrimitiveType_uint16: Integer in interval [0...65535]
 * DataPrimitiveType_uint32: Integer in interval [0...4294967295]
 * DataPrimitiveType_uint8: Integer in interval [0...255]
 * Dcm_StartDataOut_CheckProgrammingPreCondition_Out_No_of_PreconditionsPrimitiveType: Integer in interval [0...255]
 * Dcm_StartDataOut_CheckProgrammingPreCondition_Out_No_of_PreconditionsType: Integer in interval [0...255]
 * Dem_EventIdType: Integer in interval [1...65535]
 * dtRef_VOID: DataReference
 * dtRef_const_VOID: DataReference
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_E_POSITIVERESPONSE (0U)
 *   DCM_E_GENERALREJECT (16U)
 *   DCM_E_SERVICENOTSUPPORTED (17U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
 *   DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
 *   DCM_E_RESPONSETOOLONG (20U)
 *   DCM_E_BUSYREPEATREQUEST (33U)
 *   DCM_E_CONDITIONSNOTCORRECT (34U)
 *   DCM_E_REQUESTSEQUENCEERROR (36U)
 *   DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
 *   DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
 *   DCM_E_REQUESTOUTOFRANGE (49U)
 *   DCM_E_SECURITYACCESSDENIED (51U)
 *   DCM_E_AUTHENTICATIONREQUIRED (52U)
 *   DCM_E_INVALIDKEY (53U)
 *   DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
 *   DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
 *   DCM_E_CVF_INVALIDTIMEPERIOD (80U)
 *   DCM_E_CVF_INVALIDSIGNATURE (81U)
 *   DCM_E_CVF_INVALIDCHAINOFTRUST (82U)
 *   DCM_E_CVF_INVALIDTYPE (83U)
 *   DCM_E_CVF_INVALIDFORMAT (84U)
 *   DCM_E_CVF_INVALIDCONTENT (85U)
 *   DCM_E_CVF_INVALIDSCOPE (86U)
 *   DCM_E_CVF_INVALIDCERTIFICATEREVOKED (87U)
 *   DCM_E_OWNERSHIPVERIFICATIONFAILED (88U)
 *   DCM_E_CHALLENGECALCULATIONFAILED (89U)
 *   DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
 *   DCM_E_TRANSFERDATASUSPENDED (113U)
 *   DCM_E_GENERALPROGRAMMINGFAILURE (114U)
 *   DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
 *   DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING (120U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
 *   DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
 *   DCM_E_RPMTOOHIGH (129U)
 *   DCM_E_RPMTOOLOW (130U)
 *   DCM_E_ENGINEISRUNNING (131U)
 *   DCM_E_ENGINEISNOTRUNNING (132U)
 *   DCM_E_ENGINERUNTIMETOOLOW (133U)
 *   DCM_E_TEMPERATURETOOHIGH (134U)
 *   DCM_E_TEMPERATURETOOLOW (135U)
 *   DCM_E_VEHICLESPEEDTOOHIGH (136U)
 *   DCM_E_VEHICLESPEEDTOOLOW (137U)
 *   DCM_E_THROTTLE_PEDALTOOHIGH (138U)
 *   DCM_E_THROTTLE_PEDALTOOLOW (139U)
 *   DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
 *   DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
 *   DCM_E_BRAKESWITCH_NOTCLOSED (143U)
 *   DCM_E_SHIFTERLEVERNOTINPARK (144U)
 *   DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
 *   DCM_E_VOLTAGETOOHIGH (146U)
 *   DCM_E_VOLTAGETOOLOW (147U)
 *   DCM_E_VMSCNC_0 (240U)
 *   DCM_E_VMSCNC_1 (241U)
 *   DCM_E_VMSCNC_2 (242U)
 *   DCM_E_VMSCNC_3 (243U)
 *   DCM_E_VMSCNC_4 (244U)
 *   DCM_E_VMSCNC_5 (245U)
 *   DCM_E_VMSCNC_6 (246U)
 *   DCM_E_VMSCNC_7 (247U)
 *   DCM_E_VMSCNC_8 (248U)
 *   DCM_E_VMSCNC_9 (249U)
 *   DCM_E_VMSCNC_A (250U)
 *   DCM_E_VMSCNC_B (251U)
 *   DCM_E_VMSCNC_C (252U)
 *   DCM_E_VMSCNC_D (253U)
 *   DCM_E_VMSCNC_E (254U)
 * Dcm_OpStatusType: Enumeration of integer in interval [0...64] with enumerators
 *   DCM_INITIAL (0U)
 *   DCM_PENDING (1U)
 *   DCM_CANCEL (2U)
 *   DCM_FORCE_RCRRP_OK (3U)
 *   DCM_FORCE_RCRRP_NOT_OK (64U)
 * Dcm_SecLevelType: Enumeration of integer in interval [0...2] with enumerators
 *   DCM_SEC_LEV_LOCKED (0U)
 *   DCM_SEC_LEV_L2 (2U)
 * Dcm_SesCtrlType: Enumeration of integer in interval [0...3] with enumerators
 *   DCM_DEFAULT_SESSION (1U)
 *   DCM_PROGRAMMING_SESSION (2U)
 *   DCM_EXTENDED_DIAGNOSTIC_SESSION (3U)
 * NvM_RequestResultType: Enumeration of integer in interval [0...8] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 *
 * Array Types:
 * ============
 * DataArrayType_uint8_3: Array with 3 element(s) of type uint8
 * DataArrayType_uint8_32: Array with 32 element(s) of type uint8
 * Dcm_Data11ByteType: Array with 11 element(s) of type uint8
 * Dcm_Data12ByteType: Array with 12 element(s) of type uint8
 * Dcm_Data1ByteType: Array with 1 element(s) of type uint8
 * Dcm_Data2ByteType: Array with 2 element(s) of type uint8
 * Dcm_Data32ByteType: Array with 32 element(s) of type uint8
 * Dcm_Data36ByteType: Array with 36 element(s) of type uint8
 * Dcm_Data3ByteType: Array with 3 element(s) of type uint8
 * Dcm_Data4ByteType: Array with 4 element(s) of type uint8
 * Dcm_Data8ByteType: Array with 8 element(s) of type uint8
 * Rte_DT_meta_fingerprint_0: Array with 12 element(s) of type uint8
 * Rte_DT_meta_fingerprint_1: Array with 2 element(s) of type uint8
 * Rte_DT_meta_fingerprint_2: Array with 2 element(s) of type uint8
 * rt_Array_uint8_11: Array with 11 element(s) of type uint8
 * rt_Array_uint8_2: Array with 2 element(s) of type uint8
 * rt_Array_uint8_3: Array with 3 element(s) of type uint8
 * rt_Array_uint8_32: Array with 32 element(s) of type uint8
 *
 * Record Types:
 * =============
 * AsccCdd_SystemTimer_Struct: Record with elements
 *   AsccCdd_SystemTimer of type uint32
 * Esdd_Emm_Temp_Struct: Record with elements
 *   Esdd_Emm_Temp_Emms_DegC of type float32
 *   Esdd_Emm_Temp_Pcba_DegC of type float32
 *   Esdd_Emm_Temp_AtPhase_U_Deg of type float32
 *   Esdd_Emm_Temp_AtPhase_V_Deg of type float32
 *   Esdd_Emm_Temp_AtPhase_W_Deg of type float32
 * Esdd_Sply_Data_Struct: Record with elements
 *   Esdd_SplyU_Volt of type float32
 *   Esdd_SplyI_Amp of type float32
 *   Esdd_Bus_Pwr_Est_Watt of type float32
 * Essm_Ign_Cycle_Cntr_Struct: Record with elements
 *   Essm_Ign_Cycl_Cntr of type uint32
 * Fcc_F_AtActr_Limit_Lpf_Struct: Record with elements
 *   Fcc_F_AtActr_Limit_Cmd_Lpf of type float32
 * Nvm_CustomerHwNumbers_Struct: Record with elements
 *   F110_FAA_Customer_HW_Part_Number of type rt_Array_uint8_11
 *   F111_FAA_Customer_HW_Baseline of type rt_Array_uint8_2
 *   F18B_FAA_Manufacturing_Date of type rt_Array_uint8_3
 * Nvm_HardwareNumbers_Struct: Record with elements
 *   EMM_Part_Number of type rt_Array_uint8_32
 *   EMM_Serial_Number of type rt_Array_uint8_32
 *   AV_Part_Number of type rt_Array_uint8_32
 *   AV_Serial_Number of type rt_Array_uint8_32
 *   ACB_Part_Number of type rt_Array_uint8_32
 *   ACB_Serial_Number of type rt_Array_uint8_32
 *   FAA_Part_Number of type rt_Array_uint8_32
 *   FAA_Serial_Number of type rt_Array_uint8_32
 * SG_ZONE_3A9_Group_Struct: Record with elements
 *   VehOdometer of type uint32
 * SG_ZONE_3B2_Group_Struct: Record with elements
 *   Day of type uint8
 *   Hr of type uint8
 *   Min of type uint8
 *   MSec of type uint16
 *   Mth of type uint8
 *   Sec of type uint8
 *   Yr of type uint8
 * Uab_Total_Oper_Cycl_Cntr_Struct: Record with elements
 *   UAB_Total_Operation_Cycle_Cntr of type uint32
 * meta_fingerprint: Record with elements
 *   Fingerprint of type Rte_DT_meta_fingerprint_0
 *   progattemp of type Rte_DT_meta_fingerprint_1
 *   progcounter of type Rte_DT_meta_fingerprint_2
 *
 *********************************************************************************************************************/


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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_EMM_Phase_Temperature_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_EMM_Phase_Temperature_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_EMM_Phase_Temperature_ReadData (returns application error)
 *********************************************************************************************************************/
  Esdd_Emm_Temp_Struct tmp_Esdd_Emm_Temp_Struct;

  (void)Rte_Read_Esdd_Emm_Temp_Esdd_Emm_Temp(&tmp_Esdd_Emm_Temp_Struct);

  float32 temp_U = tmp_Esdd_Emm_Temp_Struct.Esdd_Emm_Temp_AtPhase_U_Deg;
  float32 temp_V = tmp_Esdd_Emm_Temp_Struct.Esdd_Emm_Temp_AtPhase_V_Deg;
  float32 temp_W = tmp_Esdd_Emm_Temp_Struct.Esdd_Emm_Temp_AtPhase_W_Deg;
  float32 max_temp = 0.0F;

  if ((temp_U > temp_V) && (temp_U > temp_W))
  {
    max_temp = temp_U;
  }
  if ((temp_V > temp_U) && (temp_V > temp_W))
  {
    max_temp = temp_V;
  }
  if ((temp_W > temp_U) && (temp_W > temp_V))
  {
    max_temp = temp_W;
  }

  Data[0] = (uint8)(uint32)(max_temp);

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_EMM_Powerup_Cycle_Counter_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_EMM_Powerup_Cycle_Counter_ReadData(P2VAR(DataPrimitiveType_uint32, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_EMM_Powerup_Cycle_Counter_ReadData (returns application error)
 *********************************************************************************************************************/
  Essm_Ign_Cycle_Cntr_Struct tmp_Essm_Ign_Cycle_Cntr_Struct;

  (void)Rte_Read_Essm_Ign_Cycle_Cntr_Essm_Ign_Cycle_Cntr(&tmp_Essm_Ign_Cycle_Cntr_Struct);

  Data[0] = (uint32)tmp_Essm_Ign_Cycle_Cntr_Struct.Essm_Ign_Cycl_Cntr;

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_FAA_Oil_Temperature_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_FAA_Oil_Temperature_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_FAA_Oil_Temperature_ReadData (returns application error)
 *********************************************************************************************************************/

  Data[0] = Pab_Oil_Temp_TP.Pab_Oil_Temp_C;

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_FAA_SW_ID_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_FAA_SW_ID_ReadData(P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_FAA_SW_ID_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index=0U;

  for (temp_Index = 0U; temp_Index < FAA_SUPPLIER_SOFTWARE_VERSION_NUMBER_LENGTH; temp_Index++)
  {
    Data[temp_Index] =(uint8)EMMApp_Application_Id[temp_Index];   
  }
  
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_FAA_System_Timer_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_FAA_System_Timer_ReadData(P2VAR(DataPrimitiveType_uint32, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_FAA_System_Timer_ReadData (returns application error)
 *********************************************************************************************************************/
  AsccCdd_SystemTimer_Struct tmp_AsccCdd_SystemTimer_Struct;

  (void)Rte_Read_AsccCdd_SystemTimer_AsccCdd_SystemTimer(&tmp_AsccCdd_SystemTimer_Struct);

  Data[0] = (uint32)tmp_AsccCdd_SystemTimer_Struct.AsccCdd_SystemTimer;

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Final_Force_Command_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Final_Force_Command_ReadData(P2VAR(DataPrimitiveType_uint16, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Final_Force_Command_ReadData (returns application error)
 *********************************************************************************************************************/
  // *   Std_ReturnType Rte_Read_Fcc_F_AtActr_Limit_Lpf_Fcc_F_AtActr_Limit_Lpf(Fcc_F_AtActr_Limit_Lpf_Struct *data)
  Fcc_F_AtActr_Limit_Lpf_Struct tmp_Fcc_F_AtActr_Limit_Lpf_Struct;

  (void)Rte_Read_Fcc_F_AtActr_Limit_Lpf_Fcc_F_AtActr_Limit_Lpf(&tmp_Fcc_F_AtActr_Limit_Lpf_Struct);

  Data[0] = (uint16)(uint32)(tmp_Fcc_F_AtActr_Limit_Lpf_Struct.Fcc_F_AtActr_Limit_Cmd_Lpf);

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Mode_Request_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Mode_Request_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_FAS_Corner_Actuator_Mode_Request_ReadData (returns application error)
 *********************************************************************************************************************/
 
  Data[0] = Acab_Ascc_Mode_Req_TP.Acab_Ascc_Mode_Req;

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_Fault_ID_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_Fault_ID_ReadData(Dem_EventIdType EventId, P2VAR(DataPrimitiveType_uint16, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_Fault_ID_ReadData (returns application error)
 *********************************************************************************************************************/
  Data[0] = EventId;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_Vehicle_Operating_Cycle_Counter_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_FAASupplierExtendedData_Vehicle_Operating_Cycle_Counter_ReadData(P2VAR(DataPrimitiveType_uint32, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_FAASupplierExtendedData_Vehicle_Operating_Cycle_Counter_ReadData (returns application error)
 *********************************************************************************************************************/
  Uab_Total_Oper_Cycl_Cntr_Struct tmp_Uab_Total_Oper_Cycl_Cntr_Struct;

  (void)Rte_Read_Uab_Total_Oper_Cycl_Cntr_Uab_Total_Oper_Cycl_Cntr(&tmp_Uab_Total_Oper_Cycl_Cntr_Struct);

  Data[0] = tmp_Uab_Total_Oper_Cycl_Cntr_Struct.UAB_Total_Operation_Cycle_Cntr;

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_48V_Battery_voltage_V_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_48V_Battery_voltage_V_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_48V_Battery_voltage_V_ReadData (returns application error)
 *********************************************************************************************************************/
  Esdd_Sply_Data_Struct tmp_Esdd_Sply_Data_Struct;

  (void)Rte_Read_Esdd_Sply_Data_Esdd_Sply_Data(&tmp_Esdd_Sply_Data_Struct);

  float32 temp_volt = tmp_Esdd_Sply_Data_Struct.Esdd_SplyU_Volt;

  Data[0] = (uint8)(uint32)(temp_volt);

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_Odometer_Value_Km_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Odometer_Value_Km_ReadData(P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_Odometer_Value_Km_ReadData (returns application error)
 *********************************************************************************************************************/
  SG_ZONE_3A9_Group tmp_SG_ZONE_3A9_Group;

  (void)Rte_Read_SG_ZONE_3A9_Group_SG_ZONE_3A9_Group(&tmp_SG_ZONE_3A9_Group);

  Data[0] = (uint8) ((tmp_SG_ZONE_3A9_Group.VehOdometer >> 16U) & ((uint32)0x000000FF)); /*typecasted the signed value with uint32 and the signed value (magic number) is appened with 'u' so as to make the operands compatible */
  Data[1] = (uint8) ((tmp_SG_ZONE_3A9_Group.VehOdometer >> 8U) & ((uint32)0x000000FF)); /*typecasted the signed value with uint32 and the signed value (magic number) is appened with 'u' so as to make the operands compatible */
  Data[2] = (uint8) ((tmp_SG_ZONE_3A9_Group.VehOdometer) & ((uint32)0x000000FF)); /*typecasted the signed value with uint32 */

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_Timestamp_Day_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Timestamp_Day_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_Timestamp_Day_ReadData (returns application error)
 *********************************************************************************************************************/
  SG_ZONE_3B2_Group tmp_SG_ZONE_3B2_Group;

  (void)Rte_Read_SG_ZONE_3B2_Group_SG_ZONE_3B2_Group(&tmp_SG_ZONE_3B2_Group);

  Data[0] = (uint8)tmp_SG_ZONE_3B2_Group.Day;

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_Timestamp_Hour_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Timestamp_Hour_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_Timestamp_Hour_ReadData (returns application error)
 *********************************************************************************************************************/
  SG_ZONE_3B2_Group tmp_SG_ZONE_3B2_Group;

  (void)Rte_Read_SG_ZONE_3B2_Group_SG_ZONE_3B2_Group(&tmp_SG_ZONE_3B2_Group);

  Data[0] =(uint8)tmp_SG_ZONE_3B2_Group.Hr;

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_Timestamp_Minute_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Timestamp_Minute_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_Timestamp_Minute_ReadData (returns application error)
 *********************************************************************************************************************/
  SG_ZONE_3B2_Group tmp_SG_ZONE_3B2_Group;

  (void)Rte_Read_SG_ZONE_3B2_Group_SG_ZONE_3B2_Group(&tmp_SG_ZONE_3B2_Group);

  Data[0]  = (uint8)tmp_SG_ZONE_3B2_Group.Min;

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_Timestamp_Month_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Timestamp_Month_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_Timestamp_Month_ReadData (returns application error)
 *********************************************************************************************************************/
  SG_ZONE_3B2_Group tmp_SG_ZONE_3B2_Group;

  (void)Rte_Read_SG_ZONE_3B2_Group_SG_ZONE_3B2_Group(&tmp_SG_ZONE_3B2_Group);

  Data[0]  = tmp_SG_ZONE_3B2_Group.Mth;

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_Timestamp_Second_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Timestamp_Second_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_Timestamp_Second_ReadData (returns application error)
 *********************************************************************************************************************/
  SG_ZONE_3B2_Group tmp_SG_ZONE_3B2_Group;

  (void)Rte_Read_SG_ZONE_3B2_Group_SG_ZONE_3B2_Group(&tmp_SG_ZONE_3B2_Group);

  Data[0] = (uint8)tmp_SG_ZONE_3B2_Group.Sec;

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_Timestamp_Year_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) CBReadData_StandardEnvironmentData_Timestamp_Year_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CBReadData_StandardEnvironmentData_Timestamp_Year_ReadData (returns application error)
 *********************************************************************************************************************/
  SG_ZONE_3B2_Group tmp_SG_ZONE_3B2_Group;

  (void)Rte_Read_SG_ZONE_3B2_Group_SG_ZONE_3B2_Group(&tmp_SG_ZONE_3B2_Group);

  Data[0] = (uint8)tmp_SG_ZONE_3B2_Group.Yr;

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1001_EMM_Hardware_Part_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1001_EMM_Hardware_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1001_EMM_Hardware_Part_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus; 
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1001_EMM_Hardware_Part_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1001_EMM_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1001_EMM_Hardware_Part_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;

  Nvm_HardwareNumbers_Struct temp_Nvm_HardwareNumbers_Struct;

  (void)Rte_Read_Nvm_HardwareNumbers_Nvm_HardwareNumbers(&temp_Nvm_HardwareNumbers_Struct);

  for (temp_Index = 0U; temp_Index < EMM_PART_NUMBER_LENGTH; temp_Index++)
  {
    Data[temp_Index] = temp_Nvm_HardwareNumbers_Struct.EMM_Part_Number[temp_Index];

    retVal = RTE_E_OK;
  }
 
 return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1002_EMM_Serial_Part_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1002_EMM_Serial_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1002_EMM_Serial_Part_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1002_EMM_Serial_Part_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1002_EMM_Serial_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1002_EMM_Serial_Part_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;

  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;

  Nvm_HardwareNumbers_Struct temp_Nvm_HardwareNumbers_Struct;

  (void)Rte_Read_Nvm_HardwareNumbers_Nvm_HardwareNumbers(&temp_Nvm_HardwareNumbers_Struct);

  for (temp_Index = 0U; temp_Index < EMM_SERIAL_NUMBER_LENGTH; temp_Index++)
  {

       Data[temp_Index] = temp_Nvm_HardwareNumbers_Struct.EMM_Serial_Number[temp_Index];
   
    retVal = RTE_E_OK;
  }
 
 return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1003_AV_Hardware_Part_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1003_AV_Hardware_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1003_AV_Hardware_Part_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1003_AV_Hardware_Part_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1003_AV_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1003_AV_Hardware_Part_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;

  Nvm_HardwareNumbers_Struct temp_Nvm_HardwareNumbers_Struct;

  (void)Rte_Read_Nvm_HardwareNumbers_Nvm_HardwareNumbers(&temp_Nvm_HardwareNumbers_Struct);

  for (temp_Index = 0U; temp_Index < AV_PART_NUMBER_LENGTH; temp_Index++)
  {
    Data[temp_Index] = temp_Nvm_HardwareNumbers_Struct.AV_Part_Number[temp_Index];
    retVal = RTE_E_OK;
  }
 
 return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1004_AV_Serial_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1004_AV_Serial_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1004_AV_Serial_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1004_AV_Serial_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1004_AV_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1004_AV_Serial_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;

  Nvm_HardwareNumbers_Struct temp_Nvm_HardwareNumbers_Struct;

  (void)Rte_Read_Nvm_HardwareNumbers_Nvm_HardwareNumbers(&temp_Nvm_HardwareNumbers_Struct);

  for (temp_Index = 0U; temp_Index < AV_SERIAL_NUMBER_LENGTH; temp_Index++)
  {
    Data[temp_Index] = temp_Nvm_HardwareNumbers_Struct.AV_Serial_Number[temp_Index];
    retVal = RTE_E_OK;
  } 
 
 return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1005_ACB_Hardware_Part_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1005_ACB_Hardware_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1005_ACB_Hardware_Part_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1005_ACB_Hardware_Part_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1005_ACB_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1005_ACB_Hardware_Part_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;

  Nvm_HardwareNumbers_Struct temp_Nvm_HardwareNumbers_Struct;

  (void)Rte_Read_Nvm_HardwareNumbers_Nvm_HardwareNumbers(&temp_Nvm_HardwareNumbers_Struct);

  for (temp_Index = 0U; temp_Index < ACB_PART_NUMBER_LENGTH; temp_Index++)
  {
    Data[temp_Index] = temp_Nvm_HardwareNumbers_Struct.ACB_Part_Number[temp_Index];
    retVal = RTE_E_OK;
  }
 
 return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1006_ACB_Serial_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1006_ACB_Serial_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1006_ACB_Serial_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1006_ACB_Serial_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_1006_ACB_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_1006_ACB_Serial_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
 
  Nvm_HardwareNumbers_Struct temp_Nvm_HardwareNumbers_Struct;

  (void)Rte_Read_Nvm_HardwareNumbers_Nvm_HardwareNumbers(&temp_Nvm_HardwareNumbers_Struct);

  for (temp_Index = 0U; temp_Index < ACB_SERIAL_NUMBER_LENGTH; temp_Index++)
  {
    Data[temp_Index] = temp_Nvm_HardwareNumbers_Struct.ACB_Serial_Number[temp_Index];   
    retVal = RTE_E_OK;
  }
 
  return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F110_FAA_customer_Hardware_Part_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F110_FAA_customer_Hardware_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F110_FAA_customer_Hardware_Part_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F110_FAA_customer_Hardware_Part_Number_ReadData_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F110_FAA_customer_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F110_FAA_customer_Hardware_Part_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;

  Nvm_CustomerHwNumbers_Struct tmp_Nvm_CustomerHwNumbers_Struct;

  (void)Rte_Read_Nvm_Customer_Hw_Numbers_Nvm_Customer_Hw_Numbers(&tmp_Nvm_CustomerHwNumbers_Struct);

  for(temp_Index = 0U; temp_Index < FAA_HARDWARE_PART_NUMBER_LENGTH; temp_Index++)
  {
    Data[temp_Index] =tmp_Nvm_CustomerHwNumbers_Struct.F110_FAA_Customer_HW_Part_Number[temp_Index];
    retVal = RTE_E_OK;
  }
 
 return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F111_FAA_customer_Hardware_Baseline_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F111_FAA_customer_Hardware_Baseline_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F111_FAA_customer_Hardware_Baseline_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F111_FAA_customer_Hardware_Baseline_ReadData_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F111_FAA_customer_Hardware_Baseline_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F111_FAA_customer_Hardware_Baseline_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  Nvm_CustomerHwNumbers_Struct tmp_Nvm_CustomerHwNumbers_Struct;

  (void)Rte_Read_Nvm_Customer_Hw_Numbers_Nvm_Customer_Hw_Numbers(&tmp_Nvm_CustomerHwNumbers_Struct);

  for(temp_Index = 0U; temp_Index < FAA_HARDWARE_BASELINE_LENGTH; temp_Index++)
  {
    Data[temp_Index] = tmp_Nvm_CustomerHwNumbers_Struct.F111_FAA_Customer_HW_Baseline[temp_Index]; 
    retVal = RTE_E_OK;
  }
  return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F118_FAA_Customer_Software_Part_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F118_FAA_Customer_Software_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F118_FAA_Customer_Software_Part_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F118_FAA_Customer_Software_Part_Number_ReadData_doc
 *********************************************************************************************************************/

/*F118
FL-P0341579
FR-P0341581
RL-P0341582
RR-P0341583 */



/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F118_FAA_Customer_Software_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F118_FAA_Customer_Software_Part_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  CornerId_Enum cornerid;
  CornerId_getCornerId(&cornerid);

  for(temp_Index = 0U; temp_Index < FAA_SOFTWARE_PART_NUMBER_LENGTH; temp_Index++)
  {
    if(cornerid == CornerId_Enum_CORNER_FL)
    {
      Data[temp_Index] = FAA_Software_Part_Number_FL[temp_Index];
    }
    if(cornerid == CornerId_Enum_CORNER_FR)
    {
      Data[temp_Index] = FAA_Software_Part_Number_FR[temp_Index];
    }
    if(cornerid == CornerId_Enum_CORNER_RL)
    {
      Data[temp_Index] = FAA_Software_Part_Number_RL[temp_Index];
    }
    if(cornerid == CornerId_Enum_CORNER_RR)
    {
      Data[temp_Index] = FAA_Software_Part_Number_RR[temp_Index];
    }
    retVal = RTE_E_OK;
  }
  return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F119_FAA_Customer_Software_Baseline_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F119_FAA_Customer_Software_Baseline_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F119_FAA_Customer_Software_Baseline_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F119_FAA_Customer_Software_Baseline_ReadData_doc
 *********************************************************************************************************************/

/*F119
FL - AA
FR - AA
RL - AA
RR - AA */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F119_FAA_Customer_Software_Baseline_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F119_FAA_Customer_Software_Baseline_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;

  for(temp_Index = 0U; temp_Index < FAA_SOFTWARE_BASELINE_LENGTH; temp_Index++)
  {
    Data[temp_Index] = FAA_Software_Baseline[temp_Index];
    retVal = RTE_E_OK;
  }
  return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F130_FAA_Customer_Calibration_Part_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F130_FAA_Customer_Calibration_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F130_FAA_Customer_Calibration_Part_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

#define RT_Diag_SWC_STOP_SEC_CODE
#include "RT_Diag_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F130_FAA_Customer_Calibration_Part_Number_ReadData_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F130_FAA_Customer_Calibration_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F130_FAA_Customer_Calibration_Part_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  CornerId_Enum cornerid;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  CornerId_getCornerId(&cornerid);
  for(temp_Index = 0U; temp_Index < FAA_CALIBRATION_PART_NUMBER_LENGTH; temp_Index++)
  {
    if(cornerid == CornerId_Enum_CORNER_FL)
    {
      Data[temp_Index] = FAA_Calibration_Part_Number_FL[temp_Index];
    }
    if(cornerid == CornerId_Enum_CORNER_FR)
    {
      Data[temp_Index] = FAA_Calibration_Part_Number_FR[temp_Index];
    }
    if(cornerid == CornerId_Enum_CORNER_RL)
    {
      Data[temp_Index] = FAA_Calibration_Part_Number_RL[temp_Index];
    }
    if(cornerid == CornerId_Enum_CORNER_RR)
    {
      Data[temp_Index] = FAA_Calibration_Part_Number_RR[temp_Index];
    }
    retVal = RTE_E_OK;
  }
  return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F131_FAA_Customer_Calibration_Baseline_ConditionCheckRead_doc
 *********************************************************************************************************************/
#define RT_Diag_SWC_START_SEC_CODE
#include "RT_Diag_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F131_FAA_Customer_Calibration_Baseline_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F131_FAA_Customer_Calibration_Baseline_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}
#define RT_Diag_SWC_STOP_SEC_CODE
#include "RT_Diag_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F131_FAA_Customer_Calibration_Baseline_ReadData_doc
 *********************************************************************************************************************/

#define RT_Diag_SWC_START_SEC_CALIB
#include "RT_Diag_SWC_CALIB_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*F131 */


#define RT_Diag_SWC_STOP_SEC_CALIB
#include "RT_Diag_SWC_CALIB_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define RT_Diag_SWC_START_SEC_CODE
#include "RT_Diag_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F131_FAA_Customer_Calibration_Baseline_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F131_FAA_Customer_Calibration_Baseline_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;

  for(temp_Index = 0U; temp_Index < FAA_CALIBRATION_BASELINE_LENGTH; temp_Index++)
  {
    Data[temp_Index] = FAA_Calibration_Baseline[temp_Index];
    retVal = RTE_E_OK;
  }
  return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F150_FAA_Bootloader_Version_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F150_FAA_Bootloader_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F150_FAA_Bootloader_Version_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F150_FAA_Bootloader_Version_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F150_FAA_Bootloader_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F150_FAA_Bootloader_Version_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8* fbl_id = (uint8*) FBL_ADDR; /*lint !e9078*/ /*lint !e954 */ 
  uint8 temp = 0U;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;

  for (temp = 0U; temp < 32U; temp++)
  {
    Data[temp] = fbl_id[temp];
  }        
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F151_FAA_Supplier_Calibration_Version_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F151_FAA_Supplier_Calibration_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F151_FAA_Supplier_Calibration_Version_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F151_FAA_Supplier_Calibration_Version_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F151_FAA_Supplier_Calibration_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F151_FAA_Supplier_Calibration_Version_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index = 0U;
  char l_variant[3] = {'\0','\0','\0'};
  uint8 temp_Index2 = 0U;
  uint8 Data_len_temp = 0U;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;

  for (temp_Index = 0U; temp_Index < 36U; temp_Index++)
  {
    Data[temp_Index] = 0U; /* test that this correctly initialises the array and no garbage is returned as the end of the string */
  }
  for (temp_Index = 0U; temp_Index < 32U; temp_Index++)
  {
    Data[temp_Index] = (uint8)(EMMApp_Calibration_Id[temp_Index]); /* Current size of EMMApp_Calibration_Id is 64 but will be changed back to 32 during integration */ //cannot assign 'character' to different essential type 'unsigned8 so typecasted it
  }
  (void)strcat(Data, "-");
  Data_len_temp = (uint8)(strlen(Data)); //cannot assign 'signed32' to different essential type 'unsigned8 so typecasted it

  for (temp_Index = 0U; temp_Index < 3U; temp_Index++)
  {
    l_variant[temp_Index] = EMMApp_Calibration_Variant[temp_Index];
  }
  (void)strcat(Data, (const char *)l_variant); 
  for (temp_Index2 = Data_len_temp+3U; temp_Index2 < 36U; temp_Index2++) // //cannot assign 'signed32' to different essential type 'unsigned8 so made it 3u
  {
    Data[temp_Index2] = 0x20U;
  }

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F186_Active_Session_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F186_Active_Session_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F186_Active_Session_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F186_Active_Session_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F186_Active_Session_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F186_Active_Session_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_session; 
  (void)OpStatus;
  (void)Rte_Call_DCMServices_GetSesCtrlType(&temp_session); 
  Data[0] = temp_session;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F18A_FAA_System_Supplier_Identifier_Data_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18A_FAA_System_Supplier_Identifier_Data_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F18A_FAA_System_Supplier_Identifier_Data_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F18A_FAA_System_Supplier_Identifier_Data_ReadData_doc
 *********************************************************************************************************************/

/*F18A*/   


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18A_FAA_System_Supplier_Identifier_Data_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F18A_FAA_System_Supplier_Identifier_Data_ReadData (returns application error)
 *********************************************************************************************************************/

  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */ 
  (void)OpStatus;

  for(temp_Index = 0U; temp_Index < FAA_SYSTEM_SUPPLIER_IDENTIFIER_DATA_LENGTH; temp_Index++)
  {
    Data[temp_Index] = FAA_System_Supplier_Identifier_Data_FL[temp_Index];
    retVal = RTE_E_OK;
  }
  return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F18B_FAA_Manufacturing_Date_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18B_FAA_Manufacturing_Date_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F18B_FAA_Manufacturing_Date_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F18B_FAA_Manufacturing_Date_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18B_FAA_Manufacturing_Date_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F18B_FAA_Manufacturing_Date_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  Nvm_CustomerHwNumbers_Struct tmp_Nvm_CustomerHwNumbers_Struct;

  (void)Rte_Read_Nvm_Customer_Hw_Numbers_Nvm_Customer_Hw_Numbers(&tmp_Nvm_CustomerHwNumbers_Struct);

  for(temp_Index = 0U; temp_Index < FAA_MANUFACTURING_DATE_LENGTH; temp_Index++)
  {
    Data[temp_Index] = tmp_Nvm_CustomerHwNumbers_Struct.F18B_FAA_Manufacturing_Date[temp_Index];    
    retVal = RTE_E_OK;
  }

 return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F18C_FAA_Serial_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18C_FAA_Serial_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F18C_FAA_Serial_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F18C_FAA_Serial_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F18C_FAA_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F18C_FAA_Serial_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index;
  uint8 retVal = E_NOT_OK;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  Nvm_HardwareNumbers_Struct temp_Nvm_HardwareNumbers_Struct;

  (void)Rte_Read_Nvm_HardwareNumbers_Nvm_HardwareNumbers(&temp_Nvm_HardwareNumbers_Struct);

  for (temp_Index = 0U; temp_Index < FAA_SERIAL_NUMBER_LENGTH; temp_Index++)
  {
    Data[temp_Index] = temp_Nvm_HardwareNumbers_Struct.FAA_Serial_Number[temp_Index];
    
    retVal = RTE_E_OK;
  }
 
  return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F193_FAA_Supplier_Hardware_Version_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F193_FAA_Supplier_Hardware_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F193_FAA_Supplier_Hardware_Version_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F193_FAA_Supplier_Hardware_Version_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F193_FAA_Supplier_Hardware_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F193_FAA_Supplier_Hardware_Version_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  Nvm_HardwareNumbers_Struct temp_Nvm_HardwareNumbers_Struct;

  (void)Rte_Read_Nvm_HardwareNumbers_Nvm_HardwareNumbers(&temp_Nvm_HardwareNumbers_Struct);

  for (temp_Index = 0U; temp_Index < FAA_PART_NUMBER_LENGTH; temp_Index++)
  {
    Data[temp_Index] = temp_Nvm_HardwareNumbers_Struct.FAA_Part_Number[temp_Index];
    retVal = RTE_E_OK;
  }
 
  return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F195_FAA_Supplier_Software_Version_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F195_FAA_Supplier_Software_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F195_FAA_Supplier_Software_Version_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F195_FAA_Supplier_Software_Version_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_F195_FAA_Supplier_Software_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_F195_FAA_Supplier_Software_Version_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8 temp_Index = 0U;
  uint8 retVal = E_NOT_OK;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;

  for (temp_Index = 0U; temp_Index < FAA_SUPPLIER_SOFTWARE_VERSION_NUMBER_LENGTH; temp_Index++)
  {
    Data[temp_Index] = (uint8)(EMMApp_Application_Id[temp_Index]); //cannot assign 'character' to different essential type 'unsigned8 so typecasted it 
    retVal = RTE_E_OK;
  }
 
  return retVal;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_FAA_BootManager_Version_Number_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_FAA_BootManager_Version_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_FAA_BootManager_Version_Number_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_FAA_BootManager_Version_Number_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_FAA_BootManager_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_FAA_BootManager_Version_Number_ReadData (returns application error)
 *********************************************************************************************************************/
  uint8* bm_id =(uint8*)BM_ADDR; /*lint !e954 */  /*lint !e9078*/
  uint8 temp = 0U;
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;

  for (temp = 0U; temp < 32U; temp++)
  {
    Data[temp] = bm_id[temp];
  } 

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_FAA_Diagnostic_Database_Version_FAA_Diagnostic_Database_Version_ReadData (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  Data[0] = 0x03U;
  Data[1] = 0x01U;
  Data[2] = 0x01U;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Read_Fingerprint_Programming_Fingerprint_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_Read_Fingerprint_Programming_Fingerprint_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Read_Fingerprint_Programming_Fingerprint_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Read_Fingerprint_Programming_Fingerprint_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_Read_Fingerprint_Programming_Fingerprint_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Read_Fingerprint_Programming_Fingerprint_ReadData (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus; 

  for(uint8 i = 0U; i < 12U; i++)
  {
    Data[i] = Rte_Pim_PerInstanceMemory_MetaData()->Fingerprint[i];
  }

  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  (void)ErrorCode;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Data) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Reprogramming_Attempt_Counter_Reprogramming_Attempt_Counter_ReadData (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;

  for(uint8 i = 0U; i < 2U; i++)
  {
    Data[i] = ~(Rte_Pim_PerInstanceMemory_MetaData()->progattemp[i]);
  }

  Data[2] =0xFFU;
  Data[3] =0xFFU;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RT_Diag_SWC_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Diag_SWC_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, RT_Diag_SWC_CODE) RT_Diag_SWC_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Diag_SWC_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Diag_SWC_Main_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, RT_Diag_SWC_CODE) RT_Diag_SWC_Main(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Diag_SWC_Main
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_CheckProgrammingPreCondition_Start_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) RoutineServices_CheckProgrammingPreCondition_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_CheckProgrammingPreCondition_Out_No_of_PreconditionsType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Out_No_of_Preconditions, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RoutineServices_CheckProgrammingPreCondition_Start (returns application error)
 *********************************************************************************************************************/
  /*info named parameter symbol of 'virtual/non-virtual' function symbol not subsequently referenced. Therefore the OpStatus/ErrorCode is declared in defination of function and typecasted it with (void) as the symbol gets referenced */
  (void)OpStatus;
  Esdd_Sply_Data_Struct temp_Esdd_Sply_Data_Struct;

  (void)Rte_Read_Esdd_Sply_Data_Esdd_Sply_Data(&temp_Esdd_Sply_Data_Struct);

  if((temp_Esdd_Sply_Data_Struct.Esdd_SplyU_Volt > LOW_VOLTAGE_LEVEL) && (temp_Esdd_Sply_Data_Struct.Esdd_SplyU_Volt < HIGH_VOLTAGE_LEVEL)) 
  {
    *Out_No_of_Preconditions = 0;
  }
  else
  {
    *Out_No_of_Preconditions = 1;
  }

  *ErrorCode = 0;
  return RTE_E_OK;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Level02_03_GetSeed_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) SecurityAccess_Level02_03_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Level02_03_GetSeed (returns application error)
 *********************************************************************************************************************/

// uint8 retval = E_NOT_OK;
Dcm_SecLevelType temp_session;
uint8 idx = 0;

NvM_ReadBlock(NvMConf_NvMBlockDescriptor_RT_Diag_SWC_NvBlockNeed_SecurityFlag, &recheck_Flag);

if((recheck_Flag == TRUE) && (initial_tmp == 0x00))  
{
  tmp_Flag = TRUE;  // 1
  FailedAttempts = 3u; 
  initial_tmp = 0x01;
}
else if(FailedAttempts == 0xFF ) {
  tmp_Flag = FALSE; // 0
  FailedAttempts = 0u; 
  initial_tmp = 0x01;
}

Rte_Call_DCMServices_GetSecurityLevel(&temp_session);
if(temp_session == DCM_SEC_LEV_L2)
{
  for(idx = 0; idx < 4; idx++)
  {  
    Seed[0] = 0u;
  }
} else 
{
  (void)SeedKeyGen_initialize();
  Seed_Value4bytes = SeedKeyGen_SeedKeyGen(&SeedKeyGen_DW.SeedKeyGen_ilaf);
  Seed[0] = (uint8) (Seed_Value4bytes >> 0 );
  Seed[1] = (uint8) (Seed_Value4bytes >> 8 );
  Seed[2] = (uint8) (Seed_Value4bytes >> 16 );
  Seed[3] = (uint8) (Seed_Value4bytes >> 24 );
 
  for(int i =0; i<4; i++)
  {
    seed_t[i] = Seed[i];
  }
}

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Level02_04_CompareKey_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RT_Diag_SWC_CODE) SecurityAccess_Level02_04_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_DIAG_SWC_APPL_VAR) ErrorCode) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SecurityAccess_Level02_04_CompareKey (returns application error)
 *********************************************************************************************************************/
  uint8 seedlength = 6; 
  uint8 retval = E_NOT_OK;
  uint8 status;
  uint8 seed[6];
  uint8 byteBuffer[6] = {0}; 

  uint8  key_t[4] = {0};

  CornerId_Enum cornerid;

  CornerId_getCornerId(&cornerid);
  
  if(cornerid == CornerId_Enum_CORNER_FL)
  {
  seed[4] = 0x39;//high byte of secret code(example)  // FL
  seed[5] = 0x21;//low byte of secret code(example) 
  }
  if(cornerid == CornerId_Enum_CORNER_FR)
  {
  seed[4] = 0x21;//high byte of secret code(example)  // FR
  seed[5] = 0x2C;//low byte of secret code(example)  
  }
  if(cornerid == CornerId_Enum_CORNER_RL)
  {
  seed[4] = 0x59;//high byte of secret code(example)  // RL
  seed[5] = 0x62;//low byte of secret code(example)     
  }
  if(cornerid == CornerId_Enum_CORNER_RR)
  {
  seed[4] = 0x98;//high byte of secret code(example)  // RR
  seed[5] = 0x6A;//low byte of secret code(example)    
  }

  byteBuffer[0] = seed_t[0]; 
  byteBuffer[1] = seed_t[1]; 
  byteBuffer[2] = seed_t[2]; 
  byteBuffer[3] = seed_t[3]; 
  byteBuffer[4] = seed[4]; 
  byteBuffer[5] = seed[5]; 
 
  byte_CRC[0] = (uint8)CRC8_Calculate_Lvl02(&byteBuffer,6);

  byteBuffer[0] = byte_CRC[0];
  byte_CRC[1] = (uint8)CRC8_Calculate_Lvl02(&byteBuffer,6);
  
  byteBuffer[0] = seed_t[0] ;
  byteBuffer[1] = byte_CRC[1];
  byte_CRC[2] = (uint8)CRC8_Calculate_Lvl02(&byteBuffer,6);
  
  byteBuffer[1] = seed_t[1];
  byteBuffer[2] = byte_CRC[2];
  byte_CRC[3] = (uint8)CRC8_Calculate_Lvl02(&byteBuffer,6);
  
  byteBuffer[2] = seed_t[2];
  byteBuffer[3] = byte_CRC[3];
  byte_CRC[4] = (uint8)CRC8_Calculate_Lvl02(&byteBuffer,6);
  
  byteBuffer[3] = seed_t[3];
  byteBuffer[4] = byte_CRC[4];
  byte_CRC[5] = (uint8)CRC8_Calculate_Lvl02(&byteBuffer,6);
  
  byteBuffer[4] = seed[4];
  byteBuffer[5] = byte_CRC[5];
  byte_CRC[6] = (uint8)CRC8_Calculate_Lvl02(&byteBuffer,6);
 
if (byte_CRC[3] == 0 && byte_CRC[4] == 0 && byte_CRC[5] == 0 && byte_CRC[6] == 0) 
  { 
   key_t[0] = byte_CRC[1]; 
   key_t[1] = byte_CRC[2]; 
   key_t[2] = byte_CRC[3]; 
   key_t[3] = byte_CRC[4]; 
  }else 
  { 
   key_t[0] = byte_CRC[3]; 
   key_t[1] = byte_CRC[4]; 
   key_t[2] = byte_CRC[5]; 
   key_t[3] = byte_CRC[6]; 
  } 

   uint8 cntr = 0;
  
  for(int i =0; i<4; i++)
  {
    if(key_t[i] == Key[i])  //key_t  is calculated key // Key is entered key
    {
     cntr++;
    }
  }

  if(cntr == 4)
  {
    if(FailedAttempts > 0)
    {
    FailedAttempts--;
    }
    tmp_Flag = FALSE; 
    retval = RTE_E_OK;
  
  }
  else{
    FailedAttempts++;
    *ErrorCode = DCM_E_INVALIDKEY;
    if(FailedAttempts >= 3)
    {
      tmp_Flag = TRUE;  
      *ErrorCode = DCM_E_EXCEEDNUMBEROFATTEMPTS;
    }

  retval = E_NOT_OK;
  }

  Rte_Call_SecurityFlag_NVM_WriteBlock(&tmp_Flag);
  Rte_Call_SecurityFlag_NVM_GetErrorStatus(&error_sts);
  // NvM_WriteBlock(NvMConf_NvMBlockDescriptor_RT_Diag_SWC_NvBlockNeed_SecurityFlag, &tmp_Flag);
  // NvM_GetErrorStatus((NvM_BlockIdType)NvMConf_NvMBlockDescriptor_RT_Diag_SWC_NvBlockNeed_SecurityFlag, &error_sts);

 return retval; 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define RT_Diag_SWC_STOP_SEC_CODE
#include "RT_Diag_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
