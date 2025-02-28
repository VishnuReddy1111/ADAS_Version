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
 *             File:  E2EXf_LCfg.h
 *           Config:  CBD2100170.dpa
 *      ECU-Project:  CBD2100170
 *
 *        Generator:  MICROSAR E2EXf Generator Version 1.13.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2100170
 *
 *      Description:  MICROSAR E2EXf header file for link-time variant
 *********************************************************************************************************************/

/* double include prevention */
#ifndef E2EXF_LCFG_H
# define E2EXF_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

# include "SchM_E2EXf_Type.h"

# include "E2E_P02.h"
# include "E2E_P05.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Version identification */
# define E2EXF_CFG_MAJOR_VERSION   (0x01U)
# define E2EXF_CFG_MINOR_VERSION   (0x0dU)

# define E2EXF_VERSION_INFO_API    (STD_OFF)

# define E2EXF_DEV_ERROR_DETECT    (STD_ON)
# define E2EXF_DEV_ERROR_REPORT    (STD_ON)

# define E2EXF_P01_ENABLED         (STD_OFF)
# define E2EXF_P02_ENABLED         (STD_ON)
# define E2EXF_P04_ENABLED         (STD_OFF)
# define E2EXF_P05_ENABLED         (STD_ON)
# define E2EXF_P06_ENABLED         (STD_OFF)
# define E2EXF_P07_ENABLED         (STD_OFF)
# define E2EXF_P08_ENABLED         (STD_OFF)
# define E2EXF_P11_ENABLED         (STD_OFF)
# define E2EXF_P44_ENABLED         (STD_OFF)

# define E2EXF_OUTOFPLACE_ENABLED  (STD_OFF)

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

#ifndef E2EXF_DUMMY_STATEMENT
# define E2EXF_DUMMY_STATEMENT(v) (v)=(v)
#endif
#ifndef E2EXF_DUMMY_STATEMENT_CONST
# define E2EXF_DUMMY_STATEMENT_CONST(v) (void)(v)
#endif

/**********************************************************************************************************************
 * E2EXf transformers
 *********************************************************************************************************************/

# define E2EXF_START_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


 /* PRQA S 0777, 0779, 0791 L2 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_E2EXf_0791 */
# define E2EXf_ComHdl_ComHdlDccb1C01_SG_DCCB1_C01_AR5(buffer, bufferLength, inputBufferLength) \
         E2EXf_P05(buffer, bufferLength, NULL_PTR, inputBufferLength, \
         &E2EXf_Options_ComHdl_ComHdlDccb1C01_SG_DCCB1_C01_AR5, \
         &E2EXf_P05Config_ComHdl_ComHdlDccb1C01_SG_DCCB1_C01_AR5, \
         &E2EXf_P05ProtectState_ComHdl_ComHdlDccb1C01_SG_DCCB1_C01_AR5)
/* PRQA L:L2 */

# define E2EXF_STOP_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


 /* PRQA S 0777, 0779, 0791 L2 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_E2EXf_0791 */
# define E2EXf_ComHdl_ComHdlDccb2C01_SG_DCCB2_C01_AR5(buffer, bufferLength, inputBufferLength) \
         E2EXf_P05(buffer, bufferLength, NULL_PTR, inputBufferLength, \
         &E2EXf_Options_ComHdl_ComHdlDccb2C01_SG_DCCB2_C01_AR5, \
         &E2EXf_P05Config_ComHdl_ComHdlDccb2C01_SG_DCCB2_C01_AR5, \
         &E2EXf_P05ProtectState_ComHdl_ComHdlDccb2C01_SG_DCCB2_C01_AR5)
/* PRQA L:L2 */

# define E2EXF_STOP_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


 /* PRQA S 0777, 0779, 0791 L2 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_E2EXf_0791 */
# define E2EXf_ComHdl_ComHdlDccbC02_SG_DCCB1_C02_AR5(buffer, bufferLength, inputBufferLength) \
         E2EXf_P05(buffer, bufferLength, NULL_PTR, inputBufferLength, \
         &E2EXf_Options_ComHdl_ComHdlDccbC02_SG_DCCB1_C02_AR5, \
         &E2EXf_P05Config_ComHdl_ComHdlDccbC02_SG_DCCB1_C02_AR5, \
         &E2EXf_P05ProtectState_ComHdl_ComHdlDccbC02_SG_DCCB1_C02_AR5)
/* PRQA L:L2 */

# define E2EXF_STOP_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


 /* PRQA S 0777, 0779, 0791 L2 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_E2EXf_0791 */
# define E2EXf_ComHdl_ComHdlEptoC01_SG_EPTOce_C01_AR5(buffer, bufferLength, inputBufferLength) \
         E2EXf_P05(buffer, bufferLength, NULL_PTR, inputBufferLength, \
         &E2EXf_Options_ComHdl_ComHdlEptoC01_SG_EPTOce_C01_AR5, \
         &E2EXf_P05Config_ComHdl_ComHdlEptoC01_SG_EPTOce_C01_AR5, \
         &E2EXf_P05ProtectState_ComHdl_ComHdlEptoC01_SG_EPTOce_C01_AR5)
/* PRQA L:L2 */

# define E2EXF_STOP_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


 /* PRQA S 0777, 0779, 0791 L2 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_E2EXf_0791 */
# define E2EXf_ComHdl_ComHdlEptoC02_SG_EPTOce_C02_AR5(buffer, bufferLength, inputBufferLength) \
         E2EXf_P05(buffer, bufferLength, NULL_PTR, inputBufferLength, \
         &E2EXf_Options_ComHdl_ComHdlEptoC02_SG_EPTOce_C02_AR5, \
         &E2EXf_P05Config_ComHdl_ComHdlEptoC02_SG_EPTOce_C02_AR5, \
         &E2EXf_P05ProtectState_ComHdl_ComHdlEptoC02_SG_EPTOce_C02_AR5)
/* PRQA L:L2 */

# define E2EXF_STOP_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


 /* PRQA S 0777, 0779, 0791 L2 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_E2EXf_0791 */
# define E2EXf_ComHdl_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2(buffer, bufferLength, inputBufferLength) \
         E2EXf_P02(buffer, bufferLength, NULL_PTR, inputBufferLength, \
         &E2EXf_Options_ComHdl_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2, \
         &E2EXf_P02Config_ComHdl_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2, \
         &E2EXf_P02ProtectState_ComHdl_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2)
/* PRQA L:L2 */

# define E2EXF_STOP_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * E2EXf retransformers
 *********************************************************************************************************************/

# define E2EXF_START_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


 /* PRQA S 0777, 0779, 0791 L2 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_E2EXf_0791 */
# define E2EXf_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5(buffer, bufferLength, inputBufferLength) \
         E2EXf_P05_Inv(buffer, bufferLength, NULL_PTR, inputBufferLength, \
         &E2EXf_Options_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5, \
         &E2EXf_P05Config_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5, \
         &E2EXf_P05CheckState_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5, \
         &E2EXf_SMConfig_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5, \
         &E2EXf_SMCheckState_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5)
/* PRQA L:L2 */

# define E2EXF_STOP_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


 /* PRQA S 0777, 0779, 0791 L2 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_E2EXf_0791 */
# define E2EXf_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5(buffer, bufferLength, inputBufferLength) \
         E2EXf_P05_Inv(buffer, bufferLength, NULL_PTR, inputBufferLength, \
         &E2EXf_Options_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5, \
         &E2EXf_P05Config_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5, \
         &E2EXf_P05CheckState_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5, \
         &E2EXf_SMConfig_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5, \
         &E2EXf_SMCheckState_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5)
/* PRQA L:L2 */

# define E2EXF_STOP_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


 /* PRQA S 0777, 0779, 0791 L2 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_E2EXf_0791 */
# define E2EXf_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5(buffer, bufferLength, inputBufferLength) \
         E2EXf_P05_Inv(buffer, bufferLength, NULL_PTR, inputBufferLength, \
         &E2EXf_Options_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5, \
         &E2EXf_P05Config_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5, \
         &E2EXf_P05CheckState_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5, \
         &E2EXf_SMConfig_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5, \
         &E2EXf_SMCheckState_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5)
/* PRQA L:L2 */

# define E2EXF_STOP_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


 /* PRQA S 0777, 0779, 0791 L2 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_E2EXf_0791 */
# define E2EXf_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5(buffer, bufferLength, inputBufferLength) \
         E2EXf_P05_Inv(buffer, bufferLength, NULL_PTR, inputBufferLength, \
         &E2EXf_Options_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5, \
         &E2EXf_P05Config_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5, \
         &E2EXf_P05CheckState_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5, \
         &E2EXf_SMConfig_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5, \
         &E2EXf_SMCheckState_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5)
/* PRQA L:L2 */

# define E2EXF_STOP_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


 /* PRQA S 0777, 0779, 0791 L2 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_E2EXf_0791 */
# define E2EXf_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5(buffer, bufferLength, inputBufferLength) \
         E2EXf_P05_Inv(buffer, bufferLength, NULL_PTR, inputBufferLength, \
         &E2EXf_Options_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5, \
         &E2EXf_P05Config_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5, \
         &E2EXf_P05CheckState_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5, \
         &E2EXf_SMConfig_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5, \
         &E2EXf_SMCheckState_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5)
/* PRQA L:L2 */

# define E2EXF_STOP_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


 /* PRQA S 0777, 0779, 0791 L2 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_E2EXf_0791 */
# define E2EXf_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5(buffer, bufferLength, inputBufferLength) \
         E2EXf_P05_Inv(buffer, bufferLength, NULL_PTR, inputBufferLength, \
         &E2EXf_Options_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5, \
         &E2EXf_P05Config_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5, \
         &E2EXf_P05CheckState_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5, \
         &E2EXf_SMConfig_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5, \
         &E2EXf_SMCheckState_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5)
/* PRQA L:L2 */

# define E2EXF_STOP_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


 /* PRQA S 0777, 0779, 0791 L2 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_E2EXf_0791 */
# define E2EXf_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5(buffer, bufferLength, inputBufferLength) \
         E2EXf_P05_Inv(buffer, bufferLength, NULL_PTR, inputBufferLength, \
         &E2EXf_Options_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5, \
         &E2EXf_P05Config_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5, \
         &E2EXf_P05CheckState_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5, \
         &E2EXf_SMConfig_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5, \
         &E2EXf_SMCheckState_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5)
/* PRQA L:L2 */

# define E2EXF_STOP_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef struct {
    boolean inPlace;
    boolean executeDespiteDataUnavailability;
    boolean profileBehavior;
    boolean disableEndToEndCheck;
    uint32 headerLength;
    uint32 upperHeaderBitsToShift;
} E2EXf_OptionsType;

typedef struct
{
    /* postbuild not yet supported */
    uint8 E2EXf_dummy;
} E2EXf_ConfigType;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

# define E2EXF_START_SEC_CONST_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONST(E2EXf_OptionsType, E2EXF_CONST) E2EXf_Options_ComHdl_ComHdlDccb1C01_SG_DCCB1_C01_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2EXf_OptionsType, E2EXF_CONST) E2EXf_Options_ComHdl_ComHdlDccb2C01_SG_DCCB2_C01_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2EXf_OptionsType, E2EXF_CONST) E2EXf_Options_ComHdl_ComHdlDccbC02_SG_DCCB1_C02_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2EXf_OptionsType, E2EXF_CONST) E2EXf_Options_ComHdl_ComHdlEptoC01_SG_EPTOce_C01_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2EXf_OptionsType, E2EXF_CONST) E2EXf_Options_ComHdl_ComHdlEptoC02_SG_EPTOce_C02_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2EXf_OptionsType, E2EXF_CONST) E2EXf_Options_ComHdl_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2EXf_OptionsType, E2EXF_CONST) E2EXf_Options_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2EXf_OptionsType, E2EXF_CONST) E2EXf_Options_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2EXf_OptionsType, E2EXF_CONST) E2EXf_Options_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2EXf_OptionsType, E2EXF_CONST) E2EXf_Options_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2EXf_OptionsType, E2EXF_CONST) E2EXf_Options_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2EXf_OptionsType, E2EXF_CONST) E2EXf_Options_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2EXf_OptionsType, E2EXF_CONST) E2EXf_Options_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_P05ConfigType, E2EXF_CONST) E2EXf_P05Config_ComHdl_ComHdlDccb1C01_SG_DCCB1_C01_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_P05ConfigType, E2EXF_CONST) E2EXf_P05Config_ComHdl_ComHdlDccb2C01_SG_DCCB2_C01_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_P05ConfigType, E2EXF_CONST) E2EXf_P05Config_ComHdl_ComHdlDccbC02_SG_DCCB1_C02_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_P05ConfigType, E2EXF_CONST) E2EXf_P05Config_ComHdl_ComHdlEptoC01_SG_EPTOce_C01_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_P05ConfigType, E2EXF_CONST) E2EXf_P05Config_ComHdl_ComHdlEptoC02_SG_EPTOce_C02_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_P02ConfigType, E2EXF_CONST) E2EXf_P02Config_ComHdl_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_P05ConfigType, E2EXF_CONST) E2EXf_P05Config_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_P05ConfigType, E2EXF_CONST) E2EXf_P05Config_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_P05ConfigType, E2EXF_CONST) E2EXf_P05Config_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_P05ConfigType, E2EXF_CONST) E2EXf_P05Config_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_P05ConfigType, E2EXF_CONST) E2EXf_P05Config_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_P05ConfigType, E2EXF_CONST) E2EXf_P05Config_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_P05ConfigType, E2EXF_CONST) E2EXf_P05Config_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_CONST_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
extern VAR(E2E_P05ProtectStateType, E2EXF_VAR_NOINIT) E2EXf_P05ProtectState_ComHdl_ComHdlDccb1C01_SG_DCCB1_C01_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
extern VAR(E2E_P05ProtectStateType, E2EXF_VAR_NOINIT) E2EXf_P05ProtectState_ComHdl_ComHdlDccb2C01_SG_DCCB2_C01_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
extern VAR(E2E_P05ProtectStateType, E2EXF_VAR_NOINIT) E2EXf_P05ProtectState_ComHdl_ComHdlDccbC02_SG_DCCB1_C02_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
extern VAR(E2E_P05ProtectStateType, E2EXF_VAR_NOINIT) E2EXf_P05ProtectState_ComHdl_ComHdlEptoC01_SG_EPTOce_C01_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
extern VAR(E2E_P05ProtectStateType, E2EXF_VAR_NOINIT) E2EXf_P05ProtectState_ComHdl_ComHdlEptoC02_SG_EPTOce_C02_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
extern VAR(E2E_P02ProtectStateType, E2EXF_VAR_NOINIT) E2EXf_P02ProtectState_ComHdl_ComHdlGPM1H1XMC_signalGrp_GPM1H1_XMC_AR2; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
extern VAR(E2E_P05CheckStateType, E2EXF_VAR_NOINIT) E2EXf_P05CheckState_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
extern VAR(E2E_P05CheckStateType, E2EXF_VAR_NOINIT) E2EXf_P05CheckState_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
extern VAR(E2E_P05CheckStateType, E2EXF_VAR_NOINIT) E2EXf_P05CheckState_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
extern VAR(E2E_P05CheckStateType, E2EXF_VAR_NOINIT) E2EXf_P05CheckState_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
extern VAR(E2E_P05CheckStateType, E2EXF_VAR_NOINIT) E2EXf_P05CheckState_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
extern VAR(E2E_P05CheckStateType, E2EXF_VAR_NOINIT) E2EXf_P05CheckState_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
extern VAR(E2E_P05CheckStateType, E2EXF_VAR_NOINIT) E2EXf_P05CheckState_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_CONST_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONST(E2E_SMConfigType, E2EXF_CONST) E2EXf_SMConfig_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_SMConfigType, E2EXF_CONST) E2EXf_SMConfig_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_SMConfigType, E2EXF_CONST) E2EXf_SMConfig_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_SMConfigType, E2EXF_CONST) E2EXf_SMConfig_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_SMConfigType, E2EXF_CONST) E2EXf_SMConfig_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_SMConfigType, E2EXF_CONST) E2EXf_SMConfig_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern CONST(E2E_SMConfigType, E2EXF_CONST) E2EXf_SMConfig_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_CONST_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, E2EXF_VAR_NOINIT) E2EXf_SMProfileStatusWindow_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5[10]; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern VAR(E2E_SMCheckStateType, E2EXF_VAR_NOINIT) E2EXf_SMCheckState_Inv_ComHdl_ComHdlCPCC11_SG_CPC6_C11_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, E2EXF_VAR_NOINIT) E2EXf_SMProfileStatusWindow_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5[10]; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern VAR(E2E_SMCheckStateType, E2EXF_VAR_NOINIT) E2EXf_SMCheckState_Inv_ComHdl_ComHdlCpcC02_SG_CPC6_C02_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, E2EXF_VAR_NOINIT) E2EXf_SMProfileStatusWindow_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5[10]; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern VAR(E2E_SMCheckStateType, E2EXF_VAR_NOINIT) E2EXf_SMCheckState_Inv_ComHdl_ComHdlCpcC05_SG_CPC6_C05_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, E2EXF_VAR_NOINIT) E2EXf_SMProfileStatusWindow_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5[10]; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern VAR(E2E_SMCheckStateType, E2EXF_VAR_NOINIT) E2EXf_SMCheckState_Inv_ComHdl_ComHdlCpcC06_SG_CPC6_C06_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, E2EXF_VAR_NOINIT) E2EXf_SMProfileStatusWindow_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5[10]; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern VAR(E2E_SMCheckStateType, E2EXF_VAR_NOINIT) E2EXf_SMCheckState_Inv_ComHdl_ComHdlCpcC16_SG_CPC6_C16_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, E2EXF_VAR_NOINIT) E2EXf_SMProfileStatusWindow_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5[10]; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern VAR(E2E_SMCheckStateType, E2EXF_VAR_NOINIT) E2EXf_SMCheckState_Inv_ComHdl_ComHdlCpcC22_SG_CPC6_C22_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define E2EXF_START_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, E2EXF_VAR_NOINIT) E2EXf_SMProfileStatusWindow_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5[10]; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

extern VAR(E2E_SMCheckStateType, E2EXF_VAR_NOINIT) E2EXf_SMCheckState_Inv_ComHdl_ComHdlEvccC01_SG_EVCC1_C01_AR5; /* PRQA S 0777, 0779 */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

# define E2EXF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define E2EXF_START_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  E2EXf_Init_Calls
 *********************************************************************************************************************/
/*! \brief       State structures initialization function
 *  \details     This function initializes all state structures managed by E2EXf.
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(void, E2EXF_CODE) E2EXf_Init_Calls(void);

# define E2EXF_STOP_SEC_CODE
# include "E2EXf_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#endif /* E2EXF_LCFG_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_E2EXf_0791:  MISRA rule: -
     Reason:       Transformer names are derived from the configuration.
     Risk:         No functional risk.
     Prevention:   Not required.

*/
