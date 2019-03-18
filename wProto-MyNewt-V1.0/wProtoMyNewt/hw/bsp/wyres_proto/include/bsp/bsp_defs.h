/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#ifndef H_BSP_DEFS_H
#define H_BSP_DEFS_H


#ifdef __cplusplus
extern "C" {
#endif
#define BSP_RADIO_DIO_0_PIN	MCU_GPIO_PORTB(1)	
#define BSP_RADIO_DIO_1_PIN	MCU_GPIO_PORTB(10)
#define BSP_RADIO_DIO_2_PIN	MCU_GPIO_PORTB(11)
#define	BSP_RADIO_DIO_3_PIN	MCU_GPIO_PORTB(7)
#define BSP_RADIO_DIO_4_PIN	MCU_GPIO_PORTB(5)
#define BSP_RADIO_DIO_5_PIN	MCU_GPIO_PORTB(4)
#define BSP_RADIO_RESET_PIN	MCU_GPIO_PORTA(2)

#define	 	MCU_GPIO_PORTC(13)
/* TODO: WHY? */
#define BSP_RADIO_BUSY_PIN 0

#define BSP_RADIO_NSS_PIN 	MCU_GPIO_PORTB(0)


#define BSP_UART_TX MCU_GPIO_PORTA(9)
#define BSP_UART_RX MCU_GPIO_PORTA(10)

#ifdef __cplusplus
}
#endif

#endif  /* H_BSP_DEFS_H */
