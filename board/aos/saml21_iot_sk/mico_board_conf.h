/**
******************************************************************************
* @file    mico_board_conf.h
* @author  William Xu
* @version V1.0.0
* @date    24-May-2018
* @brief   This file provides common configuration for current platform.
******************************************************************************
*
*  The MIT License
*  Copyright (c) 2018 MXCHIP Inc.
*
*  Permission is hereby granted, free of charge, to any person obtaining a copy 
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights 
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is furnished
*  to do so, subject to the following conditions:
*
*  The above copyright notice and this permission notice shall be included in
*  all copies or substantial portions of the Software.
*
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR 
*  IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
******************************************************************************
*/ 

#ifndef __MICO_BOARD_CONF__
#define __MICO_BOARD_CONF__

#ifdef __cplusplus
extern "C"
{
#endif


#define MCU_CLOCK_HZ (100000000)

#define HARDWARE_REVISION   "1.0"
#define DEFAULT_NAME        "SAML21"
#define MODEL               "SAML21_IOT_SK"

#ifdef __cplusplus
} /*extern "C" */
#endif

#endif //__MICO_BOARD_CONF__
