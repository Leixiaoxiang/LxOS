/*****************************************************************************************************
 * 文件：debug.h
 * 介绍：程序 log and error 的输出控制
 * 作者：lxx
 * 日期：2022/01/02
*****************************************************************************************************/

#ifndef __DEBUG_H_
#define __DEBUG_H_

/*
    临时包含 stdio，后面使用重写函数替换掉
*/
#include <stdio.h>
#define os_log      printf
#define os_err      printf

#endif                                                                  /* __DEBUG_H_               */
/************************************* END OF FILES *************************************************/

