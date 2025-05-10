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
 *             File:  Rte_RT_Generic_SWC.h
 *           Config:  StartApplication.dpa
 *        SW-C Type:  RT_Generic_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2300382
 *
 *      Description:  Application header file for SW-C <RT_Generic_SWC> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_RT_GENERIC_SWC_H
# define RTE_RT_GENERIC_SWC_H

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

# include "Rte_RT_Generic_SWC_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_RT_Generic_SWC
{
  /* Data Handles section */
  P2VAR(Rte_DE_Ascc_Esdd_St_Req_Struct, TYPEDEF, RTE_RT_GENERIC_SWC_APPL_VAR) RT_Generic_SWC_Main_Ascc_Esdd_St_Req_Ascc_Esdd_St_Req;
  /* Vendor specific section */
};
typedef struct Rte_CDS_RT_Generic_SWC Rte_CDS_RT_Generic_SWC;

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONSTP2CONST(struct Rte_CDS_RT_Generic_SWC, RTE_CONST, RTE_CONST) Rte_Inst_RT_Generic_SWC;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

typedef RTE_INSTANCECONSTP2CONST(struct Rte_CDS_RT_Generic_SWC, TYPEDEF, RTE_CONST) Rte_Instance; /* PRQA S 1507 */ /* MD_Rte_1507 */


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_General_General (5U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Generic_SWC_Esdd_Ascc_St_Fb_Esdd_Ascc_St_Fb(P2VAR(Esdd_Ascc_St_Fb_Struct, AUTOMATIC, RTE_RT_GENERIC_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RT_Generic_SWC_Esdd_Sply_Data_Esdd_Sply_Data(P2VAR(Esdd_Sply_Data_Struct, AUTOMATIC, RTE_RT_GENERIC_SWC_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_RT_Generic_SWC_Bsw_ProgrammingReq_Bsw_ProgrammingReq(P2CONST(Bsw_ProgrammingReq_Struct, AUTOMATIC, RTE_RT_GENERIC_SWC_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_RT_Generic_SWC_General_General(General_imp data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(uint8, RTE_CODE) Rte_Mode_RT_Generic_SWC_DcmEcuReset_DcmEcuReset(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_RT_Generic_SWC_IF_ECU_Perform_Reset_Indication_IF_ECU_Perform_Reset_Indication(uint8 nextMode);

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IFeedback_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/


# define Rte_IRead_RT_Generic_SWC_Main_Ascc_Esdd_St_Req_Ascc_Esdd_St_Req() \
  (&Rte_Inst_RT_Generic_SWC->RT_Generic_SWC_Main_Ascc_Esdd_St_Req_Ascc_Esdd_St_Req->value)


/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_Esdd_Ascc_St_Fb_Esdd_Ascc_St_Fb Rte_Read_RT_Generic_SWC_Esdd_Ascc_St_Fb_Esdd_Ascc_St_Fb
# define Rte_Read_Esdd_Sply_Data_Esdd_Sply_Data Rte_Read_RT_Generic_SWC_Esdd_Sply_Data_Esdd_Sply_Data


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_Bsw_ProgrammingReq_Bsw_ProgrammingReq Rte_Write_RT_Generic_SWC_Bsw_ProgrammingReq_Bsw_ProgrammingReq
# define Rte_Write_General_General Rte_Write_RT_Generic_SWC_General_General


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_DcmEcuReset_DcmEcuReset Rte_Mode_RT_Generic_SWC_DcmEcuReset_DcmEcuReset


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Switch_IF_ECU_Perform_Reset_Indication_IF_ECU_Perform_Reset_Indication Rte_Switch_RT_Generic_SWC_IF_ECU_Perform_Reset_Indication_IF_ECU_Perform_Reset_Indication




# define RT_Generic_SWC_START_SEC_CODE
# include "RT_Generic_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RT_Generic_SWC_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RT_Generic_SWC_Init RT_Generic_SWC_Init
FUNC(void, RT_Generic_SWC_CODE) RT_Generic_SWC_Init(void);

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

# define RTE_RUNNABLE_RT_Generic_SWC_Main RT_Generic_SWC_Main
FUNC(void, RT_Generic_SWC_CODE) RT_Generic_SWC_Main(void);

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

# define RTE_RUNNABLE_RT_Idle_Task RT_Idle_Task
FUNC(void, RT_Generic_SWC_CODE) RT_Idle_Task(void);

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

# define RTE_RUNNABLE_RT_Periodic_10ms RT_Periodic_10ms
FUNC(void, RT_Generic_SWC_CODE) RT_Periodic_10ms(void);

# define RT_Generic_SWC_STOP_SEC_CODE
# include "RT_Generic_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_RT_GENERIC_SWC_H */

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

   MD_Rte_1507:  MISRA rule: Rule5.6
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3449:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
