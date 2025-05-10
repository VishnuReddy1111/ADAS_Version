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
 *             File:  ComHdl.c
 *           Config:  CBD2100170.dpa
 *        SW-C Type:  ComHdl
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2100170
 *
 *      Description:  C-Code implementation template for SW-C <ComHdl>
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
 * DC_BOOL
 *   boolean has the value space required to support the mathematical concept of 
 *      binary-valued logic: {true, false}.
 *
 * DccbActiveDischargeCmd_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbAuxRelayCmd_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbCanCommStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbCddAdcState_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbCddAdcTemp_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * DccbCddContactorEmergencyOpen_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbCddContactorMainState_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbCddContactorRequest_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbCddContactorStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbCddHvStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbCddHvVoltage_ImpType
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * DccbCddIShuntCurrent_ImpType
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * DccbCddIShuntSampleCount_ImpType
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * DccbCddIShuntStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbCddIShuntVoltage_ImpType
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * DccbCddImdReset_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbCddImdResistance_ImpType
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * DccbCddImdStartMeasurement_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbCddImdStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbCddMode_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbChargeCouplerConnectorStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbChargeRequest_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbConSwitchActlState_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbConSwitchCurrent_ImpType
 *   sint32 represents integers with a minimum value of -2147483648 and a maximum 
 *      value of 2147483647. The order-relation on sint32 is: x < y if y - x is
 *      positive. sint32 has a lexical representation consisting of an optional sign 
 *      allowed by a finite-length sequence of decimal digits (#x30-#x39). If the 
 *      sign is omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12688778, +10000, 250098675.
 *
 * DccbConSwitchRequest_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbConSwitchVoltage_ImpType
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * DccbContactorControlErrorState_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbContactorLifeTimeEndStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbContactor_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbEcuMode_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbEmergOpen_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbEmergShutdownRequest_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbEnergyRequest_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbExtVoltageSafeToShutdown_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbFaultDetected_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbGeneric32BitCounter_ImpType
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * DccbGenericCounter_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbHVLock_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbHvbLinkVoltage_ImpType
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * DccbHvdcCurrentStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbHvdcCurrent_ImpType
 *   sint32 represents integers with a minimum value of -2147483648 and a maximum 
 *      value of 2147483647. The order-relation on sint32 is: x < y if y - x is
 *      positive. sint32 has a lexical representation consisting of an optional sign 
 *      allowed by a finite-length sequence of decimal digits (#x30-#x39). If the 
 *      sign is omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12688778, +10000, 250098675.
 *
 * DccbHvdcMaxCurLim_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * DccbHvdcTemperatureStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbHvdcVoltageStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbHvilCurrent_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * DccbHvilFaultState_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbHvilStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbHvilVoltage_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * DccbIgnitionStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbInputCurrentFaultState_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbInterlockState_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbIsoMonQuickTest_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbIsoMonReq_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbIsoMonResistance_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * DccbIsoMonStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbKl30Current_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * DccbKl30Status_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbKl30Voltage_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * DccbKl30cStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbKl30cVoltage_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * DccbMaxTemperature_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * DccbModeMgrState_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbNegContactorStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbOffBoardTempVoltage_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * DccbOffboardTemperature_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * DccbOnboardTemperature_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * DccbShortCircuitDetected_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbTempSensorFaultStatus_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * DccbWdgLocalSup_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * NvM_RequestResultType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * REC_SG_CPC6_C02_AR5_5wbdxrp8awtkuts7zyf21170w
 *    (degraded)
 *
 * REC_SG_CPC6_C05_AR5_2ahxpf4cam3pi2le1l2woky78
 *    (degraded)
 *
 * REC_SG_CPC6_C06_AR5_ulcxeouja3rnfon8plrygyca
 *    (degraded)
 *
 * REC_SG_CPC6_C11_AR5_dgfi1nrxtb0voy6rb7ybeonmv
 *    (degraded)
 *
 * REC_SG_CPC6_C16_AR5_1hpstplriukdblrgry0860d7o
 *    (degraded)
 *
 * REC_SG_CPC6_C22_AR5_cp6wyrd9cg7ec7y2w3khz1gyt
 *    (degraded)
 *
 * REC_SG_DCCB1_C01_AR5_wcyc4oh3vv82se49oenjus1n
 *    (degraded)
 *
 * REC_SG_DCCB1_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv
 *    (degraded)
 *
 * REC_SG_DCCB2_C01_AR5_a2qglp2324znbwefnu92uartf
 *    (degraded)
 *
 * REC_SG_DCCB2_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv
 *    (degraded)
 *
 * REC_SG_DM_Pkt_DCCB1_14lojwgkcazelrb438elf5h0j
 *    (degraded)
 *
 * REC_SG_DM_Pkt_DCCB2_14lojwgkcazelrb438elf5h0j
 *    (degraded)
 *
 * REC_SG_EPTOce_C01_AR5_1ae8w4ccn5pv3jukyqv8emy5n
 *    (degraded)
 *
 * REC_SG_EPTOce_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv
 *    (degraded)
 *
 * REC_SG_EVCC1_C01_AR5_515fv9hxb5jrzmunrr9r72aqj
 *    (degraded)
 *
 * REC_SG_EVCC2_C01_AR5_515fv9hxb5jrzmunrr9r72aqj
 *    (degraded)
 *
 * REC_SG_GPM1H1_XMC_AR2_1lbtoaaebi5n2qvdq20f1phhd
 *    (degraded)
 *
 * REC_SG_IgnSw_E2E_SAM_Stat_Pkt_9t50popkpz30is106xpis1iyh
 *    (degraded)
 *
 * REC_SG_LocalTimeOffset_ICUC_71njeubj9ico1p8v4pmslfcno
 *    (degraded)
 *
 * REC_SG_TPCM_DCCB1_euk2owpx15avykqntci714wbp
 *    (degraded)
 *
 * REC_SG_TPCM_DCCB2_euk2owpx15avykqntci714wbp
 *    (degraded)
 *
 * REC_SG_TPDT_DCCB1_dgfi1nrxtb0voy6rb7ybeonmv
 *    (degraded)
 *
 * REC_SG_TPDT_DCCB2_dgfi1nrxtb0voy6rb7ybeonmv
 *    (degraded)
 *
 * REC_SG_Time_Cval_ICUC_7gfvmgxwv1gpmw8c3khdl41nw
 *    (degraded)
 *
 * Rsrv01
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Rsrv04
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Rsrv06
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Rsrv08
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Rsrv16
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Rte_DT_signalGrp_DccbConSwitchVoltage_ImpType_0
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * Rte_DT_signalGrp_DccbConSwitchVoltage_ImpType_1
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * boolean_imp
 *   boolean has the value space required to support the mathematical concept of 
 *      binary-valued logic: {true, false}.
 *
 * c016_CRC_woSNA
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c01_Count
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c01_NotActv_Actv
 *   boolean has the value space required to support the mathematical concept of 
 *      binary-valued logic: {true, false}.
 *
 * c01_Ok_Err
 *   boolean has the value space required to support the mathematical concept of 
 *      binary-valued logic: {true, false}.
 *
 * c01_PNM_Off_On
 *   boolean has the value space required to support the mathematical concept of 
 *      binary-valued logic: {true, false}.
 *
 * c01_SPN_ConvMd
 *   boolean has the value space required to support the mathematical concept of 
 *      binary-valued logic: {true, false}.
 *
 * c02_Auto_Man_Err
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_BatContState
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_CLkS_Cls_Cmd
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_CLkS_Opn_Cmd
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_ContactorErr
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_ContactorErr_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Crash_NoCrash
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Crash_NoCrash_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_CurrMobileApp_Stat
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Disable_Enable
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Disable_Enable_Err
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Disable_Enable_Res
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_HV_FcCont_Rels
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Idle_Unlk_Lk_SNA
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Inact_Act_Res
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Inact_Act_Res_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_IndLmp
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_IndLmpFlash
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Lck_Unlck_NotClr_SNA
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Lck_Unlck_NotClr_SNA_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_LowPwr_Stdby_Actv
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_LowPwr_Stdby_Actv_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NACT_ACTIVE_ERR
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NACT_ACT_ERR_SNA
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NPsd_Psd_NotAvl_SNA
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NPsd_Psd_NotAvl_SNA_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NRQ_RQ_ERR_SNA
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NRQ_RQ_ERR_SNA_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NoRq_Rq
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NoRq_Rq_Err
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NotActv_Act
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NotActv_Act_Err
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NotChrg_Chrg
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NotChrg_Chrg_Res
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NotChrg_Chrg_Res_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NotInhibit_Inhibit_Err
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NotPsd_Psd_Err
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_NotRq_Rq
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_OK_OverVolt_UnderVolt
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Off_On_Res
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_OpenRq_CloseRq
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Open_Close_Err_SNA
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Open_Closed_Err_SNA
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Open_Closed_Err_SNA_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_PreChrg_Rq
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_PreChrg_Rq_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Pressed
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Request_Err
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_ShortDet_NoShort
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_ShortDet_NoShort_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_Switch_Rq
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_True_False
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_True_False_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_ndef_false_true
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_ndef_false_true_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_open_closed_res
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_open_closed_res_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_opn_cls_ndef
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_opn_cls_ndef_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_swrq_off_on_invld_sna
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c02_swrq_off_on_invld_sna_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c03_ContactorErr
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_0_to_15_1_SNA_na
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_ActlCtrlMode
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_ChrgCntrl
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_ChrgCoupConn_Stat
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_ChrgCoupConn_Stat_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_ChrgLED_Rq
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_ChrgLED_Rq_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_CtrlPilot_DutyRange_Stat
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_CtrlPilot_DutyRange_Stat_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_EVCC_CtrlPilot_Stat
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_EVCC_CtrlPilot_Stat_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_EV_ErrorCode
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_EV_ErrorCode_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_Fc_OpReq
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_INACT_ACT_ACTERR_DISENGENG
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_IgnSw_Stat
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_IgnSw_Stat_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_IsoMon_Status
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_Mode_Rq
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_Mov_Stat
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_ProxPilotAmpacity
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_ProxPilotAmpacity_ImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_RemCtrl
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c04_TJA_Posn
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_0_to_250_1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_0_to_255_1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_0_to_255_1_SNA_na
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_CtrlByte
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_Days_0_to_62k5_0k25
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_Months_1_to_12_1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_Nm_0_10_0d0625
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_Years_1985_to_2235_1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_h_0_to_250_1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_l_p_min_0_to_25_0k1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_min_0_to_250_1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_offset_hour_m23_to_p23_1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_offset_min_m59_to_p59_1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_percent_0_to_100_0k4
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c08_s_0_to_59k75_0k25
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * c10_WakeupRsn
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c12_0_4094_1_SNA
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c12_degC_m50_200_0d1
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_0_80_0d03125
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_0_to_0k5_0k0000152588
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_0_to_10_0k0004882813
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_0_to_64255_1
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_0_to_64255_BAM
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_A_0_1000_0k1_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_A_0_100_0k1_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_A_0_4000_0k1
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_A_0_4000_0k1_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_A_m1600_to_1612k75_0k05_SNA
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_A_m1600_to_1612k75_0k05_SNA_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_A_m3250_to_3250_0k1
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_A_m600_600_0k1_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_C_m273_to_1735_0k03125_Typ
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_C_m273_to_1735_0k03125_Typ_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_Kw_m1600_to_1612k75_0k05_SNA
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_Nm_m5000_to_p5000_0k2
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_V_0_1638k2_0k1
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_V_0_1638k2_0k1_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_V_0_to_1200_0k1_SNA_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_V_0_to_3212k75_0k05
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_V_0_to_3212k75_0k05_ImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_kOhm_0b64k255M_1_NoMeas
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c16_rpm_m16000_to_16000_0k5
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * c24_PGN
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * c32_0_4294967295_1_SNA_na
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * cDT_02_NRQ_RQ_Res_SNA
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * cv02_Off_On
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * cv08_0_to_255_1_SNA_na
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * cv08_CRC_woSNA
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * cv24_0_to_16777215_1_SNA_na
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * cvRsrv02
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * sint16_SensataImpType
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * sint32_SensataImpType
 *   sint32 represents integers with a minimum value of -2147483648 and a maximum 
 *      value of 2147483647. The order-relation on sint32 is: x < y if y - x is
 *      positive. sint32 has a lexical representation consisting of an optional sign 
 *      allowed by a finite-length sequence of decimal digits (#x30-#x39). If the 
 *      sign is omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12688778, +10000, 250098675.
 *
 * sint64_SensataImpType
 *   sint64 represents integers with a minimum value of -9223372036854775808 and a maximum 
 *      value of 9223372036854775807. The order-relation on sint64 is: x < y if y - x is
 *      positive. sint64 has a lexical representation consisting of an optional sign 
 *      allowed by a finite-length sequence of decimal digits (#x30-#x39). If the 
 *      sign is omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12688778, +10000, 250098675.
 *
 * sint8_SensataImpType
 *   sint8 represents integers with a minimum value of -128 and a maximum value of 127.
 *      The order-relation on sint8 is: x < y if y - x is positive.
 *      sint8 has a lexical representation consisting of an optional sign followed 
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is 
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, 12678, +10000.
 *
 * uint16_SensataImpType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * uint32_SensataImpType
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * uint64_SensataImpType
 *   uint64 represents integers with a minimum value of 0 and a maximum value 
 *      of 18446744073709551615. The order-relation on uint64 is: x < y if y - x is positive.
 *      uint64 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * uint8_SensataImpType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *
 * Data Element Prototypes:
 * ========================
 * HVB_LinkVolt_Cval of Port Interface IF_HVB_LinkVolt_Cval
 *   SHORT: HV Battery DC Link Voltage
 *      
 *      LONG: HV Battery DC Link Voltage
 *
 * SG_CPC6_C11_AR5 of Port Interface IG_SG_CPC6_C11_AR5_5koak4ha10pzywef5xdtffp0t
 *   LONG:  (degraded)
 *
 * SG_CPC6_C02_AR5 of Port Interface IG_SG_CPC6_C02_AR5_apbfz7tgo2pb2ut42o4qh3ppe
 *   LONG:  (degraded)
 *
 * SG_CPC6_C05_AR5 of Port Interface IG_SG_CPC6_C05_AR5_ca2yn4lhfprccd1a08a6u97dl
 *   LONG:  (degraded)
 *
 * SG_CPC6_C06_AR5 of Port Interface IG_SG_CPC6_C06_AR5_3nw9isswrpetf9f6kc7wy8m56
 *   LONG:  (degraded)
 *
 * SG_CPC6_C16_AR5 of Port Interface IG_SG_CPC6_C16_AR5_4kcsw05q4ran0tlh3v72oa522
 *   LONG:  (degraded)
 *
 * SG_CPC6_C22_AR5 of Port Interface IG_SG_CPC6_C22_AR5_eku8sqburfdujp6sc7xhbi1kt
 *   LONG:  (degraded)
 *
 * SG_DCCB1_C01_AR5 of Port Interface IG_SG_DCCB1_C01_AR5_equcq4vjeagw7bi2ilhj4i9xn
 *   LONG:  (degraded)
 *
 * SG_DCCB2_C01_AR5 of Port Interface IG_SG_DCCB2_C01_AR5_7iztmjczigen0u1m9wn8tbg65
 *   LONG:  (degraded)
 *
 * SG_DCCB1_C02_AR5 of Port Interface IG_SG_DCCB1_C02_AR5_8s3qczpcfyk34m8w6ykv8hl4n
 *   LONG:  (degraded)
 *
 * IgnSw_Stat_EIS of Port Interface IF_IgnSw_Stat_EIS
 *   SHORT: Ignition Switch Current state from EIS
 *      LONG: [spn ???, pgn ?????] Indicates the Position of the Ignition Switch 
 *      (Terminal 15R, Terminal 15, Terminal 50).
 *
 * SG_EPTOce_C01_AR5 of Port Interface IG_SG_EPTOce_C01_AR5_emwaqe8p1s5hguq2a8qelh501
 *   LONG:  (degraded)
 *
 * SG_EPTOce_C02_AR5 of Port Interface IG_SG_EPTOce_C02_AR5_68flnf8kn43tfqcpjzhv8clwt
 *   LONG:  (degraded)
 *
 * SG_EVCC1_C01_AR5 of Port Interface IG_SG_EVCC1_C01_AR5_cax9lf8l49o8pmc7933ztf2u1
 *   LONG:  (degraded)
 *
 * IgnSw_Stat_SCA of Port Interface IDccb_Dccb_Sca_C2
 *   SHORT: Ignition Switch Current state from SCA
 *      LONG: Indicates the Position of the Ignition Switch 
 *      (Terminal 15R, Terminal 15, Terminal 50). Doors-ID SN-4417
 *
 *********************************************************************************************************************/

#include "Rte_ComHdl.h"


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
 * Primitive Types:
 * ================
 * DC_BOOL: Boolean
 * DccbCddAdcTemp_ImpType: Integer in interval [0...65535]
 * DccbCddHvVoltage_ImpType: Integer in interval [0...4294967295]
 * DccbCddIShuntCurrent_ImpType: Integer in interval [0...4294967295]
 * DccbCddIShuntSampleCount_ImpType: Integer in interval [0...4294967295]
 * DccbCddIShuntVoltage_ImpType: Integer in interval [0...4294967295]
 * DccbCddImdResistance_ImpType: Integer in interval [0...4294967295]
 * DccbConSwitchVoltage_ImpType: Integer in interval [0...4294967295]
 * DccbGeneric32BitCounter_ImpType: Integer in interval [0...4294967295]
 * DccbGenericCounter_ImpType: Integer in interval [0...255]
 * DccbHvilCurrent_ImpType: Integer in interval [0...5000]
 * DccbHvilVoltage_ImpType: Integer in interval [0...500]
 * DccbOffBoardTempVoltage_ImpType: Integer in interval [0...500]
 * DccbWdgLocalSup_ImpType: Integer in interval [0...1]
 * Rsrv01: Integer in interval [0...1]
 * Rsrv04: Integer in interval [0...15]
 * Rsrv06: Integer in interval [0...63]
 * Rsrv08: Integer in interval [0...255]
 * Rsrv16: Integer in interval [0...65535]
 * Rte_DT_signalGrp_CPC6_C11_0: Integer in interval [0...3]
 * Rte_DT_signalGrp_CPC6_C11_1: Integer in interval [0...3]
 * Rte_DT_signalGrp_CPC6_C11_2: Integer in interval [0...15]
 * Rte_DT_signalGrp_CPC6_C11_3: Integer in interval [0...15]
 * Rte_DT_signalGrp_CPC6_C11_4: Integer in interval [0...3]
 * Rte_DT_signalGrp_CPC6_C16_11: Integer in interval [0...15]
 * Rte_DT_signalGrp_CPC6_C16_12: Integer in interval [0...15]
 * Rte_DT_signalGrp_CPC6_C16_2: Integer in interval [0...15]
 * Rte_DT_signalGrp_CPC6_C16_3: Integer in interval [0...15]
 * Rte_DT_signalGrp_CPC6_C16_4: Integer in interval [0...3]
 * Rte_DT_signalGrp_CPC6_C16_5: Integer in interval [0...3]
 * Rte_DT_signalGrp_CPC6_C16_6: Integer in interval [0...3]
 * Rte_DT_signalGrp_CPC6_C16_7: Integer in interval [0...15]
 * Rte_DT_signalGrp_CPC6_C16_8: Integer in interval [0...15]
 * Rte_DT_signalGrp_DCCB2_C01_0: Integer in interval [0...3]
 * Rte_DT_signalGrp_DCCB2_C01_1: Integer in interval [0...7]
 * Rte_DT_signalGrp_DCCB2_C01_2: Integer in interval [0...3]
 * Rte_DT_signalGrp_DCCB2_C01_3: Integer in interval [1...3]
 * Rte_DT_signalGrp_DCCB2_C01_4: Integer in interval [0...3]
 * Rte_DT_signalGrp_DCCB2_C01_5: Integer in interval [0...3]
 * Rte_DT_signalGrp_DCCB2_C01_6: Integer in interval [0...3]
 * Rte_DT_signalGrp_DCCB2_C01_7: Integer in interval [0...3]
 * Rte_DT_signalGrp_DCCB_C02_0: Integer in interval [0...3]
 * Rte_DT_signalGrp_DccbConSwitchVoltage_ImpType_0: Integer in interval [0...4294967295]
 * Rte_DT_signalGrp_DccbConSwitchVoltage_ImpType_1: Integer in interval [0...4294967295]
 * Rte_DT_signalGrp_EPTOce_C01_0: Integer in interval [0...3]
 * Rte_DT_signalGrp_EPTOce_C01_5: Integer in interval [0...3]
 * Rte_DT_signalGrp_EPTOce_C02_0: Integer in interval [0...3]
 * Rte_DT_signalGrp_GPM1H1_XMC_0: Integer in interval [0...3]
 * Rte_DT_signalGrp_GPM1H1_XMC_1: Integer in interval [0...3]
 * boolean: Boolean (standard type)
 * boolean_imp: Boolean
 * c016_CRC_woSNA: Integer in interval [0...65535]
 * c01_NotActv_Actv: Boolean
 * c01_Ok_Err: Boolean
 * c01_PNM_Off_On: Boolean
 * c02_Auto_Man_Err: Integer in interval [0...3]
 * c02_BatContState: Integer in interval [0...3]
 * c02_CLkS_Cls_Cmd: Integer in interval [0...3]
 * c02_CLkS_Opn_Cmd: Integer in interval [0...3]
 * c02_ContactorErr_ImpType: Integer in interval [0...3]
 * c02_Crash_NoCrash_ImpType: Integer in interval [0...3]
 * c02_CurrMobileApp_Stat: Integer in interval [0...3]
 * c02_Disable_Enable: Integer in interval [0...3]
 * c02_Idle_Unlk_Lk_SNA: Integer in interval [0...3]
 * c02_Inact_Act_Res_ImpType: Integer in interval [0...3]
 * c02_LowPwr_Stdby_Actv_ImpType: Integer in interval [0...3]
 * c02_NRQ_RQ_ERR_SNA_ImpType: Integer in interval [0...3]
 * c02_NoRq_Rq: Integer in interval [0...3]
 * c02_NoRq_Rq_Err: Integer in interval [0...3]
 * c02_NotActv_Act: Integer in interval [0...3]
 * c02_NotActv_Act_Err: Integer in interval [0...3]
 * c02_NotChrg_Chrg: Integer in interval [0...3]
 * c02_NotChrg_Chrg_Res_ImpType: Integer in interval [0...3]
 * c02_NotInhibit_Inhibit_Err: Integer in interval [0...3]
 * c02_NotPsd_Psd_Err: Integer in interval [0...3]
 * c02_OK_OverVolt_UnderVolt: Integer in interval [0...3]
 * c02_Off_On_Res: Integer in interval [0...3]
 * c02_Open_Close_Err_SNA: Integer in interval [0...3]
 * c02_Open_Closed_Err_SNA_ImpType: Integer in interval [0...3]
 * c02_PreChrg_Rq: Integer in interval [0...3]
 * c02_PreChrg_Rq_ImpType: Integer in interval [0...3]
 * c02_Pressed: Integer in interval [0...3]
 * c02_Request_Err: Integer in interval [0...3]
 * c02_ShortDet_NoShort_ImpType: Integer in interval [0...3]
 * c02_Switch_Rq: Integer in interval [0...0]
 * c02_True_False_ImpType: Integer in interval [0...3]
 * c02_ndef_false_true_ImpType: Integer in interval [1...3]
 * c02_open_closed_res_ImpType: Integer in interval [0...3]
 * c04_0_to_15_1_SNA_na: Integer in interval [0...15]
 * c04_ChrgCntrl: Integer in interval [0...15]
 * c04_ChrgCoupConn_Stat_ImpType: Integer in interval [0...15]
 * c04_ChrgLED_Rq_ImpType: Integer in interval [0...15]
 * c04_EV_ErrorCode_ImpType: Integer in interval [0...15]
 * c04_Fc_OpReq: Integer in interval [0...15]
 * c04_Mode_Rq: Integer in interval [0...15]
 * c04_Mov_Stat: Integer in interval [0...15]
 * c04_RemCtrl: Integer in interval [0...15]
 * c04_TJA_Posn: Integer in interval [0...15]
 * c08_0_to_255_1: Integer in interval [0...255]
 * c08_0_to_255_1_SNA_na: Integer in interval [0...255]
 * c08_percent_0_to_100_0k4: Integer in interval [0...255]
 * c10_WakeupRsn: Integer in interval [0...1023]
 * c16_A_0_4000_0k1: Integer in interval [0...65535]
 * c16_A_m600_600_0k1_ImpType: Integer in interval [0...65535]
 * c16_C_m273_to_1735_0k03125_Typ_ImpType: Integer in interval [0...65535]
 * c16_V_0_to_1200_0k1_SNA_ImpType: Integer in interval [0...65535]
 * c24_PGN: Integer in interval [0...16777215]
 * c32_0_4294967295_1_SNA_na: Integer in interval [0...4294967295]
 * cv02_Off_On: Integer in interval [0...3]
 * cv08_0_to_255_1_SNA_na: Integer in interval [0...255]
 * cv08_CRC_woSNA: Integer in interval [0...255]
 * cv24_0_to_16777215_1_SNA_na: Integer in interval [0...16777215]
 * cvRsrv02: Integer in interval [0...3]
 * dtRef_VOID: DataReference
 * dtRef_const_VOID: DataReference
 * sint16: Integer in interval [-32768...32767] (standard type)
 * sint16_SensataImpType: Integer in interval [-32768...32767]
 * sint32: Integer in interval [-2147483648...2147483647] (standard type)
 * sint32_SensataImpType: Integer in interval [-2147483648...2147483647]
 * sint64: Integer in interval [-9223372036854775808...9223372036854775807] (standard type)
 * sint64_SensataImpType: Integer in interval [-9223372036854775808...9223372036854775807]
 * sint8: Integer in interval [-128...127] (standard type)
 * sint8_SensataImpType: Integer in interval [-128...127]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint16_SensataImpType: Integer in interval [0...65535]
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint32_SensataImpType: Integer in interval [0...4294967295]
 * uint64: Integer in interval [0...18446744073709551615] (standard type)
 * uint64_SensataImpType: Integer in interval [0...18446744073709551615]
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * DccbActiveDischargeCmd_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_ACTIVE_DISCHARGE_DISABLE (0U)
 *   DCCB_ACTIVE_DISCHARGE_ENABLE (1U)
 * DccbAuxRelayCmd_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_AUX_RELAY_OPEN (0U)
 *   DCCB_AUX_RELAY_CLOSE (1U)
 * DccbCanCommStatus_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_CAN_COMMS_NOT_OK (0U)
 *   DCCB_CAN_COMMS_OK (1U)
 * DccbCddAdcState_ImpType: Enumeration of integer in interval [0...4] with enumerators
 *   DCCB_CDD_ADC_INIT (0U)
 *   DCCB_CDD_ADC_UNAVAILABLE_READY (1U)
 *   DCCB_CDD_ADC_UNAVAILABLE_ERROR (2U)
 *   DCCB_CDD_ADC_AVAILABLE_RUN (3U)
 *   DCCB_CDD_ADC_AVAILABLE_DATA_ERROR (4U)
 * DccbCddContactorEmergencyOpen_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   EMERGENCY_OPEN_NO_REQUEST (0U)
 *   EMERGENCY_OPEN_REQUEST_OPEN (1U)
 * DccbCddContactorMainState_ImpType: Enumeration of integer in interval [0...3] with enumerators
 *   DCCB_MAIN_CONTACTOR_STATE_INIT (0U)
 *   DCCB_MAIN_CONTACTOR_STATE_ACTIVE (1U)
 *   DCCB_MAIN_CONTACTOR_STATE_INACTIVE (2U)
 *   DCCB_MAIN_CONTACTOR_STATE_MAX (3U)
 * DccbCddContactorRequest_ImpType: Enumeration of integer in interval [0...5] with enumerators
 *   DCCB_CONTACTOR_POS_OPEN (0U)
 *   DCCB_CONTACTOR_NEG_OPEN (1U)
 *   DCCB_CONTACTOR_POS_CLOSED (2U)
 *   DCCB_CONTACTOR_NEG_CLOSED (3U)
 *   DCCB_CONTACTOR_NO_REQ (4U)
 * DccbCddContactorStatus_ImpType: Enumeration of integer in interval [0...2] with enumerators
 *   DCCB_CONTACTOR_STATUS_OPEN (0U)
 *   DCCB_CONTACTOR_STATUS_CLOSE (1U)
 *   DCCB_CONTACTOR_STATUS_ERR (2U)
 * DccbCddHvStatus_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_HV_STATUS_OK (0U)
 *   DCCB_HV_STATUS_FAULT (1U)
 * DccbCddIShuntStatus_ImpType: Enumeration of integer in interval [0...2] with enumerators
 *   DCCB_SHUNT_STATUS_OK (0U)
 *   DCCB_SHUNT_STATUS_DISABLED (1U)
 *   DCCB_SHUNT_STATUS_ERR (2U)
 * DccbCddImdReset_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_IMD_NO_RESET (0U)
 *   DCCB_IMD_RESET (1U)
 * DccbCddImdStartMeasurement_ImpType: Enumeration of integer in interval [0...2] with enumerators
 *   DCCB_IMD_FAST_MEASURE (0U)
 *   DCCB_IMD_CONT_MEASURE (1U)
 *   DCCB_IMD_NO_MEASURE (2U)
 *   DCCB_IMD_NO_ACTION (3U)
 * DccbCddImdStatus_ImpType: Enumeration of integer in interval [0...4] with enumerators
 *   DCCB_IMD_IDLE (0U)
 *   DCCB_IMD_IN_PROGRESS (1U)
 *   DCCB_IMD_COMPLETED (2U)
 *   DCCB_IMD_FAULT (3U)
 *   DCCB_IMD_FAILED (4U)
 * DccbCddMode_ImpType: Enumeration of integer in interval [0...2] with enumerators
 *   DCCB_CDD_MODE_INACTIVE (0U)
 *   DCCB_CDD_MODE_ACTIVE (1U)
 * DccbChargeCouplerConnectorStatus_ImpType: Enumeration of integer in interval [0...5] with enumerators
 *   DCCB_CHARGE_COUPLER_PLUGGED (0U)
 *   DCCB_CHARGE_COUPLER_VEH_PLUGGED (1U)
 *   DCCB_CHARGE_COUPLER_VEH_NOT_PLUGGED (2U)
 *   DCCB_CHARGE_COUPLER_UNKNOWN (3U)
 *   DCCB_CHARGE_COUPLER_DEFECT (4U)
 *   DCCB_CHARGE_COUPLER_SNA (5U)
 * DccbChargeRequest_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_CHARGE_RQ_NO_CHARGE (0U)
 *   DCCB_CHARGE_RQ_CHARGE (1U)
 * DccbConSwitchActlState_ImpType: Enumeration of integer in interval [0...3] with enumerators
 *   DCCB_CON_SWITCH_ACT_STATE_OPEN (0U)
 *   DCCB_CON_SWITCH_ACT_STATE_CLOSED (1U)
 *   DCCB_CON_SWITCH_ACT_STATE_ERROR (2U)
 *   DCCB_CON_SWITCH_ACT_STATE_SNA (3U)
 * DccbConSwitchCurrent_ImpType: Enumeration of integer in interval [-75000...75000] with enumerators
 *   DCCB_CON_SWITCH_CURRENT_SNA (75000)
 * DccbConSwitchRequest_ImpType: Enumeration of integer in interval [0...2] with enumerators
 *   DCCB_CON_SWITCH_REQ_OPEN (0U)
 *   DCCB_CON_SWITCH_REQ_CLOSED (1U)
 *   DCCB_CON_SWITCH_REQ_SNA (2U)
 * DccbContactorControlErrorState_ImpType: Enumeration of integer in interval [0...6] with enumerators
 *   CONTACTOR_ERROR_STATE_NO_ERROR (0U)
 *   CONTACTOR_ERROR_STATE_BOTH_WELDED (1U)
 *   CONTACTOR_ERROR_STATE_HV_PLUS_WELDED (2U)
 *   CONTACTOR_ERROR_STATE_HV_MINUS_WELDED (3U)
 *   CONTACTOR_ERROR_STATE_UNCLEAR (4U)
 *   CONTACTOR_ERROR_STATE_ERROR (5U)
 *   CONTACTOR_ERROR_STATE_SNA (6U)
 * DccbContactorLifeTimeEndStatus_ImpType: Enumeration of integer in interval [0...2] with enumerators
 *   DCCB_CON_LIFETIME_END_FALSE (0U)
 *   DCCB_CON_LIFETIME_END_TRUE (1U)
 *   DCCB_CON_LIFETIME_END_SNA (2U)
 * DccbContactor_ImpType: Enumeration of integer in interval [0...2] with enumerators
 *   DCCB_CONTACTOR_POSITIVE (0U)
 *   DCCB_CONTACTOR_NEGATIVE (1U)
 *   DCCB_CONTACTOR_SNA (2U)
 * DccbEcuMode_ImpType: Enumeration of integer in interval [0...2] with enumerators
 *   DCCB_ECU_MODE_INACTIVE (0U)
 *   DCCB_VARIANT_1 (0U)
 *   DCCB_ECU_MODE_ACTIVE (1U)
 *   DCCB_VARIANT_2 (1U)
 *   DCCB_ECU_MODE_SNA (2U)
 *   DCCB_VARIANT_EPTO (2U)
 *   DCCB_VARIANT_SNA (3U)
 * DccbEmergOpen_ImpType: Enumeration of integer in interval [0...2] with enumerators
 *   DCCB_EMERG_OPEN_FALSE (0U)
 *   DCCB_EMERG_OPEN_TRUE (1U)
 * DccbEmergShutdownRequest_ImpType: Enumeration of integer in interval [0...2] with enumerators
 *   DCCB_EMERG_SHUTDOWN_FALSE (0U)
 *   DCCB_EMERG_SHUTDOWN_TRUE (1U)
 *   DCCB_EMERG_SHUTDOWN_SNA (2U)
 * DccbEnergyRequest_ImpType: Enumeration of integer in interval [0...2] with enumerators
 *   DCCB_ENERGY_REQUEST_OPEN (0U)
 *   DCCB_ENERGY_REQUEST_CLOSED (1U)
 *   DCCB_ENERGY_REQUEST_SNA (2U)
 * DccbExtVoltageSafeToShutdown_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_EXT_VOLTAGE_NOT_SAFE_TO_SHUTDOWN (0U)
 *   DCCB_EXT_VOLTAGE_SAFE_TO_SHUTDOWN (1U)
 * DccbFaultDetected_ImpType: Enumeration of integer in interval [0...2] with enumerators
 *   DCCB_FAULT_DETECTED_FALSE (0U)
 *   DCCB_KL30C_FLT_STATUS_NO_FAULT (0U)
 *   DCCB_FAULT_DETECTED_TRUE (1U)
 *   DCCB_KL30C_FLT_STATUS_FUNC_CHECK (1U)
 *   DCCB_FAULT_DETECTED_SNA (2U)
 *   DCCB_KL30C_FLT_STATUS_RANGE_HIGH (2U)
 *   DCCB_KL30C_FLT_STATUS_RANGE_LOW (3U)
 *   DCCB_KL30C_FLT_STATUS_RATIONALITY (4U)
 *   DCCB_KL30C_FLT_STATUS_INTERMITTENT (5U)
 *   DCCB_KL30C_FLT_STATUS_CCT_OPEN (6U)
 *   DCCB_KL30C_FLT_STATUS_CCT_HIGH (7U)
 *   DCCB_KL30C_FLT_STATUS_CCT_LOW (8U)
 *   DCCB_KL30C_FLT_STATUS_MALFUNCTION (9U)
 *   DCCB_KL30C_FLT_STATUS_UNSTABLE (10U)
 *   DCCB_KL30C_FLT_STATUS_IMPLAUSIBLE (11U)
 * DccbHVLock_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_HV_LOCKED (0U)
 *   DCCB_HV_UNLOCKED (1U)
 * DccbHvbLinkVoltage_ImpType: Enumeration of integer in interval [0...4294967295] with enumerators
 *   DCCB_HVB_LINK_VOLTAGE_ERR (4294967294U)
 *   DCCB_HVB_LINK_VOLTAGE_SNA (4294967295U)
 * DccbHvdcCurrentStatus_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_HVDC_CURRENT_STATUS_NOT_OK (0U)
 *   DCCB_HVDC_CURRENT_STATUS_OK (1U)
 * DccbHvdcCurrent_ImpType: Enumeration of integer in interval [-75000...75000] with enumerators
 *   DCCB_HVDC_CURRENT_SNA (75000)
 * DccbHvdcMaxCurLim_ImpType: Enumeration of integer in interval [0...500] with enumerators
 *   DCCB_MAX_CUR_LIMIT_SNA (65535U)
 * DccbHvdcTemperatureStatus_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_HVDC_TEMPERATURE_STATUS_NOT_OK (0U)
 *   DCCB_HVDC_TEMPERATURE_STATUS_OK (1U)
 * DccbHvdcVoltageStatus_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_HVDC_VOLTAGE_STATUS_NOT_OK (0U)
 *   DCCB_HVDC_VOLTAGE_STATUS_OK (1U)
 * DccbHvilFaultState_ImpType: Enumeration of integer in interval [0...4] with enumerators
 *   HVIL_FLT_STATE_NO_FAILURE (0U)
 *   HVIL_FLT_STATE_OPEN_CIRCUIT (1U)
 *   HVIL_FLT_STATE_HIGH (2U)
 *   HVIL_FLT_STATE_LOW (3U)
 *   HVIL_FLT_STATE_SHORT_TO_PWR (4U)
 *   HVIL_FLT_STATE_SHORT_TO_GND (5U)
 *   HVIL_FLT_STATE_SNA (6U)
 * DccbHvilStatus_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_HVIL_STATUS_NOT_OK (0U)
 *   DCCB_HVIL_STATUS_OK (1U)
 * DccbIgnitionStatus_ImpType: Enumeration of integer in interval [0...6] with enumerators
 *   DCCB_IGN_OFF (0U)
 *   DCCB_IGN_ACC (1U)
 *   DCCB_IGN_ON (2U)
 *   DCCB_IGN_CRANK (3U)
 *   DCCB_IGN_LOCK (4U)
 *   DCCB_IGN_ERR (5U)
 *   DCCB_IGN_SNA (6U)
 * DccbInputCurrentFaultState_ImpType: Enumeration of integer in interval [0...3] with enumerators
 *   INPUT_CURRENT_NO_ERROR (0U)
 *   INPUT_CURRENT_TOO_LOW (1U)
 *   INPUT_CURRENT_TOO_HIGH (2U)
 *   INPUT_CURRENT_RANGE_PERFORMANCE (3U)
 * DccbInterlockState_ImpType: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_OPEN_CLOSED_RES_OPEN (0U)
 *   I_C02_OPEN_CLOSED_RES_CLOSED (1U)
 *   I_C02_OPEN_CLOSED_RES_RES (2U)
 *   I_C02_OPEN_CLOSED_RES_SNA (3U)
 * DccbIsoMonQuickTest_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_ISO_MON_QUICK_TEST_NO_REQ (0U)
 *   DCCB_ISO_MON_QUICK_TEST_REQ (1U)
 * DccbIsoMonReq_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_ISO_MON_DISABLE (0U)
 *   DCCB_ISO_MON_ENABLE (1U)
 * DccbIsoMonResistance_ImpType: Enumeration of integer in interval [0...65535] with enumerators
 *   DCCB_ISO_MON_RESISTANCE_NO_MEAS (64511U)
 *   DCCB_ISO_MON_RESISTANCE_ERR (65279U)
 *   DCCB_ISO_MON_RESISTANCE_SNA (65535U)
 * DccbIsoMonStatus_ImpType: Enumeration of integer in interval [0...15] with enumerators
 *   DCCB_ISO_MON_STATUS_INACTIVE (0U)
 *   DCCB_ISO_MON_STATUS_ACTIVE (1U)
 *   DCCB_ISO_MON_STATUS_ERR (2U)
 *   DCCB_ISO_MON_STATUS_IN_PROGRESS (3U)
 *   DCCB_ISO_MON_STATUS_LOW_ACC (4U)
 *   DCCB_ISO_MON_STATUS_HIGH_ACC (5U)
 *   DCCB_ISO_MON_STATUS_NOT_AVAIL (6U)
 *   DCCB_ISO_MON_STATUS_NOT_INHIBITED (7U)
 *   DCCB_ISO_MON_STATUS_OVERLOADED (8U)
 *   DCCB_ISO_MON_STATUS_SNA (15U)
 * DccbKl30Current_ImpType: Enumeration of integer in interval [0...200] with enumerators
 *   DCCB_KL30_CURRENT_SNA (65535U)
 * DccbKl30Status_ImpType: Enumeration of integer in interval [0...8] with enumerators
 *   DCCB_KL30_NO_FAULT (1U)
 *   DCCB_KL30_TOO_HIGH (2U)
 *   DCCB_KL30_TOO_LOW (3U)
 *   DCCB_KL30_MALFUNCTION (4U)
 *   DCCB_KL30_OPEN_CCT (5U)
 *   DCCB_KL30_IMPLAUSIBLE (6U)
 * DccbKl30Voltage_ImpType: Enumeration of integer in interval [0...32000] with enumerators
 *   DCCB_KL30_VOLTAGE_SNA (65535U)
 * DccbKl30cStatus_ImpType: Enumeration of integer in interval [0...3] with enumerators
 *   DCCB_KL30C_STATUS_CRASH (1U)
 *   DCCB_KL30C_STATUS_NO_CRASH (2U)
 *   DCCB_KL30C_STATUS_SNA (3U)
 * DccbKl30cVoltage_ImpType: Enumeration of integer in interval [0...32000] with enumerators
 *   DCCB_KL30C_VOLTAGE_SNA (65535U)
 * DccbMaxTemperature_ImpType: Enumeration of integer in interval [0...20000] with enumerators
 *   DCCB_MAX_TEMP_SNA (65535U)
 * DccbModeMgrState_ImpType: Enumeration of integer in interval [0...3] with enumerators
 *   DCCB_MODE_MGR_INACTIVE (0U)
 *   DCCB_MODE_MGR_ACTIVE (1U)
 *   DCCB_MODE_MGR_LOW_POWER (2U)
 *   DCCB_MODE_MGR_SNA (3U)
 * DccbNegContactorStatus_ImpType: Enumeration of integer in interval [0...4] with enumerators
 *   DCCB_NEG_CONTACTOR_NO_FAULT (0U)
 *   DCCB_POS_CONTACTOR_NO_FAULT (0U)
 *   DCCB_NEG_CONTACTOR_CCT_HIGH (1U)
 *   DCCB_POS_CONTACTOR_CCT_HIGH (1U)
 *   DCCB_NEG_CONTACTOR_CCT_LOW (2U)
 *   DCCB_POS_CONTACTOR_CCT_LOW (2U)
 *   DCCB_NEG_CONTACTOR_STUCK_CLOSED (3U)
 *   DCCB_POS_CONTACTOR_STUCK_CLOSED (3U)
 *   DCCB_NEG_CONTACTOR_STUCK_OPEN (4U)
 *   DCCB_POS_CONTACTOR_STUCK_OPEN (4U)
 * DccbOffboardTemperature_ImpType: Enumeration of integer in interval [0...20000] with enumerators
 *   DCCB_OFFBOARD_TEMP_SNA (65535U)
 * DccbOnboardTemperature_ImpType: Enumeration of integer in interval [0...2000] with enumerators
 *   DCCB_ONBOARD_TEMP_SNA (65535U)
 * DccbShortCircuitDetected_ImpType: Enumeration of integer in interval [0...1] with enumerators
 *   DCCB_SHORT_CIRCUIT_NOT_DETECTED (0U)
 *   DCCB_SHORT_CIRCUIT_DETECTED (1U)
 * DccbTempSensorFaultStatus_ImpType: Enumeration of integer in interval [0...10] with enumerators
 *   DCCB_TEMP_SENSOR_NORMAL (0U)
 *   DCCB_TEMP_SENSOR_CCT_HIGH (1U)
 *   DCCB_TEMP_SENSOR_CCT_LOW (2U)
 *   DCCB_TEMP_SENSOR_RANGE_PERF (4U)
 *   DCCB_TEMP_SENSOR_CCT_OPEN (3U)
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 * Rte_DT_signalGrp_EPTOce_C01_1: Enumeration of integer in interval [0...7] with enumerators
 *   I_C03_CONTACTORERR_NO_ERR (0U)
 *   NO_ERR (0U)
 *   I_C03_CONTACTORERR_PLUS_WELDED (1U)
 *   PLUS_WELDED (1U)
 *   I_C03_CONTACTORERR_NEG_WELDED (2U)
 *   NEG_WELDED (2U)
 *   BOTH_WELDED (3U)
 *   I_C03_CONTACTORERR_BOTH_WELDED (3U)
 *   CNTR_FULL (4U)
 *   I_C03_CONTACTORERR_CNTR_FULL (4U)
 *   I_C03_CONTACTORERR_RES (6U)
 *   I_C03_CONTACTORERR_SNA (7U)
 * c01_Count: Enumeration of integer in interval [0...127] with enumerators
 *   I_C01_COUNT_SNA (127U)
 * c01_SPN_ConvMd: Enumeration of integer in interval [0...1] with enumerators
 *   I_C01_SPN_CONVMD_VERS4 (0U)
 *   I_C01_SPN_CONVMD_VERS123 (1U)
 * c02_ContactorErr: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_CONTACTORERR_NO_ERR (0U)
 *   I_C02_CONTACTORERR_CNTR_FULL (1U)
 *   I_C02_CONTACTORERR_WELDED (2U)
 *   I_C02_CONTACTORERR_SNA (3U)
 * c02_Crash_NoCrash: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_CRASH_NOCRASH_RES (0U)
 *   I_C02_CRASH_NOCRASH_CRASH (1U)
 *   I_C02_CRASH_NOCRASH_NO_CRASH (2U)
 *   I_C02_CRASH_NOCRASH_SNA (3U)
 * c02_Disable_Enable_Err: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_DISABLE_ENABLE_ERR_DSABL (0U)
 *   I_C02_DISABLE_ENABLE_ERR_ENBL (1U)
 *   I_C02_DISABLE_ENABLE_ERR_ERR (2U)
 *   I_C02_DISABLE_ENABLE_ERR_SNA (3U)
 * c02_Disable_Enable_Res: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_DISABLE_ENABLE_RES_DSABL (0U)
 *   I_C02_DISABLE_ENABLE_RES_ENBL (1U)
 *   I_C02_DISABLE_ENABLE_RES_RES (2U)
 *   I_C02_DISABLE_ENABLE_RES_SNA (3U)
 * c02_HV_FcCont_Rels: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_HV_FCCONT_RELS_HV_NOT_ALLOWED (0U)
 *   I_C02_HV_FCCONT_RELS_HV_ALLOWED (1U)
 *   I_C02_HV_FCCONT_RELS_ERR (2U)
 *   I_C02_HV_FCCONT_RELS_SNA (3U)
 * c02_Inact_Act_Res: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_INACT_ACT_RES_INACTIVE (0U)
 *   I_C02_INACT_ACT_RES_ACTIVE (1U)
 *   I_C02_INACT_ACT_RES_RES (2U)
 *   I_C02_INACT_ACT_RES_SNA (3U)
 * c02_IndLmp: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_INDLMP_OFF (0U)
 *   I_C02_INDLMP_ON (1U)
 *   I_C02_INDLMP_RES (2U)
 *   I_C02_INDLMP_SNA (3U)
 * c02_IndLmpFlash: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_INDLMPFLASH_SLOWFL (0U)
 *   I_C02_INDLMPFLASH_FFLASH (1U)
 *   I_C02_INDLMPFLASH_RES (2U)
 *   I_C02_INDLMPFLASH_SNA (3U)
 * c02_Lck_Unlck_NotClr_SNA: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_LCK_UNLCK_NOTCLR_SNA_LOCKED (0U)
 *   I_C02_LCK_UNLCK_NOTCLR_SNA_UNLOCKED (1U)
 *   I_C02_LCK_UNLCK_NOTCLR_SNA_LOCK_STATE_NOT_CLEAR (2U)
 *   I_C02_LCK_UNLCK_NOTCLR_SNA_SNA (3U)
 * c02_Lck_Unlck_NotClr_SNA_ImpType: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_LCK_UNLCK_NOTCLR_SNA_LOCKED (0U)
 *   I_C02_LCK_UNLCK_NOTCLR_SNA_UNLOCKED (1U)
 *   I_C02_LCK_UNLCK_NOTCLR_SNA_LOCK_STATE_NOT_CLEAR (2U)
 *   I_C02_LCK_UNLCK_NOTCLR_SNA_SNA (3U)
 * c02_LowPwr_Stdby_Actv: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_LOWPWR_STDBY_ACTV_INACTV (0U)
 *   I_C02_LOWPWR_STDBY_ACTV_LOW_PWR (1U)
 *   I_C02_LOWPWR_STDBY_ACTV_ACTV (2U)
 *   I_C02_LOWPWR_STDBY_ACTV_SNA (3U)
 * c02_NACT_ACTIVE_ERR: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_NACT_ACTIVE_ERR_NACT (0U)
 *   I_C02_NACT_ACTIVE_ERR_ACT (1U)
 *   I_C02_NACT_ACTIVE_ERR_ERR (2U)
 *   I_C02_NACT_ACTIVE_ERR_SNA (3U)
 * c02_NACT_ACT_ERR_SNA: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_NACT_ACT_ERR_SNA_NACT (0U)
 *   I_C02_NACT_ACT_ERR_SNA_ACT (1U)
 *   I_C02_NACT_ACT_ERR_SNA_ERR (2U)
 *   I_C02_NACT_ACT_ERR_SNA_SNA (3U)
 * c02_NPsd_Psd_NotAvl_SNA: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_NPSD_PSD_NOTAVL_SNA_NPSD (0U)
 *   I_C02_NPSD_PSD_NOTAVL_SNA_PSD (1U)
 *   I_C02_NPSD_PSD_NOTAVL_SNA_NOT_AVL (2U)
 *   I_C02_NPSD_PSD_NOTAVL_SNA_SNA (3U)
 * c02_NPsd_Psd_NotAvl_SNA_ImpType: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_NPSD_PSD_NOTAVL_SNA_NPSD (0U)
 *   I_C02_NPSD_PSD_NOTAVL_SNA_PSD (1U)
 *   I_C02_NPSD_PSD_NOTAVL_SNA_NOT_AVL (2U)
 *   I_C02_NPSD_PSD_NOTAVL_SNA_SNA (3U)
 * c02_NRQ_RQ_ERR_SNA: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_NRQ_RQ_ERR_SNA_NRQ (0U)
 *   I_C02_NRQ_RQ_ERR_SNA_RQ (1U)
 *   I_C02_NRQ_RQ_ERR_SNA_ERR (2U)
 *   I_C02_NRQ_RQ_ERR_SNA_SNA (3U)
 * c02_NotChrg_Chrg_Res: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_NOTCHRG_CHRG_RES_NCHRG (0U)
 *   I_C02_NOTCHRG_CHRG_RES_CHRG (1U)
 *   I_C02_NOTCHRG_CHRG_RES_RES (2U)
 *   I_C02_NOTCHRG_CHRG_RES_SNA (3U)
 * c02_NotRq_Rq: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_NOTRQ_RQ_NRQ (0U)
 *   I_C02_NOTRQ_RQ_RQ (1U)
 *   I_C02_NOTRQ_RQ_RES (2U)
 *   I_C02_NOTRQ_RQ_SNA (3U)
 * c02_OpenRq_CloseRq: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_OPENRQ_CLOSERQ_OPEN_REQ (0U)
 *   I_C02_OPENRQ_CLOSERQ_CLOSE_REQ (1U)
 *   I_C02_OPENRQ_CLOSERQ_ERR (2U)
 *   I_C02_OPENRQ_CLOSERQ_SNA (3U)
 * c02_Open_Closed_Err_SNA: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_OPEN_CLOSED_ERR_SNA_OPEN (0U)
 *   I_C02_OPEN_CLOSE_ERR_SNA_OPEN (0U)
 *   I_C02_OPEN_CLOSED_ERR_SNA_CLOSED (1U)
 *   I_C02_OPEN_CLOSE_ERR_SNA_CLOSE (1U)
 *   I_C02_OPEN_CLOSED_ERR_SNA_ERR (2U)
 *   I_C02_OPEN_CLOSE_ERR_SNA_ERR (2U)
 *   I_C02_OPEN_CLOSED_ERR_SNA_SNA (3U)
 *   I_C02_OPEN_CLOSE_ERR_SNA_SNA (3U)
 * c02_ShortDet_NoShort: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_SHORTDET_NOSHORT_SHORT_DET (0U)
 *   I_C02_SHORTDET_NOSHORT_NO_SHORT (1U)
 *   I_C02_SHORTDET_NOSHORT_ERR (2U)
 *   I_C02_SHORTDET_NOSHORT_SNA (3U)
 * c02_True_False: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_TRUE_FALSE_FALSE (0U)
 *   I_C02_TRUE_FALSE_TRUE (1U)
 *   I_C02_TRUE_FALSE_RES (2U)
 *   I_C02_TRUE_FALSE_SNA (3U)
 * c02_ndef_false_true: Enumeration of integer in interval [1...3] with enumerators
 *   I_C02_NDEF_FALSE_TRUE_FALSE (1U)
 *   I_C02_NDEF_FALSE_TRUE_TRUE (2U)
 *   I_C02_NDEF_FALSE_TRUE_SNA (3U)
 * c02_open_closed_res: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_OPEN_CLOSED_RES_OPEN (0U)
 *   I_C02_OPEN_CLOSED_RES_CLOSED (1U)
 *   I_C02_OPEN_CLOSED_RES_RES (2U)
 *   I_C02_OPEN_CLOSED_RES_SNA (3U)
 * c02_opn_cls_ndef: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_OPN_CLS_NDEF_OPN (0U)
 *   I_C02_OPN_CLS_NDEF_CLS (1U)
 *   I_C02_OPN_CLS_NDEF_SNA (3U)
 * c02_opn_cls_ndef_ImpType: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_OPN_CLS_NDEF_OPN (0U)
 *   I_C02_OPN_CLS_NDEF_CLS (1U)
 *   I_C02_OPN_CLS_NDEF_SNA (3U)
 * c02_swrq_off_on_invld_sna: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_SWRQ_OFF_ON_INVLD_SNA_SWRQ_OFF (0U)
 *   I_C02_SWRQ_OFF_ON_INVLD_SNA_SWRQ_ON (1U)
 *   I_C02_SWRQ_OFF_ON_INVLD_SNA_SWRQ_INVALID (2U)
 *   I_C02_SWRQ_OFF_ON_INVLD_SNA_SNA (3U)
 * c02_swrq_off_on_invld_sna_ImpType: Enumeration of integer in interval [0...3] with enumerators
 *   I_C02_SWRQ_OFF_ON_INVLD_SNA_SWRQ_OFF (0U)
 *   I_C02_SWRQ_OFF_ON_INVLD_SNA_SWRQ_ON (1U)
 *   I_C02_SWRQ_OFF_ON_INVLD_SNA_SWRQ_INVALID (2U)
 *   I_C02_SWRQ_OFF_ON_INVLD_SNA_SNA (3U)
 * c03_ContactorErr: Enumeration of integer in interval [0...7] with enumerators
 *   I_C03_CONTACTORERR_NO_ERR (0U)
 *   I_C03_CONTACTORERR_PLUS_WELDED (1U)
 *   I_C03_CONTACTORERR_NEG_WELDED (2U)
 *   I_C03_CONTACTORERR_BOTH_WELDED (3U)
 *   I_C03_CONTACTORERR_CNTR_FULL (4U)
 *   I_C03_CONTACTORERR_RES (6U)
 *   I_C03_CONTACTORERR_SNA (7U)
 * c04_ActlCtrlMode: Enumeration of integer in interval [0...15] with enumerators
 *   I_C04_ACTLCTRLMODE_SDTBY (0U)
 *   I_C04_ACTLCTRLMODE_TRQ_CTRL (1U)
 *   I_C04_ACTLCTRLMODE_SPD_CTRL (2U)
 *   I_C04_ACTLCTRLMODE_START_UP (3U)
 *   I_C04_ACTLCTRLMODE_SHUT_DOWN (4U)
 *   I_C04_ACTLCTRLMODE_RSLVR_OF_CAL (5U)
 *   I_C04_ACTLCTRLMODE_EHH (6U)
 *   I_C04_ACTLCTRLMODE_RES (14U)
 *   I_C04_ACTLCTRLMODE_SNA (15U)
 * c04_ChrgCoupConn_Stat: Enumeration of integer in interval [0...15] with enumerators
 *   I_C04_CHRGCOUPCONN_STAT_PLUGGED (0U)
 *   I_C04_CHRGCOUPCONN_STAT_VEH_PLUGGED (1U)
 *   I_C04_CHRGCOUPCONN_STAT_VEH_NOT_PLUGGED (2U)
 *   I_C04_CHRGCOUPCONN_STAT_UNKNOWN (3U)
 *   I_C04_CHRGCOUPCONN_STAT_DEFECT (4U)
 *   I_C04_CHRGCOUPCONN_STAT_RES (14U)
 *   I_C04_CHRGCOUPCONN_STAT_SNA (15U)
 * c04_ChrgLED_Rq: Enumeration of integer in interval [0...15] with enumerators
 *   I_C04_CHRGLED_RQ_LED_OFF_RQ (0U)
 *   I_C04_CHRGLED_RQ_START_COM (1U)
 *   I_C04_CHRGLED_RQ_RDY_CHRG (2U)
 *   I_C04_CHRGLED_RQ_BAT_CHRGNG (3U)
 *   I_C04_CHRGLED_RQ_BAT_FULL (4U)
 *   I_C04_CHRGLED_RQ_ERROR (5U)
 *   I_C04_CHRGLED_RQ_RES (14U)
 *   I_C04_CHRGLED_RQ_SNA (15U)
 * c04_CtrlPilot_DutyRange_Stat: Enumeration of integer in interval [0...15] with enumerators
 *   I_C04_CTRLPILOT_DUTYRANGE_STAT_NOT_CONNECT (0U)
 *   I_C04_CTRLPILOT_DUTYRANGE_STAT_DIG_COM (1U)
 *   I_C04_CTRLPILOT_DUTYRANGE_STAT_AC_CHRG (2U)
 *   I_C04_CTRLPILOT_DUTYRANGE_STAT_NO_PWR (3U)
 *   I_C04_CTRLPILOT_DUTYRANGE_STAT_NVALID (4U)
 *   I_C04_CTRLPILOT_DUTYRANGE_STAT_RES (14U)
 *   I_C04_CTRLPILOT_DUTYRANGE_STAT_SNA (15U)
 * c04_CtrlPilot_DutyRange_Stat_ImpType: Enumeration of integer in interval [0...15] with enumerators
 *   I_C04_CTRLPILOT_DUTYRANGE_STAT_NOT_CONNECT (0U)
 *   I_C04_CTRLPILOT_DUTYRANGE_STAT_DIG_COM (1U)
 *   I_C04_CTRLPILOT_DUTYRANGE_STAT_AC_CHRG (2U)
 *   I_C04_CTRLPILOT_DUTYRANGE_STAT_NO_PWR (3U)
 *   I_C04_CTRLPILOT_DUTYRANGE_STAT_NVALID (4U)
 *   I_C04_CTRLPILOT_DUTYRANGE_STAT_RES (14U)
 *   I_C04_CTRLPILOT_DUTYRANGE_STAT_SNA (15U)
 * c04_EVCC_CtrlPilot_Stat: Enumeration of integer in interval [0...15] with enumerators
 *   I_C04_EVCC_CTRLPILOT_STAT_NONE (0U)
 *   I_C04_EVCC_CTRLPILOT_STAT_STATE_A_E_F (1U)
 *   I_C04_EVCC_CTRLPILOT_STAT_STATE_B (2U)
 *   I_C04_EVCC_CTRLPILOT_STAT_STATE_C_D (3U)
 *   I_C04_EVCC_CTRLPILOT_STAT_RES (14U)
 *   I_C04_EVCC_CTRLPILOT_STAT_SNA (15U)
 * c04_EVCC_CtrlPilot_Stat_ImpType: Enumeration of integer in interval [0...15] with enumerators
 *   I_C04_EVCC_CTRLPILOT_STAT_NONE (0U)
 *   I_C04_EVCC_CTRLPILOT_STAT_STATE_A_E_F (1U)
 *   I_C04_EVCC_CTRLPILOT_STAT_STATE_B (2U)
 *   I_C04_EVCC_CTRLPILOT_STAT_STATE_C_D (3U)
 *   I_C04_EVCC_CTRLPILOT_STAT_RES (14U)
 *   I_C04_EVCC_CTRLPILOT_STAT_SNA (15U)
 * c04_EV_ErrorCode: Enumeration of integer in interval [0...15] with enumerators
 *   I_C04_EV_ERRORCODE_NO_ERROR (0U)
 *   I_C04_EV_ERRORCODE_FAILED_RESSTEMP_INHIBIT (1U)
 *   I_C04_EV_ERRORCODE_FAILED_EVSHIFT_POS (2U)
 *   I_C04_EV_ERRORCODE_FAILED_CHRG_CONNECTOR_LCKFLT (3U)
 *   I_C04_EV_ERRORCODE_FAILED_EVRESS_MALFUNC (4U)
 *   I_C04_EV_ERRORCODE_FAILED_CHRG_CURRDIFF (5U)
 *   I_C04_EV_ERRORCODE_FAILED_CHRG_VOLT_OUTOFRANGE (6U)
 *   I_C04_EV_ERRORCODE_RES2 (9U)
 *   I_C04_EV_ERRORCODE_FAILED_CHRG_SYS_INCOMP (10U)
 *   I_C04_EV_ERRORCODE_NO_DATA (11U)
 *   I_C04_EV_ERRORCODE_RES1 (14U)
 *   I_C04_EV_ERRORCODE_SNA (15U)
 * c04_INACT_ACT_ACTERR_DISENGENG: Enumeration of integer in interval [0...15] with enumerators
 *   I_C04_INACT_ACT_ACTERR_DISENGENG_INACT (0U)
 *   I_C04_INACT_ACT_ACTERR_DISENGENG_ACT (1U)
 *   I_C04_INACT_ACT_ACTERR_DISENGENG_ACTERR (2U)
 *   I_C04_INACT_ACT_ACTERR_DISENGENG_DISENGENG (3U)
 *   I_C04_INACT_ACT_ACTERR_DISENGENG_RES (14U)
 *   I_C04_INACT_ACT_ACTERR_DISENGENG_SNA (15U)
 * c04_IgnSw_Stat: Enumeration of integer in interval [0...15] with enumerators
 *   I_C04_IGNSW_STAT_IGN_OFF (0U)
 *   I_C04_IGNSW_STAT_IGN_ACC (1U)
 *   I_C04_IGNSW_STAT_IGN_ON (2U)
 *   I_C04_IGNSW_STAT_IGN_CRANK (3U)
 *   I_C04_IGNSW_STAT_RES (4U)
 *   I_C04_IGNSW_STAT_RES2 (5U)
 *   I_C04_IGNSW_STAT_RES3 (6U)
 *   I_C04_IGNSW_STAT_RES4 (7U)
 *   I_C04_IGNSW_STAT_RES5 (8U)
 *   I_C04_IGNSW_STAT_RES6 (9U)
 *   I_C04_IGNSW_STAT_LOCK (10U)
 *   I_C04_IGNSW_STAT_RES7 (11U)
 *   I_C04_IGNSW_STAT_RES8 (12U)
 *   I_C04_IGNSW_STAT_RES9 (13U)
 *   I_C04_IGNSW_STAT_ERR (14U)
 *   I_C04_IGNSW_STAT_SNA (15U)
 * c04_IgnSw_Stat_ImpType: Enumeration of integer in interval [0...15] with enumerators
 *   I_C04_IGNSW_STAT_IGN_OFF (0U)
 *   I_C04_IGNSW_STAT_IGN_ACC (1U)
 *   I_C04_IGNSW_STAT_IGN_ON (2U)
 *   I_C04_IGNSW_STAT_IGN_CRANK (3U)
 *   I_C04_IGNSW_STAT_RES (4U)
 *   I_C04_IGNSW_STAT_RES2 (5U)
 *   I_C04_IGNSW_STAT_RES3 (6U)
 *   I_C04_IGNSW_STAT_RES4 (7U)
 *   I_C04_IGNSW_STAT_RES5 (8U)
 *   I_C04_IGNSW_STAT_RES6 (9U)
 *   I_C04_IGNSW_STAT_LOCK (10U)
 *   I_C04_IGNSW_STAT_RES7 (11U)
 *   I_C04_IGNSW_STAT_RES8 (12U)
 *   I_C04_IGNSW_STAT_RES9 (13U)
 *   I_C04_IGNSW_STAT_ERR (14U)
 *   I_C04_IGNSW_STAT_SNA (15U)
 * c04_IsoMon_Status: Enumeration of integer in interval [0...15] with enumerators
 *   I_C04_ISOMON_STATUS_INACTIVE (0U)
 *   I_C04_ISOMON_STATUS_ACTIVE (1U)
 *   I_C04_ISOMON_STATUS_ERR (2U)
 *   I_C04_ISOMON_STATUS_INPROG (3U)
 *   I_C04_ISOMON_STATUS_LOWACC (4U)
 *   I_C04_ISOMON_STATUS_HIGHACC (5U)
 *   I_C04_ISOMON_STATUS_NOTAVAIL (6U)
 *   I_C04_ISOMON_STATUS_INHIBIT (7U)
 *   I_C04_ISOMON_STATUS_RES (14U)
 *   I_C04_ISOMON_STATUS_SNA (15U)
 * c04_ProxPilotAmpacity: Enumeration of integer in interval [0...15] with enumerators
 *   I_C04_PROXPILOTAMPACITY_AMP_13A (0U)
 *   I_C04_PROXPILOTAMPACITY_AMP_20A (1U)
 *   I_C04_PROXPILOTAMPACITY_AMP_32A (2U)
 *   I_C04_PROXPILOTAMPACITY_AMP_63A (3U)
 *   I_C04_PROXPILOTAMPACITY_INVALID (4U)
 *   I_C04_PROXPILOTAMPACITY_RES (14U)
 *   I_C04_PROXPILOTAMPACITY_SNA (15U)
 * c04_ProxPilotAmpacity_ImpType: Enumeration of integer in interval [0...15] with enumerators
 *   I_C04_PROXPILOTAMPACITY_AMP_13A (0U)
 *   I_C04_PROXPILOTAMPACITY_AMP_20A (1U)
 *   I_C04_PROXPILOTAMPACITY_AMP_32A (2U)
 *   I_C04_PROXPILOTAMPACITY_AMP_63A (3U)
 *   I_C04_PROXPILOTAMPACITY_INVALID (4U)
 *   I_C04_PROXPILOTAMPACITY_RES (14U)
 *   I_C04_PROXPILOTAMPACITY_SNA (15U)
 * c08_0_to_250_1: Enumeration of integer in interval [0...255] with enumerators
 *   I_C08_0_TO_250_1_RES (253U)
 *   I_C08_0_TO_250_1_ERR (254U)
 *   I_C08_0_TO_250_1_SNA (255U)
 * c08_CtrlByte: Enumeration of integer in interval [0...255] with enumerators
 *   I_C08_CTRLBYTE_ACK (0U)
 *   I_C08_CTRLBYTE_NACK (1U)
 *   I_C08_CTRLBYTE_ACCESSDENIED (2U)
 *   I_C08_CTRLBYTE_CANNOTRESPOND (3U)
 *   I_C08_CTRLBYTE_RES2 (15U)
 *   I_C08_CTRLBYTE_RTS (16U)
 *   I_C08_CTRLBYTE_CTS (17U)
 *   I_C08_CTRLBYTE_RES (18U)
 *   I_C08_CTRLBYTE_EOMA (19U)
 *   I_C08_CTRLBYTE_ERTS (20U)
 *   I_C08_CTRLBYTE_ECTS (21U)
 *   I_C08_CTRLBYTE_EDPO (22U)
 *   I_C08_CTRLBYTE_EEOMACK (23U)
 *   I_C08_CTRLBYTE_EABORT (24U)
 *   I_C08_CTRLBYTE_RES3 (31U)
 *   I_C08_CTRLBYTE_BAM (32U)
 *   I_C08_CTRLBYTE_RES4 (254U)
 *   I_C08_CTRLBYTE_ABORT_SNA (255U)
 * c08_Days_0_to_62k5_0k25: Enumeration of integer in interval [0...255] with enumerators
 *   I_C08_DAYS_0_TO_62K5_0K25_RES1 (0U)
 *   I_C08_DAYS_0_TO_62K5_0K25_RES2 (253U)
 *   I_C08_DAYS_0_TO_62K5_0K25_ERR (254U)
 *   I_C08_DAYS_0_TO_62K5_0K25_SNA (255U)
 * c08_Months_1_to_12_1: Enumeration of integer in interval [0...255] with enumerators
 *   I_C08_MONTHS_1_TO_12_1_RES (0U)
 *   I_C08_MONTHS_1_TO_12_1_RES2 (254U)
 *   I_C08_MONTHS_1_TO_12_1_SNA (255U)
 * c08_Nm_0_10_0d0625: Enumeration of integer in interval [0...255] with enumerators
 *   I_C08_NM_0_10_0D0625_RES (253U)
 *   I_C08_NM_0_10_0D0625_ERR (254U)
 *   I_C08_NM_0_10_0D0625_SNA (255U)
 * c08_Years_1985_to_2235_1: Enumeration of integer in interval [0...255] with enumerators
 *   I_C08_YEARS_1985_TO_2235_1_RES (254U)
 *   I_C08_YEARS_1985_TO_2235_1_SNA (255U)
 * c08_h_0_to_250_1: Enumeration of integer in interval [0...255] with enumerators
 *   I_C08_H_0_TO_250_1_RES (254U)
 *   I_C08_H_0_TO_250_1_SNA (255U)
 * c08_l_p_min_0_to_25_0k1: Enumeration of integer in interval [0...255] with enumerators
 *   I_C08_L_P_MIN_0_TO_25_0K1_RES (253U)
 *   I_C08_L_P_MIN_0_TO_25_0K1_ERR (254U)
 *   I_C08_L_P_MIN_0_TO_25_0K1_SNA (255U)
 * c08_min_0_to_250_1: Enumeration of integer in interval [0...255] with enumerators
 *   I_C08_MIN_0_TO_250_1_RES (254U)
 *   I_C08_MIN_0_TO_250_1_SNA (255U)
 * c08_offset_hour_m23_to_p23_1: Enumeration of integer in interval [101...255] with enumerators
 *   I_C08_OFFSET_HOUR_M23_TO_P23_1_RES (101U)
 *   I_C08_OFFSET_HOUR_M23_TO_P23_1_RES2 (253U)
 *   I_C08_OFFSET_HOUR_M23_TO_P23_1_ERR (254U)
 *   I_C08_OFFSET_HOUR_M23_TO_P23_1_SNA (255U)
 * c08_offset_min_m59_to_p59_1: Enumeration of integer in interval [65...255] with enumerators
 *   I_C08_OFFSET_MIN_M59_TO_P59_1_RES (65U)
 *   I_C08_OFFSET_MIN_M59_TO_P59_1_RES2 (253U)
 *   I_C08_OFFSET_MIN_M59_TO_P59_1_ERR (254U)
 *   I_C08_OFFSET_MIN_M59_TO_P59_1_SNA (255U)
 * c08_s_0_to_59k75_0k25: Enumeration of integer in interval [0...255] with enumerators
 *   I_C08_S_0_TO_59K75_0K25_RES (253U)
 *   I_C08_S_0_TO_59K75_0K25_ERR (254U)
 *   I_C08_S_0_TO_59K75_0K25_SNA (255U)
 * c12_0_4094_1_SNA: Enumeration of integer in interval [0...4095] with enumerators
 *   I_C12_0_4094_1_SNA_SNA (4095U)
 * c12_degC_m50_200_0d1: Enumeration of integer in interval [0...4095] with enumerators
 *   I_C12_DEGC_M50_200_0D1_RES (4089U)
 *   I_C12_DEGC_M50_200_0D1_ERR (4093U)
 *   I_C12_DEGC_M50_200_0D1_SNA (4095U)
 * c16_0_80_0d03125: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_0_80_0D03125_RES (65023U)
 *   I_C16_0_80_0D03125_ERR (65279U)
 *   I_C16_0_80_0D03125_SNA (65535U)
 * c16_0_to_0k5_0k0000152588: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_0_TO_0K5_0K0000152588_RES (65023U)
 *   I_C16_0_TO_0K5_0K0000152588_ERR (65279U)
 *   I_C16_0_TO_0K5_0K0000152588_SNA (65535U)
 * c16_0_to_10_0k0004882813: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_0_TO_10_0K0004882813_RES (65023U)
 *   I_C16_0_TO_10_0K0004882813_ERR (65279U)
 *   I_C16_0_TO_10_0K0004882813_SNA (65535U)
 * c16_0_to_64255_1: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_0_TO_64255_1_RES (65023U)
 *   I_C16_0_TO_64255_1_ERR (65279U)
 *   I_C16_0_TO_64255_1_SNA (65535U)
 * c16_0_to_64255_BAM: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_0_TO_64255_BAM_RES (65023U)
 *   I_C16_0_TO_64255_BAM_ERR (65279U)
 *   I_C16_0_TO_64255_BAM_SNA (65535U)
 * c16_A_0_1000_0k1_ImpType: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_A_0_1000_0K1_RES (65534U)
 *   I_C16_A_0_1000_0K1_SNA (65535U)
 * c16_A_0_100_0k1_ImpType: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_A_0_100_0K1_RES (65534U)
 *   I_C16_A_0_100_0K1_SNA (65535U)
 * c16_A_0_4000_0k1_ImpType: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_A_0_4000_0K1_RES (65534U)
 *   I_C16_A_0_4000_0K1_SNA (65535U)
 * c16_A_m1600_to_1612k75_0k05_SNA: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_A_M1600_TO_1612K75_0K05_SNA_RES (65023U)
 *   I_C16_A_M1600_TO_1612K75_0K05_SNA_ERR (65279U)
 *   I_C16_A_M1600_TO_1612K75_0K05_SNA_SNA (65535U)
 * c16_A_m1600_to_1612k75_0k05_SNA_ImpType: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_A_M1600_TO_1612K75_0K05_SNA_RES (65023U)
 *   I_C16_A_M1600_TO_1612K75_0K05_SNA_ERR (65279U)
 *   I_C16_A_M1600_TO_1612K75_0K05_SNA_SNA (65535U)
 * c16_A_m3250_to_3250_0k1: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_A_M3250_TO_3250_0K1_RES (65534U)
 *   I_C16_A_M3250_TO_3250_0K1_SNA (65535U)
 * c16_C_m273_to_1735_0k03125_Typ: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_C_M273_TO_1735_0K03125_TYP_RES (65534U)
 *   I_C16_C_M273_TO_1735_0K03125_TYP_SNA (65535U)
 * c16_Kw_m1600_to_1612k75_0k05_SNA: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_KW_M1600_TO_1612K75_0K05_SNA_RES (65023U)
 *   I_C16_KW_M1600_TO_1612K75_0K05_SNA_ERR (65279U)
 *   I_C16_KW_M1600_TO_1612K75_0K05_SNA_SNA (65535U)
 * c16_Nm_m5000_to_p5000_0k2: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_NM_M5000_TO_P5000_0K2_RES (65023U)
 *   I_C16_NM_M5000_TO_P5000_0K2_ERR (65279U)
 *   I_C16_NM_M5000_TO_P5000_0K2_SNA (65535U)
 * c16_V_0_1638k2_0k1: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_V_0_1638K2_0K1_RES (65534U)
 *   I_C16_V_0_1638K2_0K1_SNA (65535U)
 * c16_V_0_1638k2_0k1_ImpType: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_V_0_1638K2_0K1_RES (65534U)
 *   I_C16_V_0_1638K2_0K1_SNA (65535U)
 * c16_V_0_to_3212k75_0k05: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_V_0_TO_3212K75_0K05_RES (65023U)
 *   I_C16_V_0_TO_3212K75_0K05_ERR (65279U)
 *   I_C16_V_0_TO_3212K75_0K05_SNA (65535U)
 * c16_V_0_to_3212k75_0k05_ImpType: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_V_0_TO_3212K75_0K05_RES (65023U)
 *   I_C16_V_0_TO_3212K75_0K05_ERR (65279U)
 *   I_C16_V_0_TO_3212K75_0K05_SNA (65535U)
 * c16_kOhm_0b64k255M_1_NoMeas: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_KOHM_0B64K255M_1_NOMEAS_NOMEAS (64511U)
 *   I_C16_KOHM_0B64K255M_1_NOMEAS_RES (65023U)
 *   I_C16_KOHM_0B64K255M_1_NOMEAS_ERR (65279U)
 *   I_C16_KOHM_0B64K255M_1_NOMEAS_SNA (65535U)
 * c16_rpm_m16000_to_16000_0k5: Enumeration of integer in interval [0...65535] with enumerators
 *   I_C16_RPM_M16000_TO_16000_0K5_RES (65023U)
 *   I_C16_RPM_M16000_TO_16000_0K5_ERR (65279U)
 *   I_C16_RPM_M16000_TO_16000_0K5_SNA (65535U)
 * cDT_02_NRQ_RQ_Res_SNA: Enumeration of integer in interval [0...3] with enumerators
 *   I_CDT_02_NRQ_RQ_RES_SNA_NRQ (0U)
 *   I_CDT_02_NRQ_RQ_RES_SNA_RQ (1U)
 *   I_CDT_02_NRQ_RQ_RES_SNA_RES (2U)
 *   I_CDT_02_NRQ_RQ_RES_SNA_SNA (3U)
 * uint8_SensataImpType: Enumeration of integer in interval [0...3] with enumerators
 *   INPUT_CURRENT_NO_ERROR (0U)
 *   INPUT_CURRENT_TOO_LOW (1U)
 *   INPUT_CURRENT_TOO_HIGH (2U)
 *   INPUT_CURRENT_RANGE_PERFORMANCE (3U)
 *
 * Array Types:
 * ============
 * DccbComHdlNvm_ImpType: Array with 32 element(s) of type uint8_SensataImpType
 * DccbConCtrlNvm_ImpType: Array with 128 element(s) of type uint8_SensataImpType
 * DccbCondMonNvm_ImpType: Array with 128 element(s) of type uint8_SensataImpType
 * DccbFaultMgrNvm_ImpType: Array with 32 element(s) of type uint8_SensataImpType
 * DccbModeMgrNvm_ImpType: Array with 32 element(s) of type uint8_SensataImpType
 *
 * Record Types:
 * =============
 * REC_SG_CPC6_C02_AR5: Record with elements
 *   AntiJerkCtrlEnbl_PTIce1 of type c02_Disable_Enable_Err
 *   AntiJerkCtrlEnbl_PTIce2 of type c02_Disable_Enable_Err
 *   AntiJerkCtrlKp_PTIce1 of type c16_0_80_0d03125
 *   AntiJerkCtrlKp_PTIce2 of type c16_0_80_0d03125
 *   AntiJerkCtrlThrld_PTIce1 of type c08_Nm_0_10_0d0625
 *   AntiJerkCtrlThrld_PTIce2 of type c08_Nm_0_10_0d0625
 *   CCS_EV_ErrorCode of type c04_EV_ErrorCode
 *   Chrg_Stat of type c02_NotChrg_Chrg_Res
 *   ChrgLED_Rq of type c04_ChrgLED_Rq
 *   CRC_SG_CPC6_C02_AR5 of type c016_CRC_woSNA
 *   DCCB1_ChaSw_Rq of type c02_Open_Close_Err_SNA
 *   EdrvInTemp_Cval of type c16_C_m273_to_1735_0k03125_Typ
 *   EdrvOutTemp_Cval of type c16_C_m273_to_1735_0k03125_Typ
 *   EPTO_Sw_Rq of type c02_swrq_off_on_invld_sna
 *   FC_WctOutVlv_Req_CPC of type c02_OpenRq_CloseRq
 *   HV_IntegrityChk_Rq of type c02_NotRq_Rq
 *   HVB_Sw_Rq of type c02_swrq_off_on_invld_sna
 *   IsoQuickTest_Rq_DCLce of type c02_NRQ_RQ_ERR_SNA
 *   PreChrg_Stage1_Rq of type c02_Disable_Enable
 *   PreChrg_Stage2_Rq of type c02_Disable_Enable
 *   PreChrgVolt_Rq_DCLce of type c16_V_0_to_3212k75_0k05
 *   PTIce1SpdCtrlKi of type c16_0_to_10_0k0004882813
 *   PTIce1SpdCtrlKp of type c16_0_to_0k5_0k0000152588
 *   PTIce2SpdCtrlKi of type c16_0_to_10_0k0004882813
 *   PTIce2SpdCtrlKp of type c16_0_to_0k5_0k0000152588
 *   Rsrv1_CPC6_C02_AR5 of type Rsrv06
 *   Rsrv2_CPC6_C02_AR5 of type cvRsrv02
 *   SemiConductorSw_Rq of type c02_Inact_Act_Res
 *   SQC_SG_CPC6_C02_AR5 of type c08_0_to_255_1_SNA_na
 *   THM_PTIce1MotOilInTemp_Cval of type c16_C_m273_to_1735_0k03125_Typ
 *   THM_PTIce2MotOilInTemp_Cval of type c16_C_m273_to_1735_0k03125_Typ
 * REC_SG_CPC6_C02_AR5_5wbdxrp8awtkuts7zyf21170w: Record with elements
 *   AntiJerkCtrlEnbl_PTIce1 of type c02_Disable_Enable_Err
 *   AntiJerkCtrlEnbl_PTIce2 of type c02_Disable_Enable_Err
 *   AntiJerkCtrlKp_PTIce1 of type c16_0_80_0d03125
 *   AntiJerkCtrlKp_PTIce2 of type c16_0_80_0d03125
 *   AntiJerkCtrlThrld_PTIce1 of type c08_Nm_0_10_0d0625
 *   AntiJerkCtrlThrld_PTIce2 of type c08_Nm_0_10_0d0625
 *   CCS_EV_ErrorCode of type c04_EV_ErrorCode
 *   Chrg_Stat of type c02_NotChrg_Chrg_Res
 *   ChrgLED_Rq of type c04_ChrgLED_Rq
 *   CRC_SG_CPC6_C02_AR5 of type c016_CRC_woSNA
 *   DCCB1_ChaSw_Rq of type c02_Open_Close_Err_SNA
 *   EdrvInTemp_Cval of type c16_C_m273_to_1735_0k03125_Typ
 *   EdrvOutTemp_Cval of type c16_C_m273_to_1735_0k03125_Typ
 *   EPTO_Sw_Rq of type c02_swrq_off_on_invld_sna
 *   FC_WctOutVlv_Req_CPC of type c02_OpenRq_CloseRq
 *   HV_IntegrityChk_Rq of type c02_NotRq_Rq
 *   HVB_Sw_Rq of type c02_swrq_off_on_invld_sna
 *   IsoQuickTest_Rq_DCLce of type c02_NRQ_RQ_ERR_SNA
 *   PreChrg_Stage1_Rq of type c02_Disable_Enable
 *   PreChrg_Stage2_Rq of type c02_Disable_Enable
 *   PreChrgVolt_Rq_DCLce of type c16_V_0_to_3212k75_0k05
 *   PTIce1SpdCtrlKi of type c16_0_to_10_0k0004882813
 *   PTIce1SpdCtrlKp of type c16_0_to_0k5_0k0000152588
 *   PTIce2SpdCtrlKi of type c16_0_to_10_0k0004882813
 *   PTIce2SpdCtrlKp of type c16_0_to_0k5_0k0000152588
 *   Rsrv1_CPC6_C02_AR5 of type Rsrv06
 *   Rsrv2_CPC6_C02_AR5 of type cvRsrv02
 *   SemiConductorSw_Rq of type c02_Inact_Act_Res
 *   SQC_SG_CPC6_C02_AR5 of type c08_0_to_255_1_SNA_na
 *   THM_PTIce1MotOilInTemp_Cval of type c16_C_m273_to_1735_0k03125_Typ
 *   THM_PTIce2MotOilInTemp_Cval of type c16_C_m273_to_1735_0k03125_Typ
 * REC_SG_CPC6_C05_AR5: Record with elements
 *   CCS_EV_ErrorCode2 of type c04_EV_ErrorCode
 *   CCS_EV_ErrorCode3 of type c04_EV_ErrorCode
 *   CCS_RstrtTrgr of type c02_True_False
 *   CCS_RstrtTrgr2 of type c02_True_False
 *   CCS_RstrtTrgr3 of type c02_True_False
 *   Chrg_Stat3 of type c02_NotChrg_Chrg_Res
 *   ChrgLED_Rq2 of type c04_ChrgLED_Rq
 *   ChrgLED_Rq3 of type c04_ChrgLED_Rq
 *   CRC_SG_CPC6_C05_AR5 of type c016_CRC_woSNA
 *   DCCB2_ChaSw_Rq of type c02_Open_Close_Err_SNA
 *   Rsrv1_CPC6_C05_AR5 of type Rsrv04
 *   Rsrv2_CPC6_C05_AR5 of type cvRsrv02
 *   SQC_SG_CPC6_C05_AR5 of type c08_0_to_255_1_SNA_na
 * REC_SG_CPC6_C05_AR5_2ahxpf4cam3pi2le1l2woky78: Record with elements
 *   CCS_EV_ErrorCode2 of type c04_EV_ErrorCode
 *   CCS_EV_ErrorCode3 of type c04_EV_ErrorCode
 *   CCS_RstrtTrgr of type c02_True_False
 *   CCS_RstrtTrgr2 of type c02_True_False
 *   CCS_RstrtTrgr3 of type c02_True_False
 *   Chrg_Stat3 of type c02_NotChrg_Chrg_Res
 *   ChrgLED_Rq2 of type c04_ChrgLED_Rq
 *   ChrgLED_Rq3 of type c04_ChrgLED_Rq
 *   CRC_SG_CPC6_C05_AR5 of type c016_CRC_woSNA
 *   DCCB2_ChaSw_Rq of type c02_Open_Close_Err_SNA
 *   Rsrv1_CPC6_C05_AR5 of type Rsrv04
 *   Rsrv2_CPC6_C05_AR5 of type cvRsrv02
 *   SQC_SG_CPC6_C05_AR5 of type c08_0_to_255_1_SNA_na
 * REC_SG_CPC6_C06_AR5: Record with elements
 *   ActvDischrgCmd_Rq_BRCce of type c02_Disable_Enable
 *   ActvDischrgCmd_Rq_DCLce of type c02_Disable_Enable
 *   ActvDischrgCmd_Rq_PTIce1 of type c02_Disable_Enable
 *   ActvDischrgCmd_Rq_PTIce2 of type c02_Disable_Enable
 *   CmdTrq_Req_PTIce1 of type c16_Nm_m5000_to_p5000_0k2
 *   CmdTrq_Req_PTIce2 of type c16_Nm_m5000_to_p5000_0k2
 *   CRC_SG_CPC6_C06_AR5 of type c016_CRC_woSNA
 *   CtrlMd_Req_PTIce1 of type c04_ActlCtrlMode
 *   CtrlMd_Req_PTIce2 of type c04_ActlCtrlMode
 *   DCCB1_IsoMon_Rq of type c02_Disable_Enable
 *   FC_Pwr_Req_CPC of type c16_Kw_m1600_to_1612k75_0k05_SNA
 *   HPRS_DsrdPwr of type c16_Kw_m1600_to_1612k75_0k05_SNA
 *   HV_FCActvDischrg_Req_CPC of type c02_Disable_Enable
 *   HV_FcCont_Rels of type c02_HV_FcCont_Rels
 *   IsoMonDCLce_Rq of type c02_Disable_Enable
 *   IsoMonHVB_Rq of type c02_Disable_Enable
 *   MWCU_IsoMon_Rq of type c02_Disable_Enable
 *   PTIce1CmdSpd_Req of type c16_rpm_m16000_to_16000_0k5
 *   PTIce1MaxTrq_Req of type c16_Nm_m5000_to_p5000_0k2
 *   PTIce1MinTrq_Req of type c16_Nm_m5000_to_p5000_0k2
 *   PTIce2CmdSpd_Req of type c16_rpm_m16000_to_16000_0k5
 *   PTIce2MaxTrq_Req of type c16_Nm_m5000_to_p5000_0k2
 *   PTIce2MinTrq_Req of type c16_Nm_m5000_to_p5000_0k2
 *   Rsrv2_CPC6_C06_AR5 of type Rsrv04
 *   SQC_SG_CPC6_C06_AR5 of type c08_0_to_255_1_SNA_na
 *   THM_InvCoolntVolFlw_Cval of type c08_l_p_min_0_to_25_0k1
 *   THM_MotCoolntVolFlw_Cval of type c08_l_p_min_0_to_25_0k1
 *   THM_PTIce1MotOilVolFlw_Cval of type c08_l_p_min_0_to_25_0k1
 *   THM_PTIce2MotOilVolFlw_Cval of type c08_l_p_min_0_to_25_0k1
 * REC_SG_CPC6_C06_AR5_ulcxeouja3rnfon8plrygyca: Record with elements
 *   ActvDischrgCmd_Rq_BRCce of type c02_Disable_Enable
 *   ActvDischrgCmd_Rq_DCLce of type c02_Disable_Enable
 *   ActvDischrgCmd_Rq_PTIce1 of type c02_Disable_Enable
 *   ActvDischrgCmd_Rq_PTIce2 of type c02_Disable_Enable
 *   CmdTrq_Req_PTIce1 of type c16_Nm_m5000_to_p5000_0k2
 *   CmdTrq_Req_PTIce2 of type c16_Nm_m5000_to_p5000_0k2
 *   CRC_SG_CPC6_C06_AR5 of type c016_CRC_woSNA
 *   CtrlMd_Req_PTIce1 of type c04_ActlCtrlMode
 *   CtrlMd_Req_PTIce2 of type c04_ActlCtrlMode
 *   DCCB1_IsoMon_Rq of type c02_Disable_Enable
 *   FC_Pwr_Req_CPC of type c16_Kw_m1600_to_1612k75_0k05_SNA
 *   HPRS_DsrdPwr of type c16_Kw_m1600_to_1612k75_0k05_SNA
 *   HV_FCActvDischrg_Req_CPC of type c02_Disable_Enable
 *   HV_FcCont_Rels of type c02_HV_FcCont_Rels
 *   IsoMonDCLce_Rq of type c02_Disable_Enable
 *   IsoMonHVB_Rq of type c02_Disable_Enable
 *   MWCU_IsoMon_Rq of type c02_Disable_Enable
 *   PTIce1CmdSpd_Req of type c16_rpm_m16000_to_16000_0k5
 *   PTIce1MaxTrq_Req of type c16_Nm_m5000_to_p5000_0k2
 *   PTIce1MinTrq_Req of type c16_Nm_m5000_to_p5000_0k2
 *   PTIce2CmdSpd_Req of type c16_rpm_m16000_to_16000_0k5
 *   PTIce2MaxTrq_Req of type c16_Nm_m5000_to_p5000_0k2
 *   PTIce2MinTrq_Req of type c16_Nm_m5000_to_p5000_0k2
 *   Rsrv2_CPC6_C06_AR5 of type Rsrv04
 *   SQC_SG_CPC6_C06_AR5 of type c08_0_to_255_1_SNA_na
 *   THM_InvCoolntVolFlw_Cval of type c08_l_p_min_0_to_25_0k1
 *   THM_MotCoolntVolFlw_Cval of type c08_l_p_min_0_to_25_0k1
 *   THM_PTIce1MotOilVolFlw_Cval of type c08_l_p_min_0_to_25_0k1
 *   THM_PTIce2MotOilVolFlw_Cval of type c08_l_p_min_0_to_25_0k1
 * REC_SG_CPC6_C11_AR5: Record with elements
 *   ActvDischrgCmd_Rq_EPTO of type c02_Disable_Enable_Res
 *   BodyCoupConn_Stat of type c04_ChrgCoupConn_Stat
 *   CRC_SG_CPC6_C11_AR5 of type c016_CRC_woSNA
 *   EPTO_EMGYShutdn_Rq of type c02_True_False
 *   HV_KL30cRel_Req of type c02_NRQ_RQ_ERR_SNA
 *   Md_Rq_EPTO of type c04_Mode_Rq
 *   SQC_SG_CPC6_C11_AR5 of type c08_0_to_255_1_SNA_na
 *   THM_FrFanDischrg_Rq of type c02_NACT_ACTIVE_ERR
 * REC_SG_CPC6_C11_AR5_dgfi1nrxtb0voy6rb7ybeonmv: Record with elements
 *   ActvDischrgCmd_Rq_EPTO of type c02_Disable_Enable_Res
 *   BodyCoupConn_Stat of type c04_ChrgCoupConn_Stat
 *   CRC_SG_CPC6_C11_AR5 of type c016_CRC_woSNA
 *   EPTO_EMGYShutdn_Rq of type c02_True_False
 *   HV_KL30cRel_Req of type c02_NRQ_RQ_ERR_SNA
 *   Md_Rq_EPTO of type c04_Mode_Rq
 *   SQC_SG_CPC6_C11_AR5 of type c08_0_to_255_1_SNA_na
 *   THM_FrFanDischrg_Rq of type c02_NACT_ACTIVE_ERR
 * REC_SG_CPC6_C16_AR5: Record with elements
 *   CCS_ChrgCntrl of type c04_ChrgCntrl
 *   CCS_ChrgCntrl2 of type c04_ChrgCntrl
 *   CCS_ChrgCntrl3 of type c04_ChrgCntrl
 *   ChrgCoupUnlk_DC_Rq of type c02_Idle_Unlk_Lk_SNA
 *   ChrgCoupUnlk_DC_Rq2 of type c02_Idle_Unlk_Lk_SNA
 *   ChrgCoupUnlk_DC_Rq3 of type c02_Idle_Unlk_Lk_SNA
 *   CRC_SG_CPC6_C16_AR5 of type c016_CRC_woSNA
 *   HVDC_Curr_Rqst of type c16_A_m3250_to_3250_0k1
 *   HVDC_Curr_Rqst2 of type c16_A_m3250_to_3250_0k1
 *   HVDC_Curr_Rqst3 of type c16_A_m3250_to_3250_0k1
 *   HVDC_Volt_Rq of type c16_V_0_1638k2_0k1
 *   HVDC_Volt_Rq2 of type c16_V_0_1638k2_0k1
 *   HVDC_Volt_Rq3 of type c16_V_0_1638k2_0k1
 *   Md_Rq_EVCC of type c04_Mode_Rq
 *   Md_Rq_EVCC2 of type c04_Mode_Rq
 *   Md_Rq_EVCC3 of type c04_Mode_Rq
 *   Rsrv1_CPC6_C16_AR5 of type cvRsrv02
 *   SQC_SG_CPC6_C16_AR5 of type c08_0_to_255_1_SNA_na
 * REC_SG_CPC6_C16_AR5_1hpstplriukdblrgry0860d7o: Record with elements
 *   CCS_ChrgCntrl of type c04_ChrgCntrl
 *   CCS_ChrgCntrl2 of type c04_ChrgCntrl
 *   CCS_ChrgCntrl3 of type c04_ChrgCntrl
 *   ChrgCoupUnlk_DC_Rq of type c02_Idle_Unlk_Lk_SNA
 *   ChrgCoupUnlk_DC_Rq2 of type c02_Idle_Unlk_Lk_SNA
 *   ChrgCoupUnlk_DC_Rq3 of type c02_Idle_Unlk_Lk_SNA
 *   CRC_SG_CPC6_C16_AR5 of type c016_CRC_woSNA
 *   HVDC_Curr_Rqst of type c16_A_m3250_to_3250_0k1
 *   HVDC_Curr_Rqst2 of type c16_A_m3250_to_3250_0k1
 *   HVDC_Curr_Rqst3 of type c16_A_m3250_to_3250_0k1
 *   HVDC_Volt_Rq of type c16_V_0_1638k2_0k1
 *   HVDC_Volt_Rq2 of type c16_V_0_1638k2_0k1
 *   HVDC_Volt_Rq3 of type c16_V_0_1638k2_0k1
 *   Md_Rq_EVCC of type c04_Mode_Rq
 *   Md_Rq_EVCC2 of type c04_Mode_Rq
 *   Md_Rq_EVCC3 of type c04_Mode_Rq
 *   Rsrv1_CPC6_C16_AR5 of type cvRsrv02
 *   SQC_SG_CPC6_C16_AR5 of type c08_0_to_255_1_SNA_na
 * REC_SG_CPC6_C22_AR5: Record with elements
 *   CRC_SG_CPC6_C22_AR5 of type c016_CRC_woSNA
 *   DCCB1_IsoQuickTest_Rq of type cDT_02_NRQ_RQ_Res_SNA
 *   MWCU_IsoQuickTest_Rq of type cDT_02_NRQ_RQ_Res_SNA
 *   Rsrv1_CPC6_C22_AR5 of type Rsrv04
 *   SQC_SG_CPC6_C22_AR5 of type c08_0_to_255_1_SNA_na
 * REC_SG_CPC6_C22_AR5_cp6wyrd9cg7ec7y2w3khz1gyt: Record with elements
 *   CRC_SG_CPC6_C22_AR5 of type c016_CRC_woSNA
 *   DCCB1_IsoQuickTest_Rq of type cDT_02_NRQ_RQ_Res_SNA
 *   MWCU_IsoQuickTest_Rq of type cDT_02_NRQ_RQ_Res_SNA
 *   Rsrv1_CPC6_C22_AR5 of type Rsrv04
 *   SQC_SG_CPC6_C22_AR5 of type c08_0_to_255_1_SNA_na
 * REC_SG_DCCB1_C01_AR5: Record with elements
 *   ChaSw_EnergyRq_DCCB1 of type c02_open_closed_res
 *   ChaSw_Err_DCCB1 of type c02_ContactorErr
 *   ChaSw_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   CRC_SG_DCCB1_C01_AR5 of type c016_CRC_woSNA
 *   Flt_Stat_DCCB1 of type c02_ndef_false_true
 *   HVIL_EVSEside_Stat_DCCB1 of type c02_Open_Close_Err_SNA
 *   HVIL_Loop1_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   HVIL_Loop2_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   HVIL_Loop3_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   HVIL_VehSide_Stat_DCCB1 of type c02_Open_Close_Err_SNA
 *   IsoMon_Stat_DCCB1 of type c04_IsoMon_Status
 *   IsoRes_HVNeg_Cval_DCCB1 of type c16_kOhm_0b64k255M_1_NoMeas
 *   IsoRes_HVPos_Cval_DCCB1 of type c16_kOhm_0b64k255M_1_NoMeas
 *   KL30c_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   Md_Stat_DCCB1 of type c02_LowPwr_Stdby_Actv
 *   Rsrv3_DCCB1_C01_AR5 of type Rsrv01
 *   Rsrv4_DCCB1_C01_AR5 of type Rsrv01
 *   SQC_SG_DCCB1_C01_AR5 of type c08_0_to_255_1_SNA_na
 *   Temp_Cval_DCCB1 of type c12_degC_m50_200_0d1
 * REC_SG_DCCB1_C01_AR5_wcyc4oh3vv82se49oenjus1n: Record with elements
 *   ChaSw_EnergyRq_DCCB1 of type c02_open_closed_res
 *   ChaSw_Err_DCCB1 of type c02_ContactorErr
 *   ChaSw_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   CRC_SG_DCCB1_C01_AR5 of type c016_CRC_woSNA
 *   Flt_Stat_DCCB1 of type c02_ndef_false_true
 *   HVIL_EVSEside_Stat_DCCB1 of type c02_Open_Close_Err_SNA
 *   HVIL_Loop1_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   HVIL_Loop2_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   HVIL_Loop3_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   HVIL_VehSide_Stat_DCCB1 of type c02_Open_Close_Err_SNA
 *   IsoMon_Stat_DCCB1 of type c04_IsoMon_Status
 *   IsoRes_HVNeg_Cval_DCCB1 of type c16_kOhm_0b64k255M_1_NoMeas
 *   IsoRes_HVPos_Cval_DCCB1 of type c16_kOhm_0b64k255M_1_NoMeas
 *   KL30c_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   Md_Stat_DCCB1 of type c02_LowPwr_Stdby_Actv
 *   Rsrv3_DCCB1_C01_AR5 of type Rsrv01
 *   Rsrv4_DCCB1_C01_AR5 of type Rsrv01
 *   SQC_SG_DCCB1_C01_AR5 of type c08_0_to_255_1_SNA_na
 *   Temp_Cval_DCCB1 of type c12_degC_m50_200_0d1
 * REC_SG_DCCB1_C02_AR5: Record with elements
 *   ChaPath_ShrtCrc_DCCB1 of type c02_ShortDet_NoShort
 *   CRC_SG_DCCB1_C02_AR5 of type c016_CRC_woSNA
 *   EVSEside_Volt_Cval_DCCB1 of type c16_V_0_to_3212k75_0k05
 *   HVDC_Curr_Actl_DCCB1 of type c16_A_m1600_to_1612k75_0k05_SNA
 *   HVDC_MaxCurrLim_DCCB1 of type c16_A_m1600_to_1612k75_0k05_SNA
 *   Rsrv1_DCCB1_C02_AR5 of type Rsrv06
 *   SQC_SG_DCCB1_C02_AR5 of type c08_0_to_255_1_SNA_na
 *   VehSide_Volt_Cval_DCCB1 of type c16_V_0_to_3212k75_0k05
 * REC_SG_DCCB1_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv: Record with elements
 *   ChaPath_ShrtCrc_DCCB1 of type c02_ShortDet_NoShort
 *   CRC_SG_DCCB1_C02_AR5 of type c016_CRC_woSNA
 *   EVSEside_Volt_Cval_DCCB1 of type c16_V_0_to_3212k75_0k05
 *   HVDC_Curr_Actl_DCCB1 of type c16_A_m1600_to_1612k75_0k05_SNA
 *   HVDC_MaxCurrLim_DCCB1 of type c16_A_m1600_to_1612k75_0k05_SNA
 *   Rsrv1_DCCB1_C02_AR5 of type Rsrv06
 *   SQC_SG_DCCB1_C02_AR5 of type c08_0_to_255_1_SNA_na
 *   VehSide_Volt_Cval_DCCB1 of type c16_V_0_to_3212k75_0k05
 * REC_SG_DCCB2_C01_AR5: Record with elements
 *   ChaSw_EnergyRq_DCCB2 of type c02_open_closed_res
 *   ChaSw_Err_DCCB2 of type c02_ContactorErr
 *   ChaSw_Stat_DCCB2 of type c02_Open_Closed_Err_SNA
 *   CRC_SG_DCCB2_C01_AR5 of type c016_CRC_woSNA
 *   Flt_Stat_DCCB2 of type c02_ndef_false_true
 *   HVIL_EVSEside_Stat_DCCB2 of type c02_Open_Close_Err_SNA
 *   HVIL_VehSide_Stat_DCCB2 of type c02_Open_Close_Err_SNA
 *   KL30c_Stat_DCCB2 of type c02_Open_Closed_Err_SNA
 *   Md_Stat_DCCB2 of type c02_LowPwr_Stdby_Actv
 *   Rsrv1_DCCB2_C01_AR5 of type cvRsrv02
 *   Rsrv2_DCCB2_C01_AR5 of type Rsrv06
 *   Rsrv3_DCCB2_C01_AR5 of type Rsrv04
 *   SQC_SG_DCCB2_C01_AR5 of type c08_0_to_255_1_SNA_na
 *   Temp_Cval_DCCB2 of type c12_degC_m50_200_0d1
 * REC_SG_DCCB2_C01_AR5_a2qglp2324znbwefnu92uartf: Record with elements
 *   ChaSw_EnergyRq_DCCB2 of type c02_open_closed_res
 *   ChaSw_Err_DCCB2 of type c02_ContactorErr
 *   ChaSw_Stat_DCCB2 of type c02_Open_Closed_Err_SNA
 *   CRC_SG_DCCB2_C01_AR5 of type c016_CRC_woSNA
 *   Flt_Stat_DCCB2 of type c02_ndef_false_true
 *   HVIL_EVSEside_Stat_DCCB2 of type c02_Open_Close_Err_SNA
 *   HVIL_VehSide_Stat_DCCB2 of type c02_Open_Close_Err_SNA
 *   KL30c_Stat_DCCB2 of type c02_Open_Closed_Err_SNA
 *   Md_Stat_DCCB2 of type c02_LowPwr_Stdby_Actv
 *   Rsrv1_DCCB2_C01_AR5 of type cvRsrv02
 *   Rsrv2_DCCB2_C01_AR5 of type Rsrv06
 *   Rsrv3_DCCB2_C01_AR5 of type Rsrv04
 *   SQC_SG_DCCB2_C01_AR5 of type c08_0_to_255_1_SNA_na
 *   Temp_Cval_DCCB2 of type c12_degC_m50_200_0d1
 * REC_SG_DCCB2_C02_AR5: Record with elements
 *   ChaPath_ShrtCrc_DCCB2 of type c02_ShortDet_NoShort
 *   CRC_SG_DCCB2_C02_AR5 of type c016_CRC_woSNA
 *   EVSEside_Volt_Cval_DCCB2 of type c16_V_0_to_3212k75_0k05
 *   HVDC_Curr_Actl_DCCB2 of type c16_A_m1600_to_1612k75_0k05_SNA
 *   HVDC_MaxCurrLim_DCCB2 of type c16_A_m1600_to_1612k75_0k05_SNA
 *   Rsrv1_DCCB2_C02_AR5 of type Rsrv06
 *   SQC_SG_DCCB2_C02_AR5 of type c08_0_to_255_1_SNA_na
 *   VehSide_Volt_Cval_DCCB2 of type c16_V_0_to_3212k75_0k05
 * REC_SG_DCCB2_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv: Record with elements
 *   ChaPath_ShrtCrc_DCCB2 of type c02_ShortDet_NoShort
 *   CRC_SG_DCCB2_C02_AR5 of type c016_CRC_woSNA
 *   EVSEside_Volt_Cval_DCCB2 of type c16_V_0_to_3212k75_0k05
 *   HVDC_Curr_Actl_DCCB2 of type c16_A_m1600_to_1612k75_0k05_SNA
 *   HVDC_MaxCurrLim_DCCB2 of type c16_A_m1600_to_1612k75_0k05_SNA
 *   Rsrv1_DCCB2_C02_AR5 of type Rsrv06
 *   SQC_SG_DCCB2_C02_AR5 of type c08_0_to_255_1_SNA_na
 *   VehSide_Volt_Cval_DCCB2 of type c16_V_0_to_3212k75_0k05
 * REC_SG_DM_Pkt_DCCB1: Record with elements
 *   DTC_AWL_Flash_Stat_DCCB1 of type c02_IndLmpFlash
 *   DTC_AWL_Stat_DCCB1 of type c02_IndLmp
 *   DTC_MIL_Flash_Stat_DCCB1 of type c02_IndLmpFlash
 *   DTC_MIL_Stat_DCCB1 of type c02_IndLmp
 *   DTC_OccCnt_DCCB1 of type c01_Count
 *   DTC_PL_Flash_Stat_DCCB1 of type c02_IndLmpFlash
 *   DTC_PL_Stat_DCCB1 of type c02_IndLmp
 *   DTC_RSL_Flash_Stat_DCCB1 of type c02_IndLmpFlash
 *   DTC_RSL_Stat_DCCB1 of type c02_IndLmp
 *   DTC_SPN_ConvMd_DCCB1 of type c01_SPN_ConvMd
 *   DTC_Stat_DCCB1 of type cv24_0_to_16777215_1_SNA_na
 * REC_SG_DM_Pkt_DCCB1_14lojwgkcazelrb438elf5h0j: Record with elements
 *   DTC_AWL_Flash_Stat_DCCB1 of type c02_IndLmpFlash
 *   DTC_AWL_Stat_DCCB1 of type c02_IndLmp
 *   DTC_MIL_Flash_Stat_DCCB1 of type c02_IndLmpFlash
 *   DTC_MIL_Stat_DCCB1 of type c02_IndLmp
 *   DTC_OccCnt_DCCB1 of type c01_Count
 *   DTC_PL_Flash_Stat_DCCB1 of type c02_IndLmpFlash
 *   DTC_PL_Stat_DCCB1 of type c02_IndLmp
 *   DTC_RSL_Flash_Stat_DCCB1 of type c02_IndLmpFlash
 *   DTC_RSL_Stat_DCCB1 of type c02_IndLmp
 *   DTC_SPN_ConvMd_DCCB1 of type c01_SPN_ConvMd
 *   DTC_Stat_DCCB1 of type cv24_0_to_16777215_1_SNA_na
 * REC_SG_DM_Pkt_DCCB2: Record with elements
 *   DTC_AWL_Flash_Stat_DCCB2 of type c02_IndLmpFlash
 *   DTC_AWL_Stat_DCCB2 of type c02_IndLmp
 *   DTC_MIL_Flash_Stat_DCCB2 of type c02_IndLmpFlash
 *   DTC_MIL_Stat_DCCB2 of type c02_IndLmp
 *   DTC_OccCnt_DCCB2 of type c01_Count
 *   DTC_PL_Flash_Stat_DCCB2 of type c02_IndLmpFlash
 *   DTC_PL_Stat_DCCB2 of type c02_IndLmp
 *   DTC_RSL_Flash_Stat_DCCB2 of type c02_IndLmpFlash
 *   DTC_RSL_Stat_DCCB2 of type c02_IndLmp
 *   DTC_SPN_ConvMd_DCCB2 of type c01_SPN_ConvMd
 *   DTC_Stat_DCCB2 of type cv24_0_to_16777215_1_SNA_na
 * REC_SG_DM_Pkt_DCCB2_14lojwgkcazelrb438elf5h0j: Record with elements
 *   DTC_AWL_Flash_Stat_DCCB2 of type c02_IndLmpFlash
 *   DTC_AWL_Stat_DCCB2 of type c02_IndLmp
 *   DTC_MIL_Flash_Stat_DCCB2 of type c02_IndLmpFlash
 *   DTC_MIL_Stat_DCCB2 of type c02_IndLmp
 *   DTC_OccCnt_DCCB2 of type c01_Count
 *   DTC_PL_Flash_Stat_DCCB2 of type c02_IndLmpFlash
 *   DTC_PL_Stat_DCCB2 of type c02_IndLmp
 *   DTC_RSL_Flash_Stat_DCCB2 of type c02_IndLmpFlash
 *   DTC_RSL_Stat_DCCB2 of type c02_IndLmp
 *   DTC_SPN_ConvMd_DCCB2 of type c01_SPN_ConvMd
 *   DTC_Stat_DCCB2 of type cv24_0_to_16777215_1_SNA_na
 * REC_SG_EPTOce_C01_AR5: Record with elements
 *   CRC_SG_EPTOce_C01_AR5 of type c016_CRC_woSNA
 *   Flt_Stat_EPTO of type c02_ndef_false_true
 *   KL30c_Stat_EPTO of type c02_Open_Closed_Err_SNA
 *   Md_Stat_EPTO of type c02_LowPwr_Stdby_Actv
 *   Rsrv1_EPTOce_C01_AR5 of type cvRsrv02
 *   Rsrv2_EPTOce_C01_AR5 of type cvRsrv02
 *   Rsrv3_EPTOce_C01_AR5 of type Rsrv04
 *   SQC_SG_EPTOce_C01_AR5 of type c08_0_to_255_1_SNA_na
 *   Sw_EnergyRq_EPTO of type c02_open_closed_res
 *   Sw_Err_EPTO of type c02_ContactorErr
 *   Temp_Cval_ePTO of type c12_degC_m50_200_0d1
 *   VehSide_HVIL_Stat_EPTO of type c02_opn_cls_ndef
 * REC_SG_EPTOce_C01_AR5_1ae8w4ccn5pv3jukyqv8emy5n: Record with elements
 *   CRC_SG_EPTOce_C01_AR5 of type c016_CRC_woSNA
 *   Flt_Stat_EPTO of type c02_ndef_false_true
 *   KL30c_Stat_EPTO of type c02_Open_Closed_Err_SNA
 *   Md_Stat_EPTO of type c02_LowPwr_Stdby_Actv
 *   Rsrv1_EPTOce_C01_AR5 of type cvRsrv02
 *   Rsrv2_EPTOce_C01_AR5 of type cvRsrv02
 *   Rsrv3_EPTOce_C01_AR5 of type Rsrv04
 *   SQC_SG_EPTOce_C01_AR5 of type c08_0_to_255_1_SNA_na
 *   Sw_EnergyRq_EPTO of type c02_open_closed_res
 *   Sw_Err_EPTO of type c02_ContactorErr
 *   Temp_Cval_ePTO of type c12_degC_m50_200_0d1
 *   VehSide_HVIL_Stat_EPTO of type c02_opn_cls_ndef
 * REC_SG_EPTOce_C02_AR5: Record with elements
 *   BodyPath_ShrtCrc_EPTO of type c02_ShortDet_NoShort
 *   BodySideVolt_Cval_EPTO of type c16_V_0_to_3212k75_0k05
 *   CRC_SG_EPTOce_C02_AR5 of type c016_CRC_woSNA
 *   HVDC_Curr_Actl_EPTO of type c16_A_m1600_to_1612k75_0k05_SNA
 *   HVDC_Curr_maxLim_EPTO of type c16_A_m1600_to_1612k75_0k05_SNA
 *   Rsrv1_EPTOce_C02_AR5 of type Rsrv16
 *   Rsrv2_EPTOce_C02_AR5 of type Rsrv06
 *   SQC_SG_EPTOce_C02_AR5 of type c08_0_to_255_1_SNA_na
 * REC_SG_EPTOce_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv: Record with elements
 *   BodyPath_ShrtCrc_EPTO of type c02_ShortDet_NoShort
 *   BodySideVolt_Cval_EPTO of type c16_V_0_to_3212k75_0k05
 *   CRC_SG_EPTOce_C02_AR5 of type c016_CRC_woSNA
 *   HVDC_Curr_Actl_EPTO of type c16_A_m1600_to_1612k75_0k05_SNA
 *   HVDC_Curr_maxLim_EPTO of type c16_A_m1600_to_1612k75_0k05_SNA
 *   Rsrv1_EPTOce_C02_AR5 of type Rsrv16
 *   Rsrv2_EPTOce_C02_AR5 of type Rsrv06
 *   SQC_SG_EPTOce_C02_AR5 of type c08_0_to_255_1_SNA_na
 * REC_SG_EVCC1_C01_AR5: Record with elements
 *   ChrgCoupConn_Stat of type c04_ChrgCoupConn_Stat
 *   ChrgCoupLk_Stat of type c02_Lck_Unlck_NotClr_SNA
 *   CRC_SG_EVCC1_C01_AR5 of type c016_CRC_woSNA
 *   CtrlPilot_DutyRange_Stat of type c04_CtrlPilot_DutyRange_Stat
 *   CtrlPilot_Stat of type c04_EVCC_CtrlPilot_Stat
 *   DC_ChrgFlt_EVCC of type c02_True_False
 *   EmgShutdn_Rq of type c02_True_False
 *   EVSE_Curr_Cval of type c16_A_m3250_to_3250_0k1
 *   EVSE_Flt of type c02_True_False
 *   EVSE_Volt_Cval of type c16_V_0_1638k2_0k1
 *   HVDC_MaxCurrLim_EVCC of type c16_A_m3250_to_3250_0k1
 *   PlugLatch_Stat of type c02_NPsd_Psd_NotAvl_SNA
 *   ProxPilotAmpacity_Stat of type c04_ProxPilotAmpacity
 *   Rsrv1_EVCC1_C01_AR5 of type Rsrv04
 *   Rsrv2_EVCC1_C01_AR5 of type cvRsrv02
 *   Rsrv3_EVCC1_C01_AR5 of type Rsrv16
 *   SQC_SG_EVCC1_C01_AR5 of type c08_0_to_255_1_SNA_na
 * REC_SG_EVCC1_C01_AR5_515fv9hxb5jrzmunrr9r72aqj: Record with elements
 *   ChrgCoupConn_Stat of type c04_ChrgCoupConn_Stat
 *   ChrgCoupLk_Stat of type c02_Lck_Unlck_NotClr_SNA
 *   CRC_SG_EVCC1_C01_AR5 of type c016_CRC_woSNA
 *   CtrlPilot_DutyRange_Stat of type c04_CtrlPilot_DutyRange_Stat
 *   CtrlPilot_Stat of type c04_EVCC_CtrlPilot_Stat
 *   DC_ChrgFlt_EVCC of type c02_True_False
 *   EmgShutdn_Rq of type c02_True_False
 *   EVSE_Curr_Cval of type c16_A_m3250_to_3250_0k1
 *   EVSE_Flt of type c02_True_False
 *   EVSE_Volt_Cval of type c16_V_0_1638k2_0k1
 *   HVDC_MaxCurrLim_EVCC of type c16_A_m3250_to_3250_0k1
 *   PlugLatch_Stat of type c02_NPsd_Psd_NotAvl_SNA
 *   ProxPilotAmpacity_Stat of type c04_ProxPilotAmpacity
 *   Rsrv1_EVCC1_C01_AR5 of type Rsrv04
 *   Rsrv2_EVCC1_C01_AR5 of type cvRsrv02
 *   Rsrv3_EVCC1_C01_AR5 of type Rsrv16
 *   SQC_SG_EVCC1_C01_AR5 of type c08_0_to_255_1_SNA_na
 * REC_SG_EVCC2_C01_AR5: Record with elements
 *   ChrgCoupConn_Stat2 of type c04_ChrgCoupConn_Stat
 *   ChrgCoupLk_Stat2 of type c02_Lck_Unlck_NotClr_SNA
 *   CRC_SG_EVCC2_C01_AR5 of type c016_CRC_woSNA
 *   CtrlPilot_DutyRange_Stat2 of type c04_CtrlPilot_DutyRange_Stat
 *   CtrlPilot_Stat2 of type c04_EVCC_CtrlPilot_Stat
 *   DC_ChrgFlt_EVCC2 of type c02_True_False
 *   EmgShutdn_Rq2 of type c02_True_False
 *   EVSE_Curr_Cval2 of type c16_A_m3250_to_3250_0k1
 *   EVSE_Flt2 of type c02_True_False
 *   EVSE_Volt_Cval2 of type c16_V_0_1638k2_0k1
 *   HVDC_MaxCurrLim_EVCC2 of type c16_A_m3250_to_3250_0k1
 *   PlugLatch_Stat2 of type c02_NPsd_Psd_NotAvl_SNA
 *   ProxPilotAmpacity_Stat2 of type c04_ProxPilotAmpacity
 *   Rsrv1_EVCC2_C01_AR5 of type Rsrv04
 *   Rsrv2_EVCC2_C01_AR5 of type cvRsrv02
 *   Rsrv3_EVCC2_C01_AR5 of type Rsrv16
 *   SQC_SG_EVCC2_C01_AR5 of type c08_0_to_255_1_SNA_na
 * REC_SG_EVCC2_C01_AR5_515fv9hxb5jrzmunrr9r72aqj: Record with elements
 *   ChrgCoupConn_Stat2 of type c04_ChrgCoupConn_Stat
 *   ChrgCoupLk_Stat2 of type c02_Lck_Unlck_NotClr_SNA
 *   CRC_SG_EVCC2_C01_AR5 of type c016_CRC_woSNA
 *   CtrlPilot_DutyRange_Stat2 of type c04_CtrlPilot_DutyRange_Stat
 *   CtrlPilot_Stat2 of type c04_EVCC_CtrlPilot_Stat
 *   DC_ChrgFlt_EVCC2 of type c02_True_False
 *   EmgShutdn_Rq2 of type c02_True_False
 *   EVSE_Curr_Cval2 of type c16_A_m3250_to_3250_0k1
 *   EVSE_Flt2 of type c02_True_False
 *   EVSE_Volt_Cval2 of type c16_V_0_1638k2_0k1
 *   HVDC_MaxCurrLim_EVCC2 of type c16_A_m3250_to_3250_0k1
 *   PlugLatch_Stat2 of type c02_NPsd_Psd_NotAvl_SNA
 *   ProxPilotAmpacity_Stat2 of type c04_ProxPilotAmpacity
 *   Rsrv1_EVCC2_C01_AR5 of type Rsrv04
 *   Rsrv2_EVCC2_C01_AR5 of type cvRsrv02
 *   Rsrv3_EVCC2_C01_AR5 of type Rsrv16
 *   SQC_SG_EVCC2_C01_AR5 of type c08_0_to_255_1_SNA_na
 * REC_SG_GPM1H1_XMC_AR2: Record with elements
 *   BodySide_HVIL_Stat_EPTO of type c02_Open_Closed_Err_SNA
 *   CRC_SG_GPM1H1_XMC_AR2 of type cv08_CRC_woSNA
 *   EPTO_Sw_Stat of type c02_BatContState
 *   Rsrv1_GPM1H1_XMC of type Rsrv08
 *   Rsrv2_GPM1H1_XMC of type Rsrv08
 *   Rsrv3_GPM1H1_XMC of type Rsrv08
 *   Rsrv4_GPM1H1_XMC of type Rsrv08
 *   SQC_SG_GPM1H1_XMC_AR2 of type c04_0_to_15_1_SNA_na
 *   VehSideVolt_Cval_EPTO of type c16_V_0_to_3212k75_0k05
 * REC_SG_GPM1H1_XMC_AR2_1lbtoaaebi5n2qvdq20f1phhd: Record with elements
 *   BodySide_HVIL_Stat_EPTO of type c02_Open_Closed_Err_SNA
 *   CRC_SG_GPM1H1_XMC_AR2 of type cv08_CRC_woSNA
 *   EPTO_Sw_Stat of type c02_BatContState
 *   Rsrv1_GPM1H1_XMC of type Rsrv08
 *   Rsrv2_GPM1H1_XMC of type Rsrv08
 *   Rsrv3_GPM1H1_XMC of type Rsrv08
 *   Rsrv4_GPM1H1_XMC of type Rsrv08
 *   SQC_SG_GPM1H1_XMC_AR2 of type c04_0_to_15_1_SNA_na
 *   VehSideVolt_Cval_EPTO of type c16_V_0_to_3212k75_0k05
 * REC_SG_IgnSw_E2E_SAM_Stat_Pkt: Record with elements
 *   CRC_SG_IgnSw_E2E_SAM_Stat_Pkt of type cv08_CRC_woSNA
 *   IgnSw_Stat_E2E_SAM of type c04_IgnSw_Stat
 *   SQC_SG_IgnSw_E2E_SAM_Stat_Pkt of type c04_0_to_15_1_SNA_na
 * REC_SG_IgnSw_E2E_SAM_Stat_Pkt_9t50popkpz30is106xpis1iyh: Record with elements
 *   IgnSw_Stat_E2E_SAM of type c04_IgnSw_Stat
 * REC_SG_LocalTimeOffset_ICUC: Record with elements
 *   LocalHourOffset_Cval_ICUC of type c08_offset_hour_m23_to_p23_1
 *   LocalMinuteOffset_Cval_ICUC of type c08_offset_min_m59_to_p59_1
 * REC_SG_LocalTimeOffset_ICUC_71njeubj9ico1p8v4pmslfcno: Record with elements
 *   LocalHourOffset_Cval_ICUC of type c08_offset_hour_m23_to_p23_1
 *   LocalMinuteOffset_Cval_ICUC of type c08_offset_min_m59_to_p59_1
 * REC_SG_TPCM_DCCB1: Record with elements
 *   CtrlByte_Stat_DCCB1 of type c08_CtrlByte
 *   PGN_Cval_DCCB1 of type c24_PGN
 *   TotalMsgSizeBAM_Cval_DCCB1 of type c16_0_to_64255_BAM
 *   TotalNumOfPktBAM_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 * REC_SG_TPCM_DCCB1_euk2owpx15avykqntci714wbp: Record with elements
 *   CtrlByte_Stat_DCCB1 of type c08_CtrlByte
 *   PGN_Cval_DCCB1 of type c24_PGN
 *   TotalMsgSizeBAM_Cval_DCCB1 of type c16_0_to_64255_BAM
 *   TotalNumOfPktBAM_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 * REC_SG_TPCM_DCCB2: Record with elements
 *   CtrlByte_Stat_DCCB2 of type c08_CtrlByte
 *   PGN_Cval_DCCB2 of type c24_PGN
 *   TotalMsgSizeBAM_Cval_DCCB2 of type c16_0_to_64255_BAM
 *   TotalNumOfPktBAM_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 * REC_SG_TPCM_DCCB2_euk2owpx15avykqntci714wbp: Record with elements
 *   CtrlByte_Stat_DCCB2 of type c08_CtrlByte
 *   PGN_Cval_DCCB2 of type c24_PGN
 *   TotalMsgSizeBAM_Cval_DCCB2 of type c16_0_to_64255_BAM
 *   TotalNumOfPktBAM_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 * REC_SG_TPDT_DCCB1: Record with elements
 *   Data2_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 *   Data3_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 *   Data4_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 *   Data5_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 *   Data6_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 *   Data7_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 *   Data_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 *   SequenceNum_Cval_DCCB1 of type c08_0_to_250_1
 * REC_SG_TPDT_DCCB1_dgfi1nrxtb0voy6rb7ybeonmv: Record with elements
 *   Data2_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 *   Data3_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 *   Data4_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 *   Data5_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 *   Data6_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 *   Data7_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 *   Data_Cval_DCCB1 of type cv08_0_to_255_1_SNA_na
 *   SequenceNum_Cval_DCCB1 of type c08_0_to_250_1
 * REC_SG_TPDT_DCCB2: Record with elements
 *   Data2_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 *   Data3_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 *   Data4_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 *   Data5_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 *   Data6_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 *   Data7_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 *   Data_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 *   SequenceNum_Cval_DCCB2 of type c08_0_to_250_1
 * REC_SG_TPDT_DCCB2_dgfi1nrxtb0voy6rb7ybeonmv: Record with elements
 *   Data2_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 *   Data3_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 *   Data4_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 *   Data5_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 *   Data6_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 *   Data7_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 *   Data_Cval_DCCB2 of type cv08_0_to_255_1_SNA_na
 *   SequenceNum_Cval_DCCB2 of type c08_0_to_250_1
 * REC_SG_Time_Cval_ICUC: Record with elements
 *   DateTmDay_Cval_ICUC of type c08_Days_0_to_62k5_0k25
 *   DateTmHour_Cval_ICUC of type c08_h_0_to_250_1
 *   DateTmMinute_Cval_ICUC of type c08_min_0_to_250_1
 *   DateTmMonth_Cval_ICUC of type c08_Months_1_to_12_1
 *   DateTmSecond_Cval_ICUC of type c08_s_0_to_59k75_0k25
 *   DateTmYear_Cval_ICUC of type c08_Years_1985_to_2235_1
 * REC_SG_Time_Cval_ICUC_7gfvmgxwv1gpmw8c3khdl41nw: Record with elements
 *   DateTmDay_Cval_ICUC of type c08_Days_0_to_62k5_0k25
 *   DateTmHour_Cval_ICUC of type c08_h_0_to_250_1
 *   DateTmMinute_Cval_ICUC of type c08_min_0_to_250_1
 *   DateTmMonth_Cval_ICUC of type c08_Months_1_to_12_1
 *   DateTmSecond_Cval_ICUC of type c08_s_0_to_59k75_0k25
 *   DateTmYear_Cval_ICUC of type c08_Years_1985_to_2235_1
 * signalGrp_CPC6_C02: Record with elements
 *   AntiJerkCtrlEnbl_PTIce1 of type c02_Disable_Enable_Err
 *   AntiJerkCtrlEnbl_PTIce2 of type c02_Disable_Enable_Err
 *   AntiJerkCtrlKp_PTIce1 of type c16_0_80_0d03125
 *   AntiJerkCtrlKp_PTIce2 of type c16_0_80_0d03125
 *   AntiJerkCtrlThrld_PTIce1 of type c08_Nm_0_10_0d0625
 *   AntiJerkCtrlThrld_PTIce2 of type c08_Nm_0_10_0d0625
 *   CCS_EV_ErrorCode of type c04_EV_ErrorCode
 *   Chrg_Stat of type c02_NotChrg_Chrg_Res
 *   ChrgLED_Rq of type c04_ChrgLED_Rq
 *   DCCB1_ChaSw_Rq of type c02_Open_Close_Err_SNA
 *   EdrvInTemp_Cval of type c16_C_m273_to_1735_0k03125_Typ
 *   EdrvOutTemp_Cval of type c16_C_m273_to_1735_0k03125_Typ
 *   EPTO_Sw_Rq of type c02_swrq_off_on_invld_sna
 *   HV_IntegrityChk_Rq of type c02_NotRq_Rq
 *   HV_Stat_CPC of type c02_NACT_ACT_ERR_SNA
 *   HVB_Sw_Rq of type c02_swrq_off_on_invld_sna
 *   IsoQuickTest_Rq_DCLce of type c02_NRQ_RQ_ERR_SNA
 *   PreChrg_Stage1_Rq of type c02_Disable_Enable
 *   PreChrg_Stage2_Rq of type c02_Disable_Enable
 *   PreChrgVolt_Rq_DCLce of type c16_V_0_to_3212k75_0k05
 *   PTIce1SpdCtrlKi of type c16_0_to_10_0k0004882813
 *   PTIce1SpdCtrlKp of type c16_0_to_0k5_0k0000152588
 *   PTIce2SpdCtrlKi of type c16_0_to_10_0k0004882813
 *   PTIce2SpdCtrlKp of type c16_0_to_0k5_0k0000152588
 *   SemiConductorSw_Rq of type c02_Inact_Act_Res
 *   THM_PTIce1MotOilInTemp_Cval of type c16_C_m273_to_1735_0k03125_Typ
 *   THM_PTIce2MotOilInTemp_Cval of type c16_C_m273_to_1735_0k03125_Typ
 * signalGrp_CPC6_C02_old: Record with elements
 *   CCS_EV_ErrorCode of type c04_EV_ErrorCode
 *   Chrg_Stat of type c02_NotChrg_Chrg_Res
 *   ChrgLED_Rq of type c04_ChrgLED_Rq
 *   DCCB1ChaSw_Rq of type c02_Switch_Rq
 *   EdrvInTemp_Cval of type c16_C_m273_to_1735_0k03125_Typ
 *   EdrvOutTemp_Cval of type c16_C_m273_to_1735_0k03125_Typ
 *   HVB_Sw_Rq of type c02_swrq_off_on_invld_sna
 *   IsoQuickTest_Rq_DCLce of type c02_NRQ_RQ_ERR_SNA
 *   PreChrg_Rq_DCLce of type c02_PreChrg_Rq
 *   PreChrgVolt_Rq_DCLce of type c16_V_0_to_3212k75_0k05
 *   SemiConductorSw_Rq of type c02_Inact_Act_Res
 * signalGrp_CPC6_C06: Record with elements
 *   ActvDischrgCmd_Rq_BRCce of type c02_Disable_Enable
 *   ActvDischrgCmd_Rq_DCLce of type c02_Disable_Enable
 *   ActvDischrgCmd_Rq_FCU of type c02_Disable_Enable
 *   ActvDischrgCmd_Rq_PTIce1 of type c02_Disable_Enable
 *   ActvDischrgCmd_Rq_PTIce2 of type c02_Disable_Enable
 *   CmdTrq_Req_PTIce1 of type c16_Nm_m5000_to_p5000_0k2
 *   CmdTrq_Req_PTIce2 of type c16_Nm_m5000_to_p5000_0k2
 *   CtrlMd_Req_PTIce1 of type c04_ActlCtrlMode
 *   CtrlMd_Req_PTIce2 of type c04_ActlCtrlMode
 *   DCCB1_IsoMon_Rq of type c02_Disable_Enable
 *   FC_Pwr_Req_CPC of type c16_Kw_m1600_to_1612k75_0k05_SNA
 *   HPRS_DsrdPwr of type c16_Kw_m1600_to_1612k75_0k05_SNA
 *   IsoMonDCLce_Rq of type c02_Disable_Enable
 *   IsoMonHVB_Rq of type c02_Disable_Enable
 *   MWCU_IsoMon_Rq of type c02_Disable_Enable
 *   PTIce1CmdSpd_Req of type c16_rpm_m16000_to_16000_0k5
 *   PTIce2CmdSpd_Req of type c16_rpm_m16000_to_16000_0k5
 *   THM_InvCoolntVolFlw_Cval of type c08_l_p_min_0_to_25_0k1
 *   THM_MotCoolntVolFlw_Cval of type c08_l_p_min_0_to_25_0k1
 *   THM_PTIce1MotOilVolFlw_Cval of type c08_l_p_min_0_to_25_0k1
 *   THM_PTIce2MotOilVolFlw_Cval of type c08_l_p_min_0_to_25_0k1
 * signalGrp_CPC6_C11: Record with elements
 *   EPTO_EMGCYShutdn_Rq of type Rte_DT_signalGrp_CPC6_C11_0
 *   HV_KL30cRel_Req of type Rte_DT_signalGrp_CPC6_C11_1
 *   Md_Rq_EPTO of type Rte_DT_signalGrp_CPC6_C11_2
 *   BodyCoupConn_Stat of type Rte_DT_signalGrp_CPC6_C11_3
 *   ActvDischrgCmd_Rq_EPTO of type Rte_DT_signalGrp_CPC6_C11_4
 * signalGrp_CPC6_C16: Record with elements
 *   HVDC_Curr_Rqst of type c16_A_0_4000_0k1
 *   HVDC_Volt_Rq of type c16_V_0_1638k2_0k1_ImpType
 *   Md_Rq_EVCC of type Rte_DT_signalGrp_CPC6_C16_2
 *   CCS_ChrgCntrl of type Rte_DT_signalGrp_CPC6_C16_3
 *   ChrgCoupUnlk_DC_Rq of type Rte_DT_signalGrp_CPC6_C16_4
 *   ChrgCoupUnlk_DC_Rq2 of type Rte_DT_signalGrp_CPC6_C16_5
 *   ChrgCoupUnlk_DC_Rq3 of type Rte_DT_signalGrp_CPC6_C16_6
 *   CCS_ChrgCntrl2 of type Rte_DT_signalGrp_CPC6_C16_7
 *   Md_Rq_EVCC2 of type Rte_DT_signalGrp_CPC6_C16_8
 *   HVDC_Volt_Rq2 of type c16_V_0_1638k2_0k1_ImpType
 *   HVDC_Curr_Rqst2 of type c16_A_0_4000_0k1_ImpType
 *   CCS_ChrgCntrl3 of type Rte_DT_signalGrp_CPC6_C16_11
 *   Md_Rq_EVCC3 of type Rte_DT_signalGrp_CPC6_C16_12
 *   HVDC_Volt_Rq3 of type c16_V_0_1638k2_0k1
 *   HVDC_Curr_Rqst3 of type c16_A_m3250_to_3250_0k1
 * signalGrp_CPC6_C22: Record with elements
 *   DCCB1_IsoQuickTest_Rq of type cDT_02_NRQ_RQ_Res_SNA
 *   MWCU_IsoQuickTest_Rq of type cDT_02_NRQ_RQ_Res_SNA
 * signalGrp_DCCB1_C01: Record with elements
 *   ChaSw_EnergyRq_DCCB1 of type c02_open_closed_res
 *   ChaSw_Err_DCCB1 of type c03_ContactorErr
 *   ChaSw_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   Flt_Stat_DCCB1 of type c02_ndef_false_true
 *   HVIL_EVSEside_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   HVIL_Loop1_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   HVIL_Loop2_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   HVIL_Loop3_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   HVIL_VehSide_Stat_DCCB1 of type c02_Open_Closed_Err_SNA
 *   IsoMon_Stat_DCCB1 of type c04_INACT_ACT_ACTERR_DISENGENG
 *   IsoRes_HVNeg_Cval_DCCB1 of type c16_kOhm_0b64k255M_1_NoMeas
 *   IsoRes_HVPos_Cval_DCCB1 of type c16_kOhm_0b64k255M_1_NoMeas
 *   KL30c_Stat_DCCB1 of type c02_Crash_NoCrash
 *   Md_Stat_DCCB1 of type c02_LowPwr_Stdby_Actv
 *   Temp_Cval_DCCB1 of type c12_degC_m50_200_0d1
 * signalGrp_DCCB2_C01: Record with elements
 *   ChaSw_EnergyRq_DCCB2 of type Rte_DT_signalGrp_DCCB2_C01_0
 *   ChaSw_Err_DCCB2 of type Rte_DT_signalGrp_DCCB2_C01_1
 *   ChaSw_Stat_DCCB2 of type Rte_DT_signalGrp_DCCB2_C01_2
 *   Flt_Stat_DCCB2 of type Rte_DT_signalGrp_DCCB2_C01_3
 *   HVIL_EVSEside_Stat_DCCB2 of type Rte_DT_signalGrp_DCCB2_C01_4
 *   HVIL_VehSide_Stat_DCCB2 of type Rte_DT_signalGrp_DCCB2_C01_5
 *   KL30c_Stat_DCCB2 of type Rte_DT_signalGrp_DCCB2_C01_6
 *   Md_Stat_DCCB2 of type Rte_DT_signalGrp_DCCB2_C01_7
 *   Temp_Cval_DCCB2 of type c12_degC_m50_200_0d1
 * signalGrp_DCCB_C02: Record with elements
 *   ChaPath_ShrtCrc_DCCB1 of type Rte_DT_signalGrp_DCCB_C02_0
 *   EVSEside_Volt_Cval_DCCB1 of type c16_V_0_to_3212k75_0k05_ImpType
 *   HVDC_Curr_Actl_DCCB1 of type c16_A_m1600_to_1612k75_0k05_SNA_ImpType
 *   HVDC_MaxCurrLim_DCCB1 of type c16_A_m1600_to_1612k75_0k05_SNA_ImpType
 *   VehSide_Volt_Cval_DCCB1 of type c16_V_0_to_3212k75_0k05_ImpType
 * signalGrp_DCCB_C03: Record with elements
 *   ChaPath_ShrtCrc_DCCB of type c02_ShortDet_NoShort_ImpType
 *   EVSEside_Volt_Cval_DCCB of type c16_V_0_to_1200_0k1_SNA_ImpType
 *   HVDC_Curr_Actl_DCCB of type c16_A_m600_600_0k1_ImpType
 *   HVDC_MaxCurrLim_DCCB of type c16_A_0_1000_0k1_ImpType
 *   VehSide_Volt_Cval_DCCB of type c16_V_0_to_1200_0k1_SNA_ImpType
 * signalGrp_DccbCddAdcData_ImpType: Record with elements
 *   DccbCddAdcVoltage1 of type DccbCddHvVoltage_ImpType
 *   DccbCddAdcVoltage2 of type DccbCddHvVoltage_ImpType
 *   DccbCddAdcTemp of type DccbCddAdcTemp_ImpType
 * signalGrp_DccbCddContactorStatus_ImpType: Record with elements
 *   DccbPositiveContactorStatus of type DccbCddContactorStatus_ImpType
 *   DccbNegativeContactorStatus of type DccbCddContactorStatus_ImpType
 * signalGrp_DccbCddHvResults_ImpType: Record with elements
 *   DccbCddHvStatusStatus of type DccbCddHvStatus_ImpType
 *   DccbCddHvCounter of type DccbGeneric32BitCounter_ImpType
 *   DccbCddHvVehVoltage of type DccbCddHvVoltage_ImpType
 *   DccbCddHvVehExtVoltage of type DccbCddHvVoltage_ImpType
 *   DccbCddHvLemCurrent of type DccbHvdcCurrent_ImpType
 * signalGrp_DccbCddIShuntData_ImpType: Record with elements
 *   DccbIShuntCurrent of type DccbCddIShuntCurrent_ImpType
 *   DccbIShuntVoltage of type DccbCddIShuntVoltage_ImpType
 *   DccbIShuntSampleCount of type DccbCddIShuntSampleCount_ImpType
 *   DccbIShuntStatus of type DccbCddIShuntStatus_ImpType
 * signalGrp_DccbCddImdResults_ImpType: Record with elements
 *   DccbImdStatus of type DccbCddImdStatus_ImpType
 *   DccbImdPosResistance of type DccbCddImdResistance_ImpType
 *   DccbImdNegResistance of type DccbCddImdResistance_ImpType
 * signalGrp_DccbConSwitchVoltage_ImpType: Record with elements
 *   DccbConSwitchVoltageVehSide of type Rte_DT_signalGrp_DccbConSwitchVoltage_ImpType_0
 *   DccbConSwitchVoltageEvseSide of type Rte_DT_signalGrp_DccbConSwitchVoltage_ImpType_1
 * signalGrp_DccbHvdcCurrent_ImpType: Record with elements
 *   DccbHvdcCurrent of type DccbHvdcCurrent_ImpType
 *   DccbHvdcCurrentCounter of type DccbGenericCounter_ImpType
 * signalGrp_DccbHvilData_ImpType: Record with elements
 *   DccbHvil1HighVoltage of type DccbHvilVoltage_ImpType
 *   DccbHvil1LowVoltage of type DccbHvilVoltage_ImpType
 *   DccbHvil1Current of type DccbHvilCurrent_ImpType
 *   DccbHvil2HighVoltage of type DccbHvilVoltage_ImpType
 *   DccbHvil2LowVoltage of type DccbHvilVoltage_ImpType
 *   DccbHvil2Current of type DccbHvilCurrent_ImpType
 *   DccbHvil3HighVoltage of type DccbHvilVoltage_ImpType
 *   DccbHvil3LowVoltage of type DccbHvilVoltage_ImpType
 *   DccbHvil3Current of type DccbHvilCurrent_ImpType
 *   DccbHvil4HighVoltage of type DccbHvilVoltage_ImpType
 *   DccbHvil4LowVoltage of type DccbHvilVoltage_ImpType
 *   DccbHvil4Current of type DccbHvilCurrent_ImpType
 *   DccbHvilAdc1And2 of type DccbHvilVoltage_ImpType
 *   DccbHvilAdc3And4 of type DccbHvilVoltage_ImpType
 *   DccbHvilVoltageCounter of type DccbGenericCounter_ImpType
 * signalGrp_DccbIsoMonResults_ImpType: Record with elements
 *   DccbIsoMonPosResistance of type DccbIsoMonResistance_ImpType
 *   DccbIsoMonNegResistance of type DccbIsoMonResistance_ImpType
 * signalGrp_DccbKl30Data_ImpType: Record with elements
 *   DccbKl30Voltage of type DccbKl30Voltage_ImpType
 *   DccbKl30Current of type DccbKl30Current_ImpType
 *   DccbKl30DataCounter of type DccbGenericCounter_ImpType
 * signalGrp_DccbKl30cVoltage_ImpType: Record with elements
 *   DccbKl30cVoltage of type DccbKl30cVoltage_ImpType
 *   DccbKl30cVoltageCounter of type DccbGenericCounter_ImpType
 * signalGrp_DccbOffboardTemperatures_ImpType: Record with elements
 *   DccbHvdcPlusContactorTemperature of type DccbOffboardTemperature_ImpType
 *   DccbHvdcNegContactorTemperature of type DccbOffboardTemperature_ImpType
 *   DccbHvdcVehConnTemperature of type DccbOffboardTemperature_ImpType
 *   DccbHvdcExtConnTemperature of type DccbOffboardTemperature_ImpType
 *   DccbHvdcFusePlusTemperature of type DccbOffboardTemperature_ImpType
 *   DccbHvdcFuseNegTemperature of type DccbOffboardTemperature_ImpType
 *   DccbHvdcBusbarTemperature of type DccbOffboardTemperature_ImpType
 *   DccbOffBoardTempVoltage of type DccbOffBoardTempVoltage_ImpType
 *   DccbOffboardTemperatureCounter of type DccbGenericCounter_ImpType
 * signalGrp_DccbOnboardTemperatures_ImpType: Record with elements
 *   DccbIntTemp1 of type DccbOnboardTemperature_ImpType
 *   DccbIntTemp2 of type DccbOnboardTemperature_ImpType
 *   DccbIntTemp3 of type DccbOnboardTemperature_ImpType
 *   DccbIntTemp4 of type DccbOnboardTemperature_ImpType
 *   DccbIntTemp5 of type DccbOnboardTemperature_ImpType
 *   DccbIntTemp6 of type DccbOnboardTemperature_ImpType
 *   DccbIntTemp7 of type DccbOnboardTemperature_ImpType
 *   DccbIntTemp8 of type DccbOnboardTemperature_ImpType
 *   DccbOnboardTemperatureCounter of type DccbGenericCounter_ImpType
 * signalGrp_EPTOce_C01: Record with elements
 *   Sw_EnergyRq_EPTO of type Rte_DT_signalGrp_EPTOce_C01_0
 *   Sw_Err_EPTO of type Rte_DT_signalGrp_EPTOce_C01_1
 *   Flt_Stat_EPTO of type c02_ndef_false_true_ImpType
 *   VehSide_HVIL_Stat_EPTO of type c02_opn_cls_ndef_ImpType
 *   KL30c_Stat_EPTO of type c02_Crash_NoCrash_ImpType
 *   Md_Stat_EPTO of type Rte_DT_signalGrp_EPTOce_C01_5
 *   Temp_Cval_ePTO of type c12_degC_m50_200_0d1
 * signalGrp_EPTOce_C02: Record with elements
 *   BodyPath_ShrtCrc_EPTO of type Rte_DT_signalGrp_EPTOce_C02_0
 *   BodySideVolt_Cval_EPTO of type c16_V_0_to_3212k75_0k05_ImpType
 *   HVDC_Curr_Actl_EPTO of type c16_A_m1600_to_1612k75_0k05_SNA_ImpType
 *   HVDC_CurrmaxLim_EPTO of type c16_A_m1600_to_1612k75_0k05_SNA_ImpType
 * signalGrp_EVCC_C01: Record with elements
 *   ChrgCoupConn_Stat of type c04_ChrgCoupConn_Stat_ImpType
 *   ChrgCoupLk_Stat of type c02_Lck_Unlck_NotClr_SNA_ImpType
 *   PlugLatch_Stat of type c02_NPsd_Psd_NotAvl_SNA_ImpType
 *   CtrlPilot_Stat of type c04_EVCC_CtrlPilot_Stat_ImpType
 *   CtrlPilot_DutyRange_Stat of type c04_CtrlPilot_DutyRange_Stat_ImpType
 *   ProxPilotAmpacity_Stat of type c04_ProxPilotAmpacity_ImpType
 *   AC_ChrgFlt_EVCC of type c02_True_False_ImpType
 *   DC_ChrgFlt_EVCC of type c02_True_False_ImpType
 *   HVAC_MaxCurrLim_EVCC of type c16_A_0_100_0k1_ImpType
 *   HVDC_MaxCurrLim_EVCC of type c16_A_0_1000_0k1_ImpType
 *   EVSE_Flt of type c02_True_False_ImpType
 *   EmgShutdn_Rq of type c02_True_False_ImpType
 *   EVSE_Curr_Cval of type c16_A_0_4000_0k1_ImpType
 *   EVSE_Volt_Cval of type c16_V_0_1638k2_0k1_ImpType
 * signalGrp_GPM1H1_XMC: Record with elements
 *   EPTO_Sw_Stat of type Rte_DT_signalGrp_GPM1H1_XMC_0
 *   BodySide_HVIL_Stat_EPTO of type Rte_DT_signalGrp_GPM1H1_XMC_1
 *   VehSideVolt_Cval_EPTO of type c16_V_0_to_3212k75_0k05_ImpType
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8_SensataImpType *Rte_Pim_DccbComHdlNvm(void)
 *     Returnvalue: uint8_SensataImpType* is of type DccbComHdlNvm_ImpType
 *
 *********************************************************************************************************************/


#define ComHdl_START_SEC_CODE
#include "ComHdl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ComHdl_10ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Receive_ComHdlScaC2_IgnSw_Stat_SCA(c04_IgnSw_Stat *data)
 *   Std_ReturnType Rte_Read_ComHdlBmmC01_HVB_LinkVolt_Cval(c16_V_0_to_3212k75_0k05 *data)
 *   Std_ReturnType Rte_Read_ComHdlCPCC11_SG_CPC6_C11_AR5(REC_SG_CPC6_C11_AR5_dgfi1nrxtb0voy6rb7ybeonmv *data)
 *   Std_ReturnType Rte_Read_ComHdlConSwitchActlState_DccbConSwitchActlState(DccbConSwitchActlState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlConSwitchCurrent_DccbConSwitchCurrent(DccbConSwitchCurrent_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlConSwitchVoltage_DccbConSwitchVoltage(signalGrp_DccbConSwitchVoltage_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC02_SG_CPC6_C02_AR5(REC_SG_CPC6_C02_AR5_5wbdxrp8awtkuts7zyf21170w *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC05_SG_CPC6_C05_AR5(REC_SG_CPC6_C05_AR5_2ahxpf4cam3pi2le1l2woky78 *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC06_SG_CPC6_C06_AR5(REC_SG_CPC6_C06_AR5_ulcxeouja3rnfon8plrygyca *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC16_SG_CPC6_C16_AR5(REC_SG_CPC6_C16_AR5_1hpstplriukdblrgry0860d7o *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC22_SG_CPC6_C22_AR5(REC_SG_CPC6_C22_AR5_cp6wyrd9cg7ec7y2w3khz1gyt *data)
 *   Std_ReturnType Rte_Read_ComHdlEcuVariant_DccbEcuVariant(DccbEcuMode_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlEisC02_IgnSw_Stat_EIS(c04_IgnSw_Stat *data)
 *   Std_ReturnType Rte_Read_ComHdlEnergyRequest_DccbEnergyRequest(DccbEnergyRequest_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlErrorStatus_DccbContactorControlErrorStatus(DccbContactorControlErrorState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlEvccC01_SG_EVCC1_C01_AR5(REC_SG_EVCC1_C01_AR5_515fv9hxb5jrzmunrr9r72aqj *data)
 *   Std_ReturnType Rte_Read_ComHdlFaultDetected_DccbFaultDetected(DccbFaultDetected_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlHvdcMaxCurLim_DccbHvdcMaxCurLim(DccbHvdcMaxCurLim_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlInterlockStateLoop1_DccbInterlockState(DccbInterlockState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlInterlockStateLoop2_DccbInterlockState(DccbInterlockState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlInterlockStateLoop3_DccbInterlockState(DccbInterlockState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlInterlockStateLoop4_DccbInterlockState(DccbInterlockState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlIsoMonResults_DccbIsoMonResults(signalGrp_DccbIsoMonResults_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlIsoMonStatus_DccbIsoMonStatus(DccbIsoMonStatus_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlKl30cStatus_DccbKl30cStatus(DccbKl30cStatus_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlMaxTemperature_DccbMaxTemperature(DccbMaxTemperature_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlModeMgrState_DccbModeMgrState(DccbModeMgrState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlShortCircuitDetected_DccbShortCircuitDetected(DccbShortCircuitDetected_ImpType *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Send_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2(const signalGrp_GPM1H1_XMC *data)
 *   Std_ReturnType Rte_Write_ComHdlActiveDischargeCmd_DccbActiveDischargeCmd(DccbActiveDischargeCmd_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlCanCommStatus_DccbCanCommStatus(DccbCanCommStatus_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlChargeCouplerConnectorStatus_DccbChargeCouplerConnectorStatus(DccbChargeCouplerConnectorStatus_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlChargeRequest_DccbChargeRequest(DccbChargeRequest_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlConSwitchRequest_DccbConSwitchRequest(DccbConSwitchRequest_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlDccb1C01_SG_DCCB1_C01_AR5(const REC_SG_DCCB1_C01_AR5_wcyc4oh3vv82se49oenjus1n *data)
 *   Std_ReturnType Rte_Write_ComHdlDccb2C01_SG_DCCB2_C01_AR5(const REC_SG_DCCB2_C01_AR5_a2qglp2324znbwefnu92uartf *data)
 *   Std_ReturnType Rte_Write_ComHdlDccbC02_SG_DCCB1_C02_AR5(const REC_SG_DCCB1_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv *data)
 *   Std_ReturnType Rte_Write_ComHdlEmergShutdownRequest_DccbEmergShutdownRequest(DccbEmergShutdownRequest_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlEptoC01_SG_EPTOce_C01_AR5(const REC_SG_EPTOce_C01_AR5_1ae8w4ccn5pv3jukyqv8emy5n *data)
 *   Std_ReturnType Rte_Write_ComHdlEptoC02_SG_EPTOce_C02_AR5(const REC_SG_EPTOce_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv *data)
 *   Std_ReturnType Rte_Write_ComHdlHvbLinkVoltage_DccbHvbLinkVoltage(DccbHvbLinkVoltage_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlIgnitionStatus_DccbIgnitionStatus(DccbIgnitionStatus_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlIsoMonQuickTest_DccbIsoMonQuickTest(DccbIsoMonQuickTest_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlIsoMonReq_DccbIsoMonReq(DccbIsoMonReq_ImpType data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DccbComHdlNvm_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC2_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_DccbComHdlNvm_ReadBlock(dtRef_VOID DstPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC2_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_DccbComHdlNvm_SetRamBlockStatus(boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC2_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_DccbComHdlNvm_WriteBlock(dtRef_const_VOID SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC2_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ComHdl_10ms_doc
 *********************************************************************************************************************/
static REC_SG_DCCB1_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv App_Data;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ComHdl_CODE) ComHdl_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ComHdl_10ms
 *********************************************************************************************************************/

Rte_Write_ComHdlDccbC02_SG_DCCB1_C02_AR5(&App_Data);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ComHdl_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Receive_ComHdlScaC2_IgnSw_Stat_SCA(c04_IgnSw_Stat *data)
 *   Std_ReturnType Rte_Read_ComHdlBmmC01_HVB_LinkVolt_Cval(c16_V_0_to_3212k75_0k05 *data)
 *   Std_ReturnType Rte_Read_ComHdlCPCC11_SG_CPC6_C11_AR5(REC_SG_CPC6_C11_AR5_dgfi1nrxtb0voy6rb7ybeonmv *data)
 *   Std_ReturnType Rte_Read_ComHdlConSwitchActlState_DccbConSwitchActlState(DccbConSwitchActlState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlConSwitchCurrent_DccbConSwitchCurrent(DccbConSwitchCurrent_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlConSwitchVoltage_DccbConSwitchVoltage(signalGrp_DccbConSwitchVoltage_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC02_SG_CPC6_C02_AR5(REC_SG_CPC6_C02_AR5_5wbdxrp8awtkuts7zyf21170w *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC05_SG_CPC6_C05_AR5(REC_SG_CPC6_C05_AR5_2ahxpf4cam3pi2le1l2woky78 *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC06_SG_CPC6_C06_AR5(REC_SG_CPC6_C06_AR5_ulcxeouja3rnfon8plrygyca *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC16_SG_CPC6_C16_AR5(REC_SG_CPC6_C16_AR5_1hpstplriukdblrgry0860d7o *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC22_SG_CPC6_C22_AR5(REC_SG_CPC6_C22_AR5_cp6wyrd9cg7ec7y2w3khz1gyt *data)
 *   Std_ReturnType Rte_Read_ComHdlEcuVariant_DccbEcuVariant(DccbEcuMode_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlEisC02_IgnSw_Stat_EIS(c04_IgnSw_Stat *data)
 *   Std_ReturnType Rte_Read_ComHdlEnergyRequest_DccbEnergyRequest(DccbEnergyRequest_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlErrorStatus_DccbContactorControlErrorStatus(DccbContactorControlErrorState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlEvccC01_SG_EVCC1_C01_AR5(REC_SG_EVCC1_C01_AR5_515fv9hxb5jrzmunrr9r72aqj *data)
 *   Std_ReturnType Rte_Read_ComHdlFaultDetected_DccbFaultDetected(DccbFaultDetected_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlHvdcMaxCurLim_DccbHvdcMaxCurLim(DccbHvdcMaxCurLim_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlInterlockStateLoop1_DccbInterlockState(DccbInterlockState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlInterlockStateLoop2_DccbInterlockState(DccbInterlockState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlInterlockStateLoop3_DccbInterlockState(DccbInterlockState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlInterlockStateLoop4_DccbInterlockState(DccbInterlockState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlIsoMonResults_DccbIsoMonResults(signalGrp_DccbIsoMonResults_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlIsoMonStatus_DccbIsoMonStatus(DccbIsoMonStatus_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlKl30cStatus_DccbKl30cStatus(DccbKl30cStatus_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlMaxTemperature_DccbMaxTemperature(DccbMaxTemperature_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlModeMgrState_DccbModeMgrState(DccbModeMgrState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlShortCircuitDetected_DccbShortCircuitDetected(DccbShortCircuitDetected_ImpType *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Send_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2(const signalGrp_GPM1H1_XMC *data)
 *   Std_ReturnType Rte_Write_ComHdlActiveDischargeCmd_DccbActiveDischargeCmd(DccbActiveDischargeCmd_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlCanCommStatus_DccbCanCommStatus(DccbCanCommStatus_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlChargeCouplerConnectorStatus_DccbChargeCouplerConnectorStatus(DccbChargeCouplerConnectorStatus_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlChargeRequest_DccbChargeRequest(DccbChargeRequest_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlConSwitchRequest_DccbConSwitchRequest(DccbConSwitchRequest_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlDccb1C01_SG_DCCB1_C01_AR5(const REC_SG_DCCB1_C01_AR5_wcyc4oh3vv82se49oenjus1n *data)
 *   Std_ReturnType Rte_Write_ComHdlDccb2C01_SG_DCCB2_C01_AR5(const REC_SG_DCCB2_C01_AR5_a2qglp2324znbwefnu92uartf *data)
 *   Std_ReturnType Rte_Write_ComHdlDccbC02_SG_DCCB1_C02_AR5(const REC_SG_DCCB1_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv *data)
 *   Std_ReturnType Rte_Write_ComHdlEmergShutdownRequest_DccbEmergShutdownRequest(DccbEmergShutdownRequest_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlEptoC01_SG_EPTOce_C01_AR5(const REC_SG_EPTOce_C01_AR5_1ae8w4ccn5pv3jukyqv8emy5n *data)
 *   Std_ReturnType Rte_Write_ComHdlEptoC02_SG_EPTOce_C02_AR5(const REC_SG_EPTOce_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv *data)
 *   Std_ReturnType Rte_Write_ComHdlHvbLinkVoltage_DccbHvbLinkVoltage(DccbHvbLinkVoltage_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlIgnitionStatus_DccbIgnitionStatus(DccbIgnitionStatus_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlIsoMonQuickTest_DccbIsoMonQuickTest(DccbIsoMonQuickTest_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlIsoMonReq_DccbIsoMonReq(DccbIsoMonReq_ImpType data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DccbComHdlNvm_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC2_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_DccbComHdlNvm_ReadBlock(dtRef_VOID DstPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC2_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_DccbComHdlNvm_SetRamBlockStatus(boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC2_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_DccbComHdlNvm_WriteBlock(dtRef_const_VOID SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC2_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ComHdl_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ComHdl_CODE) ComHdl_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ComHdl_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ComHdl_PreInit
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Receive_ComHdlScaC2_IgnSw_Stat_SCA(c04_IgnSw_Stat *data)
 *   Std_ReturnType Rte_Read_ComHdlBmmC01_HVB_LinkVolt_Cval(c16_V_0_to_3212k75_0k05 *data)
 *   Std_ReturnType Rte_Read_ComHdlCPCC11_SG_CPC6_C11_AR5(REC_SG_CPC6_C11_AR5_dgfi1nrxtb0voy6rb7ybeonmv *data)
 *   Std_ReturnType Rte_Read_ComHdlConSwitchActlState_DccbConSwitchActlState(DccbConSwitchActlState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlConSwitchCurrent_DccbConSwitchCurrent(DccbConSwitchCurrent_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlConSwitchVoltage_DccbConSwitchVoltage(signalGrp_DccbConSwitchVoltage_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC02_SG_CPC6_C02_AR5(REC_SG_CPC6_C02_AR5_5wbdxrp8awtkuts7zyf21170w *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC05_SG_CPC6_C05_AR5(REC_SG_CPC6_C05_AR5_2ahxpf4cam3pi2le1l2woky78 *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC06_SG_CPC6_C06_AR5(REC_SG_CPC6_C06_AR5_ulcxeouja3rnfon8plrygyca *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC16_SG_CPC6_C16_AR5(REC_SG_CPC6_C16_AR5_1hpstplriukdblrgry0860d7o *data)
 *   Std_ReturnType Rte_Read_ComHdlCpcC22_SG_CPC6_C22_AR5(REC_SG_CPC6_C22_AR5_cp6wyrd9cg7ec7y2w3khz1gyt *data)
 *   Std_ReturnType Rte_Read_ComHdlEcuVariant_DccbEcuVariant(DccbEcuMode_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlEisC02_IgnSw_Stat_EIS(c04_IgnSw_Stat *data)
 *   Std_ReturnType Rte_Read_ComHdlEnergyRequest_DccbEnergyRequest(DccbEnergyRequest_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlErrorStatus_DccbContactorControlErrorStatus(DccbContactorControlErrorState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlEvccC01_SG_EVCC1_C01_AR5(REC_SG_EVCC1_C01_AR5_515fv9hxb5jrzmunrr9r72aqj *data)
 *   Std_ReturnType Rte_Read_ComHdlFaultDetected_DccbFaultDetected(DccbFaultDetected_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlHvdcMaxCurLim_DccbHvdcMaxCurLim(DccbHvdcMaxCurLim_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlInterlockStateLoop1_DccbInterlockState(DccbInterlockState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlInterlockStateLoop2_DccbInterlockState(DccbInterlockState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlInterlockStateLoop3_DccbInterlockState(DccbInterlockState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlInterlockStateLoop4_DccbInterlockState(DccbInterlockState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlIsoMonResults_DccbIsoMonResults(signalGrp_DccbIsoMonResults_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlIsoMonStatus_DccbIsoMonStatus(DccbIsoMonStatus_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlKl30cStatus_DccbKl30cStatus(DccbKl30cStatus_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlMaxTemperature_DccbMaxTemperature(DccbMaxTemperature_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlModeMgrState_DccbModeMgrState(DccbModeMgrState_ImpType *data)
 *   Std_ReturnType Rte_Read_ComHdlShortCircuitDetected_DccbShortCircuitDetected(DccbShortCircuitDetected_ImpType *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Send_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2(const signalGrp_GPM1H1_XMC *data)
 *   Std_ReturnType Rte_Write_ComHdlActiveDischargeCmd_DccbActiveDischargeCmd(DccbActiveDischargeCmd_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlCanCommStatus_DccbCanCommStatus(DccbCanCommStatus_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlChargeCouplerConnectorStatus_DccbChargeCouplerConnectorStatus(DccbChargeCouplerConnectorStatus_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlChargeRequest_DccbChargeRequest(DccbChargeRequest_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlConSwitchRequest_DccbConSwitchRequest(DccbConSwitchRequest_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlDccb1C01_SG_DCCB1_C01_AR5(const REC_SG_DCCB1_C01_AR5_wcyc4oh3vv82se49oenjus1n *data)
 *   Std_ReturnType Rte_Write_ComHdlDccb2C01_SG_DCCB2_C01_AR5(const REC_SG_DCCB2_C01_AR5_a2qglp2324znbwefnu92uartf *data)
 *   Std_ReturnType Rte_Write_ComHdlDccbC02_SG_DCCB1_C02_AR5(const REC_SG_DCCB1_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv *data)
 *   Std_ReturnType Rte_Write_ComHdlEmergShutdownRequest_DccbEmergShutdownRequest(DccbEmergShutdownRequest_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlEptoC01_SG_EPTOce_C01_AR5(const REC_SG_EPTOce_C01_AR5_1ae8w4ccn5pv3jukyqv8emy5n *data)
 *   Std_ReturnType Rte_Write_ComHdlEptoC02_SG_EPTOce_C02_AR5(const REC_SG_EPTOce_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv *data)
 *   Std_ReturnType Rte_Write_ComHdlHvbLinkVoltage_DccbHvbLinkVoltage(DccbHvbLinkVoltage_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlIgnitionStatus_DccbIgnitionStatus(DccbIgnitionStatus_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlIsoMonQuickTest_DccbIsoMonQuickTest(DccbIsoMonQuickTest_ImpType data)
 *   Std_ReturnType Rte_Write_ComHdlIsoMonReq_DccbIsoMonReq(DccbIsoMonReq_ImpType data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DccbComHdlNvm_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC2_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_DccbComHdlNvm_ReadBlock(dtRef_VOID DstPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC2_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_DccbComHdlNvm_SetRamBlockStatus(boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC2_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_DccbComHdlNvm_WriteBlock(dtRef_const_VOID SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC2_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ComHdl_PreInit_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, ComHdl_CODE) ComHdl_PreInit(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ComHdl_PreInit
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define ComHdl_STOP_SEC_CODE
#include "ComHdl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
