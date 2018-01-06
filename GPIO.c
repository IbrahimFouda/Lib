//*****************************************************************************
//
// File Name	: 'GPIO.c'
// Title		: General Purpose Input/Output library
// Author		: Muhammad Ebeid
// Created		: 5/1/2018
// Revised		: none
// Version		: 1.0
// Target MCU	: PIC
// Editor Tabs	: 4
//
//*****************************************************************************


#include "GPIO.h"

/*******************************************************************************
 *                            Function Definitions                              *
 *******************************************************************************/

/* GPIO Port Operations */
void GPIO_InitPort(GPIO_PortControl* PortControl, GPIO_PortDir PortDir){
    *PortControl = ((PortDir) ?  (~GPIO_OUT) : (GPIO_OUT));
}

void GPIO_WritePort(GPIO_PortData* PortData, GPIO_PortLevel PortLevel){
    *PortData = PortLevel;
}

GPIO_PortLevel GPIO_ReadPort(GPIO_PortData* PortData){
    return *PortData;
}

/* GPIO Pin Operations */
void GPIO_InitPortPin(GPIO_PortControl* PortControl, GPIO_Pin Pin, GPIO_PinDir PinDir){
    *PortControl = (*PortControl & (~(1 << Pin))) | (PinDir << Pin);
}

GPIO_PinLevel GPIO_ReadPortPin(GPIO_PortData* PortData, GPIO_PinLevel PinLevel){
    return (( *PortData & (1<<PinLevel) ) >> PinLevel);
}

void GPIO_WritePortPin(GPIO_PortData* PortData, GPIO_Pin Pin, GPIO_PinLevel PinLevel){
    *PortData = (*PortData & (~( 1 << Pin))) | (PinLevel << Pin);
}

void GPIO_TogglePortPin(GPIO_PortData* PortData, GPIO_Pin Pin){
    *PortData ^= (1<<Pin);
}

