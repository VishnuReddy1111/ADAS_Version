/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Com
 *           Program: MSR_Vector_SLP4
 *          Customer: ClearMotion (UK) Limited
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC375TP
 *    License Scope : The usage is restricted to CBD2300382_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Cot.h
 *   Generation Time: 2024-03-27 16:54:32
 *           Project: StartApplication - Version 1.0
 *          Delivery: CBD2300382_D00
 *      Tool Version: DaVinci Configurator Classic (beta) 5.26.40 SP3
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Classic and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

/**********************************************************************************************************************
 * WARNING: This code has been generated with reduced-severity errors. 
 * The created output files contain errors that have been ignored. Usage of the created files can lead to unpredictable behavior of the embedded code.
 * Usage of the created files happens at own risk!
 * 
 * [Warning] COM02205 - Inconsistent signal layout. 
 * - [Reduced Severity due to User-Defined Parameter] /ActiveEcuC/EcuC/EcucPduCollection/NM_FAS_FL_ofas_a2f9e25c_Tx[0:PduLength]{FL}(value=6) of /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL} cannot hold contained ComSignals / ComGroupSignals.
 * 
 * Exceeding signals:
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_FL_oNM_FAS_FL_ofas_fb64d8f6_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN34_FAS_FL_oNM_FAS_FL_ofas_ca7cef81_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN35_FAS_FL_oNM_FAS_FL_ofas_4b598aa6_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN36_FAS_FL_oNM_FAS_FL_ofas_1347238e_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN37_FAS_FL_oNM_FAS_FL_ofas_926246a9_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN38_FAS_FL_oNM_FAS_FL_ofas_71774d60_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN39_FAS_FL_oNM_FAS_FL_ofas_f0522847_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN40_FAS_FL_oNM_FAS_FL_ofas_6d2a8d76_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN41_FAS_FL_oNM_FAS_FL_ofas_ec0fe851_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN42_FAS_FL_oNM_FAS_FL_ofas_b4114179_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN43_FAS_FL_oNM_FAS_FL_ofas_3534245e_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN44_FAS_FL_oNM_FAS_FL_ofas_042c1329_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN45_FAS_FL_oNM_FAS_FL_ofas_8509760e_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN46_FAS_FL_oNM_FAS_FL_ofas_dd17df26_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN47_FAS_FL_oNM_FAS_FL_ofas_5c32ba01_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN48_FAS_FL_oNM_FAS_FL_ofas_bf27b1c8_Tx{FL}
 * Erroneous configuration elements:
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_FL_oNM_FAS_FL_ofas_fb64d8f6_Tx[0:ComBitPosition]{FL}(value=48) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_FL_oNM_FAS_FL_ofas_ca7cef81_Tx[0:ComBitPosition]{FL}(value=49) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_FL_oNM_FAS_FL_ofas_4b598aa6_Tx[0:ComBitPosition]{FL}(value=50) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_FL_oNM_FAS_FL_ofas_1347238e_Tx[0:ComBitPosition]{FL}(value=51) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_FL_oNM_FAS_FL_ofas_926246a9_Tx[0:ComBitPosition]{FL}(value=52) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_FL_oNM_FAS_FL_ofas_71774d60_Tx[0:ComBitPosition]{FL}(value=53) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_FL_oNM_FAS_FL_ofas_f0522847_Tx[0:ComBitPosition]{FL}(value=54) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_FL_oNM_FAS_FL_ofas_6d2a8d76_Tx[0:ComBitPosition]{FL}(value=55) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_FL_oNM_FAS_FL_ofas_ec0fe851_Tx[0:ComBitPosition]{FL}(value=56) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_FL_oNM_FAS_FL_ofas_b4114179_Tx[0:ComBitPosition]{FL}(value=57) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_FL_oNM_FAS_FL_ofas_3534245e_Tx[0:ComBitPosition]{FL}(value=58) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_FL_oNM_FAS_FL_ofas_042c1329_Tx[0:ComBitPosition]{FL}(value=59) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_FL_oNM_FAS_FL_ofas_8509760e_Tx[0:ComBitPosition]{FL}(value=60) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_FL_oNM_FAS_FL_ofas_dd17df26_Tx[0:ComBitPosition]{FL}(value=61) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_FL_oNM_FAS_FL_ofas_5c32ba01_Tx[0:ComBitPosition]{FL}(value=62) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_FL_oNM_FAS_FL_ofas_bf27b1c8_Tx[0:ComBitPosition]{FL}(value=63) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_FL_oNM_FAS_FL_ofas_fb64d8f6_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_FL_oNM_FAS_FL_ofas_ca7cef81_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_FL_oNM_FAS_FL_ofas_4b598aa6_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_FL_oNM_FAS_FL_ofas_1347238e_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_FL_oNM_FAS_FL_ofas_926246a9_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_FL_oNM_FAS_FL_ofas_71774d60_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_FL_oNM_FAS_FL_ofas_f0522847_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_FL_oNM_FAS_FL_ofas_6d2a8d76_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_FL_oNM_FAS_FL_ofas_ec0fe851_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_FL_oNM_FAS_FL_ofas_b4114179_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_FL_oNM_FAS_FL_ofas_3534245e_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_FL_oNM_FAS_FL_ofas_042c1329_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_FL_oNM_FAS_FL_ofas_8509760e_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_FL_oNM_FAS_FL_ofas_dd17df26_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_FL_oNM_FAS_FL_ofas_5c32ba01_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_FL_oNM_FAS_FL_ofas_bf27b1c8_Tx[0:ComBitSize]{FL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/EcuC/EcucPduCollection/NM_FAS_FL_ofas_a2f9e25c_Tx[0:PduLength]{FL}(value=6) (DefRef: /MICROSAR/EcuC/EcucPduCollection/Pdu/PduLength)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[28:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN33_FAS_FL_oNM_FAS_FL_ofas_fb64d8f6_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[29:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN34_FAS_FL_oNM_FAS_FL_ofas_ca7cef81_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[30:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN35_FAS_FL_oNM_FAS_FL_ofas_4b598aa6_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[31:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN36_FAS_FL_oNM_FAS_FL_ofas_1347238e_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[32:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN37_FAS_FL_oNM_FAS_FL_ofas_926246a9_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[33:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN38_FAS_FL_oNM_FAS_FL_ofas_71774d60_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[34:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN39_FAS_FL_oNM_FAS_FL_ofas_f0522847_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[36:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN40_FAS_FL_oNM_FAS_FL_ofas_6d2a8d76_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[37:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN41_FAS_FL_oNM_FAS_FL_ofas_ec0fe851_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[38:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN42_FAS_FL_oNM_FAS_FL_ofas_b4114179_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[39:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN43_FAS_FL_oNM_FAS_FL_ofas_3534245e_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[40:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN44_FAS_FL_oNM_FAS_FL_ofas_042c1329_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[41:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN45_FAS_FL_oNM_FAS_FL_ofas_8509760e_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[42:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN46_FAS_FL_oNM_FAS_FL_ofas_dd17df26_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[43:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN47_FAS_FL_oNM_FAS_FL_ofas_5c32ba01_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx[44:ComIPduSignalRef]{FL}(value=/ActiveEcuC/Com/ComConfig/PN48_FAS_FL_oNM_FAS_FL_ofas_bf27b1c8_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_FL_oNM_FAS_FL_ofas_fb64d8f6_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_FL_oNM_FAS_FL_ofas_ca7cef81_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_FL_oNM_FAS_FL_ofas_4b598aa6_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_FL_oNM_FAS_FL_ofas_1347238e_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_FL_oNM_FAS_FL_ofas_926246a9_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_FL_oNM_FAS_FL_ofas_71774d60_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_FL_oNM_FAS_FL_ofas_f0522847_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_FL_oNM_FAS_FL_ofas_6d2a8d76_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_FL_oNM_FAS_FL_ofas_ec0fe851_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_FL_oNM_FAS_FL_ofas_b4114179_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_FL_oNM_FAS_FL_ofas_3534245e_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_FL_oNM_FAS_FL_ofas_042c1329_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_FL_oNM_FAS_FL_ofas_8509760e_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_FL_oNM_FAS_FL_ofas_dd17df26_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_FL_oNM_FAS_FL_ofas_5c32ba01_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_FL_oNM_FAS_FL_ofas_bf27b1c8_Tx[0:ComSignalEndianness]{FL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_FL_oNM_FAS_FL_ofas_fb64d8f6_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_FL_oNM_FAS_FL_ofas_ca7cef81_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_FL_oNM_FAS_FL_ofas_4b598aa6_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_FL_oNM_FAS_FL_ofas_1347238e_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_FL_oNM_FAS_FL_ofas_926246a9_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_FL_oNM_FAS_FL_ofas_71774d60_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_FL_oNM_FAS_FL_ofas_f0522847_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_FL_oNM_FAS_FL_ofas_6d2a8d76_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_FL_oNM_FAS_FL_ofas_ec0fe851_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_FL_oNM_FAS_FL_ofas_b4114179_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_FL_oNM_FAS_FL_ofas_3534245e_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_FL_oNM_FAS_FL_ofas_042c1329_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_FL_oNM_FAS_FL_ofas_8509760e_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_FL_oNM_FAS_FL_ofas_dd17df26_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_FL_oNM_FAS_FL_ofas_5c32ba01_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_FL_oNM_FAS_FL_ofas_bf27b1c8_Tx[0:ComSignalType]{FL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * 
 * [Warning] COM02205 - Inconsistent signal layout. 
 * - [Reduced Severity due to User-Defined Parameter] /ActiveEcuC/EcuC/EcucPduCollection/NM_FAS_FR_ofas_9b2581b7_Tx[0:PduLength]{FR}(value=6) of /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx{FR} cannot hold contained ComSignals / ComGroupSignals.
 * 
 * Exceeding signals:
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_FR_oNM_FAS_FR_ofas_94cddaf6_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN34_FAS_FR_oNM_FAS_FR_ofas_a5d5ed81_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN35_FAS_FR_oNM_FAS_FR_ofas_24f088a6_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN36_FAS_FR_oNM_FAS_FR_ofas_7cee218e_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN37_FAS_FR_oNM_FAS_FR_ofas_fdcb44a9_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN38_FAS_FR_oNM_FAS_FR_ofas_1ede4f60_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN39_FAS_FR_oNM_FAS_FR_ofas_9ffb2a47_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN40_FAS_FR_oNM_FAS_FR_ofas_02838f76_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN41_FAS_FR_oNM_FAS_FR_ofas_83a6ea51_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN42_FAS_FR_oNM_FAS_FR_ofas_dbb84379_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN43_FAS_FR_oNM_FAS_FR_ofas_5a9d265e_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN44_FAS_FR_oNM_FAS_FR_ofas_6b851129_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN45_FAS_FR_oNM_FAS_FR_ofas_eaa0740e_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN46_FAS_FR_oNM_FAS_FR_ofas_b2bedd26_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN47_FAS_FR_oNM_FAS_FR_ofas_339bb801_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN48_FAS_FR_oNM_FAS_FR_ofas_d08eb3c8_Tx{FR}
 * Erroneous configuration elements:
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_FR_oNM_FAS_FR_ofas_94cddaf6_Tx[0:ComBitPosition]{FR}(value=48) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_FR_oNM_FAS_FR_ofas_a5d5ed81_Tx[0:ComBitPosition]{FR}(value=49) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_FR_oNM_FAS_FR_ofas_24f088a6_Tx[0:ComBitPosition]{FR}(value=50) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_FR_oNM_FAS_FR_ofas_7cee218e_Tx[0:ComBitPosition]{FR}(value=51) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_FR_oNM_FAS_FR_ofas_fdcb44a9_Tx[0:ComBitPosition]{FR}(value=52) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_FR_oNM_FAS_FR_ofas_1ede4f60_Tx[0:ComBitPosition]{FR}(value=53) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_FR_oNM_FAS_FR_ofas_9ffb2a47_Tx[0:ComBitPosition]{FR}(value=54) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_FR_oNM_FAS_FR_ofas_02838f76_Tx[0:ComBitPosition]{FR}(value=55) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_FR_oNM_FAS_FR_ofas_83a6ea51_Tx[0:ComBitPosition]{FR}(value=56) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_FR_oNM_FAS_FR_ofas_dbb84379_Tx[0:ComBitPosition]{FR}(value=57) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_FR_oNM_FAS_FR_ofas_5a9d265e_Tx[0:ComBitPosition]{FR}(value=58) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_FR_oNM_FAS_FR_ofas_6b851129_Tx[0:ComBitPosition]{FR}(value=59) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_FR_oNM_FAS_FR_ofas_eaa0740e_Tx[0:ComBitPosition]{FR}(value=60) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_FR_oNM_FAS_FR_ofas_b2bedd26_Tx[0:ComBitPosition]{FR}(value=61) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_FR_oNM_FAS_FR_ofas_339bb801_Tx[0:ComBitPosition]{FR}(value=62) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_FR_oNM_FAS_FR_ofas_d08eb3c8_Tx[0:ComBitPosition]{FR}(value=63) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_FR_oNM_FAS_FR_ofas_94cddaf6_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_FR_oNM_FAS_FR_ofas_a5d5ed81_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_FR_oNM_FAS_FR_ofas_24f088a6_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_FR_oNM_FAS_FR_ofas_7cee218e_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_FR_oNM_FAS_FR_ofas_fdcb44a9_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_FR_oNM_FAS_FR_ofas_1ede4f60_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_FR_oNM_FAS_FR_ofas_9ffb2a47_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_FR_oNM_FAS_FR_ofas_02838f76_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_FR_oNM_FAS_FR_ofas_83a6ea51_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_FR_oNM_FAS_FR_ofas_dbb84379_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_FR_oNM_FAS_FR_ofas_5a9d265e_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_FR_oNM_FAS_FR_ofas_6b851129_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_FR_oNM_FAS_FR_ofas_eaa0740e_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_FR_oNM_FAS_FR_ofas_b2bedd26_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_FR_oNM_FAS_FR_ofas_339bb801_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_FR_oNM_FAS_FR_ofas_d08eb3c8_Tx[0:ComBitSize]{FR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/EcuC/EcucPduCollection/NM_FAS_FR_ofas_9b2581b7_Tx[0:PduLength]{FR}(value=6) (DefRef: /MICROSAR/EcuC/EcucPduCollection/Pdu/PduLength)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[28:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN33_FAS_FR_oNM_FAS_FR_ofas_94cddaf6_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[29:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN34_FAS_FR_oNM_FAS_FR_ofas_a5d5ed81_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[30:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN35_FAS_FR_oNM_FAS_FR_ofas_24f088a6_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[31:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN36_FAS_FR_oNM_FAS_FR_ofas_7cee218e_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[32:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN37_FAS_FR_oNM_FAS_FR_ofas_fdcb44a9_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[33:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN38_FAS_FR_oNM_FAS_FR_ofas_1ede4f60_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[34:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN39_FAS_FR_oNM_FAS_FR_ofas_9ffb2a47_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[36:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN40_FAS_FR_oNM_FAS_FR_ofas_02838f76_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[37:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN41_FAS_FR_oNM_FAS_FR_ofas_83a6ea51_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[38:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN42_FAS_FR_oNM_FAS_FR_ofas_dbb84379_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[39:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN43_FAS_FR_oNM_FAS_FR_ofas_5a9d265e_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[40:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN44_FAS_FR_oNM_FAS_FR_ofas_6b851129_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[41:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN45_FAS_FR_oNM_FAS_FR_ofas_eaa0740e_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[42:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN46_FAS_FR_oNM_FAS_FR_ofas_b2bedd26_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[43:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN47_FAS_FR_oNM_FAS_FR_ofas_339bb801_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx[44:ComIPduSignalRef]{FR}(value=/ActiveEcuC/Com/ComConfig/PN48_FAS_FR_oNM_FAS_FR_ofas_d08eb3c8_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_FR_oNM_FAS_FR_ofas_94cddaf6_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_FR_oNM_FAS_FR_ofas_a5d5ed81_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_FR_oNM_FAS_FR_ofas_24f088a6_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_FR_oNM_FAS_FR_ofas_7cee218e_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_FR_oNM_FAS_FR_ofas_fdcb44a9_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_FR_oNM_FAS_FR_ofas_1ede4f60_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_FR_oNM_FAS_FR_ofas_9ffb2a47_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_FR_oNM_FAS_FR_ofas_02838f76_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_FR_oNM_FAS_FR_ofas_83a6ea51_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_FR_oNM_FAS_FR_ofas_dbb84379_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_FR_oNM_FAS_FR_ofas_5a9d265e_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_FR_oNM_FAS_FR_ofas_6b851129_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_FR_oNM_FAS_FR_ofas_eaa0740e_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_FR_oNM_FAS_FR_ofas_b2bedd26_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_FR_oNM_FAS_FR_ofas_339bb801_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_FR_oNM_FAS_FR_ofas_d08eb3c8_Tx[0:ComSignalEndianness]{FR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_FR_oNM_FAS_FR_ofas_94cddaf6_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_FR_oNM_FAS_FR_ofas_a5d5ed81_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_FR_oNM_FAS_FR_ofas_24f088a6_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_FR_oNM_FAS_FR_ofas_7cee218e_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_FR_oNM_FAS_FR_ofas_fdcb44a9_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_FR_oNM_FAS_FR_ofas_1ede4f60_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_FR_oNM_FAS_FR_ofas_9ffb2a47_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_FR_oNM_FAS_FR_ofas_02838f76_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_FR_oNM_FAS_FR_ofas_83a6ea51_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_FR_oNM_FAS_FR_ofas_dbb84379_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_FR_oNM_FAS_FR_ofas_5a9d265e_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_FR_oNM_FAS_FR_ofas_6b851129_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_FR_oNM_FAS_FR_ofas_eaa0740e_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_FR_oNM_FAS_FR_ofas_b2bedd26_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_FR_oNM_FAS_FR_ofas_339bb801_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_FR_oNM_FAS_FR_ofas_d08eb3c8_Tx[0:ComSignalType]{FR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * 
 * [Warning] COM02205 - Inconsistent signal layout. 
 * - [Reduced Severity due to User-Defined Parameter] /ActiveEcuC/EcuC/EcucPduCollection/NM_FAS_RL_ofas_31685a81_Tx[0:PduLength]{RL}(value=6) of /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx{RL} cannot hold contained ComSignals / ComGroupSignals.
 * 
 * Exceeding signals:
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_RL_oNM_FAS_RL_ofas_4dfeeb35_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN34_FAS_RL_oNM_FAS_RL_ofas_7ce6dc42_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN35_FAS_RL_oNM_FAS_RL_ofas_fdc3b965_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN36_FAS_RL_oNM_FAS_RL_ofas_a5dd104d_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN37_FAS_RL_oNM_FAS_RL_ofas_24f8756a_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN38_FAS_RL_oNM_FAS_RL_ofas_c7ed7ea3_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN39_FAS_RL_oNM_FAS_RL_ofas_46c81b84_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN40_FAS_RL_oNM_FAS_RL_ofas_dbb0beb5_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN41_FAS_RL_oNM_FAS_RL_ofas_5a95db92_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN42_FAS_RL_oNM_FAS_RL_ofas_028b72ba_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN43_FAS_RL_oNM_FAS_RL_ofas_83ae179d_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN44_FAS_RL_oNM_FAS_RL_ofas_b2b620ea_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN45_FAS_RL_oNM_FAS_RL_ofas_339345cd_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN46_FAS_RL_oNM_FAS_RL_ofas_6b8dece5_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN47_FAS_RL_oNM_FAS_RL_ofas_eaa889c2_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN48_FAS_RL_oNM_FAS_RL_ofas_09bd820b_Tx{RL}
 * Erroneous configuration elements:
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_RL_oNM_FAS_RL_ofas_4dfeeb35_Tx[0:ComBitPosition]{RL}(value=48) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_RL_oNM_FAS_RL_ofas_7ce6dc42_Tx[0:ComBitPosition]{RL}(value=49) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_RL_oNM_FAS_RL_ofas_fdc3b965_Tx[0:ComBitPosition]{RL}(value=50) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_RL_oNM_FAS_RL_ofas_a5dd104d_Tx[0:ComBitPosition]{RL}(value=51) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_RL_oNM_FAS_RL_ofas_24f8756a_Tx[0:ComBitPosition]{RL}(value=52) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_RL_oNM_FAS_RL_ofas_c7ed7ea3_Tx[0:ComBitPosition]{RL}(value=53) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_RL_oNM_FAS_RL_ofas_46c81b84_Tx[0:ComBitPosition]{RL}(value=54) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_RL_oNM_FAS_RL_ofas_dbb0beb5_Tx[0:ComBitPosition]{RL}(value=55) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_RL_oNM_FAS_RL_ofas_5a95db92_Tx[0:ComBitPosition]{RL}(value=56) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_RL_oNM_FAS_RL_ofas_028b72ba_Tx[0:ComBitPosition]{RL}(value=57) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_RL_oNM_FAS_RL_ofas_83ae179d_Tx[0:ComBitPosition]{RL}(value=58) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_RL_oNM_FAS_RL_ofas_b2b620ea_Tx[0:ComBitPosition]{RL}(value=59) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_RL_oNM_FAS_RL_ofas_339345cd_Tx[0:ComBitPosition]{RL}(value=60) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_RL_oNM_FAS_RL_ofas_6b8dece5_Tx[0:ComBitPosition]{RL}(value=61) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_RL_oNM_FAS_RL_ofas_eaa889c2_Tx[0:ComBitPosition]{RL}(value=62) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_RL_oNM_FAS_RL_ofas_09bd820b_Tx[0:ComBitPosition]{RL}(value=63) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_RL_oNM_FAS_RL_ofas_4dfeeb35_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_RL_oNM_FAS_RL_ofas_7ce6dc42_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_RL_oNM_FAS_RL_ofas_fdc3b965_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_RL_oNM_FAS_RL_ofas_a5dd104d_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_RL_oNM_FAS_RL_ofas_24f8756a_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_RL_oNM_FAS_RL_ofas_c7ed7ea3_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_RL_oNM_FAS_RL_ofas_46c81b84_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_RL_oNM_FAS_RL_ofas_dbb0beb5_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_RL_oNM_FAS_RL_ofas_5a95db92_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_RL_oNM_FAS_RL_ofas_028b72ba_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_RL_oNM_FAS_RL_ofas_83ae179d_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_RL_oNM_FAS_RL_ofas_b2b620ea_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_RL_oNM_FAS_RL_ofas_339345cd_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_RL_oNM_FAS_RL_ofas_6b8dece5_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_RL_oNM_FAS_RL_ofas_eaa889c2_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_RL_oNM_FAS_RL_ofas_09bd820b_Tx[0:ComBitSize]{RL}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/EcuC/EcucPduCollection/NM_FAS_RL_ofas_31685a81_Tx[0:PduLength]{RL}(value=6) (DefRef: /MICROSAR/EcuC/EcucPduCollection/Pdu/PduLength)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[28:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN33_FAS_RL_oNM_FAS_RL_ofas_4dfeeb35_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[29:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN34_FAS_RL_oNM_FAS_RL_ofas_7ce6dc42_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[30:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN35_FAS_RL_oNM_FAS_RL_ofas_fdc3b965_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[31:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN36_FAS_RL_oNM_FAS_RL_ofas_a5dd104d_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[32:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN37_FAS_RL_oNM_FAS_RL_ofas_24f8756a_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[33:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN38_FAS_RL_oNM_FAS_RL_ofas_c7ed7ea3_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[34:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN39_FAS_RL_oNM_FAS_RL_ofas_46c81b84_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[36:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN40_FAS_RL_oNM_FAS_RL_ofas_dbb0beb5_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[37:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN41_FAS_RL_oNM_FAS_RL_ofas_5a95db92_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[38:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN42_FAS_RL_oNM_FAS_RL_ofas_028b72ba_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[39:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN43_FAS_RL_oNM_FAS_RL_ofas_83ae179d_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[40:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN44_FAS_RL_oNM_FAS_RL_ofas_b2b620ea_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[41:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN45_FAS_RL_oNM_FAS_RL_ofas_339345cd_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[42:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN46_FAS_RL_oNM_FAS_RL_ofas_6b8dece5_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[43:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN47_FAS_RL_oNM_FAS_RL_ofas_eaa889c2_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx[44:ComIPduSignalRef]{RL}(value=/ActiveEcuC/Com/ComConfig/PN48_FAS_RL_oNM_FAS_RL_ofas_09bd820b_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_RL_oNM_FAS_RL_ofas_4dfeeb35_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_RL_oNM_FAS_RL_ofas_7ce6dc42_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_RL_oNM_FAS_RL_ofas_fdc3b965_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_RL_oNM_FAS_RL_ofas_a5dd104d_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_RL_oNM_FAS_RL_ofas_24f8756a_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_RL_oNM_FAS_RL_ofas_c7ed7ea3_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_RL_oNM_FAS_RL_ofas_46c81b84_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_RL_oNM_FAS_RL_ofas_dbb0beb5_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_RL_oNM_FAS_RL_ofas_5a95db92_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_RL_oNM_FAS_RL_ofas_028b72ba_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_RL_oNM_FAS_RL_ofas_83ae179d_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_RL_oNM_FAS_RL_ofas_b2b620ea_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_RL_oNM_FAS_RL_ofas_339345cd_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_RL_oNM_FAS_RL_ofas_6b8dece5_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_RL_oNM_FAS_RL_ofas_eaa889c2_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_RL_oNM_FAS_RL_ofas_09bd820b_Tx[0:ComSignalEndianness]{RL}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_RL_oNM_FAS_RL_ofas_4dfeeb35_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_RL_oNM_FAS_RL_ofas_7ce6dc42_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_RL_oNM_FAS_RL_ofas_fdc3b965_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_RL_oNM_FAS_RL_ofas_a5dd104d_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_RL_oNM_FAS_RL_ofas_24f8756a_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_RL_oNM_FAS_RL_ofas_c7ed7ea3_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_RL_oNM_FAS_RL_ofas_46c81b84_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_RL_oNM_FAS_RL_ofas_dbb0beb5_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_RL_oNM_FAS_RL_ofas_5a95db92_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_RL_oNM_FAS_RL_ofas_028b72ba_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_RL_oNM_FAS_RL_ofas_83ae179d_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_RL_oNM_FAS_RL_ofas_b2b620ea_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_RL_oNM_FAS_RL_ofas_339345cd_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_RL_oNM_FAS_RL_ofas_6b8dece5_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_RL_oNM_FAS_RL_ofas_eaa889c2_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_RL_oNM_FAS_RL_ofas_09bd820b_Tx[0:ComSignalType]{RL}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * 
 * [Warning] COM02205 - Inconsistent signal layout. 
 * - [Reduced Severity due to User-Defined Parameter] /ActiveEcuC/EcuC/EcucPduCollection/NM_FAS_RR_ofas_08b4396a_Tx[0:PduLength]{RR}(value=6) of /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx{RR} cannot hold contained ComSignals / ComGroupSignals.
 * 
 * Exceeding signals:
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_RR_oNM_FAS_RR_ofas_2257e935_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN34_FAS_RR_oNM_FAS_RR_ofas_134fde42_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN35_FAS_RR_oNM_FAS_RR_ofas_926abb65_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN36_FAS_RR_oNM_FAS_RR_ofas_ca74124d_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN37_FAS_RR_oNM_FAS_RR_ofas_4b51776a_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN38_FAS_RR_oNM_FAS_RR_ofas_a8447ca3_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN39_FAS_RR_oNM_FAS_RR_ofas_29611984_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN40_FAS_RR_oNM_FAS_RR_ofas_b419bcb5_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN41_FAS_RR_oNM_FAS_RR_ofas_353cd992_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN42_FAS_RR_oNM_FAS_RR_ofas_6d2270ba_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN43_FAS_RR_oNM_FAS_RR_ofas_ec07159d_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN44_FAS_RR_oNM_FAS_RR_ofas_dd1f22ea_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN45_FAS_RR_oNM_FAS_RR_ofas_5c3a47cd_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN46_FAS_RR_oNM_FAS_RR_ofas_0424eee5_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN47_FAS_RR_oNM_FAS_RR_ofas_85018bc2_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN48_FAS_RR_oNM_FAS_RR_ofas_6614800b_Tx{RR}
 * Erroneous configuration elements:
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_RR_oNM_FAS_RR_ofas_2257e935_Tx[0:ComBitPosition]{RR}(value=48) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_RR_oNM_FAS_RR_ofas_134fde42_Tx[0:ComBitPosition]{RR}(value=49) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_RR_oNM_FAS_RR_ofas_926abb65_Tx[0:ComBitPosition]{RR}(value=50) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_RR_oNM_FAS_RR_ofas_ca74124d_Tx[0:ComBitPosition]{RR}(value=51) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_RR_oNM_FAS_RR_ofas_4b51776a_Tx[0:ComBitPosition]{RR}(value=52) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_RR_oNM_FAS_RR_ofas_a8447ca3_Tx[0:ComBitPosition]{RR}(value=53) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_RR_oNM_FAS_RR_ofas_29611984_Tx[0:ComBitPosition]{RR}(value=54) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_RR_oNM_FAS_RR_ofas_b419bcb5_Tx[0:ComBitPosition]{RR}(value=55) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_RR_oNM_FAS_RR_ofas_353cd992_Tx[0:ComBitPosition]{RR}(value=56) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_RR_oNM_FAS_RR_ofas_6d2270ba_Tx[0:ComBitPosition]{RR}(value=57) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_RR_oNM_FAS_RR_ofas_ec07159d_Tx[0:ComBitPosition]{RR}(value=58) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_RR_oNM_FAS_RR_ofas_dd1f22ea_Tx[0:ComBitPosition]{RR}(value=59) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_RR_oNM_FAS_RR_ofas_5c3a47cd_Tx[0:ComBitPosition]{RR}(value=60) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_RR_oNM_FAS_RR_ofas_0424eee5_Tx[0:ComBitPosition]{RR}(value=61) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_RR_oNM_FAS_RR_ofas_85018bc2_Tx[0:ComBitPosition]{RR}(value=62) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_RR_oNM_FAS_RR_ofas_6614800b_Tx[0:ComBitPosition]{RR}(value=63) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitPosition)
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_RR_oNM_FAS_RR_ofas_2257e935_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_RR_oNM_FAS_RR_ofas_134fde42_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_RR_oNM_FAS_RR_ofas_926abb65_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_RR_oNM_FAS_RR_ofas_ca74124d_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_RR_oNM_FAS_RR_ofas_4b51776a_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_RR_oNM_FAS_RR_ofas_a8447ca3_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_RR_oNM_FAS_RR_ofas_29611984_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_RR_oNM_FAS_RR_ofas_b419bcb5_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_RR_oNM_FAS_RR_ofas_353cd992_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_RR_oNM_FAS_RR_ofas_6d2270ba_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_RR_oNM_FAS_RR_ofas_ec07159d_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_RR_oNM_FAS_RR_ofas_dd1f22ea_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_RR_oNM_FAS_RR_ofas_5c3a47cd_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_RR_oNM_FAS_RR_ofas_0424eee5_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_RR_oNM_FAS_RR_ofas_85018bc2_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_RR_oNM_FAS_RR_ofas_6614800b_Tx[0:ComBitSize]{RR}(value=1) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComBitSize)
 * /ActiveEcuC/EcuC/EcucPduCollection/NM_FAS_RR_ofas_08b4396a_Tx[0:PduLength]{RR}(value=6) (DefRef: /MICROSAR/EcuC/EcucPduCollection/Pdu/PduLength)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[28:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN33_FAS_RR_oNM_FAS_RR_ofas_2257e935_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[29:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN34_FAS_RR_oNM_FAS_RR_ofas_134fde42_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[30:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN35_FAS_RR_oNM_FAS_RR_ofas_926abb65_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[31:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN36_FAS_RR_oNM_FAS_RR_ofas_ca74124d_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[32:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN37_FAS_RR_oNM_FAS_RR_ofas_4b51776a_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[33:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN38_FAS_RR_oNM_FAS_RR_ofas_a8447ca3_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[34:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN39_FAS_RR_oNM_FAS_RR_ofas_29611984_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[36:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN40_FAS_RR_oNM_FAS_RR_ofas_b419bcb5_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[37:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN41_FAS_RR_oNM_FAS_RR_ofas_353cd992_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[38:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN42_FAS_RR_oNM_FAS_RR_ofas_6d2270ba_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[39:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN43_FAS_RR_oNM_FAS_RR_ofas_ec07159d_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[40:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN44_FAS_RR_oNM_FAS_RR_ofas_dd1f22ea_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[41:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN45_FAS_RR_oNM_FAS_RR_ofas_5c3a47cd_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[42:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN46_FAS_RR_oNM_FAS_RR_ofas_0424eee5_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[43:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN47_FAS_RR_oNM_FAS_RR_ofas_85018bc2_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx[44:ComIPduSignalRef]{RR}(value=/ActiveEcuC/Com/ComConfig/PN48_FAS_RR_oNM_FAS_RR_ofas_6614800b_Tx) (DefRef: /MICROSAR/Com/ComConfig/ComIPdu/ComIPduSignalRef)
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_RR_oNM_FAS_RR_ofas_2257e935_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_RR_oNM_FAS_RR_ofas_134fde42_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_RR_oNM_FAS_RR_ofas_926abb65_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_RR_oNM_FAS_RR_ofas_ca74124d_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_RR_oNM_FAS_RR_ofas_4b51776a_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_RR_oNM_FAS_RR_ofas_a8447ca3_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_RR_oNM_FAS_RR_ofas_29611984_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_RR_oNM_FAS_RR_ofas_b419bcb5_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_RR_oNM_FAS_RR_ofas_353cd992_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_RR_oNM_FAS_RR_ofas_6d2270ba_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_RR_oNM_FAS_RR_ofas_ec07159d_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_RR_oNM_FAS_RR_ofas_dd1f22ea_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_RR_oNM_FAS_RR_ofas_5c3a47cd_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_RR_oNM_FAS_RR_ofas_0424eee5_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_RR_oNM_FAS_RR_ofas_85018bc2_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_RR_oNM_FAS_RR_ofas_6614800b_Tx[0:ComSignalEndianness]{RR}(value=BIG_ENDIAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalEndianness)
 * /ActiveEcuC/Com/ComConfig/PN33_FAS_RR_oNM_FAS_RR_ofas_2257e935_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN34_FAS_RR_oNM_FAS_RR_ofas_134fde42_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN35_FAS_RR_oNM_FAS_RR_ofas_926abb65_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN36_FAS_RR_oNM_FAS_RR_ofas_ca74124d_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN37_FAS_RR_oNM_FAS_RR_ofas_4b51776a_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN38_FAS_RR_oNM_FAS_RR_ofas_a8447ca3_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN39_FAS_RR_oNM_FAS_RR_ofas_29611984_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN40_FAS_RR_oNM_FAS_RR_ofas_b419bcb5_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN41_FAS_RR_oNM_FAS_RR_ofas_353cd992_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN42_FAS_RR_oNM_FAS_RR_ofas_6d2270ba_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN43_FAS_RR_oNM_FAS_RR_ofas_ec07159d_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN44_FAS_RR_oNM_FAS_RR_ofas_dd1f22ea_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN45_FAS_RR_oNM_FAS_RR_ofas_5c3a47cd_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN46_FAS_RR_oNM_FAS_RR_ofas_0424eee5_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN47_FAS_RR_oNM_FAS_RR_ofas_85018bc2_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 * /ActiveEcuC/Com/ComConfig/PN48_FAS_RR_oNM_FAS_RR_ofas_6614800b_Tx[0:ComSignalType]{RR}(value=BOOLEAN) (DefRef: /MICROSAR/Com/ComConfig/ComSignal/ComSignalType)
 *********************************************************************************************************************/

#if !defined (COM_COT_H)
# define COM_COT_H

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_Types.h"
/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define COM_START_SEC_APPL_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_MemMap */

/* Configurable interface TxPduCallout */
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_FL_02_ofas_f49eed27_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_FL_04_ofas_22c70e3a_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_FL_05_ofas_e99bdd9f_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_FR_02_ofas_909c74c4_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_FR_04_ofas_46c597d9_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_FR_05_ofas_8d99447c_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_RL_02_ofas_dadbccb5_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_RL_04_ofas_0c822fa8_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_RL_05_ofas_c7defc0d_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_RR_02_ofas_bed95556_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_RR_04_ofas_6880b64b_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_RR_05_ofas_a3dc65ee_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);

/* Configurable interface RxPduCallout */
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_Zone_R_FAS_02_ofas_5c608f88_Rx(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);



#define COM_STOP_SEC_APPL_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_MemMap */

#endif  /* COM_COT_H */
/**********************************************************************************************************************
  END OF FILE: Com_Cot.h
**********************************************************************************************************************/

