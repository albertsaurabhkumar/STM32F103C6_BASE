/**
  ******************************************************************************
  * @file    sas_gpio.c
  * @author  Saurabh K
  * @brief   Description: GPIO driver file with read and write functions
  *
  *          This file contains:
  *           - Data structures for all sas library peripherals
  *
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 Sanguine Auto Software.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

#include "sas_gpio.h"

/// @brief Read the level of input/output pin
/// @return sas_retype

sas_retype sas_read_pin(GPIO_t * gpio) {
    sas_retype ret = SAS_ERR;
    return ret;
}

/// @brief Write the level of input/output pin
/// @return sas_retype

sas_retype sas_write_pin(GPIO_t * gpio) {
    sas_retype ret = SAS_ERR;
    return ret; 
}

/// @brief Read the level of input/output port
/// @return sas_retype

sas_retype sas_read_port(GPIO_t * gpio ) {
    sas_retype ret = SAS_ERR;
    return ret;
}

/// @brief Write the level of input/output port
/// @return sas_retype

sas_retype sas_write_port(GPIO_t * gpio) {
    sas_retype ret = SAS_ERR;
    return ret;
}

/// @brief Configure the GPIO port pin as input or output
/// @return sas_retype

sas_retype sas_configure_pin(GPIO_t * gpio) {
    sas_retype ret = SAS_ERR;
    uint8_t shift = 0;
    if(gpio->port == SAS_PORTA) {
        if(gpio->pin > 7) {
            shift = (gpio->pin - 8) * 4;
            if(gpio->config == AF_OD) {
                GPIOA->CRH = (0xD << shift) | ( (~(0xF << shift)) & GPIOA->CRH);  /* Output with 10MHZ and Open drain output */
            }else if(gpio->config == IN_FLT) {
                GPIOA->CRH = (0x4 << shift) | ( (~(0xF << shift)) & GPIOA->CRH);    /* Input to default state */
            }
        } else {
            shift = (gpio->pin) * 4;
            if(gpio->config == AF_OD) {
                GPIOA->CRL = (0xD << shift) | ( (~(0xF << shift)) & GPIOA->CRL);  /* Output with 10MHZ and Open drain output */
            }else if(gpio->config == IN_FLT) {
                GPIOA->CRL = (0x4 << shift) | ( (~(0xF << shift)) & GPIOA->CRL);    /* Input to default state */
            }
        }
    }
    
    return ret;
}

/// @brief Configure the GPIO port as input or output
/// @return sas_retype

sas_retype sas_configure_port(GPIO_t * gpio) {
    sas_retype ret = SAS_ERR;
    return ret;
}

