/** \file      OpenNetStreamError.h
 *  \copyright HangZhou Ezviz All Right Reserved.
 *  \brief     Open SDK error code definition
 *
 *  \author    panlong, peter
 *  \date      2014/12/15
 *
 *  \note      history: 
 *  \note      V3.0.3 2017/07/15 pikongxuan New version error code definition
 */

#ifndef _H_OPENNETSTREAMERROR_H_ 
#define _H_OPENNETSTREAMERROR_H_

#define OPEN_SDK_NOERROR				0					///< No Error
#define OPEN_SDK_GENERAL_ERROR			-1					///< General Error


/******************************************************************************************************************/
/* The interface basically returns only 0 and -1 by default. If the interface returns -1, the explicit error code is passed through OpenSDK_GetLastErrorCode
Error code format {xbbbbb}, x said the error code that the value of x as follows:
/// 0: correct condition
/// 1: network setup exception,(no DNS, connection lost)
/// 2: user operation error, input invalid params, rely on lib error(load, init, unload)
/// 3: platform server error
/// 4: memory exception, system resource(alloc memory, create thread failed)
/// 5: opensdk dependent lib netstream errorcode.
/// 6: method not supported
/// 9: undefined error
*/
/******************************************************************************************************************/

//Network level error code
#define OPEN_SDK_NETWORK_SETUP_BASE			100000
#define	OPEN_SDK_COULDNT_RESOLVE_HOST		OPEN_SDK_NETWORK_SETUP_BASE + 6		///< Could not resolve host
#define OPEN_SDK_COULDNT_CONNECT			OPEN_SDK_NETWORK_SETUP_BASE + 7		///< remote host can't connect模拟信号量
#define OPEN_SDK_OPERATION_TIMEOUT			OPEN_SDK_NETWORK_SETUP_BASE + 28	///< request openapi timeout

//User operation level error code
#define OPEN_SDK_USER_OPERATION_BASE		200000
#define OPEN_SDK_BAD_PARAMS					OPEN_SDK_USER_OPERATION_BASE + 1	///< input params invalid
#define OPEN_SDK_SESSION_INVALID			OPEN_SDK_USER_OPERATION_BASE + 2	///< session not exist
#define OPEN_SDK_VIDEO_RECORD_NOT_EXIST		OPEN_SDK_USER_OPERATION_BASE + 3	///< record not exist
#define OPEN_SDK_VIDEO_RECORD_SEARCHING		OPEN_SDK_USER_OPERATION_BASE + 4	///< record is on search
#define OPEN_SDK_STOP_ALARM_REC_FAILED		OPEN_SDK_USER_OPERATION_BASE + 5	///< stop alarm recv failed.
#define OPEN_SDK_PERMANENT_KEY_INVALID		OPEN_SDK_USER_OPERATION_BASE + 6	///< safe key invalid
#define OPEN_SDK_PIC_DECRYPT_FAILED			OPEN_SDK_USER_OPERATION_BASE + 7	///< pic decode failed
#define OPEN_SDK_PIC_CONTENT_INVALID		OPEN_SDK_USER_OPERATION_BASE + 8	///< pic invalid
#define OPEN_SDK_PIC_NO_NEED_DECRYPT		OPEN_SDK_USER_OPERATION_BASE + 9	///< pic no need decrypt
#define OPEN_SDK_PIC_COULDNT_ALLOC_BUFFERS	OPEN_SDK_USER_OPERATION_BASE + 10	///< can't alloc buffer

//OpenApi interface level error code, detailed reference: https://open.ys7.com/doc/book/index/api-code.html
#define OPEN_SDK_OPENAPI_BASE				300000
#define OPEN_SDK_RESPINFO_BAD				OPEN_SDK_OPENAPI_BASE + 1			///< platform response bad
#define OPEN_SDK_RESPINFO_INVALID			OPEN_SDK_OPENAPI_BASE + 2			///< platform response invalid
#define OPEN_SDK_DEVICE_RSP_TIMEOUT         OPEN_SDK_OPENAPI_BASE + 2009		///< device response timeout
#define OPEN_SDK_DEVICE_SAFE_INVALID        OPEN_SDK_OPENAPI_BASE + 5002		///< safe key invalid
#define OPEN_SDK_ACCESSTOKEN_INVALID		OPEN_SDK_OPENAPI_BASE + 10002		///< token expired
#define OPEN_SDK_APPKEY_NOMATCH_TOKEN_ERROR	OPEN_SDK_OPENAPI_BASE + 10018		///< AccessToken not macth appkey
#define OPEN_SDK_USERID_PHONE_UNBIND		OPEN_SDK_OPENAPI_BASE + 10014		///< phone not bind appkey
#define OPEN_SDK_CHANNEL_NOT_EXIST			OPEN_SDK_OPENAPI_BASE + 20001		///< channel not exist
#define OPEN_SDK_DEVICE_OFFLINE	    		OPEN_SDK_OPENAPI_BASE + 20007		///< device offline
#define OPEN_SDK_USER_NOTOWN_DEVICE			OPEN_SDK_OPENAPI_BASE + 20018		///< user not own device
#define OPEN_SDK_SERVER_DATA_BAD			OPEN_SDK_OPENAPI_BASE + 49999		///< data exception
#define OPEN_SDK_SERVER_ERROR				OPEN_SDK_OPENAPI_BASE + 50000		///< platform exception

//System resource level error
#define OPEN_SDK_SYSTEM_RESOURCE_BASE		400000
#define OPEN_SDK_COULDNT_CREATE_THREAD		OPEN_SDK_SYSTEM_RESOURCE_BASE + 1	///< create thread failed
#define OPEN_SDK_COULDNT_ALLOC_BUFFERS		OPEN_SDK_SYSTEM_RESOURCE_BASE + 2	///< alloc buffer failed


/**
 *  \brief Message callback error code definition(MessageInfo)
 */
#define OPEN_SDK_STREAM_ACCESSTOKEN_ERROR_OR_EXPIRE 				"UE001" 	///< Accesstoken expire or invalid. update accesstoken.
#define OPEN_SDK_STREAM_PU_NO_RESOURCE      						"UE101"	    ///< Device connection is too many, upgrade the device version, can consult customer service to obtain the upgrade process.
#define OPEN_SDK_STREAM_TRANSF_DEVICE_OFFLINE   	 				"UE102" 	///< Device offline. Connect the device to network and try again.
#define OPEN_SDK_STREAM_INNER_TIMEOUT            	 				"UE103" 	///< Request to connect device to timeout, detect device network connection is normal.
#define OPEN_SDK_STREAM_INNER_VERIFYCODE_ERROR   	 				"UE104" 	///< Video verificaiton code error, check the verification code marked on the device.
#define OPEN_SDK_STREAM_PLAY_FAIL       			 				"UE105" 	///< Failed to play the video, please check the message callback specific error code iErrorCode.
#define OPEN_SDK_STREAM_TRANSF_TERMINAL_BINDING   	 				"UE106" 	///< The current account has enabled terminal binding. Only the specified device can log in.
#define OPEN_SDK_STREAM_VIDEO_RECORD_NOTEXIST   	 				"UE108"     ///< Video record not found.
#define OPEN_SDK_STREAM_VTDU_CONCURRENT_LIMIT          	 			"UE109"     ///< Take the flow of concurrent route restrictions, please upgrade to Enterprise Edition.
#define OPEN_SDK_STREAM_UNSUPPORTED            	 				    "UE110"		///< The type of resolution that the device does not support is selected according to the device preview capability level.

#endif	//_H_OPENNETSTREAMERROR_H_