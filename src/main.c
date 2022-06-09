#include <stdlib.h>
#include <stdint.h>

#define LED_DELAY 5000 

#define STM32_RCC_BASE    0x40023800

#define STM32_GPIOC_BASE     0x48000800U

#define STM32_RCC_AHB1ENR_OFFSET  0x0030

#define STM32_GPIO_MODER_OFFSET   0x0000
#define STM32_GPIO_OTYPER_OFFSET  0x0004
#define STM32_GPIO_PUPDR_OFFSET   0x000c

#define STM32_GPIO_BSRR_OFFSET    0x0018

#define STM32_RCC_AHB1ENR  (STM32_RCC_BASE+STM32_RCC_AHB1ENR_OFFSET)

#define STM32_GPIOC_MODER (STM32_GPIOC_BASE+STM32_GPIO_MODER_OFFSET)

#define STM32_GPIOC_OTYPER (STM32_GPIOC_BASE+STM32_GPIO_OTYPER_OFFSET)
#define STM32_GPIOC_PUPDR (STM32_GPIOC_BASE+STM32_GPIO_PUPDR_OFFSET)    
#define STM32_GPIOC_BSRR (STM32_GPIOC_BASE + STM32_GPIO_BSRR_OFFSET)

#define GPIO_BSRR_SET(n)(1 << (n))
#define GPIO_BSRR_RST(n)(1 << (n + 16))

static const char fw_version[] = {'V','1','.','0'};
static uint32_t led_status;

int main(int argc,char *argv[])
{
uint32_t reg;

uint32_t *pRCC_AHB1ENR = (uint32_t *)STM32_RCC_AHB1ENR;
uint32_t *pGPIOC_MODER  = (uint32_t *)STM32_GPIOC_MODER;
uint32_t *pGPIOC_OTYPER = (uint32_t *)STM32_GPIOC_OTYPER;
uint32_t *pGPIOC_PUPDR  = (uint32_t *)STM32_GPIOC_PUPDR;
uint32_t *pGPIOC_BSRR   = (uint32_t *)STM32_GPIOC_BSRR;
while(1)
{
   *pGPIOC_BSRR = GPIO_BSRR13_SET;
        led_status = 0;
    for (uint32_t i =0; i < LED_DELAY; i++);
    *pGPIOC_BSRR = GPIO_BSRR13_RESET;
        led_status = 1;
    for (uint32_t i =0; i < LED_DELAY; i++);  
};
return EXIT_SUCCESS;
}
