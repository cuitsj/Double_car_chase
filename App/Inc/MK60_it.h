#ifndef __MK60_IT_H__
#define __MK60_IT_H__

/*                          ���¶����ж�������
 *  ��ȡ��Ĭ�ϵ��ж�����Ԫ�غ궨��        #undef  VECTOR_xxx
 *  �����¶��嵽�Լ���д���жϺ���      #define VECTOR_xxx    xxx_IRQHandler
 *  ���磺
 *       #undef  VECTOR_003                         ��ȡ��ӳ�䵽�ж�����������жϺ�����ַ�궨��
 *       #define VECTOR_003    HardFault_Handler    ���¶���Ӳ���Ϸ��жϷ�����
 */

#include    "common.h"
#include    "include.h"

extern uint8 delay_to_out_circle_flag;
extern uint8 delay_sendMSG_flag;
extern uint8 start_sendMSG_flag;
extern uint8 front_in_circle_flag;

void PORTA_IRQHandler(); //����ͷ���жϷ�����
void PORTE_IRQHandler(); //NRF�жϷ�����
void DMA0_IRQHandler();  //����ͷDMA�жϷ�����
void PIT0_IRQHandler();  //��ʱ����*****�������&ͣ�����&�������****
void PIT1_IRQHandler();  //��ʱ���� ��ʱ����
void PIT2_IRQHandler();  //��ʱ���� ��ʱ����

#endif