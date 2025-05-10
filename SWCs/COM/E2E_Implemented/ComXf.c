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
 *             File:  ComXf.c
 *           Config:  CBD2100170.dpa
 *      ECU-Project:  CBD2100170
 *
 *        Generator:  MICROSAR ComXf Generator Version 1.18.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2100170
 *
 *      Description:  MICROSAR ComXf implementation file
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0715, 0857 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1, MD_MSR_Dir1.1 */

#include "ComXf.h" /* PRQA S 0828, 0810 */ /* MD_MSR_Dir1.1, MD_MSR_Dir1.1 */

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

#if !defined(COMXF_LOCAL_INLINE)
# define COMXF_LOCAL_INLINE LOCAL_INLINE
#endif

#ifndef COMXF_DUMMY_STATEMENT
# define COMXF_DUMMY_STATEMENT(v) (v)=(v)
#endif
#ifndef COMXF_DUMMY_STATEMENT_CONST
# define COMXF_DUMMY_STATEMENT_CONST(v) (void)(v)
#endif

#define COMXF_START_SEC_CODE
#include "ComXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

COMXF_LOCAL_INLINE FUNC(void, COMXF_CODE) ComXf_Copy16Bit(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) dst, P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) src);

COMXF_LOCAL_INLINE FUNC(void, COMXF_CODE) ComXf_Copy32Bit(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) dst, P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) src);

COMXF_LOCAL_INLINE FUNC(void, COMXF_CODE) ComXf_Copy64Bit(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) dst, P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) src);

COMXF_LOCAL_INLINE FUNC(void, COMXF_CODE) ComXf_Copy16BitEndConv(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) dst, P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) src);

COMXF_LOCAL_INLINE FUNC(void, COMXF_CODE) ComXf_Copy32BitEndConv(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) dst, P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) src);

COMXF_LOCAL_INLINE FUNC(void, COMXF_CODE) ComXf_Copy64BitEndConv(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) dst, P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) src);

/**********************************************************************************************************************
 * ComXf copy functions
 *********************************************************************************************************************/

COMXF_LOCAL_INLINE FUNC(void, COMXF_CODE) ComXf_Copy16Bit(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) dst, P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) src) /* PRQA S 3219 */ /* MD_MSR_Unreachable */
{
  dst[0] = src[0];
  dst[1] = src[1];
}

COMXF_LOCAL_INLINE FUNC(void, COMXF_CODE) ComXf_Copy32Bit(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) dst, P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) src) /* PRQA S 3219 */ /* MD_MSR_Unreachable */
{
  dst[0] = src[0];
  dst[1] = src[1];
  dst[2] = src[2];
  dst[3] = src[3];
}

COMXF_LOCAL_INLINE FUNC(void, COMXF_CODE) ComXf_Copy64Bit(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) dst, P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) src) /* PRQA S 3219 */ /* MD_MSR_Unreachable */
{
  dst[0] = src[0];
  dst[1] = src[1];
  dst[2] = src[2];
  dst[3] = src[3];
  dst[4] = src[4];
  dst[5] = src[5];
  dst[6] = src[6];
  dst[7] = src[7];
}

COMXF_LOCAL_INLINE FUNC(void, COMXF_CODE) ComXf_Copy16BitEndConv(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) dst, P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) src) /* PRQA S 3219 */ /* MD_MSR_Unreachable */
{
  dst[0] = src[1];
  dst[1] = src[0];
}

COMXF_LOCAL_INLINE FUNC(void, COMXF_CODE) ComXf_Copy32BitEndConv(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) dst, P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) src) /* PRQA S 3219 */ /* MD_MSR_Unreachable */
{
  dst[0] = src[3];
  dst[1] = src[2];
  dst[2] = src[1];
  dst[3] = src[0];
}

COMXF_LOCAL_INLINE FUNC(void, COMXF_CODE) ComXf_Copy64BitEndConv(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) dst, P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) src) /* PRQA S 3219 */ /* MD_MSR_Unreachable */
{
  dst[0] = src[7];
  dst[1] = src[6];
  dst[2] = src[5];
  dst[3] = src[4];
  dst[4] = src[3];
  dst[5] = src[2];
  dst[6] = src[1];
  dst[7] = src[0];
}

/**********************************************************************************************************************
 * ComXf transformers
 *********************************************************************************************************************/

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Com_SG_DCCB1_C01_AR5_bne86o4su6oef37i9ro5c10b9_636cfa89_Tx_REC_SG_DCCB1_C01_AR5_wcyc4oh3vv82se49oenjus1n(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) buffer, P2VAR(uint32, AUTOMATIC, COMXF_APPL_VAR) bufferLength, P2CONST(REC_SG_DCCB1_C01_AR5_wcyc4oh3vv82se49oenjus1n, AUTOMATIC, COMXF_APPL_DATA) dataElement) /* PRQA S 3673 */ /* MD_ComXf_Qac */
{
  Std_ReturnType ret = E_OK;

  P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) applDataPtr;

  /* process signal ChaSw_EnergyRq_DCCB1_d320473d_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).ChaSw_EnergyRq_DCCB1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[4]  = (applDataPtr[0] << 2) & 0x0CU;

  /* process signal ChaSw_Err_DCCB1_e63be2c2_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).ChaSw_Err_DCCB1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[5]  = applDataPtr[0] & 0x03U;

  /* process signal ChaSw_Stat_DCCB1_4e95ca08_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).ChaSw_Stat_DCCB1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[4] |= (applDataPtr[0] << 4) & 0x30U;

  /* process signal CRC_SG_DCCB1_C01_AR5_c9631f77_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[0], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).CRC_SG_DCCB1_C01_AR5); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal Flt_Stat_DCCB1_3453c0cf_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Flt_Stat_DCCB1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[3]  = (applDataPtr[0] << 4) & 0x30U;

  /* process signal HVIL_EVSEside_Stat_DCCB1_ae6eea93_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).HVIL_EVSEside_Stat_DCCB1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[3] |= (applDataPtr[0] << 2) & 0x0CU;

  /* process signal HVIL_Loop1_Stat_DCCB1_5e21fe8d_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).HVIL_Loop1_Stat_DCCB1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[4] |= (applDataPtr[0] << 6) & 0xC0U;

  /* process signal HVIL_Loop2_Stat_DCCB1_29bf2c7d_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).HVIL_Loop2_Stat_DCCB1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[5] |= (applDataPtr[0] << 3) & 0x18U;

  /* process signal HVIL_Loop3_Stat_DCCB1_b21a6012_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).HVIL_Loop3_Stat_DCCB1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[5] |= (applDataPtr[0] << 5) & 0x60U;

  /* process signal HVIL_VehSide_Stat_DCCB1_bbbfddc1_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).HVIL_VehSide_Stat_DCCB1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[3] |= applDataPtr[0] & 0x03U;

  /* process signal IsoMon_Stat_DCCB1_4487f743_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).IsoMon_Stat_DCCB1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[7]  = (applDataPtr[0] << 4) & 0xF0U;

  /* process signal IsoRes_HVNeg_Cval_DCCB1_6175421a_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[10], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).IsoRes_HVNeg_Cval_DCCB1); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal IsoRes_HVPos_Cval_DCCB1_f91d9b53_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[8], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).IsoRes_HVPos_Cval_DCCB1); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal KL30c_Stat_DCCB1_457d6199_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).KL30c_Stat_DCCB1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[3] |= (applDataPtr[0] << 6) & 0xC0U;

  /* process signal Md_Stat_DCCB1_bc817b6a_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Md_Stat_DCCB1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[4] |= applDataPtr[0] & 0x03U;

  /* process signal Rsrv3_DCCB1_C01_AR5_de2f8b2a_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Rsrv3_DCCB1_C01_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[5] |= (applDataPtr[0] << 7) & 0x80U;

  /* process signal Rsrv4_DCCB1_C01_AR5_452e8430_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Rsrv4_DCCB1_C01_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[5] |= (applDataPtr[0] << 2) & 0x04U;

  /* process signal SQC_SG_DCCB1_C01_AR5_8af332fb_Tx */
  buffer[2] = (*(dataElement)).SQC_SG_DCCB1_C01_AR5; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal Temp_Cval_DCCB1_a8139087_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Temp_Cval_DCCB1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[6]  = applDataPtr[0];
  buffer[7] |= applDataPtr[1] & 0x0FU;

  *bufferLength = 12;

  return ret;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Com_SG_DCCB1_C02_AR5_4ujjmt98jr887lj811pphfbni_45921538_Tx_REC_SG_DCCB1_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) buffer, P2VAR(uint32, AUTOMATIC, COMXF_APPL_VAR) bufferLength, P2CONST(REC_SG_DCCB1_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv, AUTOMATIC, COMXF_APPL_DATA) dataElement) /* PRQA S 3673 */ /* MD_ComXf_Qac */
{
  Std_ReturnType ret = E_OK;

  P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) applDataPtr;

  /* process signal ChaPath_ShrtCrc_DCCB1_72a0d4fe_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).ChaPath_ShrtCrc_DCCB1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[11]  = applDataPtr[0] & 0x03U;

  /* process signal CRC_SG_DCCB1_C02_AR5_ca6240bf_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[0], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).CRC_SG_DCCB1_C02_AR5); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal EVSEside_Volt_Cval_DCCB1_5bb92fb9_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[9], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).EVSEside_Volt_Cval_DCCB1); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal HVDC_Curr_Actl_DCCB1_3d408077_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[3], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).HVDC_Curr_Actl_DCCB1); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal HVDC_MaxCurrLim_DCCB1_1c32ebd3_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[5], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).HVDC_MaxCurrLim_DCCB1); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal Rsrv1_DCCB1_C02_AR5_94012b07_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Rsrv1_DCCB1_C02_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[11] |= (applDataPtr[0] << 2) & 0xFCU;

  /* process signal SQC_SG_DCCB1_C02_AR5_89f26d33_Tx */
  buffer[2] = (*(dataElement)).SQC_SG_DCCB1_C02_AR5; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal VehSide_Volt_Cval_DCCB1_09aa5b70_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[7], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).VehSide_Volt_Cval_DCCB1); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  *bufferLength = 12;

  return ret;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Com_SG_DCCB2_C01_AR5_em0ljh3vew4mv6wgv0qp1uq8e_a904a523_Tx_REC_SG_DCCB2_C01_AR5_a2qglp2324znbwefnu92uartf(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) buffer, P2VAR(uint32, AUTOMATIC, COMXF_APPL_VAR) bufferLength, P2CONST(REC_SG_DCCB2_C01_AR5_a2qglp2324znbwefnu92uartf, AUTOMATIC, COMXF_APPL_DATA) dataElement) /* PRQA S 3673 */ /* MD_ComXf_Qac */
{
  Std_ReturnType ret = E_OK;

  P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) applDataPtr;

  /* process signal ChaSw_EnergyRq_DCCB2_8916c085_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).ChaSw_EnergyRq_DCCB2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[4]  = (applDataPtr[0] << 2) & 0x0CU;

  /* process signal ChaSw_Err_DCCB2_37ed333d_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).ChaSw_Err_DCCB2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[5]  = applDataPtr[0] & 0x03U;

  /* process signal ChaSw_Stat_DCCB2_d162f12d_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).ChaSw_Stat_DCCB2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[4] |= (applDataPtr[0] << 4) & 0x30U;

  /* process signal CRC_SG_DCCB2_C01_AR5_33d1f5b0_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[0], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).CRC_SG_DCCB2_C01_AR5); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal Flt_Stat_DCCB2_c0ec9fd2_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Flt_Stat_DCCB2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[3]  = (applDataPtr[0] << 4) & 0x30U;

  /* process signal HVIL_EVSEside_Stat_DCCB2_4ed98316_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).HVIL_EVSEside_Stat_DCCB2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[3] |= (applDataPtr[0] << 2) & 0x0CU;

  /* process signal HVIL_VehSide_Stat_DCCB2_40361772_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).HVIL_VehSide_Stat_DCCB2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[3] |= applDataPtr[0] & 0x03U;

  /* process signal KL30c_Stat_DCCB2_da8a5abc_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).KL30c_Stat_DCCB2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[3] |= (applDataPtr[0] << 6) & 0xC0U;

  /* process signal Md_Stat_DCCB2_4e6266c5_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Md_Stat_DCCB2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[4] |= applDataPtr[0] & 0x03U;

  /* process signal Rsrv1_DCCB2_C01_AR5_7c7ca583_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Rsrv1_DCCB2_C01_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[4] |= (applDataPtr[0] << 6) & 0xC0U;

  /* process signal Rsrv2_DCCB2_C01_AR5_6d01cffa_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Rsrv2_DCCB2_C01_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[5] |= (applDataPtr[0] << 2) & 0xFCU;

  /* process signal Rsrv3_DCCB2_C01_AR5_d4fa1412_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Rsrv3_DCCB2_C01_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[7]  = (applDataPtr[0] << 4) & 0xF0U;

  /* process signal SQC_SG_DCCB2_C01_AR5_7041d83c_Tx */
  buffer[2] = (*(dataElement)).SQC_SG_DCCB2_C01_AR5; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal Temp_Cval_DCCB2_79c54178_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Temp_Cval_DCCB2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[6]  = applDataPtr[0];
  buffer[7] |= applDataPtr[1] & 0x0FU;

  *bufferLength = 8;

  return ret;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Com_SG_EPTOce_C01_AR5_1nf7sb3onx9ta72u4gyf5nf4n_dc69b6f0_Tx_REC_SG_EPTOce_C01_AR5_1ae8w4ccn5pv3jukyqv8emy5n(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) buffer, P2VAR(uint32, AUTOMATIC, COMXF_APPL_VAR) bufferLength, P2CONST(REC_SG_EPTOce_C01_AR5_1ae8w4ccn5pv3jukyqv8emy5n, AUTOMATIC, COMXF_APPL_DATA) dataElement) /* PRQA S 3673 */ /* MD_ComXf_Qac */
{
  Std_ReturnType ret = E_OK;

  P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) applDataPtr;

  /* process signal CRC_SG_EPTOce_C01_AR5_703d8fe6_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[0], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).CRC_SG_EPTOce_C01_AR5); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal Flt_Stat_EPTO_73cbb16e_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Flt_Stat_EPTO; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[3]  = (applDataPtr[0] << 4) & 0x30U;

  /* process signal KL30c_Stat_EPTO_40c21c06_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).KL30c_Stat_EPTO; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[3] |= (applDataPtr[0] << 6) & 0xC0U;

  /* process signal Md_Stat_EPTO_6a0a5c05_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Md_Stat_EPTO; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[4]  = applDataPtr[0] & 0x03U;

  /* process signal Rsrv1_EPTOce_C01_AR5_04a42512_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Rsrv1_EPTOce_C01_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[3] |= (applDataPtr[0] << 2) & 0x0CU;

  /* process signal Rsrv2_EPTOce_C01_AR5_2d6c91e0_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Rsrv2_EPTOce_C01_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[4] |= (applDataPtr[0] << 4) & 0x30U;

  /* process signal Rsrv3_EPTOce_C01_AR5_83040071_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Rsrv3_EPTOce_C01_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[6]  = (applDataPtr[0] << 4) & 0xF0U;

  /* process signal SQC_SG_EPTOce_C01_AR5_9470d0c0_Tx */
  buffer[2] = (*(dataElement)).SQC_SG_EPTOce_C01_AR5; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal Sw_EnergyRq_EPTO_e753ae52_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Sw_EnergyRq_EPTO; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[4] |= (applDataPtr[0] << 2) & 0x0CU;

  /* process signal Sw_Err_EPTO_a418eb60_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Sw_Err_EPTO; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[4] |= (applDataPtr[0] << 6) & 0xC0U;

  /* process signal Temp_Cval_ePTO_c8043d0c_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Temp_Cval_ePTO; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[5]  = applDataPtr[0];
  buffer[6] |= applDataPtr[1] & 0x0FU;

  /* process signal VehSide_HVIL_Stat_EPTO_2b21d99a_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).VehSide_HVIL_Stat_EPTO; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[3] |= applDataPtr[0] & 0x03U;

  *bufferLength = 7;

  return ret;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Com_SG_EPTOce_C02_AR5_3iy57tdinwbbj5xh6sufcubir_bcc23d07_Tx_REC_SG_EPTOce_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) buffer, P2VAR(uint32, AUTOMATIC, COMXF_APPL_VAR) bufferLength, P2CONST(REC_SG_EPTOce_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv, AUTOMATIC, COMXF_APPL_DATA) dataElement) /* PRQA S 3673 */ /* MD_ComXf_Qac */
{
  Std_ReturnType ret = E_OK;

  P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) applDataPtr;

  /* process signal BodyPath_ShrtCrc_EPTO_76f58a79_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).BodyPath_ShrtCrc_EPTO; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[11]  = applDataPtr[0] & 0x03U;

  /* process signal BodySideVolt_Cval_EPTO_1679d267_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[9], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).BodySideVolt_Cval_EPTO); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal CRC_SG_EPTOce_C02_AR5_24b5cc45_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[0], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).CRC_SG_EPTOce_C02_AR5); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal HVDC_Curr_Actl_EPTO_bf0b9e49_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[3], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).HVDC_Curr_Actl_EPTO); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal HVDC_Curr_maxLim_EPTO_85932b90_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[5], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).HVDC_Curr_maxLim_EPTO); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal Rsrv1_EPTOce_C02_AR5_07a57ada_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[7], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).Rsrv1_EPTOce_C02_AR5); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal Rsrv2_EPTOce_C02_AR5_2e6dce28_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).Rsrv2_EPTOce_C02_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[11] |= (applDataPtr[0] << 2) & 0xFCU;

  /* process signal SQC_SG_EPTOce_C02_AR5_c0f89363_Tx */
  buffer[2] = (*(dataElement)).SQC_SG_EPTOce_C02_AR5; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  *bufferLength = 12;

  return ret;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Com_SG_GPM1H1_XMC_AR2_wdn0u1bi7yijbnxe9bhxiysv_61f71333_Tx_signalGrp_GPM1H1_XMC(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) buffer, P2VAR(uint32, AUTOMATIC, COMXF_APPL_VAR) bufferLength, P2CONST(signalGrp_GPM1H1_XMC, AUTOMATIC, COMXF_APPL_DATA) dataElement) /* PRQA S 3673 */ /* MD_ComXf_Qac */
{
  Std_ReturnType ret = E_OK;

  P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) applDataPtr;

  /* process signal EPTO_Sw_Stat_d981f091_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).EPTO_Sw_Stat; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[1]  = (applDataPtr[0] << 4) & 0x30U;

  /* process signal BodySide_HVIL_Stat_EPTO_deb86929_Tx */
  applDataPtr = (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA))&(*(dataElement)).BodySide_HVIL_Stat_EPTO; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  buffer[1] |= (applDataPtr[0] << 6) & 0xC0U;

  /* process signal VehSideVolt_Cval_EPTO_6bcb23c3_Tx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &buffer[2], (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &(*(dataElement)).VehSideVolt_Cval_EPTO); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* fill unused areas with byte pattern ComTxIPduUnusedAreasDefault: 0xFFU */
  buffer[0]  = 0xFFU;
  buffer[1] |= 0xFFU & 0x0FU;
  buffer[4]  = 0xFFU;
  buffer[5]  = 0xFFU;
  buffer[6]  = 0xFFU;
  buffer[7]  = 0xFFU;

  *bufferLength = 8;

  return ret;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

/**********************************************************************************************************************
 * ComXf retransformers
 *********************************************************************************************************************/

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Inv_Com_SG_CPC6_C02_AR5_13zdcgtlyiyf2kmwz28jazrw0_0c044d9c_Rx_REC_SG_CPC6_C02_AR5_5wbdxrp8awtkuts7zyf21170w(P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) buffer, uint32 bufferLength, P2VAR(REC_SG_CPC6_C02_AR5_5wbdxrp8awtkuts7zyf21170w, AUTOMATIC, COMXF_APPL_VAR) dataElement) /* PRQA S 3673, 3206 */ /* MD_ComXf_Qac, MD_ComXf_3206 */
{
  Std_ReturnType ret = E_OK;

  P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) applDataPtr;

  /* process signal AntiJerkCtrlEnbl_PTIce1_5ec7ab84_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).AntiJerkCtrlEnbl_PTIce1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[20] >> 4) & 0x03U;

  /* process signal AntiJerkCtrlEnbl_PTIce2_c7cefa3e_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).AntiJerkCtrlEnbl_PTIce2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[20] >> 6);

  /* process signal AntiJerkCtrlKp_PTIce1_87112034_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).AntiJerkCtrlKp_PTIce1, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[23]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal AntiJerkCtrlKp_PTIce2_1e18718e_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).AntiJerkCtrlKp_PTIce2, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[25]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal AntiJerkCtrlThrld_PTIce1_092a0042_Rx */
  (*(dataElement)).AntiJerkCtrlThrld_PTIce1 = buffer[21]; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal AntiJerkCtrlThrld_PTIce2_902351f8_Rx */
  (*(dataElement)).AntiJerkCtrlThrld_PTIce2 = buffer[22]; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal CCS_EV_ErrorCode_d99870b9_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).CCS_EV_ErrorCode; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[3] >> 4);

  /* process signal Chrg_Stat_0618bc3d_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Chrg_Stat; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[6] >> 6);

  /* process signal ChrgLED_Rq_da8c5b82_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).ChrgLED_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[3] & 0x0FU;

  /* process signal CRC_SG_CPC6_C02_AR5_dfa5e523_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).CRC_SG_CPC6_C02_AR5, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[0]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal DCCB1_ChaSw_Rq_e4c059a9_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).DCCB1_ChaSw_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[11] >> 2) & 0x03U;

  /* process signal EdrvInTemp_Cval_ad6e2470_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).EdrvInTemp_Cval, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[9]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal EdrvOutTemp_Cval_3f670438_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).EdrvOutTemp_Cval, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[7]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal EPTO_Sw_Rq_094c107d_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).EPTO_Sw_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[11] >> 4) & 0x03U;

  /* process signal FC_WctOutVlv_Req_CPC_e0fea6d8_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).FC_WctOutVlv_Req_CPC; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[27] & 0x03U;

  /* process signal HV_IntegrityChk_Rq_ebaa13ef_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).HV_IntegrityChk_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[11] >> 6);

  /* process signal HVB_Sw_Rq_0ef9aeeb_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).HVB_Sw_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[6] >> 4) & 0x03U;

  /* process signal IsoQuickTest_Rq_DCLce_053bbc2a_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).IsoQuickTest_Rq_DCLce; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[6] >> 2) & 0x03U;

  /* process signal PreChrg_Stage1_Rq_3e2efc80_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).PreChrg_Stage1_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[20] & 0x03U;

  /* process signal PreChrg_Stage2_Rq_2c9b536e_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).PreChrg_Stage2_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[20] >> 2) & 0x03U;

  /* process signal PreChrgVolt_Rq_DCLce_d84fb955_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).PreChrgVolt_Rq_DCLce, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[4]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal PTIce1SpdCtrlKi_76b5b433_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).PTIce1SpdCtrlKi, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[12]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal PTIce1SpdCtrlKp_12de1cf3_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).PTIce1SpdCtrlKp, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[16]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal PTIce2SpdCtrlKi_9d820f30_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).PTIce2SpdCtrlKi, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[14]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal PTIce2SpdCtrlKp_f9e9a7f0_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).PTIce2SpdCtrlKp, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[18]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal Rsrv1_CPC6_C02_AR5_3d2e8b61_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Rsrv1_CPC6_C02_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[27] >> 2);

  /* process signal Rsrv2_CPC6_C02_AR5_414faeba_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Rsrv2_CPC6_C02_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[6] & 0x03U;

  /* process signal SemiConductorSw_Rq_1d0fccda_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).SemiConductorSw_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[11] & 0x03U;

  /* process signal SQC_SG_CPC6_C02_AR5_2661034b_Rx */
  (*(dataElement)).SQC_SG_CPC6_C02_AR5 = buffer[2]; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal THM_PTIce1MotOilInTemp_Cval_4167dce7_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).THM_PTIce1MotOilInTemp_Cval, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[28]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal THM_PTIce2MotOilInTemp_Cval_abe10185_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).THM_PTIce2MotOilInTemp_Cval, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[30]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  COMXF_DUMMY_STATEMENT(bufferLength); /* PRQA S 1338, 2983 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return ret;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Inv_Com_SG_CPC6_C05_AR5_c0kn88fy4qhcaylfzjelpch8j_2dd29d95_Rx_REC_SG_CPC6_C05_AR5_2ahxpf4cam3pi2le1l2woky78(P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) buffer, uint32 bufferLength, P2VAR(REC_SG_CPC6_C05_AR5_2ahxpf4cam3pi2le1l2woky78, AUTOMATIC, COMXF_APPL_VAR) dataElement) /* PRQA S 3673, 3206 */ /* MD_ComXf_Qac, MD_ComXf_3206 */
{
  Std_ReturnType ret = E_OK;

  P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) applDataPtr;

  /* process signal CCS_EV_ErrorCode2_383b2454_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).CCS_EV_ErrorCode2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[3] >> 4);

  /* process signal CCS_EV_ErrorCode3_4f3c14c2_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).CCS_EV_ErrorCode3; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[5] >> 4);

  /* process signal CCS_RstrtTrgr_de8980dc_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).CCS_RstrtTrgr; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[6] & 0x03U;

  /* process signal CCS_RstrtTrgr2_956ea972_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).CCS_RstrtTrgr2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[6] >> 2) & 0x03U;

  /* process signal CCS_RstrtTrgr3_e26999e4_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).CCS_RstrtTrgr3; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[6] >> 4) & 0x03U;

  /* process signal Chrg_Stat3_3b6960bd_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Chrg_Stat3; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[4] >> 2) & 0x03U;

  /* process signal ChrgLED_Rq2_63dd5f48_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).ChrgLED_Rq2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[3] & 0x0FU;

  /* process signal ChrgLED_Rq3_14da6fde_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).ChrgLED_Rq3; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[5] & 0x0FU;

  /* process signal CRC_SG_CPC6_C05_AR5_0d42205c_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).CRC_SG_CPC6_C05_AR5, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[0]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal DCCB2_ChaSw_Rq_e691b40b_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).DCCB2_ChaSw_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[4] & 0x03U;

  /* process signal Rsrv1_CPC6_C05_AR5_f899edee_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Rsrv1_CPC6_C05_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[4] >> 4);

  /* process signal Rsrv2_CPC6_C05_AR5_84f8c835_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Rsrv2_CPC6_C05_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[6] >> 6);

  /* process signal SQC_SG_CPC6_C05_AR5_f486c634_Rx */
  (*(dataElement)).SQC_SG_CPC6_C05_AR5 = buffer[2]; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  COMXF_DUMMY_STATEMENT(bufferLength); /* PRQA S 1338, 2983 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return ret;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Inv_Com_SG_CPC6_C06_AR5_d6yux088cedsa5d0uys1uc3ub_6cd01b20_Rx_REC_SG_CPC6_C06_AR5_ulcxeouja3rnfon8plrygyca(P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) buffer, uint32 bufferLength, P2VAR(REC_SG_CPC6_C06_AR5_ulcxeouja3rnfon8plrygyca, AUTOMATIC, COMXF_APPL_VAR) dataElement) /* PRQA S 3673, 3206 */ /* MD_ComXf_Qac, MD_ComXf_3206 */
{
  Std_ReturnType ret = E_OK;

  P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) applDataPtr;

  /* process signal ActvDischrgCmd_Rq_BRCce_9ae8f538_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).ActvDischrgCmd_Rq_BRCce; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[4] & 0x03U;

  /* process signal ActvDischrgCmd_Rq_DCLce_f651775f_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).ActvDischrgCmd_Rq_DCLce; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[3] >> 2) & 0x03U;

  /* process signal ActvDischrgCmd_Rq_PTIce1_05a70988_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).ActvDischrgCmd_Rq_PTIce1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[3] >> 4) & 0x03U;

  /* process signal ActvDischrgCmd_Rq_PTIce2_9cae5832_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).ActvDischrgCmd_Rq_PTIce2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[3] >> 6);

  /* process signal CmdTrq_Req_PTIce1_5af4c80a_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).CmdTrq_Req_PTIce1, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[8]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal CmdTrq_Req_PTIce2_c3fd99b0_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).CmdTrq_Req_PTIce2, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[10]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal CRC_SG_CPC6_C06_AR5_7d4b2132_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).CRC_SG_CPC6_C06_AR5, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[0]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal CtrlMd_Req_PTIce1_2b0d4b83_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).CtrlMd_Req_PTIce1; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[7] & 0x0FU;

  /* process signal CtrlMd_Req_PTIce2_b2041a39_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).CtrlMd_Req_PTIce2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[7] >> 4);

  /* process signal DCCB1_IsoMon_Rq_d2392729_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).DCCB1_IsoMon_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[22] & 0x03U;

  /* process signal FC_Pwr_Req_CPC_fef6c2f2_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).FC_Pwr_Req_CPC, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[20]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal HPRS_DsrdPwr_711820c8_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).HPRS_DsrdPwr, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[5]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal HV_FCActvDischrg_Req_CPC_9532394f_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).HV_FCActvDischrg_Req_CPC; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[4] >> 4) & 0x03U;

  /* process signal HV_FcCont_Rels_0afc0eec_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).HV_FcCont_Rels; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[4] >> 6);

  /* process signal IsoMonDCLce_Rq_0a6d0f52_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).IsoMonDCLce_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[3] & 0x03U;

  /* process signal IsoMonHVB_Rq_47cf689d_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).IsoMonHVB_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[4] >> 2) & 0x03U;

  /* process signal MWCU_IsoMon_Rq_b9d3cfa6_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).MWCU_IsoMon_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[22] >> 2) & 0x03U;

  /* process signal PTIce1CmdSpd_Req_5420f4d3_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).PTIce1CmdSpd_Req, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[12]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal PTIce1MaxTrq_Req_a7a69467_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).PTIce1MaxTrq_Req, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[23]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal PTIce1MinTrq_Req_a6aa0ed3_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).PTIce1MinTrq_Req, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[25]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal PTIce2CmdSpd_Req_cdc292d2_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).PTIce2CmdSpd_Req, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[14]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal PTIce2MaxTrq_Req_3e44f266_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).PTIce2MaxTrq_Req, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[27]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal PTIce2MinTrq_Req_3f4868d2_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).PTIce2MinTrq_Req, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[29]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal Rsrv2_CPC6_C06_AR5_b218fc0e_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Rsrv2_CPC6_C06_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[22] >> 4);

  /* process signal SQC_SG_CPC6_C06_AR5_848fc75a_Rx */
  (*(dataElement)).SQC_SG_CPC6_C06_AR5 = buffer[2]; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal THM_InvCoolntVolFlw_Cval_9cd721d9_Rx */
  (*(dataElement)).THM_InvCoolntVolFlw_Cval = buffer[19]; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal THM_MotCoolntVolFlw_Cval_000c215b_Rx */
  (*(dataElement)).THM_MotCoolntVolFlw_Cval = buffer[18]; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal THM_PTIce1MotOilVolFlw_Cval_a49aed18_Rx */
  (*(dataElement)).THM_PTIce1MotOilVolFlw_Cval = buffer[16]; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal THM_PTIce2MotOilVolFlw_Cval_4e1c307a_Rx */
  (*(dataElement)).THM_PTIce2MotOilVolFlw_Cval = buffer[17]; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  COMXF_DUMMY_STATEMENT(bufferLength); /* PRQA S 1338, 2983 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return ret;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Inv_Com_SG_CPC6_C11_AR5_37p9dav6q6ic5di6w6o5rvm45_479df52c_Rx_REC_SG_CPC6_C11_AR5_dgfi1nrxtb0voy6rb7ybeonmv(P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) buffer, uint32 bufferLength, P2VAR(REC_SG_CPC6_C11_AR5_dgfi1nrxtb0voy6rb7ybeonmv, AUTOMATIC, COMXF_APPL_VAR) dataElement) /* PRQA S 3673, 3206 */ /* MD_ComXf_Qac, MD_ComXf_3206 */
{
  Std_ReturnType ret = E_OK;

  P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) applDataPtr;

  /* process signal ActvDischrgCmd_Rq_EPTO_0eaf465b_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).ActvDischrgCmd_Rq_EPTO; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[4] >> 4) & 0x03U;

  /* process signal BodyCoupConn_Stat_f4a09b26_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).BodyCoupConn_Stat; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[4] & 0x0FU;

  /* process signal CRC_SG_CPC6_C11_AR5_d383c555_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).CRC_SG_CPC6_C11_AR5, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[0]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal EPTO_EMGYShutdn_Rq_072a3932_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).EPTO_EMGYShutdn_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[3] & 0x03U;

  /* process signal HV_KL30cRel_Req_7541cae9_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).HV_KL30cRel_Req; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[3] >> 2) & 0x03U;

  /* process signal Md_Rq_EPTO_092bf663_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Md_Rq_EPTO; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[3] >> 4);

  /* process signal SQC_SG_CPC6_C11_AR5_2a47233d_Rx */
  (*(dataElement)).SQC_SG_CPC6_C11_AR5 = buffer[2]; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal THM_FrFanDischrg_Rq_5afeed07_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).THM_FrFanDischrg_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[4] >> 6);

  COMXF_DUMMY_STATEMENT(bufferLength); /* PRQA S 1338, 2983 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return ret;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Inv_Com_SG_CPC6_C16_AR5_b40avz6xauighs72cnh3d0f8o_4a3ab5c8_Rx_REC_SG_CPC6_C16_AR5_1hpstplriukdblrgry0860d7o(P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) buffer, uint32 bufferLength, P2VAR(REC_SG_CPC6_C16_AR5_1hpstplriukdblrgry0860d7o, AUTOMATIC, COMXF_APPL_VAR) dataElement) /* PRQA S 3673, 3206 */ /* MD_ComXf_Qac, MD_ComXf_3206 */
{
  Std_ReturnType ret = E_OK;

  P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) applDataPtr;

  /* process signal CCS_ChrgCntrl_c648da0d_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).CCS_ChrgCntrl; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[7] >> 4);

  /* process signal CCS_ChrgCntrl2_64a28a6a_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).CCS_ChrgCntrl2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[9] & 0x0FU;

  /* process signal CCS_ChrgCntrl3_13a5bafc_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).CCS_ChrgCntrl3; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[14] & 0x0FU;

  /* process signal ChrgCoupUnlk_DC_Rq_22ff30a0_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).ChrgCoupUnlk_DC_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[8] >> 2) & 0x03U;

  /* process signal ChrgCoupUnlk_DC_Rq2_cc21e2d5_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).ChrgCoupUnlk_DC_Rq2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[8] >> 4) & 0x03U;

  /* process signal ChrgCoupUnlk_DC_Rq3_bb26d243_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).ChrgCoupUnlk_DC_Rq3; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[8] >> 6);

  /* process signal CRC_SG_CPC6_C16_AR5_18d6014d_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).CRC_SG_CPC6_C16_AR5, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[0]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal HVDC_Curr_Rqst_da56d0e7_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).HVDC_Curr_Rqst, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[3]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal HVDC_Curr_Rqst2_24619f06_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).HVDC_Curr_Rqst2, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[12]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal HVDC_Curr_Rqst3_5366af90_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).HVDC_Curr_Rqst3, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[17]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal HVDC_Volt_Rq_638e6f1d_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).HVDC_Volt_Rq, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[5]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal HVDC_Volt_Rq2_79b05cbb_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).HVDC_Volt_Rq2, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[10]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal HVDC_Volt_Rq3_0eb76c2d_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).HVDC_Volt_Rq3, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[15]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal Md_Rq_EVCC_3a28a4a2_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Md_Rq_EVCC; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[7] & 0x0FU;

  /* process signal Md_Rq_EVCC2_2237546d_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Md_Rq_EVCC2; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[9] >> 4);

  /* process signal Md_Rq_EVCC3_553064fb_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Md_Rq_EVCC3; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[14] >> 4);

  /* process signal Rsrv1_CPC6_C16_AR5_15bc9a98_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Rsrv1_CPC6_C16_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[8] & 0x03U;

  /* process signal SQC_SG_CPC6_C16_AR5_e112e725_Rx */
  (*(dataElement)).SQC_SG_CPC6_C16_AR5 = buffer[2]; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  COMXF_DUMMY_STATEMENT(bufferLength); /* PRQA S 1338, 2983 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return ret;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Inv_Com_SG_CPC6_C22_AR5_9qloh63bqshbof9m4g1344yq2_1a7c3a31_Rx_REC_SG_CPC6_C22_AR5_cp6wyrd9cg7ec7y2w3khz1gyt(P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) buffer, uint32 bufferLength, P2VAR(REC_SG_CPC6_C22_AR5_cp6wyrd9cg7ec7y2w3khz1gyt, AUTOMATIC, COMXF_APPL_VAR) dataElement) /* PRQA S 3673, 3206 */ /* MD_ComXf_Qac, MD_ComXf_3206 */
{
  Std_ReturnType ret = E_OK;

  P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) applDataPtr;

  /* process signal CRC_SG_CPC6_C22_AR5_eaac8238_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).CRC_SG_CPC6_C22_AR5, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[0]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal DCCB1_IsoQuickTest_Rq_40189041_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).DCCB1_IsoQuickTest_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[3] & 0x03U;

  /* process signal MWCU_IsoQuickTest_Rq_a50ccc1c_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).MWCU_IsoQuickTest_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[3] >> 2) & 0x03U;

  /* process signal Rsrv1_CPC6_C22_AR5_b6e99822_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Rsrv1_CPC6_C22_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[3] >> 4);

  /* process signal SQC_SG_CPC6_C22_AR5_13686450_Rx */
  (*(dataElement)).SQC_SG_CPC6_C22_AR5 = buffer[2]; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  COMXF_DUMMY_STATEMENT(bufferLength); /* PRQA S 1338, 2983 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return ret;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Inv_Com_SG_EVCC1_C01_AR5_bvrdfjnhy7u1wyt6aog6cpucq_392c9d49_Rx_REC_SG_EVCC1_C01_AR5_515fv9hxb5jrzmunrr9r72aqj(P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) buffer, uint32 bufferLength, P2VAR(REC_SG_EVCC1_C01_AR5_515fv9hxb5jrzmunrr9r72aqj, AUTOMATIC, COMXF_APPL_VAR) dataElement) /* PRQA S 3673, 3206 */ /* MD_ComXf_Qac, MD_ComXf_3206 */
{
  Std_ReturnType ret = E_OK;

  P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) applDataPtr;

  /* process signal ChrgCoupConn_Stat_3f69d531_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).ChrgCoupConn_Stat; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[3] & 0x0FU;

  /* process signal ChrgCoupLk_Stat_4ab301e5_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).ChrgCoupLk_Stat; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[3] >> 4) & 0x03U;

  /* process signal CRC_SG_EVCC1_C01_AR5_a105c017_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).CRC_SG_EVCC1_C01_AR5, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[0]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal CtrlPilot_DutyRange_Stat_448c8735_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).CtrlPilot_DutyRange_Stat; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[4] >> 4);

  /* process signal CtrlPilot_Stat_b287bfb1_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).CtrlPilot_Stat; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[4] & 0x0FU;

  /* process signal DC_ChrgFlt_EVCC_667b4430_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).DC_ChrgFlt_EVCC; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[5] >> 6);

  /* process signal EmgShutdn_Rq_567406ce_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).EmgShutdn_Rq; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[10] >> 2) & 0x03U;

  /* process signal EVSE_Curr_Cval_f2a35078_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).EVSE_Curr_Cval, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[11]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal EVSE_Flt_010f6868_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).EVSE_Flt; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[10] & 0x03U;

  /* process signal EVSE_Volt_Cval_18377e2b_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).EVSE_Volt_Cval, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[13]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal HVDC_MaxCurrLim_EVCC_0e9e2501_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).HVDC_MaxCurrLim_EVCC, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[8]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal PlugLatch_Stat_8b49fc0e_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).PlugLatch_Stat; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[3] >> 6);

  /* process signal ProxPilotAmpacity_Stat_215ce758_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).ProxPilotAmpacity_Stat; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = buffer[5] & 0x0FU;

  /* process signal Rsrv1_EVCC1_C01_AR5_3855ba9b_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Rsrv1_EVCC1_C01_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[10] >> 4);

  /* process signal Rsrv2_EVCC1_C01_AR5_2928d0e2_Rx */
  applDataPtr = (P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR))&(*(dataElement)).Rsrv2_EVCC1_C01_AR5; /* PRQA S 0314 */ /* MD_ComXf_0314 */
  applDataPtr[0]  = (buffer[5] >> 4) & 0x03U;

  /* process signal Rsrv3_EVCC1_C01_AR5_90d30b0a_Rx */
  ComXf_Copy16Bit((P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR)) &(*(dataElement)).Rsrv3_EVCC1_C01_AR5, (P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA)) &buffer[6]); /* PRQA S 2985 */ /* MD_ComXf_2985 */

  /* process signal SQC_SG_EVCC1_C01_AR5_e295ed9b_Rx */
  (*(dataElement)).SQC_SG_EVCC1_C01_AR5 = buffer[2]; /* PRQA S 2985 */ /* MD_ComXf_2985 */

  COMXF_DUMMY_STATEMENT(bufferLength); /* PRQA S 1338, 2983 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */

  return ret;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */

/**********************************************************************************************************************
 * ComXf Init/DeInit API
 *********************************************************************************************************************/

FUNC(void, COMXF_CODE) ComXf_Init(P2CONST(ComXf_ConfigType, AUTOMATIC, COMXF_APPL_DATA) config) /* PRQA S 3206 */ /* MD_ComXf_3206 */
{
  COMXF_DUMMY_STATEMENT(config); /* PRQA S 1338, 2983 */ /* MD_MSR_DummyStmt, MD_MSR_DummyStmt */
}

FUNC(void, COMXF_CODE) ComXf_DeInit(void)
{
}

#define COMXF_STOP_SEC_CODE
#include "ComXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_ComXf_0314:  MISRA rule: Dir1.1
     Reason:       Pointer cast to void because a direct byte access is necessary.
     Risk:         No functional risk. Only a cast to void is performed.
     Prevention:   Not required.

   MD_ComXf_2985:  MISRA rule: Rule2.2
     Reason:       For loops produce 0 in additions or 1 in multiplications.
     Risk:         No functional risk. There is no side effect.
     Prevention:   Not required.

   MD_ComXf_3206:  MISRA rule: Rule2.7
     Reason:       The parameters are not used by the code in all possible code variants.
     Risk:         No functional risk.
     Prevention:   Not required.

   MD_ComXf_Qac:
     Reason:       This justification is used as summary justification for all deviations caused by wrong analysis tool results.
                   The used analysis tool QAC 9.0 sometimes creates wrong messages. Those deviations are no issues in the RTE code.
     Risk:         No functional risk.
     Prevention:   Not required.

*/
