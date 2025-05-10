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
 *             File:  ComXf.h
 *           Config:  CBD2100170.dpa
 *      ECU-Project:  CBD2100170
 *
 *        Generator:  MICROSAR ComXf Generator Version 1.18.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2100170
 *
 *      Description:  MICROSAR ComXf header file
 *********************************************************************************************************************/

/* double include prevention */
#ifndef COMXF_H
# define COMXF_H


# include "SchM_ComXf_Type.h"

# define COMXF_SW_MAJOR_VERSION (0x01U)
# define COMXF_SW_MINOR_VERSION (0x12U)
# define COMXF_SW_PATCH_VERSION (0x00U)

# define COMXF_VENDOR_ID (0x1EU)
# define COMXF_MODULE_ID (0xAFU)

# define COMXF_AR_RELEASE_MAJOR_VERSION     (0x04U)
# define COMXF_AR_RELEASE_MINOR_VERSION     (0x02U)
# define COMXF_AR_RELEASE_REVISION_VERSION  (0x02U)

/* Return Codes */
# define COMXF_E_SER_GENERIC_ERROR (0x81U)

# define COMXF_START_SEC_CODE
# include "ComXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * ComXf transformers
 *********************************************************************************************************************/

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Com_SG_DCCB1_C01_AR5_bne86o4su6oef37i9ro5c10b9_636cfa89_Tx_REC_SG_DCCB1_C01_AR5_wcyc4oh3vv82se49oenjus1n(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) buffer, P2VAR(uint32, AUTOMATIC, COMXF_APPL_VAR) bufferLength, P2CONST(REC_SG_DCCB1_C01_AR5_wcyc4oh3vv82se49oenjus1n, AUTOMATIC, COMXF_APPL_DATA) dataElement); /* PRQA S 0786, 0777, 0779 */ /* MD_ComXf_0786, MD_MSR_Rule5.1, MD_MSR_Rule5.2 */
FUNC(Std_ReturnType, COMXF_CODE) ComXf_Com_SG_DCCB1_C02_AR5_4ujjmt98jr887lj811pphfbni_45921538_Tx_REC_SG_DCCB1_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) buffer, P2VAR(uint32, AUTOMATIC, COMXF_APPL_VAR) bufferLength, P2CONST(REC_SG_DCCB1_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv, AUTOMATIC, COMXF_APPL_DATA) dataElement); /* PRQA S 0786, 0777, 0779 */ /* MD_ComXf_0786, MD_MSR_Rule5.1, MD_MSR_Rule5.2 */
FUNC(Std_ReturnType, COMXF_CODE) ComXf_Com_SG_DCCB2_C01_AR5_em0ljh3vew4mv6wgv0qp1uq8e_a904a523_Tx_REC_SG_DCCB2_C01_AR5_a2qglp2324znbwefnu92uartf(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) buffer, P2VAR(uint32, AUTOMATIC, COMXF_APPL_VAR) bufferLength, P2CONST(REC_SG_DCCB2_C01_AR5_a2qglp2324znbwefnu92uartf, AUTOMATIC, COMXF_APPL_DATA) dataElement); /* PRQA S 0786, 0777, 0779 */ /* MD_ComXf_0786, MD_MSR_Rule5.1, MD_MSR_Rule5.2 */
FUNC(Std_ReturnType, COMXF_CODE) ComXf_Com_SG_EPTOce_C01_AR5_1nf7sb3onx9ta72u4gyf5nf4n_dc69b6f0_Tx_REC_SG_EPTOce_C01_AR5_1ae8w4ccn5pv3jukyqv8emy5n(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) buffer, P2VAR(uint32, AUTOMATIC, COMXF_APPL_VAR) bufferLength, P2CONST(REC_SG_EPTOce_C01_AR5_1ae8w4ccn5pv3jukyqv8emy5n, AUTOMATIC, COMXF_APPL_DATA) dataElement); /* PRQA S 0786, 0777, 0779 */ /* MD_ComXf_0786, MD_MSR_Rule5.1, MD_MSR_Rule5.2 */
FUNC(Std_ReturnType, COMXF_CODE) ComXf_Com_SG_EPTOce_C02_AR5_3iy57tdinwbbj5xh6sufcubir_bcc23d07_Tx_REC_SG_EPTOce_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) buffer, P2VAR(uint32, AUTOMATIC, COMXF_APPL_VAR) bufferLength, P2CONST(REC_SG_EPTOce_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv, AUTOMATIC, COMXF_APPL_DATA) dataElement); /* PRQA S 0786, 0777, 0779 */ /* MD_ComXf_0786, MD_MSR_Rule5.1, MD_MSR_Rule5.2 */
FUNC(Std_ReturnType, COMXF_CODE) ComXf_Com_SG_GPM1H1_XMC_AR2_wdn0u1bi7yijbnxe9bhxiysv_61f71333_Tx_signalGrp_GPM1H1_XMC(P2VAR(uint8, AUTOMATIC, COMXF_APPL_VAR) buffer, P2VAR(uint32, AUTOMATIC, COMXF_APPL_VAR) bufferLength, P2CONST(signalGrp_GPM1H1_XMC, AUTOMATIC, COMXF_APPL_DATA) dataElement); /* PRQA S 0786, 0777, 0779 */ /* MD_ComXf_0786, MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * ComXf retransformers
 *********************************************************************************************************************/

FUNC(Std_ReturnType, COMXF_CODE) ComXf_Inv_Com_SG_CPC6_C02_AR5_13zdcgtlyiyf2kmwz28jazrw0_0c044d9c_Rx_REC_SG_CPC6_C02_AR5_5wbdxrp8awtkuts7zyf21170w(P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) buffer, uint32 bufferLength, P2VAR(REC_SG_CPC6_C02_AR5_5wbdxrp8awtkuts7zyf21170w, AUTOMATIC, COMXF_APPL_VAR) dataElement); /* PRQA S 0786, 0777, 0779 */ /* MD_ComXf_0786, MD_MSR_Rule5.1, MD_MSR_Rule5.2 */
FUNC(Std_ReturnType, COMXF_CODE) ComXf_Inv_Com_SG_CPC6_C05_AR5_c0kn88fy4qhcaylfzjelpch8j_2dd29d95_Rx_REC_SG_CPC6_C05_AR5_2ahxpf4cam3pi2le1l2woky78(P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) buffer, uint32 bufferLength, P2VAR(REC_SG_CPC6_C05_AR5_2ahxpf4cam3pi2le1l2woky78, AUTOMATIC, COMXF_APPL_VAR) dataElement); /* PRQA S 0786, 0777, 0779 */ /* MD_ComXf_0786, MD_MSR_Rule5.1, MD_MSR_Rule5.2 */
FUNC(Std_ReturnType, COMXF_CODE) ComXf_Inv_Com_SG_CPC6_C06_AR5_d6yux088cedsa5d0uys1uc3ub_6cd01b20_Rx_REC_SG_CPC6_C06_AR5_ulcxeouja3rnfon8plrygyca(P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) buffer, uint32 bufferLength, P2VAR(REC_SG_CPC6_C06_AR5_ulcxeouja3rnfon8plrygyca, AUTOMATIC, COMXF_APPL_VAR) dataElement); /* PRQA S 0786, 0777, 0779 */ /* MD_ComXf_0786, MD_MSR_Rule5.1, MD_MSR_Rule5.2 */
FUNC(Std_ReturnType, COMXF_CODE) ComXf_Inv_Com_SG_CPC6_C11_AR5_37p9dav6q6ic5di6w6o5rvm45_479df52c_Rx_REC_SG_CPC6_C11_AR5_dgfi1nrxtb0voy6rb7ybeonmv(P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) buffer, uint32 bufferLength, P2VAR(REC_SG_CPC6_C11_AR5_dgfi1nrxtb0voy6rb7ybeonmv, AUTOMATIC, COMXF_APPL_VAR) dataElement); /* PRQA S 0786, 0777, 0779 */ /* MD_ComXf_0786, MD_MSR_Rule5.1, MD_MSR_Rule5.2 */
FUNC(Std_ReturnType, COMXF_CODE) ComXf_Inv_Com_SG_CPC6_C16_AR5_b40avz6xauighs72cnh3d0f8o_4a3ab5c8_Rx_REC_SG_CPC6_C16_AR5_1hpstplriukdblrgry0860d7o(P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) buffer, uint32 bufferLength, P2VAR(REC_SG_CPC6_C16_AR5_1hpstplriukdblrgry0860d7o, AUTOMATIC, COMXF_APPL_VAR) dataElement); /* PRQA S 0786, 0777, 0779 */ /* MD_ComXf_0786, MD_MSR_Rule5.1, MD_MSR_Rule5.2 */
FUNC(Std_ReturnType, COMXF_CODE) ComXf_Inv_Com_SG_CPC6_C22_AR5_9qloh63bqshbof9m4g1344yq2_1a7c3a31_Rx_REC_SG_CPC6_C22_AR5_cp6wyrd9cg7ec7y2w3khz1gyt(P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) buffer, uint32 bufferLength, P2VAR(REC_SG_CPC6_C22_AR5_cp6wyrd9cg7ec7y2w3khz1gyt, AUTOMATIC, COMXF_APPL_VAR) dataElement); /* PRQA S 0786, 0777, 0779 */ /* MD_ComXf_0786, MD_MSR_Rule5.1, MD_MSR_Rule5.2 */
FUNC(Std_ReturnType, COMXF_CODE) ComXf_Inv_Com_SG_EVCC1_C01_AR5_bvrdfjnhy7u1wyt6aog6cpucq_392c9d49_Rx_REC_SG_EVCC1_C01_AR5_515fv9hxb5jrzmunrr9r72aqj(P2CONST(uint8, AUTOMATIC, COMXF_APPL_DATA) buffer, uint32 bufferLength, P2VAR(REC_SG_EVCC1_C01_AR5_515fv9hxb5jrzmunrr9r72aqj, AUTOMATIC, COMXF_APPL_VAR) dataElement); /* PRQA S 0786, 0777, 0779 */ /* MD_ComXf_0786, MD_MSR_Rule5.1, MD_MSR_Rule5.2 */


# define COMXF_STOP_SEC_CODE
# include "ComXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Defines for ComXf transformer APIs
 *********************************************************************************************************************/

# define ComXf_ComHdl_ComHdlDccb1C01_SG_DCCB1_C01_AR5 ComXf_Com_SG_DCCB1_C01_AR5_bne86o4su6oef37i9ro5c10b9_636cfa89_Tx_REC_SG_DCCB1_C01_AR5_wcyc4oh3vv82se49oenjus1n
# define ComXf_ComHdl_ComHdlDccb2C01_SG_DCCB2_C01_AR5 ComXf_Com_SG_DCCB2_C01_AR5_em0ljh3vew4mv6wgv0qp1uq8e_a904a523_Tx_REC_SG_DCCB2_C01_AR5_a2qglp2324znbwefnu92uartf
# define ComXf_ComHdl_ComHdlDccbC02_SG_DCCB1_C02_AR5 ComXf_Com_SG_DCCB1_C02_AR5_4ujjmt98jr887lj811pphfbni_45921538_Tx_REC_SG_DCCB1_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv
# define ComXf_ComHdl_ComHdlEptoC01_SG_EPTOce_C01_AR5 ComXf_Com_SG_EPTOce_C01_AR5_1nf7sb3onx9ta72u4gyf5nf4n_dc69b6f0_Tx_REC_SG_EPTOce_C01_AR5_1ae8w4ccn5pv3jukyqv8emy5n
# define ComXf_ComHdl_ComHdlEptoC02_SG_EPTOce_C02_AR5 ComXf_Com_SG_EPTOce_C02_AR5_3iy57tdinwbbj5xh6sufcubir_bcc23d07_Tx_REC_SG_EPTOce_C02_AR5_dgfi1nrxtb0voy6rb7ybeonmv
# define ComXf_ComHdl_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2 ComXf_Com_SG_GPM1H1_XMC_AR2_wdn0u1bi7yijbnxe9bhxiysv_61f71333_Tx_signalGrp_GPM1H1_XMC

/**********************************************************************************************************************
 * Defines for ComXf retransformer APIs
 *********************************************************************************************************************/

# define ComXf_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5 ComXf_Inv_Com_SG_CPC6_C11_AR5_37p9dav6q6ic5di6w6o5rvm45_479df52c_Rx_REC_SG_CPC6_C11_AR5_dgfi1nrxtb0voy6rb7ybeonmv
# define ComXf_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5 ComXf_Inv_Com_SG_CPC6_C02_AR5_13zdcgtlyiyf2kmwz28jazrw0_0c044d9c_Rx_REC_SG_CPC6_C02_AR5_5wbdxrp8awtkuts7zyf21170w
# define ComXf_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5 ComXf_Inv_Com_SG_CPC6_C05_AR5_c0kn88fy4qhcaylfzjelpch8j_2dd29d95_Rx_REC_SG_CPC6_C05_AR5_2ahxpf4cam3pi2le1l2woky78
# define ComXf_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5 ComXf_Inv_Com_SG_CPC6_C06_AR5_d6yux088cedsa5d0uys1uc3ub_6cd01b20_Rx_REC_SG_CPC6_C06_AR5_ulcxeouja3rnfon8plrygyca
# define ComXf_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5 ComXf_Inv_Com_SG_CPC6_C16_AR5_b40avz6xauighs72cnh3d0f8o_4a3ab5c8_Rx_REC_SG_CPC6_C16_AR5_1hpstplriukdblrgry0860d7o
# define ComXf_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5 ComXf_Inv_Com_SG_CPC6_C22_AR5_9qloh63bqshbof9m4g1344yq2_1a7c3a31_Rx_REC_SG_CPC6_C22_AR5_cp6wyrd9cg7ec7y2w3khz1gyt
# define ComXf_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5 ComXf_Inv_Com_SG_EVCC1_C01_AR5_bvrdfjnhy7u1wyt6aog6cpucq_392c9d49_Rx_REC_SG_EVCC1_C01_AR5_515fv9hxb5jrzmunrr9r72aqj

/**********************************************************************************************************************
 * ComXf Init/DeInit API
 *********************************************************************************************************************/

typedef uint8 ComXf_ConfigType;
FUNC(void, COMXF_CODE) ComXf_Init(P2CONST(ComXf_ConfigType, AUTOMATIC, COMXF_APPL_DATA) config);
FUNC(void, COMXF_CODE) ComXf_DeInit(void);

#endif /* COMXF_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_ComXf_0786:  MISRA rule: Rule5.5
     Reason:       Same macro and idintifier names in first 63 characters are required to meet AUTOSAR spec.
     Risk:         No functional risk.
     Prevention:   Not required.

*/
