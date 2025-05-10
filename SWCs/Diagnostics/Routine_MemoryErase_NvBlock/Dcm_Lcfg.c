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
 *            Module: Dcm
 *           Program: MSR_Vector_SLP4
 *          Customer: AUTOSAR 4 Evaluation Bundle
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397XA B-Step
 *    License Scope : The usage is restricted to CBD2201090_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dcm_Lcfg.c
 *   Generation Time: 2024-10-21 17:04:05
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



#define DCM_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
                                                                                                                                                     /* PRQA S 1533 EOF */ /* MD_Dcm_ObjectOnlyAccessedOnce */
#include "Dcm.h"
#include "Rte_Dcm.h"
#include "Det.h"
#include "Dcm_Int.h"
#include "PduR_Dcm.h"
#include "ComM_Dcm.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/
#if (DCM_DIDMGR_NVM_READ_ENABLED == STD_ON) || \
    (DCM_DIDMGR_NVM_WRITE_ENABLED == STD_ON)
# if defined(NVM_VENDOR_ID)
#  if (NVM_VENDOR_ID == 30u)
/* Only Vector NvM supports this feature up to now */
#   define Dcm_GetDcmNvMBlockId(blockId)                             (uint16)(NvM_GetDcmBlockId(blockId))                                            /* PRQA S 3453 */ /* QAC 7.0:  A function could probably be used instead of this function-like macro */ /* Macro is more efficient! */
#  endif
# endif

/* Default NvM handle offset */
# if !defined(Dcm_GetDcmNvMBlockId)
#  define Dcm_GetDcmNvMBlockId(blockId)                              (uint16)(blockId)                                                               /* PRQA S 3453 */ /* QAC 7.0:  A function could probably be used instead of this function-like macro */ /* Macro is more efficient! */
# endif
#endif

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION DECLARATIONS
 *********************************************************************************************************************/
#define DCM_START_SEC_CODE
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */
/***********************************************************************************************************************
 *  Dcm_ModeRuleDefaultModeRule()
***********************************************************************************************************************/
/*! \brief         Evaluates a specific mode rule
 *  \details       Evaluates a specific mode rule consisting of one or multiple mode conditions and/or other mode rules.
 *  \param[in]     nrc    Negative response code
 *  \return        TRUE   The condition is fulfilled
 *  \return        FALSE  The condition is not fulfilled
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleDefaultModeRule(Dcm_Ptr2LocalU8Type nrc);
/***********************************************************************************************************************
 *  Dcm_ModeRuleExtendedSFDRole()
***********************************************************************************************************************/
/*! \brief         Evaluates a specific mode rule
 *  \details       Evaluates a specific mode rule consisting of one or multiple mode conditions and/or other mode rules.
 *  \param[in]     nrc    Negative response code
 *  \return        TRUE   The condition is fulfilled
 *  \return        FALSE  The condition is not fulfilled
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleExtendedSFDRole(Dcm_Ptr2LocalU8Type nrc);
/***********************************************************************************************************************
 *  Dcm_ModeRuleEptiSFDRole()
***********************************************************************************************************************/
/*! \brief         Evaluates a specific mode rule
 *  \details       Evaluates a specific mode rule consisting of one or multiple mode conditions and/or other mode rules.
 *  \param[in]     nrc    Negative response code
 *  \return        TRUE   The condition is fulfilled
 *  \return        FALSE  The condition is not fulfilled
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleEptiSFDRole(Dcm_Ptr2LocalU8Type nrc);
/***********************************************************************************************************************
 *  Dcm_ModeRuleE2eSFDMode()
***********************************************************************************************************************/
/*! \brief         Evaluates a specific mode rule
 *  \details       Evaluates a specific mode rule consisting of one or multiple mode conditions and/or other mode rules.
 *  \param[in]     nrc    Negative response code
 *  \return        TRUE   The condition is fulfilled
 *  \return        FALSE  The condition is not fulfilled
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleE2eSFDMode(Dcm_Ptr2LocalU8Type nrc);
/***********************************************************************************************************************
 *  Dcm_ModeRuleOtaSFDRole()
***********************************************************************************************************************/
/*! \brief         Evaluates a specific mode rule
 *  \details       Evaluates a specific mode rule consisting of one or multiple mode conditions and/or other mode rules.
 *  \param[in]     nrc    Negative response code
 *  \return        TRUE   The condition is fulfilled
 *  \return        FALSE  The condition is not fulfilled
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleOtaSFDRole(Dcm_Ptr2LocalU8Type nrc);
/***********************************************************************************************************************
 *  Dcm_ModeRuleSuperUserSFDRole()
***********************************************************************************************************************/
/*! \brief         Evaluates a specific mode rule
 *  \details       Evaluates a specific mode rule consisting of one or multiple mode conditions and/or other mode rules.
 *  \param[in]     nrc    Negative response code
 *  \return        TRUE   The condition is fulfilled
 *  \return        FALSE  The condition is not fulfilled
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleSuperUserSFDRole(Dcm_Ptr2LocalU8Type nrc);
/***********************************************************************************************************************
 *  Dcm_ModeRuleBasicSFDRole()
***********************************************************************************************************************/
/*! \brief         Evaluates a specific mode rule
 *  \details       Evaluates a specific mode rule consisting of one or multiple mode conditions and/or other mode rules.
 *  \param[in]     nrc    Negative response code
 *  \return        TRUE   The condition is fulfilled
 *  \return        FALSE  The condition is not fulfilled
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleBasicSFDRole(Dcm_Ptr2LocalU8Type nrc);
/***********************************************************************************************************************
 *  Dcm_ModeRuleProductionSFDRole()
***********************************************************************************************************************/
/*! \brief         Evaluates a specific mode rule
 *  \details       Evaluates a specific mode rule consisting of one or multiple mode conditions and/or other mode rules.
 *  \param[in]     nrc    Negative response code
 *  \return        TRUE   The condition is fulfilled
 *  \return        FALSE  The condition is not fulfilled
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleProductionSFDRole(Dcm_Ptr2LocalU8Type nrc);
/***********************************************************************************************************************
 *  Dcm_ModeCondGet_Dcm_Read_ExtendedSFDRole_ExtendedSFD()
***********************************************************************************************************************/
/*! \brief         Reads the currently active mode of a specific mode declaration group.
 *  \details       -
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Rte_ModeType_ExtendedSFD, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_ExtendedSFDRole_ExtendedSFD(void);
/***********************************************************************************************************************
 *  Dcm_ModeCondGet_Dcm_Read_EptiSFDRole_EptiSFD()
***********************************************************************************************************************/
/*! \brief         Reads the currently active mode of a specific mode declaration group.
 *  \details       -
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Rte_ModeType_EptiSFD, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_EptiSFDRole_EptiSFD(void);
/***********************************************************************************************************************
 *  Dcm_ModeCondGet_Dcm_Read_E2eSFDRole_E2eSFD()
***********************************************************************************************************************/
/*! \brief         Reads the currently active mode of a specific mode declaration group.
 *  \details       -
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Rte_ModeType_E2eSFD, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_E2eSFDRole_E2eSFD(void);
/***********************************************************************************************************************
 *  Dcm_ModeCondGet_Dcm_Read_OtaSFDRole_OtaSFD()
***********************************************************************************************************************/
/*! \brief         Reads the currently active mode of a specific mode declaration group.
 *  \details       -
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Rte_ModeType_OtaSFD, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_OtaSFDRole_OtaSFD(void);
/***********************************************************************************************************************
 *  Dcm_ModeCondGet_Dcm_Read_SuperUserSFDRole_SuperUserSFD()
***********************************************************************************************************************/
/*! \brief         Reads the currently active mode of a specific mode declaration group.
 *  \details       -
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Rte_ModeType_SuperUserSFD, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_SuperUserSFDRole_SuperUserSFD(void);
/***********************************************************************************************************************
 *  Dcm_ModeCondGet_Dcm_Read_BasicSFDRole_BasicSFD()
***********************************************************************************************************************/
/*! \brief         Reads the currently active mode of a specific mode declaration group.
 *  \details       -
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Rte_ModeType_BasicSFD, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_BasicSFDRole_BasicSFD(void);
/***********************************************************************************************************************
 *  Dcm_ModeCondGet_Dcm_Read_ProductionSFDRole_ProductionSFD()
***********************************************************************************************************************/
/*! \brief         Reads the currently active mode of a specific mode declaration group.
 *  \details       -
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
DCM_LOCAL FUNC(Rte_ModeType_ProductionSFD, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_ProductionSFDRole_ProductionSFD(void);
#define DCM_STOP_SEC_CODE
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */
/***********************************************************************************************************************
 *  Dcm_DidMgr_F400_ReadData()
 ***********************************************************************************************************************/
/*! \brief         Wraps OBD availability DIDs execution interface.
 *  \details       -
 *  \param[in,out] pDataContext  Pointer to the data context
 *  \return        E_OK          The operation is finished
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_F400_ReadData(
  Dcm_DiagDataContextPtrType pDataContext
  );
/***********************************************************************************************************************
 *  Dcm_DidMgr_F420_ReadData()
 ***********************************************************************************************************************/
/*! \brief         Wraps OBD availability DIDs execution interface.
 *  \details       -
 *  \param[in,out] pDataContext  Pointer to the data context
 *  \return        E_OK          The operation is finished
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_F420_ReadData(
  Dcm_DiagDataContextPtrType pDataContext
  );
/***********************************************************************************************************************
 *  Dcm_DidMgr_F440_ReadData()
 ***********************************************************************************************************************/
/*! \brief         Wraps OBD availability DIDs execution interface.
 *  \details       -
 *  \param[in,out] pDataContext  Pointer to the data context
 *  \return        E_OK          The operation is finished
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_F440_ReadData(
  Dcm_DiagDataContextPtrType pDataContext
  );
/***********************************************************************************************************************
 *  Dcm_DidMgr_F800_ReadData()
 ***********************************************************************************************************************/
/*! \brief         Wraps OBD availability DIDs execution interface.
 *  \details       -
 *  \param[in,out] pDataContext  Pointer to the data context
 *  \return        E_OK          The operation is finished
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_F800_ReadData(
  Dcm_DiagDataContextPtrType pDataContext
  );
/***********************************************************************************************************************
 *  Dcm_RidMgr_0253_Start()
 ***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0253_Start(
  Dcm_OpStatusType OpStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_RidMgrRidLengthPtrType DataLength,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
/***********************************************************************************************************************
 *  Dcm_RidMgr_0254_Start()
 ***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0254_Start(
  Dcm_OpStatusType OpStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_RidMgrRidLengthPtrType DataLength,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
/***********************************************************************************************************************
 *  Dcm_ServiceNoPostProcessor()
 ***********************************************************************************************************************/
/*! \brief         Dummy post-processor
 *  \details       This post-processor is called for diagnostic services which do not require any post processing.
 *  \param[in]     pContext  Pointer to the context
 *  \param[in]     status    The post-processing status
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoPostProcessor(
  Dcm_ContextPtrType pContext,
  Dcm_ConfirmationStatusType status
  );
/***********************************************************************************************************************
 *  Dcm_ServiceNoUpdater()
 ***********************************************************************************************************************/
/*! \brief         Realizes a dummy paged buffer updater.
 *  \details       This function is never called.
 *  \param[in]     pContext      Pointer to the context
 *  \param[in]     opStatus      The operation status
 *  \param[in,out] pDataContext  Pointer to the data context
 *  \param[out]    ErrorCode     Negative response code
 *  \return        E_NOT_OK      Operation failed. Take the NRC from ErrorCode. Do not call again
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_ServiceNoUpdater(
  Dcm_ContextPtrType pContext,
  Dcm_OpStatusType opStatus,
  Dcm_DiagDataContextPtrType pDataContext,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
/***********************************************************************************************************************
 *  Dcm_ServiceNoCancel()
 ***********************************************************************************************************************/
/*! \brief         Dummy service cancellation.
 *  \details       -
 *  \param[in]     pContext      Pointer to the context
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoCancel(
  Dcm_ContextPtrType pContext
  );
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  LOCAL DATA DECLARATIONS
 *********************************************************************************************************************/
#define DCM_START_SEC_VAR_NO_INIT_8
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*! DCM protocol descriptor */
DCM_LOCAL VAR(Dcm_MsgItemType, DCM_VAR_NOINIT) Dcm_CfgNetBuffer_000[8195];
#define DCM_STOP_SEC_VAR_NO_INIT_8
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define DCM_START_SEC_CONST_8
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*! TxPduId to DCM connection map */
CONST(Dcm_NetConnRefMemType, DCM_CONST) Dcm_CfgNetTxPduInfo[5]=
{
    4u
  , 3u
  , 0u
  , 2u
  , 1u
};
/*! Map of DCM relevant network handles */
CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetConnComMChannelMap[1]=
{
    1u
};
/*! Service 0x28 list of channels for the all-comm-channel parameter */
CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetComCtrlChannelListAll[2]=
{
   1u
  , 0u
};
/*! Look up table of DCM service identifiers */
CONST(uint8, DCM_CONST) Dcm_CfgDiagSvcIdLookUpTable[13]=
{
   12u
  ,0x10u
  ,0x11u
  ,0x14u
  ,0x19u
  ,0x22u
  ,0x27u
  ,0x28u
  ,0x2Eu
  ,0x31u
  ,0x3Eu
  ,0x85u
  ,0x86u
};
/*! Service 0x10 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc10SubFuncLookUpTable[4]=
{
   3u
  ,0x01u
  ,0x02u
  ,0x03u
};
/*! Service 0x11 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc11SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x02u
};
/*! Service 0x19 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc19SubFuncLookUpTable[12]=
{
   11u
  ,0x01u
  ,0x02u
  ,0x03u
  ,0x04u
  ,0x06u
  ,0x0Eu
  ,0x14u
  ,0x1Au
  ,0x42u
  ,0x55u
  ,0x56u
};
/*! Service 0x27 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc27SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x02u
};
/*! Service 0x28 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28SubFuncLookUpTable[3]=
{
   2u
  ,0x00u
  ,0x01u
};
/*! Service 0x28 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28MessageTypeLookUpTable[4]=
{
   3u
  ,0x01u
  ,0x02u
  ,0x03u
};
/*! Service 0x28 network ID lookup */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28SubNetIdLookUp[3]=
{
   2u
  ,0x00u
  ,0x0Fu
};
/*! Service 0x3E look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc3ESubFuncLookUpTable[2]=
{
   1u
  ,0x00u
};
/*! Look up table of service 0x85 */
CONST(uint8, DCM_CONST) Dcm_CfgSvc85SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x02u
};
/*! Service 0x86 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc86SubFuncLookUpTable[9]=
{
   8u
  ,0x00u
  ,0x01u
  ,0x05u
  ,0x06u
  ,0x40u
  ,0x41u
  ,0x45u
  ,0x46u
};
/*! Look up table of service 0x86 EventWindowTime */
CONST(uint8, DCM_CONST) Dcm_CfgEventWindowTimeLookUpTable[2]=
{
   1u
  ,0x03u
};
#define DCM_STOP_SEC_CONST_8
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define DCM_START_SEC_CONST_16
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*! DID look up table  */
CONST(uint16, DCM_CONST) Dcm_CfgDidMgrDidLookUpTable[346]=
{
   345u
  ,0x0055u
  ,0x0102u
  ,0x0174u
  ,0x0189u
  ,0x018Au
  ,0x018Bu
  ,0x018Fu
  ,0x0190u
  ,0x0191u
  ,0x0192u
  ,0x0194u
  ,0x019Cu
  ,0x0245u
  ,0x0249u
  ,0x0250u
  ,0x0261u
  ,0x0286u
  ,0x02B3u
  ,0x02BDu
  ,0x02CAu
  ,0x02CBu
  ,0x02CEu
  ,0x02CFu
  ,0x030Bu
  ,0x030Cu
  ,0x030Du
  ,0x030Eu
  ,0x030Fu
  ,0x0314u
  ,0x0315u
  ,0x0316u
  ,0x0318u
  ,0x0319u
  ,0x031Bu
  ,0x031Cu
  ,0x031Fu
  ,0x0320u
  ,0x0321u
  ,0x0322u
  ,0x0323u
  ,0x0324u
  ,0x0325u
  ,0x0326u
  ,0x0327u
  ,0x0328u
  ,0x0329u
  ,0x032Au
  ,0x0407u
  ,0x040Fu
  ,0x0410u
  ,0x0448u
  ,0x04FCu
  ,0x04FEu
  ,0x050Cu
  ,0x050Eu
  ,0x050Fu
  ,0x0511u
  ,0x0514u
  ,0x0515u
  ,0x0516u
  ,0x054Au
  ,0x054Bu
  ,0x0563u
  ,0x0564u
  ,0x0565u
  ,0x0566u
  ,0x0567u
  ,0x0568u
  ,0x0569u
  ,0x056Au
  ,0x056Bu
  ,0x056Cu
  ,0x056Du
  ,0x056Eu
  ,0x056Fu
  ,0x0570u
  ,0x0571u
  ,0x0572u
  ,0x0573u
  ,0x0574u
  ,0x0575u
  ,0x057Au
  ,0x057Bu
  ,0x057Cu
  ,0x057Du
  ,0x057Eu
  ,0x0581u
  ,0x0582u
  ,0x0583u
  ,0x0584u
  ,0x0585u
  ,0x0586u
  ,0x0587u
  ,0x0588u
  ,0x0589u
  ,0x058Au
  ,0x058Bu
  ,0x058Cu
  ,0x058Du
  ,0x058Fu
  ,0x0590u
  ,0x0595u
  ,0x0596u
  ,0x0597u
  ,0x059Au
  ,0x059Bu
  ,0x05B1u
  ,0x05B2u
  ,0x05B3u
  ,0x05B4u
  ,0x05B5u
  ,0x05B6u
  ,0x05B7u
  ,0x05B8u
  ,0x05B9u
  ,0x05BAu
  ,0x05BBu
  ,0x05BCu
  ,0x05BDu
  ,0x05C0u
  ,0x05C6u
  ,0x05C7u
  ,0x05E3u
  ,0x0600u
  ,0x064Cu
  ,0x064Fu
  ,0x0660u
  ,0x066Du
  ,0x066Eu
  ,0x066Fu
  ,0x0670u
  ,0x0671u
  ,0x0672u
  ,0x0673u
  ,0x0674u
  ,0x0675u
  ,0x0676u
  ,0x0677u
  ,0x0678u
  ,0x0679u
  ,0x067Au
  ,0x067Bu
  ,0x067Cu
  ,0x067Du
  ,0x067Eu
  ,0x067Fu
  ,0x0680u
  ,0x0681u
  ,0x0682u
  ,0x0683u
  ,0x0684u
  ,0x0685u
  ,0x0686u
  ,0x0687u
  ,0x0688u
  ,0x0689u
  ,0x068Au
  ,0x068Bu
  ,0x0691u
  ,0x06AFu
  ,0x06B1u
  ,0x06B2u
  ,0x06B3u
  ,0x06B5u
  ,0x06B6u
  ,0x06B7u
  ,0x06B8u
  ,0x06B9u
  ,0x06BAu
  ,0x06BBu
  ,0x06BCu
  ,0x06BDu
  ,0x06BEu
  ,0x06BFu
  ,0x06C0u
  ,0x06C1u
  ,0x06C2u
  ,0x06C3u
  ,0x06C4u
  ,0x06C5u
  ,0x06C6u
  ,0x06C7u
  ,0x06C8u
  ,0x06C9u
  ,0x06CAu
  ,0x06CBu
  ,0x06CCu
  ,0x06D0u
  ,0x06D1u
  ,0x06D2u
  ,0x06D3u
  ,0x06D4u
  ,0x06D5u
  ,0x06D6u
  ,0x06D7u
  ,0x0806u
  ,0x0902u
  ,0x09F3u
  ,0x1001u
  ,0x1003u
  ,0x1010u
  ,0x1122u
  ,0x1E06u
  ,0x1E0Au
  ,0x1E0Du
  ,0x1E0Eu
  ,0x1E0Fu
  ,0x1E10u
  ,0x1E17u
  ,0x1E19u
  ,0x1E2Cu
  ,0x1E2Du
  ,0x1E33u
  ,0x1E34u
  ,0x1E3Bu
  ,0x2203u
  ,0x2216u
  ,0x2217u
  ,0x2700u
  ,0x2701u
  ,0x2702u
  ,0x2703u
  ,0x2704u
  ,0x2706u
  ,0x2707u
  ,0x2708u
  ,0x270Au
  ,0x270Bu
  ,0x270Cu
  ,0x270Du
  ,0x270Fu
  ,0x2710u
  ,0x2711u
  ,0x2712u
  ,0x2716u
  ,0x271Au
  ,0x271Bu
  ,0x271Du
  ,0x2C55u
  ,0x2C56u
  ,0x2C57u
  ,0x2C60u
  ,0x3C0Eu
  ,0x4219u
  ,0x484Eu
  ,0x50CEu
  ,0x5164u
  ,0x5170u
  ,0x5171u
  ,0xC101u
  ,0xC107u
  ,0xC10Bu
  ,0xC110u
  ,0xC111u
  ,0xE001u
  ,0xE009u
  ,0xE00Au
  ,0xE00Bu
  ,0xE00Cu
  ,0xE00Du
  ,0xE00Eu
  ,0xE010u
  ,0xE011u
  ,0xE012u
  ,0xE013u
  ,0xE014u
  ,0xE015u
  ,0xE016u
  ,0xE018u
  ,0xE019u
  ,0xE01Au
  ,0xE01Bu
  ,0xE01Cu
  ,0xE01Du
  ,0xE01Eu
  ,0xE01Fu
  ,0xE020u
  ,0xE021u
  ,0xE022u
  ,0xE030u
  ,0xE031u
  ,0xE032u
  ,0xE033u
  ,0xE034u
  ,0xE035u
  ,0xE036u
  ,0xE037u
  ,0xE038u
  ,0xE039u
  ,0xE03Au
  ,0xE03Bu
  ,0xE03Du
  ,0xEE02u
  ,0xEE03u
  ,0xF15Au
  ,0xF15Bu
  ,0xF17Cu
  ,0xF186u
  ,0xF187u
  ,0xF189u
  ,0xF18Au
  ,0xF18Cu
  ,0xF18Fu
  ,0xF190u
  ,0xF191u
  ,0xF192u
  ,0xF193u
  ,0xF194u
  ,0xF195u
  ,0xF197u
  ,0xF19Eu
  ,0xF1A0u
  ,0xF1A1u
  ,0xF1A2u
  ,0xF1A3u
  ,0xF1AAu
  ,0xF1ABu
  ,0xF1AFu
  ,0xF1B1u
  ,0xF1B3u
  ,0xF1B4u
  ,0xF1B6u
  ,0xF1D5u
  ,0xF1DFu
  ,0xF1E0u
  ,0xF1E1u
  ,0xF1E2u
  ,0xF1F2u
  ,0xF1F3u
  ,0xF400u
  ,0xF401u
  ,0xF404u
  ,0xF405u
  ,0xF40Cu
  ,0xF40Du
  ,0xF41Fu
  ,0xF420u
  ,0xF440u
  ,0xF441u
  ,0xF442u
  ,0xF449u
  ,0xF800u
  ,0xF804u
  ,0xF80Au
  ,0xFEFDu
};
/*! RID look up table  */
CONST(uint16, DCM_CONST) Dcm_CfgRidMgrRidLookUpTable[48]=
{
   47u
  ,0x0203u
  ,0x0253u
  ,0x0254u
  ,0x029Au
  ,0x0300u
  ,0x0303u
  ,0x0304u
  ,0x0307u
  ,0x0309u
  ,0x030Au
  ,0x030Bu
  ,0x030Cu
  ,0x030Fu
  ,0x0311u
  ,0x0315u
  ,0x0316u
  ,0x0318u
  ,0x0319u
  ,0x0366u
  ,0x0390u
  ,0x0399u
  ,0x03C6u
  ,0x03E7u
  ,0x0475u
  ,0x0544u
  ,0x0648u
  ,0x065Eu
  ,0x06A8u
  ,0x06A9u
  ,0x0F02u
  ,0xC004u
  ,0xC005u
  ,0xC007u
  ,0xC008u
  ,0xC009u
  ,0xC00Au
  ,0xC00Bu
  ,0xC00Cu
  ,0xC00Du
  ,0xC00Fu
  ,0xC011u
  ,0xC012u
  ,0xC013u
  ,0xC102u
  ,0xFEFEu
  ,0xFEFFu
  ,0xFF01u
};
#define DCM_STOP_SEC_CONST_16
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define DCM_START_SEC_CONST_32
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*! Service 0x22 supported ID table  */
CONST(uint32, DCM_CONST) Dcm_CfgSvc22SupportedIdMask[4]=
{
   0x98180003u /* ID: 0xF400 */
  ,0x00000001u /* ID: 0xF420 */
  ,0xC0800000u /* ID: 0xF440 */
  ,0x10400000u /* ID: 0xF800 */
};
#define DCM_STOP_SEC_CONST_32
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define DCM_START_SEC_CONST_UNSPECIFIED
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*! DCM buffer descriptor */
CONST(Dcm_CfgNetBufferInfoType, DCM_CONST) Dcm_CfgNetBufferInfo[1]=
{
   { Dcm_CfgNetBuffer_000,8195u}
};
/*! DCM protocol switch notifications */
CONST(Dcm_CfgNetProtocolNotificationInfoType, DCM_CONST) Dcm_CfgNetProtocolNotificationInfo[1]=
{
   { NULL_PTR}
};
/*! RxPduId map */
CONST(Dcm_CfgNetRxPduInfoType, DCM_CONST) Dcm_CfgNetRxPduInfo[8]=
{
   { FALSE, 4u}
  ,{ TRUE, 4u}
  ,{ FALSE, 3u}
  ,{ TRUE, 3u}
  ,{ FALSE, 0u}
  ,{ TRUE, 0u}
  ,{ FALSE, 2u}
  ,{ FALSE, 1u}
};
/*! DCM connection descriptor */
CONST(Dcm_CfgNetConnectionInfoType, DCM_CONST) Dcm_CfgNetConnectionInfo[5]=
{
   { 0x027Bu,PduRConf_PduRSrcPdu_PduRSrcPdu_b085c674, 0u,0u,0x00u,0x00u, 0u}
  ,{ 0x05F1u,PduRConf_PduRSrcPdu_PduRSrcPdu_8c8ce63b, 0u,0u,0x00u,0x00u, 0u}
  ,{ 0x007Bu,PduRConf_PduRSrcPdu_PduRSrcPdu_bb9fbbb3, 0u,0u,0x00u,0x00u, 0u}
  ,{ 0x007Bu,PduRConf_PduRSrcPdu_PduRSrcPdu_00f99798, 0u,0u,0x00u,0x00u, 0u}
  ,{ 0xFFFFu,PduRConf_PduRSrcPdu_PduRSrcPdu_80070619, 0u,0u,0x00u,0x00u, 0u}
};
/*! DCM protocol descriptor */
CONST(Dcm_CfgNetProtocolInfoType, DCM_CONST) Dcm_CfgNetProtocolInfo[1]=
{
   { {        0u,       0u},4095u, 3u, 0u,TRUE,0u,DemConf_DemClient_DemClient_DCM, 0u}
};
/*! Map of all relevant for DCM network handles */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetAllComMChannelMap[2]=
{
   ComMConf_ComMChannel_CN_BMC_CAN01_78a85e89
  ,ComMConf_ComMChannel_CN_HCP5_CANFD01_54d90215
};
/*! Look up table of DCM relevant network handles */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetNetworkHandleLookUpTable[2]=
{
   1u
  ,ComMConf_ComMChannel_CN_HCP5_CANFD01_54d90215
};
/*! Precondition mode rules */
CONST(Dcm_ModeRuleFuncType, DCM_CONST) Dcm_CfgModeMgrRules[8]=
{
   Dcm_ModeRuleDefaultModeRule
  ,Dcm_ModeRuleExtendedSFDRole
  ,Dcm_ModeRuleEptiSFDRole
  ,Dcm_ModeRuleE2eSFDMode
  ,Dcm_ModeRuleOtaSFDRole
  ,Dcm_ModeRuleSuperUserSFDRole
  ,Dcm_ModeRuleBasicSFDRole
  ,Dcm_ModeRuleProductionSFDRole
};
/*! Diagnostic service execution conditions */
CONST(Dcm_CfgStatePreconditionInfoType, DCM_CONST) Dcm_CfgStatePreconditions[5]=
{
   {    0u,{ 0x07u,0x03u}}
  ,{    0u,{ 0x06u,0x03u}}
  ,{    0u,{ 0x04u,0x03u}}
  ,{    0u,{ 0x05u,0x03u}}
  ,{    0u,{ 0x02u,0x03u}}
};
/*! Session state properties */
CONST(Dcm_CfgStateSessionInfoType, DCM_CONST) Dcm_CfgStateSessionInfo[3]=
{
   { {        5u,     500u},RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION,0x01u}
  ,{ {        5u,     500u},RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION,0x02u}
  ,{ {        5u,     500u},RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION,0x03u}
};
/*! Security Access state properties */
CONST(Dcm_CfgStateSecurityInfoType, DCM_CONST) Dcm_CfgStateSecurityInfo[1]=
{
   { 1000u,   0u,FALSE, 3u,0x01u} /* SecLvl: Unlock_L1 */
};
/*! Session state change notification(s) */
CONST(Dcm_CfgStateNotificationInfoType, DCM_CONST) Dcm_CfgStateSessionNotificationInfo[1]=
{
   { NULL_PTR}
};
/*! Security state change notification(s) */
CONST(Dcm_CfgStateNotificationInfoType, DCM_CONST) Dcm_CfgStateSecurityNotificationInfo[1]=
{
   { NULL_PTR}
};
/*! DID ranges look up */
CONST(Dcm_CfgDidMgrDidRangeType, DCM_CONST) Dcm_CfgDidMgrDidRanges[1]=
{
   {    0u,   0u}
};
/*! DID ranges to DID info map */
CONST(Dcm_CfgDidMgrDidInfoRefType, DCM_CONST) Dcm_CfgDidMgrRangeDidInfoRefs[1]=
{
   0u /* dummy initializer */
};
/*! DID properties */
CONST(Dcm_CfgDidMgrDidInfoType, DCM_CONST) Dcm_CfgDidMgrDidInfo[345]=
{
   {    2u,   2u,   2u,   0u,   0u,0x03u} /* DID: 0x0055 */
  ,{    1u,   1u,   1u,   2u,   0u,0x01u} /* DID: 0x0102 */
  ,{    4u,   4u,   4u,   3u,   0u,0x01u} /* DID: 0x0174 */
  ,{    0u,8192u,8192u,   4u,   0u,0x01u} /* DID: 0x0189 */
  ,{    0u,8192u,8192u,   5u,   0u,0x01u} /* DID: 0x018A */
  ,{    0u, 512u, 512u,   6u,   0u,0x01u} /* DID: 0x018B */
  ,{    0u, 512u, 512u,   7u,   0u,0x01u} /* DID: 0x018F */
  ,{    3u,   3u,   3u,   8u,   0u,0x01u} /* DID: 0x0190 */
  ,{   11u,  11u,  11u,   9u,   0u,0x01u} /* DID: 0x0191 */
  ,{    0u,3572u,3572u,  10u,   0u,0x01u} /* DID: 0x0192 */
  ,{    0u, 512u, 512u,  11u,   0u,0x01u} /* DID: 0x0194 */
  ,{    1u,   1u,   1u,  12u,   0u,0x01u} /* DID: 0x019C */
  ,{   32u,  32u,  32u,  13u,   0u,0x01u} /* DID: 0x0245 */
  ,{   32u,  32u,  32u,  14u,   0u,0x01u} /* DID: 0x0249 */
  ,{    0u, 502u, 502u,  15u,   0u,0x03u} /* DID: 0x0250 */
  ,{    1u,   1u,   1u,  17u,   0u,0x01u} /* DID: 0x0261 */
  ,{    1u,   1u,   1u,  18u,   0u,0x01u} /* DID: 0x0286 */
  ,{    1u,   1u,   1u,  19u,   0u,0x01u} /* DID: 0x02B3 */
  ,{    9u,   9u,   9u,  20u,   0u,0x01u} /* DID: 0x02BD */
  ,{    2u,   2u,   2u,  21u,   0u,0x03u} /* DID: 0x02CA */
  ,{    2u,   2u,   2u,  23u,   0u,0x03u} /* DID: 0x02CB */
  ,{    1u,   1u,   1u,  25u,   0u,0x01u} /* DID: 0x02CE */
  ,{    2u,   2u,   2u,  26u,   0u,0x01u} /* DID: 0x02CF */
  ,{    4u,   4u,   4u,  27u,   0u,0x01u} /* DID: 0x030B */
  ,{    2u,   2u,   2u,  28u,   0u,0x01u} /* DID: 0x030C */
  ,{    1u,   1u,   1u,  29u,   0u,0x01u} /* DID: 0x030D */
  ,{  100u, 100u, 100u,  30u,   0u,0x01u} /* DID: 0x030E */
  ,{    2u,   2u,   2u,  31u,   0u,0x01u} /* DID: 0x030F */
  ,{    2u,   2u,   2u,  32u,   0u,0x01u} /* DID: 0x0314 */
  ,{    2u,   2u,   2u,  33u,   0u,0x01u} /* DID: 0x0315 */
  ,{    1u,   1u,   1u,  34u,   0u,0x01u} /* DID: 0x0316 */
  ,{    5u,   5u,   5u,  35u,   0u,0x03u} /* DID: 0x0318 */
  ,{    2u,   2u,   2u,  37u,   0u,0x01u} /* DID: 0x0319 */
  ,{   22u,  22u,  22u,  38u,   0u,0x03u} /* DID: 0x031B */
  ,{    1u,   1u,   1u,  40u,   0u,0x01u} /* DID: 0x031C */
  ,{   11u,  11u,  11u,  41u,   0u,0x03u} /* DID: 0x031F */
  ,{   11u,  11u,  11u,  43u,   0u,0x03u} /* DID: 0x0320 */
  ,{   11u,  11u,  11u,  45u,   0u,0x03u} /* DID: 0x0321 */
  ,{    1u,   1u,   1u,  47u,   0u,0x01u} /* DID: 0x0322 */
  ,{    1u,   1u,   1u,  48u,   0u,0x01u} /* DID: 0x0323 */
  ,{   11u,  11u,  11u,  49u,   0u,0x03u} /* DID: 0x0324 */
  ,{   10u,  10u,  10u,  51u,   0u,0x03u} /* DID: 0x0325 */
  ,{   11u,  11u,  11u,  53u,   0u,0x03u} /* DID: 0x0326 */
  ,{   11u,  11u,  11u,  55u,   0u,0x03u} /* DID: 0x0327 */
  ,{    1u,   1u,   1u,  57u,   0u,0x01u} /* DID: 0x0328 */
  ,{   11u,  11u,  11u,  58u,   0u,0x03u} /* DID: 0x0329 */
  ,{   11u,  11u,  11u,  60u,   0u,0x03u} /* DID: 0x032A */
  ,{    0u,8192u,8192u,  62u,   0u,0x01u} /* DID: 0x0407 */
  ,{    0u,8192u,8192u,  63u,   0u,0x01u} /* DID: 0x040F */
  ,{    1u,   1u,   1u,  64u,   0u,0x03u} /* DID: 0x0410 */
  ,{    0u, 256u, 256u,  66u,   0u,0x01u} /* DID: 0x0448 */
  ,{    3u,   3u,   3u,  67u,   0u,0x03u} /* DID: 0x04FC */
  ,{    3u,   3u,   3u,  69u,   0u,0x03u} /* DID: 0x04FE */
  ,{    2u,   2u,   2u,  71u,   0u,0x01u} /* DID: 0x050C */
  ,{    1u,   1u,   1u,  72u,   0u,0x01u} /* DID: 0x050E */
  ,{    2u,   2u,   2u,  73u,   0u,0x01u} /* DID: 0x050F */
  ,{    1u,   1u,   1u,  74u,   0u,0x01u} /* DID: 0x0511 */
  ,{    1u,   1u,   1u,  75u,   0u,0x01u} /* DID: 0x0514 */
  ,{    1u,   1u,   1u,  76u,   0u,0x01u} /* DID: 0x0515 */
  ,{    1u,   1u,   1u,  77u,   0u,0x01u} /* DID: 0x0516 */
  ,{   48u,  48u,  48u,  78u,   0u,0x01u} /* DID: 0x054A */
  ,{    9u,   9u,   9u,  79u,   0u,0x01u} /* DID: 0x054B */
  ,{   24u,  24u,  24u,  80u,   0u,0x01u} /* DID: 0x0563 */
  ,{   24u,  24u,  24u,  81u,   0u,0x01u} /* DID: 0x0564 */
  ,{    2u,   2u,   2u,  82u,   0u,0x01u} /* DID: 0x0565 */
  ,{   64u,  64u,  64u,  83u,   0u,0x01u} /* DID: 0x0566 */
  ,{   64u,  64u,  64u,  84u,   0u,0x01u} /* DID: 0x0567 */
  ,{   64u,  64u,  64u,  85u,   0u,0x01u} /* DID: 0x0568 */
  ,{   64u,  64u,  64u,  86u,   0u,0x01u} /* DID: 0x0569 */
  ,{   64u,  64u,  64u,  87u,   0u,0x01u} /* DID: 0x056A */
  ,{   64u,  64u,  64u,  88u,   0u,0x01u} /* DID: 0x056B */
  ,{   64u,  64u,  64u,  89u,   0u,0x01u} /* DID: 0x056C */
  ,{   64u,  64u,  64u,  90u,   0u,0x01u} /* DID: 0x056D */
  ,{   64u,  64u,  64u,  91u,   0u,0x01u} /* DID: 0x056E */
  ,{   64u,  64u,  64u,  92u,   0u,0x01u} /* DID: 0x056F */
  ,{   64u,  64u,  64u,  93u,   0u,0x01u} /* DID: 0x0570 */
  ,{   64u,  64u,  64u,  94u,   0u,0x01u} /* DID: 0x0571 */
  ,{    2u,   2u,   2u,  95u,   0u,0x01u} /* DID: 0x0572 */
  ,{    2u,   2u,   2u,  96u,   0u,0x01u} /* DID: 0x0573 */
  ,{    2u,   2u,   2u,  97u,   0u,0x01u} /* DID: 0x0574 */
  ,{    1u,   1u,   1u,  98u,   0u,0x01u} /* DID: 0x0575 */
  ,{   14u,  14u,  14u,  99u,   0u,0x01u} /* DID: 0x057A */
  ,{    4u,   4u,   4u, 100u,   0u,0x01u} /* DID: 0x057B */
  ,{    1u,   1u,   1u, 101u,   0u,0x01u} /* DID: 0x057C */
  ,{    6u,   6u,   6u, 102u,   0u,0x01u} /* DID: 0x057D */
  ,{    1u,   1u,   1u, 103u,   0u,0x01u} /* DID: 0x057E */
  ,{    3u,   3u,   3u, 104u,   0u,0x01u} /* DID: 0x0581 */
  ,{    5u,   5u,   5u, 105u,   0u,0x01u} /* DID: 0x0582 */
  ,{    1u,   1u,   1u, 106u,   0u,0x01u} /* DID: 0x0583 */
  ,{    1u,   1u,   1u, 107u,   0u,0x01u} /* DID: 0x0584 */
  ,{    2u,   2u,   2u, 108u,   0u,0x01u} /* DID: 0x0585 */
  ,{    4u,   4u,   4u, 109u,   0u,0x01u} /* DID: 0x0586 */
  ,{    4u,   4u,   4u, 110u,   0u,0x01u} /* DID: 0x0587 */
  ,{    4u,   4u,   4u, 111u,   0u,0x01u} /* DID: 0x0588 */
  ,{    4u,   4u,   4u, 112u,   0u,0x01u} /* DID: 0x0589 */
  ,{    4u,   4u,   4u, 113u,   0u,0x01u} /* DID: 0x058A */
  ,{    3u,   3u,   3u, 114u,   0u,0x01u} /* DID: 0x058B */
  ,{    4u,   4u,   4u, 115u,   0u,0x01u} /* DID: 0x058C */
  ,{    3u,   3u,   3u, 116u,   0u,0x01u} /* DID: 0x058D */
  ,{    1u,   1u,   1u, 117u,   0u,0x01u} /* DID: 0x058F */
  ,{    2u,   2u,   2u, 118u,   0u,0x01u} /* DID: 0x0590 */
  ,{    2u,   2u,   2u, 119u,   0u,0x01u} /* DID: 0x0595 */
  ,{    2u,   2u,   2u, 120u,   0u,0x01u} /* DID: 0x0596 */
  ,{    1u,   1u,   1u, 121u,   0u,0x01u} /* DID: 0x0597 */
  ,{    1u,   1u,   1u, 122u,   0u,0x01u} /* DID: 0x059A */
  ,{    4u,   4u,   4u, 123u,   0u,0x01u} /* DID: 0x059B */
  ,{  152u, 152u, 152u, 124u,   0u,0x01u} /* DID: 0x05B1 */
  ,{  152u, 152u, 152u, 125u,   0u,0x01u} /* DID: 0x05B2 */
  ,{  152u, 152u, 152u, 126u,   0u,0x01u} /* DID: 0x05B3 */
  ,{  152u, 152u, 152u, 127u,   0u,0x01u} /* DID: 0x05B4 */
  ,{  152u, 152u, 152u, 128u,   0u,0x01u} /* DID: 0x05B5 */
  ,{  152u, 152u, 152u, 129u,   0u,0x01u} /* DID: 0x05B6 */
  ,{  152u, 152u, 152u, 130u,   0u,0x01u} /* DID: 0x05B7 */
  ,{  152u, 152u, 152u, 131u,   0u,0x01u} /* DID: 0x05B8 */
  ,{  152u, 152u, 152u, 132u,   0u,0x01u} /* DID: 0x05B9 */
  ,{  152u, 152u, 152u, 133u,   0u,0x01u} /* DID: 0x05BA */
  ,{  152u, 152u, 152u, 134u,   0u,0x01u} /* DID: 0x05BB */
  ,{  152u, 152u, 152u, 135u,   0u,0x01u} /* DID: 0x05BC */
  ,{    6u,   6u,   6u, 136u,   0u,0x01u} /* DID: 0x05BD */
  ,{   12u,  12u,  12u, 137u,   0u,0x01u} /* DID: 0x05C0 */
  ,{   48u,  48u,  48u, 138u,   0u,0x01u} /* DID: 0x05C6 */
  ,{  110u, 110u, 110u, 139u,   0u,0x01u} /* DID: 0x05C7 */
  ,{    1u,   1u,   1u, 140u,   0u,0x01u} /* DID: 0x05E3 */
  ,{    1u,   1u,   1u, 141u,   0u,0x03u} /* DID: 0x0600 */
  ,{    0u, 240u, 240u, 143u,   0u,0x01u} /* DID: 0x064C */
  ,{    2u,   2u,   2u, 144u,   0u,0x01u} /* DID: 0x064F */
  ,{    1u,   1u,   1u, 145u,   0u,0x01u} /* DID: 0x0660 */
  ,{    3u,   3u,   3u, 146u,   0u,0x01u} /* DID: 0x066D */
  ,{   27u,  27u,  27u, 147u,   0u,0x01u} /* DID: 0x066E */
  ,{   12u,  12u,  12u, 148u,   0u,0x01u} /* DID: 0x066F */
  ,{    1u,   1u,   1u, 149u,   0u,0x01u} /* DID: 0x0670 */
  ,{    1u,   1u,   1u, 150u,   0u,0x01u} /* DID: 0x0671 */
  ,{    1u,   1u,   1u, 151u,   0u,0x01u} /* DID: 0x0672 */
  ,{   12u,  12u,  12u, 152u,   0u,0x01u} /* DID: 0x0673 */
  ,{    2u,   2u,   2u, 153u,   0u,0x01u} /* DID: 0x0674 */
  ,{   27u,  27u,  27u, 154u,   0u,0x01u} /* DID: 0x0675 */
  ,{   27u,  27u,  27u, 155u,   0u,0x01u} /* DID: 0x0676 */
  ,{   27u,  27u,  27u, 156u,   0u,0x01u} /* DID: 0x0677 */
  ,{   27u,  27u,  27u, 157u,   0u,0x01u} /* DID: 0x0678 */
  ,{   27u,  27u,  27u, 158u,   0u,0x01u} /* DID: 0x0679 */
  ,{   27u,  27u,  27u, 159u,   0u,0x01u} /* DID: 0x067A */
  ,{   27u,  27u,  27u, 160u,   0u,0x01u} /* DID: 0x067B */
  ,{   27u,  27u,  27u, 161u,   0u,0x01u} /* DID: 0x067C */
  ,{   27u,  27u,  27u, 162u,   0u,0x01u} /* DID: 0x067D */
  ,{   27u,  27u,  27u, 163u,   0u,0x01u} /* DID: 0x067E */
  ,{   27u,  27u,  27u, 164u,   0u,0x01u} /* DID: 0x067F */
  ,{    8u,   8u,   8u, 165u,   0u,0x01u} /* DID: 0x0680 */
  ,{    2u,   2u,   2u, 166u,   0u,0x01u} /* DID: 0x0681 */
  ,{    1u,   1u,   1u, 167u,   0u,0x01u} /* DID: 0x0682 */
  ,{    2u,   2u,   2u, 168u,   0u,0x01u} /* DID: 0x0683 */
  ,{    2u,   2u,   2u, 169u,   0u,0x01u} /* DID: 0x0684 */
  ,{    1u,   1u,   1u, 170u,   0u,0x01u} /* DID: 0x0685 */
  ,{    2u,   2u,   2u, 171u,   0u,0x01u} /* DID: 0x0686 */
  ,{    1u,   1u,   1u, 172u,   0u,0x01u} /* DID: 0x0687 */
  ,{    1u,   1u,   1u, 173u,   0u,0x01u} /* DID: 0x0688 */
  ,{    6u,   6u,   6u, 174u,   0u,0x01u} /* DID: 0x0689 */
  ,{    1u,   1u,   1u, 175u,   0u,0x01u} /* DID: 0x068A */
  ,{    2u,   2u,   2u, 176u,   0u,0x01u} /* DID: 0x068B */
  ,{  386u, 386u, 386u, 177u,   0u,0x01u} /* DID: 0x0691 */
  ,{  110u, 110u, 110u, 178u,   0u,0x01u} /* DID: 0x06AF */
  ,{    1u,   1u,   1u, 179u,   0u,0x01u} /* DID: 0x06B1 */
  ,{    1u,   1u,   1u, 180u,   0u,0x01u} /* DID: 0x06B2 */
  ,{    2u,   2u,   2u, 181u,   0u,0x01u} /* DID: 0x06B3 */
  ,{    4u,   4u,   4u, 182u,   0u,0x01u} /* DID: 0x06B5 */
  ,{    4u,   4u,   4u, 183u,   0u,0x01u} /* DID: 0x06B6 */
  ,{    1u,   1u,   1u, 184u,   0u,0x01u} /* DID: 0x06B7 */
  ,{    2u,   2u,   2u, 185u,   0u,0x01u} /* DID: 0x06B8 */
  ,{    4u,   4u,   4u, 186u,   0u,0x01u} /* DID: 0x06B9 */
  ,{    2u,   2u,   2u, 187u,   0u,0x01u} /* DID: 0x06BA */
  ,{    4u,   4u,   4u, 188u,   0u,0x01u} /* DID: 0x06BB */
  ,{    1u,   1u,   1u, 189u,   0u,0x01u} /* DID: 0x06BC */
  ,{    2u,   2u,   2u, 190u,   0u,0x01u} /* DID: 0x06BD */
  ,{    2u,   2u,   2u, 191u,   0u,0x01u} /* DID: 0x06BE */
  ,{    2u,   2u,   2u, 192u,   0u,0x01u} /* DID: 0x06BF */
  ,{    3u,   3u,   3u, 193u,   0u,0x01u} /* DID: 0x06C0 */
  ,{    3u,   3u,   3u, 194u,   0u,0x01u} /* DID: 0x06C1 */
  ,{    1u,   1u,   1u, 195u,   0u,0x01u} /* DID: 0x06C2 */
  ,{    1u,   1u,   1u, 196u,   0u,0x01u} /* DID: 0x06C3 */
  ,{    2u,   2u,   2u, 197u,   0u,0x01u} /* DID: 0x06C4 */
  ,{    2u,   2u,   2u, 198u,   0u,0x01u} /* DID: 0x06C5 */
  ,{    2u,   2u,   2u, 199u,   0u,0x01u} /* DID: 0x06C6 */
  ,{    2u,   2u,   2u, 200u,   0u,0x01u} /* DID: 0x06C7 */
  ,{    2u,   2u,   2u, 201u,   0u,0x01u} /* DID: 0x06C8 */
  ,{    2u,   2u,   2u, 202u,   0u,0x01u} /* DID: 0x06C9 */
  ,{    3u,   3u,   3u, 203u,   0u,0x01u} /* DID: 0x06CA */
  ,{    1u,   1u,   1u, 204u,   0u,0x01u} /* DID: 0x06CB */
  ,{    4u,   4u,   4u, 205u,   0u,0x01u} /* DID: 0x06CC */
  ,{    2u,   2u,   2u, 206u,   0u,0x01u} /* DID: 0x06D0 */
  ,{    2u,   2u,   2u, 207u,   0u,0x01u} /* DID: 0x06D1 */
  ,{    2u,   2u,   2u, 208u,   0u,0x01u} /* DID: 0x06D2 */
  ,{    2u,   2u,   2u, 209u,   0u,0x01u} /* DID: 0x06D3 */
  ,{    2u,   2u,   2u, 210u,   0u,0x01u} /* DID: 0x06D4 */
  ,{    3u,   3u,   3u, 211u,   0u,0x01u} /* DID: 0x06D5 */
  ,{    2u,   2u,   2u, 212u,   0u,0x01u} /* DID: 0x06D6 */
  ,{    2u,   2u,   2u, 213u,   0u,0x01u} /* DID: 0x06D7 */
  ,{    1u,   1u,   1u, 214u,   0u,0x01u} /* DID: 0x0806 */
  ,{    1u,   1u,   1u, 215u,   0u,0x03u} /* DID: 0x0902 */
  ,{    1u,   1u,   1u, 217u,   0u,0x03u} /* DID: 0x09F3 */
  ,{    1u,   1u,   1u, 219u,   0u,0x01u} /* DID: 0x1001 */
  ,{    2u,   2u,   2u, 220u,   0u,0x01u} /* DID: 0x1003 */
  ,{    4u,   4u,   4u, 221u,   0u,0x01u} /* DID: 0x1010 */
  ,{    0u,   8u,   8u, 222u,   0u,0x03u} /* DID: 0x1122 */
  ,{    1u,   1u,   1u, 224u,   0u,0x01u} /* DID: 0x1E06 */
  ,{    1u,   1u,   1u, 225u,   0u,0x01u} /* DID: 0x1E0A */
  ,{    1u,   1u,   1u, 226u,   0u,0x01u} /* DID: 0x1E0D */
  ,{    4u,   4u,   4u, 227u,   0u,0x01u} /* DID: 0x1E0E */
  ,{    4u,   4u,   4u, 228u,   0u,0x01u} /* DID: 0x1E0F */
  ,{    2u,   2u,   2u, 229u,   0u,0x01u} /* DID: 0x1E10 */
  ,{    2u,   2u,   2u, 230u,   0u,0x01u} /* DID: 0x1E17 */
  ,{    2u,   2u,   2u, 231u,   0u,0x01u} /* DID: 0x1E19 */
  ,{    4u,   4u,   4u, 232u,   0u,0x01u} /* DID: 0x1E2C */
  ,{    4u,   4u,   4u, 233u,   0u,0x01u} /* DID: 0x1E2D */
  ,{    7u,   7u,   7u, 234u,   0u,0x01u} /* DID: 0x1E33 */
  ,{    7u,   7u,   7u, 235u,   0u,0x01u} /* DID: 0x1E34 */
  ,{    2u,   2u,   2u, 236u,   0u,0x01u} /* DID: 0x1E3B */
  ,{    3u,   3u,   3u, 237u,   0u,0x01u} /* DID: 0x2203 */
  ,{    3u,   3u,   3u, 238u,   0u,0x01u} /* DID: 0x2216 */
  ,{    4u,   4u,   4u, 239u,   0u,0x01u} /* DID: 0x2217 */
  ,{    2u,   2u,   2u, 240u,   0u,0x01u} /* DID: 0x2700 */
  ,{    2u,   2u,   2u, 241u,   0u,0x01u} /* DID: 0x2701 */
  ,{    1u,   1u,   1u, 242u,   0u,0x01u} /* DID: 0x2702 */
  ,{    1u,   1u,   1u, 243u,   0u,0x01u} /* DID: 0x2703 */
  ,{    1u,   1u,   1u, 244u,   0u,0x01u} /* DID: 0x2704 */
  ,{    1u,   1u,   1u, 245u,   0u,0x01u} /* DID: 0x2706 */
  ,{    2u,   2u,   2u, 246u,   0u,0x01u} /* DID: 0x2707 */
  ,{    1u,   1u,   1u, 247u,   0u,0x01u} /* DID: 0x2708 */
  ,{    2u,   2u,   2u, 248u,   0u,0x01u} /* DID: 0x270A */
  ,{    2u,   2u,   2u, 249u,   0u,0x01u} /* DID: 0x270B */
  ,{    2u,   2u,   2u, 250u,   0u,0x01u} /* DID: 0x270C */
  ,{    2u,   2u,   2u, 251u,   0u,0x01u} /* DID: 0x270D */
  ,{    1u,   1u,   1u, 252u,   0u,0x01u} /* DID: 0x270F */
  ,{    8u,   8u,   8u, 253u,   0u,0x01u} /* DID: 0x2710 */
  ,{   24u,  24u,  24u, 254u,   0u,0x01u} /* DID: 0x2711 */
  ,{    1u,   1u,   1u, 255u,   0u,0x01u} /* DID: 0x2712 */
  ,{    2u,   2u,   2u, 256u,   0u,0x01u} /* DID: 0x2716 */
  ,{    4u,   4u,   4u, 257u,   0u,0x01u} /* DID: 0x271A */
  ,{    2u,   2u,   2u, 258u,   0u,0x01u} /* DID: 0x271B */
  ,{    2u,   2u,   2u, 259u,   0u,0x01u} /* DID: 0x271D */
  ,{   18u,  18u,  18u, 260u,   0u,0x01u} /* DID: 0x2C55 */
  ,{    3u,   3u,   3u, 261u,   0u,0x01u} /* DID: 0x2C56 */
  ,{    0u, 512u, 512u, 262u,   0u,0x01u} /* DID: 0x2C57 */
  ,{    0u,1022u,1022u, 263u,   0u,0x01u} /* DID: 0x2C60 */
  ,{    1u,   1u,   1u, 264u,   0u,0x01u} /* DID: 0x3C0E */
  ,{    1u,   1u,   1u, 265u,   0u,0x01u} /* DID: 0x4219 */
  ,{   26u,  26u,  26u, 266u,   0u,0x03u} /* DID: 0x484E */
  ,{    2u,   2u,   2u, 268u,   0u,0x01u} /* DID: 0x50CE */
  ,{    1u,   1u,   1u, 269u,   0u,0x01u} /* DID: 0x5164 */
  ,{    2u,   2u,   2u, 270u,   0u,0x01u} /* DID: 0x5170 */
  ,{    2u,   2u,   2u, 271u,   0u,0x01u} /* DID: 0x5171 */
  ,{    1u,   1u,   1u, 272u,   0u,0x01u} /* DID: 0xC101 */
  ,{   11u,  11u,  11u, 273u,   0u,0x01u} /* DID: 0xC107 */
  ,{    1u,   1u,   1u, 274u,   0u,0x03u} /* DID: 0xC10B */
  ,{    4u,   4u,   4u, 276u,   0u,0x03u} /* DID: 0xC110 */
  ,{    4u,   4u,   4u, 278u,   0u,0x03u} /* DID: 0xC111 */
  ,{    2u,   2u,   2u, 280u,   0u,0x01u} /* DID: 0xE001 */
  ,{    4u,   4u,   4u, 281u,   0u,0x01u} /* DID: 0xE009 */
  ,{    4u,   4u,   4u, 282u,   0u,0x01u} /* DID: 0xE00A */
  ,{    2u,   2u,   2u, 283u,   0u,0x01u} /* DID: 0xE00B */
  ,{    2u,   2u,   2u, 284u,   0u,0x01u} /* DID: 0xE00C */
  ,{   32u,  32u,  32u, 285u,   0u,0x01u} /* DID: 0xE00D */
  ,{   32u,  32u,  32u, 286u,   0u,0x01u} /* DID: 0xE00E */
  ,{   16u,  16u,  16u, 287u,   0u,0x01u} /* DID: 0xE010 */
  ,{   16u,  16u,  16u, 288u,   0u,0x01u} /* DID: 0xE011 */
  ,{    1u,   1u,   1u, 289u,   0u,0x01u} /* DID: 0xE012 */
  ,{    1u,   1u,   1u, 290u,   0u,0x01u} /* DID: 0xE013 */
  ,{    1u,   1u,   1u, 291u,   0u,0x01u} /* DID: 0xE014 */
  ,{    1u,   1u,   1u, 292u,   0u,0x01u} /* DID: 0xE015 */
  ,{    1u,   1u,   1u, 293u,   0u,0x01u} /* DID: 0xE016 */
  ,{    1u,   1u,   1u, 294u,   0u,0x01u} /* DID: 0xE018 */
  ,{    4u,   4u,   4u, 295u,   0u,0x01u} /* DID: 0xE019 */
  ,{    4u,   4u,   4u, 296u,   0u,0x01u} /* DID: 0xE01A */
  ,{    4u,   4u,   4u, 297u,   0u,0x01u} /* DID: 0xE01B */
  ,{    4u,   4u,   4u, 298u,   0u,0x01u} /* DID: 0xE01C */
  ,{    4u,   4u,   4u, 299u,   0u,0x01u} /* DID: 0xE01D */
  ,{    4u,   4u,   4u, 300u,   0u,0x01u} /* DID: 0xE01E */
  ,{    4u,   4u,   4u, 301u,   0u,0x01u} /* DID: 0xE01F */
  ,{    4u,   4u,   4u, 302u,   0u,0x01u} /* DID: 0xE020 */
  ,{    4u,   4u,   4u, 303u,   0u,0x01u} /* DID: 0xE021 */
  ,{    4u,   4u,   4u, 304u,   0u,0x01u} /* DID: 0xE022 */
  ,{    9u,   9u,   9u, 305u,   0u,0x01u} /* DID: 0xE030 */
  ,{    9u,   9u,   9u, 306u,   0u,0x01u} /* DID: 0xE031 */
  ,{   14u,  14u,  14u, 307u,   0u,0x01u} /* DID: 0xE032 */
  ,{   14u,  14u,  14u, 308u,   0u,0x01u} /* DID: 0xE033 */
  ,{    9u,   9u,   9u, 309u,   0u,0x01u} /* DID: 0xE034 */
  ,{    9u,   9u,   9u, 310u,   0u,0x01u} /* DID: 0xE035 */
  ,{    9u,   9u,   9u, 311u,   0u,0x01u} /* DID: 0xE036 */
  ,{    9u,   9u,   9u, 312u,   0u,0x01u} /* DID: 0xE037 */
  ,{   14u,  14u,  14u, 313u,   0u,0x03u} /* DID: 0xE038 */
  ,{   14u,  14u,  14u, 315u,   0u,0x01u} /* DID: 0xE039 */
  ,{   14u,  14u,  14u, 316u,   0u,0x01u} /* DID: 0xE03A */
  ,{   14u,  14u,  14u, 317u,   0u,0x01u} /* DID: 0xE03B */
  ,{   24u,  24u,  24u, 318u,   0u,0x01u} /* DID: 0xE03D */
  ,{    3u,   3u,   3u, 319u,   0u,0x01u} /* DID: 0xEE02 */
  ,{    3u,   3u,   3u, 320u,   0u,0x01u} /* DID: 0xEE03 */
  ,{    9u,   9u,   9u, 321u,   0u,0x03u} /* DID: 0xF15A */
  ,{    0u,8192u,8192u, 323u,   0u,0x01u} /* DID: 0xF15B */
  ,{   23u,  23u,  23u, 324u,   0u,0x01u} /* DID: 0xF17C */
  ,{    1u,   1u,   1u, 325u,   0u,0x01u} /* DID: 0xF186 */
  ,{   11u,  11u,  11u, 326u,   0u,0x01u} /* DID: 0xF187 */
  ,{    4u,   4u,   4u, 327u,   0u,0x01u} /* DID: 0xF189 */
  ,{    0u,  32u,  32u, 328u,   0u,0x01u} /* DID: 0xF18A */
  ,{   20u,  20u,  20u, 329u,   0u,0x01u} /* DID: 0xF18C */
  ,{   50u,  50u,  50u, 330u,   0u,0x03u} /* DID: 0xF18F */
  ,{   17u,  17u,  17u, 332u,   0u,0x01u} /* DID: 0xF190 */
  ,{   11u,  11u,  11u, 333u,   0u,0x01u} /* DID: 0xF191 */
  ,{   11u,  11u,  11u, 334u,   0u,0x03u} /* DID: 0xF192 */
  ,{   11u,  11u,  11u, 336u,   0u,0x01u} /* DID: 0xF193 */
  ,{   11u,  11u,  11u, 337u,   0u,0x01u} /* DID: 0xF194 */
  ,{   11u,  11u,  11u, 338u,   0u,0x01u} /* DID: 0xF195 */
  ,{   13u,  13u,  13u, 339u,   0u,0x01u} /* DID: 0xF197 */
  ,{    0u,  25u,  25u, 340u,   0u,0x01u} /* DID: 0xF19E */
  ,{   11u,  11u,  11u, 341u,   0u,0x03u} /* DID: 0xF1A0 */
  ,{    4u,   4u,   4u, 343u,   0u,0x03u} /* DID: 0xF1A1 */
  ,{    6u,   6u,   6u, 345u,   0u,0x01u} /* DID: 0xF1A2 */
  ,{    3u,   3u,   3u, 346u,   0u,0x01u} /* DID: 0xF1A3 */
  ,{    5u,   5u,   5u, 347u,   0u,0x01u} /* DID: 0xF1AA */
  ,{   24u,  24u,  24u, 348u,   0u,0x01u} /* DID: 0xF1AB */
  ,{    0u,8192u,8192u, 349u,   0u,0x01u} /* DID: 0xF1AF */
  ,{    0u,8192u,8192u, 350u,   0u,0x01u} /* DID: 0xF1B1 */
  ,{    0u,8192u,8192u, 351u,   0u,0x01u} /* DID: 0xF1B3 */
  ,{   26u,  26u,  26u, 352u,   0u,0x01u} /* DID: 0xF1B4 */
  ,{    4u,   4u,   4u, 353u,   0u,0x01u} /* DID: 0xF1B6 */
  ,{    0u, 517u, 517u, 354u,   0u,0x01u} /* DID: 0xF1D5 */
  ,{    1u,   1u,   1u, 355u,   0u,0x01u} /* DID: 0xF1DF */
  ,{    5u,   5u,   5u, 356u,   0u,0x03u} /* DID: 0xF1E0 */
  ,{   10u,  10u,  10u, 358u,   0u,0x03u} /* DID: 0xF1E1 */
  ,{  150u, 150u, 150u, 360u,   0u,0x03u} /* DID: 0xF1E2 */
  ,{    1u,   1u,   1u, 362u,   0u,0x01u} /* DID: 0xF1F2 */
  ,{  100u, 100u, 100u, 363u,   0u,0x01u} /* DID: 0xF1F3 */
  ,{    4u,   4u,   4u, 364u,   0u,0x01u} /* DID: 0xF400 */
  ,{    4u,   4u,   4u, 365u,   0u,0x01u} /* DID: 0xF401 */
  ,{    1u,   1u,   1u, 366u,   0u,0x01u} /* DID: 0xF404 */
  ,{    1u,   1u,   1u, 367u,   0u,0x01u} /* DID: 0xF405 */
  ,{    2u,   2u,   2u, 368u,   0u,0x01u} /* DID: 0xF40C */
  ,{    1u,   1u,   1u, 369u,   0u,0x01u} /* DID: 0xF40D */
  ,{    2u,   2u,   2u, 370u,   0u,0x01u} /* DID: 0xF41F */
  ,{    4u,   4u,   4u, 371u,   0u,0x01u} /* DID: 0xF420 */
  ,{    4u,   4u,   4u, 372u,   0u,0x01u} /* DID: 0xF440 */
  ,{    4u,   4u,   4u, 373u,   0u,0x01u} /* DID: 0xF441 */
  ,{    2u,   2u,   2u, 374u,   0u,0x01u} /* DID: 0xF442 */
  ,{    1u,   1u,   1u, 375u,   0u,0x01u} /* DID: 0xF449 */
  ,{    4u,   4u,   4u, 376u,   0u,0x01u} /* DID: 0xF800 */
  ,{    0u,8192u,8192u, 377u,   0u,0x01u} /* DID: 0xF804 */
  ,{   20u,  20u,  20u, 378u,   0u,0x01u} /* DID: 0xF80A */
  ,{    1u,   1u,   1u, 379u,   0u,0x03u} /* DID: 0xFEFD */
};
/*! DID operation properties */
CONST(Dcm_CfgDidMgrDidOpInfoType, DCM_CONST) Dcm_CfgDidMgrDidOpInfo[381]=
{
   {    0u,   0u,0x05u} /* DID: 0x0055 */
  ,{    0u,   2u,0x01u} /* DID: 0x0055 */
  ,{    3u,   3u,0x05u} /* DID: 0x0102 */
  ,{    3u,   5u,0x05u} /* DID: 0x0174 */
  ,{    0u,   7u,0x07u} /* DID: 0x0189 */
  ,{    3u,  10u,0x07u} /* DID: 0x018A */
  ,{    3u,  13u,0x07u} /* DID: 0x018B */
  ,{    3u,  16u,0x07u} /* DID: 0x018F */
  ,{    3u,  19u,0x05u} /* DID: 0x0190 */
  ,{    3u,  21u,0x05u} /* DID: 0x0191 */
  ,{    3u,  23u,0x07u} /* DID: 0x0192 */
  ,{    3u,  26u,0x07u} /* DID: 0x0194 */
  ,{    3u,  29u,0x05u} /* DID: 0x019C */
  ,{    3u,  31u,0x05u} /* DID: 0x0245 */
  ,{    3u,  33u,0x05u} /* DID: 0x0249 */
  ,{    3u,  35u,0x07u} /* DID: 0x0250 */
  ,{    2u,  38u,0x01u} /* DID: 0x0250 */
  ,{    3u,  39u,0x05u} /* DID: 0x0261 */
  ,{    3u,  41u,0x05u} /* DID: 0x0286 */
  ,{    3u,  43u,0x05u} /* DID: 0x02B3 */
  ,{    3u,  45u,0x05u} /* DID: 0x02BD */
  ,{    3u,  47u,0x05u} /* DID: 0x02CA */
  ,{    2u,  49u,0x01u} /* DID: 0x02CA */
  ,{    3u,  50u,0x05u} /* DID: 0x02CB */
  ,{    2u,  52u,0x01u} /* DID: 0x02CB */
  ,{    3u,  53u,0x05u} /* DID: 0x02CE */
  ,{    3u,  55u,0x05u} /* DID: 0x02CF */
  ,{    3u,  57u,0x05u} /* DID: 0x030B */
  ,{    3u,  59u,0x05u} /* DID: 0x030C */
  ,{    3u,  61u,0x05u} /* DID: 0x030D */
  ,{    3u,  63u,0x05u} /* DID: 0x030E */
  ,{    3u,  65u,0x05u} /* DID: 0x030F */
  ,{    3u,  67u,0x05u} /* DID: 0x0314 */
  ,{    3u,  69u,0x05u} /* DID: 0x0315 */
  ,{    3u,  71u,0x05u} /* DID: 0x0316 */
  ,{    3u,  73u,0x05u} /* DID: 0x0318 */
  ,{    2u,  75u,0x01u} /* DID: 0x0318 */
  ,{    3u,  76u,0x05u} /* DID: 0x0319 */
  ,{    3u,  78u,0x05u} /* DID: 0x031B */
  ,{    2u,  80u,0x01u} /* DID: 0x031B */
  ,{    3u,  81u,0x05u} /* DID: 0x031C */
  ,{    3u,  83u,0x05u} /* DID: 0x031F */
  ,{    2u,  85u,0x01u} /* DID: 0x031F */
  ,{    3u,  86u,0x05u} /* DID: 0x0320 */
  ,{    2u,  88u,0x01u} /* DID: 0x0320 */
  ,{    3u,  89u,0x05u} /* DID: 0x0321 */
  ,{    2u,  91u,0x01u} /* DID: 0x0321 */
  ,{    3u,  92u,0x05u} /* DID: 0x0322 */
  ,{    3u,  94u,0x05u} /* DID: 0x0323 */
  ,{    3u,  96u,0x05u} /* DID: 0x0324 */
  ,{    2u,  98u,0x01u} /* DID: 0x0324 */
  ,{    3u,  99u,0x05u} /* DID: 0x0325 */
  ,{    2u, 101u,0x01u} /* DID: 0x0325 */
  ,{    3u, 102u,0x05u} /* DID: 0x0326 */
  ,{    2u, 104u,0x01u} /* DID: 0x0326 */
  ,{    3u, 105u,0x05u} /* DID: 0x0327 */
  ,{    2u, 107u,0x01u} /* DID: 0x0327 */
  ,{    3u, 108u,0x05u} /* DID: 0x0328 */
  ,{    3u, 110u,0x05u} /* DID: 0x0329 */
  ,{    2u, 112u,0x01u} /* DID: 0x0329 */
  ,{    3u, 113u,0x05u} /* DID: 0x032A */
  ,{    2u, 115u,0x01u} /* DID: 0x032A */
  ,{    0u, 116u,0x07u} /* DID: 0x0407 */
  ,{    0u, 119u,0x07u} /* DID: 0x040F */
  ,{    0u, 122u,0x05u} /* DID: 0x0410 */
  ,{    1u, 124u,0x01u} /* DID: 0x0410 */
  ,{    0u, 125u,0x07u} /* DID: 0x0448 */
  ,{    3u, 128u,0x05u} /* DID: 0x04FC */
  ,{    2u, 130u,0x01u} /* DID: 0x04FC */
  ,{    3u, 131u,0x05u} /* DID: 0x04FE */
  ,{    2u, 133u,0x01u} /* DID: 0x04FE */
  ,{    3u, 134u,0x05u} /* DID: 0x050C */
  ,{    3u, 136u,0x05u} /* DID: 0x050E */
  ,{    3u, 138u,0x05u} /* DID: 0x050F */
  ,{    3u, 140u,0x05u} /* DID: 0x0511 */
  ,{    3u, 142u,0x05u} /* DID: 0x0514 */
  ,{    3u, 144u,0x05u} /* DID: 0x0515 */
  ,{    3u, 146u,0x05u} /* DID: 0x0516 */
  ,{    3u, 148u,0x05u} /* DID: 0x054A */
  ,{    3u, 150u,0x05u} /* DID: 0x054B */
  ,{    3u, 152u,0x05u} /* DID: 0x0563 */
  ,{    3u, 154u,0x05u} /* DID: 0x0564 */
  ,{    3u, 156u,0x05u} /* DID: 0x0565 */
  ,{    3u, 158u,0x05u} /* DID: 0x0566 */
  ,{    3u, 160u,0x05u} /* DID: 0x0567 */
  ,{    3u, 162u,0x05u} /* DID: 0x0568 */
  ,{    3u, 164u,0x05u} /* DID: 0x0569 */
  ,{    3u, 166u,0x05u} /* DID: 0x056A */
  ,{    3u, 168u,0x05u} /* DID: 0x056B */
  ,{    3u, 170u,0x05u} /* DID: 0x056C */
  ,{    3u, 172u,0x05u} /* DID: 0x056D */
  ,{    3u, 174u,0x05u} /* DID: 0x056E */
  ,{    3u, 176u,0x05u} /* DID: 0x056F */
  ,{    3u, 178u,0x05u} /* DID: 0x0570 */
  ,{    3u, 180u,0x05u} /* DID: 0x0571 */
  ,{    3u, 182u,0x05u} /* DID: 0x0572 */
  ,{    3u, 184u,0x05u} /* DID: 0x0573 */
  ,{    3u, 186u,0x05u} /* DID: 0x0574 */
  ,{    3u, 188u,0x05u} /* DID: 0x0575 */
  ,{    3u, 190u,0x05u} /* DID: 0x057A */
  ,{    3u, 192u,0x05u} /* DID: 0x057B */
  ,{    3u, 194u,0x05u} /* DID: 0x057C */
  ,{    3u, 196u,0x05u} /* DID: 0x057D */
  ,{    3u, 198u,0x05u} /* DID: 0x057E */
  ,{    3u, 200u,0x05u} /* DID: 0x0581 */
  ,{    3u, 202u,0x05u} /* DID: 0x0582 */
  ,{    3u, 204u,0x05u} /* DID: 0x0583 */
  ,{    3u, 206u,0x05u} /* DID: 0x0584 */
  ,{    3u, 208u,0x05u} /* DID: 0x0585 */
  ,{    3u, 210u,0x05u} /* DID: 0x0586 */
  ,{    3u, 212u,0x05u} /* DID: 0x0587 */
  ,{    3u, 214u,0x05u} /* DID: 0x0588 */
  ,{    3u, 216u,0x05u} /* DID: 0x0589 */
  ,{    3u, 218u,0x05u} /* DID: 0x058A */
  ,{    3u, 220u,0x05u} /* DID: 0x058B */
  ,{    3u, 222u,0x05u} /* DID: 0x058C */
  ,{    3u, 224u,0x05u} /* DID: 0x058D */
  ,{    3u, 226u,0x05u} /* DID: 0x058F */
  ,{    3u, 228u,0x05u} /* DID: 0x0590 */
  ,{    3u, 230u,0x05u} /* DID: 0x0595 */
  ,{    3u, 232u,0x05u} /* DID: 0x0596 */
  ,{    3u, 234u,0x05u} /* DID: 0x0597 */
  ,{    3u, 236u,0x05u} /* DID: 0x059A */
  ,{    3u, 238u,0x05u} /* DID: 0x059B */
  ,{    3u, 240u,0x05u} /* DID: 0x05B1 */
  ,{    3u, 242u,0x05u} /* DID: 0x05B2 */
  ,{    3u, 244u,0x05u} /* DID: 0x05B3 */
  ,{    3u, 246u,0x05u} /* DID: 0x05B4 */
  ,{    3u, 248u,0x05u} /* DID: 0x05B5 */
  ,{    3u, 250u,0x05u} /* DID: 0x05B6 */
  ,{    3u, 252u,0x05u} /* DID: 0x05B7 */
  ,{    3u, 254u,0x05u} /* DID: 0x05B8 */
  ,{    3u, 256u,0x05u} /* DID: 0x05B9 */
  ,{    3u, 258u,0x05u} /* DID: 0x05BA */
  ,{    3u, 260u,0x05u} /* DID: 0x05BB */
  ,{    3u, 262u,0x05u} /* DID: 0x05BC */
  ,{    3u, 264u,0x05u} /* DID: 0x05BD */
  ,{    3u, 266u,0x05u} /* DID: 0x05C0 */
  ,{    3u, 268u,0x05u} /* DID: 0x05C6 */
  ,{    3u, 270u,0x05u} /* DID: 0x05C7 */
  ,{    3u, 272u,0x05u} /* DID: 0x05E3 */
  ,{    3u, 274u,0x05u} /* DID: 0x0600 */
  ,{    2u, 276u,0x01u} /* DID: 0x0600 */
  ,{    3u, 277u,0x07u} /* DID: 0x064C */
  ,{    3u, 280u,0x05u} /* DID: 0x064F */
  ,{    3u, 282u,0x05u} /* DID: 0x0660 */
  ,{    3u, 284u,0x05u} /* DID: 0x066D */
  ,{    3u, 286u,0x05u} /* DID: 0x066E */
  ,{    3u, 288u,0x05u} /* DID: 0x066F */
  ,{    3u, 290u,0x05u} /* DID: 0x0670 */
  ,{    3u, 292u,0x05u} /* DID: 0x0671 */
  ,{    3u, 294u,0x05u} /* DID: 0x0672 */
  ,{    3u, 296u,0x05u} /* DID: 0x0673 */
  ,{    3u, 298u,0x05u} /* DID: 0x0674 */
  ,{    3u, 300u,0x05u} /* DID: 0x0675 */
  ,{    3u, 302u,0x05u} /* DID: 0x0676 */
  ,{    3u, 304u,0x05u} /* DID: 0x0677 */
  ,{    3u, 306u,0x05u} /* DID: 0x0678 */
  ,{    3u, 308u,0x05u} /* DID: 0x0679 */
  ,{    3u, 310u,0x05u} /* DID: 0x067A */
  ,{    3u, 312u,0x05u} /* DID: 0x067B */
  ,{    3u, 314u,0x05u} /* DID: 0x067C */
  ,{    3u, 316u,0x05u} /* DID: 0x067D */
  ,{    3u, 318u,0x05u} /* DID: 0x067E */
  ,{    3u, 320u,0x05u} /* DID: 0x067F */
  ,{    3u, 322u,0x05u} /* DID: 0x0680 */
  ,{    3u, 324u,0x05u} /* DID: 0x0681 */
  ,{    3u, 326u,0x05u} /* DID: 0x0682 */
  ,{    3u, 328u,0x05u} /* DID: 0x0683 */
  ,{    3u, 330u,0x05u} /* DID: 0x0684 */
  ,{    3u, 332u,0x05u} /* DID: 0x0685 */
  ,{    3u, 334u,0x05u} /* DID: 0x0686 */
  ,{    3u, 336u,0x05u} /* DID: 0x0687 */
  ,{    3u, 338u,0x05u} /* DID: 0x0688 */
  ,{    3u, 340u,0x05u} /* DID: 0x0689 */
  ,{    3u, 342u,0x05u} /* DID: 0x068A */
  ,{    3u, 344u,0x05u} /* DID: 0x068B */
  ,{    3u, 346u,0x05u} /* DID: 0x0691 */
  ,{    3u, 348u,0x05u} /* DID: 0x06AF */
  ,{    3u, 350u,0x05u} /* DID: 0x06B1 */
  ,{    3u, 352u,0x05u} /* DID: 0x06B2 */
  ,{    3u, 354u,0x05u} /* DID: 0x06B3 */
  ,{    3u, 356u,0x05u} /* DID: 0x06B5 */
  ,{    3u, 358u,0x05u} /* DID: 0x06B6 */
  ,{    3u, 360u,0x05u} /* DID: 0x06B7 */
  ,{    3u, 362u,0x05u} /* DID: 0x06B8 */
  ,{    3u, 364u,0x05u} /* DID: 0x06B9 */
  ,{    3u, 366u,0x05u} /* DID: 0x06BA */
  ,{    3u, 368u,0x05u} /* DID: 0x06BB */
  ,{    3u, 370u,0x05u} /* DID: 0x06BC */
  ,{    3u, 372u,0x05u} /* DID: 0x06BD */
  ,{    3u, 374u,0x05u} /* DID: 0x06BE */
  ,{    3u, 376u,0x05u} /* DID: 0x06BF */
  ,{    3u, 378u,0x05u} /* DID: 0x06C0 */
  ,{    3u, 380u,0x05u} /* DID: 0x06C1 */
  ,{    3u, 382u,0x05u} /* DID: 0x06C2 */
  ,{    3u, 384u,0x05u} /* DID: 0x06C3 */
  ,{    3u, 386u,0x05u} /* DID: 0x06C4 */
  ,{    3u, 388u,0x05u} /* DID: 0x06C5 */
  ,{    3u, 390u,0x05u} /* DID: 0x06C6 */
  ,{    3u, 392u,0x05u} /* DID: 0x06C7 */
  ,{    3u, 394u,0x05u} /* DID: 0x06C8 */
  ,{    3u, 396u,0x05u} /* DID: 0x06C9 */
  ,{    3u, 398u,0x05u} /* DID: 0x06CA */
  ,{    3u, 400u,0x05u} /* DID: 0x06CB */
  ,{    3u, 402u,0x05u} /* DID: 0x06CC */
  ,{    3u, 404u,0x05u} /* DID: 0x06D0 */
  ,{    3u, 406u,0x05u} /* DID: 0x06D1 */
  ,{    3u, 408u,0x05u} /* DID: 0x06D2 */
  ,{    3u, 410u,0x05u} /* DID: 0x06D3 */
  ,{    3u, 412u,0x05u} /* DID: 0x06D4 */
  ,{    3u, 414u,0x05u} /* DID: 0x06D5 */
  ,{    3u, 416u,0x05u} /* DID: 0x06D6 */
  ,{    3u, 418u,0x05u} /* DID: 0x06D7 */
  ,{    3u, 420u,0x05u} /* DID: 0x0806 */
  ,{    3u, 422u,0x05u} /* DID: 0x0902 */
  ,{    2u, 424u,0x01u} /* DID: 0x0902 */
  ,{    3u, 425u,0x05u} /* DID: 0x09F3 */
  ,{    2u, 427u,0x01u} /* DID: 0x09F3 */
  ,{    3u, 428u,0x05u} /* DID: 0x1001 */
  ,{    3u, 430u,0x05u} /* DID: 0x1003 */
  ,{    3u, 432u,0x05u} /* DID: 0x1010 */
  ,{    2u, 434u,0x07u} /* DID: 0x1122 */
  ,{    2u, 437u,0x01u} /* DID: 0x1122 */
  ,{    3u, 438u,0x05u} /* DID: 0x1E06 */
  ,{    3u, 440u,0x05u} /* DID: 0x1E0A */
  ,{    3u, 442u,0x05u} /* DID: 0x1E0D */
  ,{    3u, 444u,0x05u} /* DID: 0x1E0E */
  ,{    3u, 446u,0x05u} /* DID: 0x1E0F */
  ,{    3u, 448u,0x05u} /* DID: 0x1E10 */
  ,{    3u, 450u,0x05u} /* DID: 0x1E17 */
  ,{    3u, 452u,0x05u} /* DID: 0x1E19 */
  ,{    3u, 454u,0x05u} /* DID: 0x1E2C */
  ,{    3u, 456u,0x05u} /* DID: 0x1E2D */
  ,{    3u, 458u,0x05u} /* DID: 0x1E33 */
  ,{    3u, 460u,0x05u} /* DID: 0x1E34 */
  ,{    3u, 462u,0x05u} /* DID: 0x1E3B */
  ,{    3u, 464u,0x05u} /* DID: 0x2203 */
  ,{    3u, 466u,0x05u} /* DID: 0x2216 */
  ,{    3u, 468u,0x05u} /* DID: 0x2217 */
  ,{    3u, 470u,0x05u} /* DID: 0x2700 */
  ,{    3u, 472u,0x05u} /* DID: 0x2701 */
  ,{    3u, 474u,0x05u} /* DID: 0x2702 */
  ,{    3u, 476u,0x05u} /* DID: 0x2703 */
  ,{    3u, 478u,0x05u} /* DID: 0x2704 */
  ,{    3u, 480u,0x05u} /* DID: 0x2706 */
  ,{    3u, 482u,0x05u} /* DID: 0x2707 */
  ,{    3u, 484u,0x05u} /* DID: 0x2708 */
  ,{    3u, 486u,0x05u} /* DID: 0x270A */
  ,{    3u, 488u,0x05u} /* DID: 0x270B */
  ,{    3u, 490u,0x05u} /* DID: 0x270C */
  ,{    3u, 492u,0x05u} /* DID: 0x270D */
  ,{    3u, 494u,0x05u} /* DID: 0x270F */
  ,{    3u, 496u,0x05u} /* DID: 0x2710 */
  ,{    3u, 498u,0x05u} /* DID: 0x2711 */
  ,{    3u, 500u,0x05u} /* DID: 0x2712 */
  ,{    3u, 502u,0x05u} /* DID: 0x2716 */
  ,{    3u, 504u,0x05u} /* DID: 0x271A */
  ,{    3u, 506u,0x05u} /* DID: 0x271B */
  ,{    3u, 508u,0x05u} /* DID: 0x271D */
  ,{    3u, 510u,0x05u} /* DID: 0x2C55 */
  ,{    3u, 512u,0x05u} /* DID: 0x2C56 */
  ,{    3u, 514u,0x07u} /* DID: 0x2C57 */
  ,{    3u, 517u,0x07u} /* DID: 0x2C60 */
  ,{    3u, 520u,0x05u} /* DID: 0x3C0E */
  ,{    3u, 522u,0x05u} /* DID: 0x4219 */
  ,{    3u, 524u,0x05u} /* DID: 0x484E */
  ,{    2u, 526u,0x01u} /* DID: 0x484E */
  ,{    3u, 527u,0x05u} /* DID: 0x50CE */
  ,{    3u, 529u,0x05u} /* DID: 0x5164 */
  ,{    3u, 531u,0x05u} /* DID: 0x5170 */
  ,{    3u, 533u,0x05u} /* DID: 0x5171 */
  ,{    3u, 535u,0x05u} /* DID: 0xC101 */
  ,{    3u, 537u,0x05u} /* DID: 0xC107 */
  ,{    2u, 539u,0x05u} /* DID: 0xC10B */
  ,{    2u, 541u,0x01u} /* DID: 0xC10B */
  ,{    3u, 542u,0x05u} /* DID: 0xC110 */
  ,{    2u, 544u,0x01u} /* DID: 0xC110 */
  ,{    3u, 545u,0x05u} /* DID: 0xC111 */
  ,{    2u, 547u,0x01u} /* DID: 0xC111 */
  ,{    3u, 548u,0x05u} /* DID: 0xE001 */
  ,{    3u, 550u,0x05u} /* DID: 0xE009 */
  ,{    3u, 552u,0x05u} /* DID: 0xE00A */
  ,{    3u, 554u,0x05u} /* DID: 0xE00B */
  ,{    3u, 556u,0x05u} /* DID: 0xE00C */
  ,{    3u, 558u,0x05u} /* DID: 0xE00D */
  ,{    3u, 560u,0x05u} /* DID: 0xE00E */
  ,{    3u, 562u,0x05u} /* DID: 0xE010 */
  ,{    3u, 564u,0x05u} /* DID: 0xE011 */
  ,{    3u, 566u,0x05u} /* DID: 0xE012 */
  ,{    3u, 568u,0x05u} /* DID: 0xE013 */
  ,{    3u, 570u,0x05u} /* DID: 0xE014 */
  ,{    3u, 572u,0x05u} /* DID: 0xE015 */
  ,{    3u, 574u,0x05u} /* DID: 0xE016 */
  ,{    3u, 576u,0x05u} /* DID: 0xE018 */
  ,{    3u, 578u,0x05u} /* DID: 0xE019 */
  ,{    3u, 580u,0x05u} /* DID: 0xE01A */
  ,{    3u, 582u,0x05u} /* DID: 0xE01B */
  ,{    3u, 584u,0x05u} /* DID: 0xE01C */
  ,{    3u, 586u,0x05u} /* DID: 0xE01D */
  ,{    3u, 588u,0x05u} /* DID: 0xE01E */
  ,{    3u, 590u,0x05u} /* DID: 0xE01F */
  ,{    3u, 592u,0x05u} /* DID: 0xE020 */
  ,{    3u, 594u,0x05u} /* DID: 0xE021 */
  ,{    3u, 596u,0x05u} /* DID: 0xE022 */
  ,{    0u, 598u,0x05u} /* DID: 0xE030 */
  ,{    0u, 600u,0x05u} /* DID: 0xE031 */
  ,{    0u, 602u,0x05u} /* DID: 0xE032 */
  ,{    0u, 604u,0x05u} /* DID: 0xE033 */
  ,{    0u, 606u,0x05u} /* DID: 0xE034 */
  ,{    0u, 608u,0x05u} /* DID: 0xE035 */
  ,{    0u, 610u,0x05u} /* DID: 0xE036 */
  ,{    0u, 612u,0x05u} /* DID: 0xE037 */
  ,{    0u, 614u,0x05u} /* DID: 0xE038 */
  ,{    2u, 616u,0x01u} /* DID: 0xE038 */
  ,{    0u, 617u,0x05u} /* DID: 0xE039 */
  ,{    0u, 619u,0x05u} /* DID: 0xE03A */
  ,{    0u, 621u,0x05u} /* DID: 0xE03B */
  ,{    0u, 623u,0x05u} /* DID: 0xE03D */
  ,{    3u, 625u,0x05u} /* DID: 0xEE02 */
  ,{    3u, 627u,0x05u} /* DID: 0xEE03 */
  ,{    4u, 629u,0x05u} /* DID: 0xF15A */
  ,{    4u, 631u,0x01u} /* DID: 0xF15A */
  ,{    0u, 632u,0x07u} /* DID: 0xF15B */
  ,{    0u, 635u,0x05u} /* DID: 0xF17C */
  ,{    0u, 637u,0x05u} /* DID: 0xF186 */
  ,{    0u, 639u,0x05u} /* DID: 0xF187 */
  ,{    0u, 641u,0x05u} /* DID: 0xF189 */
  ,{    3u, 643u,0x07u} /* DID: 0xF18A */
  ,{    0u, 646u,0x05u} /* DID: 0xF18C */
  ,{    3u, 648u,0x05u} /* DID: 0xF18F */
  ,{    3u, 650u,0x01u} /* DID: 0xF18F */
  ,{    0u, 651u,0x05u} /* DID: 0xF190 */
  ,{    0u, 653u,0x05u} /* DID: 0xF191 */
  ,{    0u, 655u,0x05u} /* DID: 0xF192 */
  ,{    2u, 657u,0x01u} /* DID: 0xF192 */
  ,{    0u, 658u,0x05u} /* DID: 0xF193 */
  ,{    0u, 660u,0x05u} /* DID: 0xF194 */
  ,{    0u, 662u,0x05u} /* DID: 0xF195 */
  ,{    3u, 664u,0x05u} /* DID: 0xF197 */
  ,{    0u, 666u,0x07u} /* DID: 0xF19E */
  ,{    3u, 669u,0x05u} /* DID: 0xF1A0 */
  ,{    2u, 671u,0x01u} /* DID: 0xF1A0 */
  ,{    3u, 672u,0x05u} /* DID: 0xF1A1 */
  ,{    2u, 674u,0x01u} /* DID: 0xF1A1 */
  ,{    0u, 675u,0x05u} /* DID: 0xF1A2 */
  ,{    0u, 677u,0x05u} /* DID: 0xF1A3 */
  ,{    3u, 679u,0x05u} /* DID: 0xF1AA */
  ,{    0u, 681u,0x05u} /* DID: 0xF1AB */
  ,{    3u, 683u,0x07u} /* DID: 0xF1AF */
  ,{    3u, 686u,0x07u} /* DID: 0xF1B1 */
  ,{    3u, 689u,0x07u} /* DID: 0xF1B3 */
  ,{    3u, 692u,0x05u} /* DID: 0xF1B4 */
  ,{    0u, 694u,0x05u} /* DID: 0xF1B6 */
  ,{    0u, 696u,0x07u} /* DID: 0xF1D5 */
  ,{    0u, 699u,0x05u} /* DID: 0xF1DF */
  ,{    3u, 701u,0x05u} /* DID: 0xF1E0 */
  ,{    2u, 703u,0x01u} /* DID: 0xF1E0 */
  ,{    3u, 704u,0x05u} /* DID: 0xF1E1 */
  ,{    2u, 706u,0x01u} /* DID: 0xF1E1 */
  ,{    3u, 707u,0x05u} /* DID: 0xF1E2 */
  ,{    2u, 709u,0x01u} /* DID: 0xF1E2 */
  ,{    3u, 710u,0x05u} /* DID: 0xF1F2 */
  ,{    3u, 712u,0x05u} /* DID: 0xF1F3 */
  ,{    3u, 714u,0x01u} /* DID: 0xF400 */
  ,{    3u, 715u,0x05u} /* DID: 0xF401 */
  ,{    3u, 717u,0x05u} /* DID: 0xF404 */
  ,{    3u, 719u,0x05u} /* DID: 0xF405 */
  ,{    3u, 721u,0x05u} /* DID: 0xF40C */
  ,{    3u, 723u,0x05u} /* DID: 0xF40D */
  ,{    0u, 725u,0x05u} /* DID: 0xF41F */
  ,{    3u, 727u,0x01u} /* DID: 0xF420 */
  ,{    3u, 728u,0x01u} /* DID: 0xF440 */
  ,{    3u, 729u,0x05u} /* DID: 0xF441 */
  ,{    3u, 731u,0x05u} /* DID: 0xF442 */
  ,{    3u, 733u,0x05u} /* DID: 0xF449 */
  ,{    3u, 735u,0x01u} /* DID: 0xF800 */
  ,{    3u, 736u,0x07u} /* DID: 0xF804 */
  ,{    3u, 739u,0x05u} /* DID: 0xF80A */
  ,{    3u, 741u,0x05u} /* DID: 0xFEFD */
  ,{    2u, 743u,0x01u} /* DID: 0xFEFD */
};
/*! DID operation classes */
CONST(Dcm_CfgDidMgrDidOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrDidOpClassInfo[745]=
{
   {  0u}
  ,{  1u}
  ,{  2u}
  ,{  3u}
  ,{  4u}
  ,{  5u}
  ,{  6u}
  ,{  7u}
  ,{  8u}
  ,{  9u}
  ,{ 10u}
  ,{ 11u}
  ,{ 12u}
  ,{ 13u}
  ,{ 14u}
  ,{ 15u}
  ,{ 16u}
  ,{ 17u}
  ,{ 18u}
  ,{ 19u}
  ,{ 20u}
  ,{ 21u}
  ,{ 22u}
  ,{ 23u}
  ,{ 24u}
  ,{ 25u}
  ,{ 26u}
  ,{ 27u}
  ,{ 28u}
  ,{ 29u}
  ,{ 30u}
  ,{ 31u}
  ,{ 32u}
  ,{ 33u}
  ,{ 34u}
  ,{ 35u}
  ,{ 36u}
  ,{ 37u}
  ,{ 38u}
  ,{ 39u}
  ,{ 40u}
  ,{ 41u}
  ,{ 42u}
  ,{ 43u}
  ,{ 44u}
  ,{ 45u}
  ,{ 46u}
  ,{ 47u}
  ,{ 48u}
  ,{ 49u}
  ,{ 50u}
  ,{ 51u}
  ,{ 52u}
  ,{ 53u}
  ,{ 54u}
  ,{ 55u}
  ,{ 56u}
  ,{ 57u}
  ,{ 58u}
  ,{ 59u}
  ,{ 60u}
  ,{ 61u}
  ,{ 62u}
  ,{ 63u}
  ,{ 64u}
  ,{ 65u}
  ,{ 66u}
  ,{ 67u}
  ,{ 68u}
  ,{ 69u}
  ,{ 70u}
  ,{ 71u}
  ,{ 72u}
  ,{ 73u}
  ,{ 74u}
  ,{ 75u}
  ,{ 76u}
  ,{ 77u}
  ,{ 78u}
  ,{ 79u}
  ,{ 80u}
  ,{ 81u}
  ,{ 82u}
  ,{ 83u}
  ,{ 84u}
  ,{ 85u}
  ,{ 86u}
  ,{ 87u}
  ,{ 88u}
  ,{ 89u}
  ,{ 90u}
  ,{ 91u}
  ,{ 92u}
  ,{ 93u}
  ,{ 94u}
  ,{ 95u}
  ,{ 96u}
  ,{ 97u}
  ,{ 98u}
  ,{ 99u}
  ,{ 100u}
  ,{ 101u}
  ,{ 102u}
  ,{ 103u}
  ,{ 104u}
  ,{ 105u}
  ,{ 106u}
  ,{ 107u}
  ,{ 108u}
  ,{ 109u}
  ,{ 110u}
  ,{ 111u}
  ,{ 112u}
  ,{ 113u}
  ,{ 114u}
  ,{ 115u}
  ,{ 116u}
  ,{ 117u}
  ,{ 118u}
  ,{ 119u}
  ,{ 120u}
  ,{ 121u}
  ,{ 122u}
  ,{ 123u}
  ,{ 124u}
  ,{ 125u}
  ,{ 126u}
  ,{ 127u}
  ,{ 128u}
  ,{ 129u}
  ,{ 130u}
  ,{ 131u}
  ,{ 132u}
  ,{ 133u}
  ,{ 134u}
  ,{ 135u}
  ,{ 136u}
  ,{ 137u}
  ,{ 138u}
  ,{ 139u}
  ,{ 140u}
  ,{ 141u}
  ,{ 142u}
  ,{ 143u}
  ,{ 144u}
  ,{ 145u}
  ,{ 146u}
  ,{ 147u}
  ,{ 148u}
  ,{ 149u}
  ,{ 150u}
  ,{ 151u}
  ,{ 152u}
  ,{ 153u}
  ,{ 154u}
  ,{ 155u}
  ,{ 156u}
  ,{ 157u}
  ,{ 158u}
  ,{ 159u}
  ,{ 160u}
  ,{ 161u}
  ,{ 162u}
  ,{ 163u}
  ,{ 164u}
  ,{ 165u}
  ,{ 166u}
  ,{ 167u}
  ,{ 168u}
  ,{ 169u}
  ,{ 170u}
  ,{ 171u}
  ,{ 172u}
  ,{ 173u}
  ,{ 174u}
  ,{ 175u}
  ,{ 176u}
  ,{ 177u}
  ,{ 178u}
  ,{ 179u}
  ,{ 180u}
  ,{ 181u}
  ,{ 182u}
  ,{ 183u}
  ,{ 184u}
  ,{ 185u}
  ,{ 186u}
  ,{ 187u}
  ,{ 188u}
  ,{ 189u}
  ,{ 190u}
  ,{ 191u}
  ,{ 192u}
  ,{ 193u}
  ,{ 194u}
  ,{ 195u}
  ,{ 196u}
  ,{ 197u}
  ,{ 198u}
  ,{ 199u}
  ,{ 200u}
  ,{ 201u}
  ,{ 202u}
  ,{ 203u}
  ,{ 204u}
  ,{ 205u}
  ,{ 206u}
  ,{ 207u}
  ,{ 208u}
  ,{ 209u}
  ,{ 210u}
  ,{ 211u}
  ,{ 212u}
  ,{ 213u}
  ,{ 214u}
  ,{ 215u}
  ,{ 216u}
  ,{ 217u}
  ,{ 218u}
  ,{ 219u}
  ,{ 220u}
  ,{ 221u}
  ,{ 222u}
  ,{ 223u}
  ,{ 224u}
  ,{ 225u}
  ,{ 226u}
  ,{ 227u}
  ,{ 228u}
  ,{ 229u}
  ,{ 230u}
  ,{ 231u}
  ,{ 232u}
  ,{ 233u}
  ,{ 234u}
  ,{ 235u}
  ,{ 236u}
  ,{ 237u}
  ,{ 238u}
  ,{ 239u}
  ,{ 240u}
  ,{ 241u}
  ,{ 242u}
  ,{ 243u}
  ,{ 244u}
  ,{ 245u}
  ,{ 246u}
  ,{ 247u}
  ,{ 248u}
  ,{ 249u}
  ,{ 250u}
  ,{ 251u}
  ,{ 252u}
  ,{ 253u}
  ,{ 254u}
  ,{ 255u}
  ,{ 256u}
  ,{ 257u}
  ,{ 258u}
  ,{ 259u}
  ,{ 260u}
  ,{ 261u}
  ,{ 262u}
  ,{ 263u}
  ,{ 264u}
  ,{ 265u}
  ,{ 266u}
  ,{ 267u}
  ,{ 268u}
  ,{ 269u}
  ,{ 270u}
  ,{ 271u}
  ,{ 272u}
  ,{ 273u}
  ,{ 274u}
  ,{ 275u}
  ,{ 276u}
  ,{ 277u}
  ,{ 278u}
  ,{ 279u}
  ,{ 280u}
  ,{ 281u}
  ,{ 282u}
  ,{ 283u}
  ,{ 284u}
  ,{ 285u}
  ,{ 286u}
  ,{ 287u}
  ,{ 288u}
  ,{ 289u}
  ,{ 290u}
  ,{ 291u}
  ,{ 292u}
  ,{ 293u}
  ,{ 294u}
  ,{ 295u}
  ,{ 296u}
  ,{ 297u}
  ,{ 298u}
  ,{ 299u}
  ,{ 300u}
  ,{ 301u}
  ,{ 302u}
  ,{ 303u}
  ,{ 304u}
  ,{ 305u}
  ,{ 306u}
  ,{ 307u}
  ,{ 308u}
  ,{ 309u}
  ,{ 310u}
  ,{ 311u}
  ,{ 312u}
  ,{ 313u}
  ,{ 314u}
  ,{ 315u}
  ,{ 316u}
  ,{ 317u}
  ,{ 318u}
  ,{ 319u}
  ,{ 320u}
  ,{ 321u}
  ,{ 322u}
  ,{ 323u}
  ,{ 324u}
  ,{ 325u}
  ,{ 326u}
  ,{ 327u}
  ,{ 328u}
  ,{ 329u}
  ,{ 330u}
  ,{ 331u}
  ,{ 332u}
  ,{ 333u}
  ,{ 334u}
  ,{ 335u}
  ,{ 336u}
  ,{ 337u}
  ,{ 338u}
  ,{ 339u}
  ,{ 340u}
  ,{ 341u}
  ,{ 342u}
  ,{ 343u}
  ,{ 344u}
  ,{ 345u}
  ,{ 346u}
  ,{ 347u}
  ,{ 348u}
  ,{ 349u}
  ,{ 350u}
  ,{ 351u}
  ,{ 352u}
  ,{ 353u}
  ,{ 354u}
  ,{ 355u}
  ,{ 356u}
  ,{ 357u}
  ,{ 358u}
  ,{ 359u}
  ,{ 360u}
  ,{ 361u}
  ,{ 362u}
  ,{ 363u}
  ,{ 364u}
  ,{ 365u}
  ,{ 366u}
  ,{ 367u}
  ,{ 368u}
  ,{ 369u}
  ,{ 370u}
  ,{ 371u}
  ,{ 372u}
  ,{ 373u}
  ,{ 374u}
  ,{ 375u}
  ,{ 376u}
  ,{ 377u}
  ,{ 378u}
  ,{ 379u}
  ,{ 380u}
  ,{ 381u}
  ,{ 382u}
  ,{ 383u}
  ,{ 384u}
  ,{ 385u}
  ,{ 386u}
  ,{ 387u}
  ,{ 388u}
  ,{ 389u}
  ,{ 390u}
  ,{ 391u}
  ,{ 392u}
  ,{ 393u}
  ,{ 394u}
  ,{ 395u}
  ,{ 396u}
  ,{ 397u}
  ,{ 398u}
  ,{ 399u}
  ,{ 400u}
  ,{ 401u}
  ,{ 402u}
  ,{ 403u}
  ,{ 404u}
  ,{ 405u}
  ,{ 406u}
  ,{ 407u}
  ,{ 408u}
  ,{ 409u}
  ,{ 410u}
  ,{ 411u}
  ,{ 412u}
  ,{ 413u}
  ,{ 414u}
  ,{ 415u}
  ,{ 416u}
  ,{ 417u}
  ,{ 418u}
  ,{ 419u}
  ,{ 420u}
  ,{ 421u}
  ,{ 422u}
  ,{ 423u}
  ,{ 424u}
  ,{ 425u}
  ,{ 426u}
  ,{ 427u}
  ,{ 428u}
  ,{ 429u}
  ,{ 430u}
  ,{ 431u}
  ,{ 432u}
  ,{ 433u}
  ,{ 434u}
  ,{ 435u}
  ,{ 436u}
  ,{ 437u}
  ,{ 438u}
  ,{ 439u}
  ,{ 440u}
  ,{ 441u}
  ,{ 442u}
  ,{ 443u}
  ,{ 444u}
  ,{ 445u}
  ,{ 446u}
  ,{ 447u}
  ,{ 448u}
  ,{ 449u}
  ,{ 450u}
  ,{ 451u}
  ,{ 452u}
  ,{ 453u}
  ,{ 454u}
  ,{ 455u}
  ,{ 456u}
  ,{ 457u}
  ,{ 458u}
  ,{ 459u}
  ,{ 460u}
  ,{ 461u}
  ,{ 462u}
  ,{ 463u}
  ,{ 464u}
  ,{ 465u}
  ,{ 466u}
  ,{ 467u}
  ,{ 468u}
  ,{ 469u}
  ,{ 470u}
  ,{ 471u}
  ,{ 472u}
  ,{ 473u}
  ,{ 474u}
  ,{ 475u}
  ,{ 476u}
  ,{ 477u}
  ,{ 478u}
  ,{ 479u}
  ,{ 480u}
  ,{ 481u}
  ,{ 482u}
  ,{ 483u}
  ,{ 484u}
  ,{ 485u}
  ,{ 486u}
  ,{ 487u}
  ,{ 488u}
  ,{ 489u}
  ,{ 490u}
  ,{ 491u}
  ,{ 492u}
  ,{ 493u}
  ,{ 494u}
  ,{ 495u}
  ,{ 496u}
  ,{ 497u}
  ,{ 498u}
  ,{ 499u}
  ,{ 500u}
  ,{ 501u}
  ,{ 502u}
  ,{ 503u}
  ,{ 504u}
  ,{ 505u}
  ,{ 506u}
  ,{ 507u}
  ,{ 508u}
  ,{ 509u}
  ,{ 510u}
  ,{ 511u}
  ,{ 512u}
  ,{ 513u}
  ,{ 514u}
  ,{ 515u}
  ,{ 516u}
  ,{ 517u}
  ,{ 518u}
  ,{ 519u}
  ,{ 520u}
  ,{ 521u}
  ,{ 522u}
  ,{ 523u}
  ,{ 524u}
  ,{ 525u}
  ,{ 526u}
  ,{ 527u}
  ,{ 528u}
  ,{ 529u}
  ,{ 530u}
  ,{ 531u}
  ,{ 532u}
  ,{ 533u}
  ,{ 534u}
  ,{ 535u}
  ,{ 536u}
  ,{ 537u}
  ,{ 538u}
  ,{ 539u}
  ,{ 540u}
  ,{ 541u}
  ,{ 542u}
  ,{ 543u}
  ,{ 544u}
  ,{ 545u}
  ,{ 546u}
  ,{ 547u}
  ,{ 548u}
  ,{ 549u}
  ,{ 550u}
  ,{ 551u}
  ,{ 552u}
  ,{ 553u}
  ,{ 554u}
  ,{ 555u}
  ,{ 556u}
  ,{ 557u}
  ,{ 558u}
  ,{ 559u}
  ,{ 560u}
  ,{ 561u}
  ,{ 562u}
  ,{ 563u}
  ,{ 564u}
  ,{ 565u}
  ,{ 566u}
  ,{ 567u}
  ,{ 568u}
  ,{ 569u}
  ,{ 570u}
  ,{ 571u}
  ,{ 572u}
  ,{ 573u}
  ,{ 574u}
  ,{ 575u}
  ,{ 576u}
  ,{ 577u}
  ,{ 578u}
  ,{ 579u}
  ,{ 580u}
  ,{ 581u}
  ,{ 582u}
  ,{ 583u}
  ,{ 584u}
  ,{ 585u}
  ,{ 586u}
  ,{ 587u}
  ,{ 588u}
  ,{ 589u}
  ,{ 590u}
  ,{ 591u}
  ,{ 592u}
  ,{ 593u}
  ,{ 594u}
  ,{ 595u}
  ,{ 596u}
  ,{ 597u}
  ,{ 598u}
  ,{ 599u}
  ,{ 600u}
  ,{ 601u}
  ,{ 602u}
  ,{ 603u}
  ,{ 604u}
  ,{ 605u}
  ,{ 606u}
  ,{ 607u}
  ,{ 608u}
  ,{ 609u}
  ,{ 610u}
  ,{ 611u}
  ,{ 612u}
  ,{ 613u}
  ,{ 614u}
  ,{ 615u}
  ,{ 616u}
  ,{ 617u}
  ,{ 618u}
  ,{ 619u}
  ,{ 620u}
  ,{ 621u}
  ,{ 622u}
  ,{ 623u}
  ,{ 624u}
  ,{ 625u}
  ,{ 626u}
  ,{ 627u}
  ,{ 628u}
  ,{ 629u}
  ,{ 630u}
  ,{ 631u}
  ,{ 632u}
  ,{ 633u}
  ,{ 634u}
  ,{ 635u}
  ,{ 636u}
  ,{ 637u}
  ,{ 638u}
  ,{ 639u}
  ,{ 640u}
  ,{ 641u}
  ,{ 642u}
  ,{ 643u}
  ,{ 644u}
  ,{ 645u}
  ,{ 646u}
  ,{ 647u}
  ,{ 648u}
  ,{ 649u}
  ,{ 650u}
  ,{ 651u}
  ,{ 652u}
  ,{ 653u}
  ,{ 654u}
  ,{ 655u}
  ,{ 656u}
  ,{ 657u}
  ,{ 658u}
  ,{ 659u}
  ,{ 660u}
  ,{ 661u}
  ,{ 662u}
  ,{ 663u}
  ,{ 664u}
  ,{ 665u}
  ,{ 666u}
  ,{ 667u}
  ,{ 668u}
  ,{ 669u}
  ,{ 670u}
  ,{ 671u}
  ,{ 672u}
  ,{ 673u}
  ,{ 674u}
  ,{ 675u}
  ,{ 676u}
  ,{ 677u}
  ,{ 678u}
  ,{ 679u}
  ,{ 680u}
  ,{ 681u}
  ,{ 682u}
  ,{ 683u}
  ,{ 684u}
  ,{ 685u}
  ,{ 686u}
  ,{ 687u}
  ,{ 688u}
  ,{ 689u}
  ,{ 690u}
  ,{ 691u}
  ,{ 692u}
  ,{ 693u}
  ,{ 694u}
  ,{ 695u}
  ,{ 696u}
  ,{ 697u}
  ,{ 698u}
  ,{ 699u}
  ,{ 700u}
  ,{ 701u}
  ,{ 702u}
  ,{ 703u}
  ,{ 704u}
  ,{ 705u}
  ,{ 706u}
  ,{ 707u}
  ,{ 708u}
  ,{ 709u}
  ,{ 710u}
  ,{ 711u}
  ,{ 712u}
  ,{ 713u}
  ,{ 714u}
  ,{ 715u}
  ,{ 716u}
  ,{ 717u}
  ,{ 718u}
  ,{ 719u}
  ,{ 720u}
  ,{ 721u}
  ,{ 722u}
  ,{ 723u}
  ,{ 724u}
  ,{ 725u}
  ,{ 726u}
  ,{ 727u}
  ,{ 728u}
  ,{ 729u}
  ,{ 730u}
  ,{ 731u}
  ,{ 732u}
  ,{ 733u}
  ,{ 734u}
  ,{ 735u}
  ,{ 736u}
  ,{ 737u}
  ,{ 738u}
  ,{ 739u}
  ,{ 740u}
  ,{ 741u}
  ,{ 742u}
  ,{ 743u}
  ,{ 744u}
};
/*! DID signal operation classes */
CONST(Dcm_CfgDidMgrSignalOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrSignalOpClassInfo[744]=
{
   { ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DID_StartApplication_ReadData)),   2u,   2u,0x0001u} /* DID: 0x0055 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DID_StartApplication_ConditionCheckRead)),   0u,   0u,0x0200u} /* DID: 0x0055 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DID_StartApplication_WriteData)),   2u,   2u,0x1001u} /* DID: 0x0055 */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentBasicSettiStatu_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0102 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentBasicSettiStatu_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0102 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_UnlocStatuOfECUOfProteOfVehicDiagn_Read_ReadData)),   4u,   4u,0x0002u} /* DID: 0x0174 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_UnlocStatuOfECUOfProteOfVehicDiagn_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0174 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_ReadData)),   0u,8192u,0x0002u} /* DID: 0x0189 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0x0189 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicBlockDowngProteVersi_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0189 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_ReadData)),   0u,8192u,0x0002u} /* DID: 0x018A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0x018A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_InUseMonitPerfoRatio_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x018A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_ReadData)),   0u, 512u,0x0002u} /* DID: 0x018B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0x018B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKVerifFaileList_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x018B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_ReadData)),   0u, 512u,0x0002u} /* DID: 0x018F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0x018F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKSignaFaileList_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x018F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKGenerInfor_Read_Data_By_Identifier_ReadData)),   3u,   3u,0x0002u} /* DID: 0x0190 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKGenerInfor_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0190 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKTimeInfor_Read_Data_By_Identifier_ReadData)),  11u,  11u,0x0002u} /* DID: 0x0191 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKTimeInfor_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0191 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_ReadData)),   0u,3572u,0x0002u} /* DID: 0x0192 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0x0192 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKFreshInfor_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0192 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_ReadData)),   0u, 512u,0x0002u} /* DID: 0x0194 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0x0194 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SOKMissiKeyList_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0194 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_StatuProdu_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x019C */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_StatuProdu_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x019C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ConfiHash_Read_ReadData)),  32u,  32u,0x0002u} /* DID: 0x0245 */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ConfiHash_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0245 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ProgrHash_Read_ReadData)),  32u,  32u,0x0002u} /* DID: 0x0249 */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ProgrHash_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0249 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_IntegValidDataConfiList_Read_ReadData)),   0u, 502u,0x0002u} /* DID: 0x0250 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_IntegValidDataConfiList_Read_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0x0250 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_IntegValidDataConfiList_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0250 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_IntegValidDataConfiList_Read_WriteData)),   0u, 502u,0x1004u} /* DID: 0x0250 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_TABROOBDDr_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0261 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_TABROOBDDr_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0261 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_51_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0286 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_51_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0286 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_TABRORespo_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x02B3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_TABRORespo_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x02B3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_StandAmbieCondi_ReadDataByIdent_ReadData)),   9u,   9u,0x0002u} /* DID: 0x02BD */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_StandAmbieCondi_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x02BD */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(CddNpmGen2_Read_Ident_ECUKnockoutCounter)),   2u,   2u,0x0002u} /* DID: 0x02CA */                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(CddNpmGen2_Check_Read_Ident_ECUKnockoutCounter)),   0u,   0u,0x0201u} /* DID: 0x02CA */                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(CddNpmGen2_Write_Ident_ECUKnockoutCounter)),   2u,   2u,0x1002u} /* DID: 0x02CA */                                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(CddNpmGen2_Read_Ident_ECUKnockoutTimer)),   2u,   2u,0x0002u} /* DID: 0x02CB */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(CddNpmGen2_Check_Read_Ident_ECUKnockoutTimer)),   0u,   0u,0x0201u} /* DID: 0x02CB */                                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(CddNpmGen2_Write_Ident_ECUKnockoutTimer)),   2u,   2u,0x1002u} /* DID: 0x02CB */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_OBDType_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0x02CE */                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_OBDType_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x02CE */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_OBDClassDescr_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x02CF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_OBDClassDescr_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x02CF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Strommesung_Read_Data_By_Identifier_ReadData)),   4u,   4u,0x0002u} /* DID: 0x030B */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Strommesung_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x030B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_continuous_charging_power_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x030C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_continuous_charging_power_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x030C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_BMCHVKFehleHVIL_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x030D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_BMCHVKFehleHVIL_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x030D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ReadData)), 100u, 100u,0x0002u} /* DID: 0x030E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_Battery_thermal_load_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x030E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_continuous_discharge_power_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x030F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_continuous_discharge_power_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x030F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_performance_indicator_charging_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0314 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_performance_indicator_charging_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0314 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_performance_indicator_discharging_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0315 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_performance_indicator_discharging_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0315 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_BMCHVKFehleInter_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0316 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_BMCHVKFehleInter_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0316 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ReadData)),   5u,   5u,0x0002u} /* DID: 0x0318 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0318 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_return_flow_temperature_Read_Data_By_Identifier_WriteData)),   5u,   5u,0x1002u} /* DID: 0x0318 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_State_Of_Charge_Battery_customer_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0319 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_State_Of_Charge_Battery_customer_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0319 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Assembly_production_data_Read_ReadData)),  22u,  22u,0x0002u} /* DID: 0x031B */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Assembly_production_data_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x031B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Assembly_production_data_Read_WriteData)),  22u,  22u,0x1002u} /* DID: 0x031B */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_amount_of_modules_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x031C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_amount_of_modules_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x031C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Type_number_BMCE_Read_ReadData)),  11u,  11u,0x0002u} /* DID: 0x031F */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Type_number_BMCE_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x031F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Type_number_BMCE_Read_WriteData)),  11u,  11u,0x1002u} /* DID: 0x031F */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Type_number_BCUe_Read_ReadData)),  11u,  11u,0x0002u} /* DID: 0x0320 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Type_number_BCUe_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0320 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Type_number_BCUe_Read_WriteData)),  11u,  11u,0x1002u} /* DID: 0x0320 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Type_number_assembly_Read_ReadData)),  11u,  11u,0x0002u} /* DID: 0x0321 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Type_number_assembly_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0321 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Type_number_assembly_Read_WriteData)),  11u,  11u,0x1002u} /* DID: 0x0321 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_StatePCM_ReadDataByIdent_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0322 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_StatePCM_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0322 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_SOH_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0323 */                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_SOH_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0323 */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Module_part_number_Read_ReadData)),  11u,  11u,0x0002u} /* DID: 0x0324 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Module_part_number_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0324 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Module_part_number_Read_WriteData)),  11u,  11u,0x1002u} /* DID: 0x0324 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_BMC_serial_number_Read_ReadData)),  10u,  10u,0x0002u} /* DID: 0x0325 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_BMC_serial_number_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0325 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_BMC_serial_number_Read_WriteData)),  10u,  10u,0x1002u} /* DID: 0x0325 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Cell_part_number_Read_ReadData)),  11u,  11u,0x0002u} /* DID: 0x0326 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Cell_part_number_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0326 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Cell_part_number_Read_WriteData)),  11u,  11u,0x1002u} /* DID: 0x0326 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_BMCE_part_number_Read_ReadData)),  11u,  11u,0x0002u} /* DID: 0x0327 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_BMCE_part_number_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0327 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_BMCE_part_number_Read_WriteData)),  11u,  11u,0x1002u} /* DID: 0x0327 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_BMC_Status_DCLS_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0328 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_BMC_Status_DCLS_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0328 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_BCUe_part_number_Read_ReadData)),  11u,  11u,0x0002u} /* DID: 0x0329 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_BCUe_part_number_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0329 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_BCUe_part_number_Read_WriteData)),  11u,  11u,0x1002u} /* DID: 0x0329 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Assembly_part_number_Read_ReadData)),  11u,  11u,0x0002u} /* DID: 0x032A */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Assembly_part_number_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x032A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_Assembly_part_number_Read_WriteData)),  11u,  11u,0x1002u} /* DID: 0x032A */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_ReadData)),   0u,8192u,0x0002u} /* DID: 0x0407 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0x0407 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VWLogicSoftwBlockCountOfProgrAttem_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0407 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_ReadData)),   0u,8192u,0x0002u} /* DID: 0x040F */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0x040F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VWLogicSoftwBlockLockValue_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x040F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0410 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0410 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_BootlTPBlock_Read_WriteData)),   1u,   1u,0x1002u} /* DID: 0x0410 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ProgrPreco_Read_ReadData)),   0u, 256u,0x0002u} /* DID: 0x0448 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ProgrPreco_Read_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0x0448 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ProgrPreco_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0448 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_ReadData)),   3u,   3u,0x0002u} /* DID: 0x04FC */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x04FC */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_ProduDeact_Read_WriteData)),   3u,   3u,0x1002u} /* DID: 0x04FC */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_Produ_Read_ReadData)),   3u,   3u,0x0002u} /* DID: 0x04FE */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_Produ_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x04FE */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_Produ_Read_WriteData)),   3u,   3u,0x1002u} /* DID: 0x04FE */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_BMC_Strom_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x050C */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_BMC_Strom_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x050C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_BMC_Mode_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x050E */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_BMC_Mode_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x050E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_BMC_Vorlade_Zielspannung_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x050F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_BMC_Vorlade_Zielspannung_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x050F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_34_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0511 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_34_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0511 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_5_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0514 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0514 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0515 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0515 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_3_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0516 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0516 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_1_1_ReadData)),  48u,  48u,0x0002u} /* DID: 0x054A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x054A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_ReadData)),   9u,   9u,0x0002u} /* DID: 0x054B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_2_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x054B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0x0EF_Read_ReadData)),  24u,  24u,0x0002u} /* DID: 0x0563 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0x0EF_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0563 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_48_ReadData)),  24u,  24u,0x0002u} /* DID: 0x0564 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_48_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0564 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_50_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0565 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_50_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0565 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_1_ReadData)),  64u,  64u,0x0002u} /* DID: 0x0566 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0566 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_ReadData)),  64u,  64u,0x0002u} /* DID: 0x0567 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0567 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_ReadData)),  64u,  64u,0x0002u} /* DID: 0x0568 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0568 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_ReadData)),  64u,  64u,0x0002u} /* DID: 0x0569 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0569 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_ReadData)),  64u,  64u,0x0002u} /* DID: 0x056A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x056A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_ReadData)),  64u,  64u,0x0002u} /* DID: 0x056B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x056B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_ReadData)),  64u,  64u,0x0002u} /* DID: 0x056C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x056C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_ReadData)),  64u,  64u,0x0002u} /* DID: 0x056D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x056D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_ReadData)),  64u,  64u,0x0002u} /* DID: 0x056E */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x056E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_ReadData)),  64u,  64u,0x0002u} /* DID: 0x056F */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x056F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_ReadData)),  64u,  64u,0x0002u} /* DID: 0x0570 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0570 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_ReadData)),  64u,  64u,0x0002u} /* DID: 0x0571 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_43_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0571 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_1_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0572 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0572 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_47_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0573 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_47_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0573 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0574 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_49_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0574 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_20_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0575 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_20_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0575 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_41_ReadData)),  14u,  14u,0x0002u} /* DID: 0x057A */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_41_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x057A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_40_ReadData)),   4u,   4u,0x0002u} /* DID: 0x057B */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_40_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x057B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_39_ReadData)),   1u,   1u,0x0002u} /* DID: 0x057C */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_39_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x057C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_13_ReadData)),   6u,   6u,0x0002u} /* DID: 0x057D */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_13_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x057D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_38_ReadData)),   1u,   1u,0x0002u} /* DID: 0x057E */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_38_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x057E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_19_ReadData)),   3u,   3u,0x0002u} /* DID: 0x0581 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_19_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0581 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_35_ReadData)),   5u,   5u,0x0002u} /* DID: 0x0582 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_35_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0582 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_16_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0583 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_16_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0583 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_42_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0584 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_42_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0584 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_37_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0585 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_37_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0585 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_1_ReadData)),   4u,   4u,0x0002u} /* DID: 0x0586 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0586 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_2_ReadData)),   4u,   4u,0x0002u} /* DID: 0x0587 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0587 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_2_ReadData)),   4u,   4u,0x0002u} /* DID: 0x0588 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0588 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_ReadData)),   4u,   4u,0x0002u} /* DID: 0x0589 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0589 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_ReadData)),   4u,   4u,0x0002u} /* DID: 0x058A */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x058A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_12_ReadData)),   3u,   3u,0x0002u} /* DID: 0x058B */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_12_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x058B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_ReadData)),   4u,   4u,0x0002u} /* DID: 0x058C */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x058C */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_11_ReadData)),   3u,   3u,0x0002u} /* DID: 0x058D */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_11_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x058D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_4_ReadData)),   1u,   1u,0x0002u} /* DID: 0x058F */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_4_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x058F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_10_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0590 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_10_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0590 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_3_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0595 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_DID0xEFD_Read_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0595 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_6_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0596 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_6_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0596 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_18_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0597 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_18_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0597 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_17_ReadData)),   1u,   1u,0x0002u} /* DID: 0x059A */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_17_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x059A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_High_voltage_battery_total_voltage_Read_Data_By_Identifier_ReadData)),   4u,   4u,0x0002u} /* DID: 0x059B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_High_voltage_battery_total_voltage_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x059B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_ReadData)), 152u, 152u,0x0002u} /* DID: 0x05B1 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05B1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_ReadData)), 152u, 152u,0x0002u} /* DID: 0x05B2 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05B2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_ReadData)), 152u, 152u,0x0002u} /* DID: 0x05B3 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05B3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_ReadData)), 152u, 152u,0x0002u} /* DID: 0x05B4 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05B4 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_ReadData)), 152u, 152u,0x0002u} /* DID: 0x05B5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05B5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_ReadData)), 152u, 152u,0x0002u} /* DID: 0x05B6 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05B6 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_ReadData)), 152u, 152u,0x0002u} /* DID: 0x05B7 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05B7 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_1_ReadData)), 152u, 152u,0x0002u} /* DID: 0x05B8 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05B8 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_ReadData)), 152u, 152u,0x0002u} /* DID: 0x05B9 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05B9 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_1_ReadData)), 152u, 152u,0x0002u} /* DID: 0x05BA */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05BA */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_2_ReadData)), 152u, 152u,0x0002u} /* DID: 0x05BB */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05BB */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_3_ReadData)), 152u, 152u,0x0002u} /* DID: 0x05BC */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_46_1_1_1_1_1_1_2_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05BC */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_45_ReadData)),   6u,   6u,0x0002u} /* DID: 0x05BD */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_45_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05BD */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_53_ReadData)),  12u,  12u,0x0002u} /* DID: 0x05C0 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_53_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05C0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_52_ReadData)),  48u,  48u,0x0002u} /* DID: 0x05C6 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_52_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05C6 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_55_ReadData)), 110u, 110u,0x0002u} /* DID: 0x05C7 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_55_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05C7 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_56_ReadData)),   1u,   1u,0x0002u} /* DID: 0x05E3 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_56_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x05E3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0600 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0600 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWCodinValue_Read_WriteData)),   1u,   1u,0x1002u} /* DID: 0x0600 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_ReadData)),   0u, 240u,0x0002u} /* DID: 0x064C */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0x064C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_11_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x064C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_1_ReadData)),   2u,   2u,0x0002u} /* DID: 0x064F */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x064F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_15_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0660 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_15_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0660 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_ReadData)),   3u,   3u,0x0002u} /* DID: 0x066D */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_33_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x066D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_1_ReadData)),  27u,  27u,0x0002u} /* DID: 0x066E */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x066E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_ReadData)),  12u,  12u,0x0002u} /* DID: 0x066F */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x066F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0670 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0670 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_32_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0671 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_32_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0671 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_31_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0672 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_31_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0672 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_ReadData)),  12u,  12u,0x0002u} /* DID: 0x0673 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0673 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0674 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0674 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_1_ReadData)),  27u,  27u,0x0002u} /* DID: 0x0675 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0675 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_1_ReadData)),  27u,  27u,0x0002u} /* DID: 0x0676 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0676 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_ReadData)),  27u,  27u,0x0002u} /* DID: 0x0677 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0677 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_ReadData)),  27u,  27u,0x0002u} /* DID: 0x0678 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_4_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0678 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_ReadData)),  27u,  27u,0x0002u} /* DID: 0x0679 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0679 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_ReadData)),  27u,  27u,0x0002u} /* DID: 0x067A */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x067A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_ReadData)),  27u,  27u,0x0002u} /* DID: 0x067B */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x067B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_ReadData)),  27u,  27u,0x0002u} /* DID: 0x067C */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x067C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_ReadData)),  27u,  27u,0x0002u} /* DID: 0x067D */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x067D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_ReadData)),  27u,  27u,0x0002u} /* DID: 0x067E */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x067E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_ReadData)),  27u,  27u,0x0002u} /* DID: 0x067F */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x067F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_ReadData)),   8u,   8u,0x0002u} /* DID: 0x0680 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0680 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_isolation_measurement_actual_and_requested_state_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0681 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_isolation_measurement_actual_and_requested_state_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0681 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0682 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0682 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_1_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0683 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0683 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_22_1_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0684 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_22_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0684 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0685 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0685 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_25_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0686 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_25_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0686 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_26_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0687 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_26_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0687 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_24_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0688 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_24_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0688 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_23_ReadData)),   6u,   6u,0x0002u} /* DID: 0x0689 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_23_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0689 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu2_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0x068A */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu2_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x068A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu1_Read_ReadData)),   2u,   2u,0x0002u} /* DID: 0x068B */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu1_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x068B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_ReadData)), 386u, 386u,0x0002u} /* DID: 0x0691 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0691 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_2_ReadData)), 110u, 110u,0x0002u} /* DID: 0x06AF */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_21_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0x06B1 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06B1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_ReadData)),   1u,   1u,0x0002u} /* DID: 0x06B2 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06B2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_2_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06B3 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06B3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_84_ReadData)),   4u,   4u,0x0002u} /* DID: 0x06B5 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_84_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06B5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_83_ReadData)),   4u,   4u,0x0002u} /* DID: 0x06B6 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_83_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06B6 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_82_ReadData)),   1u,   1u,0x0002u} /* DID: 0x06B7 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_82_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06B7 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_74_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06B8 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_74_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06B8 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_73_ReadData)),   4u,   4u,0x0002u} /* DID: 0x06B9 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_73_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06B9 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_72_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06BA */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_72_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06BA */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_71_ReadData)),   4u,   4u,0x0002u} /* DID: 0x06BB */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_71_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06BB */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0x06BC */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_70_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06BC */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06BD */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06BD */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06BE */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06BE */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_1_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06BF */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_9_2_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06BF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_ReadData)),   3u,   3u,0x0002u} /* DID: 0x06C0 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06C0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_2_ReadData)),   3u,   3u,0x0002u} /* DID: 0x06C1 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_8_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06C1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0x06C2 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06C2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_ReadData)),   1u,   1u,0x0002u} /* DID: 0x06C3 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_7_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06C3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_1_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06C4 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06C4 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06C5 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06C5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_1_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06C6 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06C6 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06C7 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06C7 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_1_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06C8 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06C8 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_2_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06C9 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06C9 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_61_ReadData)),   3u,   3u,0x0002u} /* DID: 0x06CA */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_61_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06CA */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0x06CB */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06CB */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_5_ReadData)),   4u,   4u,0x0002u} /* DID: 0x06CC */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06CC */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_3_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06D0 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_36_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06D0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_2_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06D1 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06D1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_3_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06D2 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06D2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_6_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06D3 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_6_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06D3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_3_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06D4 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_60_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06D4 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_14_ReadData)),   3u,   3u,0x0002u} /* DID: 0x06D5 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_14_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06D5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_59_2_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06D6 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_59_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06D6 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_58_1_ReadData)),   2u,   2u,0x0002u} /* DID: 0x06D7 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_58_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x06D7 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_BMC_clamp_30c_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0806 */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_BMC_clamp_30c_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0806 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0902 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0902 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_ActivOfDevelMessa_Read_WriteData)),   1u,   1u,0x1002u} /* DID: 0x0902 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(CddNpmGen2_Read_Ident_KnockoutTestMode)),   1u,   1u,0x0001u} /* DID: 0x09F3 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(CddNpmGen2_Check_Read_Ident_KnockoutTestMode)),   0u,   0u,0x0200u} /* DID: 0x09F3 */                                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(CddNpmGen2_Write_Ident_KnockoutTestMode)),   1u,   1u,0x1001u} /* DID: 0x09F3 */                                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_BMC_Hybrid_Kundendienstfehler_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1001 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_BMC_Hybrid_Kundendienstfehler_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1001 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_Spannung_Nebenverbraucher_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1003 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_Spannung_Nebenverbraucher_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1003 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Prozessorauslastung_Read_Data_By_Identifier_ReadData)),   4u,   4u,0x0002u} /* DID: 0x1010 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Prozessorauslastung_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1010 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Vishnu_DID_ReadData)),   0u,   8u,0x0002u} /* DID: 0x1122 */                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Vishnu_DID_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0x1122 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Vishnu_DID_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1122 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Vishnu_DID_WriteData)),   0u,   8u,0x1004u} /* DID: 0x1122 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_StateOfBatteShutoCrash_ReadDataByIdent_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1E06 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_StateOfBatteShutoCrash_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1E06 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_StateOfBattePowerReduc_ReadDataByIdent_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1E0A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_StateOfBattePowerReduc_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1E0A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_StateOfBatteMIL_ReadDataByIdent_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1E0D */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_StateOfBatteMIL_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1E0D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_BatteTempeMaxim_ReadDataByIdent_ReadData)),   4u,   4u,0x0002u} /* DID: 0x1E0E */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_BatteTempeMaxim_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1E0E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_BatteTempeMinim_ReadDataByIdent_ReadData)),   4u,   4u,0x0002u} /* DID: 0x1E0F */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_BatteTempeMinim_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1E0F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_BatteTempeAvera_ReadDataByIdent_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1E10 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_BatteTempeAvera_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1E10 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_IsolaResisSystePlus_ReadDataByIdent_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1E17 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_IsolaResisSystePlus_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1E17 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_IsolaResisSysteMinus_ReadDataByIdent_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1E19 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_IsolaResisSysteMinus_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1E19 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_CellStateOfChargMaxim_ReadDataByIdent_ReadData)),   4u,   4u,0x0002u} /* DID: 0x1E2C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_CellStateOfChargMaxim_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1E2C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_CellStateOfChargMinim_ReadDataByIdent_ReadData)),   4u,   4u,0x0002u} /* DID: 0x1E2D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_CellStateOfChargMinim_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1E2D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_CellVoltaMaxim_ReadDataByIdent_ReadData)),   7u,   7u,0x0002u} /* DID: 0x1E33 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_CellVoltaMaxim_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1E33 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_CellVoltaMinim_ReadDataByIdent_ReadData)),   7u,   7u,0x0002u} /* DID: 0x1E34 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_CellVoltaMinim_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1E34 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_CellVoltaSum_ReadDataByIdent_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1E3B */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_CellVoltaSum_ReadDataByIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1E3B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_Milea_Read_ReadData)),   3u,   3u,0x0002u} /* DID: 0x2203 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_Milea_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2203 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_ReadData)),   3u,   3u,0x0002u} /* DID: 0x2216 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2216 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_1_ReadData)),   4u,   4u,0x0002u} /* DID: 0x2217 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2217 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DC_charging_station_actual_voltage_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x2700 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DC_charging_station_actual_voltage_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2700 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_displayed_state_of_charge_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x2701 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_displayed_state_of_charge_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2701 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Charisma_requestet_driving_program_hv_battery_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x2702 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Charisma_requestet_driving_program_hv_battery_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2702 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_BMCHVKFehleSD_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x2703 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_BMCHVKFehleSD_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2703 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_banks_actual_mode_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x2704 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_banks_actual_mode_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2704 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_banks_allowed_modes_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x2706 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_banks_allowed_modes_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2706 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_flow_temperature_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x2707 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_flow_temperature_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2707 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_BMC_IWU_Status_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x2708 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_BMC_IWU_Status_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2708 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_maximum_charging_power_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x270A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_maximum_charging_power_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x270A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_maximum_discharge_power_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x270B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_maximum_discharge_power_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x270B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_maximum_charging_current_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x270C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_maximum_charging_current_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x270C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_maximum_discharge_current_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x270D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_battery_maximum_discharge_current_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x270D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_coordinator_requestet_voltage_hv_battery_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x270F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_HV_coordinator_requestet_voltage_hv_battery_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x270F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_banks_actual_voltage_Read_Data_By_Identifier_ReadData)),   8u,   8u,0x0002u} /* DID: 0x2710 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_banks_actual_voltage_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2710 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_HV_battery_modules_actual_voltage_Read_ReadData)),  24u,  24u,0x0002u} /* DID: 0x2711 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_HV_battery_modules_actual_voltage_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2711 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_BMCHVKEoHVLState_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x2712 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_BMCHVKEoHVLState_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2712 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_contactors_actual_states_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x2716 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_contactors_actual_states_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2716 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_energy_content_actual_Read_Data_By_Identifier_ReadData)),   4u,   4u,0x0002u} /* DID: 0x271A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_energy_content_actual_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x271A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_energy_content_maximum_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x271B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_energy_content_maximum_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x271B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_technical_state_of_charge_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x271D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Battery_technical_state_of_charge_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x271D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VkmsVkmsv_Read_Data_By_Identifier_ReadData)),  18u,  18u,0x0002u} /* DID: 0x2C55 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VkmsVkmsv_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2C55 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VkmsTrainCount_Read_Data_By_Identifier_ReadData)),   3u,   3u,0x0002u} /* DID: 0x2C56 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VkmsTrainCount_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2C56 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_ReadData)),   0u, 512u,0x0002u} /* DID: 0x2C57 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0x2C57 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VkmsMissiKeyHisto_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2C57 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_ReadData)),   0u,1022u,0x0002u} /* DID: 0x2C60 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0x2C60 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VkmsKeyList_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x2C60 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ModeOfProteOfVehicDiagn_ReadDataByIdentifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x3C0E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ModeOfProteOfVehicDiagn_ReadDataByIdentifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x3C0E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Zero_Potential_Status_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x4219 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Zero_Potential_Status_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x4219 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_ReadData)),  26u,  26u,0x0002u} /* DID: 0x484E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x484E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_AdaptOfChineSeriaNumbe_Read_WriteData)),  26u,  26u,0x1002u} /* DID: 0x484E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_2_ReadData)),   2u,   2u,0x0002u} /* DID: 0x50CE */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x50CE */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ServiDiscoState_Read_Data_By_Identifier_ReadData)),   1u,   1u,0x0002u} /* DID: 0x5164 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ServiDiscoState_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x5164 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Minimum_Discharge_Voltage_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x5170 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Minimum_Discharge_Voltage_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x5170 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Maximum_Charge_Voltage_Read_Data_By_Identifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x5171 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_Maximum_Charge_Voltage_Read_Data_By_Identifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x5171 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_StatuECUStandMode_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0xC101 */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_StatuECUStandMode_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xC101 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuECUIdent_Read_ReadData)),  11u,  11u,0x0002u} /* DID: 0xC107 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuECUIdent_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xC107 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SFDDevelModeActiv_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0xC10B */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SFDDevelModeActiv_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xC10B */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SFDDevelModeActiv_Read_WriteData)),   1u,   1u,0x1002u} /* DID: 0xC10B */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ECUStandMode1_Read_ReadData)),   4u,   4u,0x0002u} /* DID: 0xC110 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ECUStandMode1_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xC110 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ECUStandMode1_Read_WriteData)),   4u,   4u,0x1002u} /* DID: 0xC110 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ECUStandMode2_Read_ReadData)),   4u,   4u,0x0002u} /* DID: 0xC111 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ECUStandMode2_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xC111 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_ECUStandMode2_Read_WriteData)),   4u,   4u,0x1002u} /* DID: 0xC111 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_6_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE001 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_6_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE001 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_7_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE009 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_7_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE009 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_3_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE00A */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE00A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_4_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE00B */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_4_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE00B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_3_ReadData)),   2u,   2u,0x0002u} /* DID: 0xE00C */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_30_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE00C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_ReadData)),  32u,  32u,0x0002u} /* DID: 0xE00D */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE00D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_ReadData)),  32u,  32u,0x0002u} /* DID: 0xE00E */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE00E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_ReadData)),  16u,  16u,0x0002u} /* DID: 0xE010 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE010 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_1_ReadData)),  16u,  16u,0x0002u} /* DID: 0xE011 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_63_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE011 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_8_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE012 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_8_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE012 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE013 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE013 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE014 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE014 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE015 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE015 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE016 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE016 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xE018 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_27_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE018 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_5_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE019 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE019 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_4_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE01A */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_28_4_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE01A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_5_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE01B */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE01B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_2_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE01C */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE01C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE01D */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE01D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE01E */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE01E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE01F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE01F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_1_ReadData)),   4u,   4u,0x0002u} /* DID: 0xE022 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_29_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE022 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_ReadData)),   9u,   9u,0x0002u} /* DID: 0xE030 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE030 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_ReadData)),   9u,   9u,0x0002u} /* DID: 0xE031 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE031 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_ReadData)),  14u,  14u,0x0002u} /* DID: 0xE032 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE032 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_ReadData)),  14u,  14u,0x0002u} /* DID: 0xE033 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE033 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_ReadData)),   9u,   9u,0x0002u} /* DID: 0xE034 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE034 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_ReadData)),   9u,   9u,0x0002u} /* DID: 0xE035 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE035 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_ReadData)),   9u,   9u,0x0002u} /* DID: 0xE036 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE036 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_ReadData)),   9u,   9u,0x0002u} /* DID: 0xE037 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE037 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_ReadData)),  14u,  14u,0x0002u} /* DID: 0xE038 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE038 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_WriteData)),  14u,  14u,0x1002u} /* DID: 0xE038 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_ReadData)),  14u,  14u,0x0002u} /* DID: 0xE039 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE039 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_ReadData)),  14u,  14u,0x0002u} /* DID: 0xE03A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE03A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_ReadData)),  14u,  14u,0x0002u} /* DID: 0xE03B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE03B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_ReadData)),  24u,  24u,0x0002u} /* DID: 0xE03D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_1_1_1_1_1_1_1_1_1_1_1_1_1_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xE03D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_13_ReadData)),   3u,   3u,0x0002u} /* DID: 0xEE02 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_13_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEE02 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_2_1_ReadData)),   3u,   3u,0x0002u} /* DID: 0xEE03 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_57_2_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xEE03 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_Finge_Read_ReadData)),   9u,   9u,0x0002u} /* DID: 0xF15A */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_Finge_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF15A */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_Finge_Read_WriteData)),   9u,   9u,0x1002u} /* DID: 0xF15A */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_ReadData)),   0u,8192u,0x0002u} /* DID: 0xF15B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0xF15B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_FingeAndProgrDateOfLogicSoftwBlock_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF15B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ReadData)),  23u,  23u,0x0002u} /* DID: 0xF17C */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWFAZITIdentStrin_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF17C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF186 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_ActivDiagnSessi_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF186 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ReadData)),  11u,  11u,0x0002u} /* DID: 0xF187 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWSparePartNumbe_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF187 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF189 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWAppliSoftwVersiNumbe_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF189 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_ReadData)),   0u,  32u,0x0002u} /* DID: 0xF18A */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0xF18A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_SysteSupplIdent_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ReadData)),  20u,  20u,0x0002u} /* DID: 0xF18C */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_ECUSeriaNumbe_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ReadData)),  50u,  50u,0x0002u} /* DID: 0xF18F */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_RegulXSoftwIdentNumbe_Read_WriteData)),  50u,  50u,0x1002u} /* DID: 0xF18F */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VehicIdentNumbe_Read_ReadData)),  17u,  17u,0x0002u} /* DID: 0xF190 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VehicIdentNumbe_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF190 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VWECUHardwNumbe_Read_ReadData)),  11u,  11u,0x0002u} /* DID: 0xF191 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VWECUHardwNumbe_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF191 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_ReadData)),  11u,  11u,0x0002u} /* DID: 0xF192 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF192 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_1_WriteData)),  11u,  11u,0x1002u} /* DID: 0xF192 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_2_ReadData)),  11u,  11u,0x0002u} /* DID: 0xF193 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF193 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_3_ReadData)),  11u,  11u,0x0002u} /* DID: 0xF194 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF194 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_4_ReadData)),  11u,  11u,0x0002u} /* DID: 0xF195 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROSyste_Read_4_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF195 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VWSysteNameOrEnginType_Read_ReadData)),  13u,  13u,0x0002u} /* DID: 0xF197 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VWSysteNameOrEnginType_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF197 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_ReadData)),   0u,  25u,0x0002u} /* DID: 0xF19E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0xF19E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileIdent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF19E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_ReadData)),  11u,  11u,0x0002u} /* DID: 0xF1A0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWDataSetNumbeOrECUDataContaNumbe_Read_WriteData)),  11u,  11u,0x1002u} /* DID: 0xF1A0 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROVWDat_Read_1_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF1A1 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROVWDat_Read_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A1 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_TABROVWDat_Read_1_WriteData)),   4u,   4u,0x1002u} /* DID: 0xF1A1 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileVersi_ReadData)),   6u,   6u,0x0002u} /* DID: 0xF1A2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentASAMODXFileVersi_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF1A3 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VWECUHardwVersiNumbe_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VWWorksSysteName_Read_ReadData)),   5u,   5u,0x0002u} /* DID: 0xF1AA */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VWWorksSysteName_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AA */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ReadData)),  24u,  24u,0x0002u} /* DID: 0xF1AB */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_ReadDataByIdentVWLogicSoftwBlockVersi_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AB */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadData)),   0u,8192u,0x0002u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_AUTOSStandAppliSoftwIdent_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1AF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_ReadData)),   0u,8192u,0x0002u} /* DID: 0xF1B1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0xF1B1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWAppliDataSetIdent_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1B1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_ReadData)),   0u,8192u,0x0002u} /* DID: 0xF1B3 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0xF1B3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VWDataSetName_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1B3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ReadData)),  26u,  26u,0x0002u} /* DID: 0xF1B4 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_TechnSpeciVersi_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1B4 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SysteIdent_Read_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF1B6 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_SysteIdent_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1B6 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadData)),   0u, 517u,0x0002u} /* DID: 0xF1D5 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0xF1D5 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_TABROFDSPr_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1D5 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_TABROECUPr_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF1DF */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_TABROECUPr_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1DF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(DcmDspDataReadFnc_Data_TABROW_DCMCALLODID_Read)),   5u,   5u,0x0001u} /* DID: 0xF1E0 */                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(DcmDspDataConditionCheckReadFnc_Data_TABROW_DCMCALLODID_Read)),   0u,   0u,0x0200u} /* DID: 0xF1E0 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(DcmDspDataWriteFnc_Data_TABROW_DCMCALLODID_Read)),   5u,   5u,0x1001u} /* DID: 0xF1E0 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_PIMDID_Read_ReadData)),  10u,  10u,0x0002u} /* DID: 0xF1E1 */                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_PIMDID_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1E1 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_PIMDID_Read_WriteData)),  10u,  10u,0x1002u} /* DID: 0xF1E1 */                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_CanTPData_Read_ReadData)), 150u, 150u,0x0002u} /* DID: 0xF1E2 */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_CanTPData_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1E2 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_CanTPData_Read_WriteData)), 150u, 150u,0x1002u} /* DID: 0xF1E2 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_14_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF1F2 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuMeasu_Read_14_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1F2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VishnDID_Read_ReadData)), 100u, 100u,0x0002u} /* DID: 0xF1F3 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_TABROW_VishnDID_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1F3 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dcm_DidMgr_F400_ReadData)),   4u,   4u,0x0008u} /* DID: 0xF400 */                                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_MonitStatuSinceDTCsClear_Read_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF401 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_MonitStatuSinceDTCsClear_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF401 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF404 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_CalcuLOADValue_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF404 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF405 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_EnginCoolaTempe_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF405 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF40C */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_EnginRPM_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF40C */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF40D */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_VehicSpeedSenso_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF40D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF41F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_TimeSinceEnginStart_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF41F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dcm_DidMgr_F420_ReadData)),   4u,   4u,0x0008u} /* DID: 0xF420 */                                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dcm_DidMgr_F440_ReadData)),   4u,   4u,0x0008u} /* DID: 0xF440 */                                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF441 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_MonitStatuThisDriviCycle_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF441 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF442 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_ContrModulVolta_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF442 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF449 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_AccelPedalPositD_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF449 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dcm_DidMgr_F800_ReadData)),   4u,   4u,0x0008u} /* DID: 0xF800 */                                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadData)),   0u,8192u,0x0002u} /* DID: 0xF804 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0xF804 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_CalibIdent_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF804 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ReadData)),  20u,  20u,0x0002u} /* DID: 0xF80A */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_ECUNA_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF80A */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_ReadData)),   1u,   1u,0x0002u} /* DID: 0xFEFD */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xFEFD */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Data_DiagnServi_TABROW_NeuCalibData_Read_WriteData)),   1u,   1u,0x1002u} /* DID: 0xFEFD */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! RID properties */
CONST(Dcm_CfgRidMgrRidInfoType, DCM_CONST) Dcm_CfgRidMgrRidInfo[47]=
{
   {    0u,   3u,0x01u, 0u} /* RID: 0x0203 */
  ,{    1u,   3u,0x01u, 0u} /* RID: 0x0253 */
  ,{    2u,   3u,0x01u, 0u} /* RID: 0x0254 */
  ,{    3u,   3u,0x07u, 0u} /* RID: 0x029A */
  ,{    6u,   2u,0x07u, 0u} /* RID: 0x0300 */
  ,{    9u,   2u,0x07u, 0u} /* RID: 0x0303 */
  ,{   12u,   2u,0x07u, 0u} /* RID: 0x0304 */
  ,{   15u,   2u,0x07u, 0u} /* RID: 0x0307 */
  ,{   18u,   2u,0x07u, 0u} /* RID: 0x0309 */
  ,{   21u,   2u,0x07u, 0u} /* RID: 0x030A */
  ,{   24u,   2u,0x07u, 0u} /* RID: 0x030B */
  ,{   27u,   2u,0x07u, 0u} /* RID: 0x030C */
  ,{   30u,   2u,0x07u, 0u} /* RID: 0x030F */
  ,{   33u,   2u,0x01u, 0u} /* RID: 0x0311 */
  ,{   34u,   2u,0x07u, 0u} /* RID: 0x0315 */
  ,{   37u,   2u,0x07u, 0u} /* RID: 0x0316 */
  ,{   40u,   2u,0x07u, 0u} /* RID: 0x0318 */
  ,{   43u,   2u,0x07u, 0u} /* RID: 0x0319 */
  ,{   46u,   2u,0x07u, 0u} /* RID: 0x0366 */
  ,{   49u,   2u,0x07u, 0u} /* RID: 0x0390 */
  ,{   52u,   2u,0x07u, 0u} /* RID: 0x0399 */
  ,{   55u,   2u,0x07u, 0u} /* RID: 0x03C6 */
  ,{   58u,   2u,0x07u, 0u} /* RID: 0x03E7 */
  ,{   61u,   2u,0x07u, 0u} /* RID: 0x0475 */
  ,{   64u,   0u,0x01u, 0u} /* RID: 0x0544 */
  ,{   65u,   2u,0x05u, 0u} /* RID: 0x0648 */
  ,{   67u,   3u,0x07u, 0u} /* RID: 0x065E */
  ,{   70u,   2u,0x01u, 0u} /* RID: 0x06A8 */
  ,{   71u,   2u,0x01u, 0u} /* RID: 0x06A9 */
  ,{   72u,   3u,0x01u, 0u} /* RID: 0x0F02 */
  ,{   73u,   2u,0x01u, 0u} /* RID: 0xC004 */
  ,{   74u,   2u,0x01u, 0u} /* RID: 0xC005 */
  ,{   75u,   2u,0x01u, 0u} /* RID: 0xC007 */
  ,{   76u,   3u,0x01u, 0u} /* RID: 0xC008 */
  ,{   77u,   2u,0x01u, 0u} /* RID: 0xC009 */
  ,{   78u,   2u,0x05u, 0u} /* RID: 0xC00A */
  ,{   80u,   2u,0x05u, 0u} /* RID: 0xC00B */
  ,{   82u,   2u,0x05u, 0u} /* RID: 0xC00C */
  ,{   84u,   2u,0x05u, 0u} /* RID: 0xC00D */
  ,{   86u,   2u,0x05u, 0u} /* RID: 0xC00F */
  ,{   88u,   2u,0x01u, 0u} /* RID: 0xC011 */
  ,{   89u,   2u,0x01u, 0u} /* RID: 0xC012 */
  ,{   90u,   2u,0x01u, 0u} /* RID: 0xC013 */
  ,{   91u,   2u,0x07u, 0u} /* RID: 0xC102 */
  ,{   94u,   3u,0x07u, 0u} /* RID: 0xFEFE */
  ,{   97u,   3u,0x07u, 0u} /* RID: 0xFEFF */
  ,{  100u,   4u,0x01u, 0u} /* RID: 0xFF01 */
};
/*! RID operation properties */
CONST(Dcm_CfgRidMgrOpInfoType, DCM_CONST) Dcm_CfgRidMgrOpInfo[101]=
{
   { ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrPreco_Start)),   0u,   0u,   0u, 255u, 6u, 0u} /* RID: 0x0203 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0253_Start)),   2u,   2u,   0u,  34u, 9u, 0u} /* RID: 0x0253 */                                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0254_Start)),   4u,   4u,   0u, 325u, 9u, 0u} /* RID: 0x0254 */                                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_Start)),   2u,   2u,   1u,   1u, 2u, 0u} /* RID: 0x029A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x029A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_CalcuModulHashValue_Start_Routine_COP_RequestResults)),   0u,   0u,   0u,  37u, 6u, 0u} /* RID: 0x029A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_Start)),   1u,   1u,   1u,   1u, 2u, 0u} /* RID: 0x0300 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0300 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_RequestResults)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0300 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0303 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0303 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfContaError_Start_Routine_RequestResults)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0303 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_Start)),   1u,   1u,   1u,   1u, 2u, 0u} /* RID: 0x0304 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0304 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfVoltaMeasuChann_Start_Routine_RequestResults)),   0u,   0u,   6u,   6u, 3u, 0u} /* RID: 0x0304 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0307 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0307 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_1_RequestResults)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0307 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0309 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0309 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_3_RequestResults)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0309 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x030A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x030A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_2_RequestResults)),   0u,   0u,   3u,   3u, 3u, 0u} /* RID: 0x030A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_Start)),   1u,   1u,   1u,   1u, 2u, 0u} /* RID: 0x030B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x030B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfModulParam_Start_Routine_RequestResults)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x030B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_Start)),   1u,   1u,   1u,   1u, 2u, 0u} /* RID: 0x030C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x030C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_RequestResults)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x030C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x030F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x030F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_RequestResults)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x030F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiImmedResul_Start_Routine_Start)),   1u,   1u, 100u, 100u, 2u, 0u} /* RID: 0x0311 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0315 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0315 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_5_RequestResults)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0315 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0316 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0316 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NeuRoutiBasicSetti_Start_Routine_4_2_RequestResults)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0316 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0318 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0318 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetHVBatteAfterSepar_Start_Routine_RequestResults)),   0u,   0u,   5u,   5u, 3u, 0u} /* RID: 0x0318 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_Start)),   1u,   1u,   1u,   1u, 2u, 0u} /* RID: 0x0319 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0319 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_IsolaMeasuDeactMode_Start_Routine_1_RequestResults)),   0u,   0u,   3u,   3u, 3u, 0u} /* RID: 0x0319 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_Start)),   3u,   3u,   1u,   1u, 2u, 0u} /* RID: 0x0366 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0366 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetOfAllAdapt_Start_Routine_COP_RequestResults)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0366 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_Start)),   1u,   1u,   1u,   1u, 2u, 0u} /* RID: 0x0390 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0390 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfBatteBankMode_Start_Routine_RequestResults)),   0u,   0u,   4u,   4u, 3u, 0u} /* RID: 0x0390 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0399 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0399 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_NewRoutiBasicSetti_Start_Routine_RequestResults)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0399 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_Start)),  15u,  15u,   1u,   1u, 2u, 0u} /* RID: 0x03C6 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x03C6 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_AdaptOfCellBalan_Start_Routine_RequestResults)),   0u,   0u,   2u,   2u, 3u, 0u} /* RID: 0x03C6 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_Start)),   3u,   3u,   1u,   1u, 2u, 0u} /* RID: 0x03E7 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x03E7 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetToFactoSetti_Start_Routine_COP_RequestResults)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x03E7 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0475 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0475 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetHardCrashFlag_Start_Routine_RequestResults)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0475 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_Verify_partial_software_checksum_Start_Routine_Start)),   0u,4113u,   1u,   1u, 5u, 0u} /* RID: 0x0544 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_TABROW_VkmsDebug_Start_Routine_Start)),   0u, 513u,   0u,   0u, 4u, 0u} /* RID: 0x0648 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_TABROW_VkmsDebug_Start_Routine_RequestResults)),   0u,   0u,   0u,  51u, 6u, 0u} /* RID: 0x0648 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x065E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x065E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ClearDowngProteData_Start_Routine_COP_RequestResults)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x065E */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetHealiInhib_Start_Routine_Start)),   1u,   1u,   1u,   1u, 2u, 0u} /* RID: 0x06A8 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_RequeConfiOfProteOfVehicDiagn_Start_Routine_Start)),   1u,   1u,   0u, 964u, 8u, 0u} /* RID: 0x06A9 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_CalcuConfiStateFingeOfProteOfVehicDiagn_Start_Routine_Start)),   0u, 515u,   0u,  34u, 7u, 0u} /* RID: 0x0F02 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_UnlocProteOfVehicDiagn_Start_Routine_Start)),   0u, 470u,   2u,   2u, 5u, 0u} /* RID: 0xC004 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_TABROW_LockProteOfVehicDiagn_Start_Routine_Start)),   0u,   0u,   2u,   2u, 3u, 0u} /* RID: 0xC005 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_ResetProteOfVehicDiagn_Start_Routine_Start)),   0u, 467u,   2u,   2u, 5u, 0u} /* RID: 0xC007 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_RequeDataOfProteOfVehicDiagn_Start_Routine_Start)),   1u,   1u,   0u, 443u, 8u, 0u} /* RID: 0xC008 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_RequeLoggiDataOfProteOfVehicDiagn_Start_Routine_Start)),   1u,   1u,   0u,  98u, 8u, 0u} /* RID: 0xC009 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_TABROW_VkmsHandlDownl_Start_Routine_Start)),   0u, 513u,   0u,   0u, 4u, 0u} /* RID: 0xC00A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_TABROW_VkmsHandlDownl_Start_Routine_RequestResults)),   0u,   0u,   2u,   2u, 3u, 0u} /* RID: 0xC00A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_Start)),  17u,  17u,   0u,   0u, 1u, 0u} /* RID: 0xC00B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsCheckVerifHash_Start_Routine_RequestResults)),   0u,   0u,   2u,   2u, 3u, 0u} /* RID: 0xC00B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_Start)),  17u,  17u,   0u,   0u, 1u, 0u} /* RID: 0xC00C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetIdentHash_Start_Routine_RequestResults)),   0u,   0u,  18u,  18u, 3u, 0u} /* RID: 0xC00C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_Start)),   1u,   1u,   0u,   0u, 1u, 0u} /* RID: 0xC00D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetPssHash_Start_Routine_RequestResults)),   0u,   0u,  18u,  18u, 3u, 0u} /* RID: 0xC00D */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_Start)),   1u,   1u,   0u,   0u, 1u, 0u} /* RID: 0xC00F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_VkmsGetState_Start_Routine_RequestResults)),   0u,   0u,  12u,  12u, 3u, 0u} /* RID: 0xC00F */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_BeginOfWritiOfSecurDataOfProteOfVehicDiagn_Start_Routine_Start)),   0u,1024u,   2u,   2u, 5u, 0u} /* RID: 0xC011 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_TABROW_EndOfWritiSecurDataOfProteOfVehicDiagn_Start_Routine_Start)),   1u,   1u,   2u,   2u, 2u, 0u} /* RID: 0xC012 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_TABROW_CheckCalibPreCondi_Start_Routine_Start)),   3u,   3u,   0u, 259u, 8u, 0u} /* RID: 0xC013 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_Start)),   1u,   1u,   1u,   1u, 2u, 0u} /* RID: 0xC102 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0xC102 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_TABROW_SOKFunctDeact_Start_Routine_COP_RequestResults)),   0u,   0u,   3u,   3u, 3u, 0u} /* RID: 0xC102 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_Start)),   0u,  18u,   1u,   1u, 5u, 0u} /* RID: 0xFEFE */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0xFEFE */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_Get_Energy_from_SOC_Start_Routine_RequestResults)),   0u,   0u,   0u,   9u, 6u, 0u} /* RID: 0xFEFE */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_Start)),   0u, 242u,   1u,   1u, 5u, 0u} /* RID: 0xFEFF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0xFEFF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_Get_Charge_Power_Start_Routine_RequestResults)),   0u,   0u,   0u, 290u, 6u, 0u} /* RID: 0xFEFF */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Routine_DiagnServi_RoutiContrCheckProgrDepen_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0xFF01 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! DCM service initializers */
CONST(Dcm_DiagSvcInitFuncType, DCM_CONST) Dcm_CfgDiagSvcInitializers[3]=
{
   Dcm_Service27Init
  ,Dcm_Service86Init
  ,NULL_PTR /* end marker */
};
/*! DCM service properties */
CONST(Dcm_CfgDiagServiceInfoType, DCM_CONST) Dcm_CfgDiagServiceInfo[13]=
{
   { Dcm_Service10Processor,0x01u, 1u,   1u,   2u, 0u, 0u} /* SID: 0x10 */
  ,{ Dcm_Service11Processor,0x01u, 1u,   3u,   4u, 0u, 0u} /* SID: 0x11 */
  ,{ Dcm_Service14Processor,0x00u, 3u,   0u,   0u, 0u, 1u} /* SID: 0x14 */
  ,{ Dcm_Service19Processor,0x01u, 1u,   5u,   0u, 2u, 2u} /* SID: 0x19 */
  ,{ Dcm_Service22Processor,0x00u, 2u,   0u,   0u, 0u, 3u} /* SID: 0x22 */
  ,{ Dcm_Service27Processor,0x03u, 1u,   6u,   0u, 0u, 0u} /* SID: 0x27 */
  ,{ Dcm_Service28Processor,0x01u, 1u,   7u,   0u, 0u, 0u} /* SID: 0x28 */
  ,{ Dcm_Service2EProcessor,0x00u, 3u,   0u,   0u, 0u, 4u} /* SID: 0x2E */
  ,{ Dcm_Service31Processor,0x01u, 3u,   0u,   0u, 0u, 0u} /* SID: 0x31 */
  ,{ Dcm_Service3EProcessor,0x01u, 1u,   0u,   0u, 0u, 0u} /* SID: 0x3E */
  ,{ Dcm_Service85Processor,0x01u, 1u,   8u,   0u, 0u, 5u} /* SID: 0x85 */
  ,{ Dcm_Service86Processor,0x01u, 1u,   0u,   0u, 0u, 0u} /* SID: 0x86 */
  ,{ Dcm_RepeaterDeadEnd,0x00u, 0u,   0u,   0u, 0u, 0u} /* Dcm_RepeaterDeadEnd */
};
/*! Indirection from diag service info to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgDiagSvcIdExecPrecondTable[12]=
{
      0u /* SID: 0x10 */
  ,   0u /* SID: 0x11 */
  ,   0u /* SID: 0x14 */
  ,   0u /* SID: 0x19 */
  ,   0u /* SID: 0x22 */
  ,   1u /* SID: 0x27 */
  ,   1u /* SID: 0x28 */
  ,   0u /* SID: 0x2E */
  ,   0u /* SID: 0x31 */
  ,   0u /* SID: 0x3E */
  ,   1u /* SID: 0x85 */
  ,   3u /* SID: 0x86 */
};
/*! DCM service post processors */
CONST(Dcm_DiagSvcConfirmationFuncType, DCM_CONST) Dcm_CfgDiagSvcPostProcessors[9]=
{
   Dcm_ServiceNoPostProcessor
  ,Dcm_Service10PostProcessor
  ,Dcm_Service10FastPostProcessor
  ,Dcm_Service11PostProcessor
  ,Dcm_Service11FastPostProcessor
  ,Dcm_Service19PostProcessor
  ,Dcm_Service27PostProcessor
  ,Dcm_Service28PostProcessor
  ,Dcm_Service85PostProcessor
};
/*! DCM service paged buffer updater */
CONST(Dcm_DiagSvcUpdateFuncType, DCM_CONST) Dcm_CfgDiagSvcUpdaters[3]=
{
   Dcm_ServiceNoUpdater
  ,Dcm_PagedBufferDataPadding
  ,Dcm_Service19Updater
};
/*! DCM service paged buffer canceller */
CONST(Dcm_DiagSvcCancelFuncType, DCM_CONST) Dcm_CfgDiagSvcCancellers[6]=
{
   Dcm_ServiceNoCancel
  ,Dcm_Service14Cancel
  ,Dcm_Service19Cancel
  ,Dcm_Service22Cancel
  ,Dcm_Service2ECancel
  ,Dcm_Service85Cancel
};
/*! OEM notification functions */
CONST(Dcm_CfgDiagNotificationInfoType, DCM_CONST) Dcm_CfgDiagOemNotificationInfo[1]=
{
   { NULL_PTR,NULL_PTR}
};
/*! System supplier notification functions */
CONST(Dcm_CfgDiagNotificationInfoType, DCM_CONST) Dcm_CfgDiagSysNotificationInfo[1]=
{
   { NULL_PTR,NULL_PTR}
};
/*! DCM service to protocol map */
CONST(Dcm_CfgDiagSvc2ProtMapMemType, DCM_CONST) Dcm_CfgDiagSvcId2ProtMap[12]=
{
   0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
};
/*! Service 0x10 sub-service properties table  */
CONST(Dcm_CfgSvc10SubFuncInfoType, DCM_CONST) Dcm_CfgSvc10SubFuncInfo[3]=
{
   { { 50u, 500u}} /* Session ID: 0x01 */
  ,{ { 50u, 500u}} /* Session ID: 0x02 */
  ,{ { 50u, 500u}} /* Session ID: 0x03 */
};
/*! Indirection from service 0x10 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc10SubFuncExecPrecondTable[3]=
{
      0u /* Session ID: 0x01 */
  ,   1u /* Session ID: 0x02 */
  ,   0u /* Session ID: 0x03 */
};
/*! Service 0x11 sub-service properties table  */
CONST(Dcm_CfgSvc11SubFuncInfoType, DCM_CONST) Dcm_CfgSvc11SubFuncInfo[2]=
{
   { Dcm_Service11_01Processor} /* SF: 0x01 */
  ,{ Dcm_Service11_02Processor} /* SF: 0x02 */
};
/*! Indirection from service 0x11 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc11SubFuncExecPrecondTable[2]=
{
      2u /* SF: 0x01 */
  ,   3u /* SF: 0x02 */
};
/*! Service 0x19 sub-service properties table  */
CONST(Dcm_CfgSvc19SubFuncInfoType, DCM_CONST) Dcm_CfgSvc19SubFuncInfo[11]=
{
   { Dcm_Service19_01Processor, 2u} /* SF: 0x01 */
  ,{ Dcm_Service19_02Processor, 2u} /* SF: 0x02 */
  ,{ Dcm_Service19_03Processor, 1u} /* SF: 0x03 */
  ,{ Dcm_Service19_04Processor, 5u} /* SF: 0x04 */
  ,{ Dcm_Service19_06Processor, 5u} /* SF: 0x06 */
  ,{ Dcm_Service19_0EProcessor, 1u} /* SF: 0x0E */
  ,{ Dcm_Service19_14Processor, 1u} /* SF: 0x14 */
  ,{ Dcm_Service19_1AProcessor, 2u} /* SF: 0x1A */
  ,{ Dcm_Service19_42Processor, 4u} /* SF: 0x42 */
  ,{ Dcm_Service19_55Processor, 2u} /* SF: 0x55 */
  ,{ Dcm_Service19_56Processor, 3u} /* SF: 0x56 */
};
/*! Indirection from service 0x19 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc19SubFuncExecPrecondTable[11]=
{
      3u /* SF: 0x01 */
  ,   3u /* SF: 0x02 */
  ,   3u /* SF: 0x03 */
  ,   3u /* SF: 0x04 */
  ,   3u /* SF: 0x06 */
  ,   3u /* SF: 0x0E */
  ,   0u /* SF: 0x14 */
  ,   0u /* SF: 0x1A */
  ,   0u /* SF: 0x42 */
  ,   0u /* SF: 0x55 */
  ,   0u /* SF: 0x56 */
};
/*! Service 0x27 sub-service properties table  */
CONST(Dcm_CfgSvc27SubFuncInfoType, DCM_CONST) Dcm_CfgSvc27SubFuncInfo[2]=
{
   {    1u} /* SF: 0x01 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{    5u} /* SF: 0x02 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Service 0x27 security level properties table  */
CONST(Dcm_CfgSvc27SecLevelInfoType, DCM_CONST) Dcm_CfgSvc27SecLevelInfo[1]=
{
   { ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_Unlock_L1_GetSeed)),Rte_Call_SecurityAccess_Unlock_L1_CompareKey,   4u, 0u} /* SecLvl: Unlock_L1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Indirection from service 0x27 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc27SubFuncExecPrecondTable[2]=
{
      0u /* SF: 0x01 */
  ,   0u /* SF: 0x02 */
};
/*! Service 0x28 sub-service properties table  */
CONST(Dcm_CfgSvc28SubFuncInfoType, DCM_CONST) Dcm_CfgSvc28SubFuncInfo[2]=
{
   { Dcm_Service28_XXProcessor, 2u} /* SF: 0x00 */
  ,{ Dcm_Service28_XXProcessor, 2u} /* SF: 0x01 */
};
/*! Indirection from service 0x28 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc28SubFuncExecPrecondTable[2]=
{
      1u /* SF: 0x00 */
  ,   1u /* SF: 0x01 */
};
/*! Service 0x28 network ID to ComM channel map */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgSvc28SubNetIdMap[2]=
{
   DCM_SVC_28_NETWORK_ALL
  ,DCM_SVC_28_NETWORK_CURRENT
};
/*! Indirection from service 0x3E sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc3ESubFuncExecPrecondTable[1]=
{
      0u /* SF: 0x00 */
};
/*! Indirection from service 0x85 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc85SubFuncExecPrecondTable[2]=
{
      1u /* SF: 0x01 */
  ,   1u /* SF: 0x02 */
};
/*! DCM service 0x85 properties */
CONST(Dcm_CfgSvc85SubFuncInfoType, DCM_CONST) Dcm_CfgSvc85SubFuncInfo[2]=
{
   { Dem_EnableDTCSetting,RTE_MODE_DcmControlDtcSetting_ENABLEDTCSETTING} /* SF: 0x01 */
  ,{ Dem_DisableDTCSetting,RTE_MODE_DcmControlDtcSetting_DISABLEDTCSETTING} /* SF: 0x02 */
};
/*! Service 0x86 sub-service properties table  */
CONST(Dcm_CfgSvc86SubFuncInfoType, DCM_CONST) Dcm_CfgSvc86SubFuncInfo[8]=
{
   { Dcm_ExtService86_00Processor, 2u} /* SF: 0x00 */
  ,{ Dcm_ExtService86_01Processor, 0u} /* SF: 0x01 */
  ,{ Dcm_ExtService86_05Processor, 2u} /* SF: 0x05 */
  ,{ Dcm_ExtService86_06Processor, 2u} /* SF: 0x06 */
  ,{ Dcm_ExtService86_00Processor, 2u} /* SF: 0x40 */
  ,{ Dcm_ExtService86_01Processor, 0u} /* SF: 0x41 */
  ,{ Dcm_ExtService86_05Processor, 2u} /* SF: 0x45 */
  ,{ Dcm_ExtService86_06Processor, 2u} /* SF: 0x46 */
};
/*! Indirection from service 0x86 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc86SubFuncExecPrecondTable[8]=
{
      3u /* SF: 0x00 */
  ,   3u /* SF: 0x01 */
  ,   3u /* SF: 0x05 */
  ,   3u /* SF: 0x06 */
  ,   3u /* SF: 0x40 */
  ,   3u /* SF: 0x41 */
  ,   3u /* SF: 0x45 */
  ,   3u /* SF: 0x46 */
};
#define DCM_STOP_SEC_CONST_UNSPECIFIED
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/
#define DCM_START_SEC_CODE
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */
/***********************************************************************************************************************
 *  Dcm_ModeRuleDefaultModeRule()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeRule<XXX>() */
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleDefaultModeRule(Dcm_Ptr2LocalU8Type nrc)                                                               /* PRQA S 3673, 2889 */ /* MD_Dcm_APIStd_3673, MD_Dcm_Optimize_2889 */
{
  DCM_IGNORE_UNREF_PARAM(nrc);                                                                                                                       /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  return TRUE;
}
/***********************************************************************************************************************
 *  Dcm_ModeRuleExtendedSFDRole()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeRule<XXX>() */
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleExtendedSFDRole(Dcm_Ptr2LocalU8Type nrc)                                                               /* PRQA S 2889 */ /* MD_Dcm_Optimize_2889 */
{
  if (Dcm_ModeCondGet_Dcm_Read_ExtendedSFDRole_ExtendedSFD() != RTE_MODE_ExtendedSFD_ALLOW)
  {
    *nrc = ((uint8)(0x33u));                                                                                                                         /* SBSW_DCM_GEN_PARAM_PTR_WRITE */
    return FALSE;
  }
  return TRUE;
}
/***********************************************************************************************************************
 *  Dcm_ModeRuleEptiSFDRole()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeRule<XXX>() */
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleEptiSFDRole(Dcm_Ptr2LocalU8Type nrc)                                                                   /* PRQA S 2889 */ /* MD_Dcm_Optimize_2889 */
{
  if (Dcm_ModeCondGet_Dcm_Read_EptiSFDRole_EptiSFD() != RTE_MODE_EptiSFD_ALLOW)
  {
    *nrc = ((uint8)(0x33u));                                                                                                                         /* SBSW_DCM_GEN_PARAM_PTR_WRITE */
    return FALSE;
  }
  return TRUE;
}
/***********************************************************************************************************************
 *  Dcm_ModeRuleE2eSFDMode()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeRule<XXX>() */
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleE2eSFDMode(Dcm_Ptr2LocalU8Type nrc)                                                                    /* PRQA S 2889 */ /* MD_Dcm_Optimize_2889 */
{
  if (Dcm_ModeCondGet_Dcm_Read_E2eSFDRole_E2eSFD() != RTE_MODE_E2eSFD_ALLOW)
  {
    *nrc = ((uint8)(0x33u));                                                                                                                         /* SBSW_DCM_GEN_PARAM_PTR_WRITE */
    return FALSE;
  }
  return TRUE;
}
/***********************************************************************************************************************
 *  Dcm_ModeRuleOtaSFDRole()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeRule<XXX>() */
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleOtaSFDRole(Dcm_Ptr2LocalU8Type nrc)                                                                    /* PRQA S 2889 */ /* MD_Dcm_Optimize_2889 */
{
  if (Dcm_ModeCondGet_Dcm_Read_OtaSFDRole_OtaSFD() != RTE_MODE_OtaSFD_ALLOW)
  {
    *nrc = ((uint8)(0x33u));                                                                                                                         /* SBSW_DCM_GEN_PARAM_PTR_WRITE */
    return FALSE;
  }
  return TRUE;
}
/***********************************************************************************************************************
 *  Dcm_ModeRuleSuperUserSFDRole()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeRule<XXX>() */
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleSuperUserSFDRole(Dcm_Ptr2LocalU8Type nrc)                                                              /* PRQA S 2889 */ /* MD_Dcm_Optimize_2889 */
{
  if (Dcm_ModeCondGet_Dcm_Read_SuperUserSFDRole_SuperUserSFD() == RTE_MODE_SuperUserSFD_ALLOW)
  {
    return TRUE;
  }
  *nrc = ((uint8)(0x33u));                                                                                                                           /* SBSW_DCM_GEN_PARAM_PTR_WRITE */
  return FALSE;
}
/***********************************************************************************************************************
 *  Dcm_ModeRuleBasicSFDRole()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeRule<XXX>() */
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleBasicSFDRole(Dcm_Ptr2LocalU8Type nrc)                                                                  /* PRQA S 2889 */ /* MD_Dcm_Optimize_2889 */
{
  if (Dcm_ModeCondGet_Dcm_Read_BasicSFDRole_BasicSFD() != RTE_MODE_BasicSFD_ALLOW)
  {
    *nrc = ((uint8)(0x33u));                                                                                                                         /* SBSW_DCM_GEN_PARAM_PTR_WRITE */
    return FALSE;
  }
  return TRUE;
}
/***********************************************************************************************************************
 *  Dcm_ModeRuleProductionSFDRole()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeRule<XXX>() */
DCM_LOCAL FUNC(boolean, DCM_CODE) Dcm_ModeRuleProductionSFDRole(Dcm_Ptr2LocalU8Type nrc)                                                             /* PRQA S 2889 */ /* MD_Dcm_Optimize_2889 */
{
  uint8 tmpNrc=((uint8)(0x33u));
  if (Dcm_ModeCondGet_Dcm_Read_ProductionSFDRole_ProductionSFD() != RTE_MODE_ProductionSFD_ALLOW)
  {
    if (Dcm_ModeRuleBasicSFDRole(&tmpNrc) == FALSE)                                                                                                  /* SBSW_DCM_GEN_POINTER_FORWARD_STACK */
    {
      *nrc = tmpNrc;                                                                                                                                 /* SBSW_DCM_GEN_PARAM_PTR_WRITE */
      return FALSE;
    }
  }
  return TRUE;
}
/***********************************************************************************************************************
 *  Dcm_ModeCondGet_Dcm_Read_ExtendedSFDRole_ExtendedSFD()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeCondGet_<XXX>() */
DCM_LOCAL FUNC(Rte_ModeType_ExtendedSFD, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_ExtendedSFDRole_ExtendedSFD(void)
{
  Rte_ModeType_ExtendedSFD result;
  Rte_ModeType_ExtendedSFD prev;
  Rte_ModeType_ExtendedSFD next;
  result = Rte_Mode_Dcm_Read_ExtendedSFDRole_Dcm_Read_ExtendedSFDRole(&prev, &next);                                                                 /* SBSW_DCM_GEN_POINTER_FORWARD_STACK */
  return ((Rte_ModeType_ExtendedSFD)((RTE_TRANSITION_ExtendedSFD == result)?next:result));
}
/***********************************************************************************************************************
 *  Dcm_ModeCondGet_Dcm_Read_EptiSFDRole_EptiSFD()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeCondGet_<XXX>() */
DCM_LOCAL FUNC(Rte_ModeType_EptiSFD, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_EptiSFDRole_EptiSFD(void)
{
  Rte_ModeType_EptiSFD result;
  Rte_ModeType_EptiSFD prev;
  Rte_ModeType_EptiSFD next;
  result = Rte_Mode_Dcm_Read_EptiSFDRole_Dcm_Read_EptiSFDRole(&prev, &next);                                                                         /* SBSW_DCM_GEN_POINTER_FORWARD_STACK */
  return ((Rte_ModeType_EptiSFD)((RTE_TRANSITION_EptiSFD == result)?next:result));
}
/***********************************************************************************************************************
 *  Dcm_ModeCondGet_Dcm_Read_E2eSFDRole_E2eSFD()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeCondGet_<XXX>() */
DCM_LOCAL FUNC(Rte_ModeType_E2eSFD, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_E2eSFDRole_E2eSFD(void)
{
  Rte_ModeType_E2eSFD result;
  Rte_ModeType_E2eSFD prev;
  Rte_ModeType_E2eSFD next;
  result = Rte_Mode_Dcm_Read_E2eSFDRole_Dcm_Read_E2eSFDRole(&prev, &next);                                                                           /* SBSW_DCM_GEN_POINTER_FORWARD_STACK */
  return ((Rte_ModeType_E2eSFD)((RTE_TRANSITION_E2eSFD == result)?next:result));
}
/***********************************************************************************************************************
 *  Dcm_ModeCondGet_Dcm_Read_OtaSFDRole_OtaSFD()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeCondGet_<XXX>() */
DCM_LOCAL FUNC(Rte_ModeType_OtaSFD, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_OtaSFDRole_OtaSFD(void)
{
  Rte_ModeType_OtaSFD result;
  Rte_ModeType_OtaSFD prev;
  Rte_ModeType_OtaSFD next;
  result = Rte_Mode_Dcm_Read_OtaSFDRole_Dcm_Read_OtaSFDRole(&prev, &next);                                                                           /* SBSW_DCM_GEN_POINTER_FORWARD_STACK */
  return ((Rte_ModeType_OtaSFD)((RTE_TRANSITION_OtaSFD == result)?next:result));
}
/***********************************************************************************************************************
 *  Dcm_ModeCondGet_Dcm_Read_SuperUserSFDRole_SuperUserSFD()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeCondGet_<XXX>() */
DCM_LOCAL FUNC(Rte_ModeType_SuperUserSFD, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_SuperUserSFDRole_SuperUserSFD(void)
{
  Rte_ModeType_SuperUserSFD result;
  Rte_ModeType_SuperUserSFD prev;
  Rte_ModeType_SuperUserSFD next;
  result = Rte_Mode_Dcm_Read_SuperUserSFDRole_Dcm_Read_SuperUserSFDRole(&prev, &next);                                                               /* SBSW_DCM_GEN_POINTER_FORWARD_STACK */
  return ((Rte_ModeType_SuperUserSFD)((RTE_TRANSITION_SuperUserSFD == result)?next:result));
}
/***********************************************************************************************************************
 *  Dcm_ModeCondGet_Dcm_Read_BasicSFDRole_BasicSFD()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeCondGet_<XXX>() */
DCM_LOCAL FUNC(Rte_ModeType_BasicSFD, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_BasicSFDRole_BasicSFD(void)
{
  Rte_ModeType_BasicSFD result;
  Rte_ModeType_BasicSFD prev;
  Rte_ModeType_BasicSFD next;
  result = Rte_Mode_Dcm_Read_BasicSFDRole_Dcm_Read_BasicSFDRole(&prev, &next);                                                                       /* SBSW_DCM_GEN_POINTER_FORWARD_STACK */
  return ((Rte_ModeType_BasicSFD)((RTE_TRANSITION_BasicSFD == result)?next:result));
}
/***********************************************************************************************************************
 *  Dcm_ModeCondGet_Dcm_Read_ProductionSFDRole_ProductionSFD()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeCondGet_<XXX>() */
DCM_LOCAL FUNC(Rte_ModeType_ProductionSFD, DCM_CODE) Dcm_ModeCondGet_Dcm_Read_ProductionSFDRole_ProductionSFD(void)
{
  Rte_ModeType_ProductionSFD result;
  Rte_ModeType_ProductionSFD prev;
  Rte_ModeType_ProductionSFD next;
  result = Rte_Mode_Dcm_Read_ProductionSFDRole_Dcm_Read_ProductionSFDRole(&prev, &next);                                                             /* SBSW_DCM_GEN_POINTER_FORWARD_STACK */
  return ((Rte_ModeType_ProductionSFD)((RTE_TRANSITION_ProductionSFD == result)?next:result));
}
#define DCM_STOP_SEC_CODE
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
#define DCM_START_SEC_CODE
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */
/***********************************************************************************************************************
 *  Dcm_ModeOnComControlModeChange()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeOnComControlModeChange() */
FUNC(void, DCM_CODE) Dcm_ModeOnComControlModeChange(NetworkHandleType channelId, Dcm_CommunicationModeType mode)
{
  switch(channelId)
  {
    case ComMConf_ComMChannel_CN_BMC_CAN01_78a85e89:
      ((void)(Rte_Switch_DcmCommunicationControl_ComMConf_ComMChannel_CN_BMC_CAN01_78a85e89_DcmCommunicationControl_ComMConf_ComMChannel_CN_BMC_CAN01_78a85e89(mode)));
      break;
    case ComMConf_ComMChannel_CN_HCP5_CANFD01_54d90215:
      ((void)(Rte_Switch_DcmCommunicationControl_ComMConf_ComMChannel_CN_HCP5_CANFD01_54d90215_DcmCommunicationControl_ComMConf_ComMChannel_CN_HCP5_CANFD01_54d90215(mode)));
      break;
    default: /* Just exit the switch case */
      break;
  }
}
#define DCM_STOP_SEC_CODE
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define DCM_START_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */
/***********************************************************************************************************************
 *  Dcm_DidMgr_F400_ReadData()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_DidMgr<OBD_AID>ReadData() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_F400_ReadData(
  Dcm_DiagDataContextPtrType pDataContext
  )
{
  Dcm_UtiProvideDataAsU32(pDataContext, Dcm_ObdIdMgrGetDidAvailabilityMask(331u, 337u, Dcm_CfgSvc22SupportedIdMask[0]));  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  return E_OK;
}
/***********************************************************************************************************************
 *  Dcm_DidMgr_F420_ReadData()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_DidMgr<OBD_AID>ReadData() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_F420_ReadData(
  Dcm_DiagDataContextPtrType pDataContext
  )
{
  Dcm_UtiProvideDataAsU32(pDataContext, Dcm_ObdIdMgrGetDidAvailabilityMask(338u, 338u, Dcm_CfgSvc22SupportedIdMask[1]));  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  return E_OK;
}
/***********************************************************************************************************************
 *  Dcm_DidMgr_F440_ReadData()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_DidMgr<OBD_AID>ReadData() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_F440_ReadData(
  Dcm_DiagDataContextPtrType pDataContext
  )
{
  Dcm_UtiProvideDataAsU32(pDataContext, Dcm_ObdIdMgrGetDidAvailabilityMask(339u, 341u, Dcm_CfgSvc22SupportedIdMask[2]));  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  return E_OK;
}
/***********************************************************************************************************************
 *  Dcm_DidMgr_F800_ReadData()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_DidMgr<OBD_AID>ReadData() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_F800_ReadData(
  Dcm_DiagDataContextPtrType pDataContext
  )
{
  Dcm_UtiProvideDataAsU32(pDataContext, Dcm_ObdIdMgrGetDidAvailabilityMask(343u, 344u, Dcm_CfgSvc22SupportedIdMask[3]));  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
  return E_OK;
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0253_Start()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0253_Start(
  Dcm_OpStatusType OpStatus,
  Dcm_MsgContextPtrType pMsgContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_RidMgrRidLengthPtrType DataLength,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_NegativeResponseCodePtrType ErrorCode  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  )
{
  uint8 dataInType_of_calculation;
  uint8 dataInType_of_hash_value;
  Std_ReturnType stdReturn;

  dataInType_of_calculation = ((uint8)(Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 0u)));  /* PRQA S 2985 */ /* MD_Dcm_Redundant_2985 */

  dataInType_of_hash_value = ((uint8)(Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 1u)));  


  stdReturn = Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_CalcuIntegValidData_Start_Routine_Start(
                dataInType_of_calculation,
                dataInType_of_hash_value,
                OpStatus,
                Dcm_UtiGetResDataRel(pMsgContext, 0u),  /* PRQA S 2985 */ /* MD_Dcm_Redundant_2985 */ /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                DataLength,
                ErrorCode
                );  /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ /* SBSW_DCM_GEN_RID_WRAPPER */
  return stdReturn;
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0254_Start()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0254_Start(
  Dcm_OpStatusType OpStatus,
  Dcm_MsgContextPtrType pMsgContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_RidMgrRidLengthPtrType DataLength,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_NegativeResponseCodePtrType ErrorCode  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  )
{
  uint8 dataInType_of_hash_value;
  uint8 dataInType_of_hash;
  Std_ReturnType stdReturn;

  dataInType_of_hash_value = ((uint8)(Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 0u)));  /* PRQA S 2985 */ /* MD_Dcm_Redundant_2985 */

  dataInType_of_hash = ((uint8)(Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 1u)));  


  stdReturn = Rte_Call_RoutineServices_Routine_DiagnServi_TABROW_CalcuIndivHashValue_Start_Routine_Start(
                dataInType_of_hash_value,
                dataInType_of_hash,
                Dcm_UtiGetReqDataRel(pMsgContext, 2u),
                OpStatus,
                Dcm_UtiGetResDataRel(pMsgContext, 0u),  /* PRQA S 2985 */ /* MD_Dcm_Redundant_2985 */ /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                DataLength,
                ErrorCode
                );  /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ /* SBSW_DCM_GEN_RID_WRAPPER */
  return stdReturn;
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoPostProcessor()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoPostProcessor() */
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoPostProcessor(
  Dcm_ContextPtrType pContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_ConfirmationStatusType status
  )
{
  DCM_IGNORE_UNREF_PARAM(pContext);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  DCM_IGNORE_UNREF_PARAM(status);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoUpdater()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoUpdater() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_ServiceNoUpdater(
  Dcm_ContextPtrType pContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_OpStatusType opStatus,
  Dcm_DiagDataContextPtrType pDataContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_NegativeResponseCodePtrType ErrorCode  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  )
{
  DCM_IGNORE_UNREF_PARAM(pContext);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  DCM_IGNORE_UNREF_PARAM(opStatus);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  DCM_IGNORE_UNREF_PARAM(pDataContext);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  DCM_IGNORE_UNREF_PARAM(ErrorCode);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  return E_NOT_OK;
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoCancel()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoCancel() */
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoCancel(
  Dcm_ContextPtrType pContext  /* PRQA S 3673 */ /* MD_Dcm_Design_3673 */
  )
{
  DCM_IGNORE_UNREF_PARAM(pContext);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  /* nothing to do */
}
#define DCM_STOP_SEC_CALLOUT_CODE
#include "Dcm_MemMap.h"                                                                                                                              /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  END OF FILE: Dcm_Lcfg.c
 *********************************************************************************************************************/

