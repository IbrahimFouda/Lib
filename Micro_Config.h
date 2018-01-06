#ifndef _MICRO_CONFIG_H__
#define _MICRO_CONFIG_H__

#ifndef OSC_FREQ
#define OSC_FREQ                    (8000000UL)
#endif

#include <pic16f877a.h>

/*******************************************************************************
 *                           GPIO Registers                                    *
 *******************************************************************************/

/* GPIO Pins */
#define GPIO_PIN_0                          (0U)
#define GPIO_PIN_1                          (1U)
#define GPIO_PIN_2                          (2U)
#define GPIO_PIN_3                          (3U)
#define GPIO_PIN_4                          (4U)
#define GPIO_PIN_5                          (5U)
#define GPIO_PIN_6                          (6U)
#define GPIO_PIN_7                          (7U)

/* GPIO Port Registers Redefintion */
#define GPIO_PORTA_DATA                     (PORTA)
#define GPIO_PORTA_DIRECTION                (TRISA)

#define GPIO_PORTB_DATA                     (PORTB)
#define GPIO_PORTB_DIRECTION                (TRISB)

#define GPIO_PORTC_DATA                     (PORTC)
#define GPIO_PORTC_DIRECTION                (TRISC)

#define GPIO_PORTD_DATA                     (PORTD)
#define GPIO_PORTD_DIRECTION                (TRISD)

#define GPIO_PORTE_DATA                     (PORTE)
#define GPIO_PORTE_DIRECTION                (TRISE)

/* GPIO Direction Settings */   
#define GPIO_OUT                            (0U)
#define GPIO_IN                             (1U)

/*******************************************************************************
 *                          Interrupt Registers                                *
 *******************************************************************************/

/* INTCON Register bit 7:0 */
#define INT_GLOBAL_ENABLE_BIT               (GIE) 
#define INT_PERIPHERAL_ENABLE_BIT           (PEIE)                    
#define INT_TM0_OVERFLOW_ENABLE_BIT         (TMR0IE)
#define INT_EXTERNAL_ENABLE_BIT             (INTE)
#define INT_RB_PORT_CHANGE_ENABLE_BIT       (RBIE)
#define INT_TM0_OVERFLOW_FLAG_BIT           (TMR0IF)
#define INT_RB0_PIN_EXT_FLAG_BIT            (INTF)
#define INT_RB_PORT_CHANGE_FLAG_BIT         (RBIF)

/* PIR1 Register related bits */
#define INT_TM1_OVERFLOW_FLAG_BIT           (TMR1IF)

/* PIE1 Regisger related bits */
#define INT_TM1_OVERFLOW_ENABLE_BIT         (TMR1IE)



/*******************************************************************************
 *                              Timer Registers                                *
 *******************************************************************************/

/* OPTION_REG register for Timer0  bit 7:0 */
#define TIMER_TM0_CONFIG_REG                (OPTION_REG)
/* Bits */
#define PULL_UP_PORTB_ENABLE_BIT            (RBRU)
#define TIMER_TM0_CLOCK_SOURCE_SELECT_BIT   (T0CS)
#define TIMER_TM0_SOURCE_EDGE_SELECT_BIT    (T0SE)
#define TIMER_TM0_PRESCALER_ASSIGNEMT_BIT   (PSA)
#define TIMER_TM0_PRESCALER_BIT_0           (PS0)
#define TIMER_TM0_PRESCALER_BIT_1           (PS1)
#define TIMER_TM0_PRESCALER_BIT_2           (PS2)

/* Timer0 Counter Register */
#define TIMER_TM0_COUNTER_REGISTER           (TMR0)

/* T1CON Register for timer1 configuration bits */
#define TIMER_TM1_CONFIG_REG                (T1CON)
/* Bits */
#define TIMER_TM1_PRESCALER_BIT_0           (T1CKPS0)
#define TIMER_TM1_PRESCALER_BIT_1           (T1CKPS1)
#define TIMER_TM1_OSCILATTOR_ENABLE_BIT     (T1OSCEN)
#define TIMER_TM1_EXTERNAL_CLOCK_SYNC_BIT   (T1SYNC)
#define TIMER_TM1_CLOCK_SOURCE_SELECT_BIT   (TMR1CS)
#define TIMER_TM1_ON_BIT                    (TMR1ON)

/* Timer1 Counter Register */
#define TIMER_TM1_COUNTER_REGISTER_LOW      (TMR1L)
#define TIMER_TM1_COUNTER_REGISTER_HIGH     (TMR1H)

#endif