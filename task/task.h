/*****************************************************************************************************
 * 文件：task.h
 * 介绍：与 task 相关的数据类型声明和外部函数接口声明
 * 作者：lxx
 * 日期：2022/01/02
*****************************************************************************************************/
#ifndef __TASK_H_
#define __TASK_H_

/*****************************************************************************************************
 *                                              头文件包含
*****************************************************************************************************/
#include "debug.h"
#include "cpu_type.h"
#include "os.h"
/*****************************************************************************************************
 *                                              数据类型声明
*****************************************************************************************************/
enum _task_return {
    TASK_ERR_NONE           = 0,
    TASK_ERR_ARGS           = 1,
    TASK_ERR_STACK_CHECK    = 2,
    TASK_ERR_TASK_NAME      = 3,
    TASK_ERR_LIST_ITEM      = 4,
    TASK_ERR_STACK_INIT     = 5
};
typedef enum _task_return           task_return_t;

/*****************************************************************************************************
 *                                              函数声明
*****************************************************************************************************/
task_return_t TaskCreatWithStack(ptask_fun_t  pTaskFun,
                                    void *      pFunArgs,
                                    pos_tcb_t   pTcb,
                                    puchar_t    pTaskName,
                                    pcpu_add_t  pStackAddr,
                                    uint32_t    StackSize);

#endif                                                                  /* __TASK_H_                */
/************************************* END OF FILES *************************************************/
