/*****************************************************************************************************
 * 文件：os.h
 * 介绍：与 os 相关的数据类型的声明和变量的外部声明
 * 作者：lxx
 * 日期：2022/01/02
*****************************************************************************************************/

#ifndef __OS_H_
#define __OS_H_

/*****************************************************************************************************
 *                                              头文件包含
*****************************************************************************************************/
#include "cpu_type.h"

/*****************************************************************************************************
 *                                              数据类型声明
*****************************************************************************************************/
struct _os_tcb {
    cpu_add_t *     pTcbStkAddr;
    uint32_t        TcbStkSize;
};
typedef struct _os_tcb          os_tcb_t;
typedef os_tcb_t *              pos_tcb_t;

typedef void (* ptask_fun_t)(void *);

#endif                                                                  /* __OS_H_                  */
/************************************* END OF FILES *************************************************/
