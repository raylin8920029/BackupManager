#pragma once

/*
*******************************************************************************
* $Header: common.h 2     2018/04/17  Ray Lin
*
*  Copyright (c) 2017-2027 Ray Lin All rights reserved.
*
*  +-----------------------------------------------------------------+
*  | THIS SOFTWARE IS FURNISHED UNDER A LICENSE AND MAY ONLY BE USED |
*  | AND COPIED IN ACCORDANCE WITH THE TERMS AND CONDITIONS OF SUCH  |
*  | A LICENSE AND WITH THE INCLUSION OF THE THIS COPY RIGHT NOTICE. |
*  | THIS SOFTWARE OR ANY OTHER COPIES OF THIS SOFTWARE MAY NOT BE   |
*  | PROVIDED OR OTHERWISE MADE AVAILABLE TO ANY OTHER PERSON. THE   |
*  | OWNERSHIP AND TITLE OF THIS SOFTWARE IS NOT TRANSFERRED.        |
*  |                                                                 |
*  | THE INFORMATION IN THIS SOFTWARE IS SUBJECT TO CHANGE WITHOUT   |
*  | ANY PRIOR NOTICE AND SHOULD NOT BE CONSTRUED AS A COMMITMENT BY |
*  | Ray Lin.                                                    |
*  +-----------------------------------------------------------------+
*
* $History: common.h $
*
*******************************************************************************
*/

/*!
*******************************************************************************
* Copyright 2017-2027 Ray Lin All rights reserved.
*
* \file
* common.h
*
* \brief
* Useful macros, also include debug macros.
* To use debug macros, you should define two definitions.
*
* \date
* 2018/07/16
*
* \author
* Ray Lin
*
*******************************************************************************
*/

//! debug message channel enumerators
typedef enum {
	//! send debug message via console
	dfCONSOLE =		0x10000000,
} TDebugChannelFlags;

//! debug level enumerators
typedef enum {
	//! critical error debug message
	dfCRITICAL =	0x00000000,
	//! internal testing debug message
	//! will not be shown in release mode
	dfINTERNAL =	0x00000001,
	//! application message
	//! will be shown in release mode
	dfAPPLICATION = 0x00000002,
} TDebugLevelFlags;


#define MIOLNIR_RunWithCondition(condition, action) if (TRUE == condition){action}