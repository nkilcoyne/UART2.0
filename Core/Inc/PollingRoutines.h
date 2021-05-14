/*
 * PollingRoutines.h
 *
 *  Created on: Mar 19, 2021
 *      Author: Nathan
 */

#ifndef INC_POLLINGROUTINES_H_
#define INC_POLLINGROUTINES_H_
#ifdef __cplusplus
extern "C" {
#endif

#define UART_BUF_SIZE 28  // can change this buffer size, but no larger than 60 for screen/TouchGFX



void PollingInit();
void PollingRoutine();

#ifdef __cplusplus
}
#endif
#endif /* INC_POLLINGROUTINES_H_ */
