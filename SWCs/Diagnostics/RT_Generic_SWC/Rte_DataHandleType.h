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
 *             File:  Rte_DataHandleType.h
 *           Config:  StartApplication.dpa
 *        SW-C Type:  RT_Generic_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.31.0
 *                    RTE Core Version 4.31.0
 *          License:  CBD2300382
 *
 *      Description:  Header file containing Data Handle type declarations for component data structures (ContractPhase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_DATA_HANDLE_TYPE_H
# define RTE_DATA_HANDLE_TYPE_H


/**********************************************************************************************************************
 * Type definitions for implicit access to S/R communication
 *********************************************************************************************************************/
/* Types for Data Handles section */

 /* PRQA S 1039 L1 */ /* MD_Rte_1039 */
typedef struct
{
  Ascc_Esdd_St_Req_Struct value;
} Rte_DE_Ascc_Esdd_St_Req_Struct;
/* PRQA L:L1 */

#endif /* RTE_DATA_HANDLE_TYPE_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1039:  MISRA rule: Rule1.2
     Reason:     Same macro and function names are required to meet AUTOSAR spec.
     Risk:       No functional risk. Macro will be undefined before function definition.
     Prevention: Not required.

*/
