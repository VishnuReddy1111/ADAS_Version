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
 *            Module: Rtm
 *           Program: MSR_Vector_SLP4
 *          Customer: AUTOSAR 4 Evaluation Bundle
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397XA B-Step
 *    License Scope : The usage is restricted to CBD2201090_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Rtm_Cbk.h
 *   Generation Time: 2024-08-14 14:30:09
 *           Project: ADAS - Version 1.0
 *          Delivery: CBD2201090_D00
 *      Tool Version: DaVinci Configurator Classic (beta) 5.26.35 SP2
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

#if !defined(RTM_CBK_H)
#define RTM_CBK_H

#include "Platform_Types.h"
#include "Rtm_Types.h"

typedef uint32 Rtm_TimestampType;

typedef struct
{
  uint32        prevActive;        /* Previously active measurement */
  uint32        intermediateTime;  /* Time of interruption */
  uint32        threadContext;     /* The context in which the MP is running. */
} Rtm_MeasurementPointInfoType;

typedef struct
{
  const boolean interruptsDisabled; /* Defines if interrupts are disabled during MP execution. */
  const uint8   measurementType;
  const uint8   mpType;
  const uint16  coreId;             /* Assigned Core ID */
} Rtm_MeasurementPointConfigType;


#define RTM_START_SEC_CODE
#include "Rtm_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

Rtm_TimestampType Rtm_GetTimeMeasurement(void); 



#define RTM_STOP_SEC_CODE
#include "Rtm_MemMap.h" /* PRQA S 5087 */  /* MD_MSR_MemMap */

#endif /* RTM_CBK_H */


