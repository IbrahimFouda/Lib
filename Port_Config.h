#ifndef _PORT_CONFIG_H__
#define _PORT_CONFIG_H__


#include "Micro_Config"

#define GPIO_CONFIGURED_PINS            (2U)

/* LED static Configurations */
#define LED_1_PORT_DR               (GPIO_PORTB_DATA)
#define LED_1_PORT_CR               (GPIO_PORTB_DIRECTION)
#define LED_1_PIN                   (GPIO_PIN_0)

/* SSD Units Static Configurations */
#define SSD_UNITS_PORT_DR           (GPOI_PORTD_DATA)
#define SSD_UNITS_PORT_CR           (GPIO_PORTD_DIRECTION)
#define SSD_UNITS_CONTROL_PORT      (GPIO_PORTB_DATA)
#define SSD_UNITS_CONTROL_PIN       (GPIO_PIN_)


#endif