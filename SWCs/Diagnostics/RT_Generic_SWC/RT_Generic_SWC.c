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
 *             File:  RT_Generic_SWC.c
 *           Config:  StartApplication.dpa
 *        SW-C Type:  RT_Generic_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2300382
 *
 *      Description:  C-Code implementation template for SW-C <RT_Generic_SWC>
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
 * Ascc_Esdd_St_Req_Struct
 *   Motor Control Operation Request
 *
 * Av_Pg_Var_AtHrm_Fl_Pa
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Av_Pg_Var_AtHrm_Fr_Pa
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Av_Pg_Var_AtHrm_Pa
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Av_Pg_Var_AtHrm_Rl_Pa
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Av_Pg_Var_AtHrm_Rr_Pa
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Emm_Ag_OfRotr_Rad
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Emm_I_Bus_Ampr
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_I_Bus_Fl_Ampr
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_I_Bus_Fr_Ampr
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_I_Bus_Rl_Ampr
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_I_Bus_Rr_Ampr
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_Temp_Brdg_DegC
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_Tq_Dmd_Nm
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_Tq_Est_Fl_Nm
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_Tq_Est_Fr_Nm
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_Tq_Est_Nm
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_Tq_Est_Rl_Nm
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_Tq_Est_Rr_Nm
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_U_Bus_Fl_Volt
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Emm_U_Bus_Fr_Volt
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Emm_U_Bus_Rl_Volt
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Emm_U_Bus_Rr_Volt
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Emm_U_Bus_Volt
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * Emm_Vagr_OfRotr_Fl_Radsec
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_Vagr_OfRotr_Fr_Radsec
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_Vagr_OfRotr_Radsec
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_Vagr_OfRotr_Rl_Radsec
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Emm_Vagr_OfRotr_Rr_Radsec
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Faa_Amnt_ActunCpby_Fl_Na
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Faa_Amnt_ActunCpby_Fr_Na
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Faa_Amnt_ActunCpby_Rl_Na
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Faa_Amnt_ActunCpby_Rr_Na
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Faa_F_Fl_AtActr_Cmd_Nwt
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Faa_F_Fr_AtActr_Cmd_Nwt
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Faa_F_Rl_AtActr_Cmd_Nwt
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Faa_F_Rr_AtActr_Cmd_Nwt
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Faa_Frq_Fn_ZlFil_Ce_Hz
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Faa_Frq_Re_ZlFil_Ce_Hz
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Faa_Gain_Fn_ZlFil_Na
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Faa_Gain_Re_ZlFil_Na
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Faa_Mofr_Fn_ZlGain_Na
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Faa_Mofr_Re_ZlGain_Na
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Faa_Pwr_UBus48_Fl_Est_Watt
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Faa_Pwr_UBus48_Fr_Est_Watt
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Faa_Pwr_UBus48_Rl_Est_Watt
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Faa_Pwr_UBus48_Rr_Est_Watt
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Faa_Temp_Fl_AtCtlr_DegC
 *   sint8 represents integers with a minimum value of -128 and a maximum value of 127.
 *      The order-relation on sint8 is: x < y if y - x is positive.
 *      sint8 has a lexical representation consisting of an optional sign followed 
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is 
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, 12678, +10000.
 *
 * Faa_Temp_Fr_AtCtlr_DegC
 *   sint8 represents integers with a minimum value of -128 and a maximum value of 127.
 *      The order-relation on sint8 is: x < y if y - x is positive.
 *      sint8 has a lexical representation consisting of an optional sign followed 
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is 
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, 12678, +10000.
 *
 * Faa_Temp_Rl_AtCtlr_DegC
 *   sint8 represents integers with a minimum value of -128 and a maximum value of 127.
 *      The order-relation on sint8 is: x < y if y - x is positive.
 *      sint8 has a lexical representation consisting of an optional sign followed 
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is 
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, 12678, +10000.
 *
 * Faa_Temp_Rr_AtCtlr_DegC
 *   sint8 represents integers with a minimum value of -128 and a maximum value of 127.
 *      The order-relation on sint8 is: x < y if y - x is positive.
 *      sint8 has a lexical representation consisting of an optional sign followed 
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is 
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, 12678, +10000.
 *
 * Faa_Wi_Fn_ZlFil_Na
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Faa_Wi_Re_ZlFil_Na
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * General_imp
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Sig1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * Whl_A_Z_AtAct_Est_Msec2
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Whl_A_Z_Fl_AtAct_Est_Msec2
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Whl_A_Z_Fr_AtAct_Est_Msec2
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Whl_A_Z_Rl_AtAct_Est_Msec2
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 * Whl_A_Z_Rr_AtAct_Est_Msec2
 *   SInt16 represents integers with a minimum value of -32768 and a maximum value 
 *      of 32767. The order-relation on sint16 is: x < y if y - x is positive.
 *      sint16 has a lexical representation consisting of an optional sign followed
 *      by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
 *      omitted, "+" is assumed. 
 *      
 *      For example: -1, 0, -12678, +10000, 2500
 *
 *********************************************************************************************************************/

#include "Rte_RT_Generic_SWC.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Rte_RT_Generic_SWC.h"
#include "Intg_Callout.h"
#include "Os_Types.h"
#include "Os.h"
#include "Platform_Types.h"
#include "NvM.h"
#include "NvM_Cfg.h"
#define RT_BUILD_VAR_CHECK    50u
#define RT_xcpVar1            1u
#define RT_xcpVar2            2u
#define RT_xcpVar3            3u
#define RT_xcpVar4            4u
#define RT_xcpVar5            5u
  
  uint32 StackUsage_CM_ASWC_High = 0;
  uint32 StackUsage_CM_ASWC_Low = 0;
  uint32 StackUsage_CM_ASWC_Mid = 0;
  uint32 StackUsage_CM_Init_Task = 0;
  uint32 StackUsage_Default_BSW_Async_Task = 0;
  uint32 StackUsage_Default_BSW_Sync_Task = 0;
  uint32 StackUsage_Default_Init_Task = 0;
  uint32 StackUsage_Default_Init_Task_Trusted = 0;
  uint32 StackUsage_IdleTask_OsCore0 = 0;
  uint32 StackUsage_RT_Init_Task = 0;
  uint32 StackUsage_RT_Periodic_Task = 0;
  uint8 RT_xcpVar=0; 

 Esdd_Ascc_St_Fb_Struct temp_Esdd_Ascc_St_Fb_St;//SetProgramming variables  pre condition
 Esdd_Sply_Data_Struct temp_Esdd_Sply_Data_Struct;//SetProgramming variables  pre condition
  uint32 gECUAliveCntr;
  // boolean NMReq=1;
  // boolean NMRelease=0;
  extern uint8 bswd_u8_Buildday;
  extern uint8 bswd_u8_Buildmonth;
  extern uint8 bswd_u8_Buildyear;
  extern uint8 bswd_u8_Buildhour;
  extern uint8 bswd_u8_Buildmin;
  extern uint32 bswd_u32_SW_Minor_Revision;
  extern uint32 bswd_u32_SW_Major_Revision;
  extern float32 bswd_f32_SW_VER;
  extern float32 bswd_f32_HW_VER;
  extern uint8 CM_SW_Ver_Major;
  extern uint8 CM_SW_Ver_Minor;
  extern uint8 CM_SW_Ver_Patch;
  extern uint8 RTBSW_SW_Ver_Major;
  extern uint8 RTBSW_SW_Ver_Minor;
  extern uint8 RTBSW_SW_Ver_Patch;
  extern uint8 EMMIntg_SW_Ver_Major;
  extern uint8 EMMIntg_SW_Ver_Minor;
  extern uint8 EMMIntg_SW_Ver_Patch;
//   //Test Code
//   SG_FAS_FL_01_Group data={1,1,1,1,1,1,1,1,1,1,1};
//   SG_FAS_FR_01_Group data1={1,1,1,1,1,1,1,1,1,1,1};
//   SG_FAS_RL_01_Group data2={1,1,1,1,1,1,1,1,1,1,1};
//   SG_FAS_RR_01_Group data3={1,1,1,1,1,1,1,1,1,1,1};
//   SG_FAS_FL_02_Group data_02={0xFF,0xFF};
//   SG_FAS_FR_02_Group fr_data_02={0xFF,0xFF};
//   SG_FAS_RL_02_Group rl_data_02={0xFF,0xFF};
//   SG_FAS_RR_02_Group rr_data_02={0xFF,0xFF};

  // SG_FAA_DBG_1000Hz_MSG1_Group data_dbg1;
// SG_FAA_DBG_10Hz_MSG1_Group data_dbg2;
// SG_FAA_DBG_10Hz_MSG_FL_Group data_dbg3;
// SG_FAA_DBG_10Hz_MSG_FR_Group data_dbg4;
// SG_FAA_DBG_10Hz_MSG_RL_Group data_dbg5;
// SG_FAA_DBG_500Hz_MSG_FL_Group data_dbg6;
// SG_FAA_DBG_500Hz_MSG_FR_Group data_dbg7;
// SG_FAA_DBG_500Hz_MSG_RL_Group data_dbg8;
// SG_FAA_DBG_500Hz_MSG_RR_Group data_dbg9;

//   SG_Zone_R_FAS_01_Group data_rx;
//   SG_Zone_R_FAS_02_Group data_rx2;
//   SG_Zone_TCU_01_Group data_rx3;
//   Rte_TransformerError transformerError;
  

  
 
//  extern uint8 bswd_Emm_Ctl_Cmd;

//   boolean ProgReq_u8=FALSE;
//   boolean uds_programming_condition = FALSE;
  

//  Esdd_Ascc_St_Fb_Struct* Esdd_Ascc_St_Fb_St;

//  Esdd_RotorSnsr_Data_Struct* Esdd_RotorSnsr_Data_St;
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
 * Av_Pg_Var_AtHrm_Fl_Pa: Integer in interval [0...4883]
 * Av_Pg_Var_AtHrm_Fr_Pa: Integer in interval [0...4883]
 * Av_Pg_Var_AtHrm_Pa: Integer in interval [0...4883]
 * Av_Pg_Var_AtHrm_Rl_Pa: Integer in interval [0...4883]
 * Av_Pg_Var_AtHrm_Rr_Pa: Integer in interval [0...4883]
 * Emm_Ag_OfRotr_Rad: Integer in interval [0...1608]
 * Emm_I_Bus_Ampr: Integer in interval [-800...800]
 * Emm_I_Bus_Fl_Ampr: Integer in interval [-800...800]
 * Emm_I_Bus_Fr_Ampr: Integer in interval [-800...800]
 * Emm_I_Bus_Rl_Ampr: Integer in interval [-800...800]
 * Emm_I_Bus_Rr_Ampr: Integer in interval [-800...800]
 * Emm_Temp_Brdg_DegC: Integer in interval [-400...400]
 * Emm_Tq_Dmd_Nm: Integer in interval [-768...768]
 * Emm_Tq_Est_Fl_Nm: Integer in interval [-768...768]
 * Emm_Tq_Est_Fr_Nm: Integer in interval [-768...768]
 * Emm_Tq_Est_Nm: Integer in interval [-768...768]
 * Emm_Tq_Est_Rl_Nm: Integer in interval [-768...768]
 * Emm_Tq_Est_Rr_Nm: Integer in interval [-768...768]
 * Emm_U_Bus_Fl_Volt: Integer in interval [0...5242]
 * Emm_U_Bus_Fr_Volt: Integer in interval [0...5242]
 * Emm_U_Bus_Rl_Volt: Integer in interval [0...5242]
 * Emm_U_Bus_Rr_Volt: Integer in interval [0...5242]
 * Emm_U_Bus_Volt: Integer in interval [0...5242]
 * Emm_Vagr_OfRotr_Fl_Radsec: Integer in interval [-500...500]
 * Emm_Vagr_OfRotr_Fr_Radsec: Integer in interval [-500...500]
 * Emm_Vagr_OfRotr_Radsec: Integer in interval [-500...500]
 * Emm_Vagr_OfRotr_Rl_Radsec: Integer in interval [-500...500]
 * Emm_Vagr_OfRotr_Rr_Radsec: Integer in interval [-500...500]
 * Faa_Amnt_ActunCpby_Fl_Na: Integer in interval [0...32]
 * Faa_Amnt_ActunCpby_Fr_Na: Integer in interval [0...32]
 * Faa_Amnt_ActunCpby_Rl_Na: Integer in interval [0...32]
 * Faa_Amnt_ActunCpby_Rr_Na: Integer in interval [0...32]
 * Faa_F_Fl_AtActr_Cmd_Nwt: Integer in interval [-2000...2000]
 * Faa_F_Fr_AtActr_Cmd_Nwt: Integer in interval [-2000...2000]
 * Faa_F_Rl_AtActr_Cmd_Nwt: Integer in interval [-2000...2000]
 * Faa_F_Rr_AtActr_Cmd_Nwt: Integer in interval [-2000...2000]
 * Faa_Frq_Fn_ZlFil_Ce_Hz: Integer in interval [8...120]
 * Faa_Frq_Re_ZlFil_Ce_Hz: Integer in interval [8...120]
 * Faa_Gain_Fn_ZlFil_Na: Integer in interval [0...72]
 * Faa_Gain_Re_ZlFil_Na: Integer in interval [0...72]
 * Faa_Mofr_Fn_ZlGain_Na: Integer in interval [0...16]
 * Faa_Mofr_Re_ZlGain_Na: Integer in interval [0...16]
 * Faa_Pwr_UBus48_Fl_Est_Watt: Integer in interval [-375...375]
 * Faa_Pwr_UBus48_Fr_Est_Watt: Integer in interval [-375...375]
 * Faa_Pwr_UBus48_Rl_Est_Watt: Integer in interval [-375...375]
 * Faa_Pwr_UBus48_Rr_Est_Watt: Integer in interval [-375...375]
 * Faa_Temp_Fl_AtCtlr_DegC: Integer in interval [-83...82]
 * Faa_Temp_Fr_AtCtlr_DegC: Integer in interval [-83...82]
 * Faa_Temp_Rl_AtCtlr_DegC: Integer in interval [-83...82]
 * Faa_Temp_Rr_AtCtlr_DegC: Integer in interval [-83...82]
 * Faa_Wi_Fn_ZlFil_Na: Integer in interval [0...64]
 * Faa_Wi_Re_ZlFil_Na: Integer in interval [0...64]
 * General_imp: Integer in interval [0...31]
 * Sig1: Integer in interval [0...255]
 * Whl_A_Z_AtAct_Est_Msec2: Integer in interval [-6400...6400]
 * Whl_A_Z_Fl_AtAct_Est_Msec2: Integer in interval [-6400...6400]
 * Whl_A_Z_Fr_AtAct_Est_Msec2: Integer in interval [-6400...6400]
 * Whl_A_Z_Rl_AtAct_Est_Msec2: Integer in interval [-6400...6400]
 * Whl_A_Z_Rr_AtAct_Est_Msec2: Integer in interval [-6400...6400]
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * sint16: Integer in interval [-32768...32767] (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * EmoCtl_Req_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_SUSPENDED (0U)
 *   EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_SUSPENDED (0U)
 *   EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_ON (1U)
 *   EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_ON (1U)
 *   EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_OFF (2U)
 *   EmoCtl_Req_Enum_GOTO_MOTOR_DRIVE_OFF (2U)
 * EmoCtl_Sts_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   EmoCtl_Sts_Enum_UNINITIALIZED (0U)
 *   EmoCtl_Sts_Enum_MOTOR_DRIVE_ON (1U)
 *   EmoCtl_Sts_Enum_MOTOR_DRIVE_OFF (2U)
 *   EmoCtl_Sts_Enum_MOTOR_DRIVE_SUSPENDED_INTERNAL (3U)
 *   EmoCtl_Sts_Enum_MOTOR_DRIVE_SUSPENDED_EXTERNAL (4U)
 * Rte_DT_SG_FAS_FL_02_Group_1: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Uninitialized (0U)
 *   Cx1_Healthy (1U)
 *   Cx2_Degraded (2U)
 *   Cx3_Unhealthy (3U)
 * Rte_DT_SG_FAS_FR_02_Group_1: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Uninitialized (0U)
 *   Cx1_Healthy (1U)
 *   Cx2_Degraded (2U)
 *   Cx3_Unhealthy (3U)
 * Rte_DT_SG_FAS_RL_02_Group_1: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Uninitialized (0U)
 *   Cx1_Healthy (1U)
 *   Cx2_Degraded (2U)
 *   Cx3_Unhealthy (3U)
 * Rte_DT_SG_FAS_RR_02_Group_1: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Uninitialized (0U)
 *   Cx1_Healthy (1U)
 *   Cx2_Degraded (2U)
 *   Cx3_Unhealthy (3U)
 * Rte_DT_SG_Zone_TCU_01_Group_4: Enumeration of integer in interval [0...15] with enumerators
 *   Cx0_Unknown (0U)
 *   Cx1_January (1U)
 *   Cx2_February (2U)
 *   Cx3_March (3U)
 *   Cx4_April (4U)
 *   Cx5_May (5U)
 *   Cx6_June (6U)
 *   Cx7_July (7U)
 *   Cx8_August (8U)
 *   Cx9_September (9U)
 *   CxA_October (10U)
 *   CxB_November (11U)
 *   CxC_December (12U)
 *   CxD_Reserved (13U)
 *   CxE_Reserved (14U)
 *   CxF_Invalid (15U)
 * Shdn_Fb_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Shdn_Fb_Enum_NOT_REQUESTED (0U)
 *   Shdn_Fb_Enum_NOT_REQUESTED (0U)
 *   Shdn_Fb_Enum_SHUTDOWN_READINESS_IN_PROGRESS (1U)
 *   Shdn_Fb_Enum_SHUTDOWN_READINESS_IN_PROGRESS (1U)
 *   Shdn_Fb_Enum_READY_TO_SHUTDOWN (2U)
 *   Shdn_Fb_Enum_READY_TO_SHUTDOWN (2U)
 * Shdn_Req_Enum: Enumeration of integer in interval [0...255] with enumerators
 *   Shdn_Req_Enum_NO_SHUTDOWN_REQ (0U)
 *   Shdn_Req_Enum_NO_SHUTDOWN_REQ (0U)
 *   Shdn_Req_Enum_PREPARE_FOR_SHUTDOWN (1U)
 *   Shdn_Req_Enum_PREPARE_FOR_SHUTDOWN (1U)
 *
 * Record Types:
 * =============
 * Ascc_Esdd_St_Req_Struct: Record with elements
 *   Ascc_EmoCtl_Req_Na of type EmoCtl_Req_Enum
 *   Ascc_Shdn_Req_Na of type Shdn_Req_Enum
 * Bsw_ProgrammingReq_Struct: Record with elements
 *   Bsw_ProgrammingReq of type boolean
 * Esdd_Ascc_St_Fb_Struct: Record with elements
 *   Esdd_EmoCtl_Sts_Na of type EmoCtl_Sts_Enum
 *   Esdd_Shdn_Fb_Na of type Shdn_Fb_Enum
 * Esdd_Sply_Data_Struct: Record with elements
 *   Esdd_SplyU_Volt of type float32
 *   Esdd_SplyI_Amp of type float32
 *   Esdd_Bus_Pwr_Est_Watt of type float32
 * SG_FAA_DBG_1000Hz_MSG1_Group: Record with elements
 *   Av_Pg_Var_AtHrm_Pa of type uint16
 *   Emm_Ag_OfRotr_Rad of type uint16
 *   Emm_I_Bus_Ampr of type sint16
 *   Emm_Tq_Dmd_Nm of type sint16
 *   Emm_Tq_Est_Nm of type sint16
 *   Emm_U_Bus_Volt of type uint16
 *   Emm_Vagr_OfRotr_Radsec of type sint16
 *   Whl_A_Z_AtAct_Est_Msec2 of type sint16
 * SG_FAA_DBG_10Hz_MSG1_Group: Record with elements
 *   Dem_Event_Id_Na of type uint8
 *   Dem_Event_Status_Na of type uint8
 *   Emm_Temp_AtCtlr_Est_DegC of type sint8
 *   Emm_Temp_AtHrm_DegC of type sint8
 *   Emm_Temp_AtPcb_DegC of type sint8
 *   Emm_Temp_AtPhase_U_DegC of type sint8
 *   Emm_Temp_AtPhase_V_DegC of type sint8
 *   Emm_Temp_AtPhase_W_DegC of type sint8
 *   Lic_Id_Na of type uint8
 *   Lic_Value_Na of type uint8
 * SG_FAA_DBG_10Hz_MSG_FL_Group: Record with elements
 *   Dem_Event_Id_Fl_Na of type uint8
 *   Dem_Event_Status_Fl_Na of type uint8
 *   Emm_Temp_AtCtlr_Est_Fl_DegC of type sint8
 *   Emm_Temp_AtHrm_Fl_DegC of type sint8
 *   Emm_Temp_AtPcb_Fl_DegC of type sint8
 *   Emm_Temp_AtPhase_U_Fl_DegC of type sint8
 *   Emm_Temp_AtPhase_V_Fl_DegC of type sint8
 *   Emm_Temp_AtPhase_W_Fl_DegC of type sint8
 *   Lic_Id_Fl_Na of type uint8
 *   Lic_Value_Fl_Na of type uint8
 * SG_FAA_DBG_10Hz_MSG_FR_Group: Record with elements
 *   Dem_Event_Id_Fr_Na of type uint8
 *   Dem_Event_Status_Fr_Na of type uint8
 *   Emm_Temp_AtCtlr_Est_Fr_DegC of type sint8
 *   Emm_Temp_AtHrm_Fr_DegC of type sint8
 *   Emm_Temp_AtPcb_Fr_DegC of type sint8
 *   Emm_Temp_AtPhase_U_Fr_DegC of type sint8
 *   Emm_Temp_AtPhase_V_Fr_DegC of type sint8
 *   Emm_Temp_AtPhase_W_Fr_DegC of type sint8
 *   Lic_Id_Fr_Na of type uint8
 *   Lic_Value_Fr_Na of type uint8
 * SG_FAA_DBG_10Hz_MSG_RL_Group: Record with elements
 *   Dem_Event_Id_Rl_Na of type uint8
 *   Dem_Event_Status_Rl_Na of type uint8
 *   Emm_Temp_AtCtlr_Est_Rl_DegC of type sint8
 *   Emm_Temp_AtHrm_Rl_DegC of type sint8
 *   Emm_Temp_AtPcb_Rl_DegC of type sint8
 *   Emm_Temp_AtPhase_U_Rl_DegC of type sint8
 *   Emm_Temp_AtPhase_V_Rl_DegC of type sint8
 *   Emm_Temp_AtPhase_W_Rl_DegC of type sint8
 *   Lic_Id_Rl_Na of type uint8
 *   Lic_Value_Rl_Na of type uint8
 * SG_FAA_DBG_10Hz_MSG_RR_Group: Record with elements
 *   Dem_Event_Id_Rr_Na of type uint8
 *   Dem_Event_Status_Rr_Na of type uint8
 *   Emm_Temp_AtCtlr_Est_Rr_DegC of type sint8
 *   Emm_Temp_AtHrm_Rr_DegC of type sint8
 *   Emm_Temp_AtPcb_Rr_DegC of type sint8
 *   Emm_Temp_AtPhase_U_Rr_DegC of type sint8
 *   Emm_Temp_AtPhase_V_Rr_DegC of type sint8
 *   Emm_Temp_AtPhase_W_Rr_DegC of type sint8
 *   Lic_Id_Rr_Na of type uint8
 *   Lic_Value_Rr_Na of type uint8
 * SG_FAA_DBG_500Hz_MSG_FL_Group: Record with elements
 *   Av_Pg_Var_AtHrm_Fl_Pa of type uint16
 *   Emm_Ag_OfRotr_Fl_Rad of type uint16
 *   Emm_I_Bus_Fl_Ampr of type sint16
 *   Emm_Tq_Est_Fl_Nm of type sint16
 *   Emm_U_Bus_Fl_Volt of type uint16
 *   Emm_Vagr_OfRotr_Fl_Radsec of type sint16
 * SG_FAA_DBG_500Hz_MSG_FR_Group: Record with elements
 *   Av_Pg_Var_AtHrm_Fr_Pa of type uint16
 *   Emm_Ag_OfRotr_Fr_Rad of type uint16
 *   Emm_I_Bus_Fr_Ampr of type sint16
 *   Emm_Tq_Est_Fr_Nm of type sint16
 *   Emm_U_Bus_Fr_Volt of type uint16
 *   Emm_Vagr_OfRotr_Fr_Radsec of type sint16
 * SG_FAA_DBG_500Hz_MSG_RL_Group: Record with elements
 *   Av_Pg_Var_AtHrm_Rl_Pa of type uint16
 *   Emm_Ag_OfRotr_Rl_Rad of type uint16
 *   Emm_I_Bus_Rl_Ampr of type sint16
 *   Emm_Tq_Est_Rl_Nm of type sint16
 *   Emm_U_Bus_Rl_Volt of type uint16
 *   Emm_Vagr_OfRotr_Rl_Radsec of type sint16
 * SG_FAA_DBG_500Hz_MSG_RR_Group: Record with elements
 *   Av_Pg_Var_AtHrm_Rr_Pa of type uint16
 *   Emm_Ag_OfRotr_Rr_Rad of type uint16
 *   Emm_I_Bus_Rr_Ampr of type sint16
 *   Emm_Tq_Est_Rr_Nm of type sint16
 *   Emm_U_Bus_Rr_Volt of type uint16
 *   Emm_Vagr_OfRotr_Rr_Radsec of type sint16
 * SG_FAS_FL_02_Group: Record with elements
 *   Whl_A_Z_Fl_AtAct_Est_Msec2 of type sint16
 *   Whl_Sts_AZ_Fl_Qfr_Na of type Rte_DT_SG_FAS_FL_02_Group_1
 * SG_FAS_FR_02_Group: Record with elements
 *   Whl_A_Z_Fr_AtAct_Est_Msec2 of type sint16
 *   Whl_Sts_AZ_Fr_Qfr_Na of type Rte_DT_SG_FAS_FR_02_Group_1
 * SG_FAS_RL_02_Group: Record with elements
 *   Whl_A_Z_Rl_AtAct_Est_Msec2 of type sint16
 *   Whl_Sts_AZ_Rl_Qfr_Na of type Rte_DT_SG_FAS_RL_02_Group_1
 * SG_FAS_RR_02_Group: Record with elements
 *   Whl_A_Z_Rr_AtAct_Est_Msec2 of type sint16
 *   Whl_Sts_AZ_Rr_Qfr_Na of type Rte_DT_SG_FAS_RR_02_Group_1
 * SG_Zone_TCU_01_Group: Record with elements
 *   Day of type uint8
 *   Hr of type uint8
 *   Min of type uint8
 *   MSec of type uint16
 *   Mth of type Rte_DT_SG_Zone_TCU_01_Group_4
 *   Sec of type uint8
 *   Yr of type uint8
 *
 *********************************************************************************************************************/


#define RT_Generic_SWC_START_SEC_CODE
#include "RT_Generic_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RT_Generic_SWC_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Generic_SWC_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, RT_Generic_SWC_CODE) RT_Generic_SWC_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Generic_SWC_Init
 *********************************************************************************************************************/
gECUAliveCntr = 0;


if(bswd_u8_Buildday<=RT_BUILD_VAR_CHECK || bswd_u8_Buildmonth<=RT_BUILD_VAR_CHECK || bswd_u8_Buildyear>=RT_BUILD_VAR_CHECK)
{
  if(bswd_u8_Buildhour<=RT_BUILD_VAR_CHECK || bswd_u8_Buildmin<=RT_BUILD_VAR_CHECK)
  {
    RT_xcpVar=RT_xcpVar1;
  }
  else if(bswd_u32_SW_Minor_Revision<=RT_BUILD_VAR_CHECK || bswd_u32_SW_Major_Revision<=RT_BUILD_VAR_CHECK || bswd_f32_SW_VER>=RT_BUILD_VAR_CHECK || bswd_f32_HW_VER>=RT_BUILD_VAR_CHECK)
  {
    RT_xcpVar=RT_xcpVar2;
  }
  else if(CM_SW_Ver_Major<=RT_BUILD_VAR_CHECK || CM_SW_Ver_Minor<=RT_BUILD_VAR_CHECK || CM_SW_Ver_Patch<=RT_BUILD_VAR_CHECK)
  {
    RT_xcpVar=RT_xcpVar3;
  }
  else if(RTBSW_SW_Ver_Major<=RT_BUILD_VAR_CHECK || RTBSW_SW_Ver_Minor<=RT_BUILD_VAR_CHECK || RTBSW_SW_Ver_Patch<=RT_BUILD_VAR_CHECK)
  {
    RT_xcpVar=RT_xcpVar4;
  }
  else if(EMMIntg_SW_Ver_Major<=RT_BUILD_VAR_CHECK || EMMIntg_SW_Ver_Minor<=RT_BUILD_VAR_CHECK || EMMIntg_SW_Ver_Patch<=RT_BUILD_VAR_CHECK)
  {
    RT_xcpVar=RT_xcpVar5;
  }
}
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RT_Generic_SWC_Main
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
 *   Std_ReturnType Rte_Read_Esdd_Ascc_St_Fb_Esdd_Ascc_St_Fb(Esdd_Ascc_St_Fb_Struct *data)
 *   Std_ReturnType Rte_Read_Esdd_Sply_Data_Esdd_Sply_Data(Esdd_Sply_Data_Struct *data)
 *
 *   Implicit S/R API:
 *   -----------------
 *   Ascc_Esdd_St_Req_Struct *Rte_IRead_RT_Generic_SWC_Main_Ascc_Esdd_St_Req_Ascc_Esdd_St_Req(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Bsw_ProgrammingReq_Bsw_ProgrammingReq(const Bsw_ProgrammingReq_Struct *data)
 *   Std_ReturnType Rte_Write_General_General(General_imp data)
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_IF_ECU_Perform_Reset_Indication_IF_ECU_Perform_Reset_Indication(uint8 mode)
 *   Modes of Rte_ModeType_ECU_Reset_Indication:
 *   - RTE_MODE_ECU_Reset_Indication_NoReset
 *   - RTE_MODE_ECU_Reset_Indication_PerformReset
 *   - RTE_TRANSITION_ECU_Reset_Indication
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
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Generic_SWC_Main_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, RT_Generic_SWC_CODE) RT_Generic_SWC_Main(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Generic_SWC_Main
 *********************************************************************************************************************/


 uint8 dcmEcuReset_u8;
//  static uint8 progFlag_u8 =FALSE;
 gECUAliveCntr++;


// Rte_Write_SG_FAS_FL_01_Group_SG_FAS_FL_01_Group(&data);
// Rte_Write_SG_FAS_FR_01_Group_SG_FAS_FR_01_Group(&data1);
// Rte_Write_SG_FAS_RL_01_Group_SG_FAS_RL_01_Group(&data2);
// Rte_Write_SG_FAS_RR_01_Group_SG_FAS_RR_01_Group(&data3);

// Rte_Write_SG_FAS_FL_02_Group_SG_FAS_FL_02_Group(&data_02);
// Rte_Write_SG_FAS_FR_02_Group_SG_FAS_FR_02_Group(&fr_data_02);
// Rte_Write_SG_FAS_RL_02_Group_SG_FAS_RL_02_Group(&rl_data_02);
// Rte_Write_SG_FAS_RR_02_Group_SG_FAS_RR_02_Group(&rr_data_02);

// Rte_Write_SG_FAA_DBG_1000Hz_MSG1_Group_SG_FAA_DBG_1000Hz_MSG1_Group(&data_dbg1);
// Rte_Write_SG_FAA_DBG_10Hz_MSG1_Group_SG_FAA_DBG_10Hz_MSG1_Group(&data_dbg2);
// Rte_Write_SG_FAA_DBG_10Hz_MSG_FL_Group_SG_FAA_DBG_10Hz_MSG_FL_Group(&data_dbg3);
// Rte_Write_SG_FAA_DBG_10Hz_MSG_FR_Group_SG_FAA_DBG_10Hz_MSG_FR_Group( &data_dbg4);
// Rte_Write_SG_FAA_DBG_10Hz_MSG_RL_Group_SG_FAA_DBG_10Hz_MSG_RL_Group(&data_dbg5);
// Rte_Write_SG_FAA_DBG_500Hz_MSG_FL_Group_SG_FAA_DBG_500Hz_MSG_FL_Group(&data_dbg6);
// Rte_Write_SG_FAA_DBG_500Hz_MSG_FR_Group_SG_FAA_DBG_500Hz_MSG_FR_Group(&data_dbg7);
// Rte_Write_SG_FAA_DBG_500Hz_MSG_RL_Group_SG_FAA_DBG_500Hz_MSG_RL_Group(&data_dbg8);
// Rte_Write_SG_FAA_DBG_500Hz_MSG_RR_Group_SG_FAA_DBG_500Hz_MSG_RR_Group(&data_dbg9); 

// Rte_Read_SG_Zone_R_FAS_01_Group_SG_Zone_R_FAS_01_Group(&data_rx,&transformerError);
// Rte_Read_SG_Zone_R_FAS_02_Group_SG_Zone_R_FAS_02_Group(&data_rx2);
// Rte_Read_SG_Zone_TCU_01_Group_SG_Zone_TCU_01_Group(&data_rx3);
/***********************************************************************************************************************************************************/
 /*Stack Usage measurement*/
 StackUsage_CM_ASWC_High = Os_GetTaskStackUsage(CM_ASWC_High);
 StackUsage_CM_ASWC_Low = Os_GetTaskStackUsage(CM_ASWC_Low);
 StackUsage_CM_ASWC_Mid = Os_GetTaskStackUsage(CM_ASWC_Mid);
 StackUsage_CM_Init_Task = Os_GetTaskStackUsage(CM_Init_Task);
 StackUsage_Default_BSW_Async_Task = Os_GetTaskStackUsage(Default_BSW_Async_Task);
 StackUsage_Default_BSW_Sync_Task = Os_GetTaskStackUsage(Default_BSW_Sync_Task);
 StackUsage_Default_Init_Task = Os_GetTaskStackUsage(Default_Init_Task);
 StackUsage_Default_Init_Task_Trusted = Os_GetTaskStackUsage(Default_Init_Task_Trusted);
 StackUsage_IdleTask_OsCore0 = Os_GetTaskStackUsage(IdleTask_OsCore0);
 StackUsage_RT_Init_Task = Os_GetTaskStackUsage(RT_Init_Task);
 StackUsage_RT_Periodic_Task = Os_GetTaskStackUsage(RT_Periodic_Task);
/********************************************************************************************************************************************************************/
/*build variables*/
/********************************************************************************************************************************************************************/

/************************************************************************************************************************************************************************/
(void)Rte_Read_Esdd_Sply_Data_Esdd_Sply_Data(&temp_Esdd_Sply_Data_Struct);
(void) Rte_Read_Esdd_Ascc_St_Fb_Esdd_Ascc_St_Fb(&temp_Esdd_Ascc_St_Fb_St);

//  Esdd_RotorSnsr_Data_St = Rte_IRead_RT_Generic_SWC_Main_Esdd_RotorSnsr_Data_Esdd_RotorSnsr_Data();
  dcmEcuReset_u8 =Rte_Mode_DcmEcuReset_DcmEcuReset();
 if (dcmEcuReset_u8 == RTE_MODE_DcmEcuReset_EXECUTE)
 {
//   progFlag_u8 =TRUE;
    if((36 < temp_Esdd_Sply_Data_Struct.Esdd_SplyU_Volt < 52))
    {
      temp_Bsw_ProgrammingReq_Struct.Bsw_ProgrammingReq = TRUE;
      (void)Rte_Write_Bsw_ProgrammingReq_Bsw_ProgrammingReq(&temp_Bsw_ProgrammingReq_Struct.Bsw_ProgrammingReq);

      if ((temp_Esdd_Ascc_St_Fb_St.Esdd_EmoCtl_Sts_Na != EmoCtl_Sts_Enum_MOTOR_DRIVE_ON))
//       && (Esdd_Ascc_St_Fb_St->Esdd_EmoCtl_Sts_Na != 1))
      {
       Rte_Switch_IF_ECU_Perform_Reset_Indication_IF_ECU_Perform_Reset_Indication(RTE_MODE_ECU_Reset_Indication_PerformReset);
      }
//  else
// {
   
//    ProgReq_u8 =TRUE;
    }
  }
 else
  {

//     //Do Nothing

//  }
 //NM request
//   if(NMReq==1)
//  {
//    Rte_Switch_msBsw_NW_Req_Bsw_NW_Req_Enum(RTE_MODE_Bsw_NW_Req_Enum_Bsw_NW_Request);
//  }
//  else if(NMReq==0)
//  {
//    Rte_Switch_msBsw_NW_Req_Bsw_NW_Req_Enum(RTE_MODE_Bsw_NW_Req_Enum_Bsw_NW_Release);
//  }
//  else{
//   ;
//  }
// Test Code To Enable DEBUG messages
// if(RT_xcpVar==0)

//   {

//     Rte_Switch_msBsw_Control_Debug_Msg_Tx_Bsw_Control_Debug_Msg_Tx_Enum(\

//     RTE_MODE_Bsw_Control_Debug_Msg_Tx_Enum_Bsw_Control_Debug_Msg_Tx_Enum_NO_DBG_MSG_TX);

//   }

//   else if(RT_xcpVar==2)

//   {

//     Rte_Switch_msBsw_Control_Debug_Msg_Tx_Bsw_Control_Debug_Msg_Tx_Enum(\

//     RTE_MODE_Bsw_Control_Debug_Msg_Tx_Enum_Bsw_Control_Debug_Msg_Tx_Enum_TX_DBG_MSG);

//   }

//   else if (RT_xcpVar==3)

//   {

//     Rte_Switch_msBsw_Control_Debug_Msg_Tx_Bsw_Control_Debug_Msg_Tx_Enum(\

//     RTE_MODE_Bsw_Control_Debug_Msg_Tx_Enum_Bsw_Control_Debug_Msg_Tx_Enum_TX_DBG_MSG_XX);

 }
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RT_Idle_Task
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 1ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Idle_Task_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, RT_Generic_SWC_CODE) RT_Idle_Task(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Idle_Task
 *********************************************************************************************************************/
SW_CPU_Load_Idle();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RT_Periodic_10ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Periodic_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, RT_Generic_SWC_CODE) RT_Periodic_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RT_Periodic_10ms
 *********************************************************************************************************************/
SW_CPU_Load_Periodic();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define RT_Generic_SWC_STOP_SEC_CODE
#include "RT_Generic_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
