#include <stdlib.h>
#include <stdint.h>
#define SRAM_START  0x20000000U
#define SRAM_SIZE   (128U * 1024U)  
#define SRAM_END    ((SRAM_START) + \
                     (SRAM_SIZE))

#define STACK_START SRAM_END

int main(void);

void reset_handler (void);
void nmi_handler    (void) __attribute__ ((weak,alias("default_handler")));
void hardfault_handler (void) __attribute__ ((weak,alias("default_handler")));
void memmanage_handler (void) __attribute__ ((weak,alias("default_handler")));
void busfault_handler  (void) __attribute__ ((weak,alias("default_handler")));
void usagefault_handler(void) __attribute__ ((weak,alias("default_handler")));
void svc_handler(void) __attribute__ ((weak,alias("default_handler")));
void debugmon_handler  (void) __attribute__ ((weak,alias("default_handler")));
void pendsv_handler    (void) __attribute__ ((weak,alias("default_handler")));
void systick_handler   (void) __attribute__ ((weak,alias("default_handler")));
void wwdg_handler          (void) __attribute__ ((weak,alias("default_handler")));
void pvd_handler           (void) __attribute__ ((weak,alias("default_handler")));
void tamp_stamp_handler           (void) __attribute__ ((weak,alias("default_handler")));
void rtc_wkup_handler           (void) __attribute__ ((weak,alias("default_handler")));
void flash_handler           (void) __attribute__ ((weak,alias("default_handler")));
void rcc_handler            (void) __attribute__ ((weak,alias("default_handler")));
void exit0_handler            (void) __attribute__ ((weak,alias("default_handler")));
void exit1_handler            (void) __attribute__ ((weak,alias("default_handler")));
void exit2_handler            (void) __attribute__ ((weak,alias("default_handler")));
void exit3_handler            (void) __attribute__ ((weak,alias("default_handler")));
void exit4_handler            (void) __attribute__ ((weak,alias("default_handler")));
void dma1_stream0_handler            (void) __attribute__ ((weak,alias("default_handler")));
void dma1_stream1_handler            (void) __attribute__ ((weak,alias("default_handler")));
void dma1_stream2_handler            (void) __attribute__ ((weak,alias("default_handler")));
void dma1_stream3_handler            (void) __attribute__ ((weak,alias("default_handler")));
void dma1_stream4_handler          (void) __attribute__ ((weak,alias("default_handler")));
void dma1_stream5_handler          (void) __attribute__ ((weak,alias("default_handler")));
void dma1_stream6_handler          (void) __attribute__ ((weak,alias("default_handler")));
void adc_handler             (void) __attribute__ ((weak,alias("default_handler")));
void exti9_5_handler            (void) __attribute__ ((weak,alias("default_handler")));
void tim1_up_tim9_handler           (void) __attribute__ ((weak,alias("default_handler")));
void tim1_up_tim10_handler           (void) __attribute__ ((weak,alias("default_handler")));
void tim1_trc_com_tim11_handler           (void) __attribute__ ((weak,alias("default_handler")));
void tim1_cc_handler            (void) __attribute__ ((weak,alias("default_handler")));
void tim2_handler            (void) __attribute__ ((weak,alias("default_handler")));
void tim3_handler           (void) __attribute__ ((weak,alias("default_handler")));
void tim4_handler          (void) __attribute__ ((weak,alias("default_handler")));
void i2c1_ev_handler          (void) __attribute__ ((weak,alias("default_handler")));
void i2c1_er_handler           (void) __attribute__ ((weak,alias("default_handler")));
void i2c2_ev_handler           (void) __attribute__ ((weak,alias("default_handler")));
void i2c2_er_handler           (void) __attribute__ ((weak,alias("default_handler")));
void spi1_handler    (void) __attribute__ ((weak,alias("default_handler")));
void spi2_handler    (void) __attribute__ ((weak,alias("default_handler")));
void usart1_handler    (void) __attribute__ ((weak,alias("default_handler")));
void usart2_handler    (void) __attribute__ ((weak,alias("default_handler")));
void exti15_10_handler    (void) __attribute__ ((weak,alias("default_handler")));
void rtc_alarm_handler   (void) __attribute__ ((weak,alias("default_handler")));
void otg_fs_wkup_handler  (void) __attribute__ ((weak,alias("default_handler")));
void dma1_stream7_handler    (void) __attribute__ ((weak,alias("default_handler")));
void sdio_handler    (void) __attribute__ ((weak,alias("default_handler")));
void tim5_handler (void) __attribute__ ((weak,alias("default_handler")));
void spi3_handler   (void) __attribute__ ((weak,alias("default_handler")));
void dma2_stream0_handler    (void) __attribute__ ((weak,alias("default_handler")));
void dma2_stream1_handler    (void) __attribute__ ((weak,alias("default_handler")));
void dma2_stream2_handler    (void) __attribute__ ((weak,alias("default_handler")));
void dma2_stream3_handler     (void) __attribute__ ((weak,alias("default_handler")));
void dma2_stream4_handler     (void) __attribute__ ((weak,alias("default_handler")));
void otg_fs_handler    (void) __attribute__ ((weak,alias("default_handler")));
void dma2_stream5_handler     (void) __attribute__ ((weak,alias("default_handler")));
void dma2_stream6_handler    (void) __attribute__ ((weak,alias("default_handler")));
void dma2_stream7_handler     (void) __attribute__ ((weak,alias("default_handler")));
void usart6_handler    (void) __attribute__ ((weak,alias("default_handler")));
void i2c3_ev_handler   (void) __attribute__ ((weak,alias("default_handler")));
void i2c3_er_handler  (void) __attribute__ ((weak,alias("default_handler")));
void fpu_handler   (void) __attribute__ ((weak,alias("default_handler")));
void spi4_handler    (void) __attribute__ ((weak,alias("default_handler")));
void spi5_handler    (void) __attribute__ ((weak,alias("default_handler")));



extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _la_data;
extern uint32_t _sbss;
extern uint32_t _ebss;
uint32_t vectors[] __attribute__((section(".isr_vectors"))) =
{
STACK_START,
    (uint32_t)reset_handler,
    (uint32_t)nmi_handler,
    (uint32_t)hardfault_handler,
    (uint32_t)memmanage_handler,
    (uint32_t)busfault_handler,
    (uint32_t)usagefault_handler,
    0,
    0,
    0,
    0,
    (uint32_t)svc_handler,
    (uint32_t)debugmon_handler,
    0,
    (uint32_t)pendsv_handler,
    (uint32_t)wwdg_handler,
    (uint32_t)pvd_handler,
    (uint32_t)tamp_stamp_handler, 
    (uint32_t)rtc_wkup_handler, 
    (uint32_t)flash_handler, 
    (uint32_t)rcc_handler,  
    (uint32_t)exit0_handler, 
    (uint32_t)exit1_handler,  
    (uint32_t)exit2_handler, 
    (uint32_t)exit3_handler,  
    (uint32_t)exit4_handler, 
    (uint32_t)dma1_stream0_handler,
    (uint32_t)dma1_stream1_handler,  
    (uint32_t)dma1_stream2_handler, 
    (uint32_t)dma1_stream3_handler,
    (uint32_t)dma1_stream4_handler,
    (uint32_t)dma1_stream5_handler,
    (uint32_t)dma1_stream6_handler,
    (uint32_t)adc_handler,
    0,
    0,
    0,
    0,
    (uint32_t)exti9_5_handler,
    (uint32_t)tim1_up_tim9_handler, 
    (uint32_t)tim1_up_tim10_handler, 
    (uint32_t)tim1_trc_com_tim11_handler,
    (uint32_t)tim1_cc_handler,
    (uint32_t)tim2_handler,
    (uint32_t)tim3_handler,
    (uint32_t)tim4_handler,
    (uint32_t)i2c1_ev_handler,
    (uint32_t)i2c1_er_handler,
    (uint32_t)i2c2_ev_handler,  
    (uint32_t)i2c2_er_handler,
    (uint32_t)spi1_handler, 
    (uint32_t)spi2_handler,
    (uint32_t)usart1_handler,
    (uint32_t)usart2_handler,
    0,
    (uint32_t)exti15_10_handler,
    (uint32_t)rtc_alarm_handler,
    (uint32_t)otg_fs_wkup_handler,
    0,
    0,
    0,
    0,
    (uint32_t)dma1_stream7_handler,
    0,
    (uint32_t)sdio_handler,
    (uint32_t)tim5_handler,
    (uint32_t)spi3_handler,
    0,
    0,
    0,
    0,
    (uint32_t)dma2_stream0_handler, 
    (uint32_t)dma2_stream1_handler,
    (uint32_t)dma2_stream2_handler,
    (uint32_t)dma2_stream3_handler,
    (uint32_t)dma2_stream4_handler,
    0,
    0,
    0,
    0,
    0,
    0,
    (uint32_t)otg_fs_handler,
    (uint32_t)dma2_stream5_handler, 
    (uint32_t)dma2_stream6_handler,
    (uint32_t)dma2_stream7_handler,
    (uint32_t)usart6_handler,
    (uint32_t)i2c3_ev_handler,
    (uint32_t)i2c3_er_handler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (uint32_t)fpu_handler,
    0,
    0,
    0,
    (uint32_t)spi4_handler,
    (uint32_t)spi5_handler,

    


    
    
};

void reset_handler (void)
{
    uint32_t i;
    uint32_t size = (uint32_t)&_edata - (uint32_t)&_sdata;
    uint8_t *pDst = (uint8_t*)&_sdata;
    uint8_t *pSrc = (uint8_t*)&_la_data;

    for(i =0; i < size; i++)
    {
        *pDst++ = *pSrc++;
    }
    size = (uint32_t)&_ebss - (uint32_t)&_sbss;
    pDst = (uint8_t*)&_sbss;
    for(i =0; i < size; i++)
    {
        *pDst++ =0;
    }
    main();

}
void default_handler(void)
{
    while(1){};
}