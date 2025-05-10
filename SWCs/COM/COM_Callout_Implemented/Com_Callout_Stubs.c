/***********************************************************************************
 * Copyright (C) 2022-2023 RealThingks GmbH
 * This file is part of COM
 *
 * This file cannot be copied and/or distributed without the explicit
 * permission of RealThingks GmbH
 *  ------------------------------------------------------------------
 * Version History of the Module
 * VERSION                  DEVELOPER                CHANGE DESCRIPTION
 * 1.0.0                    Abhijeet Shelke          v1.0 changes
***********************************************************************************/



/***********************************************************************************
                         INCLUDES        
***********************************************************************************/

#include "Com_Cot.h"
#include "CanIf_Cbk.h" 
#include "Appl_Cbk.h"
#define COM_CALLOUT_ON     1   /*Callout Feature Enable*/
#define COM_CALLOUT_OFF     0  /*Callout Feature Disable*/
#define COM_EXTRCT_CODE  COM_CALLOUT_ON /*Note:Enable this for Callout Implementation Code  */
#define WUF_ID	0x4300
#if COM_EXTRCT_CODE
#define MAX_ARRAY_SIZE 64
#define ARRAY_SIZE_TWO 2
#define ARRAY_SIZE_FOUR 4
#define ARRAY_SIZE_EIGHT 8
#define ARRAY_SIZE_TWELVE 12
#define ARRAY_SIZE_SEVEN 7

/***********************************************************************************
                         GLOBAL VARIABLES        
***********************************************************************************/

/*array to store Raw data*/
uint64  Zone_R_FAS_02[MAX_ARRAY_SIZE];
uint8  AlvCtr[ARRAY_SIZE_FOUR];
uint8  Crc[ARRAY_SIZE_EIGHT];
uint16  Com_Faa_F_Fl_AtActr_Cmd_Nwt[ARRAY_SIZE_TWELVE];
uint16  Com_Faa_F_Fr_AtActr_Cmd_Nwt[ARRAY_SIZE_TWELVE];
uint16  Com_Faa_F_Rl_AtActr_Cmd_Nwt[ARRAY_SIZE_TWELVE];
uint16  Com_Faa_F_Rr_AtActr_Cmd_Nwt[ARRAY_SIZE_TWELVE];
uint8  Com_Ascc_F_Prio_Na[1];
uint8  Mode_Na[ARRAY_SIZE_TWO];

uint8 Zone_Processed_SignalArray[ARRAY_SIZE_FOUR];
uint8  Zone_Processed_SignalArray1[ARRAY_SIZE_EIGHT];
uint8  Zone_Processed_SignalArray2[ARRAY_SIZE_TWO];
uint16 Zone_Processed_SignalArray3[ARRAY_SIZE_TWELVE];
uint16  Zone_Processed_SignalArray4[ARRAY_SIZE_TWELVE];
uint16  Zone_Processed_SignalArray5[ARRAY_SIZE_TWELVE];
uint16  Zone_Processed_SignalArray6[ARRAY_SIZE_TWELVE];


uint8 AlvCtr_Dec;
uint16 Crc_Dec;
sint16 Com_Faa_F_Fl_AtActr_Cmd_Nwt_Dec;
sint16 Com_Faa_F_Fr_AtActr_Cmd_Nwt_Dec;
sint16 Com_Faa_F_Rl_AtActr_Cmd_Nwt_Dec;
sint16 Com_Faa_F_Rr_AtActr_Cmd_Nwt_Dec;
uint8 Com_Ascc_F_Prio_Na_Dec;
uint8 Com_Mode_Na_Dec;




/*FAA_DBG_10Hz_MSG1_oFASSystemCAN_3061bd17_Tx*/
uint8 Com_Lic_Value_Na ;
uint8 Com_Lic_Id_Na ;
sint8 Com_Emm_Temp_AtPhase_U_DegC ;
sint8 Com_Emm_Temp_AtPhase_V_DegC ;
sint8 Com_Emm_Temp_AtPhase_W_DegC ;
uint8 Com_Dem_Event_Id_Na ;
uint8 Com_Dem_Event_Status_Na ;

/*FAA_DBG_10Hz_MSG_FL_oFASSystemCAN_371574e7_Tx*/

uint8 Com_Lic_Value_FL_Na ;
uint8 Com_Lic_Id_FL_Na ;
sint8 Com_Emm_Temp_AtPhase_U_FL_DegC ;
sint8 Com_Emm_Temp_AtPhase_V_FL_DegC ;
sint8 Com_Emm_Temp_AtPhase_W_FL_DegC ;
uint8 Com_Dem_Event_Id_FL_Na ;
uint8 Com_Dem_Event_Status_FL_Na ;

/*FAA_DBG_10Hz_MSG_FR_oFASSystemCAN_9e04f3dd_Tx*/
uint8 Com_Lic_Value_FR_Na ;
uint8 Com_Lic_Id_FR_Na ;
sint8 Com_Emm_Temp_AtPhase_U_FR_DegC ;
sint8 Com_Emm_Temp_AtPhase_V_FR_DegC ;
sint8 Com_Emm_Temp_AtPhase_W_FR_DegC ;
uint8 Com_Dem_Event_Id_FR_Na ;
uint8 Com_Dem_Event_Status_FR_Na ;

/*FAA_DBG_10Hz_MSG_RL_oFASSystemCAN_050306fe_Tx*/
uint8 Com_Lic_Value_RL_Na ;
uint8 Com_Lic_Id_RL_Na ;
sint8 Com_Emm_Temp_AtPhase_U_RL_DegC ;
sint8 Com_Emm_Temp_AtPhase_V_RL_DegC ;
sint8 Com_Emm_Temp_AtPhase_W_RL_DegC ;
uint8 Com_Dem_Event_Id_RL_Na ;
uint8 Com_Dem_Event_Status_RL_Na ;

/*FAA_DBG_10Hz_MSG_RR_oFASSystemCAN_ac1281c4_Tx*/
uint8 Com_Lic_Value_RR_Na ;
uint8 Com_Lic_Id_RR_Na ;
sint8 Com_Emm_Temp_AtPhase_U_RR_DegC ;
sint8 Com_Emm_Temp_AtPhase_V_RR_DegC ;
sint8 Com_Emm_Temp_AtPhase_W_RR_DegC ;
uint8 Com_Dem_Event_Id_RR_Na ;
uint8 Com_Dem_Event_Status_RR_Na ;

/*variables declaration */
sint64* Zone_R_FAS_02_data;
sint8* FAA_DBG_10Hz_MSG1_ptr_data;
sint8* FAA_DBG_10Hz_MSG_FL_ptr_data;
sint8* FAA_DBG_10Hz_MSG_FR_ptr_data;
sint8* FAA_DBG_10Hz_MSG_RL_ptr_data;
sint8* FAA_DBG_10Hz_MSG_RR_ptr_data;

/*global variable for signal specific data */
sint8 signal[12];


/*UserDefine Functions */	
/***********************************************************************************
|                         FUNCTION DEFINITION
|  Function: binval
|
|  Purpose: Binary array input to Decimal Conversion 
|
|
|  Parameters:
|      @param 
|		IN     = array,size
|		OUT    = Int 
|		IN/OUT = None
|
|     @return Returns: Int                 
 **********************************************************************************/
uint8 binval(uint8 arr[] ,uint8 size)
{
    uint16 output=0, power=1;
	uint8 temp=(size-1);
   for (uint8 i=0; i<size; i++)
   {

       output += arr[temp-i]*power;
       power *= 2;
   }
    return output;
    
}

sint16 binval2(sint16 arr[] ,uint8 size)
{
    sint16 output=0, power=1;
	uint8 temp=(size-1);
   for (uint8 i=0; i<size; i++)
   {

       output += arr[temp-i]*power;
       power *= 2;
   }
    return output;
    
}
/***********************************************************************************
|                         FUNCTION DEFINITION
|  Function: signedValue
|
|  Purpose: Negative Binary array input to positive Decimal Conversion 
|
|
|  Parameters:
|      @param 
|		IN     = array
|		OUT    = Int 
|		IN/OUT = None
|
|     @return Returns: Int                 
 **********************************************************************************/
sint16 signedValue(sint16 arr[])
 {
 if (arr[0]==1)
 {
     uint16 Carry=1,i;
	 sint16 sign_dec=0;
     for (i=11;i>=1; i--)
     { 
        sign_dec=(arr[i]*Carry)+sign_dec; 
        Carry=Carry+Carry;
     }
     sign_dec=2048-sign_dec;
	return sign_dec;
 }
 }
#endif
/**********************************************************************************************************************

 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!

 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>                                       DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

boolean CAN_ID_300 = FALSE; /*Flag to Check if CAN_ID 300h recieved or not FALSE-No TRUE- Yes*/

/************************************************************************************************************
 *  Appl_GenericPrecopy()
 ***********************************************************************************************************/
/*! \brief         Common RX indication callback that will be called before message specific callback will be called.
 *  \details       Application callback function which informs about all incoming RX messages including the contained data. \n
 *                 It can be used to block notification to upper layer. E.g. to filter incoming messages or route it for special handling.
 *  \param[in]     Controller   CAN controller which received the message.
 *  \param[in]     ID           ID of the received message (include IDE,FD). \n
 *                              In case of extended or mixed ID systems the highest bit (bit 31) is set to mark an extended ID. \n
 *                              FD-bit (bit 30) can be masked out with a define CAN_ID_MASK_IN_GENERIC_CALLOUT in the user config file.
 *  \param[in]     DataLength   Data length of the received message.
 *  \param[in]     pData        Pointer to the data of the received message (read only).
 *  \return        CAN_OK       Higher layer indication will be called afterwards (CanIf_RxIndication()).
 *  \return        CAN_NOT_OK   Higher layer indication will not be called afterwards.
 *  \pre           -
 *  \context       ANY
 *  \reentrant     FALSE
 *  \synchronous   TRUE
 *  \config        CAN_GENERIC_PRECOPY == STD_ON
 *  \notes         "pData" is read only and must not be accessed for further write operations. \n
 *                 The parameter DataLength refers to the received data length by the CAN controller hardware.\n
 *                 Note, that the CAN protocol allows the usage of data length values greater than eight (CAN-FD).\n
 *                 Depending on the implementation of this callback it may be necessary to consider this special case (e.g. if the data length is used as index value in a buffer write access).
 *                 None AUTOSAR API
***********************************************************************************************************/
V_DEF_FUNC(extern, Can_ReturnType, APPL_CODE) Appl_GenericPrecopy( uint8 Controller, Can_IdType ID, uint8 DataLength, Can_DataPtrType DataPtr )
{
    if (ID==WUF_ID)
    {
        CAN_ID_300=TRUE;

    }
    return CAN_OK;
}


/***********************************************************************************
|                         FUNCTION DEFINITION
|  Function: ComIPduCallout_Zone_R_FAS_02_ofas_5c608f88_Rx
|
|  Purpose: Com Callout Function for CAN Message ComIPduCallout_Zone_R_FAS_02_ofas_5c608f88_Rx
|
|
|  Parameters:
|      @param 
|		IN     = PDUID, Data Pointr
|		OUT    = Boolean  
|		IN/OUT = None
|
|     @return Returns: Boolean                  
 **********************************************************************************/
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_Zone_R_FAS_02_ofas_5c608f88_Rx(PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{
#if COM_EXTRCT_CODE
	/* pointer data extraction  */
	Zone_R_FAS_02_data=PduInfoPtr->SduDataPtr;
	uint64 value = *Zone_R_FAS_02_data;

    for (int i = 0; i < MAX_ARRAY_SIZE; ++i) {
       Zone_R_FAS_02[i] = (value >> i) & 1;
    }

/************************************Test Code Start  ***********************************************/


	/*Signal specific data extraction in array*/

	/*Com_Asmc_1000Hz_F_Cmd_AlvCtr 4-7*/
	/*Signal specific data extraction in array*/

	 /*AlvCtr 12-15 (8-11)*/
	for ( uint8 i = 0; i < ARRAY_SIZE_FOUR; i++ ) 
	{
		AlvCtr[i] = Zone_R_FAS_02[i+8];
	}
	for ( uint8 i = 0; i < ARRAY_SIZE_FOUR; i++ )
	{
		Zone_Processed_SignalArray[i] = AlvCtr[3-i]; // This needs to be done if Signal is in Little Endian
		AlvCtr_Dec = binval(Zone_Processed_SignalArray, ARRAY_SIZE_FOUR);
	}

	 

	/*Crc 0-7 */
	for ( uint8 i = 0; i < ARRAY_SIZE_EIGHT; i++ ) 
	{
	 	Crc[i] = Zone_R_FAS_02[i];
	}
	 for ( uint8 i = 0; i < ARRAY_SIZE_EIGHT; i++)
	 {
	 	Zone_Processed_SignalArray1[i] = Crc[7-i]; // This needs to be done if Signal is in Little Endian
	 }

	Crc_Dec = (uint8)binval(Zone_Processed_SignalArray1, ARRAY_SIZE_EIGHT);

    /*Com_Mode_Na_Dec 58-59(15-14)*/
	for ( uint8 i = 0; i < ARRAY_SIZE_TWO; i++ ) 
	{
		Mode_Na[i] = Zone_R_FAS_02[i+14];
	}
	for ( uint8 i = 0; i < ARRAY_SIZE_TWO; i++ )
	{
		Zone_Processed_SignalArray2[i] = Mode_Na[1-i];
	}

	 Com_Mode_Na_Dec = binval(Zone_Processed_SignalArray2, ARRAY_SIZE_TWO);
	 
	 /*Com_Ascc_F_Prio_Na_Dec 57 (13)*/

	Com_Ascc_F_Prio_Na[0] = Zone_R_FAS_02[13];
	 Com_Ascc_F_Prio_Na_Dec = binval(Com_Ascc_F_Prio_Na, 1);

	 /*Com_Faa_F_Fr_AtActr_Cmd_Nwt 36-39 24 31(msb 23-16 31-28 lsb)*/
	for ( uint8 i=ARRAY_SIZE_FOUR ;i<ARRAY_SIZE_TWELVE;i++)
	{
		Com_Faa_F_Fr_AtActr_Cmd_Nwt[i] = Zone_R_FAS_02[i+12];
		for ( uint8 j = 0; j < 4; j++ ) 
		{
			Com_Faa_F_Fr_AtActr_Cmd_Nwt[j] = Zone_R_FAS_02[j+28];
		}
		
	}
	for ( uint8 i = 0; i < ARRAY_SIZE_TWELVE; i++ )
	{
		Zone_Processed_SignalArray3[i] = Com_Faa_F_Fr_AtActr_Cmd_Nwt[11-i];
	}

	 Com_Faa_F_Fr_AtActr_Cmd_Nwt_Dec = (uint16)binval2(Zone_Processed_SignalArray3, ARRAY_SIZE_TWELVE);
	 
	
	/*Com_Faa_F_Rl_AtActr_Cmd_Nwt 40-47 32-35(msb 27-24 39-32 lsb)*/
		
	for ( uint8 i = 0; i < ARRAY_SIZE_EIGHT; i++ ) 
	{
		Com_Faa_F_Rl_AtActr_Cmd_Nwt[i] = Zone_R_FAS_02[i+32];
		for (uint8 j=ARRAY_SIZE_EIGHT ;j<ARRAY_SIZE_TWELVE;j++)
		{
			Com_Faa_F_Rl_AtActr_Cmd_Nwt[j] = Zone_R_FAS_02[j+16];//35-11
		}
	}
	for ( uint8 i = 0; i < ARRAY_SIZE_TWELVE; i++ )
	{
		Zone_Processed_SignalArray4[i] = Com_Faa_F_Rl_AtActr_Cmd_Nwt[11-i];
	}

	 Com_Faa_F_Rl_AtActr_Cmd_Nwt_Dec = (uint16)binval2(Zone_Processed_SignalArray4, ARRAY_SIZE_TWELVE);
	 

	 /*Com_Faa_F_Rr_AtActr_Cmd_Nwt 60 63 48 55 (msb 47-40 55-52 lsb)	*/
	for (uint8 j=ARRAY_SIZE_FOUR ;j<ARRAY_SIZE_TWELVE;j++)
		{
			Com_Faa_F_Rr_AtActr_Cmd_Nwt[j] = Zone_R_FAS_02[j+36];//55-11
			for ( uint8 i = 0; i < ARRAY_SIZE_FOUR; i++ ) 
			{
				Com_Faa_F_Rr_AtActr_Cmd_Nwt[i] = Zone_R_FAS_02[i+52];
				
			} 
		}	
	
	for ( uint8 i = 0; i < ARRAY_SIZE_TWELVE; i++ )
	{
		Zone_Processed_SignalArray5[i] = Com_Faa_F_Rr_AtActr_Cmd_Nwt[11-i];
	}

	 Com_Faa_F_Rr_AtActr_Cmd_Nwt_Dec = (uint16)binval2(Zone_Processed_SignalArray5, ARRAY_SIZE_TWELVE);
	


	 /*Com_Faa_F_Fl_AtActr_Cmd_Nwt 16-23 8-11 (msb 51-48 63-56 lsb) */
		
	for ( uint8 i = 0; i < ARRAY_SIZE_EIGHT; i++ ) 
	 {
	 	Com_Faa_F_Fl_AtActr_Cmd_Nwt[i] = Zone_R_FAS_02[i+56];
	 	for (uint8 j=ARRAY_SIZE_EIGHT ;j<ARRAY_SIZE_TWELVE;j++)
	 	{
	 		Com_Faa_F_Fl_AtActr_Cmd_Nwt[j] = Zone_R_FAS_02[j+40];
	 	}
	 }
	 for ( uint8 i = 0; i < ARRAY_SIZE_TWELVE; i++ )
	 {
	 	Zone_Processed_SignalArray6[i] = Com_Faa_F_Fl_AtActr_Cmd_Nwt[11-i];
	 }
	 
	 


	 Com_Faa_F_Fl_AtActr_Cmd_Nwt_Dec =(sint16) binval2(Zone_Processed_SignalArray6, ARRAY_SIZE_TWELVE);
	 
/************************************Test Code End***********************************************/
#endif
	return TRUE;
}

/***********************************************************************************
|                         FUNCTION DEFINITION
|  Function:  ComIPduCallout_FAA_DBG_10Hz_MSG1_oFASSystemCAN_3061bd17_Tx
|
|  Purpose: Com Callout Function for CAN Message FAA_DBG_10Hz_MSG1_oFASSystemCAN_3061bd17_Tx
|
|
|  Parameters:
|      @param 
|		IN     = PDUID, Data Pointr
|		OUT    = Boolean  
|		IN/OUT = None
|
|     @return Returns: Boolean                  
 **********************************************************************************/
 FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAA_DBG_10Hz_MSG1_ofas_3bbf652b_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{}
/***********************************************************************************
|                         FUNCTION DEFINITION
|  Function:  ComIPduCallout_FAA_DBG_10Hz_MSG_FL_oFASSystemCAN_371574e7_Tx
|
|  Purpose: Com Callout Function for CAN Message FAA_DBG_10Hz_MSG_FL_oFASSystemCAN_371574e7_Tx
|
|
|  Parameters:
|      @param 
|		IN     = PDUID, Data Pointr
|		OUT    = Boolean  
|		IN/OUT = None
|
|     @return Returns: Boolean                  
 **********************************************************************************/
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAA_DBG_10Hz_MSG_FL_ofas_5f87ebcd_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{ }

/***********************************************************************************
|                         FUNCTION DEFINITION
|  Function:  ComIPduCallout_FAA_DBG_10Hz_MSG_FR_oFASSystemCAN_9e04f3dd_Tx
|
|  Purpose: Com Callout Function for CAN Message FAA_DBG_10Hz_MSG_FR_oFASSystemCAN_9e04f3dd_Tx
|
|
|  Parameters:
|      @param 
|		IN     = PDUID, Data Pointr
|		OUT    = Boolean  
|		IN/OUT = None
|
|     @return Returns: Boolean                  
 **********************************************************************************/
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAA_DBG_10Hz_MSG_FR_ofas_665b8826_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{ 

}

/***********************************************************************************
|                         FUNCTION DEFINITION
|  Function:  ComIPduCallout_FAA_DBG_10Hz_MSG_RL_oFASSystemCAN_050306fe_Tx
|
|  Purpose: Com Callout Function for CAN Message FAA_DBG_10Hz_MSG_RL_oFASSystemCAN_050306fe_Tx
|
|
|  Parameters:
|      @param 
|		IN     = PDUID, Data Pointr
|		OUT    = Boolean  
|		IN/OUT = None
|
|     @return Returns: Boolean                  
 **********************************************************************************/
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAA_DBG_10Hz_MSG_RL_ofas_cc165310_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{}

/***********************************************************************************
|                         FUNCTION DEFINITION
|  Function:  ComIPduCallout_FAA_DBG_10Hz_MSG_RR_oFASSystemCAN_ac1281c4_Tx
|
|  Purpose: Com Callout Function for CAN Message FAA_DBG_10Hz_MSG_RR_oFASSystemCAN_ac1281c4_Tx
|
|
|  Parameters:
|      @param 
|		IN     = PDUID, Data Pointr
|		OUT    = Boolean  
|		IN/OUT = None
|
|     @return Returns: Boolean                  
 **********************************************************************************/
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAA_DBG_10Hz_MSG_RR_ofas_f5ca30fb_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{}

FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAA_DBG_1000Hz_MSG1_ofas_b1c4812b_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAA_DBG_500Hz_MSG_FL_ofas_661a7682_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAA_DBG_500Hz_MSG_FR_ofas_5fc61569_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAA_DBG_500Hz_MSG_RL_ofas_f58bce5f_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAA_DBG_500Hz_MSG_RR_ofas_cc57adb4_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr)
{}

FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_FL_02_ofas_f49eed27_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr){}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_FL_04_ofas_22c70e3a_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr){}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_FL_05_ofas_e99bdd9f_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr){}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_FR_02_ofas_909c74c4_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr){}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_FR_04_ofas_46c597d9_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr){}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_FR_05_ofas_8d99447c_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr){}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_RL_02_ofas_dadbccb5_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr){}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_RL_04_ofas_0c822fa8_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr){}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_RL_05_ofas_c7defc0d_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr){}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_RR_02_ofas_bed95556_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr){}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_RR_04_ofas_6880b64b_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr){}
FUNC(boolean, COM_APPL_CODE) ComIPduCallout_FAS_RR_05_ofas_a3dc65ee_Tx(PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr){}