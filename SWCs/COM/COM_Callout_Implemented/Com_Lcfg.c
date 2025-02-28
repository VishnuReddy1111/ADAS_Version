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
 *              File: Com_Lcfg.c
 *   Generation Time: 2024-06-20 10:33:48
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

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#define V_IL_ASRCOMCFG5_LCFG_SOURCE

#include "Com.h"
#include "Com_Timer.h"
#include "Com_TxModeHdlr.h"
#include "Com_LLIf.h"
#include "Com_MainFunctions.h"

#include "Rte_Cbk.h"

#include "SchM_Com.h"

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Com_AlwaysActiveTxComIPdus
**********************************************************************************************************************/
/** 
  \var    Com_AlwaysActiveTxComIPdus
  \brief  Contains all Tx ComIPdu's without any assigned ComIPduGroup
  \details
  Element                                      Description
  PartitionsAlwaysActiveTxComIPdusStructIdx    the index of the 1:1 relation pointing to Com_PartitionsAlwaysActiveTxComIPdusStruct
  TxPduInfoIdx                                 the index of the 1:1 relation pointing to Com_TxPduInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_AlwaysActiveTxComIPdusType, COM_CONST) Com_AlwaysActiveTxComIPdus[1] = {  /* PRQA S 1514, 1533, 1504 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ExternalMcData */
    /* Index    PartitionsAlwaysActiveTxComIPdusStructIdx  TxPduInfoIdx */
  { /*     0 */                                        0u,           6u }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueSigGrpArrayAccess
**********************************************************************************************************************/
#define COM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueSigGrpArrayAccessType, COM_CONST) Com_ConstValueSigGrpArrayAccess[23] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueSigGrpArrayAccess      Referable Keys */
  /*     0 */                        0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*     1 */                        0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*     2 */                        0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*     3 */                        0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*     4 */                        0x19u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*     5 */                        0x0Cu,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*     6 */                        0x86u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*     7 */                        0x43u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*     8 */                        0x20u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*     9 */                        0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    10 */                        0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    11 */                        0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    12 */                        0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    13 */                        0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    14 */                        0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    15 */                        0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    16 */                        0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    17 */                        0x7Du,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /*    18 */                        0x07u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /*    19 */                        0xD0u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /*    20 */                        0x7Du,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /*    21 */                        0x07u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /*    22 */                        0xD0u   /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
};
#define COM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt16
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt16
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT16)
*/ 
#define COM_START_SEC_CONST_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt16Type, COM_CONST) Com_ConstValueUInt16[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt16      Referable Keys */
  /*     0 */           0x07D0u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Fl_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_bbadfe60_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Fr_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_e38cdaee_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Rl_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_b7c2f462_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Rr_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_efe3d0ec_RxInitValue] */
  /*     1 */           0x00C8u,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Fl_Mm_oZone_R_FAS_01_ofas_4872b9f5_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Fr_Mm_oZone_R_FAS_01_ofas_5529a826_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Rl_Mm_oZone_R_FAS_01_ofas_ebd8d460_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Rr_Mm_oZone_R_FAS_01_ofas_f683c5b3_RxInitValue] */
  /*     2 */           0x0000u   /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/MSec_oZONE_3B2_ofas_c9c9d776_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Asmc_100Hz_Msg_Crc_oZone_R_FAS_01_ofas_9e00f8ce_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Cons_Pwr_Limit_Watt_oZone_R_FAS_01_ofas_8cc6f31d_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Regen_Pwr_Limit_Watt_oZone_R_FAS_01_ofas_3bf357bc_RxInitValue] */
};
#define COM_STOP_SEC_CONST_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt32
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt32
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT32)
*/ 
#define COM_START_SEC_CONST_32
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt32Type, COM_CONST) Com_ConstValueUInt32[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt32      Referable Keys */
  /*     0 */       0x00000000u   /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx/VehOdometer_oZONE_3A9_ofas_1c51a84c_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Oper_Mins_oZone_R_FAS_01_ofas_5b8bef6b_RxInitValue] */
};
#define COM_STOP_SEC_CONST_32
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt8
  \brief  Optimized array of commonly used values like initial or invalid values. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt8Type, COM_CONST) Com_ConstValueUInt8[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt8      Referable Keys */
  /*     0 */            0x00u   /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/DrvState_SrvSts_oZONE_13C_ofas_0befbb64_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/DrvState_oZONE_13C_ofas_ed752b79_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/OperatorState_SrvSts_oZONE_13C_ofas_12e139f1_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/OperatorState_oZONE_13C_ofas_1a8ad674_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/VehStateDetailed_SrvSts_oZONE_13C_ofas_6c5e7153_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/VehStateDetailed_oZONE_13C_ofas_4ac7dc26_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/ZONE_13C_CRC_oZONE_13C_ofas_e2f7ccfa_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/ZONE_13C_MsgCntr_oZONE_13C_ofas_b6b980ce_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Day_oZONE_3B2_ofas_d665dea3_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Hr_oZONE_3B2_ofas_8dbdabef_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Min_oZONE_3B2_ofas_d3a84f3b_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Mth_oZONE_3B2_ofas_85d61cb0_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Sec_oZONE_3B2_ofas_78742ba2_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Yr_oZONE_3B2_ofas_1d4af9d1_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Ascc_St_Req_Na_oZone_R_FAS_01_ofas_16ce8104_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Asmc_100Hz_Msg_AlvCtr_oZone_R_FAS_01_ofas_906d367d_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Pwr48_ConsLmt_Actv_Na_oZone_R_FAS_01_ofas_6389ca00_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Pwr48_RegenLmt_Actv_Na_oZone_R_FAS_01_ofas_aa8f0ffe_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sf_Diag_Mofr_Na_oZone_R_FAS_01_ofas_5c8861ac_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sts_Cons_Pwr_Limit_Qfr_Na_oZone_R_FAS_01_ofas_79ad73a4_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sts_Regen_Pwr_Limit_Qfr_Na_oZone_R_FAS_01_ofas_f7be3014_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Zl_Setg_Req_Na_oZone_R_FAS_01_ofas_172f0ec4_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Sts_VehSpdLo_Na_oZone_R_FAS_01_ofas_b19cf606_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Sts_VehStaty_Na_oZone_R_FAS_01_ofas_16307a62_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Fl_Qfr_Na_oZone_R_FAS_01_ofas_de4cdf40_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Fr_Qfr_Na_oZone_R_FAS_01_ofas_cd00e836_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Rl_Qfr_Na_oZone_R_FAS_01_ofas_0fea3094_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Rr_Qfr_Na_oZone_R_FAS_01_ofas_1ca607e2_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Ascc_F_Prio_Na_oZone_R_FAS_02_ofas_4e5a6117_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Ascc_Mode_Req_Na_oZone_R_FAS_02_ofas_db5c0ecb_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Asmc_1000Hz_F_Cmd_AlvCtr_oZone_R_FAS_02_ofas_f604fd54_RxInitValue, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Asmc_1000Hz_F_Cmd_Crc_oZone_R_FAS_02_ofas_51e284d3_RxInitValue] */
};
#define COM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_IPduGroupInfoFL
**********************************************************************************************************************/
/** 
  \var    Com_IPduGroupInfoFL
  \brief  Contains all I-Pdu Group relevant information
  \details
  Element                                    Description
  IPduGroupInfoToSubIPduGroupsIndEndIdx      the end index of the 0:n relation pointing to Com_IPduGroupInfoToSubIPduGroupsInd
  IPduGroupInfoToSubIPduGroupsIndStartIdx    the start index of the 0:n relation pointing to Com_IPduGroupInfoToSubIPduGroupsInd
  PartitionsRxStructIdx                      the index of the 0:1 relation pointing to Com_PartitionsRxStruct
  PartitionsTxStructIdx                      the index of the 0:1 relation pointing to Com_PartitionsTxStruct
  RxPduInfoIndEndIdx                         the end index of the 0:n relation pointing to Com_RxPduInfoInd
  RxPduInfoIndStartIdx                       the start index of the 0:n relation pointing to Com_RxPduInfoInd
  TxPduInfoIndEndIdx                         the end index of the 0:n relation pointing to Com_TxPduInfoInd
  TxPduInfoIndStartIdx                       the start index of the 0:n relation pointing to Com_TxPduInfoInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_IPduGroupInfoType, COM_CONST) Com_IPduGroupInfoFL[5] = {  /* PRQA S 1514, 1533, 1504 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ExternalMcData */
    /* Index    IPduGroupInfoToSubIPduGroupsIndEndIdx                        IPduGroupInfoToSubIPduGroupsIndStartIdx                        PartitionsRxStructIdx                        PartitionsTxStructIdx                        RxPduInfoIndEndIdx                        RxPduInfoIndStartIdx                        TxPduInfoIndEndIdx                        TxPduInfoIndStartIdx                              Referable Keys */
  { /*     0 */ COM_NO_IPDUGROUPINFOTOSUBIPDUGROUPSINDENDIDXOFIPDUGROUPINFO, COM_NO_IPDUGROUPINFOTOSUBIPDUGROUPSINDSTARTIDXOFIPDUGROUPINFO, COM_NO_PARTITIONSRXSTRUCTIDXOFIPDUGROUPINFO, COM_NO_PARTITIONSTXSTRUCTIDXOFIPDUGROUPINFO, COM_NO_RXPDUINFOINDENDIDXOFIPDUGROUPINFO, COM_NO_RXPDUINFOINDSTARTIDXOFIPDUGROUPINFO, COM_NO_TXPDUINFOINDENDIDXOFIPDUGROUPINFO, COM_NO_TXPDUINFOINDSTARTIDXOFIPDUGROUPINFO },  /* [unusedIndex0] */
  { /*     1 */                                                          1u,                                                            0u,                                          0u,                                          0u, COM_NO_RXPDUINFOINDENDIDXOFIPDUGROUPINFO, COM_NO_RXPDUINFOINDSTARTIDXOFIPDUGROUPINFO,                                       2u,                                         0u },  /* [/ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, /ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  { /*     2 */                                                          2u,                                                            1u,                                          0u,                                          0u, COM_NO_RXPDUINFOINDENDIDXOFIPDUGROUPINFO, COM_NO_RXPDUINFOINDSTARTIDXOFIPDUGROUPINFO,                                       3u,                                         2u },  /* [/ActiveEcuC/Com/ComConfig/NM_TX_Group, /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
  { /*     3 */                                                          3u,                                                            2u,                                          0u,                                          0u,                                       5u,                                         0u, COM_NO_TXPDUINFOINDENDIDXOFIPDUGROUPINFO, COM_NO_TXPDUINFOINDSTARTIDXOFIPDUGROUPINFO },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Rx_a583c704{FL}, /ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx, /ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx] */
  { /*     4 */                                                          4u,                                                            3u,                                          0u,                                          0u, COM_NO_RXPDUINFOINDENDIDXOFIPDUGROUPINFO, COM_NO_RXPDUINFOINDSTARTIDXOFIPDUGROUPINFO,                                       7u,                                         3u }   /* [/ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_IPduGroupInfoFR
**********************************************************************************************************************/
/** 
  \var    Com_IPduGroupInfoFR
  \brief  Contains all I-Pdu Group relevant information
  \details
  Element                                    Description
  IPduGroupInfoToSubIPduGroupsIndEndIdx      the end index of the 0:n relation pointing to Com_IPduGroupInfoToSubIPduGroupsInd
  IPduGroupInfoToSubIPduGroupsIndStartIdx    the start index of the 0:n relation pointing to Com_IPduGroupInfoToSubIPduGroupsInd
  PartitionsRxStructIdx                      the index of the 0:1 relation pointing to Com_PartitionsRxStruct
  PartitionsTxStructIdx                      the index of the 0:1 relation pointing to Com_PartitionsTxStruct
  RxPduInfoIndEndIdx                         the end index of the 0:n relation pointing to Com_RxPduInfoInd
  RxPduInfoIndStartIdx                       the start index of the 0:n relation pointing to Com_RxPduInfoInd
  TxPduInfoIndEndIdx                         the end index of the 0:n relation pointing to Com_TxPduInfoInd
  TxPduInfoIndStartIdx                       the start index of the 0:n relation pointing to Com_TxPduInfoInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_IPduGroupInfoType, COM_CONST) Com_IPduGroupInfoFR[5] = {  /* PRQA S 1514, 1533, 1504 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ExternalMcData */
    /* Index    IPduGroupInfoToSubIPduGroupsIndEndIdx                        IPduGroupInfoToSubIPduGroupsIndStartIdx                        PartitionsRxStructIdx                        PartitionsTxStructIdx                        RxPduInfoIndEndIdx                        RxPduInfoIndStartIdx                        TxPduInfoIndEndIdx                        TxPduInfoIndStartIdx                              Referable Keys */
  { /*     0 */ COM_NO_IPDUGROUPINFOTOSUBIPDUGROUPSINDENDIDXOFIPDUGROUPINFO, COM_NO_IPDUGROUPINFOTOSUBIPDUGROUPSINDSTARTIDXOFIPDUGROUPINFO, COM_NO_PARTITIONSRXSTRUCTIDXOFIPDUGROUPINFO, COM_NO_PARTITIONSTXSTRUCTIDXOFIPDUGROUPINFO, COM_NO_RXPDUINFOINDENDIDXOFIPDUGROUPINFO, COM_NO_RXPDUINFOINDSTARTIDXOFIPDUGROUPINFO, COM_NO_TXPDUINFOINDENDIDXOFIPDUGROUPINFO, COM_NO_TXPDUINFOINDSTARTIDXOFIPDUGROUPINFO },  /* [unusedIndex0] */
  { /*     1 */                                                          1u,                                                            0u,                                          0u,                                          0u, COM_NO_RXPDUINFOINDENDIDXOFIPDUGROUPINFO, COM_NO_RXPDUINFOINDSTARTIDXOFIPDUGROUPINFO,                                       2u,                                         0u },  /* [/ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, /ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  { /*     2 */ COM_NO_IPDUGROUPINFOTOSUBIPDUGROUPSINDENDIDXOFIPDUGROUPINFO, COM_NO_IPDUGROUPINFOTOSUBIPDUGROUPSINDSTARTIDXOFIPDUGROUPINFO, COM_NO_PARTITIONSRXSTRUCTIDXOFIPDUGROUPINFO, COM_NO_PARTITIONSTXSTRUCTIDXOFIPDUGROUPINFO, COM_NO_RXPDUINFOINDENDIDXOFIPDUGROUPINFO, COM_NO_RXPDUINFOINDSTARTIDXOFIPDUGROUPINFO, COM_NO_TXPDUINFOINDENDIDXOFIPDUGROUPINFO, COM_NO_TXPDUINFOINDSTARTIDXOFIPDUGROUPINFO },  /* [unusedIndex2] */
  { /*     3 */                                                          2u,                                                            1u,                                          0u,                                          0u,                                       5u,                                         0u, COM_NO_TXPDUINFOINDENDIDXOFIPDUGROUPINFO, COM_NO_TXPDUINFOINDSTARTIDXOFIPDUGROUPINFO },  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Rx_c1815ee7{FR}, /ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx, /ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx] */
  { /*     4 */                                                          3u,                                                            2u,                                          0u,                                          0u, COM_NO_RXPDUINFOINDENDIDXOFIPDUGROUPINFO, COM_NO_RXPDUINFOINDSTARTIDXOFIPDUGROUPINFO,                                       6u,                                         2u }   /* [/ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_01_ofas_1608066a_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_04_ofas_46c597d9_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_IPduGroupInfoOfRxPduInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_IPduGroupInfoOfRxPduInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_IPduGroupInfo
*/ 
#define COM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_IPduGroupInfoOfRxPduInfoIndType, COM_CONST) Com_IPduGroupInfoOfRxPduInfoInd[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     IPduGroupInfoOfRxPduInfoInd      Referable Keys */
  /*     0 */                           3u,  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*     1 */                           3u,  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*     2 */                           3u,  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /*     3 */                           3u,  /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx] */
  /*     4 */                           3u   /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx] */
};
#define COM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_IPduGroupInfoOfTxPduInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_IPduGroupInfoOfTxPduInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_IPduGroupInfo
*/ 
#define COM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_IPduGroupInfoOfTxPduInfoIndType, COM_CONST) Com_IPduGroupInfoOfTxPduInfoInd[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     IPduGroupInfoOfTxPduInfoInd      Referable Keys */
  /*     0 */                           1u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */                           1u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */                           4u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*     3 */                           4u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*     4 */                           4u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  /*     5 */                           4u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*     6 */                           2u   /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
};
#define COM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_IPduGroupInfoToSubIPduGroupsIndFL
**********************************************************************************************************************/
/** 
  \var    Com_IPduGroupInfoToSubIPduGroupsIndFL
  \brief  the indexes of the 1:1 sorted relation pointing to Com_IPduGroupInfo
*/ 
#define COM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_IPduGroupInfoToSubIPduGroupsIndType, COM_CONST) Com_IPduGroupInfoToSubIPduGroupsIndFL[4] = {  /* PRQA S 1514, 1533, 1504 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ExternalMcData */
  /* Index     IPduGroupInfoToSubIPduGroupsInd      Referable Keys */
  /*     0 */                               1u,  /* [/ActiveEcuC/Com/ComConfig/EMM_FAA_DBG] */
  /*     1 */                               2u,  /* [/ActiveEcuC/Com/ComConfig/NM_TX_Group] */
  /*     2 */                               3u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Rx_a583c704{FL}] */
  /*     3 */                               4u   /* [/ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}] */
};
#define COM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_IPduGroupInfoToSubIPduGroupsIndFR
**********************************************************************************************************************/
/** 
  \var    Com_IPduGroupInfoToSubIPduGroupsIndFR
  \brief  the indexes of the 1:1 sorted relation pointing to Com_IPduGroupInfo
*/ 
#define COM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_IPduGroupInfoToSubIPduGroupsIndType, COM_CONST) Com_IPduGroupInfoToSubIPduGroupsIndFR[3] = {  /* PRQA S 1514, 1533, 1504 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ExternalMcData */
  /* Index     IPduGroupInfoToSubIPduGroupsInd      Referable Keys */
  /*     0 */                               1u,  /* [/ActiveEcuC/Com/ComConfig/EMM_FAA_DBG] */
  /*     1 */                               3u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Rx_c1815ee7{FR}] */
  /*     2 */                               4u   /* [/ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}] */
};
#define COM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_MainFunctionRxStruct
**********************************************************************************************************************/
/** 
  \var    Com_MainFunctionRxStruct
  \details
  Element                                 Description
  RxPduInfoOfMainFunctionRxIndStartIdx    the start index of the 0:n relation pointing to Com_RxPduInfoOfMainFunctionRxInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_MainFunctionRxStructType, COM_CONST) Com_MainFunctionRxStruct[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxPduInfoOfMainFunctionRxIndStartIdx        Referable Keys */
  { /*     0 */                                   0u }   /* [ComMainFunctionRx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_MainFunctionTxStruct
**********************************************************************************************************************/
/** 
  \var    Com_MainFunctionTxStruct
  \details
  Element                                   Description
  TxCyclicPduOfMainFunctionTxIndStartIdx    the start index of the 0:n relation pointing to Com_TxCyclicPduOfMainFunctionTxInd
  TxPduInfoOfMainFunctionTxIndStartIdx      the start index of the 0:n relation pointing to Com_TxPduInfoOfMainFunctionTxInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_MainFunctionTxStructType, COM_CONST) Com_MainFunctionTxStruct[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxCyclicPduOfMainFunctionTxIndStartIdx  TxPduInfoOfMainFunctionTxIndStartIdx        Referable Keys */
  { /*     0 */                                     0u,                                   0u }   /* [ComMainFunctionTx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_PartitionsAlwaysActiveTxComIPdusStruct
**********************************************************************************************************************/
/** 
  \var    Com_PartitionsAlwaysActiveTxComIPdusStruct
  \details
  Element                         Description
  TxIPduGroupISRLockCounterIdx    the index of the 1:1 relation pointing to Com_TxIPduGroupISRLockCounter
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_PartitionsAlwaysActiveTxComIPdusStructType, COM_CONST) Com_PartitionsAlwaysActiveTxComIPdusStruct[1] = {  /* PRQA S 1514, 1533, 1504 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ExternalMcData */
    /* Index    TxIPduGroupISRLockCounterIdx        Referable Keys */
  { /*     0 */                           0u }   /* [noPartition] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfo
  \brief  Contains all signal layout information necessary for signal access within an I-PDU.
  \details
  Element                   Description
  IsGroupSignal         
  ApplType                  Application data type.
  BitLength                 Bit length of the signal or group signal.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  BufferIdx                 the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64
  BusAcc                    BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                Byte length of the signal or group signal.
  BytePosition              Little endian byte position of the signal or group signal within the I-PDU.
  InitValue                 the enum value of the according target of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  InitValueIdx              the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  RxPduInfoIdx              the index of the 1:1 relation pointing to Com_RxPduInfo
  SignalLengthInByte        The length of the Signal/GroupSignal in Byte
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxAccessInfoType, COM_CONST) Com_RxAccessInfo[46] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    IsGroupSignal  ApplType                           BitLength  BitPosition  BufferIdx  BusAcc                                 ByteLength  BytePosition  InitValue                                     InitValueIdx  RxPduInfoIdx  SignalLengthInByte  StartByteInPduPosition        Referable Keys */
  { /*     0 */          TRUE, COM_UINT32_APPLTYPEOFRXACCESSINFO,       24u,         16u,        0u,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         3u,           2u, COM_CONSTVALUEUINT32_INITVALUEOFRXACCESSINFO,           0u,           0u,                 4u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx/VehOdometer_oZONE_3A9_ofas_1c51a84c_Rx, /ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx] */
  { /*     1 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        5u,         16u,        0u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           1u,                 1u,                     2u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Day_oZONE_3B2_ofas_d665dea3_Rx, /ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  { /*     2 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        5u,         24u,        1u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           3u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           1u,                 1u,                     3u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Hr_oZONE_3B2_ofas_8dbdabef_Rx, /ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  { /*     3 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       10u,         56u,        0u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           7u, COM_CONSTVALUEUINT16_INITVALUEOFRXACCESSINFO,           2u,           1u,                 2u,                     6u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/MSec_oZONE_3B2_ofas_c9c9d776_Rx, /ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  { /*     4 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        6u,         32u,        2u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           4u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           1u,                 1u,                     4u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Min_oZONE_3B2_ofas_d3a84f3b_Rx, /ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  { /*     5 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,          8u,        3u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           1u,                 1u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Mth_oZONE_3B2_ofas_85d61cb0_Rx, /ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  { /*     6 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        6u,         40u,        4u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           5u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           1u,                 1u,                     5u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Sec_oZONE_3B2_ofas_78742ba2_Rx, /ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  { /*     7 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,        5u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           0u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           1u,                 1u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Yr_oZONE_3B2_ofas_1d4af9d1_Rx, /ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  { /*     8 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         13u,        6u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           2u,                 1u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/DrvState_SrvSts_oZONE_13C_ofas_0befbb64_Rx, /ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  { /*     9 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        3u,         16u,        7u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           2u,                 1u,                     2u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/DrvState_oZONE_13C_ofas_ed752b79_Rx, /ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  { /*    10 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         12u,        8u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           2u,                 1u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/OperatorState_SrvSts_oZONE_13C_ofas_12e139f1_Rx, /ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  { /*    11 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        3u,         19u,        9u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           2u,                 1u,                     2u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/OperatorState_oZONE_13C_ofas_1a8ad674_Rx, /ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  { /*    12 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         14u,       10u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           2u,                 1u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/VehStateDetailed_SrvSts_oZONE_13C_ofas_6c5e7153_Rx, /ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  { /*    13 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,         24u,       11u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           3u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           2u,                 1u,                     3u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/VehStateDetailed_oZONE_13C_ofas_4ac7dc26_Rx, /ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  { /*    14 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,       12u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           0u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           2u,                 1u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/ZONE_13C_CRC_oZONE_13C_ofas_e2f7ccfa_Rx, /ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  { /*    15 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,          8u,       13u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           2u,                 1u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/ZONE_13C_MsgCntr_oZONE_13C_ofas_b6b980ce_Rx, /ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  { /*    16 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         38u,       14u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           4u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           3u,                 1u,                     4u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Ascc_St_Req_Na_oZone_R_FAS_01_ofas_16ce8104_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    17 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         16u,       15u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           3u,                 1u,                     2u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Asmc_100Hz_Msg_AlvCtr_oZone_R_FAS_01_ofas_906d367d_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    18 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       16u,          8u,        1u,     COM_NBYTE_SW_BUSACCOFRXACCESSINFO,         2u,           1u, COM_CONSTVALUEUINT16_INITVALUEOFRXACCESSINFO,           2u,           3u,                 2u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Asmc_100Hz_Msg_Crc_oZone_R_FAS_01_ofas_9e00f8ce_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    19 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       12u,        116u,        2u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,          14u, COM_CONSTVALUEUINT16_INITVALUEOFRXACCESSINFO,           2u,           3u,                 2u,                    13u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Cons_Pwr_Limit_Watt_oZone_R_FAS_01_ofas_8cc6f31d_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    20 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         97u,       16u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,          12u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           3u,                 1u,                    12u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Pwr48_ConsLmt_Actv_Na_oZone_R_FAS_01_ofas_6389ca00_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    21 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         98u,       17u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,          12u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           3u,                 1u,                    12u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Pwr48_RegenLmt_Actv_Na_oZone_R_FAS_01_ofas_aa8f0ffe_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    22 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       12u,        120u,        3u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,          15u, COM_CONSTVALUEUINT16_INITVALUEOFRXACCESSINFO,           2u,           3u,                 2u,                    14u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Regen_Pwr_Limit_Watt_oZone_R_FAS_01_ofas_3bf357bc_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    23 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         96u,       18u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,          12u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           3u,                 1u,                    12u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sf_Diag_Mofr_Na_oZone_R_FAS_01_ofas_5c8861ac_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    24 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         99u,       19u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,          12u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           3u,                 1u,                    12u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sts_Cons_Pwr_Limit_Qfr_Na_oZone_R_FAS_01_ofas_79ad73a4_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    25 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,        100u,       20u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,          12u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           3u,                 1u,                    12u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sts_Regen_Pwr_Limit_Qfr_Na_oZone_R_FAS_01_ofas_f7be3014_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    26 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        3u,         29u,       21u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           3u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           3u,                 1u,                     3u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Zl_Setg_Req_Na_oZone_R_FAS_01_ofas_172f0ec4_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    27 */          TRUE, COM_UINT32_APPLTYPEOFRXACCESSINFO,       23u,         91u,        1u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         2u,          11u, COM_CONSTVALUEUINT32_INITVALUEOFRXACCESSINFO,           0u,           3u,                 4u,                     8u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Oper_Mins_oZone_R_FAS_01_ofas_5b8bef6b_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    28 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         24u,       22u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           3u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           3u,                 1u,                     3u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Sts_VehSpdLo_Na_oZone_R_FAS_01_ofas_b19cf606_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    29 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         26u,       23u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           3u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           3u,                 1u,                     3u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Sts_VehStaty_Na_oZone_R_FAS_01_ofas_16307a62_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    30 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,        9u,         45u,        4u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           5u, COM_CONSTVALUEUINT16_INITVALUEOFRXACCESSINFO,           1u,           3u,                 2u,                     4u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Fl_Mm_oZone_R_FAS_01_ofas_4872b9f5_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    31 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,        9u,         52u,        5u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           6u, COM_CONSTVALUEUINT16_INITVALUEOFRXACCESSINFO,           1u,           3u,                 2u,                     5u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Fr_Mm_oZone_R_FAS_01_ofas_5529a826_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    32 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,        9u,         59u,        6u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           7u, COM_CONSTVALUEUINT16_INITVALUEOFRXACCESSINFO,           1u,           3u,                 2u,                     6u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Rl_Mm_oZone_R_FAS_01_ofas_ebd8d460_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    33 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,        9u,         66u,        7u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           8u, COM_CONSTVALUEUINT16_INITVALUEOFRXACCESSINFO,           1u,           3u,                 2u,                     7u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Rr_Mm_oZone_R_FAS_01_ofas_f683c5b3_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    34 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         90u,       24u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,          11u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           3u,                 1u,                    11u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Fl_Qfr_Na_oZone_R_FAS_01_ofas_de4cdf40_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    35 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         89u,       25u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,          11u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           3u,                 1u,                    11u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Fr_Qfr_Na_oZone_R_FAS_01_ofas_cd00e836_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    36 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         88u,       26u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,          11u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           3u,                 1u,                    11u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Rl_Qfr_Na_oZone_R_FAS_01_ofas_0fea3094_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    37 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         28u,       27u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           3u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           3u,                 1u,                     3u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Rr_Qfr_Na_oZone_R_FAS_01_ofas_1ca607e2_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*    38 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         13u,       28u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           4u,                 1u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Ascc_F_Prio_Na_oZone_R_FAS_02_ofas_4e5a6117_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  { /*    39 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         14u,       29u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           4u,                 1u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Ascc_Mode_Req_Na_oZone_R_FAS_02_ofas_db5c0ecb_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  { /*    40 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,          8u,       30u,         COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           1u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           4u,                 1u,                     1u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Asmc_1000Hz_F_Cmd_AlvCtr_oZone_R_FAS_02_ofas_f604fd54_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  { /*    41 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,       31u,         COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           0u,  COM_CONSTVALUEUINT8_INITVALUEOFRXACCESSINFO,           0u,           4u,                 1u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Asmc_1000Hz_F_Cmd_Crc_oZone_R_FAS_02_ofas_51e284d3_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  { /*    42 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       12u,         56u,        8u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           7u, COM_CONSTVALUEUINT16_INITVALUEOFRXACCESSINFO,           0u,           4u,                 2u,                     6u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Fl_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_bbadfe60_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  { /*    43 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       12u,         28u,        9u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           3u, COM_CONSTVALUEUINT16_INITVALUEOFRXACCESSINFO,           0u,           4u,                 2u,                     2u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Fr_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_e38cdaee_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  { /*    44 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       12u,         32u,       10u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           4u, COM_CONSTVALUEUINT16_INITVALUEOFRXACCESSINFO,           0u,           4u,                 2u,                     3u },  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Rl_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_b7c2f462_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  { /*    45 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       12u,         52u,       11u, COM_NBITNBYTE_SW_BUSACCOFRXACCESSINFO,         1u,           6u, COM_CONSTVALUEUINT16_INITVALUEOFRXACCESSINFO,           0u,           4u,                 2u,                     5u }   /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Rr_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_efe3d0ec_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxCbkFuncPtr
**********************************************************************************************************************/
/** 
  \var    Com_RxCbkFuncPtr
  \brief  Function pointer table containing configured notification and invalid notifications function pointer for signals and signal groups.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComRxCbkType, COM_CONST) Com_RxCbkFuncPtr[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxCbkFuncPtr                                                           Referable Keys */
  /*     0 */ Rte_COMCbk_SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx ,  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_RxAck] */
  /*     1 */ Rte_COMCbk_SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx    /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_RxAck] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduCalloutFuncPtr
**********************************************************************************************************************/
/** 
  \var    Com_RxPduCalloutFuncPtr
  \brief  Rx I-PDU callout function pointer table.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComRxPduCalloutType, COM_CONST) Com_RxPduCalloutFuncPtr[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxPduCalloutFuncPtr                                Referable Keys */
  /*     0 */ ComIPduCallout_Zone_R_FAS_02_ofas_5c608f88_Rx    /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduInfo
  \brief  Contains all relevant common information for Rx I-PDUs.
  \details
  Element                                Description
  HandleRxPduDeferredIdx                 the index of the 0:1 relation pointing to Com_HandleRxPduDeferred
  IPduGroupInfoOfRxPduInfoIndStartIdx    the start index of the 0:n relation pointing to Com_IPduGroupInfoOfRxPduInfoInd
  MainFunctionRxStructIdx                the index of the 0:1 relation pointing to Com_MainFunctionRxStruct
  RxAccessInfoIndEndIdx                  the end index of the 0:n relation pointing to Com_RxAccessInfoInd
  RxAccessInfoIndStartIdx                the start index of the 0:n relation pointing to Com_RxAccessInfoInd
  RxDefPduBufferEndIdx                   the end index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxDefPduBufferStartIdx                 the start index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxPduCalloutFuncPtrIdx                 the index of the 0:1 relation pointing to Com_RxPduCalloutFuncPtr
  RxSigGrpInfoIndStartIdx                the start index of the 0:n relation pointing to Com_RxSigGrpInfoInd
  SignalProcessing                       Defines whether rx Pdu is processed in DEFERRED or IMMEDIATE fashion.
  Type                                   Defines whether rx Pdu is a NORMAL or TP IPdu.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxPduInfoType, COM_CONST) Com_RxPduInfo[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    HandleRxPduDeferredIdx                    IPduGroupInfoOfRxPduInfoIndStartIdx  MainFunctionRxStructIdx                    RxAccessInfoIndEndIdx  RxAccessInfoIndStartIdx  RxDefPduBufferEndIdx                    RxDefPduBufferStartIdx                    RxPduCalloutFuncPtrIdx                    RxSigGrpInfoIndStartIdx  SignalProcessing                           Type                              Referable Keys */
  { /*     0 */                                       0u,                                  0u,                                        0u,                    1u,                      0u,                                     8u,                                       0u, COM_NO_RXPDUCALLOUTFUNCPTRIDXOFRXPDUINFO,                      0u,  COM_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Rx_a583c704{FL}, ComMainFunctionRx] */
  { /*     1 */                                       1u,                                  1u,                                        0u,                    8u,                      1u,                                    16u,                                       8u, COM_NO_RXPDUCALLOUTFUNCPTRIDXOFRXPDUINFO,                      1u,  COM_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Rx_a583c704{FL}, ComMainFunctionRx] */
  { /*     2 */                                       2u,                                  2u,                                        0u,                   16u,                      8u,                                    24u,                                      16u, COM_NO_RXPDUCALLOUTFUNCPTRIDXOFRXPDUINFO,                      2u,  COM_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Rx_a583c704{FL}, ComMainFunctionRx] */
  { /*     3 */ COM_NO_HANDLERXPDUDEFERREDIDXOFRXPDUINFO,                                  3u, COM_NO_MAINFUNCTIONRXSTRUCTIDXOFRXPDUINFO,                   38u,                     16u, COM_NO_RXDEFPDUBUFFERENDIDXOFRXPDUINFO, COM_NO_RXDEFPDUBUFFERSTARTIDXOFRXPDUINFO, COM_NO_RXPDUCALLOUTFUNCPTRIDXOFRXPDUINFO,                      3u, COM_IMMEDIATE_SIGNALPROCESSINGOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Rx_a583c704{FL}] */
  { /*     4 */ COM_NO_HANDLERXPDUDEFERREDIDXOFRXPDUINFO,                                  4u, COM_NO_MAINFUNCTIONRXSTRUCTIDXOFRXPDUINFO,                   46u,                     38u, COM_NO_RXDEFPDUBUFFERENDIDXOFRXPDUINFO, COM_NO_RXDEFPDUBUFFERSTARTIDXOFRXPDUINFO,                                       0u,                      4u, COM_IMMEDIATE_SIGNALPROCESSINGOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO }   /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Rx_a583c704{FL}] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigGrpInfo
  \brief  Contains all relevant information for Rx signal groups.
  \details
  Element                                 Description
  ArrayAccessUsed                     
  ConstValueSigGrpArrayAccessEndIdx       the end index of the 0:n relation pointing to Com_ConstValueSigGrpArrayAccess
  ConstValueSigGrpArrayAccessStartIdx     the start index of the 0:n relation pointing to Com_ConstValueSigGrpArrayAccess
  RxAccessInfoGrpSigIndEndIdx             the end index of the 0:n relation pointing to Com_RxAccessInfoGrpSigInd
  RxAccessInfoGrpSigIndStartIdx           the start index of the 0:n relation pointing to Com_RxAccessInfoGrpSigInd
  RxCbkFuncPtrAckIdx                      the index of the 0:1 relation pointing to Com_RxCbkFuncPtr
  RxSigArrayAccessSigGrpBufferEndIdx      the end index of the 0:n relation pointing to Com_RxSigArrayAccessSigGrpBuffer
  RxSigArrayAccessSigGrpBufferStartIdx    the start index of the 0:n relation pointing to Com_RxSigArrayAccessSigGrpBuffer
  SignalProcessing                    
  StartBytePosition                       Least significant byte position of first group signal within the ComIPdu.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxSigGrpInfoType, COM_CONST) Com_RxSigGrpInfo[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ArrayAccessUsed  ConstValueSigGrpArrayAccessEndIdx  ConstValueSigGrpArrayAccessStartIdx  RxAccessInfoGrpSigIndEndIdx  RxAccessInfoGrpSigIndStartIdx  RxCbkFuncPtrAckIdx                       RxSigArrayAccessSigGrpBufferEndIdx  RxSigArrayAccessSigGrpBufferStartIdx  SignalProcessing                              StartBytePosition        Referable Keys */
  { /*     0 */            TRUE,                                3u,                                  0u,                          1u,                            0u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGGRPINFO,                                 3u,                                   0u,  COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u },  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx] */
  { /*     1 */            TRUE,                               17u,                                  9u,                          8u,                            1u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGGRPINFO,                                11u,                                   3u,  COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u },  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  { /*     2 */            TRUE,                                4u,                                  0u,                         16u,                            8u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGGRPINFO,                                15u,                                  11u,  COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u },  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  { /*     3 */            TRUE,                               16u,                                  0u,                         38u,                           16u,                                      0u,                                31u,                                  15u, COM_IMMEDIATE_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u },  /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  { /*     4 */            TRUE,                               23u,                                 15u,                         46u,                           38u,                                      1u,                                39u,                                  31u, COM_IMMEDIATE_SIGNALPROCESSINGOFRXSIGGRPINFO,                0u }   /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx, /ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxAccessInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxAccessInfo
  \brief  Contains all signal layout information necessary for signal access within an I-PDU.
  \details
  Element            Description
  TxGrpSigInfoIdx    the index of the 0:1 relation pointing to Com_TxGrpSigInfo
  TxSigInfoIdx       the index of the 0:1 relation pointing to Com_TxSigInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxAccessInfoType, COM_CONST) Com_TxAccessInfo[190] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxGrpSigInfoIdx                       TxSigInfoIdx                             Referable Keys */
  { /*     0 */                                   0u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Av_Pg_Sys_Est_Pa_oFAA_DBG_10Hz_MSG1_ofas_71fdbe16_Tx] */
  { /*     1 */                                   1u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Av_Pg_Var_Est_Err_CurMax_Pa_oFAA_DBG_10Hz_MSG1_ofas_6e3f0c59_Tx] */
  { /*     2 */                                   2u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Av_Pg_Var_Est_Err_LifeMax_Pa_oFAA_DBG_10Hz_MSG1_ofas_7b25705d_Tx] */
  { /*     3 */                                   3u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Dem_Event_Id_Na_oFAA_DBG_10Hz_MSG1_ofas_a275b2cf_Tx] */
  { /*     4 */                                   4u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Dem_Event_Status_Na_oFAA_DBG_10Hz_MSG1_ofas_c3543c1a_Tx] */
  { /*     5 */                                   5u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Low_Pwr_Mode_Na_oFAA_DBG_10Hz_MSG1_ofas_d14c34fa_Tx] */
  { /*     6 */                                   6u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtCtlr_Est_DegC_oFAA_DBG_10Hz_MSG1_ofas_5cedf796_Tx] */
  { /*     7 */                                   7u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtHrm_DegC_oFAA_DBG_10Hz_MSG1_ofas_f013f8c0_Tx] */
  { /*     8 */                                   8u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtPcb_DegC_oFAA_DBG_10Hz_MSG1_ofas_63937085_Tx] */
  { /*     9 */                                   9u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtPhase_U_DegC_oFAA_DBG_10Hz_MSG1_ofas_d8c16d63_Tx] */
  { /*    10 */                                  10u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtPhase_V_DegC_oFAA_DBG_10Hz_MSG1_ofas_9c60487b_Tx] */
  { /*    11 */                                  11u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtPhase_W_DegC_oFAA_DBG_10Hz_MSG1_ofas_a000ab73_Tx] */
  { /*    12 */                                  12u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Faa_F_De_Diag_Intgrn_Na_oFAA_DBG_10Hz_MSG1_ofas_667e2285_Tx] */
  { /*    13 */                                  13u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Faa_Intgr_Ff_Gain_Na_oFAA_DBG_10Hz_MSG1_ofas_1a5c5660_Tx] */
  { /*    14 */                                  14u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Faa_Traceability_Na_oFAA_DBG_10Hz_MSG1_ofas_93706440_Tx] */
  { /*    15 */                                  15u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Lic_Id_Na_oFAA_DBG_10Hz_MSG1_ofas_67e9fb17_Tx] */
  { /*    16 */                                  16u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Lic_Value_Na_oFAA_DBG_10Hz_MSG1_ofas_d6062740_Tx] */
  { /*    17 */                                  17u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Av_Pg_Var_AtHrm_Pa_oFAA_DBG_1000Hz_MSG1_ofas_6f6fdd00_Tx] */
  { /*    18 */                                  18u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Av_Pg_Var_Est_Err_Pa_oFAA_DBG_1000Hz_MSG1_ofas_03e7779c_Tx] */
  { /*    19 */                                  19u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_Ag_OfRotr_Rad_oFAA_DBG_1000Hz_MSG1_ofas_20034e15_Tx] */
  { /*    20 */                                  20u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_I_Bus_Ampr_oFAA_DBG_1000Hz_MSG1_ofas_4f0e9ebd_Tx] */
  { /*    21 */                                  21u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_Tq_Dmd_Nm_oFAA_DBG_1000Hz_MSG1_ofas_cc57825f_Tx] */
  { /*    22 */                                  22u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_Tq_Est_Nm_oFAA_DBG_1000Hz_MSG1_ofas_f2700289_Tx] */
  { /*    23 */                                  23u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_U_Bus_Volt_oFAA_DBG_1000Hz_MSG1_ofas_4900a2a1_Tx] */
  { /*    24 */                                  24u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_Vagr_OfRotr_Radsec_oFAA_DBG_1000Hz_MSG1_ofas_9a3dc9a7_Tx] */
  { /*    25 */                                  25u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Faa_F_AtActr_Est_Nwt_oFAA_DBG_1000Hz_MSG1_ofas_d5ddd14c_Tx] */
  { /*    26 */                                  26u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Whl_A_Z_AtAct_Est_Msec2_oFAA_DBG_1000Hz_MSG1_ofas_e8561405_Tx] */
  { /*    27 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                                0u },  /* [/ActiveEcuC/Com/ComConfig/ActvWakeup_FAS_FL_oNM_FAS_FL_ofas_81c5c771_Tx{FL}] */
  { /*    28 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                                1u },  /* [/ActiveEcuC/Com/ComConfig/NetMngtCoorn_FAS_FL_oNM_FAS_FL_ofas_a06d4057_Tx{FL}] */
  { /*    29 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                                2u },  /* [/ActiveEcuC/Com/ComConfig/NetMngtCoorrSleepRdy_FAS_FL_oNM_FAS_FL_ofas_4b94eb71_Tx{FL}] */
  { /*    30 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                                3u },  /* [/ActiveEcuC/Com/ComConfig/PN1_FAS_FL_oNM_FAS_FL_ofas_fa92001a_Tx{FL}] */
  { /*    31 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                                4u },  /* [/ActiveEcuC/Com/ComConfig/PN2_FAS_FL_oNM_FAS_FL_ofas_a28ca932_Tx{FL}] */
  { /*    32 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                                5u },  /* [/ActiveEcuC/Com/ComConfig/PN3_FAS_FL_oNM_FAS_FL_ofas_23a9cc15_Tx{FL}] */
  { /*    33 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                                6u },  /* [/ActiveEcuC/Com/ComConfig/PN4_FAS_FL_oNM_FAS_FL_ofas_12b1fb62_Tx{FL}] */
  { /*    34 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                                7u },  /* [/ActiveEcuC/Com/ComConfig/PN5_FAS_FL_oNM_FAS_FL_ofas_93949e45_Tx{FL}] */
  { /*    35 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                                8u },  /* [/ActiveEcuC/Com/ComConfig/PN6_FAS_FL_oNM_FAS_FL_ofas_cb8a376d_Tx{FL}] */
  { /*    36 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                                9u },  /* [/ActiveEcuC/Com/ComConfig/PN7_FAS_FL_oNM_FAS_FL_ofas_4aaf524a_Tx{FL}] */
  { /*    37 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               10u },  /* [/ActiveEcuC/Com/ComConfig/PN8_FAS_FL_oNM_FAS_FL_ofas_a9ba5983_Tx{FL}] */
  { /*    38 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               11u },  /* [/ActiveEcuC/Com/ComConfig/PN9_FAS_FL_oNM_FAS_FL_ofas_289f3ca4_Tx{FL}] */
  { /*    39 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               12u },  /* [/ActiveEcuC/Com/ComConfig/PN10_FAS_FL_oNM_FAS_FL_ofas_331c5783_Tx{FL}] */
  { /*    40 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               13u },  /* [/ActiveEcuC/Com/ComConfig/PN11_FAS_FL_oNM_FAS_FL_ofas_b23932a4_Tx{FL}] */
  { /*    41 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               14u },  /* [/ActiveEcuC/Com/ComConfig/PN12_FAS_FL_oNM_FAS_FL_ofas_ea279b8c_Tx{FL}] */
  { /*    42 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               15u },  /* [/ActiveEcuC/Com/ComConfig/PN13_FAS_FL_oNM_FAS_FL_ofas_6b02feab_Tx{FL}] */
  { /*    43 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               16u },  /* [/ActiveEcuC/Com/ComConfig/PN14_FAS_FL_oNM_FAS_FL_ofas_5a1ac9dc_Tx{FL}] */
  { /*    44 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               17u },  /* [/ActiveEcuC/Com/ComConfig/PN15_FAS_FL_oNM_FAS_FL_ofas_db3facfb_Tx{FL}] */
  { /*    45 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               18u },  /* [/ActiveEcuC/Com/ComConfig/PN16_FAS_FL_oNM_FAS_FL_ofas_832105d3_Tx{FL}] */
  { /*    46 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               19u },  /* [/ActiveEcuC/Com/ComConfig/PN17_FAS_FL_oNM_FAS_FL_ofas_020460f4_Tx{FL}] */
  { /*    47 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               20u },  /* [/ActiveEcuC/Com/ComConfig/PN18_FAS_FL_oNM_FAS_FL_ofas_e1116b3d_Tx{FL}] */
  { /*    48 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               21u },  /* [/ActiveEcuC/Com/ComConfig/PN19_FAS_FL_oNM_FAS_FL_ofas_60340e1a_Tx{FL}] */
  { /*    49 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               22u },  /* [/ActiveEcuC/Com/ComConfig/PN20_FAS_FL_oNM_FAS_FL_ofas_06f1e1d0_Tx{FL}] */
    /* Index    TxGrpSigInfoIdx                       TxSigInfoIdx                             Referable Keys */
  { /*    50 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               23u },  /* [/ActiveEcuC/Com/ComConfig/PN21_FAS_FL_oNM_FAS_FL_ofas_87d484f7_Tx{FL}] */
  { /*    51 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               24u },  /* [/ActiveEcuC/Com/ComConfig/PN22_FAS_FL_oNM_FAS_FL_ofas_dfca2ddf_Tx{FL}] */
  { /*    52 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               25u },  /* [/ActiveEcuC/Com/ComConfig/PN23_FAS_FL_oNM_FAS_FL_ofas_5eef48f8_Tx{FL}] */
  { /*    53 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               26u },  /* [/ActiveEcuC/Com/ComConfig/PN24_FAS_FL_oNM_FAS_FL_ofas_6ff77f8f_Tx{FL}] */
  { /*    54 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               27u },  /* [/ActiveEcuC/Com/ComConfig/PN25_FAS_FL_oNM_FAS_FL_ofas_eed21aa8_Tx{FL}] */
  { /*    55 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               28u },  /* [/ActiveEcuC/Com/ComConfig/PN26_FAS_FL_oNM_FAS_FL_ofas_b6ccb380_Tx{FL}] */
  { /*    56 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               29u },  /* [/ActiveEcuC/Com/ComConfig/PN27_FAS_FL_oNM_FAS_FL_ofas_37e9d6a7_Tx{FL}] */
  { /*    57 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               30u },  /* [/ActiveEcuC/Com/ComConfig/PN28_FAS_FL_oNM_FAS_FL_ofas_d4fcdd6e_Tx{FL}] */
  { /*    58 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               31u },  /* [/ActiveEcuC/Com/ComConfig/PN29_FAS_FL_oNM_FAS_FL_ofas_55d9b849_Tx{FL}] */
  { /*    59 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               32u },  /* [/ActiveEcuC/Com/ComConfig/PN30_FAS_FL_oNM_FAS_FL_ofas_a37a71de_Tx{FL}] */
  { /*    60 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               33u },  /* [/ActiveEcuC/Com/ComConfig/PN31_FAS_FL_oNM_FAS_FL_ofas_225f14f9_Tx{FL}] */
  { /*    61 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               34u },  /* [/ActiveEcuC/Com/ComConfig/PN32_FAS_FL_oNM_FAS_FL_ofas_7a41bdd1_Tx{FL}] */
  { /*    62 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               35u },  /* [/ActiveEcuC/Com/ComConfig/PN33_FAS_FL_oNM_FAS_FL_ofas_fb64d8f6_Tx{FL}] */
  { /*    63 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               36u },  /* [/ActiveEcuC/Com/ComConfig/PN34_FAS_FL_oNM_FAS_FL_ofas_ca7cef81_Tx{FL}] */
  { /*    64 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               37u },  /* [/ActiveEcuC/Com/ComConfig/PN35_FAS_FL_oNM_FAS_FL_ofas_4b598aa6_Tx{FL}] */
  { /*    65 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               38u },  /* [/ActiveEcuC/Com/ComConfig/PN36_FAS_FL_oNM_FAS_FL_ofas_1347238e_Tx{FL}] */
  { /*    66 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               39u },  /* [/ActiveEcuC/Com/ComConfig/PN37_FAS_FL_oNM_FAS_FL_ofas_926246a9_Tx{FL}] */
  { /*    67 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               40u },  /* [/ActiveEcuC/Com/ComConfig/PN38_FAS_FL_oNM_FAS_FL_ofas_71774d60_Tx{FL}] */
  { /*    68 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               41u },  /* [/ActiveEcuC/Com/ComConfig/PN39_FAS_FL_oNM_FAS_FL_ofas_f0522847_Tx{FL}] */
  { /*    69 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               42u },  /* [/ActiveEcuC/Com/ComConfig/PN40_FAS_FL_oNM_FAS_FL_ofas_6d2a8d76_Tx{FL}] */
  { /*    70 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               43u },  /* [/ActiveEcuC/Com/ComConfig/PN41_FAS_FL_oNM_FAS_FL_ofas_ec0fe851_Tx{FL}] */
  { /*    71 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               44u },  /* [/ActiveEcuC/Com/ComConfig/PN42_FAS_FL_oNM_FAS_FL_ofas_b4114179_Tx{FL}] */
  { /*    72 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               45u },  /* [/ActiveEcuC/Com/ComConfig/PN43_FAS_FL_oNM_FAS_FL_ofas_3534245e_Tx{FL}] */
  { /*    73 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               46u },  /* [/ActiveEcuC/Com/ComConfig/PN44_FAS_FL_oNM_FAS_FL_ofas_042c1329_Tx{FL}] */
  { /*    74 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               47u },  /* [/ActiveEcuC/Com/ComConfig/PN45_FAS_FL_oNM_FAS_FL_ofas_8509760e_Tx{FL}] */
  { /*    75 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               48u },  /* [/ActiveEcuC/Com/ComConfig/PN46_FAS_FL_oNM_FAS_FL_ofas_dd17df26_Tx{FL}] */
  { /*    76 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               49u },  /* [/ActiveEcuC/Com/ComConfig/PN47_FAS_FL_oNM_FAS_FL_ofas_5c32ba01_Tx{FL}] */
  { /*    77 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               50u },  /* [/ActiveEcuC/Com/ComConfig/PN48_FAS_FL_oNM_FAS_FL_ofas_bf27b1c8_Tx{FL}] */
  { /*    78 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               51u },  /* [/ActiveEcuC/Com/ComConfig/PtlNetInfo_FAS_FL_oNM_FAS_FL_ofas_462207c9_Tx{FL}] */
  { /*    79 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               52u },  /* [/ActiveEcuC/Com/ComConfig/RepMsgReq_FAS_FL_oNM_FAS_FL_ofas_b12e902d_Tx{FL}] */
  { /*    80 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               53u },  /* [/ActiveEcuC/Com/ComConfig/ResdBit1_FAS_FL_oNM_FAS_FL_ofas_cc176e8f_Tx{FL}] */
  { /*    81 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               54u },  /* [/ActiveEcuC/Com/ComConfig/ResdBit2_FAS_FL_oNM_FAS_FL_ofas_9409c7a7_Tx{FL}] */
  { /*    82 */                                  27u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Ascc_Id_Sw_Fl_Na_oFAS_FL_01_ofas_f77eab30_Tx{FL}] */
  { /*    83 */                                  28u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Ascc_Mode_Fb_Fl_Na_oFAS_FL_01_ofas_5562dd98_Tx{FL}] */
  { /*    84 */                                  29u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Ascc_St_Fb_Fl_Na_oFAS_FL_01_ofas_11d7f25b_Tx{FL}] */
  { /*    85 */                                  30u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_25Hz_Msg_Fl_AlvCtr_oFAS_FL_01_ofas_3c3314e5_Tx{FL}] */
  { /*    86 */                                  31u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_25Hz_Msg_Fl_Crc_oFAS_FL_01_ofas_0d9e2669_Tx{FL}] */
  { /*    87 */                                  32u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_Amnt_ActunCpby_Fl_Na_oFAS_FL_01_ofas_7fabf71a_Tx{FL}] */
  { /*    88 */                                  33u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_Amnt_CpbyMrgn_Fl_Na_oFAS_FL_01_ofas_295a7b85_Tx{FL}] */
  { /*    89 */                                  34u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_Id_Hw_Fl_Na_oFAS_FL_01_ofas_2f29c9bf_Tx{FL}] */
  { /*    90 */                                  35u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_Sts_Sst_Fl_Na_oFAS_FL_01_ofas_51678bae_Tx{FL}] */
  { /*    91 */                                  36u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Fas_Id_Sys_Fl_Na_oFAS_FL_01_ofas_aa9a9d0b_Tx{FL}] */
  { /*    92 */                                  37u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Av_Pg_Var_AtHrm_Fl_Pa_oFAS_FL_02_ofas_0d916da2_Tx{FL}] */
  { /*    93 */                                  38u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Av_Pg_Var_Est_Err_Fl_Pa_oFAS_FL_02_ofas_9ff12b86_Tx{FL}] */
  { /*    94 */                                  39u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_Ag_OfRotr_Fl_Rad_oFAS_FL_02_ofas_59c66e55_Tx{FL}] */
  { /*    95 */                                  40u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_I_Bus_Fl_Ampr_oFAS_FL_02_ofas_f75a8a56_Tx{FL}] */
  { /*    96 */                                  41u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_Tq_Dmd_Fl_Nm_oFAS_FL_02_ofas_4abbcdf2_Tx{FL}] */
  { /*    97 */                                  42u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_Tq_Est_Fl_Nm_oFAS_FL_02_ofas_f319ca63_Tx{FL}] */
  { /*    98 */                                  43u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_U_Bus_Fl_Volt_oFAS_FL_02_ofas_6878397d_Tx{FL}] */
  { /*    99 */                                  44u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_Vagr_OfRotr_Fl_Radsec_oFAS_FL_02_ofas_af01be21_Tx{FL}] */
    /* Index    TxGrpSigInfoIdx                       TxSigInfoIdx                             Referable Keys */
  { /*   100 */                                  45u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_F_Fl_AtActr_Est_Nwt_oFAS_FL_02_ofas_373343d3_Tx{FL}] */
  { /*   101 */                                  46u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Pwr_UBus48_Fl_Watt_oFAS_FL_02_ofas_9620f2b6_Tx{FL}] */
  { /*   102 */                                  47u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Sts_F_Est_FL_Na_oFAS_FL_02_ofas_390b19f4_Tx{FL}] */
  { /*   103 */                                  48u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Sts_Pwr48_Fl_ConsLmt_Na_oFAS_FL_02_ofas_9993c734_Tx{FL}] */
  { /*   104 */                                  49u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Sts_Pwr48_Fl_Qfr_Na_oFAS_FL_02_ofas_4f2de231_Tx{FL}] */
  { /*   105 */                                  50u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Sts_Pwr48_Fl_RegenLmt_Na_oFAS_FL_02_ofas_d5ec7c65_Tx{FL}] */
  { /*   106 */                                  51u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Whl_A_Z_Fl_AtAct_Est_Msec2_oFAS_FL_02_ofas_26f533bc_Tx{FL}] */
  { /*   107 */                                  52u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Whl_Sts_AZ_Fl_Qfr_Na_oFAS_FL_02_ofas_25007f4a_Tx{FL}] */
  { /*   108 */                                  53u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_01_oFAS_FL_04_ofas_989e7715_Tx{FL}] */
  { /*   109 */                                  54u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_02_oFAS_FL_04_ofas_cb042c91_Tx{FL}] */
  { /*   110 */                                  55u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_03_oFAS_FL_04_ofas_4ca2e7d2_Tx{FL}] */
  { /*   111 */                                  56u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_04_oFAS_FL_04_ofas_6c309b99_Tx{FL}] */
  { /*   112 */                                  57u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_05_oFAS_FL_04_ofas_eb9650da_Tx{FL}] */
  { /*   113 */                                  58u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_06_oFAS_FL_04_ofas_b80c0b5e_Tx{FL}] */
  { /*   114 */                                  59u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_07_oFAS_FL_04_ofas_3faac01d_Tx{FL}] */
  { /*   115 */                                  60u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_08_oFAS_FL_04_ofas_f928f3c8_Tx{FL}] */
  { /*   116 */                                  61u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_09_oFAS_FL_04_ofas_7e8e388b_Tx{FL}] */
  { /*   117 */                                  62u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_10_oFAS_FL_04_ofas_f06a0ab7_Tx{FL}] */
  { /*   118 */                                  63u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_11_oFAS_FL_04_ofas_77ccc1f4_Tx{FL}] */
  { /*   119 */                                  64u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_12_oFAS_FL_04_ofas_24569a70_Tx{FL}] */
  { /*   120 */                                  65u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_13_oFAS_FL_04_ofas_a3f05133_Tx{FL}] */
  { /*   121 */                                  66u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_14_oFAS_FL_04_ofas_83622d78_Tx{FL}] */
  { /*   122 */                                  67u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_15_oFAS_FL_04_ofas_04c4e63b_Tx{FL}] */
  { /*   123 */                                  68u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_16_oFAS_FL_04_ofas_575ebdbf_Tx{FL}] */
  { /*   124 */                                  69u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_17_oFAS_FL_04_ofas_d0f876fc_Tx{FL}] */
  { /*   125 */                                  70u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_18_oFAS_FL_04_ofas_167a4529_Tx{FL}] */
  { /*   126 */                                  71u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_19_oFAS_FL_04_ofas_91dc8e6a_Tx{FL}] */
  { /*   127 */                                  72u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_20_oFAS_FL_04_ofas_1aecd7d5_Tx{FL}] */
  { /*   128 */                                  73u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_21_oFAS_FL_04_ofas_9d4a1c96_Tx{FL}] */
  { /*   129 */                                  74u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_22_oFAS_FL_04_ofas_ced04712_Tx{FL}] */
  { /*   130 */                                  75u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_23_oFAS_FL_04_ofas_49768c51_Tx{FL}] */
  { /*   131 */                                  76u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_24_oFAS_FL_04_ofas_69e4f01a_Tx{FL}] */
  { /*   132 */                                  77u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_25_oFAS_FL_04_ofas_ee423b59_Tx{FL}] */
  { /*   133 */                                  78u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_26_oFAS_FL_04_ofas_bdd860dd_Tx{FL}] */
  { /*   134 */                                  79u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_27_oFAS_FL_04_ofas_3a7eab9e_Tx{FL}] */
  { /*   135 */                                  80u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_28_oFAS_FL_04_ofas_fcfc984b_Tx{FL}] */
  { /*   136 */                                  81u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_29_oFAS_FL_04_ofas_7b5a5308_Tx{FL}] */
  { /*   137 */                                  82u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_30_oFAS_FL_04_ofas_f5be6134_Tx{FL}] */
  { /*   138 */                                  83u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_31_oFAS_FL_04_ofas_7218aa77_Tx{FL}] */
  { /*   139 */                                  84u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_32_oFAS_FL_04_ofas_2182f1f3_Tx{FL}] */
  { /*   140 */                                  85u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_33_oFAS_FL_04_ofas_a6243ab0_Tx{FL}] */
  { /*   141 */                                  86u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_34_oFAS_FL_04_ofas_86b646fb_Tx{FL}] */
  { /*   142 */                                  87u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_35_oFAS_FL_04_ofas_01108db8_Tx{FL}] */
  { /*   143 */                                  88u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_36_oFAS_FL_04_ofas_528ad63c_Tx{FL}] */
  { /*   144 */                                  89u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_37_oFAS_FL_04_ofas_d52c1d7f_Tx{FL}] */
  { /*   145 */                                  90u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_38_oFAS_FL_04_ofas_13ae2eaa_Tx{FL}] */
  { /*   146 */                                  91u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_39_oFAS_FL_04_ofas_9408e5e9_Tx{FL}] */
  { /*   147 */                                  92u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_40_oFAS_FL_04_ofas_14906b50_Tx{FL}] */
  { /*   148 */                                  93u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_41_oFAS_FL_04_ofas_9336a013_Tx{FL}] */
  { /*   149 */                                  94u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_42_oFAS_FL_04_ofas_c0acfb97_Tx{FL}] */
    /* Index    TxGrpSigInfoIdx                       TxSigInfoIdx                             Referable Keys */
  { /*   150 */                                  95u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_43_oFAS_FL_04_ofas_470a30d4_Tx{FL}] */
  { /*   151 */                                  96u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_44_oFAS_FL_04_ofas_67984c9f_Tx{FL}] */
  { /*   152 */                                  97u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_45_oFAS_FL_04_ofas_e03e87dc_Tx{FL}] */
  { /*   153 */                                  98u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_46_oFAS_FL_04_ofas_b3a4dc58_Tx{FL}] */
  { /*   154 */                                  99u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_47_oFAS_FL_04_ofas_3402171b_Tx{FL}] */
  { /*   155 */                                 100u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_48_oFAS_FL_04_ofas_f28024ce_Tx{FL}] */
  { /*   156 */                                 101u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_49_oFAS_FL_04_ofas_7526ef8d_Tx{FL}] */
  { /*   157 */                                 102u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_50_oFAS_FL_04_ofas_fbc2ddb1_Tx{FL}] */
  { /*   158 */                                 103u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_51_oFAS_FL_04_ofas_7c6416f2_Tx{FL}] */
  { /*   159 */                                 104u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_52_oFAS_FL_04_ofas_2ffe4d76_Tx{FL}] */
  { /*   160 */                                 105u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_53_oFAS_FL_04_ofas_a8588635_Tx{FL}] */
  { /*   161 */                                 106u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_54_oFAS_FL_04_ofas_88cafa7e_Tx{FL}] */
  { /*   162 */                                 107u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_55_oFAS_FL_04_ofas_0f6c313d_Tx{FL}] */
  { /*   163 */                                 108u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_56_oFAS_FL_04_ofas_5cf66ab9_Tx{FL}] */
  { /*   164 */                                 109u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_57_oFAS_FL_04_ofas_db50a1fa_Tx{FL}] */
  { /*   165 */                                 110u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_58_oFAS_FL_04_ofas_1dd2922f_Tx{FL}] */
  { /*   166 */                                 111u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_59_oFAS_FL_04_ofas_9a74596c_Tx{FL}] */
  { /*   167 */                                 112u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_60_oFAS_FL_04_ofas_114400d3_Tx{FL}] */
  { /*   168 */                                 113u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_61_oFAS_FL_04_ofas_96e2cb90_Tx{FL}] */
  { /*   169 */                                 114u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_62_oFAS_FL_04_ofas_c5789014_Tx{FL}] */
  { /*   170 */                                 115u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_63_oFAS_FL_04_ofas_42de5b57_Tx{FL}] */
  { /*   171 */                                 116u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_64_oFAS_FL_04_ofas_624c271c_Tx{FL}] */
  { /*   172 */                                 117u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Av_Pg_Sys_Est_Fl_Pa_oFAS_FL_05_ofas_a7ba7e9f_Tx{FL}] */
  { /*   173 */                                 118u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Av_Pg_Var_Est_Err_CurMax_Fl_Pa_oFAS_FL_05_ofas_d70ca43a_Tx{FL}] */
  { /*   174 */                                 119u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Av_Pg_Var_Est_Err_LifeMax_Fl_Pa_oFAS_FL_05_ofas_57e0cbd6_Tx{FL}] */
  { /*   175 */                                 120u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Dem_Event_Id_Fl_Na_oFAS_FL_05_ofas_21fc113b_Tx{FL}] */
  { /*   176 */                                 121u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Dem_Event_Status_Fl_Na_oFAS_FL_05_ofas_0a919968_Tx{FL}] */
  { /*   177 */                                 122u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Low_Pwr_Mode_Fl_Na_oFAS_FL_05_ofas_f0f62611_Tx{FL}] */
  { /*   178 */                                 123u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtCtlr_Est_Fl_DegC_oFAS_FL_05_ofas_dd8138bf_Tx{FL}] */
  { /*   179 */                                 124u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtHrm_Fl_DegC_oFAS_FL_05_ofas_4ef817f6_Tx{FL}] */
  { /*   180 */                                 125u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtPcb_Fl_DegC_oFAS_FL_05_ofas_7d1af8d9_Tx{FL}] */
  { /*   181 */                                 126u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtPhase_U_Fl_DegC_oFAS_FL_05_ofas_c5047512_Tx{FL}] */
  { /*   182 */                                 127u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtPhase_V_Fl_DegC_oFAS_FL_05_ofas_f0e9c341_Tx{FL}] */
  { /*   183 */                                 128u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtPhase_W_Fl_DegC_oFAS_FL_05_ofas_5562534f_Tx{FL}] */
  { /*   184 */                                 129u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Faa_F_De_Diag_Intgrn_Fl_Na_oFAS_FL_05_ofas_661416ee_Tx{FL}] */
  { /*   185 */                                 130u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Faa_Intgr_Ff_Gain_Fl_Na_oFAS_FL_05_ofas_6dd03686_Tx{FL}] */
  { /*   186 */                                 131u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Faa_Traceability_Fl_Na_oFAS_FL_05_ofas_4796987d_Tx{FL}] */
  { /*   187 */                                 132u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Lic_Id_Fl_Na_oFAS_FL_05_ofas_5ff5350f_Tx{FL}] */
  { /*   188 */                                 133u, COM_NO_TXSIGINFOIDXOFTXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Lic_Value_Fl_Na_oFAS_FL_05_ofas_2938771f_Tx{FL}] */
  { /*   189 */ COM_NO_TXGRPSIGINFOIDXOFTXACCESSINFO,                               55u }   /* [/ActiveEcuC/Com/ComConfig/ScrNodId_FAS_FL_oNM_FAS_FL_ofas_d25817e9_Tx{FL}] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCyclicPdu
**********************************************************************************************************************/
/** 
  \var    Com_TxCyclicPdu
  \details
  Element         Description
  TxPduInfoIdx    the index of the 1:1 relation pointing to Com_TxPduInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxCyclicPduType, COM_CONST) Com_TxCyclicPdu[5] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxPduInfoIdx        Referable Keys */
  { /*     0 */           0u },  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, ComMainFunctionTx] */
  { /*     1 */           1u },  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, ComMainFunctionTx] */
  { /*     2 */           3u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}, ComMainFunctionTx] */
  { /*     3 */           4u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}, ComMainFunctionTx] */
  { /*     4 */           5u }   /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}, ComMainFunctionTx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxGrpSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxGrpSigInfo
  \brief  Contains all relevant information for Tx group signals.
  \details
  Element                   Description
  DynSignal                 TRUE if the Signal is a dynamic length signal (UINT8_DYN), FALSE otherwise.
  ApplType                  Application data type.
  BitLength                 Bit length of the signal or group signal.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  BusAcc                    BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                Byte length of the signal or group signal.
  BytePosition              Little endian byte position of the signal or group signal within the I-PDU.
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
  TxAccessInfoIdx           the index of the 1:1 relation pointing to Com_TxAccessInfo
  TxSigGrpInfoIdx           the index of the 1:1 relation pointing to Com_TxSigGrpInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxGrpSigInfoType, COM_CONST) Com_TxGrpSigInfo[134] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DynSignal  ApplType                           BitLength  BitPosition  BusAcc                                 ByteLength  BytePosition  StartByteInPduPosition  TxAccessInfoIdx  TxSigGrpInfoIdx        Referable Keys */
  { /*     0 */     FALSE, COM_UINT16_APPLTYPEOFTXGRPSIGINFO,       10u,         94u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          11u,                    10u,              0u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Av_Pg_Sys_Est_Pa_oFAA_DBG_10Hz_MSG1_ofas_71fdbe16_Tx] */
  { /*     1 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,        124u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          15u,                    14u,              1u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Av_Pg_Var_Est_Err_CurMax_Pa_oFAA_DBG_10Hz_MSG1_ofas_6e3f0c59_Tx] */
  { /*     2 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,        132u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          16u,                    15u,              2u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Av_Pg_Var_Est_Err_LifeMax_Pa_oFAA_DBG_10Hz_MSG1_ofas_7b25705d_Tx] */
  { /*     3 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         24u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           3u,                     3u,              3u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Dem_Event_Id_Na_oFAA_DBG_10Hz_MSG1_ofas_a275b2cf_Tx] */
  { /*     4 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         32u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           4u,                     4u,              4u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Dem_Event_Status_Na_oFAA_DBG_10Hz_MSG1_ofas_c3543c1a_Tx] */
  { /*     5 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,        101u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,          12u,                    12u,              5u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Low_Pwr_Mode_Na_oFAA_DBG_10Hz_MSG1_ofas_d14c34fa_Tx] */
  { /*     6 */     FALSE,  COM_SINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         16u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           2u,                     2u,              6u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtCtlr_Est_DegC_oFAA_DBG_10Hz_MSG1_ofas_5cedf796_Tx] */
  { /*     7 */     FALSE,  COM_SINT8_APPLTYPEOFTXGRPSIGINFO,        8u,          8u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           1u,                     1u,              7u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtHrm_DegC_oFAA_DBG_10Hz_MSG1_ofas_f013f8c0_Tx] */
  { /*     8 */     FALSE,  COM_SINT8_APPLTYPEOFTXGRPSIGINFO,        8u,          0u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           0u,                     0u,              8u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtPcb_DegC_oFAA_DBG_10Hz_MSG1_ofas_63937085_Tx] */
  { /*     9 */     FALSE,  COM_SINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         56u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           7u,                     7u,              9u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtPhase_U_DegC_oFAA_DBG_10Hz_MSG1_ofas_d8c16d63_Tx] */
  { /*    10 */     FALSE,  COM_SINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         64u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           8u,                     8u,             10u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtPhase_V_DegC_oFAA_DBG_10Hz_MSG1_ofas_9c60487b_Tx] */
  { /*    11 */     FALSE,  COM_SINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         72u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           9u,                     9u,             11u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtPhase_W_DegC_oFAA_DBG_10Hz_MSG1_ofas_a000ab73_Tx] */
  { /*    12 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,        102u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          12u,                    11u,             12u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Faa_F_De_Diag_Intgrn_Na_oFAA_DBG_10Hz_MSG1_ofas_667e2285_Tx] */
  { /*    13 */     FALSE, COM_SINT16_APPLTYPEOFTXGRPSIGINFO,        9u,        108u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          13u,                    12u,             13u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Faa_Intgr_Ff_Gain_Na_oFAA_DBG_10Hz_MSG1_ofas_1a5c5660_Tx] */
  { /*    14 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,        116u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          14u,                    13u,             14u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Faa_Traceability_Na_oFAA_DBG_10Hz_MSG1_ofas_93706440_Tx] */
  { /*    15 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         40u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           5u,                     5u,             15u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Lic_Id_Na_oFAA_DBG_10Hz_MSG1_ofas_67e9fb17_Tx] */
  { /*    16 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         48u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           6u,                     6u,             16u,              0u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Lic_Value_Na_oFAA_DBG_10Hz_MSG1_ofas_d6062740_Tx] */
  { /*    17 */     FALSE, COM_UINT16_APPLTYPEOFTXGRPSIGINFO,       13u,         38u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,           4u,                     2u,             17u,              1u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Av_Pg_Var_AtHrm_Pa_oFAA_DBG_1000Hz_MSG1_ofas_6f6fdd00_Tx] */
  { /*    18 */     FALSE, COM_UINT16_APPLTYPEOFTXGRPSIGINFO,       12u,        119u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          14u,                    12u,             18u,              1u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Av_Pg_Var_Est_Err_Pa_oFAA_DBG_1000Hz_MSG1_ofas_03e7779c_Tx] */
  { /*    19 */     FALSE, COM_UINT16_APPLTYPEOFTXGRPSIGINFO,        9u,         51u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,           6u,                     5u,             19u,              1u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_Ag_OfRotr_Rad_oFAA_DBG_1000Hz_MSG1_ofas_20034e15_Tx] */
  { /*    20 */     FALSE, COM_SINT16_APPLTYPEOFTXGRPSIGINFO,       11u,         13u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,           1u,                     0u,             20u,              1u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_I_Bus_Ampr_oFAA_DBG_1000Hz_MSG1_ofas_4f0e9ebd_Tx] */
  { /*    21 */     FALSE, COM_SINT16_APPLTYPEOFTXGRPSIGINFO,       11u,         95u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          11u,                     9u,             21u,              1u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_Tq_Dmd_Nm_oFAA_DBG_1000Hz_MSG1_ofas_cc57825f_Tx] */
  { /*    22 */     FALSE, COM_SINT16_APPLTYPEOFTXGRPSIGINFO,       11u,         56u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,           7u,                     6u,             22u,              1u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_Tq_Est_Nm_oFAA_DBG_1000Hz_MSG1_ofas_f2700289_Tx] */
  { /*    23 */     FALSE, COM_UINT16_APPLTYPEOFTXGRPSIGINFO,       10u,         19u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,           2u,                     1u,             23u,              1u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_U_Bus_Volt_oFAA_DBG_1000Hz_MSG1_ofas_4900a2a1_Tx] */
  { /*    24 */     FALSE, COM_SINT16_APPLTYPEOFTXGRPSIGINFO,       10u,         44u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,           5u,                     4u,             24u,              1u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_Vagr_OfRotr_Radsec_oFAA_DBG_1000Hz_MSG1_ofas_9a3dc9a7_Tx] */
  { /*    25 */     FALSE, COM_SINT16_APPLTYPEOFTXGRPSIGINFO,       12u,         99u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          12u,                    11u,             25u,              1u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Faa_F_AtActr_Est_Nwt_oFAA_DBG_1000Hz_MSG1_ofas_d5ddd14c_Tx] */
  { /*    26 */     FALSE, COM_SINT16_APPLTYPEOFTXGRPSIGINFO,       14u,         74u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,           9u,                     8u,             26u,              1u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Whl_A_Z_AtAct_Est_Msec2_oFAA_DBG_1000Hz_MSG1_ofas_e8561405_Tx] */
  { /*    27 */     FALSE, COM_UINT32_APPLTYPEOFTXGRPSIGINFO,       24u,         40u,     COM_NBYTE_SW_BUSACCOFTXGRPSIGINFO,         3u,           5u,                     3u,             82u,              2u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Ascc_Id_Sw_Fl_Na_oFAS_FL_01_ofas_f77eab30_Tx{FL}] */
  { /*    28 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        3u,        115u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,          14u,                    14u,             83u,              2u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Ascc_Mode_Fb_Fl_Na_oFAS_FL_01_ofas_5562dd98_Tx{FL}] */
  { /*    29 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        2u,        118u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,          14u,                    14u,             84u,              2u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Ascc_St_Fb_Fl_Na_oFAS_FL_01_ofas_11d7f25b_Tx{FL}] */
  { /*    30 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         16u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           2u,                     2u,             85u,              2u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_25Hz_Msg_Fl_AlvCtr_oFAS_FL_01_ofas_3c3314e5_Tx{FL}] */
  { /*    31 */     FALSE, COM_UINT16_APPLTYPEOFTXGRPSIGINFO,       16u,          8u,     COM_NBYTE_SW_BUSACCOFTXGRPSIGINFO,         2u,           1u,                     0u,             86u,              2u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_25Hz_Msg_Fl_Crc_oFAS_FL_01_ofas_0d9e2669_Tx{FL}] */
  { /*    32 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        6u,         98u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,          12u,                    12u,             87u,              2u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_Amnt_ActunCpby_Fl_Na_oFAS_FL_01_ofas_7fabf71a_Tx{FL}] */
  { /*    33 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        6u,        122u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,          15u,                    15u,             88u,              2u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_Amnt_CpbyMrgn_Fl_Na_oFAS_FL_01_ofas_295a7b85_Tx{FL}] */
  { /*    34 */     FALSE, COM_UINT32_APPLTYPEOFTXGRPSIGINFO,       24u,         64u,     COM_NBYTE_SW_BUSACCOFTXGRPSIGINFO,         3u,           8u,                     6u,             89u,              2u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_Id_Hw_Fl_Na_oFAS_FL_01_ofas_2f29c9bf_Tx{FL}] */
  { /*    35 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        3u,        112u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,          14u,                    14u,             90u,              2u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_Sts_Sst_Fl_Na_oFAS_FL_01_ofas_51678bae_Tx{FL}] */
  { /*    36 */     FALSE, COM_UINT32_APPLTYPEOFTXGRPSIGINFO,       24u,         88u,     COM_NBYTE_SW_BUSACCOFTXGRPSIGINFO,         3u,          11u,                     9u,             91u,              2u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Fas_Id_Sys_Fl_Na_oFAS_FL_01_ofas_aa9a9d0b_Tx{FL}] */
  { /*    37 */     FALSE, COM_UINT16_APPLTYPEOFTXGRPSIGINFO,       13u,         51u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,           6u,                     5u,             92u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Av_Pg_Var_AtHrm_Fl_Pa_oFAS_FL_02_ofas_0d916da2_Tx{FL}] */
  { /*    38 */     FALSE, COM_UINT16_APPLTYPEOFTXGRPSIGINFO,       12u,        126u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          15u,                    13u,             93u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Av_Pg_Var_Est_Err_Fl_Pa_oFAS_FL_02_ofas_9ff12b86_Tx{FL}] */
  { /*    39 */     FALSE, COM_UINT16_APPLTYPEOFTXGRPSIGINFO,        9u,         64u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,           8u,                     7u,             94u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_Ag_OfRotr_Fl_Rad_oFAS_FL_02_ofas_59c66e55_Tx{FL}] */
  { /*    40 */     FALSE, COM_UINT16_APPLTYPEOFTXGRPSIGINFO,       11u,         13u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,           1u,                     0u,             95u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_I_Bus_Fl_Ampr_oFAS_FL_02_ofas_f75a8a56_Tx{FL}] */
  { /*    41 */     FALSE, COM_SINT16_APPLTYPEOFTXGRPSIGINFO,       11u,         90u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          11u,                    10u,             96u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_Tq_Dmd_Fl_Nm_oFAS_FL_02_ofas_4abbcdf2_Tx{FL}] */
  { /*    42 */     FALSE, COM_SINT16_APPLTYPEOFTXGRPSIGINFO,       11u,         85u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          10u,                     9u,             97u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_Tq_Est_Fl_Nm_oFAS_FL_02_ofas_f319ca63_Tx{FL}] */
  { /*    43 */     FALSE, COM_UINT16_APPLTYPEOFTXGRPSIGINFO,       10u,         32u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,           4u,                     3u,             98u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_U_Bus_Fl_Volt_oFAS_FL_02_ofas_6878397d_Tx{FL}] */
  { /*    44 */     FALSE, COM_SINT16_APPLTYPEOFTXGRPSIGINFO,       10u,         57u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,           7u,                     6u,             99u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_Vagr_OfRotr_Fl_Radsec_oFAS_FL_02_ofas_af01be21_Tx{FL}] */
  { /*    45 */     FALSE, COM_UINT16_APPLTYPEOFTXGRPSIGINFO,       12u,         16u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,           2u,                     1u,            100u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_F_Fl_AtActr_Est_Nwt_oFAS_FL_02_ofas_373343d3_Tx{FL}] */
  { /*    46 */     FALSE, COM_UINT16_APPLTYPEOFTXGRPSIGINFO,       10u,        142u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          17u,                    16u,            101u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Pwr_UBus48_Fl_Watt_oFAS_FL_02_ofas_9620f2b6_Tx{FL}] */
  { /*    47 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         26u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           3u,                     3u,            102u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Sts_F_Est_FL_Na_oFAS_FL_02_ofas_390b19f4_Tx{FL}] */
  { /*    48 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         12u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           1u,                     1u,            103u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Sts_Pwr48_Fl_ConsLmt_Na_oFAS_FL_02_ofas_9993c734_Tx{FL}] */
  { /*    49 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        2u,         27u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           3u,                     3u,            104u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Sts_Pwr48_Fl_Qfr_Na_oFAS_FL_02_ofas_4f2de231_Tx{FL}] */
    /* Index    DynSignal  ApplType                           BitLength  BitPosition  BusAcc                                 ByteLength  BytePosition  StartByteInPduPosition  TxAccessInfoIdx  TxSigGrpInfoIdx        Referable Keys */
  { /*    50 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         29u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           3u,                     3u,            105u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Sts_Pwr48_Fl_RegenLmt_Na_oFAS_FL_02_ofas_d5ec7c65_Tx{FL}] */
  { /*    51 */     FALSE, COM_SINT16_APPLTYPEOFTXGRPSIGINFO,       14u,        106u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          13u,                    12u,            106u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Whl_A_Z_Fl_AtAct_Est_Msec2_oFAS_FL_02_ofas_26f533bc_Tx{FL}] */
  { /*    52 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        2u,         88u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,          11u,                    11u,            107u,              3u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Whl_Sts_AZ_Fl_Qfr_Na_oFAS_FL_02_ofas_25007f4a_Tx{FL}] */
  { /*    53 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,          0u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           0u,                     0u,            108u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_01_oFAS_FL_04_ofas_989e7715_Tx{FL}] */
  { /*    54 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,          1u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           0u,                     0u,            109u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_02_oFAS_FL_04_ofas_cb042c91_Tx{FL}] */
  { /*    55 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,          2u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           0u,                     0u,            110u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_03_oFAS_FL_04_ofas_4ca2e7d2_Tx{FL}] */
  { /*    56 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,          3u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           0u,                     0u,            111u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_04_oFAS_FL_04_ofas_6c309b99_Tx{FL}] */
  { /*    57 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,          4u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           0u,                     0u,            112u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_05_oFAS_FL_04_ofas_eb9650da_Tx{FL}] */
  { /*    58 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,          5u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           0u,                     0u,            113u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_06_oFAS_FL_04_ofas_b80c0b5e_Tx{FL}] */
  { /*    59 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,          6u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           0u,                     0u,            114u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_07_oFAS_FL_04_ofas_3faac01d_Tx{FL}] */
  { /*    60 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,          7u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           0u,                     0u,            115u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_08_oFAS_FL_04_ofas_f928f3c8_Tx{FL}] */
  { /*    61 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,          8u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           1u,                     1u,            116u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_09_oFAS_FL_04_ofas_7e8e388b_Tx{FL}] */
  { /*    62 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,          9u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           1u,                     1u,            117u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_10_oFAS_FL_04_ofas_f06a0ab7_Tx{FL}] */
  { /*    63 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         10u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           1u,                     1u,            118u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_11_oFAS_FL_04_ofas_77ccc1f4_Tx{FL}] */
  { /*    64 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         11u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           1u,                     1u,            119u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_12_oFAS_FL_04_ofas_24569a70_Tx{FL}] */
  { /*    65 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         12u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           1u,                     1u,            120u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_13_oFAS_FL_04_ofas_a3f05133_Tx{FL}] */
  { /*    66 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         13u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           1u,                     1u,            121u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_14_oFAS_FL_04_ofas_83622d78_Tx{FL}] */
  { /*    67 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         14u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           1u,                     1u,            122u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_15_oFAS_FL_04_ofas_04c4e63b_Tx{FL}] */
  { /*    68 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         15u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           1u,                     1u,            123u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_16_oFAS_FL_04_ofas_575ebdbf_Tx{FL}] */
  { /*    69 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         16u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           2u,                     2u,            124u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_17_oFAS_FL_04_ofas_d0f876fc_Tx{FL}] */
  { /*    70 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         17u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           2u,                     2u,            125u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_18_oFAS_FL_04_ofas_167a4529_Tx{FL}] */
  { /*    71 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         18u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           2u,                     2u,            126u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_19_oFAS_FL_04_ofas_91dc8e6a_Tx{FL}] */
  { /*    72 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         19u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           2u,                     2u,            127u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_20_oFAS_FL_04_ofas_1aecd7d5_Tx{FL}] */
  { /*    73 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         20u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           2u,                     2u,            128u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_21_oFAS_FL_04_ofas_9d4a1c96_Tx{FL}] */
  { /*    74 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         21u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           2u,                     2u,            129u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_22_oFAS_FL_04_ofas_ced04712_Tx{FL}] */
  { /*    75 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         22u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           2u,                     2u,            130u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_23_oFAS_FL_04_ofas_49768c51_Tx{FL}] */
  { /*    76 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         23u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           2u,                     2u,            131u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_24_oFAS_FL_04_ofas_69e4f01a_Tx{FL}] */
  { /*    77 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         24u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           3u,                     3u,            132u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_25_oFAS_FL_04_ofas_ee423b59_Tx{FL}] */
  { /*    78 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         25u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           3u,                     3u,            133u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_26_oFAS_FL_04_ofas_bdd860dd_Tx{FL}] */
  { /*    79 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         26u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           3u,                     3u,            134u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_27_oFAS_FL_04_ofas_3a7eab9e_Tx{FL}] */
  { /*    80 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         27u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           3u,                     3u,            135u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_28_oFAS_FL_04_ofas_fcfc984b_Tx{FL}] */
  { /*    81 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         28u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           3u,                     3u,            136u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_29_oFAS_FL_04_ofas_7b5a5308_Tx{FL}] */
  { /*    82 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         29u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           3u,                     3u,            137u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_30_oFAS_FL_04_ofas_f5be6134_Tx{FL}] */
  { /*    83 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         30u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           3u,                     3u,            138u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_31_oFAS_FL_04_ofas_7218aa77_Tx{FL}] */
  { /*    84 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         31u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           3u,                     3u,            139u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_32_oFAS_FL_04_ofas_2182f1f3_Tx{FL}] */
  { /*    85 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         32u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           4u,                     4u,            140u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_33_oFAS_FL_04_ofas_a6243ab0_Tx{FL}] */
  { /*    86 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         33u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           4u,                     4u,            141u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_34_oFAS_FL_04_ofas_86b646fb_Tx{FL}] */
  { /*    87 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         34u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           4u,                     4u,            142u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_35_oFAS_FL_04_ofas_01108db8_Tx{FL}] */
  { /*    88 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         35u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           4u,                     4u,            143u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_36_oFAS_FL_04_ofas_528ad63c_Tx{FL}] */
  { /*    89 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         36u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           4u,                     4u,            144u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_37_oFAS_FL_04_ofas_d52c1d7f_Tx{FL}] */
  { /*    90 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         37u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           4u,                     4u,            145u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_38_oFAS_FL_04_ofas_13ae2eaa_Tx{FL}] */
  { /*    91 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         38u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           4u,                     4u,            146u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_39_oFAS_FL_04_ofas_9408e5e9_Tx{FL}] */
  { /*    92 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         39u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           4u,                     4u,            147u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_40_oFAS_FL_04_ofas_14906b50_Tx{FL}] */
  { /*    93 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         40u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           5u,                     5u,            148u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_41_oFAS_FL_04_ofas_9336a013_Tx{FL}] */
  { /*    94 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         41u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           5u,                     5u,            149u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_42_oFAS_FL_04_ofas_c0acfb97_Tx{FL}] */
  { /*    95 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         42u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           5u,                     5u,            150u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_43_oFAS_FL_04_ofas_470a30d4_Tx{FL}] */
  { /*    96 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         43u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           5u,                     5u,            151u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_44_oFAS_FL_04_ofas_67984c9f_Tx{FL}] */
  { /*    97 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         44u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           5u,                     5u,            152u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_45_oFAS_FL_04_ofas_e03e87dc_Tx{FL}] */
  { /*    98 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         45u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           5u,                     5u,            153u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_46_oFAS_FL_04_ofas_b3a4dc58_Tx{FL}] */
  { /*    99 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         46u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           5u,                     5u,            154u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_47_oFAS_FL_04_ofas_3402171b_Tx{FL}] */
    /* Index    DynSignal  ApplType                           BitLength  BitPosition  BusAcc                                 ByteLength  BytePosition  StartByteInPduPosition  TxAccessInfoIdx  TxSigGrpInfoIdx        Referable Keys */
  { /*   100 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         47u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           5u,                     5u,            155u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_48_oFAS_FL_04_ofas_f28024ce_Tx{FL}] */
  { /*   101 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         48u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           6u,                     6u,            156u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_49_oFAS_FL_04_ofas_7526ef8d_Tx{FL}] */
  { /*   102 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         49u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           6u,                     6u,            157u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_50_oFAS_FL_04_ofas_fbc2ddb1_Tx{FL}] */
  { /*   103 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         50u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           6u,                     6u,            158u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_51_oFAS_FL_04_ofas_7c6416f2_Tx{FL}] */
  { /*   104 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         51u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           6u,                     6u,            159u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_52_oFAS_FL_04_ofas_2ffe4d76_Tx{FL}] */
  { /*   105 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         52u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           6u,                     6u,            160u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_53_oFAS_FL_04_ofas_a8588635_Tx{FL}] */
  { /*   106 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         53u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           6u,                     6u,            161u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_54_oFAS_FL_04_ofas_88cafa7e_Tx{FL}] */
  { /*   107 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         54u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           6u,                     6u,            162u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_55_oFAS_FL_04_ofas_0f6c313d_Tx{FL}] */
  { /*   108 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         55u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           6u,                     6u,            163u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_56_oFAS_FL_04_ofas_5cf66ab9_Tx{FL}] */
  { /*   109 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         56u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           7u,                     7u,            164u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_57_oFAS_FL_04_ofas_db50a1fa_Tx{FL}] */
  { /*   110 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         57u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           7u,                     7u,            165u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_58_oFAS_FL_04_ofas_1dd2922f_Tx{FL}] */
  { /*   111 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         58u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           7u,                     7u,            166u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_59_oFAS_FL_04_ofas_9a74596c_Tx{FL}] */
  { /*   112 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         59u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           7u,                     7u,            167u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_60_oFAS_FL_04_ofas_114400d3_Tx{FL}] */
  { /*   113 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         60u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           7u,                     7u,            168u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_61_oFAS_FL_04_ofas_96e2cb90_Tx{FL}] */
  { /*   114 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         61u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           7u,                     7u,            169u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_62_oFAS_FL_04_ofas_c5789014_Tx{FL}] */
  { /*   115 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         62u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           7u,                     7u,            170u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_63_oFAS_FL_04_ofas_42de5b57_Tx{FL}] */
  { /*   116 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,         63u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,           7u,                     7u,            171u,              4u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_64_oFAS_FL_04_ofas_624c271c_Tx{FL}] */
  { /*   117 */     FALSE, COM_UINT16_APPLTYPEOFTXGRPSIGINFO,       10u,         94u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          11u,                    10u,            172u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Av_Pg_Sys_Est_Fl_Pa_oFAS_FL_05_ofas_a7ba7e9f_Tx{FL}] */
  { /*   118 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,        124u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          15u,                    14u,            173u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Av_Pg_Var_Est_Err_CurMax_Fl_Pa_oFAS_FL_05_ofas_d70ca43a_Tx{FL}] */
  { /*   119 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,        132u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          16u,                    15u,            174u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Av_Pg_Var_Est_Err_LifeMax_Fl_Pa_oFAS_FL_05_ofas_57e0cbd6_Tx{FL}] */
  { /*   120 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         48u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           6u,                     6u,            175u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Dem_Event_Id_Fl_Na_oFAS_FL_05_ofas_21fc113b_Tx{FL}] */
  { /*   121 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         56u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           7u,                     7u,            176u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Dem_Event_Status_Fl_Na_oFAS_FL_05_ofas_0a919968_Tx{FL}] */
  { /*   122 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        1u,        101u,         COM_NBIT_BUSACCOFTXGRPSIGINFO,         0u,          12u,                    12u,            177u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Low_Pwr_Mode_Fl_Na_oFAS_FL_05_ofas_f0f62611_Tx{FL}] */
  { /*   123 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         16u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           2u,                     2u,            178u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtCtlr_Est_Fl_DegC_oFAS_FL_05_ofas_dd8138bf_Tx{FL}] */
  { /*   124 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,          8u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           1u,                     1u,            179u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtHrm_Fl_DegC_oFAS_FL_05_ofas_4ef817f6_Tx{FL}] */
  { /*   125 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,          0u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           0u,                     0u,            180u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtPcb_Fl_DegC_oFAS_FL_05_ofas_7d1af8d9_Tx{FL}] */
  { /*   126 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         24u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           3u,                     3u,            181u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtPhase_U_Fl_DegC_oFAS_FL_05_ofas_c5047512_Tx{FL}] */
  { /*   127 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         32u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           4u,                     4u,            182u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtPhase_V_Fl_DegC_oFAS_FL_05_ofas_f0e9c341_Tx{FL}] */
  { /*   128 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         40u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           5u,                     5u,            183u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtPhase_W_Fl_DegC_oFAS_FL_05_ofas_5562534f_Tx{FL}] */
  { /*   129 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,        102u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          12u,                    11u,            184u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Faa_F_De_Diag_Intgrn_Fl_Na_oFAS_FL_05_ofas_661416ee_Tx{FL}] */
  { /*   130 */     FALSE, COM_SINT16_APPLTYPEOFTXGRPSIGINFO,        9u,        108u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          13u,                    12u,            185u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Faa_Intgr_Ff_Gain_Fl_Na_oFAS_FL_05_ofas_6dd03686_Tx{FL}] */
  { /*   131 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,        116u, COM_NBITNBYTE_SW_BUSACCOFTXGRPSIGINFO,         1u,          14u,                    13u,            186u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Faa_Traceability_Fl_Na_oFAS_FL_05_ofas_4796987d_Tx{FL}] */
  { /*   132 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         64u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           8u,                     8u,            187u,              5u },  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Lic_Id_Fl_Na_oFAS_FL_05_ofas_5ff5350f_Tx{FL}] */
  { /*   133 */     FALSE,  COM_UINT8_APPLTYPEOFTXGRPSIGINFO,        8u,         72u,         COM_BYTE_BUSACCOFTXGRPSIGINFO,         1u,           9u,                     9u,            188u,              5u }   /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Lic_Value_Fl_Na_oFAS_FL_05_ofas_2938771f_Tx{FL}] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeFalse
**********************************************************************************************************************/
/** 
  \var    Com_TxModeFalse
  \brief  Contains all relevant information for transmission mode false.
  \details
  Element       Description
  Direct        TRUE if transmission mode contains a direct part.
  TimePeriod    Cycle time factor.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeFalseType, COM_CONST) Com_TxModeFalse[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Direct  TimePeriod        Referable Keys */
  { /*     0 */  FALSE,         0u },  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
  { /*     1 */  FALSE,        10u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  { /*     2 */  FALSE,         5u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  { /*     3 */   TRUE,         0u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  { /*     4 */  FALSE,       100u },  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  { /*     5 */  FALSE,         1u }   /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxModeInfo
  \brief  Contains all relevant information for transmission mode handling.
  \details
  Element          Description
  InitMode         Initial transmission mode selector of the Tx I-PDU.
  TxModeTrueIdx    the index of the 1:1 relation pointing to Com_TxModeTrue
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeInfoType, COM_CONST) Com_TxModeInfo[7] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitMode  TxModeTrueIdx        Referable Keys */
  { /*     0 */     TRUE,            4u },  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  { /*     1 */     TRUE,            5u },  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  { /*     2 */     TRUE,            3u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  { /*     3 */     TRUE,            2u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  { /*     4 */     TRUE,            1u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  { /*     5 */     TRUE,            4u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  { /*     6 */     TRUE,            0u }   /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeTrue
**********************************************************************************************************************/
/** 
  \var    Com_TxModeTrue
  \brief  Contains all relevant information for transmission mode true.
  \details
  Element       Description
  Direct        TRUE if transmission mode contains a direct part.
  TimePeriod    Cycle time factor.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeTrueType, COM_CONST) Com_TxModeTrue[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    Direct  TimePeriod        Referable Keys */
  { /*     0 */  FALSE,         0u },  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
  { /*     1 */  FALSE,        10u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  { /*     2 */  FALSE,         5u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  { /*     3 */   TRUE,         0u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  { /*     4 */  FALSE,       100u },  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  { /*     5 */  FALSE,         1u }   /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduCalloutFuncPtrFL
**********************************************************************************************************************/
/** 
  \var    Com_TxPduCalloutFuncPtrFL
  \brief  Tx I-PDU callout function pointer table.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComTxPduCalloutType, COM_CONST) Com_TxPduCalloutFuncPtrFL[5] = {  /* PRQA S 1514, 1533, 1504 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ExternalMcData */
  /* Index     TxPduCalloutFuncPtr                                      Referable Keys */
  /*     0 */ ComIPduCallout_FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx ,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     1 */ ComIPduCallout_FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx   ,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     2 */ ComIPduCallout_FAS_FL_02_ofas_f49eed27_Tx           ,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*     3 */ ComIPduCallout_FAS_FL_04_ofas_22c70e3a_Tx           ,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  /*     4 */ ComIPduCallout_FAS_FL_05_ofas_e99bdd9f_Tx              /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduCalloutFuncPtrFR
**********************************************************************************************************************/
/** 
  \var    Com_TxPduCalloutFuncPtrFR
  \brief  Tx I-PDU callout function pointer table.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComTxPduCalloutType, COM_CONST) Com_TxPduCalloutFuncPtrFR[5] = {  /* PRQA S 1514, 1533, 1504 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ExternalMcData */
  /* Index     TxPduCalloutFuncPtr                                      Referable Keys */
  /*     0 */ ComIPduCallout_FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx ,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     1 */ ComIPduCallout_FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx   ,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     2 */ ComIPduCallout_FAS_FR_02_ofas_909c74c4_Tx           ,  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}] */
  /*     3 */ ComIPduCallout_FAS_FR_04_ofas_46c597d9_Tx           ,  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_04_ofas_46c597d9_Tx{FR}] */
  /*     4 */ ComIPduCallout_FAS_FR_05_ofas_8d99447c_Tx              /* [/ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduCalloutFuncPtrRL
**********************************************************************************************************************/
/** 
  \var    Com_TxPduCalloutFuncPtrRL
  \brief  Tx I-PDU callout function pointer table.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComTxPduCalloutType, COM_CONST) Com_TxPduCalloutFuncPtrRL[5] = {  /* PRQA S 1514, 1533, 1504 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ExternalMcData */
  /* Index     TxPduCalloutFuncPtr                                      Referable Keys */
  /*     0 */ ComIPduCallout_FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx ,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     1 */ ComIPduCallout_FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx   ,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     2 */ ComIPduCallout_FAS_RL_02_ofas_dadbccb5_Tx           ,  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_02_ofas_dadbccb5_Tx{RL}] */
  /*     3 */ ComIPduCallout_FAS_RL_04_ofas_0c822fa8_Tx           ,  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_04_ofas_0c822fa8_Tx{RL}] */
  /*     4 */ ComIPduCallout_FAS_RL_05_ofas_c7defc0d_Tx              /* [/ActiveEcuC/Com/ComConfig/FAS_RL_05_ofas_c7defc0d_Tx{RL}] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduCalloutFuncPtrRR
**********************************************************************************************************************/
/** 
  \var    Com_TxPduCalloutFuncPtrRR
  \brief  Tx I-PDU callout function pointer table.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComTxPduCalloutType, COM_CONST) Com_TxPduCalloutFuncPtrRR[5] = {  /* PRQA S 1514, 1533, 1504 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ExternalMcData */
  /* Index     TxPduCalloutFuncPtr                                      Referable Keys */
  /*     0 */ ComIPduCallout_FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx ,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     1 */ ComIPduCallout_FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx   ,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     2 */ ComIPduCallout_FAS_RR_02_ofas_bed95556_Tx           ,  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_02_ofas_bed95556_Tx{RR}] */
  /*     3 */ ComIPduCallout_FAS_RR_04_ofas_6880b64b_Tx           ,  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_04_ofas_6880b64b_Tx{RR}] */
  /*     4 */ ComIPduCallout_FAS_RR_05_ofas_a3dc65ee_Tx              /* [/ActiveEcuC/Com/ComConfig/FAS_RR_05_ofas_a3dc65ee_Tx{RR}] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInfoFL
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInfoFL
  \brief  Contains all relevant information for Tx I-PDUs.
  \details
  Element                                Description
  ExternalId                             External ID used to call PduR_ComTransmit().
  IPduGroupInfoOfTxPduInfoIndEndIdx      the end index of the 0:n relation pointing to Com_IPduGroupInfoOfTxPduInfoInd
  IPduGroupInfoOfTxPduInfoIndStartIdx    the start index of the 0:n relation pointing to Com_IPduGroupInfoOfTxPduInfoInd
  PartitionsTxStructIdx                  the index of the 1:1 relation pointing to Com_PartitionsTxStruct
  TxBufferLength                         the number of relations pointing to Com_TxBuffer
  TxPduCalloutFuncPtrIdx                 the index of the 0:1 relation pointing to Com_TxPduCalloutFuncPtr
  TxPduInitValueEndIdx                   the end index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueStartIdx                 the start index of the 0:n relation pointing to Com_TxPduInitValue
  TxSigGrpInfoIndEndIdx                  the end index of the 0:n relation pointing to Com_TxSigGrpInfoInd
  TxSigGrpInfoIndStartIdx                the start index of the 0:n relation pointing to Com_TxSigGrpInfoInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInfoType, COM_CONST) Com_TxPduInfoFL[7] = {  /* PRQA S 1514, 1533, 1504 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ExternalMcData */
    /* Index    ExternalId                               IPduGroupInfoOfTxPduInfoIndEndIdx  IPduGroupInfoOfTxPduInfoIndStartIdx  PartitionsTxStructIdx  TxBufferLength  TxPduCalloutFuncPtrIdx                    TxPduInitValueEndIdx  TxPduInitValueStartIdx  TxSigGrpInfoIndEndIdx                    TxSigGrpInfoIndStartIdx                          Referable Keys */
  { /*     0 */ PduRConf_PduRSrcPdu_PduRSrcPdu_77f4e155,                                1u,                                  0u,                    0u,            20u,                                       1u,                  20u,                     0u,                                      1u,                                        0u },  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  { /*     1 */ PduRConf_PduRSrcPdu_PduRSrcPdu_5fce3e1e,                                2u,                                  1u,                    0u,            16u,                                       0u,                  36u,                    20u,                                      2u,                                        1u },  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  { /*     2 */ PduRConf_PduRSrcPdu_PduRSrcPdu_ac7f660f,                                3u,                                  2u,                    0u,            16u, COM_NO_TXPDUCALLOUTFUNCPTRIDXOFTXPDUINFO,                  52u,                    36u,                                      3u,                                        2u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}, ComMainFunctionTx] */
  { /*     3 */ PduRConf_PduRSrcPdu_PduRSrcPdu_d9ec3c35,                                4u,                                  3u,                    0u,            20u,                                       2u,                  72u,                    52u,                                      4u,                                        3u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}, ComMainFunctionTx] */
  { /*     4 */ PduRConf_PduRSrcPdu_PduRSrcPdu_8b210d79,                                5u,                                  4u,                    0u,             8u,                                       3u,                  80u,                    72u,                                      5u,                                        4u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}, ComMainFunctionTx] */
  { /*     5 */ PduRConf_PduRSrcPdu_PduRSrcPdu_fc0d809b,                                6u,                                  5u,                    0u,            20u,                                       4u,                 100u,                    80u,                                      6u,                                        5u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}, ComMainFunctionTx] */
  { /*     6 */ PduRConf_PduRSrcPdu_PduRSrcPdu_8a606819,                                7u,                                  6u,                    0u,             6u, COM_NO_TXPDUCALLOUTFUNCPTRIDXOFTXPDUINFO,                 106u,                   100u, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO }   /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}, /ActiveEcuC/Com/ComConfig/NM_TX_Group, ComMainFunctionTx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInfoFR
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInfoFR
  \brief  Contains all relevant information for Tx I-PDUs.
  \details
  Element                                Description
  ExternalId                             External ID used to call PduR_ComTransmit().
  IPduGroupInfoOfTxPduInfoIndEndIdx      the end index of the 0:n relation pointing to Com_IPduGroupInfoOfTxPduInfoInd
  IPduGroupInfoOfTxPduInfoIndStartIdx    the start index of the 0:n relation pointing to Com_IPduGroupInfoOfTxPduInfoInd
  PartitionsTxStructIdx                  the index of the 1:1 relation pointing to Com_PartitionsTxStruct
  TxBufferLength                         the number of relations pointing to Com_TxBuffer
  TxPduCalloutFuncPtrIdx                 the index of the 0:1 relation pointing to Com_TxPduCalloutFuncPtr
  TxPduInitValueEndIdx                   the end index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueStartIdx                 the start index of the 0:n relation pointing to Com_TxPduInitValue
  TxSigGrpInfoIndEndIdx                  the end index of the 0:n relation pointing to Com_TxSigGrpInfoInd
  TxSigGrpInfoIndStartIdx                the start index of the 0:n relation pointing to Com_TxSigGrpInfoInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInfoType, COM_CONST) Com_TxPduInfoFR[7] = {  /* PRQA S 1514, 1533, 1504 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ExternalMcData */
    /* Index    ExternalId                               IPduGroupInfoOfTxPduInfoIndEndIdx                    IPduGroupInfoOfTxPduInfoIndStartIdx                    PartitionsTxStructIdx  TxBufferLength  TxPduCalloutFuncPtrIdx                    TxPduInitValueEndIdx  TxPduInitValueStartIdx  TxSigGrpInfoIndEndIdx                    TxSigGrpInfoIndStartIdx                          Referable Keys */
  { /*     0 */ PduRConf_PduRSrcPdu_PduRSrcPdu_77f4e155,                                                  1u,                                                    0u,                    0u,            20u,                                       1u,                  20u,                     0u,                                      1u,                                        0u },  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  { /*     1 */ PduRConf_PduRSrcPdu_PduRSrcPdu_5fce3e1e,                                                  2u,                                                    1u,                    0u,            16u,                                       0u,                  36u,                    20u,                                      2u,                                        1u },  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  { /*     2 */ PduRConf_PduRSrcPdu_PduRSrcPdu_b7fc2e8f,                                                  3u,                                                    2u,                    0u,            16u, COM_NO_TXPDUCALLOUTFUNCPTRIDXOFTXPDUINFO,                  52u,                    36u,                                      3u,                                        2u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_01_ofas_1608066a_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}, ComMainFunctionTx] */
  { /*     3 */ PduRConf_PduRSrcPdu_PduRSrcPdu_ca071b8a,                                                  4u,                                                    3u,                    0u,            20u,                                       2u,                  72u,                    52u,                                      4u,                                        3u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}, ComMainFunctionTx] */
  { /*     4 */ PduRConf_PduRSrcPdu_PduRSrcPdu_e025a6d8,                                                  5u,                                                    4u,                    0u,             8u,                                       3u,                  80u,                    72u,                                      5u,                                        4u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_04_ofas_46c597d9_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}, ComMainFunctionTx] */
  { /*     5 */ PduRConf_PduRSrcPdu_PduRSrcPdu_341f439f,                                                  6u,                                                    5u,                    0u,            20u,                                       4u,                 100u,                    80u,                                      6u,                                        5u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}, ComMainFunctionTx] */
  { /*     6 */ PduRConf_PduRSrcPdu_PduRSrcPdu_b45ce863, COM_NO_IPDUGROUPINFOOFTXPDUINFOINDENDIDXOFTXPDUINFO, COM_NO_IPDUGROUPINFOOFTXPDUINFOINDSTARTIDXOFTXPDUINFO,                    0u,             6u, COM_NO_TXPDUCALLOUTFUNCPTRIDXOFTXPDUINFO,                 106u,                   100u, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO }   /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx{FR}, ComMainFunctionTx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInfoIndFL
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInfoIndFL
  \brief  the indexes of the 1:1 sorted relation pointing to Com_TxPduInfo
*/ 
#define COM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInfoIndType, COM_CONST) Com_TxPduInfoIndFL[7] = {  /* PRQA S 1514, 1533, 1504 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ExternalMcData */
  /* Index     TxPduInfoInd      Referable Keys */
  /*     0 */            0u,  /* [/ActiveEcuC/Com/ComConfig/EMM_FAA_DBG] */
  /*     1 */            1u,  /* [/ActiveEcuC/Com/ComConfig/EMM_FAA_DBG] */
  /*     2 */            6u,  /* [/ActiveEcuC/Com/ComConfig/NM_TX_Group] */
  /*     3 */            2u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}] */
  /*     4 */            3u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}] */
  /*     5 */            4u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}] */
  /*     6 */            5u   /* [/ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}] */
};
#define COM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInfoIndFR
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInfoIndFR
  \brief  the indexes of the 1:1 sorted relation pointing to Com_TxPduInfo
*/ 
#define COM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInfoIndType, COM_CONST) Com_TxPduInfoIndFR[6] = {  /* PRQA S 1514, 1533, 1504 */  /* MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ExternalMcData */
  /* Index     TxPduInfoInd      Referable Keys */
  /*     0 */            0u,  /* [/ActiveEcuC/Com/ComConfig/EMM_FAA_DBG] */
  /*     1 */            1u,  /* [/ActiveEcuC/Com/ComConfig/EMM_FAA_DBG] */
  /*     2 */            2u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}] */
  /*     3 */            3u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}] */
  /*     4 */            4u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}] */
  /*     5 */            5u   /* [/ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}] */
};
#define COM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInitValue
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInitValue
  \brief  Initial values used for Tx I-PDU buffer initialization.
*/ 
#define COM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInitValueType, COM_CONST) Com_TxPduInitValue[106] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxPduInitValue      Referable Keys */
  /*     0 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     2 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     3 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     4 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     5 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     6 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     7 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     8 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     9 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    10 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    11 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    12 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    13 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    14 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    15 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    16 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    17 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    18 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    19 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    20 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    21 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    22 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    23 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    24 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    25 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    26 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    27 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    28 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    29 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    30 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    31 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    32 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    33 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    34 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    35 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    36 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    37 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    38 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    39 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    40 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    41 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    42 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    43 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    44 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    45 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    46 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    47 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    48 */           0x80u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    49 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /* Index     TxPduInitValue      Referable Keys */
  /*    50 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    51 */           0x80u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*    52 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    53 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    54 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    55 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    56 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    57 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    58 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    59 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    60 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    61 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    62 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    63 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    64 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    65 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    66 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    67 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    68 */           0x7Fu,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    69 */           0x80u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    70 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    71 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    72 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  /*    73 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  /*    74 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  /*    75 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  /*    76 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  /*    77 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  /*    78 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  /*    79 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  /*    80 */           0x32u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    81 */           0x32u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    82 */           0x32u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    83 */           0x32u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    84 */           0x32u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    85 */           0x32u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    86 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    87 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    88 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    89 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    90 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    91 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    92 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    93 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    94 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    95 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    96 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    97 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    98 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    99 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /* Index     TxPduInitValue      Referable Keys */
  /*   100 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
  /*   101 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
  /*   102 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
  /*   103 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
  /*   104 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
  /*   105 */           0x00u   /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
};
#define COM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpInfo
  \brief  Contains all relevant information for Tx Signal Groups.
  \details
  Element                           Description
  ArrayAccessUsed               
  SigGroupOnChangeOffset        
  TransferProperty              
  TxBufferSigGrpInTxIPDUEndIdx      the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferSigGrpInTxIPDUStartIdx    the start index of the 0:n relation pointing to Com_TxBuffer
  TxSigGrpMaskEndIdx                the end index of the 0:n relation pointing to Com_TxSigGrpMask
  TxSigGrpMaskStartIdx              the start index of the 0:n relation pointing to Com_TxSigGrpMask
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigGrpInfoType, COM_CONST) Com_TxSigGrpInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ArrayAccessUsed  SigGroupOnChangeOffset  TransferProperty                              TxBufferSigGrpInTxIPDUEndIdx  TxBufferSigGrpInTxIPDUStartIdx  TxSigGrpMaskEndIdx  TxSigGrpMaskStartIdx        Referable Keys */
  { /*     0 */            TRUE,                     0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,                          17u,                             0u,                48u,                  31u },  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtHrm_DegC_oFAA_DBG_10Hz_MSG1_ofas_f013f8c0_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Dem_Event_Status_Na_oFAA_DBG_10Hz_MSG1_ofas_c3543c1a_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtPhase_V_DegC_oFAA_DBG_10Hz_MSG1_ofas_9c60487b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Lic_Value_Na_oFAA_DBG_10Hz_MSG1_ofas_d6062740_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Dem_Event_Id_Na_oFAA_DBG_10Hz_MSG1_ofas_a275b2cf_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtPcb_DegC_oFAA_DBG_10Hz_MSG1_ofas_63937085_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Lic_Id_Na_oFAA_DBG_10Hz_MSG1_ofas_67e9fb17_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtCtlr_Est_DegC_oFAA_DBG_10Hz_MSG1_ofas_5cedf796_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtPhase_U_DegC_oFAA_DBG_10Hz_MSG1_ofas_d8c16d63_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Temp_AtPhase_W_DegC_oFAA_DBG_10Hz_MSG1_ofas_a000ab73_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Faa_F_De_Diag_Intgrn_Na_oFAA_DBG_10Hz_MSG1_ofas_667e2285_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Emm_Low_Pwr_Mode_Na_oFAA_DBG_10Hz_MSG1_ofas_d14c34fa_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Av_Pg_Sys_Est_Pa_oFAA_DBG_10Hz_MSG1_ofas_71fdbe16_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Faa_Intgr_Ff_Gain_Na_oFAA_DBG_10Hz_MSG1_ofas_1a5c5660_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Faa_Traceability_Na_oFAA_DBG_10Hz_MSG1_ofas_93706440_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Av_Pg_Var_Est_Err_CurMax_Pa_oFAA_DBG_10Hz_MSG1_ofas_6e3f0c59_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx/Av_Pg_Var_Est_Err_LifeMax_Pa_oFAA_DBG_10Hz_MSG1_ofas_7b25705d_Tx] */
  { /*     1 */            TRUE,                     0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,                          35u,                            20u,                15u,                   0u },  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_Tq_Est_Nm_oFAA_DBG_1000Hz_MSG1_ofas_f2700289_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_Tq_Dmd_Nm_oFAA_DBG_1000Hz_MSG1_ofas_cc57825f_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_I_Bus_Ampr_oFAA_DBG_1000Hz_MSG1_ofas_4f0e9ebd_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Whl_A_Z_AtAct_Est_Msec2_oFAA_DBG_1000Hz_MSG1_ofas_e8561405_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_Ag_OfRotr_Rad_oFAA_DBG_1000Hz_MSG1_ofas_20034e15_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_U_Bus_Volt_oFAA_DBG_1000Hz_MSG1_ofas_4900a2a1_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Emm_Vagr_OfRotr_Radsec_oFAA_DBG_1000Hz_MSG1_ofas_9a3dc9a7_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Av_Pg_Var_AtHrm_Pa_oFAA_DBG_1000Hz_MSG1_ofas_6f6fdd00_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Faa_F_AtActr_Est_Nwt_oFAA_DBG_1000Hz_MSG1_ofas_d5ddd14c_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx/Av_Pg_Var_Est_Err_Pa_oFAA_DBG_1000Hz_MSG1_ofas_03e7779c_Tx] */
  { /*     2 */            TRUE,                     0u, COM_TRIGGERED_TRANSFERPROPERTYOFTXSIGGRPINFO,                          52u,                            36u,                31u,                  15u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_25Hz_Msg_Fl_Crc_oFAS_FL_01_ofas_0d9e2669_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Ascc_Mode_Fb_Fl_Na_oFAS_FL_01_ofas_5562dd98_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_25Hz_Msg_Fl_AlvCtr_oFAS_FL_01_ofas_3c3314e5_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_Sts_Sst_Fl_Na_oFAS_FL_01_ofas_51678bae_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_Amnt_ActunCpby_Fl_Na_oFAS_FL_01_ofas_7fabf71a_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Ascc_St_Fb_Fl_Na_oFAS_FL_01_ofas_11d7f25b_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Fas_Id_Sys_Fl_Na_oFAS_FL_01_ofas_aa9a9d0b_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Ascc_Id_Sw_Fl_Na_oFAS_FL_01_ofas_f77eab30_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_Id_Hw_Fl_Na_oFAS_FL_01_ofas_2f29c9bf_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx/Faa_Amnt_CpbyMrgn_Fl_Na_oFAS_FL_01_ofas_295a7b85_Tx{FL}] */
  { /*     3 */            TRUE,                     0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,                          70u,                            52u,                66u,                  48u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_I_Bus_Fl_Ampr_oFAS_FL_02_ofas_f75a8a56_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_U_Bus_Fl_Volt_oFAS_FL_02_ofas_6878397d_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_F_Fl_AtActr_Est_Nwt_oFAS_FL_02_ofas_373343d3_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_Tq_Est_Fl_Nm_oFAS_FL_02_ofas_f319ca63_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_Ag_OfRotr_Fl_Rad_oFAS_FL_02_ofas_59c66e55_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_Vagr_OfRotr_Fl_Radsec_oFAS_FL_02_ofas_af01be21_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Whl_Sts_AZ_Fl_Qfr_Na_oFAS_FL_02_ofas_25007f4a_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Av_Pg_Var_AtHrm_Fl_Pa_oFAS_FL_02_ofas_0d916da2_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Emm_Tq_Dmd_Fl_Nm_oFAS_FL_02_ofas_4abbcdf2_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Sts_F_Est_FL_Na_oFAS_FL_02_ofas_390b19f4_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Whl_A_Z_Fl_AtAct_Est_Msec2_oFAS_FL_02_ofas_26f533bc_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Sts_Pwr48_Fl_RegenLmt_Na_oFAS_FL_02_ofas_d5ec7c65_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Sts_Pwr48_Fl_ConsLmt_Na_oFAS_FL_02_ofas_9993c734_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Sts_Pwr48_Fl_Qfr_Na_oFAS_FL_02_ofas_4f2de231_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Faa_Pwr_UBus48_Fl_Watt_oFAS_FL_02_ofas_9620f2b6_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx/Av_Pg_Var_Est_Err_Fl_Pa_oFAS_FL_02_ofas_9ff12b86_Tx{FL}] */
  { /*     4 */            TRUE,                     0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,                          80u,                            72u,                 8u,                   0u },  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_02_oFAS_FL_04_ofas_cb042c91_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_42_oFAS_FL_04_ofas_c0acfb97_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_19_oFAS_FL_04_ofas_91dc8e6a_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_30_oFAS_FL_04_ofas_f5be6134_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_60_oFAS_FL_04_ofas_114400d3_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_55_oFAS_FL_04_ofas_0f6c313d_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_44_oFAS_FL_04_ofas_67984c9f_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_59_oFAS_FL_04_ofas_9a74596c_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_40_oFAS_FL_04_ofas_14906b50_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_47_oFAS_FL_04_ofas_3402171b_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_16_oFAS_FL_04_ofas_575ebdbf_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_50_oFAS_FL_04_ofas_fbc2ddb1_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_08_oFAS_FL_04_ofas_f928f3c8_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_31_oFAS_FL_04_ofas_7218aa77_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_46_oFAS_FL_04_ofas_b3a4dc58_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_22_oFAS_FL_04_ofas_ced04712_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_38_oFAS_FL_04_ofas_13ae2eaa_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_29_oFAS_FL_04_ofas_7b5a5308_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_57_oFAS_FL_04_ofas_db50a1fa_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_62_oFAS_FL_04_ofas_c5789014_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_05_oFAS_FL_04_ofas_eb9650da_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_13_oFAS_FL_04_ofas_a3f05133_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_15_oFAS_FL_04_ofas_04c4e63b_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_34_oFAS_FL_04_ofas_86b646fb_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_43_oFAS_FL_04_ofas_470a30d4_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_45_oFAS_FL_04_ofas_e03e87dc_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_10_oFAS_FL_04_ofas_f06a0ab7_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_37_oFAS_FL_04_ofas_d52c1d7f_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_58_oFAS_FL_04_ofas_1dd2922f_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_35_oFAS_FL_04_ofas_01108db8_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_56_oFAS_FL_04_ofas_5cf66ab9_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_23_oFAS_FL_04_ofas_49768c51_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_32_oFAS_FL_04_ofas_2182f1f3_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_64_oFAS_FL_04_ofas_624c271c_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_18_oFAS_FL_04_ofas_167a4529_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_14_oFAS_FL_04_ofas_83622d78_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_51_oFAS_FL_04_ofas_7c6416f2_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_49_oFAS_FL_04_ofas_7526ef8d_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_54_oFAS_FL_04_ofas_88cafa7e_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_25_oFAS_FL_04_ofas_ee423b59_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_01_oFAS_FL_04_ofas_989e7715_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_04_oFAS_FL_04_ofas_6c309b99_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_03_oFAS_FL_04_ofas_4ca2e7d2_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_06_oFAS_FL_04_ofas_b80c0b5e_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_24_oFAS_FL_04_ofas_69e4f01a_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_61_oFAS_FL_04_ofas_96e2cb90_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_39_oFAS_FL_04_ofas_9408e5e9_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_21_oFAS_FL_04_ofas_9d4a1c96_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_28_oFAS_FL_04_ofas_fcfc984b_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_52_oFAS_FL_04_ofas_2ffe4d76_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_36_oFAS_FL_04_ofas_528ad63c_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_11_oFAS_FL_04_ofas_77ccc1f4_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_09_oFAS_FL_04_ofas_7e8e388b_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_27_oFAS_FL_04_ofas_3a7eab9e_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_33_oFAS_FL_04_ofas_a6243ab0_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_53_oFAS_FL_04_ofas_a8588635_Tx{FL}, 
            /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_07_oFAS_FL_04_ofas_3faac01d_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_20_oFAS_FL_04_ofas_1aecd7d5_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_48_oFAS_FL_04_ofas_f28024ce_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_63_oFAS_FL_04_ofas_42de5b57_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_26_oFAS_FL_04_ofas_bdd860dd_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_41_oFAS_FL_04_ofas_9336a013_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_12_oFAS_FL_04_ofas_24569a70_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx/Fas_Emm_Dtc_Fl_17_oFAS_FL_04_ofas_d0f876fc_Tx{FL}] */
  { /*     5 */            TRUE,                     0u,   COM_PENDING_TRANSFERPROPERTYOFTXSIGGRPINFO,                          97u,                            80u,                48u,                  31u }   /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtPhase_W_Fl_DegC_oFAS_FL_05_ofas_5562534f_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtPhase_U_Fl_DegC_oFAS_FL_05_ofas_c5047512_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtPhase_V_Fl_DegC_oFAS_FL_05_ofas_f0e9c341_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtHrm_Fl_DegC_oFAS_FL_05_ofas_4ef817f6_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtCtlr_Est_Fl_DegC_oFAS_FL_05_ofas_dd8138bf_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Temp_AtPcb_Fl_DegC_oFAS_FL_05_ofas_7d1af8d9_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Av_Pg_Sys_Est_Fl_Pa_oFAS_FL_05_ofas_a7ba7e9f_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Faa_F_De_Diag_Intgrn_Fl_Na_oFAS_FL_05_ofas_661416ee_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Lic_Id_Fl_Na_oFAS_FL_05_ofas_5ff5350f_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Emm_Low_Pwr_Mode_Fl_Na_oFAS_FL_05_ofas_f0f62611_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Faa_Traceability_Fl_Na_oFAS_FL_05_ofas_4796987d_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Lic_Value_Fl_Na_oFAS_FL_05_ofas_2938771f_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Dem_Event_Id_Fl_Na_oFAS_FL_05_ofas_21fc113b_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Faa_Intgr_Ff_Gain_Fl_Na_oFAS_FL_05_ofas_6dd03686_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Dem_Event_Status_Fl_Na_oFAS_FL_05_ofas_0a919968_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Av_Pg_Var_Est_Err_CurMax_Fl_Pa_oFAS_FL_05_ofas_d70ca43a_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx/Av_Pg_Var_Est_Err_LifeMax_Fl_Pa_oFAS_FL_05_ofas_57e0cbd6_Tx{FL}] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpMask
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpMask
  \brief  Signal group mask needed to copy interlaced signal groups to the Tx PDU buffer.
*/ 
#define COM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigGrpMaskType, COM_CONST) Com_TxSigGrpMask[66] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxSigGrpMask      Referable Keys */
  /*     0 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx{FL}] */
  /*     1 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx{FL}] */
  /*     2 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx{FL}] */
  /*     3 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx{FL}] */
  /*     4 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx{FL}] */
  /*     5 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx{FL}] */
  /*     6 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx{FL}] */
  /*     7 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx{FL}] */
  /*     8 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx] */
  /*     9 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx] */
  /*    10 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx] */
  /*    11 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx] */
  /*    12 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx] */
  /*    13 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx] */
  /*    14 */         0x80u,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_Tx] */
  /*    15 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    16 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    17 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    18 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    19 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    20 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    21 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    22 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    23 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    24 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    25 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    26 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    27 */         0xFCu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    28 */         0x00u,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    29 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    30 */         0xFCu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}] */
  /*    31 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    32 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    33 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    34 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    35 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    36 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    37 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    38 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    39 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    40 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    41 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    42 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    43 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    44 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    45 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    46 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    47 */         0xF0u,  /* [/ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_Tx, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}] */
  /*    48 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    49 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /* Index     TxSigGrpMask      Referable Keys */
  /*    50 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    51 */         0x3Fu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    52 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    53 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    54 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    55 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    56 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    57 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    58 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    59 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    60 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    61 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    62 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    63 */         0xC0u,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    64 */         0xFFu,  /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
  /*    65 */         0xC0u   /* [/ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}] */
};
#define COM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfo
  \brief  Contains all relevant information for Tx signals signals.
  \details
  Element                   Description
  DynSignal                 TRUE if the Signal is a dynamic length signal (UINT8_DYN), FALSE otherwise.
  BitLength                 Bit length of the signal or group signal.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  ByteLength                Byte length of the signal or group signal.
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
  TxAccessInfoIdx           the index of the 1:1 relation pointing to Com_TxAccessInfo
  TxBufferLength            the number of relations pointing to Com_TxBuffer
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigInfoType, COM_CONST) Com_TxSigInfo[56] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DynSignal  BitLength  BitPosition  ByteLength  StartByteInPduPosition  TxAccessInfoIdx  TxBufferLength        Referable Keys */
  { /*     0 */     FALSE,        1u,         12u,         0u,                     1u,             27u,             1u },  /* [/ActiveEcuC/Com/ComConfig/ActvWakeup_FAS_FL_oNM_FAS_FL_ofas_81c5c771_Tx{FL}] */
  { /*     1 */     FALSE,        2u,          9u,         0u,                     1u,             28u,             1u },  /* [/ActiveEcuC/Com/ComConfig/NetMngtCoorn_FAS_FL_oNM_FAS_FL_ofas_a06d4057_Tx{FL}] */
  { /*     2 */     FALSE,        1u,         11u,         0u,                     1u,             29u,             1u },  /* [/ActiveEcuC/Com/ComConfig/NetMngtCoorrSleepRdy_FAS_FL_oNM_FAS_FL_ofas_4b94eb71_Tx{FL}] */
  { /*     3 */     FALSE,        1u,         16u,         0u,                     2u,             30u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN1_FAS_FL_oNM_FAS_FL_ofas_fa92001a_Tx{FL}] */
  { /*     4 */     FALSE,        1u,         17u,         0u,                     2u,             31u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN2_FAS_FL_oNM_FAS_FL_ofas_a28ca932_Tx{FL}] */
  { /*     5 */     FALSE,        1u,         18u,         0u,                     2u,             32u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN3_FAS_FL_oNM_FAS_FL_ofas_23a9cc15_Tx{FL}] */
  { /*     6 */     FALSE,        1u,         19u,         0u,                     2u,             33u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN4_FAS_FL_oNM_FAS_FL_ofas_12b1fb62_Tx{FL}] */
  { /*     7 */     FALSE,        1u,         20u,         0u,                     2u,             34u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN5_FAS_FL_oNM_FAS_FL_ofas_93949e45_Tx{FL}] */
  { /*     8 */     FALSE,        1u,         21u,         0u,                     2u,             35u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN6_FAS_FL_oNM_FAS_FL_ofas_cb8a376d_Tx{FL}] */
  { /*     9 */     FALSE,        1u,         22u,         0u,                     2u,             36u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN7_FAS_FL_oNM_FAS_FL_ofas_4aaf524a_Tx{FL}] */
  { /*    10 */     FALSE,        1u,         23u,         0u,                     2u,             37u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN8_FAS_FL_oNM_FAS_FL_ofas_a9ba5983_Tx{FL}] */
  { /*    11 */     FALSE,        1u,         24u,         0u,                     3u,             38u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN9_FAS_FL_oNM_FAS_FL_ofas_289f3ca4_Tx{FL}] */
  { /*    12 */     FALSE,        1u,         25u,         0u,                     3u,             39u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN10_FAS_FL_oNM_FAS_FL_ofas_331c5783_Tx{FL}] */
  { /*    13 */     FALSE,        1u,         26u,         0u,                     3u,             40u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN11_FAS_FL_oNM_FAS_FL_ofas_b23932a4_Tx{FL}] */
  { /*    14 */     FALSE,        1u,         27u,         0u,                     3u,             41u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN12_FAS_FL_oNM_FAS_FL_ofas_ea279b8c_Tx{FL}] */
  { /*    15 */     FALSE,        1u,         28u,         0u,                     3u,             42u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN13_FAS_FL_oNM_FAS_FL_ofas_6b02feab_Tx{FL}] */
  { /*    16 */     FALSE,        1u,         29u,         0u,                     3u,             43u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN14_FAS_FL_oNM_FAS_FL_ofas_5a1ac9dc_Tx{FL}] */
  { /*    17 */     FALSE,        1u,         30u,         0u,                     3u,             44u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN15_FAS_FL_oNM_FAS_FL_ofas_db3facfb_Tx{FL}] */
  { /*    18 */     FALSE,        1u,         31u,         0u,                     3u,             45u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN16_FAS_FL_oNM_FAS_FL_ofas_832105d3_Tx{FL}] */
  { /*    19 */     FALSE,        1u,         32u,         0u,                     4u,             46u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN17_FAS_FL_oNM_FAS_FL_ofas_020460f4_Tx{FL}] */
  { /*    20 */     FALSE,        1u,         33u,         0u,                     4u,             47u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN18_FAS_FL_oNM_FAS_FL_ofas_e1116b3d_Tx{FL}] */
  { /*    21 */     FALSE,        1u,         34u,         0u,                     4u,             48u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN19_FAS_FL_oNM_FAS_FL_ofas_60340e1a_Tx{FL}] */
  { /*    22 */     FALSE,        1u,         35u,         0u,                     4u,             49u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN20_FAS_FL_oNM_FAS_FL_ofas_06f1e1d0_Tx{FL}] */
  { /*    23 */     FALSE,        1u,         36u,         0u,                     4u,             50u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN21_FAS_FL_oNM_FAS_FL_ofas_87d484f7_Tx{FL}] */
  { /*    24 */     FALSE,        1u,         37u,         0u,                     4u,             51u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN22_FAS_FL_oNM_FAS_FL_ofas_dfca2ddf_Tx{FL}] */
  { /*    25 */     FALSE,        1u,         38u,         0u,                     4u,             52u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN23_FAS_FL_oNM_FAS_FL_ofas_5eef48f8_Tx{FL}] */
  { /*    26 */     FALSE,        1u,         39u,         0u,                     4u,             53u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN24_FAS_FL_oNM_FAS_FL_ofas_6ff77f8f_Tx{FL}] */
  { /*    27 */     FALSE,        1u,         40u,         0u,                     5u,             54u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN25_FAS_FL_oNM_FAS_FL_ofas_eed21aa8_Tx{FL}] */
  { /*    28 */     FALSE,        1u,         41u,         0u,                     5u,             55u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN26_FAS_FL_oNM_FAS_FL_ofas_b6ccb380_Tx{FL}] */
  { /*    29 */     FALSE,        1u,         42u,         0u,                     5u,             56u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN27_FAS_FL_oNM_FAS_FL_ofas_37e9d6a7_Tx{FL}] */
  { /*    30 */     FALSE,        1u,         43u,         0u,                     5u,             57u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN28_FAS_FL_oNM_FAS_FL_ofas_d4fcdd6e_Tx{FL}] */
  { /*    31 */     FALSE,        1u,         44u,         0u,                     5u,             58u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN29_FAS_FL_oNM_FAS_FL_ofas_55d9b849_Tx{FL}] */
  { /*    32 */     FALSE,        1u,         45u,         0u,                     5u,             59u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN30_FAS_FL_oNM_FAS_FL_ofas_a37a71de_Tx{FL}] */
  { /*    33 */     FALSE,        1u,         46u,         0u,                     5u,             60u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN31_FAS_FL_oNM_FAS_FL_ofas_225f14f9_Tx{FL}] */
  { /*    34 */     FALSE,        1u,         47u,         0u,                     5u,             61u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN32_FAS_FL_oNM_FAS_FL_ofas_7a41bdd1_Tx{FL}] */
  { /*    35 */     FALSE,        1u,         48u,         0u,                     6u,             62u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN33_FAS_FL_oNM_FAS_FL_ofas_fb64d8f6_Tx{FL}] */
  { /*    36 */     FALSE,        1u,         49u,         0u,                     6u,             63u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN34_FAS_FL_oNM_FAS_FL_ofas_ca7cef81_Tx{FL}] */
  { /*    37 */     FALSE,        1u,         50u,         0u,                     6u,             64u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN35_FAS_FL_oNM_FAS_FL_ofas_4b598aa6_Tx{FL}] */
  { /*    38 */     FALSE,        1u,         51u,         0u,                     6u,             65u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN36_FAS_FL_oNM_FAS_FL_ofas_1347238e_Tx{FL}] */
  { /*    39 */     FALSE,        1u,         52u,         0u,                     6u,             66u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN37_FAS_FL_oNM_FAS_FL_ofas_926246a9_Tx{FL}] */
  { /*    40 */     FALSE,        1u,         53u,         0u,                     6u,             67u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN38_FAS_FL_oNM_FAS_FL_ofas_71774d60_Tx{FL}] */
  { /*    41 */     FALSE,        1u,         54u,         0u,                     6u,             68u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN39_FAS_FL_oNM_FAS_FL_ofas_f0522847_Tx{FL}] */
  { /*    42 */     FALSE,        1u,         55u,         0u,                     6u,             69u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN40_FAS_FL_oNM_FAS_FL_ofas_6d2a8d76_Tx{FL}] */
  { /*    43 */     FALSE,        1u,         56u,         0u,                     7u,             70u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN41_FAS_FL_oNM_FAS_FL_ofas_ec0fe851_Tx{FL}] */
  { /*    44 */     FALSE,        1u,         57u,         0u,                     7u,             71u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN42_FAS_FL_oNM_FAS_FL_ofas_b4114179_Tx{FL}] */
  { /*    45 */     FALSE,        1u,         58u,         0u,                     7u,             72u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN43_FAS_FL_oNM_FAS_FL_ofas_3534245e_Tx{FL}] */
  { /*    46 */     FALSE,        1u,         59u,         0u,                     7u,             73u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN44_FAS_FL_oNM_FAS_FL_ofas_042c1329_Tx{FL}] */
  { /*    47 */     FALSE,        1u,         60u,         0u,                     7u,             74u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN45_FAS_FL_oNM_FAS_FL_ofas_8509760e_Tx{FL}] */
  { /*    48 */     FALSE,        1u,         61u,         0u,                     7u,             75u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN46_FAS_FL_oNM_FAS_FL_ofas_dd17df26_Tx{FL}] */
  { /*    49 */     FALSE,        1u,         62u,         0u,                     7u,             76u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN47_FAS_FL_oNM_FAS_FL_ofas_5c32ba01_Tx{FL}] */
    /* Index    DynSignal  BitLength  BitPosition  ByteLength  StartByteInPduPosition  TxAccessInfoIdx  TxBufferLength        Referable Keys */
  { /*    50 */     FALSE,        1u,         63u,         0u,                     7u,             77u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PN48_FAS_FL_oNM_FAS_FL_ofas_bf27b1c8_Tx{FL}] */
  { /*    51 */     FALSE,        1u,         14u,         0u,                     1u,             78u,             1u },  /* [/ActiveEcuC/Com/ComConfig/PtlNetInfo_FAS_FL_oNM_FAS_FL_ofas_462207c9_Tx{FL}] */
  { /*    52 */     FALSE,        1u,          8u,         0u,                     1u,             79u,             1u },  /* [/ActiveEcuC/Com/ComConfig/RepMsgReq_FAS_FL_oNM_FAS_FL_ofas_b12e902d_Tx{FL}] */
  { /*    53 */     FALSE,        1u,         13u,         0u,                     1u,             80u,             1u },  /* [/ActiveEcuC/Com/ComConfig/ResdBit1_FAS_FL_oNM_FAS_FL_ofas_cc176e8f_Tx{FL}] */
  { /*    54 */     FALSE,        1u,         15u,         0u,                     1u,             81u,             1u },  /* [/ActiveEcuC/Com/ComConfig/ResdBit2_FAS_FL_oNM_FAS_FL_ofas_9409c7a7_Tx{FL}] */
  { /*    55 */     FALSE,        8u,          0u,         1u,                     0u,            189u,             1u }   /* [/ActiveEcuC/Com/ComConfig/ScrNodId_FAS_FL_oNM_FAS_FL_ofas_d25817e9_Tx{FL}] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CurrentTxMode
**********************************************************************************************************************/
/** 
  \var    Com_CurrentTxMode
  \brief  Current transmission mode state of all Tx I-PDUs.
*/ 
#define COM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CurrentTxModeUType, COM_VAR_NO_INIT) Com_CurrentTxMode;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_01_ofas_1608066a_Tx{FR}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_04_ofas_46c597d9_Tx{FR}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx{FR}] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_01_ofas_5c4fbe1b_Tx{RL}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_02_ofas_dadbccb5_Tx{RL}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_04_ofas_0c822fa8_Tx{RL}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_05_ofas_c7defc0d_Tx{RL}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx{RL}] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_01_ofas_384d27f8_Tx{RR}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_02_ofas_bed95556_Tx{RR}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_04_ofas_6880b64b_Tx{RR}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_05_ofas_a3dc65ee_Tx{RR}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx{RR}] */

#define COM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CycleTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_CycleTimeCnt
  \brief  Current counter value of cyclic transmission.
*/ 
#define COM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CycleTimeCntUType, COM_VAR_NO_INIT) Com_CycleTimeCnt;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_01_ofas_1608066a_Tx{FR}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_04_ofas_46c597d9_Tx{FR}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx{FR}] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_01_ofas_5c4fbe1b_Tx{RL}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_02_ofas_dadbccb5_Tx{RL}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_04_ofas_0c822fa8_Tx{RL}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_05_ofas_c7defc0d_Tx{RL}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx{RL}] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_01_ofas_384d27f8_Tx{RR}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_02_ofas_bed95556_Tx{RR}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_04_ofas_6880b64b_Tx{RR}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_05_ofas_a3dc65ee_Tx{RR}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx{RR}] */

#define COM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CyclicSendRequest
**********************************************************************************************************************/
/** 
  \var    Com_CyclicSendRequest
  \brief  Cyclic send request flag used to indicate cyclic transmission mode for all Tx I-PDU.
*/ 
#define COM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CyclicSendRequestUType, COM_VAR_NO_INIT) Com_CyclicSendRequest;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_01_ofas_1608066a_Tx{FR}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_04_ofas_46c597d9_Tx{FR}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx{FR}] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_01_ofas_5c4fbe1b_Tx{RL}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_02_ofas_dadbccb5_Tx{RL}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_04_ofas_0c822fa8_Tx{RL}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_05_ofas_c7defc0d_Tx{RL}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx{RL}] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_01_ofas_384d27f8_Tx{RR}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_02_ofas_bed95556_Tx{RR}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_04_ofas_6880b64b_Tx{RR}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_05_ofas_a3dc65ee_Tx{RR}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx{RR}] */

#define COM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleRxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleRxPduDeferred
  \brief  Array indicating received Rx I-PDUs to be processed deferred within the next call of Com_MainfunctionRx().
*/ 
#define COM_START_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_HandleRxPduDeferredUType, COM_VAR_NO_INIT) Com_HandleRxPduDeferred;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */

#define COM_STOP_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_IPduGroupState
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_IPduGroupStateType, COM_VAR_NO_INIT) Com_IPduGroupState[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [unusedIndex0] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, /ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/NM_TX_Group, /ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Rx_a583c704{FL}, /ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx, /ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [unusedIndex0] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, /ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [unusedIndex2] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Rx_c1815ee7{FR}, /ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx, /ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_01_ofas_1608066a_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_04_ofas_46c597d9_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [unusedIndex0] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, /ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [unusedIndex2] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Rx_8bc6e696{RL}, /ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx, /ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Tx_dd9c4110{RL}, /ActiveEcuC/Com/ComConfig/FAS_RL_01_ofas_5c4fbe1b_Tx{RL}, /ActiveEcuC/Com/ComConfig/FAS_RL_02_ofas_dadbccb5_Tx{RL}, /ActiveEcuC/Com/ComConfig/FAS_RL_04_ofas_0c822fa8_Tx{RL}, /ActiveEcuC/Com/ComConfig/FAS_RL_05_ofas_c7defc0d_Tx{RL}] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [unusedIndex0] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, /ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [unusedIndex2] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Rx_efc47f75{RR}, /ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx, /ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Tx_b99ed8f3{RR}, /ActiveEcuC/Com/ComConfig/FAS_RR_01_ofas_384d27f8_Tx{RR}, /ActiveEcuC/Com/ComConfig/FAS_RR_02_ofas_bed95556_Tx{RR}, /ActiveEcuC/Com/ComConfig/FAS_RR_04_ofas_6880b64b_Tx{RR}, /ActiveEcuC/Com/ComConfig/FAS_RR_05_ofas_a3dc65ee_Tx{RR}] */

#define COM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_Initialized
**********************************************************************************************************************/
/** 
  \var    Com_Initialized
  \brief  Initialization state of Com. TRUE, if Com_Init() has been called, else FALSE.
*/ 
#define COM_START_SEC_VAR_CLEARED_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_InitializedType, COM_VAR_CLEARED) Com_Initialized = FALSE;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_CLEARED_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDefPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxDefPduBuffer
  \brief  Rx I-PDU buffer for deferred signal processing.
*/ 
#define COM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDefPduBufferUType, COM_VAR_NO_INIT) Com_RxDefPduBuffer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx] */

#define COM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxIPduGroupISRLockCounterUType, COM_VAR_NO_INIT) Com_RxIPduGroupISRLockCounter;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [noPartition] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [noPartition] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [noPartition] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [noPartition] */

#define COM_STOP_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxMainFunctionProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxMainFunctionProcessingISRLockCounterUType, COM_VAR_NO_INIT) Com_RxMainFunctionProcessingISRLockCounter;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [ComMainFunctionRx] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [ComMainFunctionRx] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [ComMainFunctionRx] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [ComMainFunctionRx] */

#define COM_STOP_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpActive
  \brief  Rx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxPduGrpActiveType, COM_VAR_NO_INIT) Com_RxPduGrpActive[5];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Rx_a583c704{FL}, ComMainFunctionRx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Rx_a583c704{FL}, ComMainFunctionRx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Rx_a583c704{FL}, ComMainFunctionRx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Rx_a583c704{FL}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Rx_a583c704{FL}] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Rx_c1815ee7{FR}, ComMainFunctionRx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Rx_c1815ee7{FR}, ComMainFunctionRx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Rx_c1815ee7{FR}, ComMainFunctionRx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Rx_c1815ee7{FR}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Rx_c1815ee7{FR}] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx, /ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Rx_8bc6e696{RL}, ComMainFunctionRx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Rx_8bc6e696{RL}, ComMainFunctionRx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Rx_8bc6e696{RL}, ComMainFunctionRx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Rx_8bc6e696{RL}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx, /ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Rx_8bc6e696{RL}] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3A9_ofas_900d0481_Rx, /ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Rx_efc47f75{RR}, ComMainFunctionRx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_3B2_ofas_cb22eedf_Rx, /ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Rx_efc47f75{RR}, ComMainFunctionRx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/ZONE_13C_ofas_0366ec59_Rx, /ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Rx_efc47f75{RR}, ComMainFunctionRx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_01_ofas_daf4fd26_Rx, /ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Rx_efc47f75{RR}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/Zone_R_FAS_02_ofas_5c608f88_Rx, /ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Rx_efc47f75{RR}] */

#define COM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigArrayAccessSigGrpBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxSigArrayAccessSigGrpBuffer
  \brief  Rx Buffer for signal groups with array access enabled.
*/ 
#define COM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigArrayAccessSigGrpBufferUType, COM_VAR_NO_INIT) Com_RxSigArrayAccessSigGrpBuffer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /*    38 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /*    38 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /*    38 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */
  /*    38 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx] */

#define COM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt16
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt16
  \brief  Rx Signal and Group Signal Buffer. (UINT16)
*/ 
#define COM_START_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt16UType, COM_VAR_NO_INIT) Com_RxSigBufferUInt16;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/MSec_oZONE_3B2_ofas_c9c9d776_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Asmc_100Hz_Msg_Crc_oZone_R_FAS_01_ofas_9e00f8ce_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Cons_Pwr_Limit_Watt_oZone_R_FAS_01_ofas_8cc6f31d_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Regen_Pwr_Limit_Watt_oZone_R_FAS_01_ofas_3bf357bc_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Fl_Mm_oZone_R_FAS_01_ofas_4872b9f5_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Fr_Mm_oZone_R_FAS_01_ofas_5529a826_Rx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Rl_Mm_oZone_R_FAS_01_ofas_ebd8d460_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Rr_Mm_oZone_R_FAS_01_ofas_f683c5b3_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Fl_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_bbadfe60_Rx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Fr_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_e38cdaee_Rx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Rl_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_b7c2f462_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Rr_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_efe3d0ec_Rx] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/MSec_oZONE_3B2_ofas_c9c9d776_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Asmc_100Hz_Msg_Crc_oZone_R_FAS_01_ofas_9e00f8ce_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Cons_Pwr_Limit_Watt_oZone_R_FAS_01_ofas_8cc6f31d_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Regen_Pwr_Limit_Watt_oZone_R_FAS_01_ofas_3bf357bc_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Fl_Mm_oZone_R_FAS_01_ofas_4872b9f5_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Fr_Mm_oZone_R_FAS_01_ofas_5529a826_Rx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Rl_Mm_oZone_R_FAS_01_ofas_ebd8d460_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Rr_Mm_oZone_R_FAS_01_ofas_f683c5b3_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Fl_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_bbadfe60_Rx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Fr_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_e38cdaee_Rx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Rl_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_b7c2f462_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Rr_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_efe3d0ec_Rx] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/MSec_oZONE_3B2_ofas_c9c9d776_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Asmc_100Hz_Msg_Crc_oZone_R_FAS_01_ofas_9e00f8ce_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Cons_Pwr_Limit_Watt_oZone_R_FAS_01_ofas_8cc6f31d_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Regen_Pwr_Limit_Watt_oZone_R_FAS_01_ofas_3bf357bc_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Fl_Mm_oZone_R_FAS_01_ofas_4872b9f5_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Fr_Mm_oZone_R_FAS_01_ofas_5529a826_Rx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Rl_Mm_oZone_R_FAS_01_ofas_ebd8d460_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Rr_Mm_oZone_R_FAS_01_ofas_f683c5b3_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Fl_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_bbadfe60_Rx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Fr_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_e38cdaee_Rx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Rl_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_b7c2f462_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Rr_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_efe3d0ec_Rx] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/MSec_oZONE_3B2_ofas_c9c9d776_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Asmc_100Hz_Msg_Crc_oZone_R_FAS_01_ofas_9e00f8ce_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Cons_Pwr_Limit_Watt_oZone_R_FAS_01_ofas_8cc6f31d_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Regen_Pwr_Limit_Watt_oZone_R_FAS_01_ofas_3bf357bc_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Fl_Mm_oZone_R_FAS_01_ofas_4872b9f5_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Fr_Mm_oZone_R_FAS_01_ofas_5529a826_Rx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Rl_Mm_oZone_R_FAS_01_ofas_ebd8d460_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Psn_Sus_AtAct_Rr_Mm_oZone_R_FAS_01_ofas_f683c5b3_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Fl_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_bbadfe60_Rx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Fr_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_e38cdaee_Rx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Rl_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_b7c2f462_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Faa_F_Rr_AtActr_Cmd_Nwt_oZone_R_FAS_02_ofas_efe3d0ec_Rx] */

#define COM_STOP_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt32
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt32
  \brief  Rx Signal and Group Signal Buffer. (UINT32)
*/ 
#define COM_START_SEC_VAR_NO_INIT_32
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt32UType, COM_VAR_NO_INIT) Com_RxSigBufferUInt32;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx/VehOdometer_oZONE_3A9_ofas_1c51a84c_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Oper_Mins_oZone_R_FAS_01_ofas_5b8bef6b_Rx] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx/VehOdometer_oZONE_3A9_ofas_1c51a84c_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Oper_Mins_oZone_R_FAS_01_ofas_5b8bef6b_Rx] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx/VehOdometer_oZONE_3A9_ofas_1c51a84c_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Oper_Mins_oZone_R_FAS_01_ofas_5b8bef6b_Rx] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3A9_Group_oZONE_3A9_ofas_20be830c_Rx/VehOdometer_oZONE_3A9_ofas_1c51a84c_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Oper_Mins_oZone_R_FAS_01_ofas_5b8bef6b_Rx] */

#define COM_STOP_SEC_VAR_NO_INIT_32
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt8
  \brief  Rx Signal and Group Signal Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt8UType, COM_VAR_NO_INIT) Com_RxSigBufferUInt8;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Day_oZONE_3B2_ofas_d665dea3_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Hr_oZONE_3B2_ofas_8dbdabef_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Min_oZONE_3B2_ofas_d3a84f3b_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Mth_oZONE_3B2_ofas_85d61cb0_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Sec_oZONE_3B2_ofas_78742ba2_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Yr_oZONE_3B2_ofas_1d4af9d1_Rx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/DrvState_SrvSts_oZONE_13C_ofas_0befbb64_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/DrvState_oZONE_13C_ofas_ed752b79_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/OperatorState_SrvSts_oZONE_13C_ofas_12e139f1_Rx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/OperatorState_oZONE_13C_ofas_1a8ad674_Rx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/VehStateDetailed_SrvSts_oZONE_13C_ofas_6c5e7153_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/VehStateDetailed_oZONE_13C_ofas_4ac7dc26_Rx] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/ZONE_13C_CRC_oZONE_13C_ofas_e2f7ccfa_Rx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/ZONE_13C_MsgCntr_oZONE_13C_ofas_b6b980ce_Rx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Ascc_St_Req_Na_oZone_R_FAS_01_ofas_16ce8104_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Asmc_100Hz_Msg_AlvCtr_oZone_R_FAS_01_ofas_906d367d_Rx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Pwr48_ConsLmt_Actv_Na_oZone_R_FAS_01_ofas_6389ca00_Rx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Pwr48_RegenLmt_Actv_Na_oZone_R_FAS_01_ofas_aa8f0ffe_Rx] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sf_Diag_Mofr_Na_oZone_R_FAS_01_ofas_5c8861ac_Rx] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sts_Cons_Pwr_Limit_Qfr_Na_oZone_R_FAS_01_ofas_79ad73a4_Rx] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sts_Regen_Pwr_Limit_Qfr_Na_oZone_R_FAS_01_ofas_f7be3014_Rx] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Zl_Setg_Req_Na_oZone_R_FAS_01_ofas_172f0ec4_Rx] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Sts_VehSpdLo_Na_oZone_R_FAS_01_ofas_b19cf606_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Sts_VehStaty_Na_oZone_R_FAS_01_ofas_16307a62_Rx] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Fl_Qfr_Na_oZone_R_FAS_01_ofas_de4cdf40_Rx] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Fr_Qfr_Na_oZone_R_FAS_01_ofas_cd00e836_Rx] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Rl_Qfr_Na_oZone_R_FAS_01_ofas_0fea3094_Rx] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Rr_Qfr_Na_oZone_R_FAS_01_ofas_1ca607e2_Rx] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Ascc_F_Prio_Na_oZone_R_FAS_02_ofas_4e5a6117_Rx] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Ascc_Mode_Req_Na_oZone_R_FAS_02_ofas_db5c0ecb_Rx] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Asmc_1000Hz_F_Cmd_AlvCtr_oZone_R_FAS_02_ofas_f604fd54_Rx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Asmc_1000Hz_F_Cmd_Crc_oZone_R_FAS_02_ofas_51e284d3_Rx] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Day_oZONE_3B2_ofas_d665dea3_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Hr_oZONE_3B2_ofas_8dbdabef_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Min_oZONE_3B2_ofas_d3a84f3b_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Mth_oZONE_3B2_ofas_85d61cb0_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Sec_oZONE_3B2_ofas_78742ba2_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Yr_oZONE_3B2_ofas_1d4af9d1_Rx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/DrvState_SrvSts_oZONE_13C_ofas_0befbb64_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/DrvState_oZONE_13C_ofas_ed752b79_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/OperatorState_SrvSts_oZONE_13C_ofas_12e139f1_Rx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/OperatorState_oZONE_13C_ofas_1a8ad674_Rx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/VehStateDetailed_SrvSts_oZONE_13C_ofas_6c5e7153_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/VehStateDetailed_oZONE_13C_ofas_4ac7dc26_Rx] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/ZONE_13C_CRC_oZONE_13C_ofas_e2f7ccfa_Rx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/ZONE_13C_MsgCntr_oZONE_13C_ofas_b6b980ce_Rx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Ascc_St_Req_Na_oZone_R_FAS_01_ofas_16ce8104_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Asmc_100Hz_Msg_AlvCtr_oZone_R_FAS_01_ofas_906d367d_Rx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Pwr48_ConsLmt_Actv_Na_oZone_R_FAS_01_ofas_6389ca00_Rx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Pwr48_RegenLmt_Actv_Na_oZone_R_FAS_01_ofas_aa8f0ffe_Rx] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sf_Diag_Mofr_Na_oZone_R_FAS_01_ofas_5c8861ac_Rx] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sts_Cons_Pwr_Limit_Qfr_Na_oZone_R_FAS_01_ofas_79ad73a4_Rx] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sts_Regen_Pwr_Limit_Qfr_Na_oZone_R_FAS_01_ofas_f7be3014_Rx] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Zl_Setg_Req_Na_oZone_R_FAS_01_ofas_172f0ec4_Rx] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Sts_VehSpdLo_Na_oZone_R_FAS_01_ofas_b19cf606_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Sts_VehStaty_Na_oZone_R_FAS_01_ofas_16307a62_Rx] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Fl_Qfr_Na_oZone_R_FAS_01_ofas_de4cdf40_Rx] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Fr_Qfr_Na_oZone_R_FAS_01_ofas_cd00e836_Rx] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Rl_Qfr_Na_oZone_R_FAS_01_ofas_0fea3094_Rx] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Rr_Qfr_Na_oZone_R_FAS_01_ofas_1ca607e2_Rx] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Ascc_F_Prio_Na_oZone_R_FAS_02_ofas_4e5a6117_Rx] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Ascc_Mode_Req_Na_oZone_R_FAS_02_ofas_db5c0ecb_Rx] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Asmc_1000Hz_F_Cmd_AlvCtr_oZone_R_FAS_02_ofas_f604fd54_Rx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Asmc_1000Hz_F_Cmd_Crc_oZone_R_FAS_02_ofas_51e284d3_Rx] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Day_oZONE_3B2_ofas_d665dea3_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Hr_oZONE_3B2_ofas_8dbdabef_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Min_oZONE_3B2_ofas_d3a84f3b_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Mth_oZONE_3B2_ofas_85d61cb0_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Sec_oZONE_3B2_ofas_78742ba2_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Yr_oZONE_3B2_ofas_1d4af9d1_Rx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/DrvState_SrvSts_oZONE_13C_ofas_0befbb64_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/DrvState_oZONE_13C_ofas_ed752b79_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/OperatorState_SrvSts_oZONE_13C_ofas_12e139f1_Rx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/OperatorState_oZONE_13C_ofas_1a8ad674_Rx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/VehStateDetailed_SrvSts_oZONE_13C_ofas_6c5e7153_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/VehStateDetailed_oZONE_13C_ofas_4ac7dc26_Rx] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/ZONE_13C_CRC_oZONE_13C_ofas_e2f7ccfa_Rx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/ZONE_13C_MsgCntr_oZONE_13C_ofas_b6b980ce_Rx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Ascc_St_Req_Na_oZone_R_FAS_01_ofas_16ce8104_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Asmc_100Hz_Msg_AlvCtr_oZone_R_FAS_01_ofas_906d367d_Rx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Pwr48_ConsLmt_Actv_Na_oZone_R_FAS_01_ofas_6389ca00_Rx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Pwr48_RegenLmt_Actv_Na_oZone_R_FAS_01_ofas_aa8f0ffe_Rx] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sf_Diag_Mofr_Na_oZone_R_FAS_01_ofas_5c8861ac_Rx] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sts_Cons_Pwr_Limit_Qfr_Na_oZone_R_FAS_01_ofas_79ad73a4_Rx] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sts_Regen_Pwr_Limit_Qfr_Na_oZone_R_FAS_01_ofas_f7be3014_Rx] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Zl_Setg_Req_Na_oZone_R_FAS_01_ofas_172f0ec4_Rx] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Sts_VehSpdLo_Na_oZone_R_FAS_01_ofas_b19cf606_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Sts_VehStaty_Na_oZone_R_FAS_01_ofas_16307a62_Rx] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Fl_Qfr_Na_oZone_R_FAS_01_ofas_de4cdf40_Rx] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Fr_Qfr_Na_oZone_R_FAS_01_ofas_cd00e836_Rx] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Rl_Qfr_Na_oZone_R_FAS_01_ofas_0fea3094_Rx] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Rr_Qfr_Na_oZone_R_FAS_01_ofas_1ca607e2_Rx] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Ascc_F_Prio_Na_oZone_R_FAS_02_ofas_4e5a6117_Rx] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Ascc_Mode_Req_Na_oZone_R_FAS_02_ofas_db5c0ecb_Rx] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Asmc_1000Hz_F_Cmd_AlvCtr_oZone_R_FAS_02_ofas_f604fd54_Rx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Asmc_1000Hz_F_Cmd_Crc_oZone_R_FAS_02_ofas_51e284d3_Rx] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Day_oZONE_3B2_ofas_d665dea3_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Hr_oZONE_3B2_ofas_8dbdabef_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Min_oZONE_3B2_ofas_d3a84f3b_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Mth_oZONE_3B2_ofas_85d61cb0_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Sec_oZONE_3B2_ofas_78742ba2_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_3B2_Group_oZONE_3B2_ofas_8d4fdb2f_Rx/Yr_oZONE_3B2_ofas_1d4af9d1_Rx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/DrvState_SrvSts_oZONE_13C_ofas_0befbb64_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/DrvState_oZONE_13C_ofas_ed752b79_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/OperatorState_SrvSts_oZONE_13C_ofas_12e139f1_Rx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/OperatorState_oZONE_13C_ofas_1a8ad674_Rx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/VehStateDetailed_SrvSts_oZONE_13C_ofas_6c5e7153_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/VehStateDetailed_oZONE_13C_ofas_4ac7dc26_Rx] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/ZONE_13C_CRC_oZONE_13C_ofas_e2f7ccfa_Rx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SG_ZONE_13C_Group_oZONE_13C_ofas_fd10f313_Rx/ZONE_13C_MsgCntr_oZONE_13C_ofas_b6b980ce_Rx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Ascc_St_Req_Na_oZone_R_FAS_01_ofas_16ce8104_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Asmc_100Hz_Msg_AlvCtr_oZone_R_FAS_01_ofas_906d367d_Rx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Pwr48_ConsLmt_Actv_Na_oZone_R_FAS_01_ofas_6389ca00_Rx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Pwr48_RegenLmt_Actv_Na_oZone_R_FAS_01_ofas_aa8f0ffe_Rx] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sf_Diag_Mofr_Na_oZone_R_FAS_01_ofas_5c8861ac_Rx] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sts_Cons_Pwr_Limit_Qfr_Na_oZone_R_FAS_01_ofas_79ad73a4_Rx] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Sts_Regen_Pwr_Limit_Qfr_Na_oZone_R_FAS_01_ofas_f7be3014_Rx] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Faa_Zl_Setg_Req_Na_oZone_R_FAS_01_ofas_172f0ec4_Rx] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Sts_VehSpdLo_Na_oZone_R_FAS_01_ofas_b19cf606_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Fas_Sts_VehStaty_Na_oZone_R_FAS_01_ofas_16307a62_Rx] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Fl_Qfr_Na_oZone_R_FAS_01_ofas_de4cdf40_Rx] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Fr_Qfr_Na_oZone_R_FAS_01_ofas_cd00e836_Rx] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Rl_Qfr_Na_oZone_R_FAS_01_ofas_0fea3094_Rx] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_01_Group_oZone_R_FAS_01_ofas_bd329b4c_Rx/Veh_Sts_Psn_Sus_Rr_Qfr_Na_oZone_R_FAS_01_ofas_1ca607e2_Rx] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Ascc_F_Prio_Na_oZone_R_FAS_02_ofas_4e5a6117_Rx] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Ascc_Mode_Req_Na_oZone_R_FAS_02_ofas_db5c0ecb_Rx] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Asmc_1000Hz_F_Cmd_AlvCtr_oZone_R_FAS_02_ofas_f604fd54_Rx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/SG_Zone_R_FAS_02_Group_oZone_R_FAS_02_ofas_8832c421_Rx/Asmc_1000Hz_F_Cmd_Crc_oZone_R_FAS_02_ofas_51e284d3_Rx] */

#define COM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_SigGrpEventFlag
**********************************************************************************************************************/
/** 
  \var    Com_SigGrpEventFlag
  \brief  Flag is set if a group signal write access caused a triggered event.
*/ 
#define COM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_SigGrpEventFlagType, COM_VAR_NO_INIT) Com_SigGrpEventFlag[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TransmitRequest
**********************************************************************************************************************/
/** 
  \var    Com_TransmitRequest
  \brief  Transmit request flag used for decoupled Tx I-PDU tranmission.
*/ 
#define COM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TransmitRequestUType, COM_VAR_NO_INIT) Com_TransmitRequest;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_01_ofas_1608066a_Tx{FR}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_04_ofas_46c597d9_Tx{FR}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx{FR}] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_01_ofas_5c4fbe1b_Tx{RL}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_02_ofas_dadbccb5_Tx{RL}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_04_ofas_0c822fa8_Tx{RL}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_05_ofas_c7defc0d_Tx{RL}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx{RL}] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_01_ofas_384d27f8_Tx{RR}] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_02_ofas_bed95556_Tx{RR}] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_04_ofas_6880b64b_Tx{RR}] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_05_ofas_a3dc65ee_Tx{RR}] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx{RR}] */

#define COM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TxBuffer
  \brief  Shared uint8 buffer for Tx I-PDUs and ComSignalGroup shadow buffer.
*/ 
#define COM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxBufferType, COM_VAR_NO_INIT) Com_TxBuffer[108];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_TxSigGrpInTxIPDU] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_TxSigGrpInTxIPDU] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_TxSigGrpInTxIPDU] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_TxSigGrpInTxIPDU] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}SigGrpInTxIPDU] */
  /*    51 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_01_Group_oFAS_FL_01_ofas_f50c502b_Tx{FL}SigGrpInTxIPDU] */
  /*    52 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}SigGrpInTxIPDU] */
  /*    69 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_02_Group_oFAS_FL_02_ofas_057d1bb8_Tx{FL}SigGrpInTxIPDU] */
  /*    70 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}] */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx{FL}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx{FL}SigGrpInTxIPDU] */
  /*    79 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_04_Group_oFAS_FL_04_ofas_3eee8adf_Tx{FL}SigGrpInTxIPDU] */
  /*    80 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}SigGrpInTxIPDU] */
  /*    96 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}, /ActiveEcuC/Com/ComConfig/SG_FAS_FL_05_Group_oFAS_FL_05_ofas_6ec1b3ae_Tx{FL}SigGrpInTxIPDU] */
  /*    97 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*    99 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}] */
  /*   100 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}, /ActiveEcuC/Com/ComConfig/ScrNodId_FAS_FL_oNM_FAS_FL_ofas_d25817e9_Tx{FL}] */
  /*   101 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}, /ActiveEcuC/Com/ComConfig/ActvWakeup_FAS_FL_oNM_FAS_FL_ofas_81c5c771_Tx{FL}, /ActiveEcuC/Com/ComConfig/NetMngtCoorn_FAS_FL_oNM_FAS_FL_ofas_a06d4057_Tx{FL}, /ActiveEcuC/Com/ComConfig/NetMngtCoorrSleepRdy_FAS_FL_oNM_FAS_FL_ofas_4b94eb71_Tx{FL}, /ActiveEcuC/Com/ComConfig/PtlNetInfo_FAS_FL_oNM_FAS_FL_ofas_462207c9_Tx{FL}, /ActiveEcuC/Com/ComConfig/RepMsgReq_FAS_FL_oNM_FAS_FL_ofas_b12e902d_Tx{FL}, /ActiveEcuC/Com/ComConfig/ResdBit1_FAS_FL_oNM_FAS_FL_ofas_cc176e8f_Tx{FL}, /ActiveEcuC/Com/ComConfig/ResdBit2_FAS_FL_oNM_FAS_FL_ofas_9409c7a7_Tx{FL}] */
  /*   102 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN1_FAS_FL_oNM_FAS_FL_ofas_fa92001a_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN2_FAS_FL_oNM_FAS_FL_ofas_a28ca932_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN3_FAS_FL_oNM_FAS_FL_ofas_23a9cc15_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN4_FAS_FL_oNM_FAS_FL_ofas_12b1fb62_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN5_FAS_FL_oNM_FAS_FL_ofas_93949e45_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN6_FAS_FL_oNM_FAS_FL_ofas_cb8a376d_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN7_FAS_FL_oNM_FAS_FL_ofas_4aaf524a_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN8_FAS_FL_oNM_FAS_FL_ofas_a9ba5983_Tx{FL}] */
  /*   103 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN9_FAS_FL_oNM_FAS_FL_ofas_289f3ca4_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN10_FAS_FL_oNM_FAS_FL_ofas_331c5783_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN11_FAS_FL_oNM_FAS_FL_ofas_b23932a4_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN12_FAS_FL_oNM_FAS_FL_ofas_ea279b8c_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN13_FAS_FL_oNM_FAS_FL_ofas_6b02feab_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN14_FAS_FL_oNM_FAS_FL_ofas_5a1ac9dc_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN15_FAS_FL_oNM_FAS_FL_ofas_db3facfb_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN16_FAS_FL_oNM_FAS_FL_ofas_832105d3_Tx{FL}] */
  /*   104 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN17_FAS_FL_oNM_FAS_FL_ofas_020460f4_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN18_FAS_FL_oNM_FAS_FL_ofas_e1116b3d_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN19_FAS_FL_oNM_FAS_FL_ofas_60340e1a_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN20_FAS_FL_oNM_FAS_FL_ofas_06f1e1d0_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN21_FAS_FL_oNM_FAS_FL_ofas_87d484f7_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN22_FAS_FL_oNM_FAS_FL_ofas_dfca2ddf_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN23_FAS_FL_oNM_FAS_FL_ofas_5eef48f8_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN24_FAS_FL_oNM_FAS_FL_ofas_6ff77f8f_Tx{FL}] */
  /*   105 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN25_FAS_FL_oNM_FAS_FL_ofas_eed21aa8_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN26_FAS_FL_oNM_FAS_FL_ofas_b6ccb380_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN27_FAS_FL_oNM_FAS_FL_ofas_37e9d6a7_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN28_FAS_FL_oNM_FAS_FL_ofas_d4fcdd6e_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN29_FAS_FL_oNM_FAS_FL_ofas_55d9b849_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN30_FAS_FL_oNM_FAS_FL_ofas_a37a71de_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN31_FAS_FL_oNM_FAS_FL_ofas_225f14f9_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN32_FAS_FL_oNM_FAS_FL_ofas_7a41bdd1_Tx{FL}] */
  /*   106 */  /* [/ActiveEcuC/Com/ComConfig/PN33_FAS_FL_oNM_FAS_FL_ofas_fb64d8f6_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN34_FAS_FL_oNM_FAS_FL_ofas_ca7cef81_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN35_FAS_FL_oNM_FAS_FL_ofas_4b598aa6_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN36_FAS_FL_oNM_FAS_FL_ofas_1347238e_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN37_FAS_FL_oNM_FAS_FL_ofas_926246a9_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN38_FAS_FL_oNM_FAS_FL_ofas_71774d60_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN39_FAS_FL_oNM_FAS_FL_ofas_f0522847_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN40_FAS_FL_oNM_FAS_FL_ofas_6d2a8d76_Tx{FL}] */
  /*   107 */  /* [/ActiveEcuC/Com/ComConfig/PN41_FAS_FL_oNM_FAS_FL_ofas_ec0fe851_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN42_FAS_FL_oNM_FAS_FL_ofas_b4114179_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN43_FAS_FL_oNM_FAS_FL_ofas_3534245e_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN44_FAS_FL_oNM_FAS_FL_ofas_042c1329_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN45_FAS_FL_oNM_FAS_FL_ofas_8509760e_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN46_FAS_FL_oNM_FAS_FL_ofas_dd17df26_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN47_FAS_FL_oNM_FAS_FL_ofas_5c32ba01_Tx{FL}, /ActiveEcuC/Com/ComConfig/PN48_FAS_FL_oNM_FAS_FL_ofas_bf27b1c8_Tx{FL}] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_TxSigGrpInTxIPDU] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_TxSigGrpInTxIPDU] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_TxSigGrpInTxIPDU] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_TxSigGrpInTxIPDU] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_01_ofas_1608066a_Tx{FR}, /ActiveEcuC/Com/ComConfig/SG_FAS_FR_01_Group_oFAS_FR_01_ofas_51ab62bd_Tx{FR}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_01_ofas_1608066a_Tx{FR}, /ActiveEcuC/Com/ComConfig/SG_FAS_FR_01_Group_oFAS_FR_01_ofas_51ab62bd_Tx{FR}SigGrpInTxIPDU] */
  /*    51 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_01_ofas_1608066a_Tx{FR}, /ActiveEcuC/Com/ComConfig/SG_FAS_FR_01_Group_oFAS_FR_01_ofas_51ab62bd_Tx{FR}SigGrpInTxIPDU] */
  /*    52 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}, /ActiveEcuC/Com/ComConfig/SG_FAS_FR_02_Group_oFAS_FR_02_ofas_a1da292e_Tx{FR}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}, /ActiveEcuC/Com/ComConfig/SG_FAS_FR_02_Group_oFAS_FR_02_ofas_a1da292e_Tx{FR}SigGrpInTxIPDU] */
  /*    69 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}, /ActiveEcuC/Com/ComConfig/SG_FAS_FR_02_Group_oFAS_FR_02_ofas_a1da292e_Tx{FR}SigGrpInTxIPDU] */
  /*    70 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}] */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_04_ofas_46c597d9_Tx{FR}, /ActiveEcuC/Com/ComConfig/SG_FAS_FR_04_Group_oFAS_FR_04_ofas_9a49b849_Tx{FR}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_04_ofas_46c597d9_Tx{FR}, /ActiveEcuC/Com/ComConfig/SG_FAS_FR_04_Group_oFAS_FR_04_ofas_9a49b849_Tx{FR}SigGrpInTxIPDU] */
  /*    79 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_04_ofas_46c597d9_Tx{FR}, /ActiveEcuC/Com/ComConfig/SG_FAS_FR_04_Group_oFAS_FR_04_ofas_9a49b849_Tx{FR}SigGrpInTxIPDU] */
  /*    80 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}, /ActiveEcuC/Com/ComConfig/SG_FAS_FR_05_Group_oFAS_FR_05_ofas_ca668138_Tx{FR}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}, /ActiveEcuC/Com/ComConfig/SG_FAS_FR_05_Group_oFAS_FR_05_ofas_ca668138_Tx{FR}SigGrpInTxIPDU] */
  /*    96 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}, /ActiveEcuC/Com/ComConfig/SG_FAS_FR_05_Group_oFAS_FR_05_ofas_ca668138_Tx{FR}SigGrpInTxIPDU] */
  /*    97 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}] */
  /*    99 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}] */
  /*   100 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx{FR}, /ActiveEcuC/Com/ComConfig/ScrNodId_FAS_FR_oNM_FAS_FR_ofas_bdf115e9_Tx{FR}] */
  /*   101 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx{FR}, /ActiveEcuC/Com/ComConfig/ActvWakeup_FAS_FR_oNM_FAS_FR_ofas_ee6cc571_Tx{FR}, /ActiveEcuC/Com/ComConfig/NetMngtCoorn_FAS_FR_oNM_FAS_FR_ofas_cfc44257_Tx{FR}, /ActiveEcuC/Com/ComConfig/NetMngtCoorrSleepRdy_FAS_FR_oNM_FAS_FR_ofas_243de971_Tx{FR}, /ActiveEcuC/Com/ComConfig/PtlNetInfo_FAS_FR_oNM_FAS_FR_ofas_298b05c9_Tx{FR}, /ActiveEcuC/Com/ComConfig/RepMsgReq_FAS_FR_oNM_FAS_FR_ofas_de87922d_Tx{FR}, /ActiveEcuC/Com/ComConfig/ResdBit1_FAS_FR_oNM_FAS_FR_ofas_a3be6c8f_Tx{FR}, /ActiveEcuC/Com/ComConfig/ResdBit2_FAS_FR_oNM_FAS_FR_ofas_fba0c5a7_Tx{FR}] */
  /*   102 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN1_FAS_FR_oNM_FAS_FR_ofas_953b021a_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN2_FAS_FR_oNM_FAS_FR_ofas_cd25ab32_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN3_FAS_FR_oNM_FAS_FR_ofas_4c00ce15_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN4_FAS_FR_oNM_FAS_FR_ofas_7d18f962_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN5_FAS_FR_oNM_FAS_FR_ofas_fc3d9c45_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN6_FAS_FR_oNM_FAS_FR_ofas_a423356d_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN7_FAS_FR_oNM_FAS_FR_ofas_2506504a_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN8_FAS_FR_oNM_FAS_FR_ofas_c6135b83_Tx{FR}] */
  /*   103 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN9_FAS_FR_oNM_FAS_FR_ofas_47363ea4_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN10_FAS_FR_oNM_FAS_FR_ofas_5cb55583_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN11_FAS_FR_oNM_FAS_FR_ofas_dd9030a4_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN12_FAS_FR_oNM_FAS_FR_ofas_858e998c_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN13_FAS_FR_oNM_FAS_FR_ofas_04abfcab_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN14_FAS_FR_oNM_FAS_FR_ofas_35b3cbdc_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN15_FAS_FR_oNM_FAS_FR_ofas_b496aefb_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN16_FAS_FR_oNM_FAS_FR_ofas_ec8807d3_Tx{FR}] */
  /*   104 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN17_FAS_FR_oNM_FAS_FR_ofas_6dad62f4_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN18_FAS_FR_oNM_FAS_FR_ofas_8eb8693d_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN19_FAS_FR_oNM_FAS_FR_ofas_0f9d0c1a_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN20_FAS_FR_oNM_FAS_FR_ofas_6958e3d0_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN21_FAS_FR_oNM_FAS_FR_ofas_e87d86f7_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN22_FAS_FR_oNM_FAS_FR_ofas_b0632fdf_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN23_FAS_FR_oNM_FAS_FR_ofas_31464af8_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN24_FAS_FR_oNM_FAS_FR_ofas_005e7d8f_Tx{FR}] */
  /*   105 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN25_FAS_FR_oNM_FAS_FR_ofas_817b18a8_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN26_FAS_FR_oNM_FAS_FR_ofas_d965b180_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN27_FAS_FR_oNM_FAS_FR_ofas_5840d4a7_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN28_FAS_FR_oNM_FAS_FR_ofas_bb55df6e_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN29_FAS_FR_oNM_FAS_FR_ofas_3a70ba49_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN30_FAS_FR_oNM_FAS_FR_ofas_ccd373de_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN31_FAS_FR_oNM_FAS_FR_ofas_4df616f9_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN32_FAS_FR_oNM_FAS_FR_ofas_15e8bfd1_Tx{FR}] */
  /*   106 */  /* [/ActiveEcuC/Com/ComConfig/PN33_FAS_FR_oNM_FAS_FR_ofas_94cddaf6_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN34_FAS_FR_oNM_FAS_FR_ofas_a5d5ed81_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN35_FAS_FR_oNM_FAS_FR_ofas_24f088a6_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN36_FAS_FR_oNM_FAS_FR_ofas_7cee218e_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN37_FAS_FR_oNM_FAS_FR_ofas_fdcb44a9_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN38_FAS_FR_oNM_FAS_FR_ofas_1ede4f60_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN39_FAS_FR_oNM_FAS_FR_ofas_9ffb2a47_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN40_FAS_FR_oNM_FAS_FR_ofas_02838f76_Tx{FR}] */
  /*   107 */  /* [/ActiveEcuC/Com/ComConfig/PN41_FAS_FR_oNM_FAS_FR_ofas_83a6ea51_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN42_FAS_FR_oNM_FAS_FR_ofas_dbb84379_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN43_FAS_FR_oNM_FAS_FR_ofas_5a9d265e_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN44_FAS_FR_oNM_FAS_FR_ofas_6b851129_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN45_FAS_FR_oNM_FAS_FR_ofas_eaa0740e_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN46_FAS_FR_oNM_FAS_FR_ofas_b2bedd26_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN47_FAS_FR_oNM_FAS_FR_ofas_339bb801_Tx{FR}, /ActiveEcuC/Com/ComConfig/PN48_FAS_FR_oNM_FAS_FR_ofas_d08eb3c8_Tx{FR}] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_TxSigGrpInTxIPDU] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_TxSigGrpInTxIPDU] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_TxSigGrpInTxIPDU] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_TxSigGrpInTxIPDU] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_01_ofas_5c4fbe1b_Tx{RL}, /ActiveEcuC/Com/ComConfig/SG_FAS_RL_01_Group_oFAS_RL_01_ofas_e47cb1a9_Tx{RL}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_01_ofas_5c4fbe1b_Tx{RL}, /ActiveEcuC/Com/ComConfig/SG_FAS_RL_01_Group_oFAS_RL_01_ofas_e47cb1a9_Tx{RL}SigGrpInTxIPDU] */
  /*    51 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_01_ofas_5c4fbe1b_Tx{RL}, /ActiveEcuC/Com/ComConfig/SG_FAS_RL_01_Group_oFAS_RL_01_ofas_e47cb1a9_Tx{RL}SigGrpInTxIPDU] */
  /*    52 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_02_ofas_dadbccb5_Tx{RL}, /ActiveEcuC/Com/ComConfig/SG_FAS_RL_02_Group_oFAS_RL_02_ofas_140dfa3a_Tx{RL}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_02_ofas_dadbccb5_Tx{RL}, /ActiveEcuC/Com/ComConfig/SG_FAS_RL_02_Group_oFAS_RL_02_ofas_140dfa3a_Tx{RL}SigGrpInTxIPDU] */
  /*    69 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_02_ofas_dadbccb5_Tx{RL}, /ActiveEcuC/Com/ComConfig/SG_FAS_RL_02_Group_oFAS_RL_02_ofas_140dfa3a_Tx{RL}SigGrpInTxIPDU] */
  /*    70 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_02_ofas_dadbccb5_Tx{RL}] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_02_ofas_dadbccb5_Tx{RL}] */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_04_ofas_0c822fa8_Tx{RL}, /ActiveEcuC/Com/ComConfig/SG_FAS_RL_04_Group_oFAS_RL_04_ofas_2f9e6b5d_Tx{RL}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_04_ofas_0c822fa8_Tx{RL}, /ActiveEcuC/Com/ComConfig/SG_FAS_RL_04_Group_oFAS_RL_04_ofas_2f9e6b5d_Tx{RL}SigGrpInTxIPDU] */
  /*    79 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_04_ofas_0c822fa8_Tx{RL}, /ActiveEcuC/Com/ComConfig/SG_FAS_RL_04_Group_oFAS_RL_04_ofas_2f9e6b5d_Tx{RL}SigGrpInTxIPDU] */
  /*    80 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_05_ofas_c7defc0d_Tx{RL}, /ActiveEcuC/Com/ComConfig/SG_FAS_RL_05_Group_oFAS_RL_05_ofas_7fb1522c_Tx{RL}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_05_ofas_c7defc0d_Tx{RL}, /ActiveEcuC/Com/ComConfig/SG_FAS_RL_05_Group_oFAS_RL_05_ofas_7fb1522c_Tx{RL}SigGrpInTxIPDU] */
  /*    96 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_05_ofas_c7defc0d_Tx{RL}, /ActiveEcuC/Com/ComConfig/SG_FAS_RL_05_Group_oFAS_RL_05_ofas_7fb1522c_Tx{RL}SigGrpInTxIPDU] */
  /*    97 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_05_ofas_c7defc0d_Tx{RL}] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_05_ofas_c7defc0d_Tx{RL}] */
  /*    99 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_05_ofas_c7defc0d_Tx{RL}] */
  /*   100 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx{RL}, /ActiveEcuC/Com/ComConfig/ScrNodId_FAS_RL_oNM_FAS_RL_ofas_64c2242a_Tx{RL}] */
  /*   101 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx{RL}, /ActiveEcuC/Com/ComConfig/ActvWakeup_FAS_RL_oNM_FAS_RL_ofas_375ff4b2_Tx{RL}, /ActiveEcuC/Com/ComConfig/NetMngtCoorn_FAS_RL_oNM_FAS_RL_ofas_16f77394_Tx{RL}, /ActiveEcuC/Com/ComConfig/NetMngtCoorrSleepRdy_FAS_RL_oNM_FAS_RL_ofas_fd0ed8b2_Tx{RL}, /ActiveEcuC/Com/ComConfig/PtlNetInfo_FAS_RL_oNM_FAS_RL_ofas_f0b8340a_Tx{RL}, /ActiveEcuC/Com/ComConfig/RepMsgReq_FAS_RL_oNM_FAS_RL_ofas_07b4a3ee_Tx{RL}, /ActiveEcuC/Com/ComConfig/ResdBit1_FAS_RL_oNM_FAS_RL_ofas_7a8d5d4c_Tx{RL}, /ActiveEcuC/Com/ComConfig/ResdBit2_FAS_RL_oNM_FAS_RL_ofas_2293f464_Tx{RL}] */
  /*   102 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN1_FAS_RL_oNM_FAS_RL_ofas_4c0833d9_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN2_FAS_RL_oNM_FAS_RL_ofas_14169af1_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN3_FAS_RL_oNM_FAS_RL_ofas_9533ffd6_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN4_FAS_RL_oNM_FAS_RL_ofas_a42bc8a1_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN5_FAS_RL_oNM_FAS_RL_ofas_250ead86_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN6_FAS_RL_oNM_FAS_RL_ofas_7d1004ae_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN7_FAS_RL_oNM_FAS_RL_ofas_fc356189_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN8_FAS_RL_oNM_FAS_RL_ofas_1f206a40_Tx{RL}] */
  /*   103 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN9_FAS_RL_oNM_FAS_RL_ofas_9e050f67_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN10_FAS_RL_oNM_FAS_RL_ofas_85866440_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN11_FAS_RL_oNM_FAS_RL_ofas_04a30167_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN12_FAS_RL_oNM_FAS_RL_ofas_5cbda84f_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN13_FAS_RL_oNM_FAS_RL_ofas_dd98cd68_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN14_FAS_RL_oNM_FAS_RL_ofas_ec80fa1f_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN15_FAS_RL_oNM_FAS_RL_ofas_6da59f38_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN16_FAS_RL_oNM_FAS_RL_ofas_35bb3610_Tx{RL}] */
  /*   104 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN17_FAS_RL_oNM_FAS_RL_ofas_b49e5337_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN18_FAS_RL_oNM_FAS_RL_ofas_578b58fe_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN19_FAS_RL_oNM_FAS_RL_ofas_d6ae3dd9_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN20_FAS_RL_oNM_FAS_RL_ofas_b06bd213_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN21_FAS_RL_oNM_FAS_RL_ofas_314eb734_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN22_FAS_RL_oNM_FAS_RL_ofas_69501e1c_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN23_FAS_RL_oNM_FAS_RL_ofas_e8757b3b_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN24_FAS_RL_oNM_FAS_RL_ofas_d96d4c4c_Tx{RL}] */
  /*   105 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN25_FAS_RL_oNM_FAS_RL_ofas_5848296b_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN26_FAS_RL_oNM_FAS_RL_ofas_00568043_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN27_FAS_RL_oNM_FAS_RL_ofas_8173e564_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN28_FAS_RL_oNM_FAS_RL_ofas_6266eead_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN29_FAS_RL_oNM_FAS_RL_ofas_e3438b8a_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN30_FAS_RL_oNM_FAS_RL_ofas_15e0421d_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN31_FAS_RL_oNM_FAS_RL_ofas_94c5273a_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN32_FAS_RL_oNM_FAS_RL_ofas_ccdb8e12_Tx{RL}] */
  /*   106 */  /* [/ActiveEcuC/Com/ComConfig/PN33_FAS_RL_oNM_FAS_RL_ofas_4dfeeb35_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN34_FAS_RL_oNM_FAS_RL_ofas_7ce6dc42_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN35_FAS_RL_oNM_FAS_RL_ofas_fdc3b965_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN36_FAS_RL_oNM_FAS_RL_ofas_a5dd104d_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN37_FAS_RL_oNM_FAS_RL_ofas_24f8756a_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN38_FAS_RL_oNM_FAS_RL_ofas_c7ed7ea3_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN39_FAS_RL_oNM_FAS_RL_ofas_46c81b84_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN40_FAS_RL_oNM_FAS_RL_ofas_dbb0beb5_Tx{RL}] */
  /*   107 */  /* [/ActiveEcuC/Com/ComConfig/PN41_FAS_RL_oNM_FAS_RL_ofas_5a95db92_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN42_FAS_RL_oNM_FAS_RL_ofas_028b72ba_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN43_FAS_RL_oNM_FAS_RL_ofas_83ae179d_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN44_FAS_RL_oNM_FAS_RL_ofas_b2b620ea_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN45_FAS_RL_oNM_FAS_RL_ofas_339345cd_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN46_FAS_RL_oNM_FAS_RL_ofas_6b8dece5_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN47_FAS_RL_oNM_FAS_RL_ofas_eaa889c2_Tx{RL}, /ActiveEcuC/Com/ComConfig/PN48_FAS_RL_oNM_FAS_RL_ofas_09bd820b_Tx{RL}] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_TxSigGrpInTxIPDU] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_10Hz_MSG1_Group_oFAA_DBG_10Hz_MSG1_ofas_6d495e28_TxSigGrpInTxIPDU] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_TxSigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_TxSigGrpInTxIPDU] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/SG_FAA_DBG_1000Hz_MSG1_Group_oFAA_DBG_1000Hz_MSG1_ofas_eb3c05da_TxSigGrpInTxIPDU] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_01_ofas_384d27f8_Tx{RR}, /ActiveEcuC/Com/ComConfig/SG_FAS_RR_01_Group_oFAS_RR_01_ofas_40db833f_Tx{RR}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_01_ofas_384d27f8_Tx{RR}, /ActiveEcuC/Com/ComConfig/SG_FAS_RR_01_Group_oFAS_RR_01_ofas_40db833f_Tx{RR}SigGrpInTxIPDU] */
  /*    51 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_01_ofas_384d27f8_Tx{RR}, /ActiveEcuC/Com/ComConfig/SG_FAS_RR_01_Group_oFAS_RR_01_ofas_40db833f_Tx{RR}SigGrpInTxIPDU] */
  /*    52 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_02_ofas_bed95556_Tx{RR}, /ActiveEcuC/Com/ComConfig/SG_FAS_RR_02_Group_oFAS_RR_02_ofas_b0aac8ac_Tx{RR}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_02_ofas_bed95556_Tx{RR}, /ActiveEcuC/Com/ComConfig/SG_FAS_RR_02_Group_oFAS_RR_02_ofas_b0aac8ac_Tx{RR}SigGrpInTxIPDU] */
  /*    69 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_02_ofas_bed95556_Tx{RR}, /ActiveEcuC/Com/ComConfig/SG_FAS_RR_02_Group_oFAS_RR_02_ofas_b0aac8ac_Tx{RR}SigGrpInTxIPDU] */
  /*    70 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_02_ofas_bed95556_Tx{RR}] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_02_ofas_bed95556_Tx{RR}] */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_04_ofas_6880b64b_Tx{RR}, /ActiveEcuC/Com/ComConfig/SG_FAS_RR_04_Group_oFAS_RR_04_ofas_8b3959cb_Tx{RR}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_04_ofas_6880b64b_Tx{RR}, /ActiveEcuC/Com/ComConfig/SG_FAS_RR_04_Group_oFAS_RR_04_ofas_8b3959cb_Tx{RR}SigGrpInTxIPDU] */
  /*    79 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_04_ofas_6880b64b_Tx{RR}, /ActiveEcuC/Com/ComConfig/SG_FAS_RR_04_Group_oFAS_RR_04_ofas_8b3959cb_Tx{RR}SigGrpInTxIPDU] */
  /*    80 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_05_ofas_a3dc65ee_Tx{RR}, /ActiveEcuC/Com/ComConfig/SG_FAS_RR_05_Group_oFAS_RR_05_ofas_db1660ba_Tx{RR}SigGrpInTxIPDU] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_05_ofas_a3dc65ee_Tx{RR}, /ActiveEcuC/Com/ComConfig/SG_FAS_RR_05_Group_oFAS_RR_05_ofas_db1660ba_Tx{RR}SigGrpInTxIPDU] */
  /*    96 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_05_ofas_a3dc65ee_Tx{RR}, /ActiveEcuC/Com/ComConfig/SG_FAS_RR_05_Group_oFAS_RR_05_ofas_db1660ba_Tx{RR}SigGrpInTxIPDU] */
  /*    97 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_05_ofas_a3dc65ee_Tx{RR}] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_05_ofas_a3dc65ee_Tx{RR}] */
  /*    99 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_05_ofas_a3dc65ee_Tx{RR}] */
  /*   100 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx{RR}, /ActiveEcuC/Com/ComConfig/ScrNodId_FAS_RR_oNM_FAS_RR_ofas_0b6b262a_Tx{RR}] */
  /*   101 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx{RR}, /ActiveEcuC/Com/ComConfig/ActvWakeup_FAS_RR_oNM_FAS_RR_ofas_58f6f6b2_Tx{RR}, /ActiveEcuC/Com/ComConfig/NetMngtCoorn_FAS_RR_oNM_FAS_RR_ofas_795e7194_Tx{RR}, /ActiveEcuC/Com/ComConfig/NetMngtCoorrSleepRdy_FAS_RR_oNM_FAS_RR_ofas_92a7dab2_Tx{RR}, /ActiveEcuC/Com/ComConfig/PtlNetInfo_FAS_RR_oNM_FAS_RR_ofas_9f11360a_Tx{RR}, /ActiveEcuC/Com/ComConfig/RepMsgReq_FAS_RR_oNM_FAS_RR_ofas_681da1ee_Tx{RR}, /ActiveEcuC/Com/ComConfig/ResdBit1_FAS_RR_oNM_FAS_RR_ofas_15245f4c_Tx{RR}, /ActiveEcuC/Com/ComConfig/ResdBit2_FAS_RR_oNM_FAS_RR_ofas_4d3af664_Tx{RR}] */
  /*   102 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN1_FAS_RR_oNM_FAS_RR_ofas_23a131d9_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN2_FAS_RR_oNM_FAS_RR_ofas_7bbf98f1_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN3_FAS_RR_oNM_FAS_RR_ofas_fa9afdd6_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN4_FAS_RR_oNM_FAS_RR_ofas_cb82caa1_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN5_FAS_RR_oNM_FAS_RR_ofas_4aa7af86_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN6_FAS_RR_oNM_FAS_RR_ofas_12b906ae_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN7_FAS_RR_oNM_FAS_RR_ofas_939c6389_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN8_FAS_RR_oNM_FAS_RR_ofas_70896840_Tx{RR}] */
  /*   103 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN9_FAS_RR_oNM_FAS_RR_ofas_f1ac0d67_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN10_FAS_RR_oNM_FAS_RR_ofas_ea2f6640_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN11_FAS_RR_oNM_FAS_RR_ofas_6b0a0367_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN12_FAS_RR_oNM_FAS_RR_ofas_3314aa4f_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN13_FAS_RR_oNM_FAS_RR_ofas_b231cf68_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN14_FAS_RR_oNM_FAS_RR_ofas_8329f81f_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN15_FAS_RR_oNM_FAS_RR_ofas_020c9d38_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN16_FAS_RR_oNM_FAS_RR_ofas_5a123410_Tx{RR}] */
  /*   104 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN17_FAS_RR_oNM_FAS_RR_ofas_db375137_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN18_FAS_RR_oNM_FAS_RR_ofas_38225afe_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN19_FAS_RR_oNM_FAS_RR_ofas_b9073fd9_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN20_FAS_RR_oNM_FAS_RR_ofas_dfc2d013_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN21_FAS_RR_oNM_FAS_RR_ofas_5ee7b534_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN22_FAS_RR_oNM_FAS_RR_ofas_06f91c1c_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN23_FAS_RR_oNM_FAS_RR_ofas_87dc793b_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN24_FAS_RR_oNM_FAS_RR_ofas_b6c44e4c_Tx{RR}] */
  /*   105 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN25_FAS_RR_oNM_FAS_RR_ofas_37e12b6b_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN26_FAS_RR_oNM_FAS_RR_ofas_6fff8243_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN27_FAS_RR_oNM_FAS_RR_ofas_eedae764_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN28_FAS_RR_oNM_FAS_RR_ofas_0dcfecad_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN29_FAS_RR_oNM_FAS_RR_ofas_8cea898a_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN30_FAS_RR_oNM_FAS_RR_ofas_7a49401d_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN31_FAS_RR_oNM_FAS_RR_ofas_fb6c253a_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN32_FAS_RR_oNM_FAS_RR_ofas_a3728c12_Tx{RR}] */
  /*   106 */  /* [/ActiveEcuC/Com/ComConfig/PN33_FAS_RR_oNM_FAS_RR_ofas_2257e935_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN34_FAS_RR_oNM_FAS_RR_ofas_134fde42_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN35_FAS_RR_oNM_FAS_RR_ofas_926abb65_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN36_FAS_RR_oNM_FAS_RR_ofas_ca74124d_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN37_FAS_RR_oNM_FAS_RR_ofas_4b51776a_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN38_FAS_RR_oNM_FAS_RR_ofas_a8447ca3_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN39_FAS_RR_oNM_FAS_RR_ofas_29611984_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN40_FAS_RR_oNM_FAS_RR_ofas_b419bcb5_Tx{RR}] */
  /*   107 */  /* [/ActiveEcuC/Com/ComConfig/PN41_FAS_RR_oNM_FAS_RR_ofas_353cd992_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN42_FAS_RR_oNM_FAS_RR_ofas_6d2270ba_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN43_FAS_RR_oNM_FAS_RR_ofas_ec07159d_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN44_FAS_RR_oNM_FAS_RR_ofas_dd1f22ea_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN45_FAS_RR_oNM_FAS_RR_ofas_5c3a47cd_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN46_FAS_RR_oNM_FAS_RR_ofas_0424eee5_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN47_FAS_RR_oNM_FAS_RR_ofas_85018bc2_Tx{RR}, /ActiveEcuC/Com/ComConfig/PN48_FAS_RR_oNM_FAS_RR_ofas_6614800b_Tx{RR}] */

#define COM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxIPduGroupISRLockCounterUType, COM_VAR_NO_INIT) Com_TxIPduGroupISRLockCounter;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [noPartition] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [noPartition] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [noPartition] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [noPartition] */

#define COM_STOP_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpActive
  \brief  Tx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxPduGrpActiveType, COM_VAR_NO_INIT) Com_TxPduGrpActive[7];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}, ComMainFunctionTx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}, ComMainFunctionTx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}, ComMainFunctionTx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}, ComMainFunctionTx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}, /ActiveEcuC/Com/ComConfig/NM_TX_Group, ComMainFunctionTx] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_01_ofas_1608066a_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}, ComMainFunctionTx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}, ComMainFunctionTx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_04_ofas_46c597d9_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}, ComMainFunctionTx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}, ComMainFunctionTx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx{FR}, ComMainFunctionTx] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_01_ofas_5c4fbe1b_Tx{RL}, /ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Tx_dd9c4110{RL}, ComMainFunctionTx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_02_ofas_dadbccb5_Tx{RL}, /ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Tx_dd9c4110{RL}, ComMainFunctionTx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_04_ofas_0c822fa8_Tx{RL}, /ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Tx_dd9c4110{RL}, ComMainFunctionTx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_05_ofas_c7defc0d_Tx{RL}, /ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Tx_dd9c4110{RL}, ComMainFunctionTx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx{RL}, ComMainFunctionTx] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_01_ofas_384d27f8_Tx{RR}, /ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Tx_b99ed8f3{RR}, ComMainFunctionTx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_02_ofas_bed95556_Tx{RR}, /ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Tx_b99ed8f3{RR}, ComMainFunctionTx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_04_ofas_6880b64b_Tx{RR}, /ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Tx_b99ed8f3{RR}, ComMainFunctionTx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_05_ofas_a3dc65ee_Tx{RR}, /ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Tx_b99ed8f3{RR}, ComMainFunctionTx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx{RR}, ComMainFunctionTx] */

#define COM_STOP_SEC_VAR_NO_INIT_8
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxProcessingISRLockCounterUType, COM_VAR_NO_INIT) Com_TxProcessingISRLockCounter;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [ComMainFunctionTx] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [ComMainFunctionTx] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [ComMainFunctionTx] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [ComMainFunctionTx] */

#define COM_STOP_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxSduLength
  \brief  This var Array contains the Com Ipdu Length.
*/ 
#define COM_START_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxSduLengthType, COM_VAR_NO_INIT) Com_TxSduLength[7];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys   FL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_01_ofas_720a9f89_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}, ComMainFunctionTx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_02_ofas_f49eed27_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}, ComMainFunctionTx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_04_ofas_22c70e3a_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}, ComMainFunctionTx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FL_05_ofas_e99bdd9f_Tx{FL}, /ActiveEcuC/Com/ComConfig/FAS_FL_ofas_Tx_f3d96082{FL}, ComMainFunctionTx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FL_ofas_a2f9e25c_Tx{FL}, /ActiveEcuC/Com/ComConfig/NM_TX_Group, ComMainFunctionTx] */
  /* Index        Referable Keys   FR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_01_ofas_1608066a_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}, ComMainFunctionTx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_02_ofas_909c74c4_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}, ComMainFunctionTx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_04_ofas_46c597d9_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}, ComMainFunctionTx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_FR_05_ofas_8d99447c_Tx{FR}, /ActiveEcuC/Com/ComConfig/FAS_FR_ofas_Tx_97dbf961{FR}, ComMainFunctionTx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_FR_ofas_9b2581b7_Tx{FR}, ComMainFunctionTx] */
  /* Index        Referable Keys   RL */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_01_ofas_5c4fbe1b_Tx{RL}, /ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Tx_dd9c4110{RL}, ComMainFunctionTx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_02_ofas_dadbccb5_Tx{RL}, /ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Tx_dd9c4110{RL}, ComMainFunctionTx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_04_ofas_0c822fa8_Tx{RL}, /ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Tx_dd9c4110{RL}, ComMainFunctionTx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RL_05_ofas_c7defc0d_Tx{RL}, /ActiveEcuC/Com/ComConfig/FAS_RL_ofas_Tx_dd9c4110{RL}, ComMainFunctionTx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RL_ofas_31685a81_Tx{RL}, ComMainFunctionTx] */
  /* Index        Referable Keys   RR */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx, /ActiveEcuC/Com/ComConfig/EMM_FAA_DBG, ComMainFunctionTx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_01_ofas_384d27f8_Tx{RR}, /ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Tx_b99ed8f3{RR}, ComMainFunctionTx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_02_ofas_bed95556_Tx{RR}, /ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Tx_b99ed8f3{RR}, ComMainFunctionTx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_04_ofas_6880b64b_Tx{RR}, /ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Tx_b99ed8f3{RR}, ComMainFunctionTx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/FAS_RR_05_ofas_a3dc65ee_Tx{RR}, /ActiveEcuC/Com/ComConfig/FAS_RR_ofas_Tx_b99ed8f3{RR}, ComMainFunctionTx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/NM_FAS_RR_ofas_08b4396a_Tx{RR}, ComMainFunctionTx] */

#define COM_STOP_SEC_VAR_NO_INIT_16
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_PCConfig
**********************************************************************************************************************/
/** 
  \var    Com_PCConfig
  \details
  Element                                         Description
  AlwaysActiveTxComIPdus                          the pointer to Com_AlwaysActiveTxComIPdus
  IPduGroupInfo                                   the pointer to Com_IPduGroupInfo
  IPduGroupInfoToSubIPduGroupsInd                 the pointer to Com_IPduGroupInfoToSubIPduGroupsInd
  PartitionsAlwaysActiveTxComIPdusStruct          the pointer to Com_PartitionsAlwaysActiveTxComIPdusStruct
  TxPduCalloutFuncPtr                             the pointer to Com_TxPduCalloutFuncPtr
  TxPduInfo                                       the pointer to Com_TxPduInfo
  TxPduInfoInd                                    the pointer to Com_TxPduInfoInd
  SizeOfAlwaysActiveTxComIPdus                    the number of accomplishable value elements in Com_AlwaysActiveTxComIPdus
  SizeOfIPduGroupInfoOfTxPduInfoInd               the number of accomplishable value elements in Com_IPduGroupInfoOfTxPduInfoInd
  SizeOfIPduGroupInfoToSubIPduGroupsInd           the number of accomplishable value elements in Com_IPduGroupInfoToSubIPduGroupsInd
  SizeOfPartitionsAlwaysActiveTxComIPdusStruct    the number of accomplishable value elements in Com_PartitionsAlwaysActiveTxComIPdusStruct
  SizeOfTxPduInfoInd                              the number of accomplishable value elements in Com_TxPduInfoInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_PCConfigsType, COM_CONST) Com_PCConfig = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  { /* Index: 0 Keys: [Config_FL] */
      NULL_PTR                                      /**< the struct is deactivated because all elements are deactivated. */
    , Com_IPduGroupInfoFL                           /**< the pointer to Com_IPduGroupInfo in Config_FL */
    , Com_IPduGroupInfoToSubIPduGroupsIndFL         /**< the pointer to Com_IPduGroupInfoToSubIPduGroupsInd in Config_FL */
    , NULL_PTR                                      /**< the struct is deactivated because all elements are deactivated. */
    , Com_TxPduCalloutFuncPtrFL                     /**< the pointer to Com_TxPduCalloutFuncPtr in Config_FL */
    , Com_TxPduInfoFL                               /**< the pointer to Com_TxPduInfo in Config_FL */
    , Com_TxPduInfoIndFL                            /**< the pointer to Com_TxPduInfoInd in Config_FL */
    , 0u                                            /**< the number of elements in Com_AlwaysActiveTxComIPdus in Config_FL */
    , 7u                                            /**< the number of elements in Com_IPduGroupInfoOfTxPduInfoInd in Config_FL */
    , 4u                                            /**< the number of elements in Com_IPduGroupInfoToSubIPduGroupsInd in Config_FL */
    , 0u                                            /**< the number of elements in Com_PartitionsAlwaysActiveTxComIPdusStruct in Config_FL */
    , 7u                                            /**< the number of elements in Com_TxPduInfoInd in Config_FL */
  },
  { /* Index: 1 Keys: [Config_FR] */
      Com_AlwaysActiveTxComIPdus                    /**< the pointer to Com_AlwaysActiveTxComIPdus in Config_FR */
    , Com_IPduGroupInfoFR                           /**< the pointer to Com_IPduGroupInfo in Config_FR */
    , Com_IPduGroupInfoToSubIPduGroupsIndFR         /**< the pointer to Com_IPduGroupInfoToSubIPduGroupsInd in Config_FR */
    , Com_PartitionsAlwaysActiveTxComIPdusStruct    /**< the pointer to Com_PartitionsAlwaysActiveTxComIPdusStruct in Config_FR */
    , Com_TxPduCalloutFuncPtrFR                     /**< the pointer to Com_TxPduCalloutFuncPtr in Config_FR */
    , Com_TxPduInfoFR                               /**< the pointer to Com_TxPduInfo in Config_FR */
    , Com_TxPduInfoIndFR                            /**< the pointer to Com_TxPduInfoInd in Config_FR */
    , 1u                                            /**< the number of elements in Com_AlwaysActiveTxComIPdus in Config_FR */
    , 6u                                            /**< the number of elements in Com_IPduGroupInfoOfTxPduInfoInd in Config_FR */
    , 3u                                            /**< the number of elements in Com_IPduGroupInfoToSubIPduGroupsInd in Config_FR */
    , 1u                                            /**< the number of elements in Com_PartitionsAlwaysActiveTxComIPdusStruct in Config_FR */
    , 6u                                            /**< the number of elements in Com_TxPduInfoInd in Config_FR */
  },
  { /* Index: 2 Keys: [Config_RL] */
      Com_AlwaysActiveTxComIPdus                    /**< the pointer to Com_AlwaysActiveTxComIPdus in Config_RL */
    , Com_IPduGroupInfoFR                           /**< the pointer to Com_IPduGroupInfo in Config_RL */
    , Com_IPduGroupInfoToSubIPduGroupsIndFR         /**< the pointer to Com_IPduGroupInfoToSubIPduGroupsInd in Config_RL */
    , Com_PartitionsAlwaysActiveTxComIPdusStruct    /**< the pointer to Com_PartitionsAlwaysActiveTxComIPdusStruct in Config_RL */
    , Com_TxPduCalloutFuncPtrRL                     /**< the pointer to Com_TxPduCalloutFuncPtr in Config_RL */
    , Com_TxPduInfoFR                               /**< the pointer to Com_TxPduInfo in Config_RL */
    , Com_TxPduInfoIndFR                            /**< the pointer to Com_TxPduInfoInd in Config_RL */
    , 1u                                            /**< the number of elements in Com_AlwaysActiveTxComIPdus in Config_RL */
    , 6u                                            /**< the number of elements in Com_IPduGroupInfoOfTxPduInfoInd in Config_RL */
    , 3u                                            /**< the number of elements in Com_IPduGroupInfoToSubIPduGroupsInd in Config_RL */
    , 1u                                            /**< the number of elements in Com_PartitionsAlwaysActiveTxComIPdusStruct in Config_RL */
    , 6u                                            /**< the number of elements in Com_TxPduInfoInd in Config_RL */
  },
  { /* Index: 3 Keys: [Config_RR] */
      Com_AlwaysActiveTxComIPdus                    /**< the pointer to Com_AlwaysActiveTxComIPdus in Config_RR */
    , Com_IPduGroupInfoFR                           /**< the pointer to Com_IPduGroupInfo in Config_RR */
    , Com_IPduGroupInfoToSubIPduGroupsIndFR         /**< the pointer to Com_IPduGroupInfoToSubIPduGroupsInd in Config_RR */
    , Com_PartitionsAlwaysActiveTxComIPdusStruct    /**< the pointer to Com_PartitionsAlwaysActiveTxComIPdusStruct in Config_RR */
    , Com_TxPduCalloutFuncPtrRR                     /**< the pointer to Com_TxPduCalloutFuncPtr in Config_RR */
    , Com_TxPduInfoFR                               /**< the pointer to Com_TxPduInfo in Config_RR */
    , Com_TxPduInfoIndFR                            /**< the pointer to Com_TxPduInfoInd in Config_RR */
    , 1u                                            /**< the number of elements in Com_AlwaysActiveTxComIPdus in Config_RR */
    , 6u                                            /**< the number of elements in Com_IPduGroupInfoOfTxPduInfoInd in Config_RR */
    , 3u                                            /**< the number of elements in Com_IPduGroupInfoToSubIPduGroupsInd in Config_RR */
    , 1u                                            /**< the number of elements in Com_PartitionsAlwaysActiveTxComIPdusStruct in Config_RR */
    , 6u                                            /**< the number of elements in Com_TxPduInfoInd in Config_RR */
  }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/



#define COM_START_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Com_MainFunctionRx_ComMainFunctionRx
 *********************************************************************************************************************/
 /*!
 * \internal
 * - call Com_MainFunctionRx with the id referencing this main function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, COM_CODE) Com_MainFunctionRx_ComMainFunctionRx(void)
{
#if ((COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)||(COM_RXTOUTINFO == STD_ON))
  Com_MainFunctionRxStructIterType id = 0;
  Com_MainFunctionRxInternal(id);
#endif
}

/**********************************************************************************************************************
 * Com_MainFunctionTx_ComMainFunctionTx
 *********************************************************************************************************************/
 /*!
 * \internal
 * - call Com_MainFunctionTx with the id referencing this main function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, COM_CODE) Com_MainFunctionTx_ComMainFunctionTx(void)
{
#if (COM_TXMODEINFO == STD_ON)
  Com_MainFunctionTxStructIterType id = 0;
  Com_MainFunctionTxInternal(id);
#endif
}

#define COM_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */   /* MD_MSR_MemMap */

/**********************************************************************************************************************
  END OF FILE: Com_Lcfg.c
**********************************************************************************************************************/

