/*
 * PollingRoutines.c
 *
 *  Created on: Mar 19, 2021
 *      Author: Nathan
 */

#include "main.h"
#include "PollingRoutines.h"
#include "string.h"
#include "cmsis_os.h"


extern UART_HandleTypeDef huart6;
extern osSemaphoreId binarySemUartMsgHandle;


uint8_t uartMsgBuf[UART_BUF_SIZE];
uint8_t uartMsgData[2];
uint8_t msgIndex = 0;
uint8_t msgRdyFlag = 0;

void PollingInit()
{
	// enable interrupt
	HAL_UART_Receive_IT(&huart6, uartMsgData, 1);
}

void PollingRoutine()
{
	if(msgRdyFlag)
	{
		xSemaphoreGive(binarySemUartMsgHandle); // flag view, message ready
		msgRdyFlag = 0;
	}
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if(msgIndex == 0)
	{
		memset(&uartMsgBuf, 0, sizeof(uartMsgBuf));
	}
	if(uartMsgData[0] != '\n')
	{
		if(msgIndex >= 27) // ONE LESS THAN BUFFER ARRAY SIZE - not sure if this is the necessary #?
		{
			uartMsgBuf[msgIndex] = uartMsgData[0];
		}
		else
		{
			uartMsgBuf[msgIndex++] = uartMsgData[0];
		}
	}
	else
	{
		uartMsgBuf[msgIndex] = uartMsgData[0];
		msgIndex = 0;

		msgRdyFlag = 1;
	}

	// enable interrupt again
	HAL_UART_Receive_IT(&huart6, uartMsgData, 1);
}
