/*
 * Copyright (c) 2013-2019, Huawei Technologies Co., Ltd. All rights reserved.
 * Copyright (c) 2020, Huawei Device Co., Ltd. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this list of
 *    conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list
 *    of conditions and the following disclaimer in the documentation and/or other materials
 *    provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors may be used
 *    to endorse or promote products derived from this software without specific prior written
 *    permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _LOS_SYS_PRI_H
#define _LOS_SYS_PRI_H

#include "los_sys.h"
#include "los_base_pri.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif /* __cplusplus */
#endif /* __cplusplus */

/**
 * @ingroup los_sys
 * Number of milliseconds in one second.	
 */
#define OS_SYS_MS_PER_SECOND   1000			//一秒多少毫秒

/**
 * @ingroup los_sys
 * Number of microseconds in one second.
 */
#define OS_SYS_US_PER_SECOND   1000000		//一秒多少微秒

/**
 * @ingroup los_sys
 * Number of nanoseconds in one second.
 */
#define OS_SYS_NS_PER_SECOND   1000000000	//一秒多少纳秒

/**
 * @ingroup los_sys
 * Number of microseconds in one milliseconds.
 */
#define OS_SYS_US_PER_MS        1000		//一毫秒都是微秒

/**
 * @ingroup los_sys
 * Number of nanoseconds in one milliseconds.
 */
#define OS_SYS_NS_PER_MS        1000000		//一毫秒都是纳秒

/**
 * @ingroup los_sys
 * Number of nanoseconds in one microsecond.
 */
#define OS_SYS_NS_PER_US        1000		//一微秒都是纳秒

/**
 * @ingroup los_sys
 * The maximum length of name.
 */
#define OS_SYS_APPVER_NAME_MAX 64			//名字的最大长度

/**
 * @ingroup los_sys
 * The magic word.
 */
#define OS_SYS_MAGIC_WORD      0xAAAAAAAA	//魔法数字,还记得栈顶的魔法数字是多少吗? 0xCCCCCCCC

/**
 * @ingroup los_sys
 * The initialization value of stack space.
 */
#define OS_SYS_EMPTY_STACK     0xCACACACA	//栈的填充内容魔法数字

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cplusplus */
#endif /* __cplusplus */

#endif /* _LOS_SYS_PRI_H */
