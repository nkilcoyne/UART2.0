#include <gui/screen1_screen/Screen1View.hpp>
#include <stdio.h>

#include "string.h"
#include "PollingRoutines.h"

extern uint8_t uartMsgBuf[UART_BUF_SIZE];

// TESTING 123 CHANGES FOR GIT
Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::uartMsgRdy() // put all sscanf functions for widgets in here!
{
	int counterNumber = -1; // initializing counter number for dial
	int rpm = -1;
	int inputVolt = -1;

	if(uartMsgBuf[0] == 0)
		return;
	memset(&textArea1Buffer, 0, TEXTAREA1_SIZE); // initializing text area 1 to be 0
	memset(&textArea2Buffer, 0, TEXTAREA2_SIZE); // initializing text area 2 to be 0

	/*
	 * For the next line of code, we need to create if statements for each widget, so that we can set
	 * in their values. HOWEVER FOR THE SAKE OF THE TESTING VALUES, SINCE THE PARAMETERS ARE THE SAME
	 * WE ARE SETTING THE STARTER WIDGETS WITHIN THE SAME IF-STATEMENT
	 */

	// If statement for circleProgress1
	if(sscanf((const char*)uartMsgBuf, "Testing %d\r\n", &counterNumber) == 1)
	{
		circleProgress1.setValue(counterNumber);  // how to set the circle progress widget value
		//imageProgress1.setValue(counterNumber);  // how to set image progress widget value
		//textProgress1.setValue(counterNumber);  // how to set image w/ text progress widget value
		//lineProgress1.setValue(counterNumber);  // how to set line progress widget value
		//imageProgress2.setValue(counterNumber);
	}

	/*
	 * This function expects to receive messages in the format of "<GAUGE>: <ARG>",
	 * where <GAUGE> is the name of a gauge and <ARG> is an integer value.
	 *
	 * Some examples would be:
	 * RPM: 3325
	 * CHARGE: 125
	 *
	 */
	if(sscanf((const char*)uartMsgBuf, "RPM: %d\r\n", &rpm) == 1) 	// RPM If-statement
	{
		textProgress1.setValue(rpm);
		Unicode::strncpy(textArea2Buffer, (char*) uartMsgBuf, TEXTAREA2_SIZE - 1);
	}


	Unicode::strncpy(textArea1Buffer, (char*) uartMsgBuf, TEXTAREA1_SIZE - 1);

	// adding wildcard text values for other two text areas - DONT REMEMBER HOW TO ADD WILDCARD TEXT VALUES
	//Unicode::strncpy(textArea2Buffer, (char*) uartMsgBuf, TEXTAREA2_SIZE - 1);
	//Unicode::strncpy(textArea3Buffer, (char*) uartMsgBuf, TEXTAREA3_SIZE - 1);

	textArea1Buffer[28] = '\0'; // make sure last index is null
	textArea1.invalidate(); // always invalidate each variable before finishing updating screen
	textArea2.invalidate();
	textArea3.invalidate();
	// changes as of 123
}
