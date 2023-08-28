

#ifndef REGISTERS_H
#define REGISTERS_H
#include "Platform_Types.h"

#define PERIPH_BASE 0x40000000UL /*!< Peripherals register base address*/
#define IOPORT_BASE 0x50000000UL /*!< IOPORT register base address*/


typedef struct
{
    volatile uint32 MODER;
    volatile uint32 OTYPER;
    volatile uint32 OSPEEDR;
    volatile uint32 PUPDR;
    volatile uint32 IDR;
    volatile uint32 ODR;
    volatile uint32 BSRR;
    volatile uint32 LCKR;
    volatile uint32 AFRL;
    volatile uint32 AFRH;
    volatile uint32 BRR;
} GPIO_RegisterTypeDef;

#define GPIOA_BASE     ( IOPORT_BASE + 0x00000000UL )
#define GPIOB_BASE     ( IOPORT_BASE + 0x00000400UL )
#define GPIOC_BASE     ( IOPORT_BASE + 0x00000800UL )
#define GPIOD_BASE     ( IOPORT_BASE + 0x00000C00UL )
#define GPIOE_BASE     ( IOPORT_BASE + 0x00001000UL )
#define GPIOF_BASE     ( IOPORT_BASE + 0x00001400UL )

#define AHBPERIPH_BASE ( PERIPH_BASE + 0x00020000UL )
#define APBPERIPH_BASE ( PERIPH_BASE + 0x00010000UL )
#define RCC_BASE       ( AHBPERIPH_BASE + 0x00001000UL )

typedef struct
{
    volatile uint32 CR;
    volatile uint32 ICSCR;
    volatile uint32 CFGR;
    volatile uint32 PLL;
    volatile uint32 CRRCR;
    volatile uint32 CIER;
    volatile uint32 CIFR;
    volatile uint32 CICR;
    volatile uint32 IOPRSTR;
    volatile uint32 AHBRSTR;
    volatile uint32 APBRSTR1;
    volatile uint32 APBRSTR2;
    volatile uint32 IOPENR;
    volatile uint32 AHBENR;
    volatile uint32 APBENR1;
    volatile uint32 APBENR2;
    volatile uint32 IOPSMENR;
    volatile uint32 AHBSMENR;
    volatile uint32 APBSMENR1;
    volatile uint32 APBSMENR2;
    volatile uint32 CCIPR;
    volatile uint32 CCIPR2;
    volatile uint32 BDCR;
    volatile uint32 CSR;
} RCC_RegisterTypeDef;


#define GPIOA                ( (GPIO_RegisterTypeDef *)GPIOA_BASE )
#define GPIOB                ( (GPIO_RegisterTypeDef *)GPIOB_BASE )
#define GPIOC                ( (GPIO_RegisterTypeDef *)GPIOC_BASE )
#define GPIOD                ( (GPIO_RegisterTypeDef *)GPIOD_BASE )
#define GPIOE                ( (GPIO_RegisterTypeDef *)GPIOE_BASE )
#define GPIOF                ( (GPIO_RegisterTypeDef *)GPIOF_BASE )


#define RCC                  ( (RCC_RegisterTypeDef *)RCC_BASE )

#define RCC_GPIOA_CLK_EN( )  ( RCC->IOPENR |= ( 1 << 0 ) )
#define RCC_GPIOA_CLK_DIS( ) ( RCC->IOPENR &= ~( 1 << 0 ) )
#define RCC_GPIOB_CLK_EN( )  ( RCC->IOPENR |= ( 1 << 1 ) )
#define RCC_GPIOB_CLK_DIS( ) ( RCC->IOPENR &= ~( 1 << 1 ) )
#define RCC_GPIOC_CLK_EN( )  ( RCC->IOPENR |= ( 1 << 2 ) )
#define RCC_GPIOC_CLK_DIS( ) ( RCC->IOPENR &= ~( 1 << 2 ) )
#define RCC_GPIOD_CLK_EN( )  ( RCC->IOPENR |= ( 1 << 3 ) )
#define RCC_GPIOD_CLK_DIS( ) ( RCC->IOPENR &= ~( 1 << 3 ) )
#define RCC_GPIOE_CLK_EN( )  ( RCC->IOPENR |= ( 1 << 4 ) )
#define RCC_GPIOE_CLK_DIS( ) ( RCC->IOPENR &= ~( 1 << 4 ) )
#define RCC_GPIOF_CLK_EN( )  ( RCC->IOPENR |= ( 1 << 5 ) )
#define RCC_GPIOF_CLK_DIS( ) ( RCC->IOPENR &= ~( 1 << 5 ) )


#define SCS_BASE             ( 0xE000E000UL )           /*!< System Control Space Base Address */
#define NVIC_BASE            ( SCS_BASE + 0x0100UL )    /*!< NVIC Base Address */
#define NVIC                 ( (NVIC_Type *)NVIC_BASE ) /*!< NVIC configuration struct */

typedef struct
{
    uint32 ISER[ 1U ]; /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register */
    uint32 RESERVED0[ 31U ];
    uint32 ICER[ 1U ]; /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register */
    uint32 RESERVED1[ 31U ];
    uint32 ISPR[ 1U ]; /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register */
    uint32 RESERVED2[ 31U ];
    uint32 ICPR[ 1U ]; /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register */
    uint32 RESERVED3[ 31U ];
    uint32 RESERVED4[ 64U ];
    uint32 IP[ 8U ]; /*!< Offset: 0x300 (R/W)  Interrupt Priority Register */
} NVIC_Type;

#endif
