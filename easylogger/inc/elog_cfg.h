/*
 * This file is part of the EasyLogger Library.
 *
 * Copyright (c) 2015, Armink, <armink.ztl@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * 'Software'), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Function: It is the configure head file for this library.
 * Created on: 2015-07-30
 */

#ifndef _ELOG_CFG_H_
#define _ELOG_CFG_H_

/* setting static output log level */
#define ELOG_OUTPUT_LVL                      /* @note you must define it for a value */
/* enable log output. default open this macro */
#define ELOG_OUTPUT_ENABLE
/* output line number max length */
#define ELOG_LINE_NUM_MAX_LEN                /* @note you must define it for a value */
/* log buffer size */
#define ELOG_BUF_SIZE                        /* @note you must define it for a value */
/* output filter's tag max length */
#define ELOG_FILTER_TAG_MAX_LEN              /* @note you must define it for a value */
/* output filter's keyword max length */
#define ELOG_FILTER_KW_MAX_LEN               /* @note you must define it for a value */
/* output newline sign */
#define ELOG_NEWLINE_SIGN                    /* @note you must define it for a value */

#endif /* _ELOG_CFG_H_ */
