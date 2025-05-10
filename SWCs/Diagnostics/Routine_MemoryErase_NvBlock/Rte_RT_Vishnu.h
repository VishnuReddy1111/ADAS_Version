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
 *             File:  Rte_RT_Vishnu.h
 *           Config:  ADAS.dpa
 *      ECU-Project:  ADAS
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2201090
 *
 *      Description:  Application header file for SW-C <RT_Vishnu>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_RT_VISHNU_H
# define RTE_RT_VISHNU_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_RT_Vishnu_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_IF_UI2Sens01_CALID_Index_01_DE_UI2Sens01_CALID_Index_01 (0U)
#  define Rte_InitValue_IF_UI2Sens01_CALID_Index_02_DE_UI2Sens01_CALID_Index_02 (0U)
#  define Rte_InitValue_IF_UI2Sens01_CALID_Index_03_DE_UI2Sens01_CALID_Index_03 (0U)
#  define Rte_InitValue_IF_UI2Sens02_CALID_Index_04_DE_UI2Sens02_CALID_Index_04 (0U)
#  define Rte_InitValue_IF_UI2Sens02_CALID_Index_05_DE_UI2Sens02_CALID_Index_05 (0U)
#  define Rte_InitValue_IF_UI2Sens02_CALID_Index_06_DE_UI2Sens02_CALID_Index_06 (0U)
#  define Rte_InitValue_IF_UI2Sens02_CALID_Index_07_DE_UI2Sens02_CALID_Index_07 (0U)
#  define Rte_InitValue_IF_UI2Sens02_CALID_Index_08_DE_UI2Sens02_CALID_Index_08 (0U)
#  define Rte_InitValue_IF_UI2Sens02_CALID_Index_09_DE_UI2Sens02_CALID_Index_09 (0U)
#  define Rte_InitValue_IF_UI2Sens02_CALID_Index_10_DE_UI2Sens02_CALID_Index_10 (0U)
#  define Rte_InitValue_IF_UI2Sens02_CALID_Index_11_DE_UI2Sens02_CALID_Index_11 (0U)
#  define Rte_InitValue_IF_UI2Sens02_CALID_Index_12_DE_UI2Sens02_CALID_Index_12 (0U)
#  define Rte_InitValue_IF_UI2Sens02_CALID_Index_13_DE_UI2Sens02_CALID_Index_13 (0U)
#  define Rte_InitValue_IF_UI2Sens02_CALID_Index_14_DE_UI2Sens02_CALID_Index_14 (0U)
#  define Rte_InitValue_IF_UI2Sens02_CALID_Index_15_DE_UI2Sens02_CALID_Index_15 (0U)
#  define Rte_InitValue_IF_UI2Sens02_CALID_Index_16_DE_UI2Sens02_CALID_Index_16 (0U)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Vishnu_IF_SG_BJB_10_DE_SG_BJB_10(P2VAR(AT_SG_BJB_10, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Vishnu_IF_SG_BJB_12_DE_SG_BJB_12(P2VAR(AT_SG_BJB_12, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Vishnu_IF_SG_BJB_13_DE_SG_BJB_13(P2VAR(AT_SG_BJB_13, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Vishnu_IF_SG_HVK_03_DE_SG_HVK_03(P2VAR(AT_SG_HVK_03, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Vishnu_IF_SG_HVLM_14_DE_SG_HVLM_14(P2VAR(AT_SG_HVLM_14, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Vishnu_IF_SG_ORU_Control_A_01_DE_SG_ORU_Control_A_01(P2VAR(AT_SG_ORU_Control_A_01, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Vishnu_IF_SG_ORU_Control_D_01_DE_SG_ORU_Control_D_01(P2VAR(AT_SG_ORU_Control_D_01, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Vishnu_IF_SG_OTAMC_D_01_DE_SG_OTAMC_D_01(P2VAR(AT_SG_OTAMC_D_01, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Vishnu_IF_SG_UI1_01_DE_SG_UI1_01(P2VAR(AT_SG_UI1_01, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Vishnu_IF_SG_UI1_02_DE_SG_UI1_02(P2VAR(AT_SG_UI1_02, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Vishnu_IF_SG_UI2_01_DE_SG_UI2_01(P2VAR(AT_SG_UI2_01, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Vishnu_IF_SG_UI2_02_DE_SG_UI2_02(P2VAR(AT_SG_UI2_02, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Vishnu_IF_SG_UI2_03_DE_SG_UI2_03(P2VAR(AT_SG_UI2_03, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_RT_Vishnu_SG_BMC_HV_01_SG_BMC_HV_01(P2CONST(SG_BMC_HV_01, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_RT_Vishnu_SG_BMC_HV_02_SG_BMC_HV_02(P2CONST(SG_BMC_HV_02, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_RT_Vishnu_SG_BMC_HV_04_SG_BMC_HV_04(P2CONST(SG_BMC_HV_04, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_RT_Vishnu_SG_BMC_HV_10_SG_BMC_HV_10(P2CONST(SG_BMC_HV_10, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_RT_Vishnu_SG_BMC_HV_12_SG_BMC_HV_12(P2CONST(SG_BMC_HV_12, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_RT_Vishnu_SG_BMC_HV_16_SG_BMC_HV_11(P2CONST(SG_BMC_HV_11, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(uint8, RTE_CODE) Rte_Mode_RT_Vishnu_DcmEcuReset_DcmEcuReset(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_RT_Vishnu_ECU_PerformReset_IF_ECU_Perform_Reset_Indication(uint8 nextMode);

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_IF_SG_BJB_10_DE_SG_BJB_10 Rte_Read_RT_Vishnu_IF_SG_BJB_10_DE_SG_BJB_10
#  define Rte_Read_IF_SG_BJB_11_DE_SG_BJB_11 Rte_Read_RT_Vishnu_IF_SG_BJB_11_DE_SG_BJB_11

#  define Rte_Read_RT_Vishnu_IF_SG_BJB_11_DE_SG_BJB_11(data) (*(data) = Rte_C_AT_SG_BJB_11_0, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_IF_SG_BJB_12_DE_SG_BJB_12 Rte_Read_RT_Vishnu_IF_SG_BJB_12_DE_SG_BJB_12
#  define Rte_Read_IF_SG_BJB_13_DE_SG_BJB_13 Rte_Read_RT_Vishnu_IF_SG_BJB_13_DE_SG_BJB_13
#  define Rte_Read_IF_SG_HVK_03_DE_SG_HVK_03 Rte_Read_RT_Vishnu_IF_SG_HVK_03_DE_SG_HVK_03
#  define Rte_Read_IF_SG_HVLM_14_DE_SG_HVLM_14 Rte_Read_RT_Vishnu_IF_SG_HVLM_14_DE_SG_HVLM_14
#  define Rte_Read_IF_SG_ORU_Control_A_01_DE_SG_ORU_Control_A_01 Rte_Read_RT_Vishnu_IF_SG_ORU_Control_A_01_DE_SG_ORU_Control_A_01
#  define Rte_Read_IF_SG_ORU_Control_D_01_DE_SG_ORU_Control_D_01 Rte_Read_RT_Vishnu_IF_SG_ORU_Control_D_01_DE_SG_ORU_Control_D_01
#  define Rte_Read_IF_SG_OTAMC_D_01_DE_SG_OTAMC_D_01 Rte_Read_RT_Vishnu_IF_SG_OTAMC_D_01_DE_SG_OTAMC_D_01
#  define Rte_Read_IF_SG_UI1_01_DE_SG_UI1_01 Rte_Read_RT_Vishnu_IF_SG_UI1_01_DE_SG_UI1_01
#  define Rte_Read_IF_SG_UI1_02_DE_SG_UI1_02 Rte_Read_RT_Vishnu_IF_SG_UI1_02_DE_SG_UI1_02
#  define Rte_Read_IF_SG_UI2_01_DE_SG_UI2_01 Rte_Read_RT_Vishnu_IF_SG_UI2_01_DE_SG_UI2_01
#  define Rte_Read_IF_SG_UI2_02_DE_SG_UI2_02 Rte_Read_RT_Vishnu_IF_SG_UI2_02_DE_SG_UI2_02
#  define Rte_Read_IF_SG_UI2_03_DE_SG_UI2_03 Rte_Read_RT_Vishnu_IF_SG_UI2_03_DE_SG_UI2_03
#  define Rte_Read_IF_UI2Sens01_CALID_Index_01_DE_UI2Sens01_CALID_Index_01 Rte_Read_RT_Vishnu_IF_UI2Sens01_CALID_Index_01_DE_UI2Sens01_CALID_Index_01
#  define Rte_Read_RT_Vishnu_IF_UI2Sens01_CALID_Index_01_DE_UI2Sens01_CALID_Index_01(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens01_CALID_Index_01_XIX_UI2Sens01_CALID_01_XIX_BMC_CAN01_70cabfee_Rx, (data)))
#  define Rte_Read_IF_UI2Sens01_CALID_Index_02_DE_UI2Sens01_CALID_Index_02 Rte_Read_RT_Vishnu_IF_UI2Sens01_CALID_Index_02_DE_UI2Sens01_CALID_Index_02
#  define Rte_Read_RT_Vishnu_IF_UI2Sens01_CALID_Index_02_DE_UI2Sens01_CALID_Index_02(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens01_CALID_Index_02_XIX_UI2Sens01_CALID_01_XIX_BMC_CAN01_3d22bf89_Rx, (data)))
#  define Rte_Read_IF_UI2Sens01_CALID_Index_03_DE_UI2Sens01_CALID_Index_03 Rte_Read_RT_Vishnu_IF_UI2Sens01_CALID_Index_03_DE_UI2Sens01_CALID_Index_03
#  define Rte_Read_RT_Vishnu_IF_UI2Sens01_CALID_Index_03_DE_UI2Sens01_CALID_Index_03(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens01_CALID_Index_03_XIX_UI2Sens01_CALID_01_XIX_BMC_CAN01_b0aa426b_Rx, (data)))
#  define Rte_Read_IF_UI2Sens02_CALID_Index_04_DE_UI2Sens02_CALID_Index_04 Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_04_DE_UI2Sens02_CALID_Index_04
#  define Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_04_DE_UI2Sens02_CALID_Index_04(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens02_CALID_Index_04_XIX_UI2Sens02_CALID_01_XIX_BMC_CAN01_7d85c6ac_Rx, (data)))
#  define Rte_Read_IF_UI2Sens02_CALID_Index_05_DE_UI2Sens02_CALID_Index_05 Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_05_DE_UI2Sens02_CALID_Index_05
#  define Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_05_DE_UI2Sens02_CALID_Index_05(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens02_CALID_Index_05_XIX_UI2Sens02_CALID_01_XIX_BMC_CAN01_f00d3b4e_Rx, (data)))
#  define Rte_Read_IF_UI2Sens02_CALID_Index_06_DE_UI2Sens02_CALID_Index_06 Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_06_DE_UI2Sens02_CALID_Index_06
#  define Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_06_DE_UI2Sens02_CALID_Index_06(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens02_CALID_Index_06_XIX_UI2Sens02_CALID_01_XIX_BMC_CAN01_bde53b29_Rx, (data)))
#  define Rte_Read_IF_UI2Sens02_CALID_Index_07_DE_UI2Sens02_CALID_Index_07 Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_07_DE_UI2Sens02_CALID_Index_07
#  define Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_07_DE_UI2Sens02_CALID_Index_07(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens02_CALID_Index_07_XIX_UI2Sens02_CALID_01_XIX_BMC_CAN01_306dc6cb_Rx, (data)))
#  define Rte_Read_IF_UI2Sens02_CALID_Index_08_DE_UI2Sens02_CALID_Index_08 Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_08_DE_UI2Sens02_CALID_Index_08
#  define Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_08_DE_UI2Sens02_CALID_Index_08(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens02_CALID_Index_08_XIX_UI2Sens02_CALID_01_XIX_BMC_CAN01_9154c171_Rx, (data)))
#  define Rte_Read_IF_UI2Sens02_CALID_Index_09_DE_UI2Sens02_CALID_Index_09 Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_09_DE_UI2Sens02_CALID_Index_09
#  define Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_09_DE_UI2Sens02_CALID_Index_09(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens02_CALID_Index_09_XIX_UI2Sens02_CALID_02_XIX_BMC_CAN01_0da156ea_Rx, (data)))
#  define Rte_Read_IF_UI2Sens02_CALID_Index_10_DE_UI2Sens02_CALID_Index_10 Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_10_DE_UI2Sens02_CALID_Index_10
#  define Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_10_DE_UI2Sens02_CALID_Index_10(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens02_CALID_Index_10_XIX_UI2Sens02_CALID_02_XIX_BMC_CAN01_79c15a37_Rx, (data)))
#  define Rte_Read_IF_UI2Sens02_CALID_Index_11_DE_UI2Sens02_CALID_Index_11 Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_11_DE_UI2Sens02_CALID_Index_11
#  define Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_11_DE_UI2Sens02_CALID_Index_11(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens02_CALID_Index_11_XIX_UI2Sens02_CALID_02_XIX_BMC_CAN01_f449a7d5_Rx, (data)))
#  define Rte_Read_IF_UI2Sens02_CALID_Index_12_DE_UI2Sens02_CALID_Index_12 Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_12_DE_UI2Sens02_CALID_Index_12
#  define Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_12_DE_UI2Sens02_CALID_Index_12(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens02_CALID_Index_12_XIX_UI2Sens02_CALID_02_XIX_BMC_CAN01_b9a1a7b2_Rx, (data)))
#  define Rte_Read_IF_UI2Sens02_CALID_Index_13_DE_UI2Sens02_CALID_Index_13 Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_13_DE_UI2Sens02_CALID_Index_13
#  define Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_13_DE_UI2Sens02_CALID_Index_13(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens02_CALID_Index_13_XIX_UI2Sens02_CALID_02_XIX_BMC_CAN01_34295a50_Rx, (data)))
#  define Rte_Read_IF_UI2Sens02_CALID_Index_14_DE_UI2Sens02_CALID_Index_14 Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_14_DE_UI2Sens02_CALID_Index_14
#  define Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_14_DE_UI2Sens02_CALID_Index_14(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens02_CALID_Index_14_XIX_UI2Sens02_CALID_02_XIX_BMC_CAN01_2271a77c_Rx, (data)))
#  define Rte_Read_IF_UI2Sens02_CALID_Index_15_DE_UI2Sens02_CALID_Index_15 Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_15_DE_UI2Sens02_CALID_Index_15
#  define Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_15_DE_UI2Sens02_CALID_Index_15(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens02_CALID_Index_15_XIX_UI2Sens02_CALID_02_XIX_BMC_CAN01_aff95a9e_Rx, (data)))
#  define Rte_Read_IF_UI2Sens02_CALID_Index_16_DE_UI2Sens02_CALID_Index_16 Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_16_DE_UI2Sens02_CALID_Index_16
#  define Rte_Read_RT_Vishnu_IF_UI2Sens02_CALID_Index_16_DE_UI2Sens02_CALID_Index_16(data) (Com_ReceiveSignal(ComConf_ComSignal_UI2Sens02_CALID_Index_16_XIX_UI2Sens02_CALID_02_XIX_BMC_CAN01_e2115af9_Rx, (data)))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_SG_BMC_HV_01_SG_BMC_HV_01 Rte_Write_RT_Vishnu_SG_BMC_HV_01_SG_BMC_HV_01
#  define Rte_Write_SG_BMC_HV_02_SG_BMC_HV_02 Rte_Write_RT_Vishnu_SG_BMC_HV_02_SG_BMC_HV_02
#  define Rte_Write_SG_BMC_HV_04_SG_BMC_HV_04 Rte_Write_RT_Vishnu_SG_BMC_HV_04_SG_BMC_HV_04
#  define Rte_Write_SG_BMC_HV_10_SG_BMC_HV_10 Rte_Write_RT_Vishnu_SG_BMC_HV_10_SG_BMC_HV_10
#  define Rte_Write_SG_BMC_HV_12_SG_BMC_HV_12 Rte_Write_RT_Vishnu_SG_BMC_HV_12_SG_BMC_HV_12
#  define Rte_Write_SG_BMC_HV_16_SG_BMC_HV_11 Rte_Write_RT_Vishnu_SG_BMC_HV_16_SG_BMC_HV_11


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_DcmEcuReset_DcmEcuReset Rte_Mode_RT_Vishnu_DcmEcuReset_DcmEcuReset


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_ECU_PerformReset_IF_ECU_Perform_Reset_Indication Rte_Switch_RT_Vishnu_ECU_PerformReset_IF_ECU_Perform_Reset_Indication


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDDNPMGEN2_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_CDDNPMGEN2_APPL_CODE) CddNpmGen2_SetK15State(boolean state); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_CDDNPMGEN2_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_COMM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_COMM_APPL_CODE) ComM_RequestComMode(ComM_UserHandleType parg0, ComM_ModeType ComMode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_COMM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_DEMMASTER_0_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_DEMMASTER_0_APPL_CODE) Dem_GetOperationCycleState(uint8 parg0, P2VAR(Dem_OperationCycleStateType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) CycleState); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_DEMMASTER_0_APPL_CODE) Dem_SetOperationCycleState(uint8 parg0, Dem_OperationCycleStateType CycleState); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_DEMMASTER_0_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_DEMSATELLITE_0_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_DEMSATELLITE_0_APPL_CODE) Dem_SetEventStatus(Dem_EventIdType parg0, Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_DEMSATELLITE_0_APPL_CODE) Dem_ResetEventStatus(Dem_EventIdType parg0); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_DEMSATELLITE_0_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_NVM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_EraseNvBlock(NvM_BlockIdType parg0); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVM_APPL_VAR) ErrorStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_InvalidateNvBlock(NvM_BlockIdType parg0); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_ReadBlock(NvM_BlockIdType parg0, dtRef_VOID DstPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_WriteBlock(NvM_BlockIdType parg0, dtRef_const_VOID SrcPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_NVM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define Rte_Call_Event_DTC_0x10000a_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)10, arg1))
#  define Rte_Call_Event_DTC_0x10000b_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)11, arg1))
#  define Rte_Call_Event_DTC_0xd12000_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)76, arg1))
#  define Rte_Call_Event_DTC_0xd12001_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)77, arg1))
#  define Rte_Call_Event_DTC_0xd12002_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)78, arg1))
#  define Rte_Call_Event_DTC_0xd12004_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)79, arg1))
#  define Rte_Call_Event_DTC_0xd12011_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)80, arg1))
#  define Rte_Call_Event_DTC_0xd12025_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)81, arg1))
#  define Rte_Call_Event_DTC_0xd12026_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)82, arg1))
#  define Rte_Call_Event_DTC_0xd12101_ResetEventStatus() (Dem_ResetEventStatus((Dem_EventIdType)83))
#  define Rte_Call_Event_DTC_0xd12102_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)84, arg1))
#  define Rte_Call_Event_DTC_0xd12103_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)85, arg1))
#  define Rte_Call_Event_DTC_0xe40000_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)99, arg1))
#  define Rte_Call_Event_DTC_0xe40011_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)110, arg1))
#  define Rte_Call_Event_DTC_0xe40012_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)111, arg1))
#  define Rte_Call_Event_DTC_0xe40013_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)112, arg1))
#  define Rte_Call_K15State_SetK15State CddNpmGen2_SetK15State
#  define Rte_Call_OpCycle_RT_Test_OpCycle_GetOperationCycleState(arg1) (Dem_GetOperationCycleState((uint8)1, arg1))
#  define Rte_Call_OpCycle_RT_Test_OpCycle_SetOperationCycleState(arg1) (Dem_SetOperationCycleState((uint8)1, arg1))
#  define Rte_Call_PS_CddNpmGen2_MeasurementsType_EraseBlock() (NvM_EraseNvBlock((NvM_BlockIdType)25))
#  define Rte_Call_PS_CddNpmGen2_MeasurementsType_GetErrorStatus(arg1) (NvM_GetErrorStatus((NvM_BlockIdType)25, arg1))
#  define Rte_Call_PS_CddNpmGen2_MeasurementsType_InvalidateNvBlock() (NvM_InvalidateNvBlock((NvM_BlockIdType)25))
#  define Rte_Call_PS_CddNpmGen2_MeasurementsType_ReadBlock(arg1) (NvM_ReadBlock((NvM_BlockIdType)25, arg1))
#  define Rte_Call_PS_CddNpmGen2_MeasurementsType_SetRamBlockStatus(arg1) (NvM_SetRamBlockStatus((NvM_BlockIdType)25, arg1))
#  define Rte_Call_PS_CddNpmGen2_MeasurementsType_WriteBlock(arg1) (NvM_WriteBlock((NvM_BlockIdType)25, arg1))
#  define Rte_Call_PS_NvMBlock_0x0250_ReadBlock(arg1) (NvM_ReadBlock((NvM_BlockIdType)24, arg1))
#  define Rte_Call_PS_NvMBlock_0x0250_WriteBlock(arg1) (NvM_WriteBlock((NvM_BlockIdType)24, arg1))
#  define Rte_Call_UR_CN_BMC_CAN01_908d0059_RequestComMode(arg1) (ComM_RequestComMode((ComM_UserHandleType)0, arg1))

# endif /* !defined(RTE_CORE) */


# define RT_Vishnu_START_SEC_CODE
# include "RT_Vishnu_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CBReadData_DID_0xF404_Calculate_Load_Value_ReadData CBReadData_DID_0xF404_Calculate_Load_Value_ReadData
#  define RTE_RUNNABLE_CBReadData_DID_0xF405_Engine_Coolent_temperature_ReadData CBReadData_DID_0xF405_Engine_Coolent_temperature_ReadData
#  define RTE_RUNNABLE_CBReadData_DID_0xF40C_Engine_RPM_ReadData CBReadData_DID_0xF40C_Engine_RPM_ReadData
#  define RTE_RUNNABLE_CBReadData_DID_0xF40D_Vehicle_Speed_Sensor_ReadData CBReadData_DID_0xF40D_Vehicle_Speed_Sensor_ReadData
#  define RTE_RUNNABLE_CBReadData_DID_0xF41F_Time_Since_Engin_Start_ReadData CBReadData_DID_0xF41F_Time_Since_Engin_Start_ReadData
#  define RTE_RUNNABLE_CBReadData_DID_0xF442_Controle_Module_Voltage_ReadData CBReadData_DID_0xF442_Controle_Module_Voltage_ReadData
#  define RTE_RUNNABLE_CBReadData_DID_0xF449_Accelerator_Pedal_Position_D_ReadData CBReadData_DID_0xF449_Accelerator_Pedal_Position_D_ReadData
#  define RTE_RUNNABLE_CBReadData_Data_StandardDTCInformation_Param_DTCPrior_ReadData CBReadData_Data_StandardDTCInformation_Param_DTCPrior_ReadData
#  define RTE_RUNNABLE_CBReadData_Data_StandardDTCInformation_Param_OccurCount_ReadData CBReadData_Data_StandardDTCInformation_Param_OccurCount_ReadData
#  define RTE_RUNNABLE_CBReadData_Data_StandardFreezeFrame1_Param_AgingCount_ReadData CBReadData_Data_StandardFreezeFrame1_Param_AgingCount_ReadData
#  define RTE_RUNNABLE_CBReadData_Data_StandardFreezeFrame1_Param_KmMilea_1_ReadData CBReadData_Data_StandardFreezeFrame1_Param_KmMilea_1_ReadData
#  define RTE_RUNNABLE_CBReadData_Data_StandardFreezeFrame1_Param_Reser_ReadData CBReadData_Data_StandardFreezeFrame1_Param_Reser_ReadData
#  define RTE_RUNNABLE_CBReadData_Data_StandardFreezeFrame1_Param_TimeStamp_STRUC_Bitfi_ReadData CBReadData_Data_StandardFreezeFrame1_Param_TimeStamp_STRUC_Bitfi_ReadData
#  define RTE_RUNNABLE_CBReadData_Data_SupplementalMonitorActivityData_Param_MonitActivNumerCount_ReadData CBReadData_Data_SupplementalMonitorActivityData_Param_MonitActivNumerCount_ReadData
#  define RTE_RUNNABLE_CBReadData_Data_SupplementalMonitorActivityData_Param_StoreMonitActivRatio_ReadData CBReadData_Data_SupplementalMonitorActivityData_Param_StoreMonitActivRatio_ReadData
#  define RTE_RUNNABLE_CBReadData_Data_Vishnu_ExtData_Param_VishnDOB_ReadData CBReadData_Data_Vishnu_ExtData_Param_VishnDOB_ReadData
#  define RTE_RUNNABLE_CBReadData_Data_Vishnu_ExtData_Param_VishnRes_ReadData CBReadData_Data_Vishnu_ExtData_Param_VishnRes_ReadData
#  define RTE_RUNNABLE_DTC_Testing DTC_Testing
#  define RTE_RUNNABLE_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ReadData DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ReadData
#  define RTE_RUNNABLE_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_WriteData DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_WriteData
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ConditionCheckRead DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ReadData DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ReadData
#  define RTE_RUNNABLE_DataServices_Data_TABROW_CanTPData_Read_ConditionCheckRead DataServices_Data_TABROW_CanTPData_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_TABROW_CanTPData_Read_ReadData DataServices_Data_TABROW_CanTPData_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_TABROW_CanTPData_Read_WriteData DataServices_Data_TABROW_CanTPData_Read_WriteData
#  define RTE_RUNNABLE_DataServices_Data_TABROW_PIMDID_Read_ConditionCheckRead DataServices_Data_TABROW_PIMDID_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_TABROW_PIMDID_Read_ReadData DataServices_Data_TABROW_PIMDID_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_TABROW_PIMDID_Read_WriteData DataServices_Data_TABROW_PIMDID_Read_WriteData
#  define RTE_RUNNABLE_DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData
#  define RTE_RUNNABLE_DataServices_Data_Vishnu_DID_ConditionCheckRead DataServices_Data_Vishnu_DID_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_Vishnu_DID_ReadData DataServices_Data_Vishnu_DID_ReadData
#  define RTE_RUNNABLE_DataServices_Data_Vishnu_DID_ReadDataLength DataServices_Data_Vishnu_DID_ReadDataLength
#  define RTE_RUNNABLE_DataServices_Data_Vishnu_DID_WriteData DataServices_Data_Vishnu_DID_WriteData
#  define RTE_RUNNABLE_RT_Block_Test RT_Block_Test
#  define RTE_RUNNABLE_RT_Vishnu_Init RT_Vishnu_Init
#  define RTE_RUNNABLE_RT_Vishnu_Main RT_Vishnu_Main
#  define RTE_RUNNABLE_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_RequestResults RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_RequestResults
#  define RTE_RUNNABLE_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Start RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Start
#  define RTE_RUNNABLE_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Stop RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Stop
#  define RTE_RUNNABLE_SecurityAccess_Unlock_L1_CompareKey SecurityAccess_Unlock_L1_CompareKey
#  define RTE_RUNNABLE_SecurityAccess_Unlock_L1_GetSeed SecurityAccess_Unlock_L1_GetSeed
# endif

FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_DID_0xF404_Calculate_Load_Value_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_DID_0xF405_Engine_Coolent_temperature_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_DID_0xF40C_Engine_RPM_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_DID_0xF40D_Vehicle_Speed_Sensor_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_DID_0xF41F_Time_Since_Engin_Start_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_DID_0xF442_Controle_Module_Voltage_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_DID_0xF449_Accelerator_Pedal_Position_D_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_StandardDTCInformation_Param_DTCPrior_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(void, RT_Vishnu_CODE) CBReadData_Data_StandardDTCInformation_Param_OccurCount_ReadData(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_StandardFreezeFrame1_Param_AgingCount_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_StandardFreezeFrame1_Param_KmMilea_1_ReadData(P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_StandardFreezeFrame1_Param_KmMilea_1_ReadData(P2VAR(DataArrayType_uint8_3, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_StandardFreezeFrame1_Param_Reser_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_StandardFreezeFrame1_Param_TimeStamp_STRUC_Bitfi_ReadData(P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_StandardFreezeFrame1_Param_TimeStamp_STRUC_Bitfi_ReadData(P2VAR(DataArrayType_uint8_5, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_SupplementalMonitorActivityData_Param_MonitActivNumerCount_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_SupplementalMonitorActivityData_Param_StoreMonitActivRatio_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_Vishnu_ExtData_Param_VishnDOB_ReadData(Dem_EventIdType EventId, P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RT_Vishnu_CODE) CBReadData_Data_Vishnu_ExtData_Param_VishnRes_ReadData(P2VAR(DataPrimitiveType_uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(void, RT_Vishnu_CODE) DTC_Testing(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_WriteData(P2CONST(Dcm_Data5ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data100ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_CanTPData_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_CanTPData_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_CanTPData_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data150ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_CanTPData_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_CanTPData_Read_WriteData(P2CONST(Dcm_Data150ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_PIMDID_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_PIMDID_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_PIMDID_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data10ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_PIMDID_Read_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_PIMDID_Read_WriteData(P2CONST(Dcm_Data10ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Vishnu_DID_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Vishnu_DID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Vishnu_DID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Vishnu_DID_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) DataLength); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Vishnu_DID_WriteData(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) DataServices_Data_Vishnu_DID_WriteData(P2CONST(Dcm_Data8ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
FUNC(void, RT_Vishnu_CODE) RT_Block_Test(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, RT_Vishnu_CODE) RT_Vishnu_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, RT_Vishnu_CODE) RT_Vishnu_Main(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataArrayType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_ResDataType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) SecurityAccess_Unlock_L1_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) SecurityAccess_Unlock_L1_CompareKey(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif
# ifndef RTE_PTR2ARRAYTYPE_PASSING
FUNC(Std_ReturnType, RT_Vishnu_CODE) SecurityAccess_Unlock_L1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# else
FUNC(Std_ReturnType, RT_Vishnu_CODE) SecurityAccess_Unlock_L1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_RT_VISHNU_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
# endif

# define RT_Vishnu_STOP_SEC_CODE
# include "RT_Vishnu_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_CSDataServices_DID_0xF404_Calculate_Load_Value_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xF405_Engine_Coolent_temperature_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xF40C_Engine_RPM_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xF40D_Vehicle_Speed_Sensor_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xF41F_Time_Since_Engin_Start_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xF442_Controle_Module_Voltage_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xF449_Accelerator_Pedal_Position_D_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_Data_StandardDTCInformation_Param_DTCPrior_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_Data_StandardFreezeFrame1_Param_AgingCount_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_Data_StandardFreezeFrame1_Param_KmMilea_1_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_Data_StandardFreezeFrame1_Param_Reser_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_Data_StandardFreezeFrame1_Param_TimeStamp_STRUC_Bitfi_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_Data_SupplementalMonitorActivityData_Param_MonitActivNumerCount_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_Data_SupplementalMonitorActivityData_Param_StoreMonitActivRatio_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_Data_Vishnu_ExtData_Param_VishnDOB_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_Data_Vishnu_ExtData_Param_VishnRes_E_NOT_OK (1U)

#  define RTE_E_CddNpmGen2_K15State_E_NOT_OK (1U)

#  define RTE_E_ComM_UserRequest_E_MODE_LIMITATION (2U)

#  define RTE_E_ComM_UserRequest_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_CanTPData_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_CanTPData_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_PIMDID_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_PIMDID_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_TABROW_VWECUHardwNumbe_Read_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_TABROW_VWECUHardwNumbe_Read_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Vishnu_DID_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Vishnu_DID_E_NOT_OK (1U)

#  define RTE_E_DiagnosticMonitor_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

#  define RTE_E_OperationCycle_E_NOT_OK (1U)

#  define RTE_E_OperationCycle_E_OK (0U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_Unlock_L1_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_Unlock_L1_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_Unlock_L1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_RT_VISHNU_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_0786:  MISRA rule: Rule5.5
     Reason:     Same macro and idintifier names in first 63 characters are required to meet AUTOSAR spec.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3449:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
