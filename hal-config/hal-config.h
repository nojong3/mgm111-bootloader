#ifndef HAL_CONFIG_H
#define HAL_CONFIG_H

#include "em_device.h"
#include "hal-config-types.h"

// This file is auto-generated by Hardware Configurator in Simplicity Studio.
// Any content between $[ and ]$ will be replaced whenever the file is regenerated.
// Content outside these regions will be preserved.

// $[ACMP0]
// [ACMP0]$

// $[ACMP1]
// [ACMP1]$

// $[ADC0]
// [ADC0]$

// $[ANTDIV]
// [ANTDIV]$

// $[BATTERYMON]
// [BATTERYMON]$

// $[BTL_BUTTON]
#define HAL_BTL_BUTTON_ENABLE             (1)

#define BSP_BTL_BUTTON_PIN                (6U)
#define BSP_BTL_BUTTON_PORT               (gpioPortF)

// [BTL_BUTTON]$

// $[BULBPWM]
// [BULBPWM]$

// $[BULBPWM_COLOR]
// [BULBPWM_COLOR]$

// $[BUTTON]
// [BUTTON]$

// $[CMU]
#define HAL_CLK_HFCLK_SOURCE              (HAL_CLK_HFCLK_SOURCE_HFRCO)
#define HAL_CLK_LFECLK_SOURCE             (HAL_CLK_LFCLK_SOURCE_DISABLED)
#define HAL_CLK_LFBCLK_SOURCE             (HAL_CLK_LFCLK_SOURCE_DISABLED)
#define BSP_CLK_LFXO_PRESENT              (1)
#define BSP_CLK_HFXO_PRESENT              (1)
#define BSP_CLK_LFXO_INIT                  CMU_LFXOINIT_DEFAULT
#define BSP_CLK_LFXO_CTUNE                (32U)
#define BSP_CLK_LFXO_FREQ                 (32768U)
#define HAL_CLK_LFACLK_SOURCE             (HAL_CLK_LFCLK_SOURCE_DISABLED)
#define BSP_CLK_HFXO_FREQ                 (38400000UL)
#define BSP_CLK_HFXO_CTUNE                (322)
#define BSP_CLK_HFXO_INIT                  CMU_HFXOINIT_DEFAULT
#define BSP_CLK_HFXO_CTUNE_TOKEN          (0)
#define HAL_CLK_HFXO_AUTOSTART            (HAL_CLK_HFXO_AUTOSTART_NONE)
// [CMU]$

// $[COEX]
// [COEX]$

// $[CS5463]
// [CS5463]$

// $[DCDC]
#define BSP_DCDC_PRESENT                  (1)

#define HAL_DCDC_BYPASS                   (0)
#define BSP_DCDC_INIT                      EMU_DCDCINIT_DEFAULT
// [DCDC]$

// $[EMU]
// [EMU]$

// $[EXTFLASH]
// [EXTFLASH]$

// $[EZRADIOPRO]
// [EZRADIOPRO]$

// $[FEM]
// [FEM]$

// $[GPIO]
// [GPIO]$

// $[I2C0]
// [I2C0]$

// $[I2CSENSOR]
// [I2CSENSOR]$

// $[IDAC0]
// [IDAC0]$

// $[IOEXP]
// [IOEXP]$

// $[LED]
// [LED]$

// $[LETIMER0]
// [LETIMER0]$

// $[LEUART0]
// [LEUART0]$

// $[LFXO]
// [LFXO]$

// $[PA]
// [PA]$

// $[PCNT0]
// [PCNT0]$

// $[PORTIO]
// [PORTIO]$

// $[PRS]
// [PRS]$

// $[PTI]
// [PTI]$

// $[PYD1698]
// [PYD1698]$

// $[SERIAL]
// [SERIAL]$

// $[SPIDISPLAY]
// [SPIDISPLAY]$

// $[SPINCP]
#define BSP_SPINCP_NWAKE_PIN              (5U)
#define BSP_SPINCP_NWAKE_PORT             (gpioPortF)

#define BSP_SPINCP_NHOSTINT_PIN           (4U)
#define BSP_SPINCP_NHOSTINT_PORT          (gpioPortF)

#define BSP_SPINCP_USART_PORT             (HAL_SPI_PORT_USART1)
#define BSP_SPINCP_CS_PIN                 (9U)
#define BSP_SPINCP_CS_PORT                (gpioPortC)
#define BSP_SPINCP_CS_LOC                 (11U)

#define BSP_SPINCP_CLK_PIN                (8U)
#define BSP_SPINCP_CLK_PORT               (gpioPortC)
#define BSP_SPINCP_CLK_LOC                (11U)

#define BSP_SPINCP_MISO_PIN               (7U)
#define BSP_SPINCP_MISO_PORT              (gpioPortC)
#define BSP_SPINCP_MISO_LOC               (11U)

#define BSP_SPINCP_MOSI_PIN               (6U)
#define BSP_SPINCP_MOSI_PORT              (gpioPortC)
#define BSP_SPINCP_MOSI_LOC               (11U)

#define HAL_SPINCP_FREQUENCY              (1000000UL)
// [SPINCP]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[UARTNCP]
// [UARTNCP]$

// $[USART0]
// [USART0]$

// $[USART1]
#define PORTIO_USART1_CLK_PIN             (8U)
#define PORTIO_USART1_CLK_PORT            (gpioPortC)
#define PORTIO_USART1_CLK_LOC             (11U)

#define PORTIO_USART1_CS_PIN              (9U)
#define PORTIO_USART1_CS_PORT             (gpioPortC)
#define PORTIO_USART1_CS_LOC              (11U)

#define PORTIO_USART1_RX_PIN              (7U)
#define PORTIO_USART1_RX_PORT             (gpioPortC)
#define PORTIO_USART1_RX_LOC              (11U)

#define PORTIO_USART1_TX_PIN              (6U)
#define PORTIO_USART1_TX_PORT             (gpioPortC)
#define PORTIO_USART1_TX_LOC              (11U)

#define HAL_USART1_ENABLE                 (1)

#define BSP_USART1_CS_PIN                 (9U)
#define BSP_USART1_CS_PORT                (gpioPortC)
#define BSP_USART1_CS_LOC                 (11U)

#define BSP_USART1_CLK_PIN                (8U)
#define BSP_USART1_CLK_PORT               (gpioPortC)
#define BSP_USART1_CLK_LOC                (11U)

#define BSP_USART1_MISO_PIN               (7U)
#define BSP_USART1_MISO_PORT              (gpioPortC)
#define BSP_USART1_MISO_LOC               (11U)

#define BSP_USART1_MOSI_PIN               (6U)
#define BSP_USART1_MOSI_PORT              (gpioPortC)
#define BSP_USART1_MOSI_LOC               (11U)

#define HAL_USART1_FREQUENCY              (1000000UL)
// [USART1]$

// $[VCOM]
// [VCOM]$

// $[VUART]
// [VUART]$

// $[WDOG]
// [WDOG]$

#endif /* HAL_CONFIG_H */

