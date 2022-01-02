/*****************************************************************************************************
 * �ļ���task.c
 * ���ܣ��� task ����ⲿ�����ӿڵ�ʵ��
 * ���ߣ�lxx
 * ���ڣ�2022/01/02
*****************************************************************************************************/
/*****************************************************************************************************
 *                                              ͷ�ļ�����
*****************************************************************************************************/
#include "task.h"

/*****************************************************************************************************
 *                                              ����ʵ��
*****************************************************************************************************/
/*****************************************************************************************************
 * ������ListMonoHeadInsert
 * ���ܣ������������ڵ�ӵ���������Դ��ͷ������
 * ���룺pListResc		 ����������Դָ��
 * 		pListNode		���������ڵ�ָ��
 * �����TASK_ERR_NONE	 ���񴴽����
 * 		TASK_ERR_ARGS	��������쳣������ʧ��
*****************************************************************************************************/
task_return_t TaskCreatWithStack (ptask_fun_t   pTaskFun,
                                    pos_tcb_t   pTcb,
                                    cpu_add_t   StackAddr,
                                    uint32_t    StackSize)
{
    /*
        ���ڴ���ĸ��ֲ��������ж�
    */
    if ((!pTaskFun)     \
        || (!pTcb)) {
        os_err("%s %d input args error! \r\n", __FUNCTION__, __LINE__);
        return(TASK_ERR_NONE);
    }
    /*
        1��stack �����ԭ��Ϊ�˱�֤ cpu ���Կ��ٵķ��ʣ����δ���룬������۷��ʵĴ���������1��
        2������ stack ��8�ֽڵ����϶��룬��ʱ��Ҫȷ�� size �Ͷ���֮���Ƿ񻹴���
    */
    StackAddr + StackSize > (StackAddr + StackSize) + ~((cpu_add_t)0x07);
    
}

#define ALGIN_BYTE          (8)
#define UP_ALGIN(type, addr, nbyte)   \
                (addr + nbyte - 1) & (~((type)nbyte - 1))