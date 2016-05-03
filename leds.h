/*
 * leds.h
 *
 *  Created on: Apr 21, 2016
 *      Author: design
 */

#ifndef LEDS_H_
#define LEDS_H_
#include <stm32f4xx.h>

#define LED_PWM_IRQHandler TIM2_IRQHandler
#define LED_TIM	TIM2
#define LED_TIM_IRQn TIM2_IRQn
#define LED_TIM_RCC RCC_APB1Periph_TIM2


void update_ping_ledbut(void);
void update_channel_leds(void);
void update_INF_REV_ledbut(uint8_t channel);
void init_LED_PWM_IRQ(void);

#endif /* LEDS_H_ */