/** \file      OpenNetStreamInterfaceBackward.h
 *  \copyright HangZhou Ezviz All Right Reserved.
 *  \brief     开放SDK向后兼容接口说明
 *
 *  \author    pikongxuan
 *  \date      2015/07/31
 *
 *  \note      history:
 *  \note      V2.4.1 2015/07/31 
 */

#ifndef _OPENNETSTREAM_BACKWARD_WARNING_
#define _OPENNETSTREAM_BACKWARD_WARNING_

/*
#warning \
  This file includes at least one deprecated or antiquated header which \
  may be removed without further notice at a future date. Please use a \
  non-deprecated interface with equivalent functionality instead. For a \
  listing of replacement headers and interfaces, consult the file \
  OpenNetStreamBackwardWarning.h.
  */

/*
  A list of valid replacements is as follows:

  Use:														 Instead of:
  <OpenNetStreamInterFace.h>, OpenSDK_AllocSession           <OpenNetStreamInterFaceBackward.h>, OpenSDK_AllocSession_Old
  
  <OpenNetStreamInterFace.h>, OpenSDK_StartRealPlay          <OpenNetStreamInterFaceBackward.h>, OpenSDK_StartRealPlay_Old
  <OpenNetStreamInterFace.h>, OpenSDK_StopRealPlay           <OpenNetStreamInterFaceBackward.h>, OpenSDK_StopRealPlay_Old
  
  <OpenNetStreamInterFace.h>, OpenSDK_StartPlayBack          <OpenNetStreamInterFaceBackward.h>, OpenSDK_StartPlayBack_Old
  <OpenNetStreamInterFace.h>, OpenSDK_StopPlayBack           <OpenNetStreamInterFaceBackward.h>, OpenSDK_StopPlayBack_Old
  
  <OpenNetStreamInterFace.h>, OpenSDK_StartSearch            <OpenNetStreamInterFaceBackward.h>, OpenSDK_StartSearch_Old
  
  <OpenNetStreamInterFace.h>, OpenSDK_PTZCtrl            	 <OpenNetStreamInterFaceBackward.h>, OpenSDK_PTZCtrl_Old
  
  <OpenNetStreamInterFace.h>, OpenSDK_DevDefence           	 <OpenNetStreamInterFaceBackward.h>, OpenSDK_DevDefence_Old
  <OpenNetStreamInterFace.h>, OpenSDK_DevDefenceByDev        <OpenNetStreamInterFaceBackward.h>, OpenSDK_DevDefenceByDev_Old
  
  <OpenNetStreamInterFace.h>, OpenSDK_Alarm_SetMsgCallBack   <OpenNetStreamInterFaceBackward.h>, OpenSDK_Alarm_SetMsgCallBack_Old

*/


#endif