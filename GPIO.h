//*****************************************************************************
//
// File Name	: 'GPIO.h'
// Title		: General Purpose Input/Output library
// Author		: Muhammad Ebeid
// Created		: 5/1/2018
// Revised		: none
// Version		: 1.0
// Target MCU	: PIC
// Editor Tabs	: 4
//
//*****************************************************************************

#ifndef _GPIO_H__
#define _GPIO_H__

#include "Platform_Types.h"
#include "Micro_Config.h"
#include "Port_Config.h"

/* GPIO Level Settings */
#define HIGH                            (1U)
#define LOW                             (0U)

/* GPIO Direction Settings */
#define GPIO_OUT                        (0U)
#define GPIO_IN                         (1U)

/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/
typedef uint8 GPIO_PortData;
typedef uint8 GPIO_PortControl;

typedef uint8 GPIO_PortLevel;
typedef uint8 GPIO_PortDir;

typedef uint8 GPIO_Pin;
typedef uint8 GPIO_PinLevel;
typedef uint8 GPIO_PinDir;


/*******************************************************************************
 *                            Function Prototypes                              *
 *******************************************************************************/

/* GPIO Port Operations */
void GPIO_InitPort(GPIO_PortControl* PortControl, GPIO_PortDir PortDir);
void GPIO_WritePort(GPIO_PortData* PortData, GPIO_PortLevel PortLevel);
GPIO_PortLevel GPIO_ReadPort(GPIO_PortData* PortData);

/* GPIO Pin Operations */
void GPIO_InitPortPin(GPIO_PortControl* PortControl, GPIO_Pin Pin, GPIO_PinDir PinDir);
GPIO_PinLevel GPIO_ReadPortPin(GPIO_PortData* PortData, GPIO_PinLevel PinLevel);
void GPIO_WritePortPin(GPIO_PortData* PortData, GPIO_Pin Pin, GPIO_PinLevel PinLevel);
void GPIO_TogglePortPin(GPIO_PortData* PortData, GPIO_Pin Pin);


#endif
