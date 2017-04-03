/* linux/arch/arm/mach-s5pv210/include/mach/map.h
 *
 * Copyright (c) 2010-2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * S5PV210 - Memory map definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_MAP_H
#define __ASM_ARCH_MAP_H __FILE__

#include <plat/map-base.h>
#include <plat/map-s5p.h>

#define S5PV210_PA_SDRAM		0x20000000

#define S5PV210_PA_SROM_BANK1		0x88000000
#define S5PV210_PA_SROM_BANK5		0xA8000000

#define S5PV210_PA_NAND			0xB0E00000
#define S3C_PA_NAND		S5PV210_PA_NAND

#define S5PC110_PA_ONENAND		0xB0000000
#define S5PC110_PA_ONENAND_DMA		0xB0600000

#define S5PV210_PA_CHIPID		0xE0000000

#define S5PV210_PA_SYSCON		0xE0100000

#define S5PV210_PA_GPIO			0xE0200000

#define S5PV210_PA_SPDIF		0xE1100000

#define S5PV210_PA_SPI0			0xE1300000
#define S5PV210_PA_SPI1			0xE1400000

#define S5PV210_PA_KEYPAD		0xE1600000

#define S5PV210_PA_ADC			0xE1700000

#define S5PV210_PA_IIC0			0xE1800000
#define S5PV210_PA_IIC1			0xFAB00000
#define S5PV210_PA_IIC2			0xE1A00000

#define S5PV210_PA_AC97			0xE2200000

#define S5PV210_PA_PCM0			0xE2300000
#define S5PV210_PA_PCM1			0xE1200000
#define S5PV210_PA_PCM2			0xE2B00000

#define S5PV210_PA_TIMER		0xE2500000
#define S5PV210_PA_SYSTIMER		0xE2600000
#define S5PV210_PA_WATCHDOG		0xE2700000
#define S5PV210_PA_RTC			0xE2800000

#define S5PV210_PA_UART			0xE2900000

#define S5PV210_PA_SROMC		0xE8000000

#define S5PV210_PA_CFCON		0xE8200000

#define S5PV210_PA_MFC			0xF1700000

#define S5PV210_PA_HSMMC(x)		(0xEB000000 + ((x) * 0x100000))

#define S5PV210_PA_HSOTG		0xEC000000
#define S5PV210_PA_HSPHY		0xEC100000

#define S5PV210_PA_IIS0			0xEEE30000
#define S5PV210_PA_IIS1			0xE2100000
#define S5PV210_PA_IIS2			0xE2A00000

#define S5PV210_PA_DMC0			0xF0000000
#define S5PV210_PA_DMC1			0xF1400000

#define S5PV210_PA_VIC0			0xF2000000
#define S5PV210_PA_VIC1			0xF2100000
#define S5PV210_PA_VIC2			0xF2200000
#define S5PV210_PA_VIC3			0xF2300000

#define S5PV210_PA_FB			0xF8000000

#define S5PV210_PA_MDMA			0xFA200000
#define S5PV210_PA_PDMA0		0xE0900000
#define S5PV210_PA_PDMA1		0xE0A00000

#define S5PV210_PA_MIPI_CSIS		0xFA600000

#define S5PV210_PA_FIMC0		0xFB200000
#define S5PV210_PA_FIMC1		0xFB300000
#define S5PV210_PA_FIMC2		0xFB400000

#define S5PV210_PA_JPEG			0xFB600000

#define S5PV210_PA_SDO			0xF9000000
#define S5PV210_PA_VP			0xF9100000
#define S5PV210_PA_MIXER		0xF9200000
#define S5PV210_PA_HDMI			0xFA100000
#define S5PV210_PA_IIC_HDMIPHY		0xFA900000

/* Compatibiltiy Defines */

#define S3C_PA_FB			S5PV210_PA_FB
#define S3C_PA_HSMMC0			S5PV210_PA_HSMMC(0)
#define S3C_PA_HSMMC1			S5PV210_PA_HSMMC(1)
#define S3C_PA_HSMMC2			S5PV210_PA_HSMMC(2)
#define S3C_PA_HSMMC3			S5PV210_PA_HSMMC(3)
#define S3C_PA_IIC			S5PV210_PA_IIC0
#define S3C_PA_IIC1			S5PV210_PA_IIC1
#define S3C_PA_IIC2			S5PV210_PA_IIC2
#define S3C_PA_RTC			S5PV210_PA_RTC
#define S3C_PA_USB_HSOTG		S5PV210_PA_HSOTG
#define S3C_PA_WDT			S5PV210_PA_WATCHDOG
#define S3C_PA_SPI0			S5PV210_PA_SPI0
#define S3C_PA_SPI1			S5PV210_PA_SPI1

#define S5P_PA_CHIPID			S5PV210_PA_CHIPID
#define S5P_PA_FIMC0			S5PV210_PA_FIMC0
#define S5P_PA_FIMC1			S5PV210_PA_FIMC1
#define S5P_PA_FIMC2			S5PV210_PA_FIMC2
#define S5P_PA_MIPI_CSIS0		S5PV210_PA_MIPI_CSIS
#define S5P_PA_MFC			S5PV210_PA_MFC
#define S5P_PA_IIC_HDMIPHY		S5PV210_PA_IIC_HDMIPHY

#define S5P_PA_SDO			S5PV210_PA_SDO
#define S5P_PA_VP			S5PV210_PA_VP
#define S5P_PA_MIXER			S5PV210_PA_MIXER
#define S5P_PA_HDMI			S5PV210_PA_HDMI

#define S5P_PA_ONENAND			S5PC110_PA_ONENAND
#define S5P_PA_ONENAND_DMA		S5PC110_PA_ONENAND_DMA
#define S5P_PA_SDRAM			S5PV210_PA_SDRAM
#define S5P_PA_SROMC			S5PV210_PA_SROMC
#define S5P_PA_SYSCON			S5PV210_PA_SYSCON
#define S5P_PA_TIMER			S5PV210_PA_TIMER

#define S5P_PA_JPEG			S5PV210_PA_JPEG

#define SAMSUNG_PA_ADC			S5PV210_PA_ADC
#define SAMSUNG_PA_CFCON		S5PV210_PA_CFCON
#define SAMSUNG_PA_KEYPAD		S5PV210_PA_KEYPAD

/* UART */

#define S3C_VA_UARTx(x)			(S3C_VA_UART + ((x) * S3C_UART_OFFSET))

#define S3C_PA_UART			S5PV210_PA_UART

#define S5P_PA_UART(x)			(S3C_PA_UART + ((x) * S3C_UART_OFFSET))
#define S5P_PA_UART0			S5P_PA_UART(0)
#define S5P_PA_UART1			S5P_PA_UART(1)
#define S5P_PA_UART2			S5P_PA_UART(2)
#define S5P_PA_UART3			S5P_PA_UART(3)

#define S5P_SZ_UART			SZ_256

#endif /* __ASM_ARCH_MAP_H */
