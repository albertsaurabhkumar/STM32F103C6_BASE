#ifndef SAS_GPIO_H
#define SAS_GPIO_H

/* Include Header files */

#include "sas_common.h"

/* DataType declaration for GPIO */

typedef enum sas_pin {
    SAS_PIN0=0,
    SAS_PIN1,
    SAS_PIN2,
    SAS_PIN3,
    SAS_PIN4,
    SAS_PIN5,
    SAS_PIN6,
    SAS_PIN7,
    SAS_PIN8,
    SAS_PIN9,
    SAS_PIN10,
    SAS_PIN11,
    SAS_PIN12,
    SAS_PIN13,
    SAS_PIN14,
    SAS_PIN15
} sas_pin;

typedef enum sas_port {
    SAS_PORTA=0,
    SAS_PORTB,
    SAS_PORTC,
    SAS_PORTD,
    SAS_PORTE
}sas_port;

typedef enum sas_level {
    LOW=0,
    HIGH,
    HI_IM,
    UNKNOWN
}sas_level;

typedef enum sas_config {
    IN_AN=0,
    IN_FLT,
    IN_PUPD,
    OUT_OD,
    OUT_PUPL,
    AF_OD,
    AF_PUPL
}sas_config;

typedef struct GPIO_t {
    sas_port port;
    sas_pin pin;
    sas_level level;
    sas_config config;
} GPIO_t;



/* GPIO Functions Prototypes */

sas_retype sas_read_pin(GPIO_t* );
sas_retype sas_write_pin(GPIO_t*);
sas_retype sas_read_port(GPIO_t*);
sas_retype sas_write_port(GPIO_t*);
sas_retype sas_configure_pin(GPIO_t*);
sas_retype sas_configure_port(GPIO_t*);

#endif