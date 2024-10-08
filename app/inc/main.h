#include "sas_common.h"
#include "sas_init.h"

/* volatile uint32_t* MSR= (uint32_t*)(CAN1+0x004);
volatile uint32_t* ESR= (uint32_t*)(CAN1+0x018);
volatile uint32_t* FMR= (uint32_t*)(CAN1+0x200);
volatile uint32_t* BTR= (uint32_t*)(CAN1+0x01C);
volatile uint32_t* FIFO0= (uint32_t*)(CAN1+0x00C);
volatile uint32_t* FIFO1= (uint32_t*)(CAN1+0x010);
volatile uint32_t* TSR= (uint32_t*)(CAN1+0x08);
volatile uint32_t* RF1R= (uint32_t*)(CAN1+0x1B0);
volatile uint32_t* FILTERReg= (uint32_t*)(CAN1+ 0x21C);
volatile uint32_t* USARTSTATUS= (uint32_t*)(USART1_BASE+ 0x0);
volatile uint32_t* GPIOAODR= (uint32_t*)(GPIO_PORT_A_BASE+0x0c);
volatile uint32_t* RCCregis= (uint32_t*)(RCC_BASE+0x018);
volatile uint32_t* AFIORE= (uint32_t*)(AFIO_BASE+0x004); */

  // flash_unlock();
  // uint32_t addre=0x8001FF0;
  // uint16_t dat=0xA5A5;
  // for(uint32_t i=0;i<1024;i++) {
  // flash_program_half_word(addre, dat);
  // addre+=2;
  // }
  // flash_erase_page((uint32_t)0x08002010);
  // flash_erase_all_pages();
  // flash_lock();

typedef enum {
  DownloadReq,
  GetData,
  TransferDone,
  Ack,
  ReadStatus,
  EraseApp,
  init,
}state_machin_t;

int main(void);
void uartSetup();