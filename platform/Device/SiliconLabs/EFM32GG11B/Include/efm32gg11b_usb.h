/**************************************************************************//**
 * @file efm32gg11b_usb.h
 * @brief EFM32GG11B_USB register and bit field definitions
 * @version 5.2.1
 ******************************************************************************
 * # License
 * <b>Copyright 2017 Silicon Laboratories, Inc. http://www.silabs.com</b>
 ******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.@n
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.@n
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Laboratories, Inc.
 * has no obligation to support this Software. Silicon Laboratories, Inc. is
 * providing the Software "AS IS", with no express or implied warranties of any
 * kind, including, but not limited to, any implied warranties of
 * merchantability or fitness for any particular purpose or warranties against
 * infringement of any proprietary rights of a third party.
 *
 * Silicon Laboratories, Inc. will not be liable for any consequential,
 * incidental, or special damages, or any other relief, or for any claim by
 * any third party, arising from your use of this Software.
 *
 *****************************************************************************/

#if defined(__ICCARM__)
#pragma system_include       /* Treat file as system include file. */
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
#pragma clang system_header  /* Treat file as system include file. */
#endif

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @defgroup EFM32GG11B_USB USB
 * @{
 * @brief EFM32GG11B_USB Register Declaration
 *****************************************************************************/
/** USB Register Declaration */
typedef struct
{
  __IOM uint32_t   CTRL;              /**< System Control Register  */
  __IM uint32_t    STATUS;            /**< System Status Register  */
  __IM uint32_t    IF;                /**< Interrupt Flag Register  */
  __IOM uint32_t   IFS;               /**< Interrupt Flag Set Register  */
  __IOM uint32_t   IFC;               /**< Interrupt Flag Clear Register  */
  __IOM uint32_t   IEN;               /**< Interrupt Enable Register  */
  __IOM uint32_t   ROUTE;             /**< I/O Routing Register  */

  uint32_t         RESERVED0[4];      /**< Reserved for future use **/
  __IOM uint32_t   CDCONF;            /**< Charger Detect Configuration Register  */
  __IOM uint32_t   CMD;               /**< Command Register  */

  uint32_t         RESERVED1[2];      /**< Reserved for future use **/
  __IOM uint32_t   LEMCTRL;           /**< USB LEM control Register  */

  uint32_t         RESERVED2[227312]; /**< Reserved for future use **/
  __IOM uint32_t   GOTGCTL;           /**< OTG Control and Status Register  */
  __IOM uint32_t   GOTGINT;           /**< OTG Interrupt Register  */
  __IOM uint32_t   GAHBCFG;           /**< AHB Configuration Register  */
  __IOM uint32_t   GUSBCFG;           /**< USB Configuration Register  */
  __IOM uint32_t   GRSTCTL;           /**< Reset Register  */
  __IOM uint32_t   GINTSTS;           /**< Interrupt Register  */
  __IOM uint32_t   GINTMSK;           /**< Interrupt Mask Register  */
  __IM uint32_t    GRXSTSR;           /**< Receive Status Debug Read Register  */
  __IM uint32_t    GRXSTSP;           /**< Receive Status Read /Pop Register  */
  __IOM uint32_t   GRXFSIZ;           /**< Receive FIFO Size Register  */
  __IOM uint32_t   GNPTXFSIZ;         /**< Non-periodic Transmit FIFO Size Register  */
  __IM uint32_t    GNPTXSTS;          /**< Non-periodic Transmit FIFO/Queue Status Register  */
  uint32_t         RESERVED3[4];      /**< Reserved for future use **/
  __IM uint32_t    GSNPSID;           /**< Synopsys ID Register  */

  uint32_t         RESERVED4[6];      /**< Reserved for future use **/
  __IOM uint32_t   GDFIFOCFG;         /**< Global DFIFO Configuration Register  */

  uint32_t         RESERVED5[40];     /**< Reserved for future use **/
  __IOM uint32_t   HPTXFSIZ;          /**< Host Periodic Transmit FIFO Size Register  */
  __IOM uint32_t   DIEPTXF1;          /**< Device IN Endpoint Transmit FIFO Size Register 1  */
  __IOM uint32_t   DIEPTXF2;          /**< Device IN Endpoint Transmit FIFO Size Register 2  */
  __IOM uint32_t   DIEPTXF3;          /**< Device IN Endpoint Transmit FIFO Size Register 3  */
  __IOM uint32_t   DIEPTXF4;          /**< Device IN Endpoint Transmit FIFO Size Register 4  */
  __IOM uint32_t   DIEPTXF5;          /**< Device IN Endpoint Transmit FIFO Size Register 5  */
  __IOM uint32_t   DIEPTXF6;          /**< Device IN Endpoint Transmit FIFO Size Register 6  */

  uint32_t         RESERVED6[185];    /**< Reserved for future use **/
  __IOM uint32_t   HCFG;              /**< Host Configuration Register  */
  __IOM uint32_t   HFIR;              /**< Host Frame Interval Register  */
  __IM uint32_t    HFNUM;             /**< Host Frame Number/Frame Time Remaining Register  */
  uint32_t         RESERVED7[1];      /**< Reserved for future use **/
  __IM uint32_t    HPTXSTS;           /**< Host Periodic Transmit FIFO/Queue Status Register  */
  __IM uint32_t    HAINT;             /**< Host All Channels Interrupt Register  */
  __IOM uint32_t   HAINTMSK;          /**< Host All Channels Interrupt Mask Register  */
  uint32_t         RESERVED8[9];      /**< Reserved for future use **/
  __IOM uint32_t   HPRT;              /**< Host Port Control and Status Register  */

  uint32_t         RESERVED9[47];     /**< Reserved registers */
  USB_HC_TypeDef   HC[14];            /**< Host Channel Registers */

  uint32_t         RESERVED10[80];    /**< Reserved for future use **/
  __IOM uint32_t   DCFG;              /**< Device Configuration Register  */
  __IOM uint32_t   DCTL;              /**< Device Control Register  */
  __IM uint32_t    DSTS;              /**< Device Status Register  */
  uint32_t         RESERVED11[1];     /**< Reserved for future use **/
  __IOM uint32_t   DIEPMSK;           /**< Device IN Endpoint Common Interrupt Mask Register  */
  __IOM uint32_t   DOEPMSK;           /**< Device OUT Endpoint Common Interrupt Mask Register  */
  __IM uint32_t    DAINT;             /**< Device All Endpoints Interrupt Register  */
  __IOM uint32_t   DAINTMSK;          /**< Device All Endpoints Interrupt Mask Register  */
  uint32_t         RESERVED12[2];     /**< Reserved for future use **/
  __IOM uint32_t   DVBUSDIS;          /**< Device VBUS Discharge Time Register  */
  __IOM uint32_t   DVBUSPULSE;        /**< Device VBUS Pulsing Time Register  */
  __IOM uint32_t   DTHRCTL;           /**< Device Threshold Control Register  */
  __IOM uint32_t   DIEPEMPMSK;        /**< Device IN Endpoint FIFO Empty Interrupt Mask Register  */

  uint32_t         RESERVED13[50];    /**< Reserved for future use **/
  __IOM uint32_t   DIEP0CTL;          /**< Device Control IN Endpoint 0 Control Register  */
  uint32_t         RESERVED14[1];     /**< Reserved for future use **/
  __IOM uint32_t   DIEP0INT;          /**< Device IN Endpoint 0 Interrupt Register  */
  uint32_t         RESERVED15[1];     /**< Reserved for future use **/
  __IOM uint32_t   DIEP0TSIZ;         /**< Device IN Endpoint 0 Transfer Size Register  */
  __IOM uint32_t   DIEP0DMAADDR;      /**< Device IN Endpoint 0 DMA Address Register  */
  __IM uint32_t    DIEP0TXFSTS;       /**< Device IN Endpoint Transmit FIFO Status Register 0  */

  uint32_t         RESERVED16[1];     /**< Reserved registers */
  USB_DIEP_TypeDef DIEP[6];           /**< Device IN Endpoint n Registers */

  uint32_t         RESERVED17[72];    /**< Reserved for future use **/
  __IOM uint32_t   DOEP0CTL;          /**< Device Control OUT Endpoint 0 Control Register  */
  uint32_t         RESERVED18[1];     /**< Reserved for future use **/
  __IOM uint32_t   DOEP0INT;          /**< Device OUT Endpoint 0 Interrupt Register  */
  uint32_t         RESERVED19[1];     /**< Reserved for future use **/
  __IOM uint32_t   DOEP0TSIZ;         /**< Device OUT Endpoint 0 Transfer Size Register  */
  __IOM uint32_t   DOEP0DMAADDR;      /**< Device OUT Endpoint 0 DMA Address Register  */

  uint32_t         RESERVED20[2];     /**< Reserved registers */
  USB_DOEP_TypeDef DOEP[6];           /**< Device OUT Endpoint n Registers */

  uint32_t         RESERVED21[136];   /**< Reserved for future use **/
  __IOM uint32_t   PCGCCTL;           /**< Power and Clock Gating Control Register  */

  uint32_t         RESERVED22[127];   /**< Reserved registers */
  __IOM uint32_t   FIFO0D[512];       /**< Device EP 0/Host Channel 0 FIFO  */

  uint32_t         RESERVED23[512];   /**< Reserved registers */
  __IOM uint32_t   FIFO1D[512];       /**< Device EP 1/Host Channel 1 FIFO  */

  uint32_t         RESERVED24[512];   /**< Reserved registers */
  __IOM uint32_t   FIFO2D[512];       /**< Device EP 2/Host Channel 2 FIFO  */

  uint32_t         RESERVED25[512];   /**< Reserved registers */
  __IOM uint32_t   FIFO3D[512];       /**< Device EP 3/Host Channel 3 FIFO  */

  uint32_t         RESERVED26[512];   /**< Reserved registers */
  __IOM uint32_t   FIFO4D[512];       /**< Device EP 4/Host Channel 4 FIFO  */

  uint32_t         RESERVED27[512];   /**< Reserved registers */
  __IOM uint32_t   FIFO5D[512];       /**< Device EP 5/Host Channel 5 FIFO  */

  uint32_t         RESERVED28[512];   /**< Reserved registers */
  __IOM uint32_t   FIFO6D[512];       /**< Device EP 6/Host Channel 6 FIFO  */

  uint32_t         RESERVED29[512];   /**< Reserved registers */
  __IOM uint32_t   FIFO7D[512];       /**< Host Channel 7 FIFO  */

  uint32_t         RESERVED30[512];   /**< Reserved registers */
  __IOM uint32_t   FIFO8D[512];       /**< Host Channel 8 FIFO  */

  uint32_t         RESERVED31[512];   /**< Reserved registers */
  __IOM uint32_t   FIFO9D[512];       /**< Host Channel 9 FIFO  */

  uint32_t         RESERVED32[512];   /**< Reserved registers */
  __IOM uint32_t   FIFO10D[512];      /**< Host Channel 10 FIFO  */

  uint32_t         RESERVED33[512];   /**< Reserved registers */
  __IOM uint32_t   FIFO11D[512];      /**< Host Channel 11 FIFO  */

  uint32_t         RESERVED34[512];   /**< Reserved registers */
  __IOM uint32_t   FIFO12D[512];      /**< Host Channel 12 FIFO  */

  uint32_t         RESERVED35[512];   /**< Reserved registers */
  __IOM uint32_t   FIFO13D[512];      /**< Host Channel 13 FIFO  */

  uint32_t         RESERVED36[17920]; /**< Reserved registers */
  __IOM uint32_t   FIFORAM[512];      /**< Direct Access to Data FIFO RAM for Debugging (2 KB)  */
} USB_TypeDef;                        /** @} */

/**************************************************************************//**
 * @addtogroup EFM32GG11B_USB
 * @{
 * @defgroup EFM32GG11B_USB_BitFields  USB Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for USB CTRL */
#define _USB_CTRL_RESETVALUE                     0x00000020UL                             /**< Default value for USB_CTRL */
#define _USB_CTRL_MASK                           0xFE0012B9UL                             /**< Mask for USB_CTRL */
#define USB_CTRL_VBUSENAP                        (0x1UL << 0)                             /**< VBUSEN Active Polarity */
#define _USB_CTRL_VBUSENAP_SHIFT                 0                                        /**< Shift value for USB_VBUSENAP */
#define _USB_CTRL_VBUSENAP_MASK                  0x1UL                                    /**< Bit mask for USB_VBUSENAP */
#define _USB_CTRL_VBUSENAP_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for USB_CTRL */
#define _USB_CTRL_VBUSENAP_HIGH                  0x00000000UL                             /**< Mode HIGH for USB_CTRL */
#define _USB_CTRL_VBUSENAP_LOW                   0x00000001UL                             /**< Mode LOW for USB_CTRL */
#define USB_CTRL_VBUSENAP_DEFAULT                (_USB_CTRL_VBUSENAP_DEFAULT << 0)        /**< Shifted mode DEFAULT for USB_CTRL */
#define USB_CTRL_VBUSENAP_HIGH                   (_USB_CTRL_VBUSENAP_HIGH << 0)           /**< Shifted mode HIGH for USB_CTRL */
#define USB_CTRL_VBUSENAP_LOW                    (_USB_CTRL_VBUSENAP_LOW << 0)            /**< Shifted mode LOW for USB_CTRL */
#define USB_CTRL_SELFPOWERED                     (0x1UL << 3)                             /**< PHY power */
#define _USB_CTRL_SELFPOWERED_SHIFT              3                                        /**< Shift value for USB_SELFPOWERED */
#define _USB_CTRL_SELFPOWERED_MASK               0x8UL                                    /**< Bit mask for USB_SELFPOWERED */
#define _USB_CTRL_SELFPOWERED_DEFAULT            0x00000000UL                             /**< Mode DEFAULT for USB_CTRL */
#define _USB_CTRL_SELFPOWERED_LOW                0x00000000UL                             /**< Mode LOW for USB_CTRL */
#define _USB_CTRL_SELFPOWERED_HIGH               0x00000001UL                             /**< Mode HIGH for USB_CTRL */
#define USB_CTRL_SELFPOWERED_DEFAULT             (_USB_CTRL_SELFPOWERED_DEFAULT << 3)     /**< Shifted mode DEFAULT for USB_CTRL */
#define USB_CTRL_SELFPOWERED_LOW                 (_USB_CTRL_SELFPOWERED_LOW << 3)         /**< Shifted mode LOW for USB_CTRL */
#define USB_CTRL_SELFPOWERED_HIGH                (_USB_CTRL_SELFPOWERED_HIGH << 3)        /**< Shifted mode HIGH for USB_CTRL */
#define _USB_CTRL_LEMOSCCTRL_SHIFT               4                                        /**< Shift value for USB_LEMOSCCTRL */
#define _USB_CTRL_LEMOSCCTRL_MASK                0x30UL                                   /**< Bit mask for USB_LEMOSCCTRL */
#define _USB_CTRL_LEMOSCCTRL_NONE                0x00000000UL                             /**< Mode NONE for USB_CTRL */
#define _USB_CTRL_LEMOSCCTRL_GATE                0x00000001UL                             /**< Mode GATE for USB_CTRL */
#define _USB_CTRL_LEMOSCCTRL_DEFAULT             0x00000002UL                             /**< Mode DEFAULT for USB_CTRL */
#define USB_CTRL_LEMOSCCTRL_NONE                 (_USB_CTRL_LEMOSCCTRL_NONE << 4)         /**< Shifted mode NONE for USB_CTRL */
#define USB_CTRL_LEMOSCCTRL_GATE                 (_USB_CTRL_LEMOSCCTRL_GATE << 4)         /**< Shifted mode GATE for USB_CTRL */
#define USB_CTRL_LEMOSCCTRL_DEFAULT              (_USB_CTRL_LEMOSCCTRL_DEFAULT << 4)      /**< Shifted mode DEFAULT for USB_CTRL */
#define USB_CTRL_LEMPHYCTRL                      (0x1UL << 7)                             /**< Low Energy Mode USB PHY Control */
#define _USB_CTRL_LEMPHYCTRL_SHIFT               7                                        /**< Shift value for USB_LEMPHYCTRL */
#define _USB_CTRL_LEMPHYCTRL_MASK                0x80UL                                   /**< Bit mask for USB_LEMPHYCTRL */
#define _USB_CTRL_LEMPHYCTRL_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for USB_CTRL */
#define _USB_CTRL_LEMPHYCTRL_NONE                0x00000000UL                             /**< Mode NONE for USB_CTRL */
#define _USB_CTRL_LEMPHYCTRL_LEM                 0x00000001UL                             /**< Mode LEM for USB_CTRL */
#define USB_CTRL_LEMPHYCTRL_DEFAULT              (_USB_CTRL_LEMPHYCTRL_DEFAULT << 7)      /**< Shifted mode DEFAULT for USB_CTRL */
#define USB_CTRL_LEMPHYCTRL_NONE                 (_USB_CTRL_LEMPHYCTRL_NONE << 7)         /**< Shifted mode NONE for USB_CTRL */
#define USB_CTRL_LEMPHYCTRL_LEM                  (_USB_CTRL_LEMPHYCTRL_LEM << 7)          /**< Shifted mode LEM for USB_CTRL */
#define USB_CTRL_LEMIDLEEN                       (0x1UL << 9)                             /**< Low Energy Mode on  Bus Idle Enable */
#define _USB_CTRL_LEMIDLEEN_SHIFT                9                                        /**< Shift value for USB_LEMIDLEEN */
#define _USB_CTRL_LEMIDLEEN_MASK                 0x200UL                                  /**< Bit mask for USB_LEMIDLEEN */
#define _USB_CTRL_LEMIDLEEN_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for USB_CTRL */
#define USB_CTRL_LEMIDLEEN_DEFAULT               (_USB_CTRL_LEMIDLEEN_DEFAULT << 9)       /**< Shifted mode DEFAULT for USB_CTRL */
#define USB_CTRL_IDCDEN                          (0x1UL << 12)                            /**< ID Pull-up Enable */
#define _USB_CTRL_IDCDEN_SHIFT                   12                                       /**< Shift value for USB_IDCDEN */
#define _USB_CTRL_IDCDEN_MASK                    0x1000UL                                 /**< Bit mask for USB_IDCDEN */
#define _USB_CTRL_IDCDEN_DEFAULT                 0x00000000UL                             /**< Mode DEFAULT for USB_CTRL */
#define _USB_CTRL_IDCDEN_DISABLED                0x00000000UL                             /**< Mode DISABLED for USB_CTRL */
#define _USB_CTRL_IDCDEN_ENABLED                 0x00000001UL                             /**< Mode ENABLED for USB_CTRL */
#define USB_CTRL_IDCDEN_DEFAULT                  (_USB_CTRL_IDCDEN_DEFAULT << 12)         /**< Shifted mode DEFAULT for USB_CTRL */
#define USB_CTRL_IDCDEN_DISABLED                 (_USB_CTRL_IDCDEN_DISABLED << 12)        /**< Shifted mode DISABLED for USB_CTRL */
#define USB_CTRL_IDCDEN_ENABLED                  (_USB_CTRL_IDCDEN_ENABLED << 12)         /**< Shifted mode ENABLED for USB_CTRL */
#define USB_CTRL_OTGCLKCDIS                      (0x1UL << 25)                            /**< OTG CLKC Disable */
#define _USB_CTRL_OTGCLKCDIS_SHIFT               25                                       /**< Shift value for USB_OTGCLKCDIS */
#define _USB_CTRL_OTGCLKCDIS_MASK                0x2000000UL                              /**< Bit mask for USB_OTGCLKCDIS */
#define _USB_CTRL_OTGCLKCDIS_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for USB_CTRL */
#define _USB_CTRL_OTGCLKCDIS_ENABLED             0x00000000UL                             /**< Mode ENABLED for USB_CTRL */
#define _USB_CTRL_OTGCLKCDIS_DISABLED            0x00000001UL                             /**< Mode DISABLED for USB_CTRL */
#define USB_CTRL_OTGCLKCDIS_DEFAULT              (_USB_CTRL_OTGCLKCDIS_DEFAULT << 25)     /**< Shifted mode DEFAULT for USB_CTRL */
#define USB_CTRL_OTGCLKCDIS_ENABLED              (_USB_CTRL_OTGCLKCDIS_ENABLED << 25)     /**< Shifted mode ENABLED for USB_CTRL */
#define USB_CTRL_OTGCLKCDIS_DISABLED             (_USB_CTRL_OTGCLKCDIS_DISABLED << 25)    /**< Shifted mode DISABLED for USB_CTRL */
#define USB_CTRL_OTGIDINDIS                      (0x1UL << 26)                            /**< OTG ID Input Disable */
#define _USB_CTRL_OTGIDINDIS_SHIFT               26                                       /**< Shift value for USB_OTGIDINDIS */
#define _USB_CTRL_OTGIDINDIS_MASK                0x4000000UL                              /**< Bit mask for USB_OTGIDINDIS */
#define _USB_CTRL_OTGIDINDIS_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for USB_CTRL */
#define _USB_CTRL_OTGIDINDIS_ENABLED             0x00000000UL                             /**< Mode ENABLED for USB_CTRL */
#define _USB_CTRL_OTGIDINDIS_DISABLED            0x00000001UL                             /**< Mode DISABLED for USB_CTRL */
#define USB_CTRL_OTGIDINDIS_DEFAULT              (_USB_CTRL_OTGIDINDIS_DEFAULT << 26)     /**< Shifted mode DEFAULT for USB_CTRL */
#define USB_CTRL_OTGIDINDIS_ENABLED              (_USB_CTRL_OTGIDINDIS_ENABLED << 26)     /**< Shifted mode ENABLED for USB_CTRL */
#define USB_CTRL_OTGIDINDIS_DISABLED             (_USB_CTRL_OTGIDINDIS_DISABLED << 26)    /**< Shifted mode DISABLED for USB_CTRL */
#define USB_CTRL_OTGPHYCTRLDIS                   (0x1UL << 27)                            /**< OTG Control Signals to PHY Disable */
#define _USB_CTRL_OTGPHYCTRLDIS_SHIFT            27                                       /**< Shift value for USB_OTGPHYCTRLDIS */
#define _USB_CTRL_OTGPHYCTRLDIS_MASK             0x8000000UL                              /**< Bit mask for USB_OTGPHYCTRLDIS */
#define _USB_CTRL_OTGPHYCTRLDIS_DEFAULT          0x00000000UL                             /**< Mode DEFAULT for USB_CTRL */
#define _USB_CTRL_OTGPHYCTRLDIS_ENABLED          0x00000000UL                             /**< Mode ENABLED for USB_CTRL */
#define _USB_CTRL_OTGPHYCTRLDIS_DISABLED         0x00000001UL                             /**< Mode DISABLED for USB_CTRL */
#define USB_CTRL_OTGPHYCTRLDIS_DEFAULT           (_USB_CTRL_OTGPHYCTRLDIS_DEFAULT << 27)  /**< Shifted mode DEFAULT for USB_CTRL */
#define USB_CTRL_OTGPHYCTRLDIS_ENABLED           (_USB_CTRL_OTGPHYCTRLDIS_ENABLED << 27)  /**< Shifted mode ENABLED for USB_CTRL */
#define USB_CTRL_OTGPHYCTRLDIS_DISABLED          (_USB_CTRL_OTGPHYCTRLDIS_DISABLED << 27) /**< Shifted mode DISABLED for USB_CTRL */
#define _USB_CTRL_DCDEN_SHIFT                    28                                       /**< Shift value for USB_DCDEN */
#define _USB_CTRL_DCDEN_MASK                     0x30000000UL                             /**< Bit mask for USB_DCDEN */
#define _USB_CTRL_DCDEN_DEFAULT                  0x00000000UL                             /**< Mode DEFAULT for USB_CTRL */
#define _USB_CTRL_DCDEN_DISABLED                 0x00000000UL                             /**< Mode DISABLED for USB_CTRL */
#define _USB_CTRL_DCDEN_TIMEOUT                  0x00000002UL                             /**< Mode TIMEOUT for USB_CTRL */
#define _USB_CTRL_DCDEN_ENABLED                  0x00000003UL                             /**< Mode ENABLED for USB_CTRL */
#define USB_CTRL_DCDEN_DEFAULT                   (_USB_CTRL_DCDEN_DEFAULT << 28)          /**< Shifted mode DEFAULT for USB_CTRL */
#define USB_CTRL_DCDEN_DISABLED                  (_USB_CTRL_DCDEN_DISABLED << 28)         /**< Shifted mode DISABLED for USB_CTRL */
#define USB_CTRL_DCDEN_TIMEOUT                   (_USB_CTRL_DCDEN_TIMEOUT << 28)          /**< Shifted mode TIMEOUT for USB_CTRL */
#define USB_CTRL_DCDEN_ENABLED                   (_USB_CTRL_DCDEN_ENABLED << 28)          /**< Shifted mode ENABLED for USB_CTRL */
#define USB_CTRL_PDEN                            (0x1UL << 30)                            /**< Primary Detection Enable */
#define _USB_CTRL_PDEN_SHIFT                     30                                       /**< Shift value for USB_PDEN */
#define _USB_CTRL_PDEN_MASK                      0x40000000UL                             /**< Bit mask for USB_PDEN */
#define _USB_CTRL_PDEN_DEFAULT                   0x00000000UL                             /**< Mode DEFAULT for USB_CTRL */
#define _USB_CTRL_PDEN_DISABLED                  0x00000000UL                             /**< Mode DISABLED for USB_CTRL */
#define _USB_CTRL_PDEN_ENABLED                   0x00000001UL                             /**< Mode ENABLED for USB_CTRL */
#define USB_CTRL_PDEN_DEFAULT                    (_USB_CTRL_PDEN_DEFAULT << 30)           /**< Shifted mode DEFAULT for USB_CTRL */
#define USB_CTRL_PDEN_DISABLED                   (_USB_CTRL_PDEN_DISABLED << 30)          /**< Shifted mode DISABLED for USB_CTRL */
#define USB_CTRL_PDEN_ENABLED                    (_USB_CTRL_PDEN_ENABLED << 30)           /**< Shifted mode ENABLED for USB_CTRL */
#define USB_CTRL_SDEN                            (0x1UL << 31)                            /**< Secondary Detection Enable */
#define _USB_CTRL_SDEN_SHIFT                     31                                       /**< Shift value for USB_SDEN */
#define _USB_CTRL_SDEN_MASK                      0x80000000UL                             /**< Bit mask for USB_SDEN */
#define _USB_CTRL_SDEN_DEFAULT                   0x00000000UL                             /**< Mode DEFAULT for USB_CTRL */
#define _USB_CTRL_SDEN_DISABLED                  0x00000000UL                             /**< Mode DISABLED for USB_CTRL */
#define _USB_CTRL_SDEN_ENABLED                   0x00000001UL                             /**< Mode ENABLED for USB_CTRL */
#define USB_CTRL_SDEN_DEFAULT                    (_USB_CTRL_SDEN_DEFAULT << 31)           /**< Shifted mode DEFAULT for USB_CTRL */
#define USB_CTRL_SDEN_DISABLED                   (_USB_CTRL_SDEN_DISABLED << 31)          /**< Shifted mode DISABLED for USB_CTRL */
#define USB_CTRL_SDEN_ENABLED                    (_USB_CTRL_SDEN_ENABLED << 31)           /**< Shifted mode ENABLED for USB_CTRL */

/* Bit fields for USB STATUS */
#define _USB_STATUS_RESETVALUE                   0x00000000UL                          /**< Default value for USB_STATUS */
#define _USB_STATUS_MASK                         0x0000BF05UL                          /**< Mask for USB_STATUS */
#define USB_STATUS_VBUSDETH                      (0x1UL << 0)                          /**< VBUS Detect High */
#define _USB_STATUS_VBUSDETH_SHIFT               0                                     /**< Shift value for USB_VBUSDETH */
#define _USB_STATUS_VBUSDETH_MASK                0x1UL                                 /**< Bit mask for USB_VBUSDETH */
#define _USB_STATUS_VBUSDETH_DEFAULT             0x00000000UL                          /**< Mode DEFAULT for USB_STATUS */
#define USB_STATUS_VBUSDETH_DEFAULT              (_USB_STATUS_VBUSDETH_DEFAULT << 0)   /**< Shifted mode DEFAULT for USB_STATUS */
#define USB_STATUS_LEMACTIVE                     (0x1UL << 2)                          /**< Low Energy Mode Active */
#define _USB_STATUS_LEMACTIVE_SHIFT              2                                     /**< Shift value for USB_LEMACTIVE */
#define _USB_STATUS_LEMACTIVE_MASK               0x4UL                                 /**< Bit mask for USB_LEMACTIVE */
#define _USB_STATUS_LEMACTIVE_DEFAULT            0x00000000UL                          /**< Mode DEFAULT for USB_STATUS */
#define USB_STATUS_LEMACTIVE_DEFAULT             (_USB_STATUS_LEMACTIVE_DEFAULT << 2)  /**< Shifted mode DEFAULT for USB_STATUS */
#define USB_STATUS_DCDTO                         (0x1UL << 8)                          /**< Data Contact Detection Timeout */
#define _USB_STATUS_DCDTO_SHIFT                  8                                     /**< Shift value for USB_DCDTO */
#define _USB_STATUS_DCDTO_MASK                   0x100UL                               /**< Bit mask for USB_DCDTO */
#define _USB_STATUS_DCDTO_DEFAULT                0x00000000UL                          /**< Mode DEFAULT for USB_STATUS */
#define _USB_STATUS_DCDTO_NOTIME                 0x00000000UL                          /**< Mode NOTIME for USB_STATUS */
#define _USB_STATUS_DCDTO_TIMEOUT                0x00000001UL                          /**< Mode TIMEOUT for USB_STATUS */
#define USB_STATUS_DCDTO_DEFAULT                 (_USB_STATUS_DCDTO_DEFAULT << 8)      /**< Shifted mode DEFAULT for USB_STATUS */
#define USB_STATUS_DCDTO_NOTIME                  (_USB_STATUS_DCDTO_NOTIME << 8)       /**< Shifted mode NOTIME for USB_STATUS */
#define USB_STATUS_DCDTO_TIMEOUT                 (_USB_STATUS_DCDTO_TIMEOUT << 8)      /**< Shifted mode TIMEOUT for USB_STATUS */
#define USB_STATUS_SDP                           (0x1UL << 9)                          /**< Standard Downstream Port Detected */
#define _USB_STATUS_SDP_SHIFT                    9                                     /**< Shift value for USB_SDP */
#define _USB_STATUS_SDP_MASK                     0x200UL                               /**< Bit mask for USB_SDP */
#define _USB_STATUS_SDP_DEFAULT                  0x00000000UL                          /**< Mode DEFAULT for USB_STATUS */
#define USB_STATUS_SDP_DEFAULT                   (_USB_STATUS_SDP_DEFAULT << 9)        /**< Shifted mode DEFAULT for USB_STATUS */
#define USB_STATUS_CDP                           (0x1UL << 10)                         /**< Charging Downstream Port Detected */
#define _USB_STATUS_CDP_SHIFT                    10                                    /**< Shift value for USB_CDP */
#define _USB_STATUS_CDP_MASK                     0x400UL                               /**< Bit mask for USB_CDP */
#define _USB_STATUS_CDP_DEFAULT                  0x00000000UL                          /**< Mode DEFAULT for USB_STATUS */
#define USB_STATUS_CDP_DEFAULT                   (_USB_STATUS_CDP_DEFAULT << 10)       /**< Shifted mode DEFAULT for USB_STATUS */
#define USB_STATUS_DCP                           (0x1UL << 11)                         /**< Dedicated Charging Port Detected */
#define _USB_STATUS_DCP_SHIFT                    11                                    /**< Shift value for USB_DCP */
#define _USB_STATUS_DCP_MASK                     0x800UL                               /**< Bit mask for USB_DCP */
#define _USB_STATUS_DCP_DEFAULT                  0x00000000UL                          /**< Mode DEFAULT for USB_STATUS */
#define USB_STATUS_DCP_DEFAULT                   (_USB_STATUS_DCP_DEFAULT << 11)       /**< Shifted mode DEFAULT for USB_STATUS */
#define USB_STATUS_ACAFS                         (0x1UL << 12)                         /**< ACA Full Speed TypeB Device */
#define _USB_STATUS_ACAFS_SHIFT                  12                                    /**< Shift value for USB_ACAFS */
#define _USB_STATUS_ACAFS_MASK                   0x1000UL                              /**< Bit mask for USB_ACAFS */
#define _USB_STATUS_ACAFS_DEFAULT                0x00000000UL                          /**< Mode DEFAULT for USB_STATUS */
#define USB_STATUS_ACAFS_DEFAULT                 (_USB_STATUS_ACAFS_DEFAULT << 12)     /**< Shifted mode DEFAULT for USB_STATUS */
#define USB_STATUS_ACALS                         (0x1UL << 13)                         /**< ACA Low Speed TypeB Device */
#define _USB_STATUS_ACALS_SHIFT                  13                                    /**< Shift value for USB_ACALS */
#define _USB_STATUS_ACALS_MASK                   0x2000UL                              /**< Bit mask for USB_ACALS */
#define _USB_STATUS_ACALS_DEFAULT                0x00000000UL                          /**< Mode DEFAULT for USB_STATUS */
#define USB_STATUS_ACALS_DEFAULT                 (_USB_STATUS_ACALS_DEFAULT << 13)     /**< Shifted mode DEFAULT for USB_STATUS */
#define USB_STATUS_USBCDBUSY                     (0x1UL << 15)                         /**< USB Charger Detect Busy */
#define _USB_STATUS_USBCDBUSY_SHIFT              15                                    /**< Shift value for USB_USBCDBUSY */
#define _USB_STATUS_USBCDBUSY_MASK               0x8000UL                              /**< Bit mask for USB_USBCDBUSY */
#define _USB_STATUS_USBCDBUSY_DEFAULT            0x00000000UL                          /**< Mode DEFAULT for USB_STATUS */
#define USB_STATUS_USBCDBUSY_DEFAULT             (_USB_STATUS_USBCDBUSY_DEFAULT << 15) /**< Shifted mode DEFAULT for USB_STATUS */

/* Bit fields for USB IF */
#define _USB_IF_RESETVALUE                       0x00000000UL                    /**< Default value for USB_IF */
#define _USB_IF_MASK                             0x00000F03UL                    /**< Mask for USB_IF */
#define USB_IF_VBUSDETH                          (0x1UL << 0)                    /**< VBUS Detect High Interrupt Flag */
#define _USB_IF_VBUSDETH_SHIFT                   0                               /**< Shift value for USB_VBUSDETH */
#define _USB_IF_VBUSDETH_MASK                    0x1UL                           /**< Bit mask for USB_VBUSDETH */
#define _USB_IF_VBUSDETH_DEFAULT                 0x00000000UL                    /**< Mode DEFAULT for USB_IF */
#define USB_IF_VBUSDETH_DEFAULT                  (_USB_IF_VBUSDETH_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_IF */
#define USB_IF_VBUSDETL                          (0x1UL << 1)                    /**< VBUS Detect Low Interrupt Flag */
#define _USB_IF_VBUSDETL_SHIFT                   1                               /**< Shift value for USB_VBUSDETL */
#define _USB_IF_VBUSDETL_MASK                    0x2UL                           /**< Bit mask for USB_VBUSDETL */
#define _USB_IF_VBUSDETL_DEFAULT                 0x00000000UL                    /**< Mode DEFAULT for USB_IF */
#define USB_IF_VBUSDETL_DEFAULT                  (_USB_IF_VBUSDETL_DEFAULT << 1) /**< Shifted mode DEFAULT for USB_IF */
#define USB_IF_ERR                               (0x1UL << 8)                    /**< Detection Error Interrupt Flag */
#define _USB_IF_ERR_SHIFT                        8                               /**< Shift value for USB_ERR */
#define _USB_IF_ERR_MASK                         0x100UL                         /**< Bit mask for USB_ERR */
#define _USB_IF_ERR_DEFAULT                      0x00000000UL                    /**< Mode DEFAULT for USB_IF */
#define USB_IF_ERR_DEFAULT                       (_USB_IF_ERR_DEFAULT << 8)      /**< Shifted mode DEFAULT for USB_IF */
#define USB_IF_DCD                               (0x1UL << 9)                    /**< Data Contact Detection Complete Interrupt Flag */
#define _USB_IF_DCD_SHIFT                        9                               /**< Shift value for USB_DCD */
#define _USB_IF_DCD_MASK                         0x200UL                         /**< Bit mask for USB_DCD */
#define _USB_IF_DCD_DEFAULT                      0x00000000UL                    /**< Mode DEFAULT for USB_IF */
#define USB_IF_DCD_DEFAULT                       (_USB_IF_DCD_DEFAULT << 9)      /**< Shifted mode DEFAULT for USB_IF */
#define USB_IF_PD                                (0x1UL << 10)                   /**< Primary Detection Complete Interrupt Flag */
#define _USB_IF_PD_SHIFT                         10                              /**< Shift value for USB_PD */
#define _USB_IF_PD_MASK                          0x400UL                         /**< Bit mask for USB_PD */
#define _USB_IF_PD_DEFAULT                       0x00000000UL                    /**< Mode DEFAULT for USB_IF */
#define USB_IF_PD_DEFAULT                        (_USB_IF_PD_DEFAULT << 10)      /**< Shifted mode DEFAULT for USB_IF */
#define USB_IF_SD                                (0x1UL << 11)                   /**< Secondary Detection Complete Interrupt Flag */
#define _USB_IF_SD_SHIFT                         11                              /**< Shift value for USB_SD */
#define _USB_IF_SD_MASK                          0x800UL                         /**< Bit mask for USB_SD */
#define _USB_IF_SD_DEFAULT                       0x00000000UL                    /**< Mode DEFAULT for USB_IF */
#define USB_IF_SD_DEFAULT                        (_USB_IF_SD_DEFAULT << 11)      /**< Shifted mode DEFAULT for USB_IF */

/* Bit fields for USB IFS */
#define _USB_IFS_RESETVALUE                      0x00000000UL                     /**< Default value for USB_IFS */
#define _USB_IFS_MASK                            0x00000F03UL                     /**< Mask for USB_IFS */
#define USB_IFS_VBUSDETH                         (0x1UL << 0)                     /**< Set VBUSDETH Interrupt Flag */
#define _USB_IFS_VBUSDETH_SHIFT                  0                                /**< Shift value for USB_VBUSDETH */
#define _USB_IFS_VBUSDETH_MASK                   0x1UL                            /**< Bit mask for USB_VBUSDETH */
#define _USB_IFS_VBUSDETH_DEFAULT                0x00000000UL                     /**< Mode DEFAULT for USB_IFS */
#define USB_IFS_VBUSDETH_DEFAULT                 (_USB_IFS_VBUSDETH_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_IFS */
#define USB_IFS_VBUSDETL                         (0x1UL << 1)                     /**< Set VBUSDETL Interrupt Flag */
#define _USB_IFS_VBUSDETL_SHIFT                  1                                /**< Shift value for USB_VBUSDETL */
#define _USB_IFS_VBUSDETL_MASK                   0x2UL                            /**< Bit mask for USB_VBUSDETL */
#define _USB_IFS_VBUSDETL_DEFAULT                0x00000000UL                     /**< Mode DEFAULT for USB_IFS */
#define USB_IFS_VBUSDETL_DEFAULT                 (_USB_IFS_VBUSDETL_DEFAULT << 1) /**< Shifted mode DEFAULT for USB_IFS */
#define USB_IFS_ERR                              (0x1UL << 8)                     /**< Set ERR Interrupt Flag */
#define _USB_IFS_ERR_SHIFT                       8                                /**< Shift value for USB_ERR */
#define _USB_IFS_ERR_MASK                        0x100UL                          /**< Bit mask for USB_ERR */
#define _USB_IFS_ERR_DEFAULT                     0x00000000UL                     /**< Mode DEFAULT for USB_IFS */
#define USB_IFS_ERR_DEFAULT                      (_USB_IFS_ERR_DEFAULT << 8)      /**< Shifted mode DEFAULT for USB_IFS */
#define USB_IFS_DCD                              (0x1UL << 9)                     /**< Set DCD Interrupt Flag */
#define _USB_IFS_DCD_SHIFT                       9                                /**< Shift value for USB_DCD */
#define _USB_IFS_DCD_MASK                        0x200UL                          /**< Bit mask for USB_DCD */
#define _USB_IFS_DCD_DEFAULT                     0x00000000UL                     /**< Mode DEFAULT for USB_IFS */
#define USB_IFS_DCD_DEFAULT                      (_USB_IFS_DCD_DEFAULT << 9)      /**< Shifted mode DEFAULT for USB_IFS */
#define USB_IFS_PD                               (0x1UL << 10)                    /**< Set PD Interrupt Flag */
#define _USB_IFS_PD_SHIFT                        10                               /**< Shift value for USB_PD */
#define _USB_IFS_PD_MASK                         0x400UL                          /**< Bit mask for USB_PD */
#define _USB_IFS_PD_DEFAULT                      0x00000000UL                     /**< Mode DEFAULT for USB_IFS */
#define USB_IFS_PD_DEFAULT                       (_USB_IFS_PD_DEFAULT << 10)      /**< Shifted mode DEFAULT for USB_IFS */
#define USB_IFS_SD                               (0x1UL << 11)                    /**< Set SD Interrupt Flag */
#define _USB_IFS_SD_SHIFT                        11                               /**< Shift value for USB_SD */
#define _USB_IFS_SD_MASK                         0x800UL                          /**< Bit mask for USB_SD */
#define _USB_IFS_SD_DEFAULT                      0x00000000UL                     /**< Mode DEFAULT for USB_IFS */
#define USB_IFS_SD_DEFAULT                       (_USB_IFS_SD_DEFAULT << 11)      /**< Shifted mode DEFAULT for USB_IFS */

/* Bit fields for USB IFC */
#define _USB_IFC_RESETVALUE                      0x00000000UL                     /**< Default value for USB_IFC */
#define _USB_IFC_MASK                            0x00000F03UL                     /**< Mask for USB_IFC */
#define USB_IFC_VBUSDETH                         (0x1UL << 0)                     /**< Clear VBUSDETH Interrupt Flag */
#define _USB_IFC_VBUSDETH_SHIFT                  0                                /**< Shift value for USB_VBUSDETH */
#define _USB_IFC_VBUSDETH_MASK                   0x1UL                            /**< Bit mask for USB_VBUSDETH */
#define _USB_IFC_VBUSDETH_DEFAULT                0x00000000UL                     /**< Mode DEFAULT for USB_IFC */
#define USB_IFC_VBUSDETH_DEFAULT                 (_USB_IFC_VBUSDETH_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_IFC */
#define USB_IFC_VBUSDETL                         (0x1UL << 1)                     /**< Clear VBUSDETL Interrupt Flag */
#define _USB_IFC_VBUSDETL_SHIFT                  1                                /**< Shift value for USB_VBUSDETL */
#define _USB_IFC_VBUSDETL_MASK                   0x2UL                            /**< Bit mask for USB_VBUSDETL */
#define _USB_IFC_VBUSDETL_DEFAULT                0x00000000UL                     /**< Mode DEFAULT for USB_IFC */
#define USB_IFC_VBUSDETL_DEFAULT                 (_USB_IFC_VBUSDETL_DEFAULT << 1) /**< Shifted mode DEFAULT for USB_IFC */
#define USB_IFC_ERR                              (0x1UL << 8)                     /**< Clear ERR Interrupt Flag */
#define _USB_IFC_ERR_SHIFT                       8                                /**< Shift value for USB_ERR */
#define _USB_IFC_ERR_MASK                        0x100UL                          /**< Bit mask for USB_ERR */
#define _USB_IFC_ERR_DEFAULT                     0x00000000UL                     /**< Mode DEFAULT for USB_IFC */
#define USB_IFC_ERR_DEFAULT                      (_USB_IFC_ERR_DEFAULT << 8)      /**< Shifted mode DEFAULT for USB_IFC */
#define USB_IFC_DCD                              (0x1UL << 9)                     /**< Clear DCD Interrupt Flag */
#define _USB_IFC_DCD_SHIFT                       9                                /**< Shift value for USB_DCD */
#define _USB_IFC_DCD_MASK                        0x200UL                          /**< Bit mask for USB_DCD */
#define _USB_IFC_DCD_DEFAULT                     0x00000000UL                     /**< Mode DEFAULT for USB_IFC */
#define USB_IFC_DCD_DEFAULT                      (_USB_IFC_DCD_DEFAULT << 9)      /**< Shifted mode DEFAULT for USB_IFC */
#define USB_IFC_PD                               (0x1UL << 10)                    /**< Clear PD Interrupt Flag */
#define _USB_IFC_PD_SHIFT                        10                               /**< Shift value for USB_PD */
#define _USB_IFC_PD_MASK                         0x400UL                          /**< Bit mask for USB_PD */
#define _USB_IFC_PD_DEFAULT                      0x00000000UL                     /**< Mode DEFAULT for USB_IFC */
#define USB_IFC_PD_DEFAULT                       (_USB_IFC_PD_DEFAULT << 10)      /**< Shifted mode DEFAULT for USB_IFC */
#define USB_IFC_SD                               (0x1UL << 11)                    /**< Clear SD Interrupt Flag */
#define _USB_IFC_SD_SHIFT                        11                               /**< Shift value for USB_SD */
#define _USB_IFC_SD_MASK                         0x800UL                          /**< Bit mask for USB_SD */
#define _USB_IFC_SD_DEFAULT                      0x00000000UL                     /**< Mode DEFAULT for USB_IFC */
#define USB_IFC_SD_DEFAULT                       (_USB_IFC_SD_DEFAULT << 11)      /**< Shifted mode DEFAULT for USB_IFC */

/* Bit fields for USB IEN */
#define _USB_IEN_RESETVALUE                      0x00000000UL                     /**< Default value for USB_IEN */
#define _USB_IEN_MASK                            0x00000F03UL                     /**< Mask for USB_IEN */
#define USB_IEN_VBUSDETH                         (0x1UL << 0)                     /**< VBUSDETH Interrupt Enable */
#define _USB_IEN_VBUSDETH_SHIFT                  0                                /**< Shift value for USB_VBUSDETH */
#define _USB_IEN_VBUSDETH_MASK                   0x1UL                            /**< Bit mask for USB_VBUSDETH */
#define _USB_IEN_VBUSDETH_DEFAULT                0x00000000UL                     /**< Mode DEFAULT for USB_IEN */
#define USB_IEN_VBUSDETH_DEFAULT                 (_USB_IEN_VBUSDETH_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_IEN */
#define USB_IEN_VBUSDETL                         (0x1UL << 1)                     /**< VBUSDETL Interrupt Enable */
#define _USB_IEN_VBUSDETL_SHIFT                  1                                /**< Shift value for USB_VBUSDETL */
#define _USB_IEN_VBUSDETL_MASK                   0x2UL                            /**< Bit mask for USB_VBUSDETL */
#define _USB_IEN_VBUSDETL_DEFAULT                0x00000000UL                     /**< Mode DEFAULT for USB_IEN */
#define USB_IEN_VBUSDETL_DEFAULT                 (_USB_IEN_VBUSDETL_DEFAULT << 1) /**< Shifted mode DEFAULT for USB_IEN */
#define USB_IEN_ERR                              (0x1UL << 8)                     /**< ERR Interrupt Enable */
#define _USB_IEN_ERR_SHIFT                       8                                /**< Shift value for USB_ERR */
#define _USB_IEN_ERR_MASK                        0x100UL                          /**< Bit mask for USB_ERR */
#define _USB_IEN_ERR_DEFAULT                     0x00000000UL                     /**< Mode DEFAULT for USB_IEN */
#define USB_IEN_ERR_DEFAULT                      (_USB_IEN_ERR_DEFAULT << 8)      /**< Shifted mode DEFAULT for USB_IEN */
#define USB_IEN_DCD                              (0x1UL << 9)                     /**< DCD Interrupt Enable */
#define _USB_IEN_DCD_SHIFT                       9                                /**< Shift value for USB_DCD */
#define _USB_IEN_DCD_MASK                        0x200UL                          /**< Bit mask for USB_DCD */
#define _USB_IEN_DCD_DEFAULT                     0x00000000UL                     /**< Mode DEFAULT for USB_IEN */
#define USB_IEN_DCD_DEFAULT                      (_USB_IEN_DCD_DEFAULT << 9)      /**< Shifted mode DEFAULT for USB_IEN */
#define USB_IEN_PD                               (0x1UL << 10)                    /**< PD Interrupt Enable */
#define _USB_IEN_PD_SHIFT                        10                               /**< Shift value for USB_PD */
#define _USB_IEN_PD_MASK                         0x400UL                          /**< Bit mask for USB_PD */
#define _USB_IEN_PD_DEFAULT                      0x00000000UL                     /**< Mode DEFAULT for USB_IEN */
#define USB_IEN_PD_DEFAULT                       (_USB_IEN_PD_DEFAULT << 10)      /**< Shifted mode DEFAULT for USB_IEN */
#define USB_IEN_SD                               (0x1UL << 11)                    /**< SD Interrupt Enable */
#define _USB_IEN_SD_SHIFT                        11                               /**< Shift value for USB_SD */
#define _USB_IEN_SD_MASK                         0x800UL                          /**< Bit mask for USB_SD */
#define _USB_IEN_SD_DEFAULT                      0x00000000UL                     /**< Mode DEFAULT for USB_IEN */
#define USB_IEN_SD_DEFAULT                       (_USB_IEN_SD_DEFAULT << 11)      /**< Shifted mode DEFAULT for USB_IEN */

/* Bit fields for USB ROUTE */
#define _USB_ROUTE_RESETVALUE                    0x00000000UL                        /**< Default value for USB_ROUTE */
#define _USB_ROUTE_MASK                          0x00000003UL                        /**< Mask for USB_ROUTE */
#define USB_ROUTE_PHYPEN                         (0x1UL << 0)                        /**< USB PHY Pin Enable */
#define _USB_ROUTE_PHYPEN_SHIFT                  0                                   /**< Shift value for USB_PHYPEN */
#define _USB_ROUTE_PHYPEN_MASK                   0x1UL                               /**< Bit mask for USB_PHYPEN */
#define _USB_ROUTE_PHYPEN_DEFAULT                0x00000000UL                        /**< Mode DEFAULT for USB_ROUTE */
#define USB_ROUTE_PHYPEN_DEFAULT                 (_USB_ROUTE_PHYPEN_DEFAULT << 0)    /**< Shifted mode DEFAULT for USB_ROUTE */
#define USB_ROUTE_VBUSENPEN                      (0x1UL << 1)                        /**< VBUSEN Pin Enable */
#define _USB_ROUTE_VBUSENPEN_SHIFT               1                                   /**< Shift value for USB_VBUSENPEN */
#define _USB_ROUTE_VBUSENPEN_MASK                0x2UL                               /**< Bit mask for USB_VBUSENPEN */
#define _USB_ROUTE_VBUSENPEN_DEFAULT             0x00000000UL                        /**< Mode DEFAULT for USB_ROUTE */
#define USB_ROUTE_VBUSENPEN_DEFAULT              (_USB_ROUTE_VBUSENPEN_DEFAULT << 1) /**< Shifted mode DEFAULT for USB_ROUTE */

/* Bit fields for USB CDCONF */
#define _USB_CDCONF_RESETVALUE                   0x00000000UL                         /**< Default value for USB_CDCONF */
#define _USB_CDCONF_MASK                         0x000003FFUL                         /**< Mask for USB_CDCONF */
#define _USB_CDCONF_DCDTOCONF_SHIFT              0                                    /**< Shift value for USB_DCDTOCONF */
#define _USB_CDCONF_DCDTOCONF_MASK               0x3FFUL                              /**< Bit mask for USB_DCDTOCONF */
#define _USB_CDCONF_DCDTOCONF_DEFAULT            0x00000000UL                         /**< Mode DEFAULT for USB_CDCONF */
#define USB_CDCONF_DCDTOCONF_DEFAULT             (_USB_CDCONF_DCDTOCONF_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_CDCONF */

/* Bit fields for USB CMD */
#define _USB_CMD_RESETVALUE                      0x00000000UL                    /**< Default value for USB_CMD */
#define _USB_CMD_MASK                            0x00000003UL                    /**< Mask for USB_CMD */
#define USB_CMD_STARTCD                          (0x1UL << 0)                    /**< Start Charger Detection Enabled */
#define _USB_CMD_STARTCD_SHIFT                   0                               /**< Shift value for USB_STARTCD */
#define _USB_CMD_STARTCD_MASK                    0x1UL                           /**< Bit mask for USB_STARTCD */
#define _USB_CMD_STARTCD_DEFAULT                 0x00000000UL                    /**< Mode DEFAULT for USB_CMD */
#define USB_CMD_STARTCD_DEFAULT                  (_USB_CMD_STARTCD_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_CMD */
#define USB_CMD_STOPCD                           (0x1UL << 1)                    /**< Start Charger Detection in progress */
#define _USB_CMD_STOPCD_SHIFT                    1                               /**< Shift value for USB_STOPCD */
#define _USB_CMD_STOPCD_MASK                     0x2UL                           /**< Bit mask for USB_STOPCD */
#define _USB_CMD_STOPCD_DEFAULT                  0x00000000UL                    /**< Mode DEFAULT for USB_CMD */
#define USB_CMD_STOPCD_DEFAULT                   (_USB_CMD_STOPCD_DEFAULT << 1)  /**< Shifted mode DEFAULT for USB_CMD */

/* Bit fields for USB LEMCTRL */
#define _USB_LEMCTRL_RESETVALUE                  0x00000067UL                         /**< Default value for USB_LEMCTRL */
#define _USB_LEMCTRL_MASK                        0x000003FFUL                         /**< Mask for USB_LEMCTRL */
#define _USB_LEMCTRL_TIMEBASE_SHIFT              0                                    /**< Shift value for USB_TIMEBASE */
#define _USB_LEMCTRL_TIMEBASE_MASK               0x3FFUL                              /**< Bit mask for USB_TIMEBASE */
#define _USB_LEMCTRL_TIMEBASE_DEFAULT            0x00000067UL                         /**< Mode DEFAULT for USB_LEMCTRL */
#define USB_LEMCTRL_TIMEBASE_DEFAULT             (_USB_LEMCTRL_TIMEBASE_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_LEMCTRL */

/* Bit fields for USB GOTGCTL */
#define _USB_GOTGCTL_RESETVALUE                  0x00010000UL                                 /**< Default value for USB_GOTGCTL */
#define _USB_GOTGCTL_MASK                        0x003F9FFFUL                                 /**< Mask for USB_GOTGCTL */
#define USB_GOTGCTL_SESREQSCS                    (0x1UL << 0)                                 /**< Session Request Success */
#define _USB_GOTGCTL_SESREQSCS_SHIFT             0                                            /**< Shift value for USB_SESREQSCS */
#define _USB_GOTGCTL_SESREQSCS_MASK              0x1UL                                        /**< Bit mask for USB_SESREQSCS */
#define _USB_GOTGCTL_SESREQSCS_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_SESREQSCS_DEFAULT            (_USB_GOTGCTL_SESREQSCS_DEFAULT << 0)        /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_SESREQ                       (0x1UL << 1)                                 /**< Session Request */
#define _USB_GOTGCTL_SESREQ_SHIFT                1                                            /**< Shift value for USB_SESREQ */
#define _USB_GOTGCTL_SESREQ_MASK                 0x2UL                                        /**< Bit mask for USB_SESREQ */
#define _USB_GOTGCTL_SESREQ_DEFAULT              0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_SESREQ_DEFAULT               (_USB_GOTGCTL_SESREQ_DEFAULT << 1)           /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_VBVALIDOVEN                  (0x1UL << 2)                                 /**< VBUS Valid Override Enable */
#define _USB_GOTGCTL_VBVALIDOVEN_SHIFT           2                                            /**< Shift value for USB_VBVALIDOVEN */
#define _USB_GOTGCTL_VBVALIDOVEN_MASK            0x4UL                                        /**< Bit mask for USB_VBVALIDOVEN */
#define _USB_GOTGCTL_VBVALIDOVEN_DEFAULT         0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_VBVALIDOVEN_DEFAULT          (_USB_GOTGCTL_VBVALIDOVEN_DEFAULT << 2)      /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_VBVALIDOVVAL                 (0x1UL << 3)                                 /**< VBUS Valid OverrideValue */
#define _USB_GOTGCTL_VBVALIDOVVAL_SHIFT          3                                            /**< Shift value for USB_VBVALIDOVVAL */
#define _USB_GOTGCTL_VBVALIDOVVAL_MASK           0x8UL                                        /**< Bit mask for USB_VBVALIDOVVAL */
#define _USB_GOTGCTL_VBVALIDOVVAL_DEFAULT        0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_VBVALIDOVVAL_DEFAULT         (_USB_GOTGCTL_VBVALIDOVVAL_DEFAULT << 3)     /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_AVALIDOVEN                   (0x1UL << 4)                                 /**< A-Peripheral Session Valid Override Enable */
#define _USB_GOTGCTL_AVALIDOVEN_SHIFT            4                                            /**< Shift value for USB_AVALIDOVEN */
#define _USB_GOTGCTL_AVALIDOVEN_MASK             0x10UL                                       /**< Bit mask for USB_AVALIDOVEN */
#define _USB_GOTGCTL_AVALIDOVEN_DEFAULT          0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_AVALIDOVEN_DEFAULT           (_USB_GOTGCTL_AVALIDOVEN_DEFAULT << 4)       /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_AVALIDOVVAL                  (0x1UL << 5)                                 /**< A-Peripheral Session Valid OverrideValue */
#define _USB_GOTGCTL_AVALIDOVVAL_SHIFT           5                                            /**< Shift value for USB_AVALIDOVVAL */
#define _USB_GOTGCTL_AVALIDOVVAL_MASK            0x20UL                                       /**< Bit mask for USB_AVALIDOVVAL */
#define _USB_GOTGCTL_AVALIDOVVAL_DEFAULT         0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_AVALIDOVVAL_DEFAULT          (_USB_GOTGCTL_AVALIDOVVAL_DEFAULT << 5)      /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_BVALIDOVEN                   (0x1UL << 6)                                 /**< B-Peripheral Session Valid Override Enable */
#define _USB_GOTGCTL_BVALIDOVEN_SHIFT            6                                            /**< Shift value for USB_BVALIDOVEN */
#define _USB_GOTGCTL_BVALIDOVEN_MASK             0x40UL                                       /**< Bit mask for USB_BVALIDOVEN */
#define _USB_GOTGCTL_BVALIDOVEN_DEFAULT          0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_BVALIDOVEN_DEFAULT           (_USB_GOTGCTL_BVALIDOVEN_DEFAULT << 6)       /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_BVALIDOVVAL                  (0x1UL << 7)                                 /**< B-Peripheral Session Valid OverrideValue */
#define _USB_GOTGCTL_BVALIDOVVAL_SHIFT           7                                            /**< Shift value for USB_BVALIDOVVAL */
#define _USB_GOTGCTL_BVALIDOVVAL_MASK            0x80UL                                       /**< Bit mask for USB_BVALIDOVVAL */
#define _USB_GOTGCTL_BVALIDOVVAL_DEFAULT         0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_BVALIDOVVAL_DEFAULT          (_USB_GOTGCTL_BVALIDOVVAL_DEFAULT << 7)      /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_HSTNEGSCS                    (0x1UL << 8)                                 /**< Host Negotiation Success */
#define _USB_GOTGCTL_HSTNEGSCS_SHIFT             8                                            /**< Shift value for USB_HSTNEGSCS */
#define _USB_GOTGCTL_HSTNEGSCS_MASK              0x100UL                                      /**< Bit mask for USB_HSTNEGSCS */
#define _USB_GOTGCTL_HSTNEGSCS_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_HSTNEGSCS_DEFAULT            (_USB_GOTGCTL_HSTNEGSCS_DEFAULT << 8)        /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_HNPREQ                       (0x1UL << 9)                                 /**< HNP Request */
#define _USB_GOTGCTL_HNPREQ_SHIFT                9                                            /**< Shift value for USB_HNPREQ */
#define _USB_GOTGCTL_HNPREQ_MASK                 0x200UL                                      /**< Bit mask for USB_HNPREQ */
#define _USB_GOTGCTL_HNPREQ_DEFAULT              0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_HNPREQ_DEFAULT               (_USB_GOTGCTL_HNPREQ_DEFAULT << 9)           /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_HSTSETHNPEN                  (0x1UL << 10)                                /**< Host Set HNP Enable */
#define _USB_GOTGCTL_HSTSETHNPEN_SHIFT           10                                           /**< Shift value for USB_HSTSETHNPEN */
#define _USB_GOTGCTL_HSTSETHNPEN_MASK            0x400UL                                      /**< Bit mask for USB_HSTSETHNPEN */
#define _USB_GOTGCTL_HSTSETHNPEN_DEFAULT         0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_HSTSETHNPEN_DEFAULT          (_USB_GOTGCTL_HSTSETHNPEN_DEFAULT << 10)     /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_DEVHNPEN                     (0x1UL << 11)                                /**< Device HNP Enabled */
#define _USB_GOTGCTL_DEVHNPEN_SHIFT              11                                           /**< Shift value for USB_DEVHNPEN */
#define _USB_GOTGCTL_DEVHNPEN_MASK               0x800UL                                      /**< Bit mask for USB_DEVHNPEN */
#define _USB_GOTGCTL_DEVHNPEN_DEFAULT            0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_DEVHNPEN_DEFAULT             (_USB_GOTGCTL_DEVHNPEN_DEFAULT << 11)        /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_EHEN                         (0x1UL << 12)                                /**< Embedded Host Enable */
#define _USB_GOTGCTL_EHEN_SHIFT                  12                                           /**< Shift value for USB_EHEN */
#define _USB_GOTGCTL_EHEN_MASK                   0x1000UL                                     /**< Bit mask for USB_EHEN */
#define _USB_GOTGCTL_EHEN_DEFAULT                0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_EHEN_DEFAULT                 (_USB_GOTGCTL_EHEN_DEFAULT << 12)            /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_DBNCEFLTRBYPASS              (0x1UL << 15)                                /**<  */
#define _USB_GOTGCTL_DBNCEFLTRBYPASS_SHIFT       15                                           /**< Shift value for USB_DBNCEFLTRBYPASS */
#define _USB_GOTGCTL_DBNCEFLTRBYPASS_MASK        0x8000UL                                     /**< Bit mask for USB_DBNCEFLTRBYPASS */
#define _USB_GOTGCTL_DBNCEFLTRBYPASS_DEFAULT     0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_DBNCEFLTRBYPASS_DEFAULT      (_USB_GOTGCTL_DBNCEFLTRBYPASS_DEFAULT << 15) /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_CONIDSTS                     (0x1UL << 16)                                /**< Connector ID Status */
#define _USB_GOTGCTL_CONIDSTS_SHIFT              16                                           /**< Shift value for USB_CONIDSTS */
#define _USB_GOTGCTL_CONIDSTS_MASK               0x10000UL                                    /**< Bit mask for USB_CONIDSTS */
#define _USB_GOTGCTL_CONIDSTS_DEFAULT            0x00000001UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_CONIDSTS_DEFAULT             (_USB_GOTGCTL_CONIDSTS_DEFAULT << 16)        /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_DBNCTIME                     (0x1UL << 17)                                /**< Long/Short Debounce Time */
#define _USB_GOTGCTL_DBNCTIME_SHIFT              17                                           /**< Shift value for USB_DBNCTIME */
#define _USB_GOTGCTL_DBNCTIME_MASK               0x20000UL                                    /**< Bit mask for USB_DBNCTIME */
#define _USB_GOTGCTL_DBNCTIME_DEFAULT            0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_DBNCTIME_DEFAULT             (_USB_GOTGCTL_DBNCTIME_DEFAULT << 17)        /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_ASESVLD                      (0x1UL << 18)                                /**< A-Session Valid */
#define _USB_GOTGCTL_ASESVLD_SHIFT               18                                           /**< Shift value for USB_ASESVLD */
#define _USB_GOTGCTL_ASESVLD_MASK                0x40000UL                                    /**< Bit mask for USB_ASESVLD */
#define _USB_GOTGCTL_ASESVLD_DEFAULT             0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_ASESVLD_DEFAULT              (_USB_GOTGCTL_ASESVLD_DEFAULT << 18)         /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_BSESVLD                      (0x1UL << 19)                                /**< B-Session Valid */
#define _USB_GOTGCTL_BSESVLD_SHIFT               19                                           /**< Shift value for USB_BSESVLD */
#define _USB_GOTGCTL_BSESVLD_MASK                0x80000UL                                    /**< Bit mask for USB_BSESVLD */
#define _USB_GOTGCTL_BSESVLD_DEFAULT             0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_BSESVLD_DEFAULT              (_USB_GOTGCTL_BSESVLD_DEFAULT << 19)         /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_OTGVER                       (0x1UL << 20)                                /**< OTG Version */
#define _USB_GOTGCTL_OTGVER_SHIFT                20                                           /**< Shift value for USB_OTGVER */
#define _USB_GOTGCTL_OTGVER_MASK                 0x100000UL                                   /**< Bit mask for USB_OTGVER */
#define _USB_GOTGCTL_OTGVER_DEFAULT              0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_OTGVER_DEFAULT               (_USB_GOTGCTL_OTGVER_DEFAULT << 20)          /**< Shifted mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_CURMOD                       (0x1UL << 21)                                /**< Current Mode of Operation */
#define _USB_GOTGCTL_CURMOD_SHIFT                21                                           /**< Shift value for USB_CURMOD */
#define _USB_GOTGCTL_CURMOD_MASK                 0x200000UL                                   /**< Bit mask for USB_CURMOD */
#define _USB_GOTGCTL_CURMOD_DEFAULT              0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGCTL */
#define USB_GOTGCTL_CURMOD_DEFAULT               (_USB_GOTGCTL_CURMOD_DEFAULT << 21)          /**< Shifted mode DEFAULT for USB_GOTGCTL */

/* Bit fields for USB GOTGINT */
#define _USB_GOTGINT_RESETVALUE                  0x00000000UL                                 /**< Default value for USB_GOTGINT */
#define _USB_GOTGINT_MASK                        0x000E0304UL                                 /**< Mask for USB_GOTGINT */
#define USB_GOTGINT_SESENDDET                    (0x1UL << 2)                                 /**< Session End Detected */
#define _USB_GOTGINT_SESENDDET_SHIFT             2                                            /**< Shift value for USB_SESENDDET */
#define _USB_GOTGINT_SESENDDET_MASK              0x4UL                                        /**< Bit mask for USB_SESENDDET */
#define _USB_GOTGINT_SESENDDET_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGINT */
#define USB_GOTGINT_SESENDDET_DEFAULT            (_USB_GOTGINT_SESENDDET_DEFAULT << 2)        /**< Shifted mode DEFAULT for USB_GOTGINT */
#define USB_GOTGINT_SESREQSUCSTSCHNG             (0x1UL << 8)                                 /**< Session Request Success Status Change */
#define _USB_GOTGINT_SESREQSUCSTSCHNG_SHIFT      8                                            /**< Shift value for USB_SESREQSUCSTSCHNG */
#define _USB_GOTGINT_SESREQSUCSTSCHNG_MASK       0x100UL                                      /**< Bit mask for USB_SESREQSUCSTSCHNG */
#define _USB_GOTGINT_SESREQSUCSTSCHNG_DEFAULT    0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGINT */
#define USB_GOTGINT_SESREQSUCSTSCHNG_DEFAULT     (_USB_GOTGINT_SESREQSUCSTSCHNG_DEFAULT << 8) /**< Shifted mode DEFAULT for USB_GOTGINT */
#define USB_GOTGINT_HSTNEGSUCSTSCHNG             (0x1UL << 9)                                 /**< Host Negotiation Success Status Change */
#define _USB_GOTGINT_HSTNEGSUCSTSCHNG_SHIFT      9                                            /**< Shift value for USB_HSTNEGSUCSTSCHNG */
#define _USB_GOTGINT_HSTNEGSUCSTSCHNG_MASK       0x200UL                                      /**< Bit mask for USB_HSTNEGSUCSTSCHNG */
#define _USB_GOTGINT_HSTNEGSUCSTSCHNG_DEFAULT    0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGINT */
#define USB_GOTGINT_HSTNEGSUCSTSCHNG_DEFAULT     (_USB_GOTGINT_HSTNEGSUCSTSCHNG_DEFAULT << 9) /**< Shifted mode DEFAULT for USB_GOTGINT */
#define USB_GOTGINT_HSTNEGDET                    (0x1UL << 17)                                /**< Host Negotiation Detected */
#define _USB_GOTGINT_HSTNEGDET_SHIFT             17                                           /**< Shift value for USB_HSTNEGDET */
#define _USB_GOTGINT_HSTNEGDET_MASK              0x20000UL                                    /**< Bit mask for USB_HSTNEGDET */
#define _USB_GOTGINT_HSTNEGDET_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGINT */
#define USB_GOTGINT_HSTNEGDET_DEFAULT            (_USB_GOTGINT_HSTNEGDET_DEFAULT << 17)       /**< Shifted mode DEFAULT for USB_GOTGINT */
#define USB_GOTGINT_ADEVTOUTCHG                  (0x1UL << 18)                                /**< A-Device Timeout Change */
#define _USB_GOTGINT_ADEVTOUTCHG_SHIFT           18                                           /**< Shift value for USB_ADEVTOUTCHG */
#define _USB_GOTGINT_ADEVTOUTCHG_MASK            0x40000UL                                    /**< Bit mask for USB_ADEVTOUTCHG */
#define _USB_GOTGINT_ADEVTOUTCHG_DEFAULT         0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGINT */
#define USB_GOTGINT_ADEVTOUTCHG_DEFAULT          (_USB_GOTGINT_ADEVTOUTCHG_DEFAULT << 18)     /**< Shifted mode DEFAULT for USB_GOTGINT */
#define USB_GOTGINT_DBNCEDONE                    (0x1UL << 19)                                /**< Debounce Done */
#define _USB_GOTGINT_DBNCEDONE_SHIFT             19                                           /**< Shift value for USB_DBNCEDONE */
#define _USB_GOTGINT_DBNCEDONE_MASK              0x80000UL                                    /**< Bit mask for USB_DBNCEDONE */
#define _USB_GOTGINT_DBNCEDONE_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for USB_GOTGINT */
#define USB_GOTGINT_DBNCEDONE_DEFAULT            (_USB_GOTGINT_DBNCEDONE_DEFAULT << 19)       /**< Shifted mode DEFAULT for USB_GOTGINT */

/* Bit fields for USB GAHBCFG */
#define _USB_GAHBCFG_RESETVALUE                  0x00000000UL                                /**< Default value for USB_GAHBCFG */
#define _USB_GAHBCFG_MASK                        0x00E001BFUL                                /**< Mask for USB_GAHBCFG */
#define USB_GAHBCFG_GLBLINTRMSK                  (0x1UL << 0)                                /**< Global Interrupt Mask */
#define _USB_GAHBCFG_GLBLINTRMSK_SHIFT           0                                           /**< Shift value for USB_GLBLINTRMSK */
#define _USB_GAHBCFG_GLBLINTRMSK_MASK            0x1UL                                       /**< Bit mask for USB_GLBLINTRMSK */
#define _USB_GAHBCFG_GLBLINTRMSK_DEFAULT         0x00000000UL                                /**< Mode DEFAULT for USB_GAHBCFG */
#define USB_GAHBCFG_GLBLINTRMSK_DEFAULT          (_USB_GAHBCFG_GLBLINTRMSK_DEFAULT << 0)     /**< Shifted mode DEFAULT for USB_GAHBCFG */
#define _USB_GAHBCFG_HBSTLEN_SHIFT               1                                           /**< Shift value for USB_HBSTLEN */
#define _USB_GAHBCFG_HBSTLEN_MASK                0x1EUL                                      /**< Bit mask for USB_HBSTLEN */
#define _USB_GAHBCFG_HBSTLEN_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for USB_GAHBCFG */
#define USB_GAHBCFG_HBSTLEN_DEFAULT              (_USB_GAHBCFG_HBSTLEN_DEFAULT << 1)         /**< Shifted mode DEFAULT for USB_GAHBCFG */
#define USB_GAHBCFG_DMAEN                        (0x1UL << 5)                                /**< DMA Enable */
#define _USB_GAHBCFG_DMAEN_SHIFT                 5                                           /**< Shift value for USB_DMAEN */
#define _USB_GAHBCFG_DMAEN_MASK                  0x20UL                                      /**< Bit mask for USB_DMAEN */
#define _USB_GAHBCFG_DMAEN_DEFAULT               0x00000000UL                                /**< Mode DEFAULT for USB_GAHBCFG */
#define USB_GAHBCFG_DMAEN_DEFAULT                (_USB_GAHBCFG_DMAEN_DEFAULT << 5)           /**< Shifted mode DEFAULT for USB_GAHBCFG */
#define USB_GAHBCFG_NPTXFEMPLVL                  (0x1UL << 7)                                /**< Non-Periodic TxFIFO Empty Level */
#define _USB_GAHBCFG_NPTXFEMPLVL_SHIFT           7                                           /**< Shift value for USB_NPTXFEMPLVL */
#define _USB_GAHBCFG_NPTXFEMPLVL_MASK            0x80UL                                      /**< Bit mask for USB_NPTXFEMPLVL */
#define _USB_GAHBCFG_NPTXFEMPLVL_DEFAULT         0x00000000UL                                /**< Mode DEFAULT for USB_GAHBCFG */
#define USB_GAHBCFG_NPTXFEMPLVL_DEFAULT          (_USB_GAHBCFG_NPTXFEMPLVL_DEFAULT << 7)     /**< Shifted mode DEFAULT for USB_GAHBCFG */
#define USB_GAHBCFG_PTXFEMPLVL                   (0x1UL << 8)                                /**< Periodic TxFIFO Empty Level */
#define _USB_GAHBCFG_PTXFEMPLVL_SHIFT            8                                           /**< Shift value for USB_PTXFEMPLVL */
#define _USB_GAHBCFG_PTXFEMPLVL_MASK             0x100UL                                     /**< Bit mask for USB_PTXFEMPLVL */
#define _USB_GAHBCFG_PTXFEMPLVL_DEFAULT          0x00000000UL                                /**< Mode DEFAULT for USB_GAHBCFG */
#define USB_GAHBCFG_PTXFEMPLVL_DEFAULT           (_USB_GAHBCFG_PTXFEMPLVL_DEFAULT << 8)      /**< Shifted mode DEFAULT for USB_GAHBCFG */
#define USB_GAHBCFG_REMMEMSUPP                   (0x1UL << 21)                               /**< Remote Memory Support */
#define _USB_GAHBCFG_REMMEMSUPP_SHIFT            21                                          /**< Shift value for USB_REMMEMSUPP */
#define _USB_GAHBCFG_REMMEMSUPP_MASK             0x200000UL                                  /**< Bit mask for USB_REMMEMSUPP */
#define _USB_GAHBCFG_REMMEMSUPP_DEFAULT          0x00000000UL                                /**< Mode DEFAULT for USB_GAHBCFG */
#define USB_GAHBCFG_REMMEMSUPP_DEFAULT           (_USB_GAHBCFG_REMMEMSUPP_DEFAULT << 21)     /**< Shifted mode DEFAULT for USB_GAHBCFG */
#define USB_GAHBCFG_NOTIALLDMAWRIT               (0x1UL << 22)                               /**< Notify All Dma Write Transactions */
#define _USB_GAHBCFG_NOTIALLDMAWRIT_SHIFT        22                                          /**< Shift value for USB_NOTIALLDMAWRIT */
#define _USB_GAHBCFG_NOTIALLDMAWRIT_MASK         0x400000UL                                  /**< Bit mask for USB_NOTIALLDMAWRIT */
#define _USB_GAHBCFG_NOTIALLDMAWRIT_DEFAULT      0x00000000UL                                /**< Mode DEFAULT for USB_GAHBCFG */
#define USB_GAHBCFG_NOTIALLDMAWRIT_DEFAULT       (_USB_GAHBCFG_NOTIALLDMAWRIT_DEFAULT << 22) /**< Shifted mode DEFAULT for USB_GAHBCFG */
#define USB_GAHBCFG_AHBSINGLE                    (0x1UL << 23)                               /**< AHB Single Support */
#define _USB_GAHBCFG_AHBSINGLE_SHIFT             23                                          /**< Shift value for USB_AHBSINGLE */
#define _USB_GAHBCFG_AHBSINGLE_MASK              0x800000UL                                  /**< Bit mask for USB_AHBSINGLE */
#define _USB_GAHBCFG_AHBSINGLE_DEFAULT           0x00000000UL                                /**< Mode DEFAULT for USB_GAHBCFG */
#define USB_GAHBCFG_AHBSINGLE_DEFAULT            (_USB_GAHBCFG_AHBSINGLE_DEFAULT << 23)      /**< Shifted mode DEFAULT for USB_GAHBCFG */

/* Bit fields for USB GUSBCFG */
#define _USB_GUSBCFG_RESETVALUE                  0x00001400UL                                /**< Default value for USB_GUSBCFG */
#define _USB_GUSBCFG_MASK                        0xF0403F2FUL                                /**< Mask for USB_GUSBCFG */
#define _USB_GUSBCFG_TOUTCAL_SHIFT               0                                           /**< Shift value for USB_TOUTCAL */
#define _USB_GUSBCFG_TOUTCAL_MASK                0x7UL                                       /**< Bit mask for USB_TOUTCAL */
#define _USB_GUSBCFG_TOUTCAL_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_TOUTCAL_DEFAULT              (_USB_GUSBCFG_TOUTCAL_DEFAULT << 0)         /**< Shifted mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_PHYIF                        (0x1UL << 3)                                /**< PHY Interface */
#define _USB_GUSBCFG_PHYIF_SHIFT                 3                                           /**< Shift value for USB_PHYIF */
#define _USB_GUSBCFG_PHYIF_MASK                  0x8UL                                       /**< Bit mask for USB_PHYIF */
#define _USB_GUSBCFG_PHYIF_DEFAULT               0x00000000UL                                /**< Mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_PHYIF_DEFAULT                (_USB_GUSBCFG_PHYIF_DEFAULT << 3)           /**< Shifted mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_FSINTF                       (0x1UL << 5)                                /**< Full-Speed Serial Interface Select */
#define _USB_GUSBCFG_FSINTF_SHIFT                5                                           /**< Shift value for USB_FSINTF */
#define _USB_GUSBCFG_FSINTF_MASK                 0x20UL                                      /**< Bit mask for USB_FSINTF */
#define _USB_GUSBCFG_FSINTF_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_FSINTF_DEFAULT               (_USB_GUSBCFG_FSINTF_DEFAULT << 5)          /**< Shifted mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_SRPCAP                       (0x1UL << 8)                                /**< SRP-Capable */
#define _USB_GUSBCFG_SRPCAP_SHIFT                8                                           /**< Shift value for USB_SRPCAP */
#define _USB_GUSBCFG_SRPCAP_MASK                 0x100UL                                     /**< Bit mask for USB_SRPCAP */
#define _USB_GUSBCFG_SRPCAP_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_SRPCAP_DEFAULT               (_USB_GUSBCFG_SRPCAP_DEFAULT << 8)          /**< Shifted mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_HNPCAP                       (0x1UL << 9)                                /**< HNP-Capable */
#define _USB_GUSBCFG_HNPCAP_SHIFT                9                                           /**< Shift value for USB_HNPCAP */
#define _USB_GUSBCFG_HNPCAP_MASK                 0x200UL                                     /**< Bit mask for USB_HNPCAP */
#define _USB_GUSBCFG_HNPCAP_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_HNPCAP_DEFAULT               (_USB_GUSBCFG_HNPCAP_DEFAULT << 9)          /**< Shifted mode DEFAULT for USB_GUSBCFG */
#define _USB_GUSBCFG_USBTRDTIM_SHIFT             10                                          /**< Shift value for USB_USBTRDTIM */
#define _USB_GUSBCFG_USBTRDTIM_MASK              0x3C00UL                                    /**< Bit mask for USB_USBTRDTIM */
#define _USB_GUSBCFG_USBTRDTIM_DEFAULT           0x00000005UL                                /**< Mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_USBTRDTIM_DEFAULT            (_USB_GUSBCFG_USBTRDTIM_DEFAULT << 10)      /**< Shifted mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_TERMSELDLPULSE               (0x1UL << 22)                               /**< TermSel DLine Pulsing Selection */
#define _USB_GUSBCFG_TERMSELDLPULSE_SHIFT        22                                          /**< Shift value for USB_TERMSELDLPULSE */
#define _USB_GUSBCFG_TERMSELDLPULSE_MASK         0x400000UL                                  /**< Bit mask for USB_TERMSELDLPULSE */
#define _USB_GUSBCFG_TERMSELDLPULSE_DEFAULT      0x00000000UL                                /**< Mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_TERMSELDLPULSE_DEFAULT       (_USB_GUSBCFG_TERMSELDLPULSE_DEFAULT << 22) /**< Shifted mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_TXENDDELAY                   (0x1UL << 28)                               /**< Tx End Delay */
#define _USB_GUSBCFG_TXENDDELAY_SHIFT            28                                          /**< Shift value for USB_TXENDDELAY */
#define _USB_GUSBCFG_TXENDDELAY_MASK             0x10000000UL                                /**< Bit mask for USB_TXENDDELAY */
#define _USB_GUSBCFG_TXENDDELAY_DEFAULT          0x00000000UL                                /**< Mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_TXENDDELAY_DEFAULT           (_USB_GUSBCFG_TXENDDELAY_DEFAULT << 28)     /**< Shifted mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_FORCEHSTMODE                 (0x1UL << 29)                               /**< Force Host Mode */
#define _USB_GUSBCFG_FORCEHSTMODE_SHIFT          29                                          /**< Shift value for USB_FORCEHSTMODE */
#define _USB_GUSBCFG_FORCEHSTMODE_MASK           0x20000000UL                                /**< Bit mask for USB_FORCEHSTMODE */
#define _USB_GUSBCFG_FORCEHSTMODE_DEFAULT        0x00000000UL                                /**< Mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_FORCEHSTMODE_DEFAULT         (_USB_GUSBCFG_FORCEHSTMODE_DEFAULT << 29)   /**< Shifted mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_FORCEDEVMODE                 (0x1UL << 30)                               /**< Force Device Mode */
#define _USB_GUSBCFG_FORCEDEVMODE_SHIFT          30                                          /**< Shift value for USB_FORCEDEVMODE */
#define _USB_GUSBCFG_FORCEDEVMODE_MASK           0x40000000UL                                /**< Bit mask for USB_FORCEDEVMODE */
#define _USB_GUSBCFG_FORCEDEVMODE_DEFAULT        0x00000000UL                                /**< Mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_FORCEDEVMODE_DEFAULT         (_USB_GUSBCFG_FORCEDEVMODE_DEFAULT << 30)   /**< Shifted mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_CORRUPTTXPKT                 (0x1UL << 31)                               /**<  */
#define _USB_GUSBCFG_CORRUPTTXPKT_SHIFT          31                                          /**< Shift value for USB_CORRUPTTXPKT */
#define _USB_GUSBCFG_CORRUPTTXPKT_MASK           0x80000000UL                                /**< Bit mask for USB_CORRUPTTXPKT */
#define _USB_GUSBCFG_CORRUPTTXPKT_DEFAULT        0x00000000UL                                /**< Mode DEFAULT for USB_GUSBCFG */
#define USB_GUSBCFG_CORRUPTTXPKT_DEFAULT         (_USB_GUSBCFG_CORRUPTTXPKT_DEFAULT << 31)   /**< Shifted mode DEFAULT for USB_GUSBCFG */

/* Bit fields for USB GRSTCTL */
#define _USB_GRSTCTL_RESETVALUE                  0x80000000UL                            /**< Default value for USB_GRSTCTL */
#define _USB_GRSTCTL_MASK                        0xC00007F7UL                            /**< Mask for USB_GRSTCTL */
#define USB_GRSTCTL_CSFTRST                      (0x1UL << 0)                            /**< Core Soft Reset */
#define _USB_GRSTCTL_CSFTRST_SHIFT               0                                       /**< Shift value for USB_CSFTRST */
#define _USB_GRSTCTL_CSFTRST_MASK                0x1UL                                   /**< Bit mask for USB_CSFTRST */
#define _USB_GRSTCTL_CSFTRST_DEFAULT             0x00000000UL                            /**< Mode DEFAULT for USB_GRSTCTL */
#define USB_GRSTCTL_CSFTRST_DEFAULT              (_USB_GRSTCTL_CSFTRST_DEFAULT << 0)     /**< Shifted mode DEFAULT for USB_GRSTCTL */
#define USB_GRSTCTL_PIUFSSFTRST                  (0x1UL << 1)                            /**< PIU FS Dedicated Controller Soft Reset */
#define _USB_GRSTCTL_PIUFSSFTRST_SHIFT           1                                       /**< Shift value for USB_PIUFSSFTRST */
#define _USB_GRSTCTL_PIUFSSFTRST_MASK            0x2UL                                   /**< Bit mask for USB_PIUFSSFTRST */
#define _USB_GRSTCTL_PIUFSSFTRST_DEFAULT         0x00000000UL                            /**< Mode DEFAULT for USB_GRSTCTL */
#define USB_GRSTCTL_PIUFSSFTRST_DEFAULT          (_USB_GRSTCTL_PIUFSSFTRST_DEFAULT << 1) /**< Shifted mode DEFAULT for USB_GRSTCTL */
#define USB_GRSTCTL_FRMCNTRRST                   (0x1UL << 2)                            /**< Host Frame Counter Reset */
#define _USB_GRSTCTL_FRMCNTRRST_SHIFT            2                                       /**< Shift value for USB_FRMCNTRRST */
#define _USB_GRSTCTL_FRMCNTRRST_MASK             0x4UL                                   /**< Bit mask for USB_FRMCNTRRST */
#define _USB_GRSTCTL_FRMCNTRRST_DEFAULT          0x00000000UL                            /**< Mode DEFAULT for USB_GRSTCTL */
#define USB_GRSTCTL_FRMCNTRRST_DEFAULT           (_USB_GRSTCTL_FRMCNTRRST_DEFAULT << 2)  /**< Shifted mode DEFAULT for USB_GRSTCTL */
#define USB_GRSTCTL_RXFFLSH                      (0x1UL << 4)                            /**< RxFIFO Flush */
#define _USB_GRSTCTL_RXFFLSH_SHIFT               4                                       /**< Shift value for USB_RXFFLSH */
#define _USB_GRSTCTL_RXFFLSH_MASK                0x10UL                                  /**< Bit mask for USB_RXFFLSH */
#define _USB_GRSTCTL_RXFFLSH_DEFAULT             0x00000000UL                            /**< Mode DEFAULT for USB_GRSTCTL */
#define USB_GRSTCTL_RXFFLSH_DEFAULT              (_USB_GRSTCTL_RXFFLSH_DEFAULT << 4)     /**< Shifted mode DEFAULT for USB_GRSTCTL */
#define USB_GRSTCTL_TXFFLSH                      (0x1UL << 5)                            /**< TxFIFO Flush */
#define _USB_GRSTCTL_TXFFLSH_SHIFT               5                                       /**< Shift value for USB_TXFFLSH */
#define _USB_GRSTCTL_TXFFLSH_MASK                0x20UL                                  /**< Bit mask for USB_TXFFLSH */
#define _USB_GRSTCTL_TXFFLSH_DEFAULT             0x00000000UL                            /**< Mode DEFAULT for USB_GRSTCTL */
#define USB_GRSTCTL_TXFFLSH_DEFAULT              (_USB_GRSTCTL_TXFFLSH_DEFAULT << 5)     /**< Shifted mode DEFAULT for USB_GRSTCTL */
#define _USB_GRSTCTL_TXFNUM_SHIFT                6                                       /**< Shift value for USB_TXFNUM */
#define _USB_GRSTCTL_TXFNUM_MASK                 0x7C0UL                                 /**< Bit mask for USB_TXFNUM */
#define _USB_GRSTCTL_TXFNUM_DEFAULT              0x00000000UL                            /**< Mode DEFAULT for USB_GRSTCTL */
#define USB_GRSTCTL_TXFNUM_DEFAULT               (_USB_GRSTCTL_TXFNUM_DEFAULT << 6)      /**< Shifted mode DEFAULT for USB_GRSTCTL */
#define USB_GRSTCTL_DMAREQ                       (0x1UL << 30)                           /**< DMA Request Signal */
#define _USB_GRSTCTL_DMAREQ_SHIFT                30                                      /**< Shift value for USB_DMAREQ */
#define _USB_GRSTCTL_DMAREQ_MASK                 0x40000000UL                            /**< Bit mask for USB_DMAREQ */
#define _USB_GRSTCTL_DMAREQ_DEFAULT              0x00000000UL                            /**< Mode DEFAULT for USB_GRSTCTL */
#define USB_GRSTCTL_DMAREQ_DEFAULT               (_USB_GRSTCTL_DMAREQ_DEFAULT << 30)     /**< Shifted mode DEFAULT for USB_GRSTCTL */
#define USB_GRSTCTL_AHBIDLE                      (0x1UL << 31)                           /**< AHB Master Idle */
#define _USB_GRSTCTL_AHBIDLE_SHIFT               31                                      /**< Shift value for USB_AHBIDLE */
#define _USB_GRSTCTL_AHBIDLE_MASK                0x80000000UL                            /**< Bit mask for USB_AHBIDLE */
#define _USB_GRSTCTL_AHBIDLE_DEFAULT             0x00000001UL                            /**< Mode DEFAULT for USB_GRSTCTL */
#define USB_GRSTCTL_AHBIDLE_DEFAULT              (_USB_GRSTCTL_AHBIDLE_DEFAULT << 31)    /**< Shifted mode DEFAULT for USB_GRSTCTL */

/* Bit fields for USB GINTSTS */
#define _USB_GINTSTS_RESETVALUE                  0x14000020UL                              /**< Default value for USB_GINTSTS */
#define _USB_GINTSTS_MASK                        0xF7FCFCFFUL                              /**< Mask for USB_GINTSTS */
#define USB_GINTSTS_CURMOD                       (0x1UL << 0)                              /**< Current Mode of Operation */
#define _USB_GINTSTS_CURMOD_SHIFT                0                                         /**< Shift value for USB_CURMOD */
#define _USB_GINTSTS_CURMOD_MASK                 0x1UL                                     /**< Bit mask for USB_CURMOD */
#define _USB_GINTSTS_CURMOD_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_CURMOD_DEFAULT               (_USB_GINTSTS_CURMOD_DEFAULT << 0)        /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_MODEMIS                      (0x1UL << 1)                              /**< Mode Mismatch Interrupt */
#define _USB_GINTSTS_MODEMIS_SHIFT               1                                         /**< Shift value for USB_MODEMIS */
#define _USB_GINTSTS_MODEMIS_MASK                0x2UL                                     /**< Bit mask for USB_MODEMIS */
#define _USB_GINTSTS_MODEMIS_DEFAULT             0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_MODEMIS_DEFAULT              (_USB_GINTSTS_MODEMIS_DEFAULT << 1)       /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_OTGINT                       (0x1UL << 2)                              /**< OTG Interrupt */
#define _USB_GINTSTS_OTGINT_SHIFT                2                                         /**< Shift value for USB_OTGINT */
#define _USB_GINTSTS_OTGINT_MASK                 0x4UL                                     /**< Bit mask for USB_OTGINT */
#define _USB_GINTSTS_OTGINT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_OTGINT_DEFAULT               (_USB_GINTSTS_OTGINT_DEFAULT << 2)        /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_SOF                          (0x1UL << 3)                              /**< Start of (micro)Frame */
#define _USB_GINTSTS_SOF_SHIFT                   3                                         /**< Shift value for USB_SOF */
#define _USB_GINTSTS_SOF_MASK                    0x8UL                                     /**< Bit mask for USB_SOF */
#define _USB_GINTSTS_SOF_DEFAULT                 0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_SOF_DEFAULT                  (_USB_GINTSTS_SOF_DEFAULT << 3)           /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_RXFLVL                       (0x1UL << 4)                              /**< RxFIFO Non-Empty */
#define _USB_GINTSTS_RXFLVL_SHIFT                4                                         /**< Shift value for USB_RXFLVL */
#define _USB_GINTSTS_RXFLVL_MASK                 0x10UL                                    /**< Bit mask for USB_RXFLVL */
#define _USB_GINTSTS_RXFLVL_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_RXFLVL_DEFAULT               (_USB_GINTSTS_RXFLVL_DEFAULT << 4)        /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_NPTXFEMP                     (0x1UL << 5)                              /**< Non-periodic TxFIFO Empty */
#define _USB_GINTSTS_NPTXFEMP_SHIFT              5                                         /**< Shift value for USB_NPTXFEMP */
#define _USB_GINTSTS_NPTXFEMP_MASK               0x20UL                                    /**< Bit mask for USB_NPTXFEMP */
#define _USB_GINTSTS_NPTXFEMP_DEFAULT            0x00000001UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_NPTXFEMP_DEFAULT             (_USB_GINTSTS_NPTXFEMP_DEFAULT << 5)      /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_GINNAKEFF                    (0x1UL << 6)                              /**< Global IN Non-periodic NAK Effective */
#define _USB_GINTSTS_GINNAKEFF_SHIFT             6                                         /**< Shift value for USB_GINNAKEFF */
#define _USB_GINTSTS_GINNAKEFF_MASK              0x40UL                                    /**< Bit mask for USB_GINNAKEFF */
#define _USB_GINTSTS_GINNAKEFF_DEFAULT           0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_GINNAKEFF_DEFAULT            (_USB_GINTSTS_GINNAKEFF_DEFAULT << 6)     /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_GOUTNAKEFF                   (0x1UL << 7)                              /**< Global OUT NAK Effective */
#define _USB_GINTSTS_GOUTNAKEFF_SHIFT            7                                         /**< Shift value for USB_GOUTNAKEFF */
#define _USB_GINTSTS_GOUTNAKEFF_MASK             0x80UL                                    /**< Bit mask for USB_GOUTNAKEFF */
#define _USB_GINTSTS_GOUTNAKEFF_DEFAULT          0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_GOUTNAKEFF_DEFAULT           (_USB_GINTSTS_GOUTNAKEFF_DEFAULT << 7)    /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_ERLYSUSP                     (0x1UL << 10)                             /**< Early Suspend */
#define _USB_GINTSTS_ERLYSUSP_SHIFT              10                                        /**< Shift value for USB_ERLYSUSP */
#define _USB_GINTSTS_ERLYSUSP_MASK               0x400UL                                   /**< Bit mask for USB_ERLYSUSP */
#define _USB_GINTSTS_ERLYSUSP_DEFAULT            0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_ERLYSUSP_DEFAULT             (_USB_GINTSTS_ERLYSUSP_DEFAULT << 10)     /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_USBSUSP                      (0x1UL << 11)                             /**< USB Suspend */
#define _USB_GINTSTS_USBSUSP_SHIFT               11                                        /**< Shift value for USB_USBSUSP */
#define _USB_GINTSTS_USBSUSP_MASK                0x800UL                                   /**< Bit mask for USB_USBSUSP */
#define _USB_GINTSTS_USBSUSP_DEFAULT             0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_USBSUSP_DEFAULT              (_USB_GINTSTS_USBSUSP_DEFAULT << 11)      /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_USBRST                       (0x1UL << 12)                             /**< USB Reset */
#define _USB_GINTSTS_USBRST_SHIFT                12                                        /**< Shift value for USB_USBRST */
#define _USB_GINTSTS_USBRST_MASK                 0x1000UL                                  /**< Bit mask for USB_USBRST */
#define _USB_GINTSTS_USBRST_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_USBRST_DEFAULT               (_USB_GINTSTS_USBRST_DEFAULT << 12)       /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_ENUMDONE                     (0x1UL << 13)                             /**< Enumeration Done */
#define _USB_GINTSTS_ENUMDONE_SHIFT              13                                        /**< Shift value for USB_ENUMDONE */
#define _USB_GINTSTS_ENUMDONE_MASK               0x2000UL                                  /**< Bit mask for USB_ENUMDONE */
#define _USB_GINTSTS_ENUMDONE_DEFAULT            0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_ENUMDONE_DEFAULT             (_USB_GINTSTS_ENUMDONE_DEFAULT << 13)     /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_ISOOUTDROP                   (0x1UL << 14)                             /**< Isochronous OUT Packet Dropped Interrupt */
#define _USB_GINTSTS_ISOOUTDROP_SHIFT            14                                        /**< Shift value for USB_ISOOUTDROP */
#define _USB_GINTSTS_ISOOUTDROP_MASK             0x4000UL                                  /**< Bit mask for USB_ISOOUTDROP */
#define _USB_GINTSTS_ISOOUTDROP_DEFAULT          0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_ISOOUTDROP_DEFAULT           (_USB_GINTSTS_ISOOUTDROP_DEFAULT << 14)   /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_EOPF                         (0x1UL << 15)                             /**< End of Periodic Frame Interrupt */
#define _USB_GINTSTS_EOPF_SHIFT                  15                                        /**< Shift value for USB_EOPF */
#define _USB_GINTSTS_EOPF_MASK                   0x8000UL                                  /**< Bit mask for USB_EOPF */
#define _USB_GINTSTS_EOPF_DEFAULT                0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_EOPF_DEFAULT                 (_USB_GINTSTS_EOPF_DEFAULT << 15)         /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_IEPINT                       (0x1UL << 18)                             /**< IN Endpoints Interrupt */
#define _USB_GINTSTS_IEPINT_SHIFT                18                                        /**< Shift value for USB_IEPINT */
#define _USB_GINTSTS_IEPINT_MASK                 0x40000UL                                 /**< Bit mask for USB_IEPINT */
#define _USB_GINTSTS_IEPINT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_IEPINT_DEFAULT               (_USB_GINTSTS_IEPINT_DEFAULT << 18)       /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_OEPINT                       (0x1UL << 19)                             /**< OUT Endpoints Interrupt */
#define _USB_GINTSTS_OEPINT_SHIFT                19                                        /**< Shift value for USB_OEPINT */
#define _USB_GINTSTS_OEPINT_MASK                 0x80000UL                                 /**< Bit mask for USB_OEPINT */
#define _USB_GINTSTS_OEPINT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_OEPINT_DEFAULT               (_USB_GINTSTS_OEPINT_DEFAULT << 19)       /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_INCOMPISOIN                  (0x1UL << 20)                             /**< Incomplete Isochronous IN Transfer */
#define _USB_GINTSTS_INCOMPISOIN_SHIFT           20                                        /**< Shift value for USB_INCOMPISOIN */
#define _USB_GINTSTS_INCOMPISOIN_MASK            0x100000UL                                /**< Bit mask for USB_INCOMPISOIN */
#define _USB_GINTSTS_INCOMPISOIN_DEFAULT         0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_INCOMPISOIN_DEFAULT          (_USB_GINTSTS_INCOMPISOIN_DEFAULT << 20)  /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_INCOMPLP                     (0x1UL << 21)                             /**< Incomplete Periodic Transfer */
#define _USB_GINTSTS_INCOMPLP_SHIFT              21                                        /**< Shift value for USB_INCOMPLP */
#define _USB_GINTSTS_INCOMPLP_MASK               0x200000UL                                /**< Bit mask for USB_INCOMPLP */
#define _USB_GINTSTS_INCOMPLP_DEFAULT            0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_INCOMPLP_DEFAULT             (_USB_GINTSTS_INCOMPLP_DEFAULT << 21)     /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_FETSUSP                      (0x1UL << 22)                             /**< Data Fetch Suspended */
#define _USB_GINTSTS_FETSUSP_SHIFT               22                                        /**< Shift value for USB_FETSUSP */
#define _USB_GINTSTS_FETSUSP_MASK                0x400000UL                                /**< Bit mask for USB_FETSUSP */
#define _USB_GINTSTS_FETSUSP_DEFAULT             0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_FETSUSP_DEFAULT              (_USB_GINTSTS_FETSUSP_DEFAULT << 22)      /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_RESETDET                     (0x1UL << 23)                             /**< Reset detected Interrupt */
#define _USB_GINTSTS_RESETDET_SHIFT              23                                        /**< Shift value for USB_RESETDET */
#define _USB_GINTSTS_RESETDET_MASK               0x800000UL                                /**< Bit mask for USB_RESETDET */
#define _USB_GINTSTS_RESETDET_DEFAULT            0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_RESETDET_DEFAULT             (_USB_GINTSTS_RESETDET_DEFAULT << 23)     /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_PRTINT                       (0x1UL << 24)                             /**< Host Port Interrupt */
#define _USB_GINTSTS_PRTINT_SHIFT                24                                        /**< Shift value for USB_PRTINT */
#define _USB_GINTSTS_PRTINT_MASK                 0x1000000UL                               /**< Bit mask for USB_PRTINT */
#define _USB_GINTSTS_PRTINT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_PRTINT_DEFAULT               (_USB_GINTSTS_PRTINT_DEFAULT << 24)       /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_HCHINT                       (0x1UL << 25)                             /**< Host Channels Interrupt */
#define _USB_GINTSTS_HCHINT_SHIFT                25                                        /**< Shift value for USB_HCHINT */
#define _USB_GINTSTS_HCHINT_MASK                 0x2000000UL                               /**< Bit mask for USB_HCHINT */
#define _USB_GINTSTS_HCHINT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_HCHINT_DEFAULT               (_USB_GINTSTS_HCHINT_DEFAULT << 25)       /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_PTXFEMP                      (0x1UL << 26)                             /**< Periodic TxFIFO Empty */
#define _USB_GINTSTS_PTXFEMP_SHIFT               26                                        /**< Shift value for USB_PTXFEMP */
#define _USB_GINTSTS_PTXFEMP_MASK                0x4000000UL                               /**< Bit mask for USB_PTXFEMP */
#define _USB_GINTSTS_PTXFEMP_DEFAULT             0x00000001UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_PTXFEMP_DEFAULT              (_USB_GINTSTS_PTXFEMP_DEFAULT << 26)      /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_CONIDSTSCHNG                 (0x1UL << 28)                             /**< Connector ID Status Change */
#define _USB_GINTSTS_CONIDSTSCHNG_SHIFT          28                                        /**< Shift value for USB_CONIDSTSCHNG */
#define _USB_GINTSTS_CONIDSTSCHNG_MASK           0x10000000UL                              /**< Bit mask for USB_CONIDSTSCHNG */
#define _USB_GINTSTS_CONIDSTSCHNG_DEFAULT        0x00000001UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_CONIDSTSCHNG_DEFAULT         (_USB_GINTSTS_CONIDSTSCHNG_DEFAULT << 28) /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_DISCONNINT                   (0x1UL << 29)                             /**< Disconnect Detected Interrupt */
#define _USB_GINTSTS_DISCONNINT_SHIFT            29                                        /**< Shift value for USB_DISCONNINT */
#define _USB_GINTSTS_DISCONNINT_MASK             0x20000000UL                              /**< Bit mask for USB_DISCONNINT */
#define _USB_GINTSTS_DISCONNINT_DEFAULT          0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_DISCONNINT_DEFAULT           (_USB_GINTSTS_DISCONNINT_DEFAULT << 29)   /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_SESSREQINT                   (0x1UL << 30)                             /**< Session Request/New Session Detected Interrupt */
#define _USB_GINTSTS_SESSREQINT_SHIFT            30                                        /**< Shift value for USB_SESSREQINT */
#define _USB_GINTSTS_SESSREQINT_MASK             0x40000000UL                              /**< Bit mask for USB_SESSREQINT */
#define _USB_GINTSTS_SESSREQINT_DEFAULT          0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_SESSREQINT_DEFAULT           (_USB_GINTSTS_SESSREQINT_DEFAULT << 30)   /**< Shifted mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_WKUPINT                      (0x1UL << 31)                             /**< Resume/Remote Wakeup Detected Interrupt */
#define _USB_GINTSTS_WKUPINT_SHIFT               31                                        /**< Shift value for USB_WKUPINT */
#define _USB_GINTSTS_WKUPINT_MASK                0x80000000UL                              /**< Bit mask for USB_WKUPINT */
#define _USB_GINTSTS_WKUPINT_DEFAULT             0x00000000UL                              /**< Mode DEFAULT for USB_GINTSTS */
#define USB_GINTSTS_WKUPINT_DEFAULT              (_USB_GINTSTS_WKUPINT_DEFAULT << 31)      /**< Shifted mode DEFAULT for USB_GINTSTS */

/* Bit fields for USB GINTMSK */
#define _USB_GINTMSK_RESETVALUE                  0x00000000UL                                 /**< Default value for USB_GINTMSK */
#define _USB_GINTMSK_MASK                        0xF7FEFCFEUL                                 /**< Mask for USB_GINTMSK */
#define USB_GINTMSK_MODEMISMSK                   (0x1UL << 1)                                 /**< Mode Mismatch Interrupt Mask */
#define _USB_GINTMSK_MODEMISMSK_SHIFT            1                                            /**< Shift value for USB_MODEMISMSK */
#define _USB_GINTMSK_MODEMISMSK_MASK             0x2UL                                        /**< Bit mask for USB_MODEMISMSK */
#define _USB_GINTMSK_MODEMISMSK_DEFAULT          0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_MODEMISMSK_DEFAULT           (_USB_GINTMSK_MODEMISMSK_DEFAULT << 1)       /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_OTGINTMSK                    (0x1UL << 2)                                 /**< OTG Interrupt Mask */
#define _USB_GINTMSK_OTGINTMSK_SHIFT             2                                            /**< Shift value for USB_OTGINTMSK */
#define _USB_GINTMSK_OTGINTMSK_MASK              0x4UL                                        /**< Bit mask for USB_OTGINTMSK */
#define _USB_GINTMSK_OTGINTMSK_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_OTGINTMSK_DEFAULT            (_USB_GINTMSK_OTGINTMSK_DEFAULT << 2)        /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_SOFMSK                       (0x1UL << 3)                                 /**< Start of (micro)Frame Mask */
#define _USB_GINTMSK_SOFMSK_SHIFT                3                                            /**< Shift value for USB_SOFMSK */
#define _USB_GINTMSK_SOFMSK_MASK                 0x8UL                                        /**< Bit mask for USB_SOFMSK */
#define _USB_GINTMSK_SOFMSK_DEFAULT              0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_SOFMSK_DEFAULT               (_USB_GINTMSK_SOFMSK_DEFAULT << 3)           /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_RXFLVLMSK                    (0x1UL << 4)                                 /**< Receive FIFO Non-Empty Mask */
#define _USB_GINTMSK_RXFLVLMSK_SHIFT             4                                            /**< Shift value for USB_RXFLVLMSK */
#define _USB_GINTMSK_RXFLVLMSK_MASK              0x10UL                                       /**< Bit mask for USB_RXFLVLMSK */
#define _USB_GINTMSK_RXFLVLMSK_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_RXFLVLMSK_DEFAULT            (_USB_GINTMSK_RXFLVLMSK_DEFAULT << 4)        /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_NPTXFEMPMSK                  (0x1UL << 5)                                 /**< Non-periodic TxFIFO Empty Mask */
#define _USB_GINTMSK_NPTXFEMPMSK_SHIFT           5                                            /**< Shift value for USB_NPTXFEMPMSK */
#define _USB_GINTMSK_NPTXFEMPMSK_MASK            0x20UL                                       /**< Bit mask for USB_NPTXFEMPMSK */
#define _USB_GINTMSK_NPTXFEMPMSK_DEFAULT         0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_NPTXFEMPMSK_DEFAULT          (_USB_GINTMSK_NPTXFEMPMSK_DEFAULT << 5)      /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_GINNAKEFFMSK                 (0x1UL << 6)                                 /**< Global Non-periodic IN NAK Effective Mask */
#define _USB_GINTMSK_GINNAKEFFMSK_SHIFT          6                                            /**< Shift value for USB_GINNAKEFFMSK */
#define _USB_GINTMSK_GINNAKEFFMSK_MASK           0x40UL                                       /**< Bit mask for USB_GINNAKEFFMSK */
#define _USB_GINTMSK_GINNAKEFFMSK_DEFAULT        0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_GINNAKEFFMSK_DEFAULT         (_USB_GINTMSK_GINNAKEFFMSK_DEFAULT << 6)     /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_GOUTNAKEFFMSK                (0x1UL << 7)                                 /**< Global OUT NAK Effective Mask */
#define _USB_GINTMSK_GOUTNAKEFFMSK_SHIFT         7                                            /**< Shift value for USB_GOUTNAKEFFMSK */
#define _USB_GINTMSK_GOUTNAKEFFMSK_MASK          0x80UL                                       /**< Bit mask for USB_GOUTNAKEFFMSK */
#define _USB_GINTMSK_GOUTNAKEFFMSK_DEFAULT       0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_GOUTNAKEFFMSK_DEFAULT        (_USB_GINTMSK_GOUTNAKEFFMSK_DEFAULT << 7)    /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_ERLYSUSPMSK                  (0x1UL << 10)                                /**< Early Suspend Mask */
#define _USB_GINTMSK_ERLYSUSPMSK_SHIFT           10                                           /**< Shift value for USB_ERLYSUSPMSK */
#define _USB_GINTMSK_ERLYSUSPMSK_MASK            0x400UL                                      /**< Bit mask for USB_ERLYSUSPMSK */
#define _USB_GINTMSK_ERLYSUSPMSK_DEFAULT         0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_ERLYSUSPMSK_DEFAULT          (_USB_GINTMSK_ERLYSUSPMSK_DEFAULT << 10)     /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_USBSUSPMSK                   (0x1UL << 11)                                /**< USB Suspend Mask */
#define _USB_GINTMSK_USBSUSPMSK_SHIFT            11                                           /**< Shift value for USB_USBSUSPMSK */
#define _USB_GINTMSK_USBSUSPMSK_MASK             0x800UL                                      /**< Bit mask for USB_USBSUSPMSK */
#define _USB_GINTMSK_USBSUSPMSK_DEFAULT          0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_USBSUSPMSK_DEFAULT           (_USB_GINTMSK_USBSUSPMSK_DEFAULT << 11)      /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_USBRSTMSK                    (0x1UL << 12)                                /**< USB Reset Mask */
#define _USB_GINTMSK_USBRSTMSK_SHIFT             12                                           /**< Shift value for USB_USBRSTMSK */
#define _USB_GINTMSK_USBRSTMSK_MASK              0x1000UL                                     /**< Bit mask for USB_USBRSTMSK */
#define _USB_GINTMSK_USBRSTMSK_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_USBRSTMSK_DEFAULT            (_USB_GINTMSK_USBRSTMSK_DEFAULT << 12)       /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_ENUMDONEMSK                  (0x1UL << 13)                                /**< Enumeration Done Mask */
#define _USB_GINTMSK_ENUMDONEMSK_SHIFT           13                                           /**< Shift value for USB_ENUMDONEMSK */
#define _USB_GINTMSK_ENUMDONEMSK_MASK            0x2000UL                                     /**< Bit mask for USB_ENUMDONEMSK */
#define _USB_GINTMSK_ENUMDONEMSK_DEFAULT         0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_ENUMDONEMSK_DEFAULT          (_USB_GINTMSK_ENUMDONEMSK_DEFAULT << 13)     /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_ISOOUTDROPMSK                (0x1UL << 14)                                /**< Isochronous OUT Packet Dropped Interrupt Mask */
#define _USB_GINTMSK_ISOOUTDROPMSK_SHIFT         14                                           /**< Shift value for USB_ISOOUTDROPMSK */
#define _USB_GINTMSK_ISOOUTDROPMSK_MASK          0x4000UL                                     /**< Bit mask for USB_ISOOUTDROPMSK */
#define _USB_GINTMSK_ISOOUTDROPMSK_DEFAULT       0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_ISOOUTDROPMSK_DEFAULT        (_USB_GINTMSK_ISOOUTDROPMSK_DEFAULT << 14)   /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_EOPFMSK                      (0x1UL << 15)                                /**< End of Periodic Frame Interrupt Mask */
#define _USB_GINTMSK_EOPFMSK_SHIFT               15                                           /**< Shift value for USB_EOPFMSK */
#define _USB_GINTMSK_EOPFMSK_MASK                0x8000UL                                     /**< Bit mask for USB_EOPFMSK */
#define _USB_GINTMSK_EOPFMSK_DEFAULT             0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_EOPFMSK_DEFAULT              (_USB_GINTMSK_EOPFMSK_DEFAULT << 15)         /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_EPMISMSK                     (0x1UL << 17)                                /**< Endpoint Mismatch Interrupt Mask */
#define _USB_GINTMSK_EPMISMSK_SHIFT              17                                           /**< Shift value for USB_EPMISMSK */
#define _USB_GINTMSK_EPMISMSK_MASK               0x20000UL                                    /**< Bit mask for USB_EPMISMSK */
#define _USB_GINTMSK_EPMISMSK_DEFAULT            0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_EPMISMSK_DEFAULT             (_USB_GINTMSK_EPMISMSK_DEFAULT << 17)        /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_IEPINTMSK                    (0x1UL << 18)                                /**< IN Endpoints Interrupt Mask */
#define _USB_GINTMSK_IEPINTMSK_SHIFT             18                                           /**< Shift value for USB_IEPINTMSK */
#define _USB_GINTMSK_IEPINTMSK_MASK              0x40000UL                                    /**< Bit mask for USB_IEPINTMSK */
#define _USB_GINTMSK_IEPINTMSK_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_IEPINTMSK_DEFAULT            (_USB_GINTMSK_IEPINTMSK_DEFAULT << 18)       /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_OEPINTMSK                    (0x1UL << 19)                                /**< OUT Endpoints Interrupt Mask */
#define _USB_GINTMSK_OEPINTMSK_SHIFT             19                                           /**< Shift value for USB_OEPINTMSK */
#define _USB_GINTMSK_OEPINTMSK_MASK              0x80000UL                                    /**< Bit mask for USB_OEPINTMSK */
#define _USB_GINTMSK_OEPINTMSK_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_OEPINTMSK_DEFAULT            (_USB_GINTMSK_OEPINTMSK_DEFAULT << 19)       /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_INCOMPISOINMSK               (0x1UL << 20)                                /**< Incomplete Isochronous IN Transfer Mask */
#define _USB_GINTMSK_INCOMPISOINMSK_SHIFT        20                                           /**< Shift value for USB_INCOMPISOINMSK */
#define _USB_GINTMSK_INCOMPISOINMSK_MASK         0x100000UL                                   /**< Bit mask for USB_INCOMPISOINMSK */
#define _USB_GINTMSK_INCOMPISOINMSK_DEFAULT      0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_INCOMPISOINMSK_DEFAULT       (_USB_GINTMSK_INCOMPISOINMSK_DEFAULT << 20)  /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_INCOMPLPMSK                  (0x1UL << 21)                                /**< Incomplete Periodic Transfer Mask */
#define _USB_GINTMSK_INCOMPLPMSK_SHIFT           21                                           /**< Shift value for USB_INCOMPLPMSK */
#define _USB_GINTMSK_INCOMPLPMSK_MASK            0x200000UL                                   /**< Bit mask for USB_INCOMPLPMSK */
#define _USB_GINTMSK_INCOMPLPMSK_DEFAULT         0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_INCOMPLPMSK_DEFAULT          (_USB_GINTMSK_INCOMPLPMSK_DEFAULT << 21)     /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_FETSUSPMSK                   (0x1UL << 22)                                /**< Data Fetch Suspended Mask */
#define _USB_GINTMSK_FETSUSPMSK_SHIFT            22                                           /**< Shift value for USB_FETSUSPMSK */
#define _USB_GINTMSK_FETSUSPMSK_MASK             0x400000UL                                   /**< Bit mask for USB_FETSUSPMSK */
#define _USB_GINTMSK_FETSUSPMSK_DEFAULT          0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_FETSUSPMSK_DEFAULT           (_USB_GINTMSK_FETSUSPMSK_DEFAULT << 22)      /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_RESETDETMSK                  (0x1UL << 23)                                /**< Reset detected Interrupt Mask */
#define _USB_GINTMSK_RESETDETMSK_SHIFT           23                                           /**< Shift value for USB_RESETDETMSK */
#define _USB_GINTMSK_RESETDETMSK_MASK            0x800000UL                                   /**< Bit mask for USB_RESETDETMSK */
#define _USB_GINTMSK_RESETDETMSK_DEFAULT         0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_RESETDETMSK_DEFAULT          (_USB_GINTMSK_RESETDETMSK_DEFAULT << 23)     /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_PRTINTMSK                    (0x1UL << 24)                                /**< Host Port Interrupt Mask */
#define _USB_GINTMSK_PRTINTMSK_SHIFT             24                                           /**< Shift value for USB_PRTINTMSK */
#define _USB_GINTMSK_PRTINTMSK_MASK              0x1000000UL                                  /**< Bit mask for USB_PRTINTMSK */
#define _USB_GINTMSK_PRTINTMSK_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_PRTINTMSK_DEFAULT            (_USB_GINTMSK_PRTINTMSK_DEFAULT << 24)       /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_HCHINTMSK                    (0x1UL << 25)                                /**< Host Channels Interrupt Mask */
#define _USB_GINTMSK_HCHINTMSK_SHIFT             25                                           /**< Shift value for USB_HCHINTMSK */
#define _USB_GINTMSK_HCHINTMSK_MASK              0x2000000UL                                  /**< Bit mask for USB_HCHINTMSK */
#define _USB_GINTMSK_HCHINTMSK_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_HCHINTMSK_DEFAULT            (_USB_GINTMSK_HCHINTMSK_DEFAULT << 25)       /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_PTXFEMPMSK                   (0x1UL << 26)                                /**< Periodic TxFIFO Empty Mask */
#define _USB_GINTMSK_PTXFEMPMSK_SHIFT            26                                           /**< Shift value for USB_PTXFEMPMSK */
#define _USB_GINTMSK_PTXFEMPMSK_MASK             0x4000000UL                                  /**< Bit mask for USB_PTXFEMPMSK */
#define _USB_GINTMSK_PTXFEMPMSK_DEFAULT          0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_PTXFEMPMSK_DEFAULT           (_USB_GINTMSK_PTXFEMPMSK_DEFAULT << 26)      /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_CONIDSTSCHNGMSK              (0x1UL << 28)                                /**< Connector ID Status Change Mask */
#define _USB_GINTMSK_CONIDSTSCHNGMSK_SHIFT       28                                           /**< Shift value for USB_CONIDSTSCHNGMSK */
#define _USB_GINTMSK_CONIDSTSCHNGMSK_MASK        0x10000000UL                                 /**< Bit mask for USB_CONIDSTSCHNGMSK */
#define _USB_GINTMSK_CONIDSTSCHNGMSK_DEFAULT     0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_CONIDSTSCHNGMSK_DEFAULT      (_USB_GINTMSK_CONIDSTSCHNGMSK_DEFAULT << 28) /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_DISCONNINTMSK                (0x1UL << 29)                                /**< Disconnect Detected Interrupt Mask */
#define _USB_GINTMSK_DISCONNINTMSK_SHIFT         29                                           /**< Shift value for USB_DISCONNINTMSK */
#define _USB_GINTMSK_DISCONNINTMSK_MASK          0x20000000UL                                 /**< Bit mask for USB_DISCONNINTMSK */
#define _USB_GINTMSK_DISCONNINTMSK_DEFAULT       0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_DISCONNINTMSK_DEFAULT        (_USB_GINTMSK_DISCONNINTMSK_DEFAULT << 29)   /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_SESSREQINTMSK                (0x1UL << 30)                                /**< Session Request/New Session Detected Interrupt Mask */
#define _USB_GINTMSK_SESSREQINTMSK_SHIFT         30                                           /**< Shift value for USB_SESSREQINTMSK */
#define _USB_GINTMSK_SESSREQINTMSK_MASK          0x40000000UL                                 /**< Bit mask for USB_SESSREQINTMSK */
#define _USB_GINTMSK_SESSREQINTMSK_DEFAULT       0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_SESSREQINTMSK_DEFAULT        (_USB_GINTMSK_SESSREQINTMSK_DEFAULT << 30)   /**< Shifted mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_WKUPINTMSK                   (0x1UL << 31)                                /**< Resume/Remote Wakeup Detected Interrupt Mask The WakeUp bit is used for LPM state wake up in a way similar to that of wake up in suspend state. */
#define _USB_GINTMSK_WKUPINTMSK_SHIFT            31                                           /**< Shift value for USB_WKUPINTMSK */
#define _USB_GINTMSK_WKUPINTMSK_MASK             0x80000000UL                                 /**< Bit mask for USB_WKUPINTMSK */
#define _USB_GINTMSK_WKUPINTMSK_DEFAULT          0x00000000UL                                 /**< Mode DEFAULT for USB_GINTMSK */
#define USB_GINTMSK_WKUPINTMSK_DEFAULT           (_USB_GINTMSK_WKUPINTMSK_DEFAULT << 31)      /**< Shifted mode DEFAULT for USB_GINTMSK */

/* Bit fields for USB GRXSTSR */
#define _USB_GRXSTSR_RESETVALUE                  0x00000000UL                        /**< Default value for USB_GRXSTSR */
#define _USB_GRXSTSR_MASK                        0x01FFFFFFUL                        /**< Mask for USB_GRXSTSR */
#define _USB_GRXSTSR_CHNUM_SHIFT                 0                                   /**< Shift value for USB_CHNUM */
#define _USB_GRXSTSR_CHNUM_MASK                  0xFUL                               /**< Bit mask for USB_CHNUM */
#define _USB_GRXSTSR_CHNUM_DEFAULT               0x00000000UL                        /**< Mode DEFAULT for USB_GRXSTSR */
#define USB_GRXSTSR_CHNUM_DEFAULT                (_USB_GRXSTSR_CHNUM_DEFAULT << 0)   /**< Shifted mode DEFAULT for USB_GRXSTSR */
#define _USB_GRXSTSR_BCNT_SHIFT                  4                                   /**< Shift value for USB_BCNT */
#define _USB_GRXSTSR_BCNT_MASK                   0x7FF0UL                            /**< Bit mask for USB_BCNT */
#define _USB_GRXSTSR_BCNT_DEFAULT                0x00000000UL                        /**< Mode DEFAULT for USB_GRXSTSR */
#define USB_GRXSTSR_BCNT_DEFAULT                 (_USB_GRXSTSR_BCNT_DEFAULT << 4)    /**< Shifted mode DEFAULT for USB_GRXSTSR */
#define _USB_GRXSTSR_DPID_SHIFT                  15                                  /**< Shift value for USB_DPID */
#define _USB_GRXSTSR_DPID_MASK                   0x18000UL                           /**< Bit mask for USB_DPID */
#define _USB_GRXSTSR_DPID_DEFAULT                0x00000000UL                        /**< Mode DEFAULT for USB_GRXSTSR */
#define USB_GRXSTSR_DPID_DEFAULT                 (_USB_GRXSTSR_DPID_DEFAULT << 15)   /**< Shifted mode DEFAULT for USB_GRXSTSR */
#define _USB_GRXSTSR_PKTSTS_SHIFT                17                                  /**< Shift value for USB_PKTSTS */
#define _USB_GRXSTSR_PKTSTS_MASK                 0x1E0000UL                          /**< Bit mask for USB_PKTSTS */
#define _USB_GRXSTSR_PKTSTS_DEFAULT              0x00000000UL                        /**< Mode DEFAULT for USB_GRXSTSR */
#define USB_GRXSTSR_PKTSTS_DEFAULT               (_USB_GRXSTSR_PKTSTS_DEFAULT << 17) /**< Shifted mode DEFAULT for USB_GRXSTSR */
#define _USB_GRXSTSR_FN_SHIFT                    21                                  /**< Shift value for USB_FN */
#define _USB_GRXSTSR_FN_MASK                     0x1E00000UL                         /**< Bit mask for USB_FN */
#define _USB_GRXSTSR_FN_DEFAULT                  0x00000000UL                        /**< Mode DEFAULT for USB_GRXSTSR */
#define USB_GRXSTSR_FN_DEFAULT                   (_USB_GRXSTSR_FN_DEFAULT << 21)     /**< Shifted mode DEFAULT for USB_GRXSTSR */

/* Bit fields for USB GRXSTSP */
#define _USB_GRXSTSP_RESETVALUE                  0x00000000UL                        /**< Default value for USB_GRXSTSP */
#define _USB_GRXSTSP_MASK                        0x01FFFFFFUL                        /**< Mask for USB_GRXSTSP */
#define _USB_GRXSTSP_CHNUM_SHIFT                 0                                   /**< Shift value for USB_CHNUM */
#define _USB_GRXSTSP_CHNUM_MASK                  0xFUL                               /**< Bit mask for USB_CHNUM */
#define _USB_GRXSTSP_CHNUM_DEFAULT               0x00000000UL                        /**< Mode DEFAULT for USB_GRXSTSP */
#define USB_GRXSTSP_CHNUM_DEFAULT                (_USB_GRXSTSP_CHNUM_DEFAULT << 0)   /**< Shifted mode DEFAULT for USB_GRXSTSP */
#define _USB_GRXSTSP_BCNT_SHIFT                  4                                   /**< Shift value for USB_BCNT */
#define _USB_GRXSTSP_BCNT_MASK                   0x7FF0UL                            /**< Bit mask for USB_BCNT */
#define _USB_GRXSTSP_BCNT_DEFAULT                0x00000000UL                        /**< Mode DEFAULT for USB_GRXSTSP */
#define USB_GRXSTSP_BCNT_DEFAULT                 (_USB_GRXSTSP_BCNT_DEFAULT << 4)    /**< Shifted mode DEFAULT for USB_GRXSTSP */
#define _USB_GRXSTSP_DPID_SHIFT                  15                                  /**< Shift value for USB_DPID */
#define _USB_GRXSTSP_DPID_MASK                   0x18000UL                           /**< Bit mask for USB_DPID */
#define _USB_GRXSTSP_DPID_DEFAULT                0x00000000UL                        /**< Mode DEFAULT for USB_GRXSTSP */
#define USB_GRXSTSP_DPID_DEFAULT                 (_USB_GRXSTSP_DPID_DEFAULT << 15)   /**< Shifted mode DEFAULT for USB_GRXSTSP */
#define _USB_GRXSTSP_PKTSTS_SHIFT                17                                  /**< Shift value for USB_PKTSTS */
#define _USB_GRXSTSP_PKTSTS_MASK                 0x1E0000UL                          /**< Bit mask for USB_PKTSTS */
#define _USB_GRXSTSP_PKTSTS_DEFAULT              0x00000000UL                        /**< Mode DEFAULT for USB_GRXSTSP */
#define USB_GRXSTSP_PKTSTS_DEFAULT               (_USB_GRXSTSP_PKTSTS_DEFAULT << 17) /**< Shifted mode DEFAULT for USB_GRXSTSP */
#define _USB_GRXSTSP_FN_SHIFT                    21                                  /**< Shift value for USB_FN */
#define _USB_GRXSTSP_FN_MASK                     0x1E00000UL                         /**< Bit mask for USB_FN */
#define _USB_GRXSTSP_FN_DEFAULT                  0x00000000UL                        /**< Mode DEFAULT for USB_GRXSTSP */
#define USB_GRXSTSP_FN_DEFAULT                   (_USB_GRXSTSP_FN_DEFAULT << 21)     /**< Shifted mode DEFAULT for USB_GRXSTSP */

/* Bit fields for USB GRXFSIZ */
#define _USB_GRXFSIZ_RESETVALUE                  0x00000200UL                       /**< Default value for USB_GRXFSIZ */
#define _USB_GRXFSIZ_MASK                        0x000003FFUL                       /**< Mask for USB_GRXFSIZ */
#define _USB_GRXFSIZ_RXFDEP_SHIFT                0                                  /**< Shift value for USB_RXFDEP */
#define _USB_GRXFSIZ_RXFDEP_MASK                 0x3FFUL                            /**< Bit mask for USB_RXFDEP */
#define _USB_GRXFSIZ_RXFDEP_DEFAULT              0x00000200UL                       /**< Mode DEFAULT for USB_GRXFSIZ */
#define USB_GRXFSIZ_RXFDEP_DEFAULT               (_USB_GRXFSIZ_RXFDEP_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_GRXFSIZ */

/* Bit fields for USB GNPTXFSIZ */
#define _USB_GNPTXFSIZ_RESETVALUE                0x02000200UL                              /**< Default value for USB_GNPTXFSIZ */
#define _USB_GNPTXFSIZ_MASK                      0xFFFFFFFFUL                              /**< Mask for USB_GNPTXFSIZ */
#define _USB_GNPTXFSIZ_NPTXFSTADDR_SHIFT         0                                         /**< Shift value for USB_NPTXFSTADDR */
#define _USB_GNPTXFSIZ_NPTXFSTADDR_MASK          0xFFFFUL                                  /**< Bit mask for USB_NPTXFSTADDR */
#define _USB_GNPTXFSIZ_NPTXFSTADDR_DEFAULT       0x00000200UL                              /**< Mode DEFAULT for USB_GNPTXFSIZ */
#define USB_GNPTXFSIZ_NPTXFSTADDR_DEFAULT        (_USB_GNPTXFSIZ_NPTXFSTADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_GNPTXFSIZ */
#define _USB_GNPTXFSIZ_NPTXFDEP_SHIFT            16                                        /**< Shift value for USB_NPTXFDEP */
#define _USB_GNPTXFSIZ_NPTXFDEP_MASK             0xFFFF0000UL                              /**< Bit mask for USB_NPTXFDEP */
#define _USB_GNPTXFSIZ_NPTXFDEP_DEFAULT          0x00000200UL                              /**< Mode DEFAULT for USB_GNPTXFSIZ */
#define USB_GNPTXFSIZ_NPTXFDEP_DEFAULT           (_USB_GNPTXFSIZ_NPTXFDEP_DEFAULT << 16)   /**< Shifted mode DEFAULT for USB_GNPTXFSIZ */

/* Bit fields for USB GNPTXSTS */
#define _USB_GNPTXSTS_RESETVALUE                 0x00080200UL                                /**< Default value for USB_GNPTXSTS */
#define _USB_GNPTXSTS_MASK                       0x7FFFFFFFUL                                /**< Mask for USB_GNPTXSTS */
#define _USB_GNPTXSTS_NPTXFSPCAVAIL_SHIFT        0                                           /**< Shift value for USB_NPTXFSPCAVAIL */
#define _USB_GNPTXSTS_NPTXFSPCAVAIL_MASK         0xFFFFUL                                    /**< Bit mask for USB_NPTXFSPCAVAIL */
#define _USB_GNPTXSTS_NPTXFSPCAVAIL_DEFAULT      0x00000200UL                                /**< Mode DEFAULT for USB_GNPTXSTS */
#define USB_GNPTXSTS_NPTXFSPCAVAIL_DEFAULT       (_USB_GNPTXSTS_NPTXFSPCAVAIL_DEFAULT << 0)  /**< Shifted mode DEFAULT for USB_GNPTXSTS */
#define _USB_GNPTXSTS_NPTXQSPCAVAIL_SHIFT        16                                          /**< Shift value for USB_NPTXQSPCAVAIL */
#define _USB_GNPTXSTS_NPTXQSPCAVAIL_MASK         0xFF0000UL                                  /**< Bit mask for USB_NPTXQSPCAVAIL */
#define _USB_GNPTXSTS_NPTXQSPCAVAIL_DEFAULT      0x00000008UL                                /**< Mode DEFAULT for USB_GNPTXSTS */
#define USB_GNPTXSTS_NPTXQSPCAVAIL_DEFAULT       (_USB_GNPTXSTS_NPTXQSPCAVAIL_DEFAULT << 16) /**< Shifted mode DEFAULT for USB_GNPTXSTS */
#define _USB_GNPTXSTS_NPTXQTOP_SHIFT             24                                          /**< Shift value for USB_NPTXQTOP */
#define _USB_GNPTXSTS_NPTXQTOP_MASK              0x7F000000UL                                /**< Bit mask for USB_NPTXQTOP */
#define _USB_GNPTXSTS_NPTXQTOP_DEFAULT           0x00000000UL                                /**< Mode DEFAULT for USB_GNPTXSTS */
#define USB_GNPTXSTS_NPTXQTOP_DEFAULT            (_USB_GNPTXSTS_NPTXQTOP_DEFAULT << 24)      /**< Shifted mode DEFAULT for USB_GNPTXSTS */

/* Bit fields for USB GSNPSID */
#define _USB_GSNPSID_RESETVALUE                  0x4F54330AUL                           /**< Default value for USB_GSNPSID */
#define _USB_GSNPSID_MASK                        0xFFFFFFFFUL                           /**< Mask for USB_GSNPSID */
#define _USB_GSNPSID_SYNOPSYSID_SHIFT            0                                      /**< Shift value for USB_SYNOPSYSID */
#define _USB_GSNPSID_SYNOPSYSID_MASK             0xFFFFFFFFUL                           /**< Bit mask for USB_SYNOPSYSID */
#define _USB_GSNPSID_SYNOPSYSID_DEFAULT          0x4F54330AUL                           /**< Mode DEFAULT for USB_GSNPSID */
#define USB_GSNPSID_SYNOPSYSID_DEFAULT           (_USB_GSNPSID_SYNOPSYSID_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_GSNPSID */

/* Bit fields for USB GDFIFOCFG */
#define _USB_GDFIFOCFG_RESETVALUE                0x01F20200UL                                  /**< Default value for USB_GDFIFOCFG */
#define _USB_GDFIFOCFG_MASK                      0xFFFFFFFFUL                                  /**< Mask for USB_GDFIFOCFG */
#define _USB_GDFIFOCFG_GDFIFOCFG_SHIFT           0                                             /**< Shift value for USB_GDFIFOCFG */
#define _USB_GDFIFOCFG_GDFIFOCFG_MASK            0xFFFFUL                                      /**< Bit mask for USB_GDFIFOCFG */
#define _USB_GDFIFOCFG_GDFIFOCFG_DEFAULT         0x00000200UL                                  /**< Mode DEFAULT for USB_GDFIFOCFG */
#define USB_GDFIFOCFG_GDFIFOCFG_DEFAULT          (_USB_GDFIFOCFG_GDFIFOCFG_DEFAULT << 0)       /**< Shifted mode DEFAULT for USB_GDFIFOCFG */
#define _USB_GDFIFOCFG_EPINFOBASEADDR_SHIFT      16                                            /**< Shift value for USB_EPINFOBASEADDR */
#define _USB_GDFIFOCFG_EPINFOBASEADDR_MASK       0xFFFF0000UL                                  /**< Bit mask for USB_EPINFOBASEADDR */
#define _USB_GDFIFOCFG_EPINFOBASEADDR_DEFAULT    0x000001F2UL                                  /**< Mode DEFAULT for USB_GDFIFOCFG */
#define USB_GDFIFOCFG_EPINFOBASEADDR_DEFAULT     (_USB_GDFIFOCFG_EPINFOBASEADDR_DEFAULT << 16) /**< Shifted mode DEFAULT for USB_GDFIFOCFG */

/* Bit fields for USB HPTXFSIZ */
#define _USB_HPTXFSIZ_RESETVALUE                 0x02000400UL                            /**< Default value for USB_HPTXFSIZ */
#define _USB_HPTXFSIZ_MASK                       0x03FF07FFUL                            /**< Mask for USB_HPTXFSIZ */
#define _USB_HPTXFSIZ_PTXFSTADDR_SHIFT           0                                       /**< Shift value for USB_PTXFSTADDR */
#define _USB_HPTXFSIZ_PTXFSTADDR_MASK            0x7FFUL                                 /**< Bit mask for USB_PTXFSTADDR */
#define _USB_HPTXFSIZ_PTXFSTADDR_DEFAULT         0x00000400UL                            /**< Mode DEFAULT for USB_HPTXFSIZ */
#define USB_HPTXFSIZ_PTXFSTADDR_DEFAULT          (_USB_HPTXFSIZ_PTXFSTADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_HPTXFSIZ */
#define _USB_HPTXFSIZ_PTXFSIZE_SHIFT             16                                      /**< Shift value for USB_PTXFSIZE */
#define _USB_HPTXFSIZ_PTXFSIZE_MASK              0x3FF0000UL                             /**< Bit mask for USB_PTXFSIZE */
#define _USB_HPTXFSIZ_PTXFSIZE_DEFAULT           0x00000200UL                            /**< Mode DEFAULT for USB_HPTXFSIZ */
#define USB_HPTXFSIZ_PTXFSIZE_DEFAULT            (_USB_HPTXFSIZ_PTXFSIZE_DEFAULT << 16)  /**< Shifted mode DEFAULT for USB_HPTXFSIZ */

/* Bit fields for USB DIEPTXF1 */
#define _USB_DIEPTXF1_RESETVALUE                 0x02000400UL                                /**< Default value for USB_DIEPTXF1 */
#define _USB_DIEPTXF1_MASK                       0x03FF07FFUL                                /**< Mask for USB_DIEPTXF1 */
#define _USB_DIEPTXF1_INEPNTXFSTADDR_SHIFT       0                                           /**< Shift value for USB_INEPNTXFSTADDR */
#define _USB_DIEPTXF1_INEPNTXFSTADDR_MASK        0x7FFUL                                     /**< Bit mask for USB_INEPNTXFSTADDR */
#define _USB_DIEPTXF1_INEPNTXFSTADDR_DEFAULT     0x00000400UL                                /**< Mode DEFAULT for USB_DIEPTXF1 */
#define USB_DIEPTXF1_INEPNTXFSTADDR_DEFAULT      (_USB_DIEPTXF1_INEPNTXFSTADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DIEPTXF1 */
#define _USB_DIEPTXF1_INEPNTXFDEP_SHIFT          16                                          /**< Shift value for USB_INEPNTXFDEP */
#define _USB_DIEPTXF1_INEPNTXFDEP_MASK           0x3FF0000UL                                 /**< Bit mask for USB_INEPNTXFDEP */
#define _USB_DIEPTXF1_INEPNTXFDEP_DEFAULT        0x00000200UL                                /**< Mode DEFAULT for USB_DIEPTXF1 */
#define USB_DIEPTXF1_INEPNTXFDEP_DEFAULT         (_USB_DIEPTXF1_INEPNTXFDEP_DEFAULT << 16)   /**< Shifted mode DEFAULT for USB_DIEPTXF1 */

/* Bit fields for USB DIEPTXF2 */
#define _USB_DIEPTXF2_RESETVALUE                 0x02000600UL                                /**< Default value for USB_DIEPTXF2 */
#define _USB_DIEPTXF2_MASK                       0x03FF07FFUL                                /**< Mask for USB_DIEPTXF2 */
#define _USB_DIEPTXF2_INEPNTXFSTADDR_SHIFT       0                                           /**< Shift value for USB_INEPNTXFSTADDR */
#define _USB_DIEPTXF2_INEPNTXFSTADDR_MASK        0x7FFUL                                     /**< Bit mask for USB_INEPNTXFSTADDR */
#define _USB_DIEPTXF2_INEPNTXFSTADDR_DEFAULT     0x00000600UL                                /**< Mode DEFAULT for USB_DIEPTXF2 */
#define USB_DIEPTXF2_INEPNTXFSTADDR_DEFAULT      (_USB_DIEPTXF2_INEPNTXFSTADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DIEPTXF2 */
#define _USB_DIEPTXF2_INEPNTXFDEP_SHIFT          16                                          /**< Shift value for USB_INEPNTXFDEP */
#define _USB_DIEPTXF2_INEPNTXFDEP_MASK           0x3FF0000UL                                 /**< Bit mask for USB_INEPNTXFDEP */
#define _USB_DIEPTXF2_INEPNTXFDEP_DEFAULT        0x00000200UL                                /**< Mode DEFAULT for USB_DIEPTXF2 */
#define USB_DIEPTXF2_INEPNTXFDEP_DEFAULT         (_USB_DIEPTXF2_INEPNTXFDEP_DEFAULT << 16)   /**< Shifted mode DEFAULT for USB_DIEPTXF2 */

/* Bit fields for USB DIEPTXF3 */
#define _USB_DIEPTXF3_RESETVALUE                 0x02000800UL                                /**< Default value for USB_DIEPTXF3 */
#define _USB_DIEPTXF3_MASK                       0x03FF0FFFUL                                /**< Mask for USB_DIEPTXF3 */
#define _USB_DIEPTXF3_INEPNTXFSTADDR_SHIFT       0                                           /**< Shift value for USB_INEPNTXFSTADDR */
#define _USB_DIEPTXF3_INEPNTXFSTADDR_MASK        0xFFFUL                                     /**< Bit mask for USB_INEPNTXFSTADDR */
#define _USB_DIEPTXF3_INEPNTXFSTADDR_DEFAULT     0x00000800UL                                /**< Mode DEFAULT for USB_DIEPTXF3 */
#define USB_DIEPTXF3_INEPNTXFSTADDR_DEFAULT      (_USB_DIEPTXF3_INEPNTXFSTADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DIEPTXF3 */
#define _USB_DIEPTXF3_INEPNTXFDEP_SHIFT          16                                          /**< Shift value for USB_INEPNTXFDEP */
#define _USB_DIEPTXF3_INEPNTXFDEP_MASK           0x3FF0000UL                                 /**< Bit mask for USB_INEPNTXFDEP */
#define _USB_DIEPTXF3_INEPNTXFDEP_DEFAULT        0x00000200UL                                /**< Mode DEFAULT for USB_DIEPTXF3 */
#define USB_DIEPTXF3_INEPNTXFDEP_DEFAULT         (_USB_DIEPTXF3_INEPNTXFDEP_DEFAULT << 16)   /**< Shifted mode DEFAULT for USB_DIEPTXF3 */

/* Bit fields for USB DIEPTXF4 */
#define _USB_DIEPTXF4_RESETVALUE                 0x02000A00UL                                /**< Default value for USB_DIEPTXF4 */
#define _USB_DIEPTXF4_MASK                       0x03FF0FFFUL                                /**< Mask for USB_DIEPTXF4 */
#define _USB_DIEPTXF4_INEPNTXFSTADDR_SHIFT       0                                           /**< Shift value for USB_INEPNTXFSTADDR */
#define _USB_DIEPTXF4_INEPNTXFSTADDR_MASK        0xFFFUL                                     /**< Bit mask for USB_INEPNTXFSTADDR */
#define _USB_DIEPTXF4_INEPNTXFSTADDR_DEFAULT     0x00000A00UL                                /**< Mode DEFAULT for USB_DIEPTXF4 */
#define USB_DIEPTXF4_INEPNTXFSTADDR_DEFAULT      (_USB_DIEPTXF4_INEPNTXFSTADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DIEPTXF4 */
#define _USB_DIEPTXF4_INEPNTXFDEP_SHIFT          16                                          /**< Shift value for USB_INEPNTXFDEP */
#define _USB_DIEPTXF4_INEPNTXFDEP_MASK           0x3FF0000UL                                 /**< Bit mask for USB_INEPNTXFDEP */
#define _USB_DIEPTXF4_INEPNTXFDEP_DEFAULT        0x00000200UL                                /**< Mode DEFAULT for USB_DIEPTXF4 */
#define USB_DIEPTXF4_INEPNTXFDEP_DEFAULT         (_USB_DIEPTXF4_INEPNTXFDEP_DEFAULT << 16)   /**< Shifted mode DEFAULT for USB_DIEPTXF4 */

/* Bit fields for USB DIEPTXF5 */
#define _USB_DIEPTXF5_RESETVALUE                 0x02000C00UL                                /**< Default value for USB_DIEPTXF5 */
#define _USB_DIEPTXF5_MASK                       0x03FF0FFFUL                                /**< Mask for USB_DIEPTXF5 */
#define _USB_DIEPTXF5_INEPNTXFSTADDR_SHIFT       0                                           /**< Shift value for USB_INEPNTXFSTADDR */
#define _USB_DIEPTXF5_INEPNTXFSTADDR_MASK        0xFFFUL                                     /**< Bit mask for USB_INEPNTXFSTADDR */
#define _USB_DIEPTXF5_INEPNTXFSTADDR_DEFAULT     0x00000C00UL                                /**< Mode DEFAULT for USB_DIEPTXF5 */
#define USB_DIEPTXF5_INEPNTXFSTADDR_DEFAULT      (_USB_DIEPTXF5_INEPNTXFSTADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DIEPTXF5 */
#define _USB_DIEPTXF5_INEPNTXFDEP_SHIFT          16                                          /**< Shift value for USB_INEPNTXFDEP */
#define _USB_DIEPTXF5_INEPNTXFDEP_MASK           0x3FF0000UL                                 /**< Bit mask for USB_INEPNTXFDEP */
#define _USB_DIEPTXF5_INEPNTXFDEP_DEFAULT        0x00000200UL                                /**< Mode DEFAULT for USB_DIEPTXF5 */
#define USB_DIEPTXF5_INEPNTXFDEP_DEFAULT         (_USB_DIEPTXF5_INEPNTXFDEP_DEFAULT << 16)   /**< Shifted mode DEFAULT for USB_DIEPTXF5 */

/* Bit fields for USB DIEPTXF6 */
#define _USB_DIEPTXF6_RESETVALUE                 0x02000E00UL                                /**< Default value for USB_DIEPTXF6 */
#define _USB_DIEPTXF6_MASK                       0x03FF0FFFUL                                /**< Mask for USB_DIEPTXF6 */
#define _USB_DIEPTXF6_INEPNTXFSTADDR_SHIFT       0                                           /**< Shift value for USB_INEPNTXFSTADDR */
#define _USB_DIEPTXF6_INEPNTXFSTADDR_MASK        0xFFFUL                                     /**< Bit mask for USB_INEPNTXFSTADDR */
#define _USB_DIEPTXF6_INEPNTXFSTADDR_DEFAULT     0x00000E00UL                                /**< Mode DEFAULT for USB_DIEPTXF6 */
#define USB_DIEPTXF6_INEPNTXFSTADDR_DEFAULT      (_USB_DIEPTXF6_INEPNTXFSTADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DIEPTXF6 */
#define _USB_DIEPTXF6_INEPNTXFDEP_SHIFT          16                                          /**< Shift value for USB_INEPNTXFDEP */
#define _USB_DIEPTXF6_INEPNTXFDEP_MASK           0x3FF0000UL                                 /**< Bit mask for USB_INEPNTXFDEP */
#define _USB_DIEPTXF6_INEPNTXFDEP_DEFAULT        0x00000200UL                                /**< Mode DEFAULT for USB_DIEPTXF6 */
#define USB_DIEPTXF6_INEPNTXFDEP_DEFAULT         (_USB_DIEPTXF6_INEPNTXFDEP_DEFAULT << 16)   /**< Shifted mode DEFAULT for USB_DIEPTXF6 */

/* Bit fields for USB HCFG */
#define _USB_HCFG_RESETVALUE                     0x00000200UL                          /**< Default value for USB_HCFG */
#define _USB_HCFG_MASK                           0x8000FF87UL                          /**< Mask for USB_HCFG */
#define _USB_HCFG_FSLSPCLKSEL_SHIFT              0                                     /**< Shift value for USB_FSLSPCLKSEL */
#define _USB_HCFG_FSLSPCLKSEL_MASK               0x3UL                                 /**< Bit mask for USB_FSLSPCLKSEL */
#define _USB_HCFG_FSLSPCLKSEL_DEFAULT            0x00000000UL                          /**< Mode DEFAULT for USB_HCFG */
#define USB_HCFG_FSLSPCLKSEL_DEFAULT             (_USB_HCFG_FSLSPCLKSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for USB_HCFG */
#define USB_HCFG_FSLSSUPP                        (0x1UL << 2)                          /**< FS- and LS-Only Support */
#define _USB_HCFG_FSLSSUPP_SHIFT                 2                                     /**< Shift value for USB_FSLSSUPP */
#define _USB_HCFG_FSLSSUPP_MASK                  0x4UL                                 /**< Bit mask for USB_FSLSSUPP */
#define _USB_HCFG_FSLSSUPP_DEFAULT               0x00000000UL                          /**< Mode DEFAULT for USB_HCFG */
#define USB_HCFG_FSLSSUPP_DEFAULT                (_USB_HCFG_FSLSSUPP_DEFAULT << 2)     /**< Shifted mode DEFAULT for USB_HCFG */
#define USB_HCFG_ENA32KHZS                       (0x1UL << 7)                          /**< Enable 32 KHz Suspend mode */
#define _USB_HCFG_ENA32KHZS_SHIFT                7                                     /**< Shift value for USB_ENA32KHZS */
#define _USB_HCFG_ENA32KHZS_MASK                 0x80UL                                /**< Bit mask for USB_ENA32KHZS */
#define _USB_HCFG_ENA32KHZS_DEFAULT              0x00000000UL                          /**< Mode DEFAULT for USB_HCFG */
#define USB_HCFG_ENA32KHZS_DEFAULT               (_USB_HCFG_ENA32KHZS_DEFAULT << 7)    /**< Shifted mode DEFAULT for USB_HCFG */
#define _USB_HCFG_RESVALID_SHIFT                 8                                     /**< Shift value for USB_RESVALID */
#define _USB_HCFG_RESVALID_MASK                  0xFF00UL                              /**< Bit mask for USB_RESVALID */
#define _USB_HCFG_RESVALID_DEFAULT               0x00000002UL                          /**< Mode DEFAULT for USB_HCFG */
#define USB_HCFG_RESVALID_DEFAULT                (_USB_HCFG_RESVALID_DEFAULT << 8)     /**< Shifted mode DEFAULT for USB_HCFG */
#define USB_HCFG_MODECHTIMEN                     (0x1UL << 31)                         /**<  */
#define _USB_HCFG_MODECHTIMEN_SHIFT              31                                    /**< Shift value for USB_MODECHTIMEN */
#define _USB_HCFG_MODECHTIMEN_MASK               0x80000000UL                          /**< Bit mask for USB_MODECHTIMEN */
#define _USB_HCFG_MODECHTIMEN_DEFAULT            0x00000000UL                          /**< Mode DEFAULT for USB_HCFG */
#define USB_HCFG_MODECHTIMEN_DEFAULT             (_USB_HCFG_MODECHTIMEN_DEFAULT << 31) /**< Shifted mode DEFAULT for USB_HCFG */

/* Bit fields for USB HFIR */
#define _USB_HFIR_RESETVALUE                     0x0000EA60UL                          /**< Default value for USB_HFIR */
#define _USB_HFIR_MASK                           0x0001FFFFUL                          /**< Mask for USB_HFIR */
#define _USB_HFIR_FRINT_SHIFT                    0                                     /**< Shift value for USB_FRINT */
#define _USB_HFIR_FRINT_MASK                     0xFFFFUL                              /**< Bit mask for USB_FRINT */
#define _USB_HFIR_FRINT_DEFAULT                  0x0000EA60UL                          /**< Mode DEFAULT for USB_HFIR */
#define USB_HFIR_FRINT_DEFAULT                   (_USB_HFIR_FRINT_DEFAULT << 0)        /**< Shifted mode DEFAULT for USB_HFIR */
#define USB_HFIR_HFIRRLDCTRL                     (0x1UL << 16)                         /**< Reload Control */
#define _USB_HFIR_HFIRRLDCTRL_SHIFT              16                                    /**< Shift value for USB_HFIRRLDCTRL */
#define _USB_HFIR_HFIRRLDCTRL_MASK               0x10000UL                             /**< Bit mask for USB_HFIRRLDCTRL */
#define _USB_HFIR_HFIRRLDCTRL_DEFAULT            0x00000000UL                          /**< Mode DEFAULT for USB_HFIR */
#define USB_HFIR_HFIRRLDCTRL_DEFAULT             (_USB_HFIR_HFIRRLDCTRL_DEFAULT << 16) /**< Shifted mode DEFAULT for USB_HFIR */

/* Bit fields for USB HFNUM */
#define _USB_HFNUM_RESETVALUE                    0x00003FFFUL                     /**< Default value for USB_HFNUM */
#define _USB_HFNUM_MASK                          0xFFFFFFFFUL                     /**< Mask for USB_HFNUM */
#define _USB_HFNUM_FRNUM_SHIFT                   0                                /**< Shift value for USB_FRNUM */
#define _USB_HFNUM_FRNUM_MASK                    0xFFFFUL                         /**< Bit mask for USB_FRNUM */
#define _USB_HFNUM_FRNUM_DEFAULT                 0x00003FFFUL                     /**< Mode DEFAULT for USB_HFNUM */
#define USB_HFNUM_FRNUM_DEFAULT                  (_USB_HFNUM_FRNUM_DEFAULT << 0)  /**< Shifted mode DEFAULT for USB_HFNUM */
#define _USB_HFNUM_FRREM_SHIFT                   16                               /**< Shift value for USB_FRREM */
#define _USB_HFNUM_FRREM_MASK                    0xFFFF0000UL                     /**< Bit mask for USB_FRREM */
#define _USB_HFNUM_FRREM_DEFAULT                 0x00000000UL                     /**< Mode DEFAULT for USB_HFNUM */
#define USB_HFNUM_FRREM_DEFAULT                  (_USB_HFNUM_FRREM_DEFAULT << 16) /**< Shifted mode DEFAULT for USB_HFNUM */

/* Bit fields for USB HPTXSTS */
#define _USB_HPTXSTS_RESETVALUE                  0x00080200UL                              /**< Default value for USB_HPTXSTS */
#define _USB_HPTXSTS_MASK                        0xFFFFFFFFUL                              /**< Mask for USB_HPTXSTS */
#define _USB_HPTXSTS_PTXFSPCAVAIL_SHIFT          0                                         /**< Shift value for USB_PTXFSPCAVAIL */
#define _USB_HPTXSTS_PTXFSPCAVAIL_MASK           0xFFFFUL                                  /**< Bit mask for USB_PTXFSPCAVAIL */
#define _USB_HPTXSTS_PTXFSPCAVAIL_DEFAULT        0x00000200UL                              /**< Mode DEFAULT for USB_HPTXSTS */
#define USB_HPTXSTS_PTXFSPCAVAIL_DEFAULT         (_USB_HPTXSTS_PTXFSPCAVAIL_DEFAULT << 0)  /**< Shifted mode DEFAULT for USB_HPTXSTS */
#define _USB_HPTXSTS_PTXQSPCAVAIL_SHIFT          16                                        /**< Shift value for USB_PTXQSPCAVAIL */
#define _USB_HPTXSTS_PTXQSPCAVAIL_MASK           0xFF0000UL                                /**< Bit mask for USB_PTXQSPCAVAIL */
#define _USB_HPTXSTS_PTXQSPCAVAIL_DEFAULT        0x00000008UL                              /**< Mode DEFAULT for USB_HPTXSTS */
#define USB_HPTXSTS_PTXQSPCAVAIL_DEFAULT         (_USB_HPTXSTS_PTXQSPCAVAIL_DEFAULT << 16) /**< Shifted mode DEFAULT for USB_HPTXSTS */
#define _USB_HPTXSTS_PTXQTOP_SHIFT               24                                        /**< Shift value for USB_PTXQTOP */
#define _USB_HPTXSTS_PTXQTOP_MASK                0xFF000000UL                              /**< Bit mask for USB_PTXQTOP */
#define _USB_HPTXSTS_PTXQTOP_DEFAULT             0x00000000UL                              /**< Mode DEFAULT for USB_HPTXSTS */
#define USB_HPTXSTS_PTXQTOP_DEFAULT              (_USB_HPTXSTS_PTXQTOP_DEFAULT << 24)      /**< Shifted mode DEFAULT for USB_HPTXSTS */

/* Bit fields for USB HAINT */
#define _USB_HAINT_RESETVALUE                    0x00000000UL                    /**< Default value for USB_HAINT */
#define _USB_HAINT_MASK                          0x00003FFFUL                    /**< Mask for USB_HAINT */
#define _USB_HAINT_HAINT_SHIFT                   0                               /**< Shift value for USB_HAINT */
#define _USB_HAINT_HAINT_MASK                    0x3FFFUL                        /**< Bit mask for USB_HAINT */
#define _USB_HAINT_HAINT_DEFAULT                 0x00000000UL                    /**< Mode DEFAULT for USB_HAINT */
#define USB_HAINT_HAINT_DEFAULT                  (_USB_HAINT_HAINT_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_HAINT */

/* Bit fields for USB HAINTMSK */
#define _USB_HAINTMSK_RESETVALUE                 0x00000000UL                          /**< Default value for USB_HAINTMSK */
#define _USB_HAINTMSK_MASK                       0x00003FFFUL                          /**< Mask for USB_HAINTMSK */
#define _USB_HAINTMSK_HAINTMSK_SHIFT             0                                     /**< Shift value for USB_HAINTMSK */
#define _USB_HAINTMSK_HAINTMSK_MASK              0x3FFFUL                              /**< Bit mask for USB_HAINTMSK */
#define _USB_HAINTMSK_HAINTMSK_DEFAULT           0x00000000UL                          /**< Mode DEFAULT for USB_HAINTMSK */
#define USB_HAINTMSK_HAINTMSK_DEFAULT            (_USB_HAINTMSK_HAINTMSK_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_HAINTMSK */

/* Bit fields for USB HPRT */
#define _USB_HPRT_RESETVALUE                     0x00000000UL                            /**< Default value for USB_HPRT */
#define _USB_HPRT_MASK                           0x0007FDFFUL                            /**< Mask for USB_HPRT */
#define USB_HPRT_PRTCONNSTS                      (0x1UL << 0)                            /**< Port Connect Status */
#define _USB_HPRT_PRTCONNSTS_SHIFT               0                                       /**< Shift value for USB_PRTCONNSTS */
#define _USB_HPRT_PRTCONNSTS_MASK                0x1UL                                   /**< Bit mask for USB_PRTCONNSTS */
#define _USB_HPRT_PRTCONNSTS_DEFAULT             0x00000000UL                            /**< Mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTCONNSTS_DEFAULT              (_USB_HPRT_PRTCONNSTS_DEFAULT << 0)     /**< Shifted mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTCONNDET                      (0x1UL << 1)                            /**< Port Connect Detected */
#define _USB_HPRT_PRTCONNDET_SHIFT               1                                       /**< Shift value for USB_PRTCONNDET */
#define _USB_HPRT_PRTCONNDET_MASK                0x2UL                                   /**< Bit mask for USB_PRTCONNDET */
#define _USB_HPRT_PRTCONNDET_DEFAULT             0x00000000UL                            /**< Mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTCONNDET_DEFAULT              (_USB_HPRT_PRTCONNDET_DEFAULT << 1)     /**< Shifted mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTENA                          (0x1UL << 2)                            /**< Port Enable */
#define _USB_HPRT_PRTENA_SHIFT                   2                                       /**< Shift value for USB_PRTENA */
#define _USB_HPRT_PRTENA_MASK                    0x4UL                                   /**< Bit mask for USB_PRTENA */
#define _USB_HPRT_PRTENA_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTENA_DEFAULT                  (_USB_HPRT_PRTENA_DEFAULT << 2)         /**< Shifted mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTENCHNG                       (0x1UL << 3)                            /**< Port Enable/Disable Change */
#define _USB_HPRT_PRTENCHNG_SHIFT                3                                       /**< Shift value for USB_PRTENCHNG */
#define _USB_HPRT_PRTENCHNG_MASK                 0x8UL                                   /**< Bit mask for USB_PRTENCHNG */
#define _USB_HPRT_PRTENCHNG_DEFAULT              0x00000000UL                            /**< Mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTENCHNG_DEFAULT               (_USB_HPRT_PRTENCHNG_DEFAULT << 3)      /**< Shifted mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTOVRCURRACT                   (0x1UL << 4)                            /**< Port Overcurrent Active */
#define _USB_HPRT_PRTOVRCURRACT_SHIFT            4                                       /**< Shift value for USB_PRTOVRCURRACT */
#define _USB_HPRT_PRTOVRCURRACT_MASK             0x10UL                                  /**< Bit mask for USB_PRTOVRCURRACT */
#define _USB_HPRT_PRTOVRCURRACT_DEFAULT          0x00000000UL                            /**< Mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTOVRCURRACT_DEFAULT           (_USB_HPRT_PRTOVRCURRACT_DEFAULT << 4)  /**< Shifted mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTOVRCURRCHNG                  (0x1UL << 5)                            /**< Port Overcurrent Change */
#define _USB_HPRT_PRTOVRCURRCHNG_SHIFT           5                                       /**< Shift value for USB_PRTOVRCURRCHNG */
#define _USB_HPRT_PRTOVRCURRCHNG_MASK            0x20UL                                  /**< Bit mask for USB_PRTOVRCURRCHNG */
#define _USB_HPRT_PRTOVRCURRCHNG_DEFAULT         0x00000000UL                            /**< Mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTOVRCURRCHNG_DEFAULT          (_USB_HPRT_PRTOVRCURRCHNG_DEFAULT << 5) /**< Shifted mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTRES                          (0x1UL << 6)                            /**< Port Resume */
#define _USB_HPRT_PRTRES_SHIFT                   6                                       /**< Shift value for USB_PRTRES */
#define _USB_HPRT_PRTRES_MASK                    0x40UL                                  /**< Bit mask for USB_PRTRES */
#define _USB_HPRT_PRTRES_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTRES_DEFAULT                  (_USB_HPRT_PRTRES_DEFAULT << 6)         /**< Shifted mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTSUSP                         (0x1UL << 7)                            /**< Port Suspend */
#define _USB_HPRT_PRTSUSP_SHIFT                  7                                       /**< Shift value for USB_PRTSUSP */
#define _USB_HPRT_PRTSUSP_MASK                   0x80UL                                  /**< Bit mask for USB_PRTSUSP */
#define _USB_HPRT_PRTSUSP_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTSUSP_DEFAULT                 (_USB_HPRT_PRTSUSP_DEFAULT << 7)        /**< Shifted mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTRST                          (0x1UL << 8)                            /**< Port Reset */
#define _USB_HPRT_PRTRST_SHIFT                   8                                       /**< Shift value for USB_PRTRST */
#define _USB_HPRT_PRTRST_MASK                    0x100UL                                 /**< Bit mask for USB_PRTRST */
#define _USB_HPRT_PRTRST_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTRST_DEFAULT                  (_USB_HPRT_PRTRST_DEFAULT << 8)         /**< Shifted mode DEFAULT for USB_HPRT */
#define _USB_HPRT_PRTLNSTS_SHIFT                 10                                      /**< Shift value for USB_PRTLNSTS */
#define _USB_HPRT_PRTLNSTS_MASK                  0xC00UL                                 /**< Bit mask for USB_PRTLNSTS */
#define _USB_HPRT_PRTLNSTS_DEFAULT               0x00000000UL                            /**< Mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTLNSTS_DEFAULT                (_USB_HPRT_PRTLNSTS_DEFAULT << 10)      /**< Shifted mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTPWR                          (0x1UL << 12)                           /**< Port Power */
#define _USB_HPRT_PRTPWR_SHIFT                   12                                      /**< Shift value for USB_PRTPWR */
#define _USB_HPRT_PRTPWR_MASK                    0x1000UL                                /**< Bit mask for USB_PRTPWR */
#define _USB_HPRT_PRTPWR_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTPWR_DEFAULT                  (_USB_HPRT_PRTPWR_DEFAULT << 12)        /**< Shifted mode DEFAULT for USB_HPRT */
#define _USB_HPRT_PRTTSTCTL_SHIFT                13                                      /**< Shift value for USB_PRTTSTCTL */
#define _USB_HPRT_PRTTSTCTL_MASK                 0x1E000UL                               /**< Bit mask for USB_PRTTSTCTL */
#define _USB_HPRT_PRTTSTCTL_DEFAULT              0x00000000UL                            /**< Mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTTSTCTL_DEFAULT               (_USB_HPRT_PRTTSTCTL_DEFAULT << 13)     /**< Shifted mode DEFAULT for USB_HPRT */
#define _USB_HPRT_PRTSPD_SHIFT                   17                                      /**< Shift value for USB_PRTSPD */
#define _USB_HPRT_PRTSPD_MASK                    0x60000UL                               /**< Bit mask for USB_PRTSPD */
#define _USB_HPRT_PRTSPD_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for USB_HPRT */
#define USB_HPRT_PRTSPD_DEFAULT                  (_USB_HPRT_PRTSPD_DEFAULT << 17)        /**< Shifted mode DEFAULT for USB_HPRT */

/* Bit fields for USB HC_CHAR */
#define _USB_HC_CHAR_RESETVALUE                  0x00000000UL                         /**< Default value for USB_HC_CHAR */
#define _USB_HC_CHAR_MASK                        0xFFFEFFFFUL                         /**< Mask for USB_HC_CHAR */
#define _USB_HC_CHAR_MPS_SHIFT                   0                                    /**< Shift value for USB_MPS */
#define _USB_HC_CHAR_MPS_MASK                    0x7FFUL                              /**< Bit mask for USB_MPS */
#define _USB_HC_CHAR_MPS_DEFAULT                 0x00000000UL                         /**< Mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_MPS_DEFAULT                  (_USB_HC_CHAR_MPS_DEFAULT << 0)      /**< Shifted mode DEFAULT for USB_HC_CHAR */
#define _USB_HC_CHAR_EPNUM_SHIFT                 11                                   /**< Shift value for USB_EPNUM */
#define _USB_HC_CHAR_EPNUM_MASK                  0x7800UL                             /**< Bit mask for USB_EPNUM */
#define _USB_HC_CHAR_EPNUM_DEFAULT               0x00000000UL                         /**< Mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_EPNUM_DEFAULT                (_USB_HC_CHAR_EPNUM_DEFAULT << 11)   /**< Shifted mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_EPDIR                        (0x1UL << 15)                        /**< Endpoint Direction */
#define _USB_HC_CHAR_EPDIR_SHIFT                 15                                   /**< Shift value for USB_EPDIR */
#define _USB_HC_CHAR_EPDIR_MASK                  0x8000UL                             /**< Bit mask for USB_EPDIR */
#define _USB_HC_CHAR_EPDIR_DEFAULT               0x00000000UL                         /**< Mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_EPDIR_DEFAULT                (_USB_HC_CHAR_EPDIR_DEFAULT << 15)   /**< Shifted mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_LSPDDEV                      (0x1UL << 17)                        /**< Low-Speed Device */
#define _USB_HC_CHAR_LSPDDEV_SHIFT               17                                   /**< Shift value for USB_LSPDDEV */
#define _USB_HC_CHAR_LSPDDEV_MASK                0x20000UL                            /**< Bit mask for USB_LSPDDEV */
#define _USB_HC_CHAR_LSPDDEV_DEFAULT             0x00000000UL                         /**< Mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_LSPDDEV_DEFAULT              (_USB_HC_CHAR_LSPDDEV_DEFAULT << 17) /**< Shifted mode DEFAULT for USB_HC_CHAR */
#define _USB_HC_CHAR_EPTYPE_SHIFT                18                                   /**< Shift value for USB_EPTYPE */
#define _USB_HC_CHAR_EPTYPE_MASK                 0xC0000UL                            /**< Bit mask for USB_EPTYPE */
#define _USB_HC_CHAR_EPTYPE_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_EPTYPE_DEFAULT               (_USB_HC_CHAR_EPTYPE_DEFAULT << 18)  /**< Shifted mode DEFAULT for USB_HC_CHAR */
#define _USB_HC_CHAR_MC_SHIFT                    20                                   /**< Shift value for USB_MC */
#define _USB_HC_CHAR_MC_MASK                     0x300000UL                           /**< Bit mask for USB_MC */
#define _USB_HC_CHAR_MC_DEFAULT                  0x00000000UL                         /**< Mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_MC_DEFAULT                   (_USB_HC_CHAR_MC_DEFAULT << 20)      /**< Shifted mode DEFAULT for USB_HC_CHAR */
#define _USB_HC_CHAR_DEVADDR_SHIFT               22                                   /**< Shift value for USB_DEVADDR */
#define _USB_HC_CHAR_DEVADDR_MASK                0x1FC00000UL                         /**< Bit mask for USB_DEVADDR */
#define _USB_HC_CHAR_DEVADDR_DEFAULT             0x00000000UL                         /**< Mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_DEVADDR_DEFAULT              (_USB_HC_CHAR_DEVADDR_DEFAULT << 22) /**< Shifted mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_ODDFRM                       (0x1UL << 29)                        /**< Odd Frame */
#define _USB_HC_CHAR_ODDFRM_SHIFT                29                                   /**< Shift value for USB_ODDFRM */
#define _USB_HC_CHAR_ODDFRM_MASK                 0x20000000UL                         /**< Bit mask for USB_ODDFRM */
#define _USB_HC_CHAR_ODDFRM_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_ODDFRM_DEFAULT               (_USB_HC_CHAR_ODDFRM_DEFAULT << 29)  /**< Shifted mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_CHDIS                        (0x1UL << 30)                        /**< Channel Disable */
#define _USB_HC_CHAR_CHDIS_SHIFT                 30                                   /**< Shift value for USB_CHDIS */
#define _USB_HC_CHAR_CHDIS_MASK                  0x40000000UL                         /**< Bit mask for USB_CHDIS */
#define _USB_HC_CHAR_CHDIS_DEFAULT               0x00000000UL                         /**< Mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_CHDIS_DEFAULT                (_USB_HC_CHAR_CHDIS_DEFAULT << 30)   /**< Shifted mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_CHENA                        (0x1UL << 31)                        /**< Channel Enable */
#define _USB_HC_CHAR_CHENA_SHIFT                 31                                   /**< Shift value for USB_CHENA */
#define _USB_HC_CHAR_CHENA_MASK                  0x80000000UL                         /**< Bit mask for USB_CHENA */
#define _USB_HC_CHAR_CHENA_DEFAULT               0x00000000UL                         /**< Mode DEFAULT for USB_HC_CHAR */
#define USB_HC_CHAR_CHENA_DEFAULT                (_USB_HC_CHAR_CHENA_DEFAULT << 31)   /**< Shifted mode DEFAULT for USB_HC_CHAR */

/* Bit fields for USB HC_SPLT */
#define _USB_HC_SPLT_RESETVALUE                  0x00000000UL                          /**< Default value for USB_HC_SPLT */
#define _USB_HC_SPLT_MASK                        0x8001FFFFUL                          /**< Mask for USB_HC_SPLT */
#define _USB_HC_SPLT_PRTADDR_SHIFT               0                                     /**< Shift value for USB_PRTADDR */
#define _USB_HC_SPLT_PRTADDR_MASK                0x7FUL                                /**< Bit mask for USB_PRTADDR */
#define _USB_HC_SPLT_PRTADDR_DEFAULT             0x00000000UL                          /**< Mode DEFAULT for USB_HC_SPLT */
#define USB_HC_SPLT_PRTADDR_DEFAULT              (_USB_HC_SPLT_PRTADDR_DEFAULT << 0)   /**< Shifted mode DEFAULT for USB_HC_SPLT */
#define _USB_HC_SPLT_HUBADDR_SHIFT               7                                     /**< Shift value for USB_HUBADDR */
#define _USB_HC_SPLT_HUBADDR_MASK                0x3F80UL                              /**< Bit mask for USB_HUBADDR */
#define _USB_HC_SPLT_HUBADDR_DEFAULT             0x00000000UL                          /**< Mode DEFAULT for USB_HC_SPLT */
#define USB_HC_SPLT_HUBADDR_DEFAULT              (_USB_HC_SPLT_HUBADDR_DEFAULT << 7)   /**< Shifted mode DEFAULT for USB_HC_SPLT */
#define _USB_HC_SPLT_XACTPOS_SHIFT               14                                    /**< Shift value for USB_XACTPOS */
#define _USB_HC_SPLT_XACTPOS_MASK                0xC000UL                              /**< Bit mask for USB_XACTPOS */
#define _USB_HC_SPLT_XACTPOS_DEFAULT             0x00000000UL                          /**< Mode DEFAULT for USB_HC_SPLT */
#define USB_HC_SPLT_XACTPOS_DEFAULT              (_USB_HC_SPLT_XACTPOS_DEFAULT << 14)  /**< Shifted mode DEFAULT for USB_HC_SPLT */
#define USB_HC_SPLT_COMPSPLT                     (0x1UL << 16)                         /**< Do Complete Split */
#define _USB_HC_SPLT_COMPSPLT_SHIFT              16                                    /**< Shift value for USB_COMPSPLT */
#define _USB_HC_SPLT_COMPSPLT_MASK               0x10000UL                             /**< Bit mask for USB_COMPSPLT */
#define _USB_HC_SPLT_COMPSPLT_DEFAULT            0x00000000UL                          /**< Mode DEFAULT for USB_HC_SPLT */
#define USB_HC_SPLT_COMPSPLT_DEFAULT             (_USB_HC_SPLT_COMPSPLT_DEFAULT << 16) /**< Shifted mode DEFAULT for USB_HC_SPLT */
#define USB_HC_SPLT_SPLTENA                      (0x1UL << 31)                         /**< Split Enable */
#define _USB_HC_SPLT_SPLTENA_SHIFT               31                                    /**< Shift value for USB_SPLTENA */
#define _USB_HC_SPLT_SPLTENA_MASK                0x80000000UL                          /**< Bit mask for USB_SPLTENA */
#define _USB_HC_SPLT_SPLTENA_DEFAULT             0x00000000UL                          /**< Mode DEFAULT for USB_HC_SPLT */
#define USB_HC_SPLT_SPLTENA_DEFAULT              (_USB_HC_SPLT_SPLTENA_DEFAULT << 31)  /**< Shifted mode DEFAULT for USB_HC_SPLT */

/* Bit fields for USB HC_INT */
#define _USB_HC_INT_RESETVALUE                   0x00000000UL                           /**< Default value for USB_HC_INT */
#define _USB_HC_INT_MASK                         0x000007BFUL                           /**< Mask for USB_HC_INT */
#define USB_HC_INT_XFERCOMPL                     (0x1UL << 0)                           /**< Transfer Completed */
#define _USB_HC_INT_XFERCOMPL_SHIFT              0                                      /**< Shift value for USB_XFERCOMPL */
#define _USB_HC_INT_XFERCOMPL_MASK               0x1UL                                  /**< Bit mask for USB_XFERCOMPL */
#define _USB_HC_INT_XFERCOMPL_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_XFERCOMPL_DEFAULT             (_USB_HC_INT_XFERCOMPL_DEFAULT << 0)   /**< Shifted mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_CHHLTD                        (0x1UL << 1)                           /**< Channel Halted */
#define _USB_HC_INT_CHHLTD_SHIFT                 1                                      /**< Shift value for USB_CHHLTD */
#define _USB_HC_INT_CHHLTD_MASK                  0x2UL                                  /**< Bit mask for USB_CHHLTD */
#define _USB_HC_INT_CHHLTD_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_CHHLTD_DEFAULT                (_USB_HC_INT_CHHLTD_DEFAULT << 1)      /**< Shifted mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_AHBERR                        (0x1UL << 2)                           /**< AHB Error */
#define _USB_HC_INT_AHBERR_SHIFT                 2                                      /**< Shift value for USB_AHBERR */
#define _USB_HC_INT_AHBERR_MASK                  0x4UL                                  /**< Bit mask for USB_AHBERR */
#define _USB_HC_INT_AHBERR_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_AHBERR_DEFAULT                (_USB_HC_INT_AHBERR_DEFAULT << 2)      /**< Shifted mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_STALL                         (0x1UL << 3)                           /**< Response Received Interrupt */
#define _USB_HC_INT_STALL_SHIFT                  3                                      /**< Shift value for USB_STALL */
#define _USB_HC_INT_STALL_MASK                   0x8UL                                  /**< Bit mask for USB_STALL */
#define _USB_HC_INT_STALL_DEFAULT                0x00000000UL                           /**< Mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_STALL_DEFAULT                 (_USB_HC_INT_STALL_DEFAULT << 3)       /**< Shifted mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_NAK                           (0x1UL << 4)                           /**< Response Received Interrupt */
#define _USB_HC_INT_NAK_SHIFT                    4                                      /**< Shift value for USB_NAK */
#define _USB_HC_INT_NAK_MASK                     0x10UL                                 /**< Bit mask for USB_NAK */
#define _USB_HC_INT_NAK_DEFAULT                  0x00000000UL                           /**< Mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_NAK_DEFAULT                   (_USB_HC_INT_NAK_DEFAULT << 4)         /**< Shifted mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_ACK                           (0x1UL << 5)                           /**< Response Received/Transmitted Interrupt */
#define _USB_HC_INT_ACK_SHIFT                    5                                      /**< Shift value for USB_ACK */
#define _USB_HC_INT_ACK_MASK                     0x20UL                                 /**< Bit mask for USB_ACK */
#define _USB_HC_INT_ACK_DEFAULT                  0x00000000UL                           /**< Mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_ACK_DEFAULT                   (_USB_HC_INT_ACK_DEFAULT << 5)         /**< Shifted mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_XACTERR                       (0x1UL << 7)                           /**< Transaction Error */
#define _USB_HC_INT_XACTERR_SHIFT                7                                      /**< Shift value for USB_XACTERR */
#define _USB_HC_INT_XACTERR_MASK                 0x80UL                                 /**< Bit mask for USB_XACTERR */
#define _USB_HC_INT_XACTERR_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_XACTERR_DEFAULT               (_USB_HC_INT_XACTERR_DEFAULT << 7)     /**< Shifted mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_BBLERR                        (0x1UL << 8)                           /**< Babble Error */
#define _USB_HC_INT_BBLERR_SHIFT                 8                                      /**< Shift value for USB_BBLERR */
#define _USB_HC_INT_BBLERR_MASK                  0x100UL                                /**< Bit mask for USB_BBLERR */
#define _USB_HC_INT_BBLERR_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_BBLERR_DEFAULT                (_USB_HC_INT_BBLERR_DEFAULT << 8)      /**< Shifted mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_FRMOVRUN                      (0x1UL << 9)                           /**<  */
#define _USB_HC_INT_FRMOVRUN_SHIFT               9                                      /**< Shift value for USB_FRMOVRUN */
#define _USB_HC_INT_FRMOVRUN_MASK                0x200UL                                /**< Bit mask for USB_FRMOVRUN */
#define _USB_HC_INT_FRMOVRUN_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_FRMOVRUN_DEFAULT              (_USB_HC_INT_FRMOVRUN_DEFAULT << 9)    /**< Shifted mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_DATATGLERR                    (0x1UL << 10)                          /**<  */
#define _USB_HC_INT_DATATGLERR_SHIFT             10                                     /**< Shift value for USB_DATATGLERR */
#define _USB_HC_INT_DATATGLERR_MASK              0x400UL                                /**< Bit mask for USB_DATATGLERR */
#define _USB_HC_INT_DATATGLERR_DEFAULT           0x00000000UL                           /**< Mode DEFAULT for USB_HC_INT */
#define USB_HC_INT_DATATGLERR_DEFAULT            (_USB_HC_INT_DATATGLERR_DEFAULT << 10) /**< Shifted mode DEFAULT for USB_HC_INT */

/* Bit fields for USB HC_INTMSK */
#define _USB_HC_INTMSK_RESETVALUE                0x00000000UL                                 /**< Default value for USB_HC_INTMSK */
#define _USB_HC_INTMSK_MASK                      0x000007BFUL                                 /**< Mask for USB_HC_INTMSK */
#define USB_HC_INTMSK_XFERCOMPLMSK               (0x1UL << 0)                                 /**< Transfer Completed Mask */
#define _USB_HC_INTMSK_XFERCOMPLMSK_SHIFT        0                                            /**< Shift value for USB_XFERCOMPLMSK */
#define _USB_HC_INTMSK_XFERCOMPLMSK_MASK         0x1UL                                        /**< Bit mask for USB_XFERCOMPLMSK */
#define _USB_HC_INTMSK_XFERCOMPLMSK_DEFAULT      0x00000000UL                                 /**< Mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_XFERCOMPLMSK_DEFAULT       (_USB_HC_INTMSK_XFERCOMPLMSK_DEFAULT << 0)   /**< Shifted mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_CHHLTDMSK                  (0x1UL << 1)                                 /**< Channel Halted Mask */
#define _USB_HC_INTMSK_CHHLTDMSK_SHIFT           1                                            /**< Shift value for USB_CHHLTDMSK */
#define _USB_HC_INTMSK_CHHLTDMSK_MASK            0x2UL                                        /**< Bit mask for USB_CHHLTDMSK */
#define _USB_HC_INTMSK_CHHLTDMSK_DEFAULT         0x00000000UL                                 /**< Mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_CHHLTDMSK_DEFAULT          (_USB_HC_INTMSK_CHHLTDMSK_DEFAULT << 1)      /**< Shifted mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_AHBERRMSK                  (0x1UL << 2)                                 /**< AHB Error Mask */
#define _USB_HC_INTMSK_AHBERRMSK_SHIFT           2                                            /**< Shift value for USB_AHBERRMSK */
#define _USB_HC_INTMSK_AHBERRMSK_MASK            0x4UL                                        /**< Bit mask for USB_AHBERRMSK */
#define _USB_HC_INTMSK_AHBERRMSK_DEFAULT         0x00000000UL                                 /**< Mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_AHBERRMSK_DEFAULT          (_USB_HC_INTMSK_AHBERRMSK_DEFAULT << 2)      /**< Shifted mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_STALLMSK                   (0x1UL << 3)                                 /**< STALL Response Received Interrupt Mask */
#define _USB_HC_INTMSK_STALLMSK_SHIFT            3                                            /**< Shift value for USB_STALLMSK */
#define _USB_HC_INTMSK_STALLMSK_MASK             0x8UL                                        /**< Bit mask for USB_STALLMSK */
#define _USB_HC_INTMSK_STALLMSK_DEFAULT          0x00000000UL                                 /**< Mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_STALLMSK_DEFAULT           (_USB_HC_INTMSK_STALLMSK_DEFAULT << 3)       /**< Shifted mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_NAKMSK                     (0x1UL << 4)                                 /**< NAK Response Received Interrupt Mask */
#define _USB_HC_INTMSK_NAKMSK_SHIFT              4                                            /**< Shift value for USB_NAKMSK */
#define _USB_HC_INTMSK_NAKMSK_MASK               0x10UL                                       /**< Bit mask for USB_NAKMSK */
#define _USB_HC_INTMSK_NAKMSK_DEFAULT            0x00000000UL                                 /**< Mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_NAKMSK_DEFAULT             (_USB_HC_INTMSK_NAKMSK_DEFAULT << 4)         /**< Shifted mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_ACKMSK                     (0x1UL << 5)                                 /**< ACK Response Received/Transmitted Interrupt Mask */
#define _USB_HC_INTMSK_ACKMSK_SHIFT              5                                            /**< Shift value for USB_ACKMSK */
#define _USB_HC_INTMSK_ACKMSK_MASK               0x20UL                                       /**< Bit mask for USB_ACKMSK */
#define _USB_HC_INTMSK_ACKMSK_DEFAULT            0x00000000UL                                 /**< Mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_ACKMSK_DEFAULT             (_USB_HC_INTMSK_ACKMSK_DEFAULT << 5)         /**< Shifted mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_XACTERRMSK                 (0x1UL << 7)                                 /**< Transaction Error Mask */
#define _USB_HC_INTMSK_XACTERRMSK_SHIFT          7                                            /**< Shift value for USB_XACTERRMSK */
#define _USB_HC_INTMSK_XACTERRMSK_MASK           0x80UL                                       /**< Bit mask for USB_XACTERRMSK */
#define _USB_HC_INTMSK_XACTERRMSK_DEFAULT        0x00000000UL                                 /**< Mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_XACTERRMSK_DEFAULT         (_USB_HC_INTMSK_XACTERRMSK_DEFAULT << 7)     /**< Shifted mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_BBLERRMSK                  (0x1UL << 8)                                 /**< Babble Error Mask */
#define _USB_HC_INTMSK_BBLERRMSK_SHIFT           8                                            /**< Shift value for USB_BBLERRMSK */
#define _USB_HC_INTMSK_BBLERRMSK_MASK            0x100UL                                      /**< Bit mask for USB_BBLERRMSK */
#define _USB_HC_INTMSK_BBLERRMSK_DEFAULT         0x00000000UL                                 /**< Mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_BBLERRMSK_DEFAULT          (_USB_HC_INTMSK_BBLERRMSK_DEFAULT << 8)      /**< Shifted mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_FRMOVRUNMSK                (0x1UL << 9)                                 /**< Frame Overrun Mask */
#define _USB_HC_INTMSK_FRMOVRUNMSK_SHIFT         9                                            /**< Shift value for USB_FRMOVRUNMSK */
#define _USB_HC_INTMSK_FRMOVRUNMSK_MASK          0x200UL                                      /**< Bit mask for USB_FRMOVRUNMSK */
#define _USB_HC_INTMSK_FRMOVRUNMSK_DEFAULT       0x00000000UL                                 /**< Mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_FRMOVRUNMSK_DEFAULT        (_USB_HC_INTMSK_FRMOVRUNMSK_DEFAULT << 9)    /**< Shifted mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_DATATGLERRMSK              (0x1UL << 10)                                /**< Data Toggle Error Mask */
#define _USB_HC_INTMSK_DATATGLERRMSK_SHIFT       10                                           /**< Shift value for USB_DATATGLERRMSK */
#define _USB_HC_INTMSK_DATATGLERRMSK_MASK        0x400UL                                      /**< Bit mask for USB_DATATGLERRMSK */
#define _USB_HC_INTMSK_DATATGLERRMSK_DEFAULT     0x00000000UL                                 /**< Mode DEFAULT for USB_HC_INTMSK */
#define USB_HC_INTMSK_DATATGLERRMSK_DEFAULT      (_USB_HC_INTMSK_DATATGLERRMSK_DEFAULT << 10) /**< Shifted mode DEFAULT for USB_HC_INTMSK */

/* Bit fields for USB HC_TSIZ */
#define _USB_HC_TSIZ_RESETVALUE                  0x00000000UL                         /**< Default value for USB_HC_TSIZ */
#define _USB_HC_TSIZ_MASK                        0x7FFFFFFFUL                         /**< Mask for USB_HC_TSIZ */
#define _USB_HC_TSIZ_XFERSIZE_SHIFT              0                                    /**< Shift value for USB_XFERSIZE */
#define _USB_HC_TSIZ_XFERSIZE_MASK               0x7FFFFUL                            /**< Bit mask for USB_XFERSIZE */
#define _USB_HC_TSIZ_XFERSIZE_DEFAULT            0x00000000UL                         /**< Mode DEFAULT for USB_HC_TSIZ */
#define USB_HC_TSIZ_XFERSIZE_DEFAULT             (_USB_HC_TSIZ_XFERSIZE_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_HC_TSIZ */
#define _USB_HC_TSIZ_PKTCNT_SHIFT                19                                   /**< Shift value for USB_PKTCNT */
#define _USB_HC_TSIZ_PKTCNT_MASK                 0x1FF80000UL                         /**< Bit mask for USB_PKTCNT */
#define _USB_HC_TSIZ_PKTCNT_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for USB_HC_TSIZ */
#define USB_HC_TSIZ_PKTCNT_DEFAULT               (_USB_HC_TSIZ_PKTCNT_DEFAULT << 19)  /**< Shifted mode DEFAULT for USB_HC_TSIZ */
#define _USB_HC_TSIZ_PID_SHIFT                   29                                   /**< Shift value for USB_PID */
#define _USB_HC_TSIZ_PID_MASK                    0x60000000UL                         /**< Bit mask for USB_PID */
#define _USB_HC_TSIZ_PID_DEFAULT                 0x00000000UL                         /**< Mode DEFAULT for USB_HC_TSIZ */
#define USB_HC_TSIZ_PID_DEFAULT                  (_USB_HC_TSIZ_PID_DEFAULT << 29)     /**< Shifted mode DEFAULT for USB_HC_TSIZ */

/* Bit fields for USB HC_DMAADDR */
#define _USB_HC_DMAADDR_RESETVALUE               0x00000000UL                           /**< Default value for USB_HC_DMAADDR */
#define _USB_HC_DMAADDR_MASK                     0xFFFFFFFFUL                           /**< Mask for USB_HC_DMAADDR */
#define _USB_HC_DMAADDR_DMAADDR_SHIFT            0                                      /**< Shift value for USB_DMAADDR */
#define _USB_HC_DMAADDR_DMAADDR_MASK             0xFFFFFFFFUL                           /**< Bit mask for USB_DMAADDR */
#define _USB_HC_DMAADDR_DMAADDR_DEFAULT          0x00000000UL                           /**< Mode DEFAULT for USB_HC_DMAADDR */
#define USB_HC_DMAADDR_DMAADDR_DEFAULT           (_USB_HC_DMAADDR_DMAADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_HC_DMAADDR */

/* Bit fields for USB DCFG */
#define _USB_DCFG_RESETVALUE                     0x08000000UL                            /**< Default value for USB_DCFG */
#define _USB_DCFG_MASK                           0xFC00FFFFUL                            /**< Mask for USB_DCFG */
#define _USB_DCFG_DEVSPD_SHIFT                   0                                       /**< Shift value for USB_DEVSPD */
#define _USB_DCFG_DEVSPD_MASK                    0x3UL                                   /**< Bit mask for USB_DEVSPD */
#define _USB_DCFG_DEVSPD_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for USB_DCFG */
#define USB_DCFG_DEVSPD_DEFAULT                  (_USB_DCFG_DEVSPD_DEFAULT << 0)         /**< Shifted mode DEFAULT for USB_DCFG */
#define USB_DCFG_NZSTSOUTHSHK                    (0x1UL << 2)                            /**< Non-Zero-Length Status OUT Handshake */
#define _USB_DCFG_NZSTSOUTHSHK_SHIFT             2                                       /**< Shift value for USB_NZSTSOUTHSHK */
#define _USB_DCFG_NZSTSOUTHSHK_MASK              0x4UL                                   /**< Bit mask for USB_NZSTSOUTHSHK */
#define _USB_DCFG_NZSTSOUTHSHK_DEFAULT           0x00000000UL                            /**< Mode DEFAULT for USB_DCFG */
#define USB_DCFG_NZSTSOUTHSHK_DEFAULT            (_USB_DCFG_NZSTSOUTHSHK_DEFAULT << 2)   /**< Shifted mode DEFAULT for USB_DCFG */
#define USB_DCFG_ENA32KHZSUSP                    (0x1UL << 3)                            /**< Enable 32 KHz Suspend mode */
#define _USB_DCFG_ENA32KHZSUSP_SHIFT             3                                       /**< Shift value for USB_ENA32KHZSUSP */
#define _USB_DCFG_ENA32KHZSUSP_MASK              0x8UL                                   /**< Bit mask for USB_ENA32KHZSUSP */
#define _USB_DCFG_ENA32KHZSUSP_DEFAULT           0x00000000UL                            /**< Mode DEFAULT for USB_DCFG */
#define USB_DCFG_ENA32KHZSUSP_DEFAULT            (_USB_DCFG_ENA32KHZSUSP_DEFAULT << 3)   /**< Shifted mode DEFAULT for USB_DCFG */
#define _USB_DCFG_DEVADDR_SHIFT                  4                                       /**< Shift value for USB_DEVADDR */
#define _USB_DCFG_DEVADDR_MASK                   0x7F0UL                                 /**< Bit mask for USB_DEVADDR */
#define _USB_DCFG_DEVADDR_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for USB_DCFG */
#define USB_DCFG_DEVADDR_DEFAULT                 (_USB_DCFG_DEVADDR_DEFAULT << 4)        /**< Shifted mode DEFAULT for USB_DCFG */
#define _USB_DCFG_PERFRINT_SHIFT                 11                                      /**< Shift value for USB_PERFRINT */
#define _USB_DCFG_PERFRINT_MASK                  0x1800UL                                /**< Bit mask for USB_PERFRINT */
#define _USB_DCFG_PERFRINT_DEFAULT               0x00000000UL                            /**< Mode DEFAULT for USB_DCFG */
#define USB_DCFG_PERFRINT_DEFAULT                (_USB_DCFG_PERFRINT_DEFAULT << 11)      /**< Shifted mode DEFAULT for USB_DCFG */
#define USB_DCFG_ENDEVOUTNAK                     (0x1UL << 13)                           /**< Enable Device OUT NAK */
#define _USB_DCFG_ENDEVOUTNAK_SHIFT              13                                      /**< Shift value for USB_ENDEVOUTNAK */
#define _USB_DCFG_ENDEVOUTNAK_MASK               0x2000UL                                /**< Bit mask for USB_ENDEVOUTNAK */
#define _USB_DCFG_ENDEVOUTNAK_DEFAULT            0x00000000UL                            /**< Mode DEFAULT for USB_DCFG */
#define USB_DCFG_ENDEVOUTNAK_DEFAULT             (_USB_DCFG_ENDEVOUTNAK_DEFAULT << 13)   /**< Shifted mode DEFAULT for USB_DCFG */
#define USB_DCFG_XCVRDLY                         (0x1UL << 14)                           /**<  */
#define _USB_DCFG_XCVRDLY_SHIFT                  14                                      /**< Shift value for USB_XCVRDLY */
#define _USB_DCFG_XCVRDLY_MASK                   0x4000UL                                /**< Bit mask for USB_XCVRDLY */
#define _USB_DCFG_XCVRDLY_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for USB_DCFG */
#define USB_DCFG_XCVRDLY_DEFAULT                 (_USB_DCFG_XCVRDLY_DEFAULT << 14)       /**< Shifted mode DEFAULT for USB_DCFG */
#define USB_DCFG_ERRATICINTMSK                   (0x1UL << 15)                           /**<  */
#define _USB_DCFG_ERRATICINTMSK_SHIFT            15                                      /**< Shift value for USB_ERRATICINTMSK */
#define _USB_DCFG_ERRATICINTMSK_MASK             0x8000UL                                /**< Bit mask for USB_ERRATICINTMSK */
#define _USB_DCFG_ERRATICINTMSK_DEFAULT          0x00000000UL                            /**< Mode DEFAULT for USB_DCFG */
#define USB_DCFG_ERRATICINTMSK_DEFAULT           (_USB_DCFG_ERRATICINTMSK_DEFAULT << 15) /**< Shifted mode DEFAULT for USB_DCFG */
#define _USB_DCFG_RESVALID_SHIFT                 26                                      /**< Shift value for USB_RESVALID */
#define _USB_DCFG_RESVALID_MASK                  0xFC000000UL                            /**< Bit mask for USB_RESVALID */
#define _USB_DCFG_RESVALID_DEFAULT               0x00000002UL                            /**< Mode DEFAULT for USB_DCFG */
#define USB_DCFG_RESVALID_DEFAULT                (_USB_DCFG_RESVALID_DEFAULT << 26)      /**< Shifted mode DEFAULT for USB_DCFG */

/* Bit fields for USB DCTL */
#define _USB_DCTL_RESETVALUE                     0x00000002UL                           /**< Default value for USB_DCTL */
#define _USB_DCTL_MASK                           0x00018FFFUL                           /**< Mask for USB_DCTL */
#define USB_DCTL_RMTWKUPSIG                      (0x1UL << 0)                           /**< Remote Wakeup Signaling */
#define _USB_DCTL_RMTWKUPSIG_SHIFT               0                                      /**< Shift value for USB_RMTWKUPSIG */
#define _USB_DCTL_RMTWKUPSIG_MASK                0x1UL                                  /**< Bit mask for USB_RMTWKUPSIG */
#define _USB_DCTL_RMTWKUPSIG_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for USB_DCTL */
#define USB_DCTL_RMTWKUPSIG_DEFAULT              (_USB_DCTL_RMTWKUPSIG_DEFAULT << 0)    /**< Shifted mode DEFAULT for USB_DCTL */
#define USB_DCTL_SFTDISCON                       (0x1UL << 1)                           /**< Soft Disconnect */
#define _USB_DCTL_SFTDISCON_SHIFT                1                                      /**< Shift value for USB_SFTDISCON */
#define _USB_DCTL_SFTDISCON_MASK                 0x2UL                                  /**< Bit mask for USB_SFTDISCON */
#define _USB_DCTL_SFTDISCON_DEFAULT              0x00000001UL                           /**< Mode DEFAULT for USB_DCTL */
#define USB_DCTL_SFTDISCON_DEFAULT               (_USB_DCTL_SFTDISCON_DEFAULT << 1)     /**< Shifted mode DEFAULT for USB_DCTL */
#define USB_DCTL_GNPINNAKSTS                     (0x1UL << 2)                           /**< Global Non-periodic IN NAK Status */
#define _USB_DCTL_GNPINNAKSTS_SHIFT              2                                      /**< Shift value for USB_GNPINNAKSTS */
#define _USB_DCTL_GNPINNAKSTS_MASK               0x4UL                                  /**< Bit mask for USB_GNPINNAKSTS */
#define _USB_DCTL_GNPINNAKSTS_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for USB_DCTL */
#define USB_DCTL_GNPINNAKSTS_DEFAULT             (_USB_DCTL_GNPINNAKSTS_DEFAULT << 2)   /**< Shifted mode DEFAULT for USB_DCTL */
#define USB_DCTL_GOUTNAKSTS                      (0x1UL << 3)                           /**< Global OUT NAK Status */
#define _USB_DCTL_GOUTNAKSTS_SHIFT               3                                      /**< Shift value for USB_GOUTNAKSTS */
#define _USB_DCTL_GOUTNAKSTS_MASK                0x8UL                                  /**< Bit mask for USB_GOUTNAKSTS */
#define _USB_DCTL_GOUTNAKSTS_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for USB_DCTL */
#define USB_DCTL_GOUTNAKSTS_DEFAULT              (_USB_DCTL_GOUTNAKSTS_DEFAULT << 3)    /**< Shifted mode DEFAULT for USB_DCTL */
#define _USB_DCTL_TSTCTL_SHIFT                   4                                      /**< Shift value for USB_TSTCTL */
#define _USB_DCTL_TSTCTL_MASK                    0x70UL                                 /**< Bit mask for USB_TSTCTL */
#define _USB_DCTL_TSTCTL_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for USB_DCTL */
#define USB_DCTL_TSTCTL_DEFAULT                  (_USB_DCTL_TSTCTL_DEFAULT << 4)        /**< Shifted mode DEFAULT for USB_DCTL */
#define USB_DCTL_SGNPINNAK                       (0x1UL << 7)                           /**< Set Global Non-periodic IN NAK */
#define _USB_DCTL_SGNPINNAK_SHIFT                7                                      /**< Shift value for USB_SGNPINNAK */
#define _USB_DCTL_SGNPINNAK_MASK                 0x80UL                                 /**< Bit mask for USB_SGNPINNAK */
#define _USB_DCTL_SGNPINNAK_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for USB_DCTL */
#define USB_DCTL_SGNPINNAK_DEFAULT               (_USB_DCTL_SGNPINNAK_DEFAULT << 7)     /**< Shifted mode DEFAULT for USB_DCTL */
#define USB_DCTL_CGNPINNAK                       (0x1UL << 8)                           /**< Clear Global Non-periodic IN NAK */
#define _USB_DCTL_CGNPINNAK_SHIFT                8                                      /**< Shift value for USB_CGNPINNAK */
#define _USB_DCTL_CGNPINNAK_MASK                 0x100UL                                /**< Bit mask for USB_CGNPINNAK */
#define _USB_DCTL_CGNPINNAK_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for USB_DCTL */
#define USB_DCTL_CGNPINNAK_DEFAULT               (_USB_DCTL_CGNPINNAK_DEFAULT << 8)     /**< Shifted mode DEFAULT for USB_DCTL */
#define USB_DCTL_SGOUTNAK                        (0x1UL << 9)                           /**< Set Global OUT NAK */
#define _USB_DCTL_SGOUTNAK_SHIFT                 9                                      /**< Shift value for USB_SGOUTNAK */
#define _USB_DCTL_SGOUTNAK_MASK                  0x200UL                                /**< Bit mask for USB_SGOUTNAK */
#define _USB_DCTL_SGOUTNAK_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for USB_DCTL */
#define USB_DCTL_SGOUTNAK_DEFAULT                (_USB_DCTL_SGOUTNAK_DEFAULT << 9)      /**< Shifted mode DEFAULT for USB_DCTL */
#define USB_DCTL_CGOUTNAK                        (0x1UL << 10)                          /**< Clear Global OUT NAK */
#define _USB_DCTL_CGOUTNAK_SHIFT                 10                                     /**< Shift value for USB_CGOUTNAK */
#define _USB_DCTL_CGOUTNAK_MASK                  0x400UL                                /**< Bit mask for USB_CGOUTNAK */
#define _USB_DCTL_CGOUTNAK_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for USB_DCTL */
#define USB_DCTL_CGOUTNAK_DEFAULT                (_USB_DCTL_CGOUTNAK_DEFAULT << 10)     /**< Shifted mode DEFAULT for USB_DCTL */
#define USB_DCTL_PWRONPRGDONE                    (0x1UL << 11)                          /**< Power-On Programming Done */
#define _USB_DCTL_PWRONPRGDONE_SHIFT             11                                     /**< Shift value for USB_PWRONPRGDONE */
#define _USB_DCTL_PWRONPRGDONE_MASK              0x800UL                                /**< Bit mask for USB_PWRONPRGDONE */
#define _USB_DCTL_PWRONPRGDONE_DEFAULT           0x00000000UL                           /**< Mode DEFAULT for USB_DCTL */
#define USB_DCTL_PWRONPRGDONE_DEFAULT            (_USB_DCTL_PWRONPRGDONE_DEFAULT << 11) /**< Shifted mode DEFAULT for USB_DCTL */
#define USB_DCTL_IGNRFRMNUM                      (0x1UL << 15)                          /**< Ignore Frame number For Isochronous End points */
#define _USB_DCTL_IGNRFRMNUM_SHIFT               15                                     /**< Shift value for USB_IGNRFRMNUM */
#define _USB_DCTL_IGNRFRMNUM_MASK                0x8000UL                               /**< Bit mask for USB_IGNRFRMNUM */
#define _USB_DCTL_IGNRFRMNUM_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for USB_DCTL */
#define USB_DCTL_IGNRFRMNUM_DEFAULT              (_USB_DCTL_IGNRFRMNUM_DEFAULT << 15)   /**< Shifted mode DEFAULT for USB_DCTL */
#define USB_DCTL_NAKONBBLE                       (0x1UL << 16)                          /**< NAK on Babble Error */
#define _USB_DCTL_NAKONBBLE_SHIFT                16                                     /**< Shift value for USB_NAKONBBLE */
#define _USB_DCTL_NAKONBBLE_MASK                 0x10000UL                              /**< Bit mask for USB_NAKONBBLE */
#define _USB_DCTL_NAKONBBLE_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for USB_DCTL */
#define USB_DCTL_NAKONBBLE_DEFAULT               (_USB_DCTL_NAKONBBLE_DEFAULT << 16)    /**< Shifted mode DEFAULT for USB_DCTL */

/* Bit fields for USB DSTS */
#define _USB_DSTS_RESETVALUE                     0x00000002UL                       /**< Default value for USB_DSTS */
#define _USB_DSTS_MASK                           0x00FFFF0FUL                       /**< Mask for USB_DSTS */
#define USB_DSTS_SUSPSTS                         (0x1UL << 0)                       /**< Suspend Status */
#define _USB_DSTS_SUSPSTS_SHIFT                  0                                  /**< Shift value for USB_SUSPSTS */
#define _USB_DSTS_SUSPSTS_MASK                   0x1UL                              /**< Bit mask for USB_SUSPSTS */
#define _USB_DSTS_SUSPSTS_DEFAULT                0x00000000UL                       /**< Mode DEFAULT for USB_DSTS */
#define USB_DSTS_SUSPSTS_DEFAULT                 (_USB_DSTS_SUSPSTS_DEFAULT << 0)   /**< Shifted mode DEFAULT for USB_DSTS */
#define _USB_DSTS_ENUMSPD_SHIFT                  1                                  /**< Shift value for USB_ENUMSPD */
#define _USB_DSTS_ENUMSPD_MASK                   0x6UL                              /**< Bit mask for USB_ENUMSPD */
#define _USB_DSTS_ENUMSPD_DEFAULT                0x00000001UL                       /**< Mode DEFAULT for USB_DSTS */
#define USB_DSTS_ENUMSPD_DEFAULT                 (_USB_DSTS_ENUMSPD_DEFAULT << 1)   /**< Shifted mode DEFAULT for USB_DSTS */
#define USB_DSTS_ERRTICERR                       (0x1UL << 3)                       /**< Erratic Error */
#define _USB_DSTS_ERRTICERR_SHIFT                3                                  /**< Shift value for USB_ERRTICERR */
#define _USB_DSTS_ERRTICERR_MASK                 0x8UL                              /**< Bit mask for USB_ERRTICERR */
#define _USB_DSTS_ERRTICERR_DEFAULT              0x00000000UL                       /**< Mode DEFAULT for USB_DSTS */
#define USB_DSTS_ERRTICERR_DEFAULT               (_USB_DSTS_ERRTICERR_DEFAULT << 3) /**< Shifted mode DEFAULT for USB_DSTS */
#define _USB_DSTS_SOFFN_SHIFT                    8                                  /**< Shift value for USB_SOFFN */
#define _USB_DSTS_SOFFN_MASK                     0x3FFF00UL                         /**< Bit mask for USB_SOFFN */
#define _USB_DSTS_SOFFN_DEFAULT                  0x00000000UL                       /**< Mode DEFAULT for USB_DSTS */
#define USB_DSTS_SOFFN_DEFAULT                   (_USB_DSTS_SOFFN_DEFAULT << 8)     /**< Shifted mode DEFAULT for USB_DSTS */
#define _USB_DSTS_DEVLNSTS_SHIFT                 22                                 /**< Shift value for USB_DEVLNSTS */
#define _USB_DSTS_DEVLNSTS_MASK                  0xC00000UL                         /**< Bit mask for USB_DEVLNSTS */
#define _USB_DSTS_DEVLNSTS_DEFAULT               0x00000000UL                       /**< Mode DEFAULT for USB_DSTS */
#define USB_DSTS_DEVLNSTS_DEFAULT                (_USB_DSTS_DEVLNSTS_DEFAULT << 22) /**< Shifted mode DEFAULT for USB_DSTS */

/* Bit fields for USB DIEPMSK */
#define _USB_DIEPMSK_RESETVALUE                  0x00000000UL                               /**< Default value for USB_DIEPMSK */
#define _USB_DIEPMSK_MASK                        0x0000217FUL                               /**< Mask for USB_DIEPMSK */
#define USB_DIEPMSK_XFERCOMPLMSK                 (0x1UL << 0)                               /**< Transfer Completed Interrupt Mask */
#define _USB_DIEPMSK_XFERCOMPLMSK_SHIFT          0                                          /**< Shift value for USB_XFERCOMPLMSK */
#define _USB_DIEPMSK_XFERCOMPLMSK_MASK           0x1UL                                      /**< Bit mask for USB_XFERCOMPLMSK */
#define _USB_DIEPMSK_XFERCOMPLMSK_DEFAULT        0x00000000UL                               /**< Mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_XFERCOMPLMSK_DEFAULT         (_USB_DIEPMSK_XFERCOMPLMSK_DEFAULT << 0)   /**< Shifted mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_EPDISBLDMSK                  (0x1UL << 1)                               /**< Endpoint Disabled Interrupt Mask */
#define _USB_DIEPMSK_EPDISBLDMSK_SHIFT           1                                          /**< Shift value for USB_EPDISBLDMSK */
#define _USB_DIEPMSK_EPDISBLDMSK_MASK            0x2UL                                      /**< Bit mask for USB_EPDISBLDMSK */
#define _USB_DIEPMSK_EPDISBLDMSK_DEFAULT         0x00000000UL                               /**< Mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_EPDISBLDMSK_DEFAULT          (_USB_DIEPMSK_EPDISBLDMSK_DEFAULT << 1)    /**< Shifted mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_AHBERRMSK                    (0x1UL << 2)                               /**< AHB Error Mask */
#define _USB_DIEPMSK_AHBERRMSK_SHIFT             2                                          /**< Shift value for USB_AHBERRMSK */
#define _USB_DIEPMSK_AHBERRMSK_MASK              0x4UL                                      /**< Bit mask for USB_AHBERRMSK */
#define _USB_DIEPMSK_AHBERRMSK_DEFAULT           0x00000000UL                               /**< Mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_AHBERRMSK_DEFAULT            (_USB_DIEPMSK_AHBERRMSK_DEFAULT << 2)      /**< Shifted mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_TIMEOUTMSK                   (0x1UL << 3)                               /**< Timeout Condition Mask */
#define _USB_DIEPMSK_TIMEOUTMSK_SHIFT            3                                          /**< Shift value for USB_TIMEOUTMSK */
#define _USB_DIEPMSK_TIMEOUTMSK_MASK             0x8UL                                      /**< Bit mask for USB_TIMEOUTMSK */
#define _USB_DIEPMSK_TIMEOUTMSK_DEFAULT          0x00000000UL                               /**< Mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_TIMEOUTMSK_DEFAULT           (_USB_DIEPMSK_TIMEOUTMSK_DEFAULT << 3)     /**< Shifted mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_INTKNTXFEMPMSK               (0x1UL << 4)                               /**< IN Token Received When TxFIFO Empty Mask */
#define _USB_DIEPMSK_INTKNTXFEMPMSK_SHIFT        4                                          /**< Shift value for USB_INTKNTXFEMPMSK */
#define _USB_DIEPMSK_INTKNTXFEMPMSK_MASK         0x10UL                                     /**< Bit mask for USB_INTKNTXFEMPMSK */
#define _USB_DIEPMSK_INTKNTXFEMPMSK_DEFAULT      0x00000000UL                               /**< Mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_INTKNTXFEMPMSK_DEFAULT       (_USB_DIEPMSK_INTKNTXFEMPMSK_DEFAULT << 4) /**< Shifted mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_INTKNEPMISMSK                (0x1UL << 5)                               /**< IN Token received with EP Mismatch Mask */
#define _USB_DIEPMSK_INTKNEPMISMSK_SHIFT         5                                          /**< Shift value for USB_INTKNEPMISMSK */
#define _USB_DIEPMSK_INTKNEPMISMSK_MASK          0x20UL                                     /**< Bit mask for USB_INTKNEPMISMSK */
#define _USB_DIEPMSK_INTKNEPMISMSK_DEFAULT       0x00000000UL                               /**< Mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_INTKNEPMISMSK_DEFAULT        (_USB_DIEPMSK_INTKNEPMISMSK_DEFAULT << 5)  /**< Shifted mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_INEPNAKEFFMSK                (0x1UL << 6)                               /**< IN Endpoint NAK Effective Mask */
#define _USB_DIEPMSK_INEPNAKEFFMSK_SHIFT         6                                          /**< Shift value for USB_INEPNAKEFFMSK */
#define _USB_DIEPMSK_INEPNAKEFFMSK_MASK          0x40UL                                     /**< Bit mask for USB_INEPNAKEFFMSK */
#define _USB_DIEPMSK_INEPNAKEFFMSK_DEFAULT       0x00000000UL                               /**< Mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_INEPNAKEFFMSK_DEFAULT        (_USB_DIEPMSK_INEPNAKEFFMSK_DEFAULT << 6)  /**< Shifted mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_TXFIFOUNDRNMSK               (0x1UL << 8)                               /**< Fifo Underrun Mask */
#define _USB_DIEPMSK_TXFIFOUNDRNMSK_SHIFT        8                                          /**< Shift value for USB_TXFIFOUNDRNMSK */
#define _USB_DIEPMSK_TXFIFOUNDRNMSK_MASK         0x100UL                                    /**< Bit mask for USB_TXFIFOUNDRNMSK */
#define _USB_DIEPMSK_TXFIFOUNDRNMSK_DEFAULT      0x00000000UL                               /**< Mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_TXFIFOUNDRNMSK_DEFAULT       (_USB_DIEPMSK_TXFIFOUNDRNMSK_DEFAULT << 8) /**< Shifted mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_NAKMSK                       (0x1UL << 13)                              /**< NAK interrupt Mask */
#define _USB_DIEPMSK_NAKMSK_SHIFT                13                                         /**< Shift value for USB_NAKMSK */
#define _USB_DIEPMSK_NAKMSK_MASK                 0x2000UL                                   /**< Bit mask for USB_NAKMSK */
#define _USB_DIEPMSK_NAKMSK_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for USB_DIEPMSK */
#define USB_DIEPMSK_NAKMSK_DEFAULT               (_USB_DIEPMSK_NAKMSK_DEFAULT << 13)        /**< Shifted mode DEFAULT for USB_DIEPMSK */

/* Bit fields for USB DOEPMSK */
#define _USB_DOEPMSK_RESETVALUE                  0x00000000UL                               /**< Default value for USB_DOEPMSK */
#define _USB_DOEPMSK_MASK                        0x0000317FUL                               /**< Mask for USB_DOEPMSK */
#define USB_DOEPMSK_XFERCOMPLMSK                 (0x1UL << 0)                               /**< Transfer Completed Interrupt Mask */
#define _USB_DOEPMSK_XFERCOMPLMSK_SHIFT          0                                          /**< Shift value for USB_XFERCOMPLMSK */
#define _USB_DOEPMSK_XFERCOMPLMSK_MASK           0x1UL                                      /**< Bit mask for USB_XFERCOMPLMSK */
#define _USB_DOEPMSK_XFERCOMPLMSK_DEFAULT        0x00000000UL                               /**< Mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_XFERCOMPLMSK_DEFAULT         (_USB_DOEPMSK_XFERCOMPLMSK_DEFAULT << 0)   /**< Shifted mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_EPDISBLDMSK                  (0x1UL << 1)                               /**< Endpoint Disabled Interrupt Mask */
#define _USB_DOEPMSK_EPDISBLDMSK_SHIFT           1                                          /**< Shift value for USB_EPDISBLDMSK */
#define _USB_DOEPMSK_EPDISBLDMSK_MASK            0x2UL                                      /**< Bit mask for USB_EPDISBLDMSK */
#define _USB_DOEPMSK_EPDISBLDMSK_DEFAULT         0x00000000UL                               /**< Mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_EPDISBLDMSK_DEFAULT          (_USB_DOEPMSK_EPDISBLDMSK_DEFAULT << 1)    /**< Shifted mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_AHBERRMSK                    (0x1UL << 2)                               /**< AHB Error */
#define _USB_DOEPMSK_AHBERRMSK_SHIFT             2                                          /**< Shift value for USB_AHBERRMSK */
#define _USB_DOEPMSK_AHBERRMSK_MASK              0x4UL                                      /**< Bit mask for USB_AHBERRMSK */
#define _USB_DOEPMSK_AHBERRMSK_DEFAULT           0x00000000UL                               /**< Mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_AHBERRMSK_DEFAULT            (_USB_DOEPMSK_AHBERRMSK_DEFAULT << 2)      /**< Shifted mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_SETUPMSK                     (0x1UL << 3)                               /**< SETUP Phase Done Mask */
#define _USB_DOEPMSK_SETUPMSK_SHIFT              3                                          /**< Shift value for USB_SETUPMSK */
#define _USB_DOEPMSK_SETUPMSK_MASK               0x8UL                                      /**< Bit mask for USB_SETUPMSK */
#define _USB_DOEPMSK_SETUPMSK_DEFAULT            0x00000000UL                               /**< Mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_SETUPMSK_DEFAULT             (_USB_DOEPMSK_SETUPMSK_DEFAULT << 3)       /**< Shifted mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_OUTTKNEPDISMSK               (0x1UL << 4)                               /**< OUT Token Received when Endpoint Disabled Mask */
#define _USB_DOEPMSK_OUTTKNEPDISMSK_SHIFT        4                                          /**< Shift value for USB_OUTTKNEPDISMSK */
#define _USB_DOEPMSK_OUTTKNEPDISMSK_MASK         0x10UL                                     /**< Bit mask for USB_OUTTKNEPDISMSK */
#define _USB_DOEPMSK_OUTTKNEPDISMSK_DEFAULT      0x00000000UL                               /**< Mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_OUTTKNEPDISMSK_DEFAULT       (_USB_DOEPMSK_OUTTKNEPDISMSK_DEFAULT << 4) /**< Shifted mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_STSPHSERCVDMSK               (0x1UL << 5)                               /**< Status Phase Received Mask */
#define _USB_DOEPMSK_STSPHSERCVDMSK_SHIFT        5                                          /**< Shift value for USB_STSPHSERCVDMSK */
#define _USB_DOEPMSK_STSPHSERCVDMSK_MASK         0x20UL                                     /**< Bit mask for USB_STSPHSERCVDMSK */
#define _USB_DOEPMSK_STSPHSERCVDMSK_DEFAULT      0x00000000UL                               /**< Mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_STSPHSERCVDMSK_DEFAULT       (_USB_DOEPMSK_STSPHSERCVDMSK_DEFAULT << 5) /**< Shifted mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_BACK2BACKSETUP               (0x1UL << 6)                               /**< Back-to-Back SETUP Packets Received Mask */
#define _USB_DOEPMSK_BACK2BACKSETUP_SHIFT        6                                          /**< Shift value for USB_BACK2BACKSETUP */
#define _USB_DOEPMSK_BACK2BACKSETUP_MASK         0x40UL                                     /**< Bit mask for USB_BACK2BACKSETUP */
#define _USB_DOEPMSK_BACK2BACKSETUP_DEFAULT      0x00000000UL                               /**< Mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_BACK2BACKSETUP_DEFAULT       (_USB_DOEPMSK_BACK2BACKSETUP_DEFAULT << 6) /**< Shifted mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_OUTPKTERRMSK                 (0x1UL << 8)                               /**< OUT Packet Error Mask */
#define _USB_DOEPMSK_OUTPKTERRMSK_SHIFT          8                                          /**< Shift value for USB_OUTPKTERRMSK */
#define _USB_DOEPMSK_OUTPKTERRMSK_MASK           0x100UL                                    /**< Bit mask for USB_OUTPKTERRMSK */
#define _USB_DOEPMSK_OUTPKTERRMSK_DEFAULT        0x00000000UL                               /**< Mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_OUTPKTERRMSK_DEFAULT         (_USB_DOEPMSK_OUTPKTERRMSK_DEFAULT << 8)   /**< Shifted mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_BBLEERRMSK                   (0x1UL << 12)                              /**< Babble Error interrupt Mask */
#define _USB_DOEPMSK_BBLEERRMSK_SHIFT            12                                         /**< Shift value for USB_BBLEERRMSK */
#define _USB_DOEPMSK_BBLEERRMSK_MASK             0x1000UL                                   /**< Bit mask for USB_BBLEERRMSK */
#define _USB_DOEPMSK_BBLEERRMSK_DEFAULT          0x00000000UL                               /**< Mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_BBLEERRMSK_DEFAULT           (_USB_DOEPMSK_BBLEERRMSK_DEFAULT << 12)    /**< Shifted mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_NAKMSK                       (0x1UL << 13)                              /**< NAK interrupt Mask */
#define _USB_DOEPMSK_NAKMSK_SHIFT                13                                         /**< Shift value for USB_NAKMSK */
#define _USB_DOEPMSK_NAKMSK_MASK                 0x2000UL                                   /**< Bit mask for USB_NAKMSK */
#define _USB_DOEPMSK_NAKMSK_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for USB_DOEPMSK */
#define USB_DOEPMSK_NAKMSK_DEFAULT               (_USB_DOEPMSK_NAKMSK_DEFAULT << 13)        /**< Shifted mode DEFAULT for USB_DOEPMSK */

/* Bit fields for USB DAINT */
#define _USB_DAINT_RESETVALUE                    0x00000000UL                         /**< Default value for USB_DAINT */
#define _USB_DAINT_MASK                          0x007F007FUL                         /**< Mask for USB_DAINT */
#define USB_DAINT_INEPINT0                       (0x1UL << 0)                         /**<  */
#define _USB_DAINT_INEPINT0_SHIFT                0                                    /**< Shift value for USB_INEPINT0 */
#define _USB_DAINT_INEPINT0_MASK                 0x1UL                                /**< Bit mask for USB_INEPINT0 */
#define _USB_DAINT_INEPINT0_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for USB_DAINT */
#define USB_DAINT_INEPINT0_DEFAULT               (_USB_DAINT_INEPINT0_DEFAULT << 0)   /**< Shifted mode DEFAULT for USB_DAINT */
#define USB_DAINT_INEPINT1                       (0x1UL << 1)                         /**<  */
#define _USB_DAINT_INEPINT1_SHIFT                1                                    /**< Shift value for USB_INEPINT1 */
#define _USB_DAINT_INEPINT1_MASK                 0x2UL                                /**< Bit mask for USB_INEPINT1 */
#define _USB_DAINT_INEPINT1_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for USB_DAINT */
#define USB_DAINT_INEPINT1_DEFAULT               (_USB_DAINT_INEPINT1_DEFAULT << 1)   /**< Shifted mode DEFAULT for USB_DAINT */
#define USB_DAINT_INEPINT2                       (0x1UL << 2)                         /**<  */
#define _USB_DAINT_INEPINT2_SHIFT                2                                    /**< Shift value for USB_INEPINT2 */
#define _USB_DAINT_INEPINT2_MASK                 0x4UL                                /**< Bit mask for USB_INEPINT2 */
#define _USB_DAINT_INEPINT2_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for USB_DAINT */
#define USB_DAINT_INEPINT2_DEFAULT               (_USB_DAINT_INEPINT2_DEFAULT << 2)   /**< Shifted mode DEFAULT for USB_DAINT */
#define USB_DAINT_INEPINT3                       (0x1UL << 3)                         /**<  */
#define _USB_DAINT_INEPINT3_SHIFT                3                                    /**< Shift value for USB_INEPINT3 */
#define _USB_DAINT_INEPINT3_MASK                 0x8UL                                /**< Bit mask for USB_INEPINT3 */
#define _USB_DAINT_INEPINT3_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for USB_DAINT */
#define USB_DAINT_INEPINT3_DEFAULT               (_USB_DAINT_INEPINT3_DEFAULT << 3)   /**< Shifted mode DEFAULT for USB_DAINT */
#define USB_DAINT_INEPINT4                       (0x1UL << 4)                         /**<  */
#define _USB_DAINT_INEPINT4_SHIFT                4                                    /**< Shift value for USB_INEPINT4 */
#define _USB_DAINT_INEPINT4_MASK                 0x10UL                               /**< Bit mask for USB_INEPINT4 */
#define _USB_DAINT_INEPINT4_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for USB_DAINT */
#define USB_DAINT_INEPINT4_DEFAULT               (_USB_DAINT_INEPINT4_DEFAULT << 4)   /**< Shifted mode DEFAULT for USB_DAINT */
#define USB_DAINT_INEPINT5                       (0x1UL << 5)                         /**<  */
#define _USB_DAINT_INEPINT5_SHIFT                5                                    /**< Shift value for USB_INEPINT5 */
#define _USB_DAINT_INEPINT5_MASK                 0x20UL                               /**< Bit mask for USB_INEPINT5 */
#define _USB_DAINT_INEPINT5_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for USB_DAINT */
#define USB_DAINT_INEPINT5_DEFAULT               (_USB_DAINT_INEPINT5_DEFAULT << 5)   /**< Shifted mode DEFAULT for USB_DAINT */
#define USB_DAINT_INEPINT6                       (0x1UL << 6)                         /**<  */
#define _USB_DAINT_INEPINT6_SHIFT                6                                    /**< Shift value for USB_INEPINT6 */
#define _USB_DAINT_INEPINT6_MASK                 0x40UL                               /**< Bit mask for USB_INEPINT6 */
#define _USB_DAINT_INEPINT6_DEFAULT              0x00000000UL                         /**< Mode DEFAULT for USB_DAINT */
#define USB_DAINT_INEPINT6_DEFAULT               (_USB_DAINT_INEPINT6_DEFAULT << 6)   /**< Shifted mode DEFAULT for USB_DAINT */
#define USB_DAINT_OUTEPINT0                      (0x1UL << 16)                        /**<  */
#define _USB_DAINT_OUTEPINT0_SHIFT               16                                   /**< Shift value for USB_OUTEPINT0 */
#define _USB_DAINT_OUTEPINT0_MASK                0x10000UL                            /**< Bit mask for USB_OUTEPINT0 */
#define _USB_DAINT_OUTEPINT0_DEFAULT             0x00000000UL                         /**< Mode DEFAULT for USB_DAINT */
#define USB_DAINT_OUTEPINT0_DEFAULT              (_USB_DAINT_OUTEPINT0_DEFAULT << 16) /**< Shifted mode DEFAULT for USB_DAINT */
#define USB_DAINT_OUTEPINT1                      (0x1UL << 17)                        /**<  */
#define _USB_DAINT_OUTEPINT1_SHIFT               17                                   /**< Shift value for USB_OUTEPINT1 */
#define _USB_DAINT_OUTEPINT1_MASK                0x20000UL                            /**< Bit mask for USB_OUTEPINT1 */
#define _USB_DAINT_OUTEPINT1_DEFAULT             0x00000000UL                         /**< Mode DEFAULT for USB_DAINT */
#define USB_DAINT_OUTEPINT1_DEFAULT              (_USB_DAINT_OUTEPINT1_DEFAULT << 17) /**< Shifted mode DEFAULT for USB_DAINT */
#define USB_DAINT_OUTEPINT2                      (0x1UL << 18)                        /**<  */
#define _USB_DAINT_OUTEPINT2_SHIFT               18                                   /**< Shift value for USB_OUTEPINT2 */
#define _USB_DAINT_OUTEPINT2_MASK                0x40000UL                            /**< Bit mask for USB_OUTEPINT2 */
#define _USB_DAINT_OUTEPINT2_DEFAULT             0x00000000UL                         /**< Mode DEFAULT for USB_DAINT */
#define USB_DAINT_OUTEPINT2_DEFAULT              (_USB_DAINT_OUTEPINT2_DEFAULT << 18) /**< Shifted mode DEFAULT for USB_DAINT */
#define USB_DAINT_OUTEPINT3                      (0x1UL << 19)                        /**<  */
#define _USB_DAINT_OUTEPINT3_SHIFT               19                                   /**< Shift value for USB_OUTEPINT3 */
#define _USB_DAINT_OUTEPINT3_MASK                0x80000UL                            /**< Bit mask for USB_OUTEPINT3 */
#define _USB_DAINT_OUTEPINT3_DEFAULT             0x00000000UL                         /**< Mode DEFAULT for USB_DAINT */
#define USB_DAINT_OUTEPINT3_DEFAULT              (_USB_DAINT_OUTEPINT3_DEFAULT << 19) /**< Shifted mode DEFAULT for USB_DAINT */
#define USB_DAINT_OUTEPINT4                      (0x1UL << 20)                        /**<  */
#define _USB_DAINT_OUTEPINT4_SHIFT               20                                   /**< Shift value for USB_OUTEPINT4 */
#define _USB_DAINT_OUTEPINT4_MASK                0x100000UL                           /**< Bit mask for USB_OUTEPINT4 */
#define _USB_DAINT_OUTEPINT4_DEFAULT             0x00000000UL                         /**< Mode DEFAULT for USB_DAINT */
#define USB_DAINT_OUTEPINT4_DEFAULT              (_USB_DAINT_OUTEPINT4_DEFAULT << 20) /**< Shifted mode DEFAULT for USB_DAINT */
#define USB_DAINT_OUTEPINT5                      (0x1UL << 21)                        /**<  */
#define _USB_DAINT_OUTEPINT5_SHIFT               21                                   /**< Shift value for USB_OUTEPINT5 */
#define _USB_DAINT_OUTEPINT5_MASK                0x200000UL                           /**< Bit mask for USB_OUTEPINT5 */
#define _USB_DAINT_OUTEPINT5_DEFAULT             0x00000000UL                         /**< Mode DEFAULT for USB_DAINT */
#define USB_DAINT_OUTEPINT5_DEFAULT              (_USB_DAINT_OUTEPINT5_DEFAULT << 21) /**< Shifted mode DEFAULT for USB_DAINT */
#define USB_DAINT_OUTEPINT6                      (0x1UL << 22)                        /**<  */
#define _USB_DAINT_OUTEPINT6_SHIFT               22                                   /**< Shift value for USB_OUTEPINT6 */
#define _USB_DAINT_OUTEPINT6_MASK                0x400000UL                           /**< Bit mask for USB_OUTEPINT6 */
#define _USB_DAINT_OUTEPINT6_DEFAULT             0x00000000UL                         /**< Mode DEFAULT for USB_DAINT */
#define USB_DAINT_OUTEPINT6_DEFAULT              (_USB_DAINT_OUTEPINT6_DEFAULT << 22) /**< Shifted mode DEFAULT for USB_DAINT */

/* Bit fields for USB DAINTMSK */
#define _USB_DAINTMSK_RESETVALUE                 0x00000000UL                            /**< Default value for USB_DAINTMSK */
#define _USB_DAINTMSK_MASK                       0x007F007FUL                            /**< Mask for USB_DAINTMSK */
#define USB_DAINTMSK_INEPMSK0                    (0x1UL << 0)                            /**<  */
#define _USB_DAINTMSK_INEPMSK0_SHIFT             0                                       /**< Shift value for USB_INEPMSK0 */
#define _USB_DAINTMSK_INEPMSK0_MASK              0x1UL                                   /**< Bit mask for USB_INEPMSK0 */
#define _USB_DAINTMSK_INEPMSK0_DEFAULT           0x00000000UL                            /**< Mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_INEPMSK0_DEFAULT            (_USB_DAINTMSK_INEPMSK0_DEFAULT << 0)   /**< Shifted mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_INEPMSK1                    (0x1UL << 1)                            /**<  */
#define _USB_DAINTMSK_INEPMSK1_SHIFT             1                                       /**< Shift value for USB_INEPMSK1 */
#define _USB_DAINTMSK_INEPMSK1_MASK              0x2UL                                   /**< Bit mask for USB_INEPMSK1 */
#define _USB_DAINTMSK_INEPMSK1_DEFAULT           0x00000000UL                            /**< Mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_INEPMSK1_DEFAULT            (_USB_DAINTMSK_INEPMSK1_DEFAULT << 1)   /**< Shifted mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_INEPMSK2                    (0x1UL << 2)                            /**<  */
#define _USB_DAINTMSK_INEPMSK2_SHIFT             2                                       /**< Shift value for USB_INEPMSK2 */
#define _USB_DAINTMSK_INEPMSK2_MASK              0x4UL                                   /**< Bit mask for USB_INEPMSK2 */
#define _USB_DAINTMSK_INEPMSK2_DEFAULT           0x00000000UL                            /**< Mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_INEPMSK2_DEFAULT            (_USB_DAINTMSK_INEPMSK2_DEFAULT << 2)   /**< Shifted mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_INEPMSK3                    (0x1UL << 3)                            /**<  */
#define _USB_DAINTMSK_INEPMSK3_SHIFT             3                                       /**< Shift value for USB_INEPMSK3 */
#define _USB_DAINTMSK_INEPMSK3_MASK              0x8UL                                   /**< Bit mask for USB_INEPMSK3 */
#define _USB_DAINTMSK_INEPMSK3_DEFAULT           0x00000000UL                            /**< Mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_INEPMSK3_DEFAULT            (_USB_DAINTMSK_INEPMSK3_DEFAULT << 3)   /**< Shifted mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_INEPMSK4                    (0x1UL << 4)                            /**<  */
#define _USB_DAINTMSK_INEPMSK4_SHIFT             4                                       /**< Shift value for USB_INEPMSK4 */
#define _USB_DAINTMSK_INEPMSK4_MASK              0x10UL                                  /**< Bit mask for USB_INEPMSK4 */
#define _USB_DAINTMSK_INEPMSK4_DEFAULT           0x00000000UL                            /**< Mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_INEPMSK4_DEFAULT            (_USB_DAINTMSK_INEPMSK4_DEFAULT << 4)   /**< Shifted mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_INEPMSK5                    (0x1UL << 5)                            /**<  */
#define _USB_DAINTMSK_INEPMSK5_SHIFT             5                                       /**< Shift value for USB_INEPMSK5 */
#define _USB_DAINTMSK_INEPMSK5_MASK              0x20UL                                  /**< Bit mask for USB_INEPMSK5 */
#define _USB_DAINTMSK_INEPMSK5_DEFAULT           0x00000000UL                            /**< Mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_INEPMSK5_DEFAULT            (_USB_DAINTMSK_INEPMSK5_DEFAULT << 5)   /**< Shifted mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_INEPMSK6                    (0x1UL << 6)                            /**<  */
#define _USB_DAINTMSK_INEPMSK6_SHIFT             6                                       /**< Shift value for USB_INEPMSK6 */
#define _USB_DAINTMSK_INEPMSK6_MASK              0x40UL                                  /**< Bit mask for USB_INEPMSK6 */
#define _USB_DAINTMSK_INEPMSK6_DEFAULT           0x00000000UL                            /**< Mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_INEPMSK6_DEFAULT            (_USB_DAINTMSK_INEPMSK6_DEFAULT << 6)   /**< Shifted mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_OUTEPMSK0                   (0x1UL << 16)                           /**<  */
#define _USB_DAINTMSK_OUTEPMSK0_SHIFT            16                                      /**< Shift value for USB_OUTEPMSK0 */
#define _USB_DAINTMSK_OUTEPMSK0_MASK             0x10000UL                               /**< Bit mask for USB_OUTEPMSK0 */
#define _USB_DAINTMSK_OUTEPMSK0_DEFAULT          0x00000000UL                            /**< Mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_OUTEPMSK0_DEFAULT           (_USB_DAINTMSK_OUTEPMSK0_DEFAULT << 16) /**< Shifted mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_OUTEPMSK1                   (0x1UL << 17)                           /**<  */
#define _USB_DAINTMSK_OUTEPMSK1_SHIFT            17                                      /**< Shift value for USB_OUTEPMSK1 */
#define _USB_DAINTMSK_OUTEPMSK1_MASK             0x20000UL                               /**< Bit mask for USB_OUTEPMSK1 */
#define _USB_DAINTMSK_OUTEPMSK1_DEFAULT          0x00000000UL                            /**< Mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_OUTEPMSK1_DEFAULT           (_USB_DAINTMSK_OUTEPMSK1_DEFAULT << 17) /**< Shifted mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_OUTEPMSK2                   (0x1UL << 18)                           /**<  */
#define _USB_DAINTMSK_OUTEPMSK2_SHIFT            18                                      /**< Shift value for USB_OUTEPMSK2 */
#define _USB_DAINTMSK_OUTEPMSK2_MASK             0x40000UL                               /**< Bit mask for USB_OUTEPMSK2 */
#define _USB_DAINTMSK_OUTEPMSK2_DEFAULT          0x00000000UL                            /**< Mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_OUTEPMSK2_DEFAULT           (_USB_DAINTMSK_OUTEPMSK2_DEFAULT << 18) /**< Shifted mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_OUTEPMSK3                   (0x1UL << 19)                           /**<  */
#define _USB_DAINTMSK_OUTEPMSK3_SHIFT            19                                      /**< Shift value for USB_OUTEPMSK3 */
#define _USB_DAINTMSK_OUTEPMSK3_MASK             0x80000UL                               /**< Bit mask for USB_OUTEPMSK3 */
#define _USB_DAINTMSK_OUTEPMSK3_DEFAULT          0x00000000UL                            /**< Mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_OUTEPMSK3_DEFAULT           (_USB_DAINTMSK_OUTEPMSK3_DEFAULT << 19) /**< Shifted mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_OUTEPMSK4                   (0x1UL << 20)                           /**<  */
#define _USB_DAINTMSK_OUTEPMSK4_SHIFT            20                                      /**< Shift value for USB_OUTEPMSK4 */
#define _USB_DAINTMSK_OUTEPMSK4_MASK             0x100000UL                              /**< Bit mask for USB_OUTEPMSK4 */
#define _USB_DAINTMSK_OUTEPMSK4_DEFAULT          0x00000000UL                            /**< Mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_OUTEPMSK4_DEFAULT           (_USB_DAINTMSK_OUTEPMSK4_DEFAULT << 20) /**< Shifted mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_OUTEPMSK5                   (0x1UL << 21)                           /**<  */
#define _USB_DAINTMSK_OUTEPMSK5_SHIFT            21                                      /**< Shift value for USB_OUTEPMSK5 */
#define _USB_DAINTMSK_OUTEPMSK5_MASK             0x200000UL                              /**< Bit mask for USB_OUTEPMSK5 */
#define _USB_DAINTMSK_OUTEPMSK5_DEFAULT          0x00000000UL                            /**< Mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_OUTEPMSK5_DEFAULT           (_USB_DAINTMSK_OUTEPMSK5_DEFAULT << 21) /**< Shifted mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_OUTEPMSK6                   (0x1UL << 22)                           /**<  */
#define _USB_DAINTMSK_OUTEPMSK6_SHIFT            22                                      /**< Shift value for USB_OUTEPMSK6 */
#define _USB_DAINTMSK_OUTEPMSK6_MASK             0x400000UL                              /**< Bit mask for USB_OUTEPMSK6 */
#define _USB_DAINTMSK_OUTEPMSK6_DEFAULT          0x00000000UL                            /**< Mode DEFAULT for USB_DAINTMSK */
#define USB_DAINTMSK_OUTEPMSK6_DEFAULT           (_USB_DAINTMSK_OUTEPMSK6_DEFAULT << 22) /**< Shifted mode DEFAULT for USB_DAINTMSK */

/* Bit fields for USB DVBUSDIS */
#define _USB_DVBUSDIS_RESETVALUE                 0x000017D7UL                          /**< Default value for USB_DVBUSDIS */
#define _USB_DVBUSDIS_MASK                       0x0000FFFFUL                          /**< Mask for USB_DVBUSDIS */
#define _USB_DVBUSDIS_DVBUSDIS_SHIFT             0                                     /**< Shift value for USB_DVBUSDIS */
#define _USB_DVBUSDIS_DVBUSDIS_MASK              0xFFFFUL                              /**< Bit mask for USB_DVBUSDIS */
#define _USB_DVBUSDIS_DVBUSDIS_DEFAULT           0x000017D7UL                          /**< Mode DEFAULT for USB_DVBUSDIS */
#define USB_DVBUSDIS_DVBUSDIS_DEFAULT            (_USB_DVBUSDIS_DVBUSDIS_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DVBUSDIS */

/* Bit fields for USB DVBUSPULSE */
#define _USB_DVBUSPULSE_RESETVALUE               0x000005B8UL                              /**< Default value for USB_DVBUSPULSE */
#define _USB_DVBUSPULSE_MASK                     0x00000FFFUL                              /**< Mask for USB_DVBUSPULSE */
#define _USB_DVBUSPULSE_DVBUSPULSE_SHIFT         0                                         /**< Shift value for USB_DVBUSPULSE */
#define _USB_DVBUSPULSE_DVBUSPULSE_MASK          0xFFFUL                                   /**< Bit mask for USB_DVBUSPULSE */
#define _USB_DVBUSPULSE_DVBUSPULSE_DEFAULT       0x000005B8UL                              /**< Mode DEFAULT for USB_DVBUSPULSE */
#define USB_DVBUSPULSE_DVBUSPULSE_DEFAULT        (_USB_DVBUSPULSE_DVBUSPULSE_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DVBUSPULSE */

/* Bit fields for USB DTHRCTL */
#define _USB_DTHRCTL_RESETVALUE                  0x08100020UL                             /**< Default value for USB_DTHRCTL */
#define _USB_DTHRCTL_MASK                        0x0BFF1FFFUL                             /**< Mask for USB_DTHRCTL */
#define USB_DTHRCTL_NONISOTHREN                  (0x1UL << 0)                             /**< Non-ISO IN Endpoints Threshold Enable. */
#define _USB_DTHRCTL_NONISOTHREN_SHIFT           0                                        /**< Shift value for USB_NONISOTHREN */
#define _USB_DTHRCTL_NONISOTHREN_MASK            0x1UL                                    /**< Bit mask for USB_NONISOTHREN */
#define _USB_DTHRCTL_NONISOTHREN_DEFAULT         0x00000000UL                             /**< Mode DEFAULT for USB_DTHRCTL */
#define USB_DTHRCTL_NONISOTHREN_DEFAULT          (_USB_DTHRCTL_NONISOTHREN_DEFAULT << 0)  /**< Shifted mode DEFAULT for USB_DTHRCTL */
#define USB_DTHRCTL_ISOTHREN                     (0x1UL << 1)                             /**< ISO IN Endpoints Threshold Enable. */
#define _USB_DTHRCTL_ISOTHREN_SHIFT              1                                        /**< Shift value for USB_ISOTHREN */
#define _USB_DTHRCTL_ISOTHREN_MASK               0x2UL                                    /**< Bit mask for USB_ISOTHREN */
#define _USB_DTHRCTL_ISOTHREN_DEFAULT            0x00000000UL                             /**< Mode DEFAULT for USB_DTHRCTL */
#define USB_DTHRCTL_ISOTHREN_DEFAULT             (_USB_DTHRCTL_ISOTHREN_DEFAULT << 1)     /**< Shifted mode DEFAULT for USB_DTHRCTL */
#define _USB_DTHRCTL_TXTHRLEN_SHIFT              2                                        /**< Shift value for USB_TXTHRLEN */
#define _USB_DTHRCTL_TXTHRLEN_MASK               0x7FCUL                                  /**< Bit mask for USB_TXTHRLEN */
#define _USB_DTHRCTL_TXTHRLEN_DEFAULT            0x00000008UL                             /**< Mode DEFAULT for USB_DTHRCTL */
#define USB_DTHRCTL_TXTHRLEN_DEFAULT             (_USB_DTHRCTL_TXTHRLEN_DEFAULT << 2)     /**< Shifted mode DEFAULT for USB_DTHRCTL */
#define _USB_DTHRCTL_AHBTHRRATIO_SHIFT           11                                       /**< Shift value for USB_AHBTHRRATIO */
#define _USB_DTHRCTL_AHBTHRRATIO_MASK            0x1800UL                                 /**< Bit mask for USB_AHBTHRRATIO */
#define _USB_DTHRCTL_AHBTHRRATIO_DEFAULT         0x00000000UL                             /**< Mode DEFAULT for USB_DTHRCTL */
#define USB_DTHRCTL_AHBTHRRATIO_DEFAULT          (_USB_DTHRCTL_AHBTHRRATIO_DEFAULT << 11) /**< Shifted mode DEFAULT for USB_DTHRCTL */
#define USB_DTHRCTL_RXTHREN                      (0x1UL << 16)                            /**< Receive Threshold Enable */
#define _USB_DTHRCTL_RXTHREN_SHIFT               16                                       /**< Shift value for USB_RXTHREN */
#define _USB_DTHRCTL_RXTHREN_MASK                0x10000UL                                /**< Bit mask for USB_RXTHREN */
#define _USB_DTHRCTL_RXTHREN_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for USB_DTHRCTL */
#define USB_DTHRCTL_RXTHREN_DEFAULT              (_USB_DTHRCTL_RXTHREN_DEFAULT << 16)     /**< Shifted mode DEFAULT for USB_DTHRCTL */
#define _USB_DTHRCTL_RXTHRLEN_SHIFT              17                                       /**< Shift value for USB_RXTHRLEN */
#define _USB_DTHRCTL_RXTHRLEN_MASK               0x3FE0000UL                              /**< Bit mask for USB_RXTHRLEN */
#define _USB_DTHRCTL_RXTHRLEN_DEFAULT            0x00000008UL                             /**< Mode DEFAULT for USB_DTHRCTL */
#define USB_DTHRCTL_RXTHRLEN_DEFAULT             (_USB_DTHRCTL_RXTHRLEN_DEFAULT << 17)    /**< Shifted mode DEFAULT for USB_DTHRCTL */
#define USB_DTHRCTL_ARBPRKEN                     (0x1UL << 27)                            /**< Arbiter Parking Enable */
#define _USB_DTHRCTL_ARBPRKEN_SHIFT              27                                       /**< Shift value for USB_ARBPRKEN */
#define _USB_DTHRCTL_ARBPRKEN_MASK               0x8000000UL                              /**< Bit mask for USB_ARBPRKEN */
#define _USB_DTHRCTL_ARBPRKEN_DEFAULT            0x00000001UL                             /**< Mode DEFAULT for USB_DTHRCTL */
#define USB_DTHRCTL_ARBPRKEN_DEFAULT             (_USB_DTHRCTL_ARBPRKEN_DEFAULT << 27)    /**< Shifted mode DEFAULT for USB_DTHRCTL */

/* Bit fields for USB DIEPEMPMSK */
#define _USB_DIEPEMPMSK_RESETVALUE               0x00000000UL                                 /**< Default value for USB_DIEPEMPMSK */
#define _USB_DIEPEMPMSK_MASK                     0x0000FFFFUL                                 /**< Mask for USB_DIEPEMPMSK */
#define _USB_DIEPEMPMSK_INEPTXFEMPMSK_SHIFT      0                                            /**< Shift value for USB_INEPTXFEMPMSK */
#define _USB_DIEPEMPMSK_INEPTXFEMPMSK_MASK       0xFFFFUL                                     /**< Bit mask for USB_INEPTXFEMPMSK */
#define _USB_DIEPEMPMSK_INEPTXFEMPMSK_DEFAULT    0x00000000UL                                 /**< Mode DEFAULT for USB_DIEPEMPMSK */
#define USB_DIEPEMPMSK_INEPTXFEMPMSK_DEFAULT     (_USB_DIEPEMPMSK_INEPTXFEMPMSK_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DIEPEMPMSK */

/* Bit fields for USB DIEP0CTL */
#define _USB_DIEP0CTL_RESETVALUE                 0x00008000UL                           /**< Default value for USB_DIEP0CTL */
#define _USB_DIEP0CTL_MASK                       0xCFEE8003UL                           /**< Mask for USB_DIEP0CTL */
#define _USB_DIEP0CTL_MPS_SHIFT                  0                                      /**< Shift value for USB_MPS */
#define _USB_DIEP0CTL_MPS_MASK                   0x3UL                                  /**< Bit mask for USB_MPS */
#define _USB_DIEP0CTL_MPS_DEFAULT                0x00000000UL                           /**< Mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_MPS_DEFAULT                 (_USB_DIEP0CTL_MPS_DEFAULT << 0)       /**< Shifted mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_USBACTEP                    (0x1UL << 15)                          /**< USB Active Endpoint */
#define _USB_DIEP0CTL_USBACTEP_SHIFT             15                                     /**< Shift value for USB_USBACTEP */
#define _USB_DIEP0CTL_USBACTEP_MASK              0x8000UL                               /**< Bit mask for USB_USBACTEP */
#define _USB_DIEP0CTL_USBACTEP_DEFAULT           0x00000001UL                           /**< Mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_USBACTEP_DEFAULT            (_USB_DIEP0CTL_USBACTEP_DEFAULT << 15) /**< Shifted mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_NAKSTS                      (0x1UL << 17)                          /**< NAK Status */
#define _USB_DIEP0CTL_NAKSTS_SHIFT               17                                     /**< Shift value for USB_NAKSTS */
#define _USB_DIEP0CTL_NAKSTS_MASK                0x20000UL                              /**< Bit mask for USB_NAKSTS */
#define _USB_DIEP0CTL_NAKSTS_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_NAKSTS_DEFAULT              (_USB_DIEP0CTL_NAKSTS_DEFAULT << 17)   /**< Shifted mode DEFAULT for USB_DIEP0CTL */
#define _USB_DIEP0CTL_EPTYPE_SHIFT               18                                     /**< Shift value for USB_EPTYPE */
#define _USB_DIEP0CTL_EPTYPE_MASK                0xC0000UL                              /**< Bit mask for USB_EPTYPE */
#define _USB_DIEP0CTL_EPTYPE_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_EPTYPE_DEFAULT              (_USB_DIEP0CTL_EPTYPE_DEFAULT << 18)   /**< Shifted mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_STALL                       (0x1UL << 21)                          /**< Handshake */
#define _USB_DIEP0CTL_STALL_SHIFT                21                                     /**< Shift value for USB_STALL */
#define _USB_DIEP0CTL_STALL_MASK                 0x200000UL                             /**< Bit mask for USB_STALL */
#define _USB_DIEP0CTL_STALL_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_STALL_DEFAULT               (_USB_DIEP0CTL_STALL_DEFAULT << 21)    /**< Shifted mode DEFAULT for USB_DIEP0CTL */
#define _USB_DIEP0CTL_TXFNUM_SHIFT               22                                     /**< Shift value for USB_TXFNUM */
#define _USB_DIEP0CTL_TXFNUM_MASK                0x3C00000UL                            /**< Bit mask for USB_TXFNUM */
#define _USB_DIEP0CTL_TXFNUM_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_TXFNUM_DEFAULT              (_USB_DIEP0CTL_TXFNUM_DEFAULT << 22)   /**< Shifted mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_CNAK                        (0x1UL << 26)                          /**< Clear NAK */
#define _USB_DIEP0CTL_CNAK_SHIFT                 26                                     /**< Shift value for USB_CNAK */
#define _USB_DIEP0CTL_CNAK_MASK                  0x4000000UL                            /**< Bit mask for USB_CNAK */
#define _USB_DIEP0CTL_CNAK_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_CNAK_DEFAULT                (_USB_DIEP0CTL_CNAK_DEFAULT << 26)     /**< Shifted mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_SNAK                        (0x1UL << 27)                          /**< Set NAK */
#define _USB_DIEP0CTL_SNAK_SHIFT                 27                                     /**< Shift value for USB_SNAK */
#define _USB_DIEP0CTL_SNAK_MASK                  0x8000000UL                            /**< Bit mask for USB_SNAK */
#define _USB_DIEP0CTL_SNAK_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_SNAK_DEFAULT                (_USB_DIEP0CTL_SNAK_DEFAULT << 27)     /**< Shifted mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_EPDIS                       (0x1UL << 30)                          /**< Endpoint Disable */
#define _USB_DIEP0CTL_EPDIS_SHIFT                30                                     /**< Shift value for USB_EPDIS */
#define _USB_DIEP0CTL_EPDIS_MASK                 0x40000000UL                           /**< Bit mask for USB_EPDIS */
#define _USB_DIEP0CTL_EPDIS_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_EPDIS_DEFAULT               (_USB_DIEP0CTL_EPDIS_DEFAULT << 30)    /**< Shifted mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_EPENA                       (0x1UL << 31)                          /**< Endpoint Enable */
#define _USB_DIEP0CTL_EPENA_SHIFT                31                                     /**< Shift value for USB_EPENA */
#define _USB_DIEP0CTL_EPENA_MASK                 0x80000000UL                           /**< Bit mask for USB_EPENA */
#define _USB_DIEP0CTL_EPENA_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for USB_DIEP0CTL */
#define USB_DIEP0CTL_EPENA_DEFAULT               (_USB_DIEP0CTL_EPENA_DEFAULT << 31)    /**< Shifted mode DEFAULT for USB_DIEP0CTL */

/* Bit fields for USB DIEP0INT */
#define _USB_DIEP0INT_RESETVALUE                 0x00000080UL                             /**< Default value for USB_DIEP0INT */
#define _USB_DIEP0INT_MASK                       0x000039FFUL                             /**< Mask for USB_DIEP0INT */
#define USB_DIEP0INT_XFERCOMPL                   (0x1UL << 0)                             /**< Transfer Completed Interrupt */
#define _USB_DIEP0INT_XFERCOMPL_SHIFT            0                                        /**< Shift value for USB_XFERCOMPL */
#define _USB_DIEP0INT_XFERCOMPL_MASK             0x1UL                                    /**< Bit mask for USB_XFERCOMPL */
#define _USB_DIEP0INT_XFERCOMPL_DEFAULT          0x00000000UL                             /**< Mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_XFERCOMPL_DEFAULT           (_USB_DIEP0INT_XFERCOMPL_DEFAULT << 0)   /**< Shifted mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_EPDISBLD                    (0x1UL << 1)                             /**< Endpoint Disabled Interrupt */
#define _USB_DIEP0INT_EPDISBLD_SHIFT             1                                        /**< Shift value for USB_EPDISBLD */
#define _USB_DIEP0INT_EPDISBLD_MASK              0x2UL                                    /**< Bit mask for USB_EPDISBLD */
#define _USB_DIEP0INT_EPDISBLD_DEFAULT           0x00000000UL                             /**< Mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_EPDISBLD_DEFAULT            (_USB_DIEP0INT_EPDISBLD_DEFAULT << 1)    /**< Shifted mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_AHBERR                      (0x1UL << 2)                             /**< AHB Error */
#define _USB_DIEP0INT_AHBERR_SHIFT               2                                        /**< Shift value for USB_AHBERR */
#define _USB_DIEP0INT_AHBERR_MASK                0x4UL                                    /**< Bit mask for USB_AHBERR */
#define _USB_DIEP0INT_AHBERR_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_AHBERR_DEFAULT              (_USB_DIEP0INT_AHBERR_DEFAULT << 2)      /**< Shifted mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_TIMEOUT                     (0x1UL << 3)                             /**< Condition */
#define _USB_DIEP0INT_TIMEOUT_SHIFT              3                                        /**< Shift value for USB_TIMEOUT */
#define _USB_DIEP0INT_TIMEOUT_MASK               0x8UL                                    /**< Bit mask for USB_TIMEOUT */
#define _USB_DIEP0INT_TIMEOUT_DEFAULT            0x00000000UL                             /**< Mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_TIMEOUT_DEFAULT             (_USB_DIEP0INT_TIMEOUT_DEFAULT << 3)     /**< Shifted mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_INTKNTXFEMP                 (0x1UL << 4)                             /**< IN Token Received When TxFIFO is Empty */
#define _USB_DIEP0INT_INTKNTXFEMP_SHIFT          4                                        /**< Shift value for USB_INTKNTXFEMP */
#define _USB_DIEP0INT_INTKNTXFEMP_MASK           0x10UL                                   /**< Bit mask for USB_INTKNTXFEMP */
#define _USB_DIEP0INT_INTKNTXFEMP_DEFAULT        0x00000000UL                             /**< Mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_INTKNTXFEMP_DEFAULT         (_USB_DIEP0INT_INTKNTXFEMP_DEFAULT << 4) /**< Shifted mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_INTKNEPMIS                  (0x1UL << 5)                             /**< IN Token Received with EP Mismatch */
#define _USB_DIEP0INT_INTKNEPMIS_SHIFT           5                                        /**< Shift value for USB_INTKNEPMIS */
#define _USB_DIEP0INT_INTKNEPMIS_MASK            0x20UL                                   /**< Bit mask for USB_INTKNEPMIS */
#define _USB_DIEP0INT_INTKNEPMIS_DEFAULT         0x00000000UL                             /**< Mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_INTKNEPMIS_DEFAULT          (_USB_DIEP0INT_INTKNEPMIS_DEFAULT << 5)  /**< Shifted mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_INEPNAKEFF                  (0x1UL << 6)                             /**< IN Endpoint NAK Effective */
#define _USB_DIEP0INT_INEPNAKEFF_SHIFT           6                                        /**< Shift value for USB_INEPNAKEFF */
#define _USB_DIEP0INT_INEPNAKEFF_MASK            0x40UL                                   /**< Bit mask for USB_INEPNAKEFF */
#define _USB_DIEP0INT_INEPNAKEFF_DEFAULT         0x00000000UL                             /**< Mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_INEPNAKEFF_DEFAULT          (_USB_DIEP0INT_INEPNAKEFF_DEFAULT << 6)  /**< Shifted mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_TXFEMP                      (0x1UL << 7)                             /**< Transmit FIFO Empty */
#define _USB_DIEP0INT_TXFEMP_SHIFT               7                                        /**< Shift value for USB_TXFEMP */
#define _USB_DIEP0INT_TXFEMP_MASK                0x80UL                                   /**< Bit mask for USB_TXFEMP */
#define _USB_DIEP0INT_TXFEMP_DEFAULT             0x00000001UL                             /**< Mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_TXFEMP_DEFAULT              (_USB_DIEP0INT_TXFEMP_DEFAULT << 7)      /**< Shifted mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_TXFIFOUNDRN                 (0x1UL << 8)                             /**< Fifo Underrun */
#define _USB_DIEP0INT_TXFIFOUNDRN_SHIFT          8                                        /**< Shift value for USB_TXFIFOUNDRN */
#define _USB_DIEP0INT_TXFIFOUNDRN_MASK           0x100UL                                  /**< Bit mask for USB_TXFIFOUNDRN */
#define _USB_DIEP0INT_TXFIFOUNDRN_DEFAULT        0x00000000UL                             /**< Mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_TXFIFOUNDRN_DEFAULT         (_USB_DIEP0INT_TXFIFOUNDRN_DEFAULT << 8) /**< Shifted mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_PKTDRPSTS                   (0x1UL << 11)                            /**< Packet Drop Status */
#define _USB_DIEP0INT_PKTDRPSTS_SHIFT            11                                       /**< Shift value for USB_PKTDRPSTS */
#define _USB_DIEP0INT_PKTDRPSTS_MASK             0x800UL                                  /**< Bit mask for USB_PKTDRPSTS */
#define _USB_DIEP0INT_PKTDRPSTS_DEFAULT          0x00000000UL                             /**< Mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_PKTDRPSTS_DEFAULT           (_USB_DIEP0INT_PKTDRPSTS_DEFAULT << 11)  /**< Shifted mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_BBLEERR                     (0x1UL << 12)                            /**< NAK Interrupt */
#define _USB_DIEP0INT_BBLEERR_SHIFT              12                                       /**< Shift value for USB_BBLEERR */
#define _USB_DIEP0INT_BBLEERR_MASK               0x1000UL                                 /**< Bit mask for USB_BBLEERR */
#define _USB_DIEP0INT_BBLEERR_DEFAULT            0x00000000UL                             /**< Mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_BBLEERR_DEFAULT             (_USB_DIEP0INT_BBLEERR_DEFAULT << 12)    /**< Shifted mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_NAKINTRPT                   (0x1UL << 13)                            /**<  */
#define _USB_DIEP0INT_NAKINTRPT_SHIFT            13                                       /**< Shift value for USB_NAKINTRPT */
#define _USB_DIEP0INT_NAKINTRPT_MASK             0x2000UL                                 /**< Bit mask for USB_NAKINTRPT */
#define _USB_DIEP0INT_NAKINTRPT_DEFAULT          0x00000000UL                             /**< Mode DEFAULT for USB_DIEP0INT */
#define USB_DIEP0INT_NAKINTRPT_DEFAULT           (_USB_DIEP0INT_NAKINTRPT_DEFAULT << 13)  /**< Shifted mode DEFAULT for USB_DIEP0INT */

/* Bit fields for USB DIEP0TSIZ */
#define _USB_DIEP0TSIZ_RESETVALUE                0x00000000UL                           /**< Default value for USB_DIEP0TSIZ */
#define _USB_DIEP0TSIZ_MASK                      0x0018007FUL                           /**< Mask for USB_DIEP0TSIZ */
#define _USB_DIEP0TSIZ_XFERSIZE_SHIFT            0                                      /**< Shift value for USB_XFERSIZE */
#define _USB_DIEP0TSIZ_XFERSIZE_MASK             0x7FUL                                 /**< Bit mask for USB_XFERSIZE */
#define _USB_DIEP0TSIZ_XFERSIZE_DEFAULT          0x00000000UL                           /**< Mode DEFAULT for USB_DIEP0TSIZ */
#define USB_DIEP0TSIZ_XFERSIZE_DEFAULT           (_USB_DIEP0TSIZ_XFERSIZE_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DIEP0TSIZ */
#define _USB_DIEP0TSIZ_PKTCNT_SHIFT              19                                     /**< Shift value for USB_PKTCNT */
#define _USB_DIEP0TSIZ_PKTCNT_MASK               0x180000UL                             /**< Bit mask for USB_PKTCNT */
#define _USB_DIEP0TSIZ_PKTCNT_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for USB_DIEP0TSIZ */
#define USB_DIEP0TSIZ_PKTCNT_DEFAULT             (_USB_DIEP0TSIZ_PKTCNT_DEFAULT << 19)  /**< Shifted mode DEFAULT for USB_DIEP0TSIZ */

/* Bit fields for USB DIEP0DMAADDR */
#define _USB_DIEP0DMAADDR_RESETVALUE             0x00000000UL                             /**< Default value for USB_DIEP0DMAADDR */
#define _USB_DIEP0DMAADDR_MASK                   0xFFFFFFFFUL                             /**< Mask for USB_DIEP0DMAADDR */
#define _USB_DIEP0DMAADDR_DMAADDR_SHIFT          0                                        /**< Shift value for USB_DMAADDR */
#define _USB_DIEP0DMAADDR_DMAADDR_MASK           0xFFFFFFFFUL                             /**< Bit mask for USB_DMAADDR */
#define _USB_DIEP0DMAADDR_DMAADDR_DEFAULT        0x00000000UL                             /**< Mode DEFAULT for USB_DIEP0DMAADDR */
#define USB_DIEP0DMAADDR_DMAADDR_DEFAULT         (_USB_DIEP0DMAADDR_DMAADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DIEP0DMAADDR */

/* Bit fields for USB DIEP0TXFSTS */
#define _USB_DIEP0TXFSTS_RESETVALUE              0x00000200UL                             /**< Default value for USB_DIEP0TXFSTS */
#define _USB_DIEP0TXFSTS_MASK                    0x0000FFFFUL                             /**< Mask for USB_DIEP0TXFSTS */
#define _USB_DIEP0TXFSTS_SPCAVAIL_SHIFT          0                                        /**< Shift value for USB_SPCAVAIL */
#define _USB_DIEP0TXFSTS_SPCAVAIL_MASK           0xFFFFUL                                 /**< Bit mask for USB_SPCAVAIL */
#define _USB_DIEP0TXFSTS_SPCAVAIL_DEFAULT        0x00000200UL                             /**< Mode DEFAULT for USB_DIEP0TXFSTS */
#define USB_DIEP0TXFSTS_SPCAVAIL_DEFAULT         (_USB_DIEP0TXFSTS_SPCAVAIL_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DIEP0TXFSTS */

/* Bit fields for USB DIEP_CTL */
#define _USB_DIEP_CTL_RESETVALUE                 0x00000000UL                             /**< Default value for USB_DIEP_CTL */
#define _USB_DIEP_CTL_MASK                       0xFFEF87FFUL                             /**< Mask for USB_DIEP_CTL */
#define _USB_DIEP_CTL_MPS_SHIFT                  0                                        /**< Shift value for USB_MPS */
#define _USB_DIEP_CTL_MPS_MASK                   0x7FFUL                                  /**< Bit mask for USB_MPS */
#define _USB_DIEP_CTL_MPS_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_MPS_DEFAULT                 (_USB_DIEP_CTL_MPS_DEFAULT << 0)         /**< Shifted mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_USBACTEP                    (0x1UL << 15)                            /**< USB Active Endpoint */
#define _USB_DIEP_CTL_USBACTEP_SHIFT             15                                       /**< Shift value for USB_USBACTEP */
#define _USB_DIEP_CTL_USBACTEP_MASK              0x8000UL                                 /**< Bit mask for USB_USBACTEP */
#define _USB_DIEP_CTL_USBACTEP_DEFAULT           0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_USBACTEP_DEFAULT            (_USB_DIEP_CTL_USBACTEP_DEFAULT << 15)   /**< Shifted mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_DPID                        (0x1UL << 16)                            /**< Endpoint Data PID */
#define _USB_DIEP_CTL_DPID_SHIFT                 16                                       /**< Shift value for USB_DPID */
#define _USB_DIEP_CTL_DPID_MASK                  0x10000UL                                /**< Bit mask for USB_DPID */
#define _USB_DIEP_CTL_DPID_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_DPID_DEFAULT                (_USB_DIEP_CTL_DPID_DEFAULT << 16)       /**< Shifted mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_NAKSTS                      (0x1UL << 17)                            /**< NAK Status */
#define _USB_DIEP_CTL_NAKSTS_SHIFT               17                                       /**< Shift value for USB_NAKSTS */
#define _USB_DIEP_CTL_NAKSTS_MASK                0x20000UL                                /**< Bit mask for USB_NAKSTS */
#define _USB_DIEP_CTL_NAKSTS_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_NAKSTS_DEFAULT              (_USB_DIEP_CTL_NAKSTS_DEFAULT << 17)     /**< Shifted mode DEFAULT for USB_DIEP_CTL */
#define _USB_DIEP_CTL_EPTYPE_SHIFT               18                                       /**< Shift value for USB_EPTYPE */
#define _USB_DIEP_CTL_EPTYPE_MASK                0xC0000UL                                /**< Bit mask for USB_EPTYPE */
#define _USB_DIEP_CTL_EPTYPE_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_EPTYPE_DEFAULT              (_USB_DIEP_CTL_EPTYPE_DEFAULT << 18)     /**< Shifted mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_STALL                       (0x1UL << 21)                            /**< Handshake */
#define _USB_DIEP_CTL_STALL_SHIFT                21                                       /**< Shift value for USB_STALL */
#define _USB_DIEP_CTL_STALL_MASK                 0x200000UL                               /**< Bit mask for USB_STALL */
#define _USB_DIEP_CTL_STALL_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_STALL_DEFAULT               (_USB_DIEP_CTL_STALL_DEFAULT << 21)      /**< Shifted mode DEFAULT for USB_DIEP_CTL */
#define _USB_DIEP_CTL_TXFNUM_SHIFT               22                                       /**< Shift value for USB_TXFNUM */
#define _USB_DIEP_CTL_TXFNUM_MASK                0x3C00000UL                              /**< Bit mask for USB_TXFNUM */
#define _USB_DIEP_CTL_TXFNUM_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_TXFNUM_DEFAULT              (_USB_DIEP_CTL_TXFNUM_DEFAULT << 22)     /**< Shifted mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_CNAK                        (0x1UL << 26)                            /**< Clear NAK */
#define _USB_DIEP_CTL_CNAK_SHIFT                 26                                       /**< Shift value for USB_CNAK */
#define _USB_DIEP_CTL_CNAK_MASK                  0x4000000UL                              /**< Bit mask for USB_CNAK */
#define _USB_DIEP_CTL_CNAK_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_CNAK_DEFAULT                (_USB_DIEP_CTL_CNAK_DEFAULT << 26)       /**< Shifted mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_SNAK                        (0x1UL << 27)                            /**< Set NAK */
#define _USB_DIEP_CTL_SNAK_SHIFT                 27                                       /**< Shift value for USB_SNAK */
#define _USB_DIEP_CTL_SNAK_MASK                  0x8000000UL                              /**< Bit mask for USB_SNAK */
#define _USB_DIEP_CTL_SNAK_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_SNAK_DEFAULT                (_USB_DIEP_CTL_SNAK_DEFAULT << 27)       /**< Shifted mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_SETD0PIDEF                  (0x1UL << 28)                            /**< Set DATA0 PID */
#define _USB_DIEP_CTL_SETD0PIDEF_SHIFT           28                                       /**< Shift value for USB_SETD0PIDEF */
#define _USB_DIEP_CTL_SETD0PIDEF_MASK            0x10000000UL                             /**< Bit mask for USB_SETD0PIDEF */
#define _USB_DIEP_CTL_SETD0PIDEF_DEFAULT         0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_SETD0PIDEF_DEFAULT          (_USB_DIEP_CTL_SETD0PIDEF_DEFAULT << 28) /**< Shifted mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_SETD1PIDOF                  (0x1UL << 29)                            /**< Set DATA1 PID */
#define _USB_DIEP_CTL_SETD1PIDOF_SHIFT           29                                       /**< Shift value for USB_SETD1PIDOF */
#define _USB_DIEP_CTL_SETD1PIDOF_MASK            0x20000000UL                             /**< Bit mask for USB_SETD1PIDOF */
#define _USB_DIEP_CTL_SETD1PIDOF_DEFAULT         0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_SETD1PIDOF_DEFAULT          (_USB_DIEP_CTL_SETD1PIDOF_DEFAULT << 29) /**< Shifted mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_EPDIS                       (0x1UL << 30)                            /**< Endpoint Disable */
#define _USB_DIEP_CTL_EPDIS_SHIFT                30                                       /**< Shift value for USB_EPDIS */
#define _USB_DIEP_CTL_EPDIS_MASK                 0x40000000UL                             /**< Bit mask for USB_EPDIS */
#define _USB_DIEP_CTL_EPDIS_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_EPDIS_DEFAULT               (_USB_DIEP_CTL_EPDIS_DEFAULT << 30)      /**< Shifted mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_EPENA                       (0x1UL << 31)                            /**< Endpoint Enable */
#define _USB_DIEP_CTL_EPENA_SHIFT                31                                       /**< Shift value for USB_EPENA */
#define _USB_DIEP_CTL_EPENA_MASK                 0x80000000UL                             /**< Bit mask for USB_EPENA */
#define _USB_DIEP_CTL_EPENA_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_CTL */
#define USB_DIEP_CTL_EPENA_DEFAULT               (_USB_DIEP_CTL_EPENA_DEFAULT << 31)      /**< Shifted mode DEFAULT for USB_DIEP_CTL */

/* Bit fields for USB DIEP_INT */
#define _USB_DIEP_INT_RESETVALUE                 0x00000080UL                             /**< Default value for USB_DIEP_INT */
#define _USB_DIEP_INT_MASK                       0x000039FFUL                             /**< Mask for USB_DIEP_INT */
#define USB_DIEP_INT_XFERCOMPL                   (0x1UL << 0)                             /**< Transfer Completed Interrupt */
#define _USB_DIEP_INT_XFERCOMPL_SHIFT            0                                        /**< Shift value for USB_XFERCOMPL */
#define _USB_DIEP_INT_XFERCOMPL_MASK             0x1UL                                    /**< Bit mask for USB_XFERCOMPL */
#define _USB_DIEP_INT_XFERCOMPL_DEFAULT          0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_XFERCOMPL_DEFAULT           (_USB_DIEP_INT_XFERCOMPL_DEFAULT << 0)   /**< Shifted mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_EPDISBLD                    (0x1UL << 1)                             /**< Endpoint Disabled Interrupt */
#define _USB_DIEP_INT_EPDISBLD_SHIFT             1                                        /**< Shift value for USB_EPDISBLD */
#define _USB_DIEP_INT_EPDISBLD_MASK              0x2UL                                    /**< Bit mask for USB_EPDISBLD */
#define _USB_DIEP_INT_EPDISBLD_DEFAULT           0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_EPDISBLD_DEFAULT            (_USB_DIEP_INT_EPDISBLD_DEFAULT << 1)    /**< Shifted mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_AHBERR                      (0x1UL << 2)                             /**< AHB Error */
#define _USB_DIEP_INT_AHBERR_SHIFT               2                                        /**< Shift value for USB_AHBERR */
#define _USB_DIEP_INT_AHBERR_MASK                0x4UL                                    /**< Bit mask for USB_AHBERR */
#define _USB_DIEP_INT_AHBERR_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_AHBERR_DEFAULT              (_USB_DIEP_INT_AHBERR_DEFAULT << 2)      /**< Shifted mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_TIMEOUT                     (0x1UL << 3)                             /**< Condition */
#define _USB_DIEP_INT_TIMEOUT_SHIFT              3                                        /**< Shift value for USB_TIMEOUT */
#define _USB_DIEP_INT_TIMEOUT_MASK               0x8UL                                    /**< Bit mask for USB_TIMEOUT */
#define _USB_DIEP_INT_TIMEOUT_DEFAULT            0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_TIMEOUT_DEFAULT             (_USB_DIEP_INT_TIMEOUT_DEFAULT << 3)     /**< Shifted mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_INTKNTXFEMP                 (0x1UL << 4)                             /**< IN Token Received When TxFIFO is Empty */
#define _USB_DIEP_INT_INTKNTXFEMP_SHIFT          4                                        /**< Shift value for USB_INTKNTXFEMP */
#define _USB_DIEP_INT_INTKNTXFEMP_MASK           0x10UL                                   /**< Bit mask for USB_INTKNTXFEMP */
#define _USB_DIEP_INT_INTKNTXFEMP_DEFAULT        0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_INTKNTXFEMP_DEFAULT         (_USB_DIEP_INT_INTKNTXFEMP_DEFAULT << 4) /**< Shifted mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_INTKNEPMIS                  (0x1UL << 5)                             /**< IN Token Received with EP Mismatch */
#define _USB_DIEP_INT_INTKNEPMIS_SHIFT           5                                        /**< Shift value for USB_INTKNEPMIS */
#define _USB_DIEP_INT_INTKNEPMIS_MASK            0x20UL                                   /**< Bit mask for USB_INTKNEPMIS */
#define _USB_DIEP_INT_INTKNEPMIS_DEFAULT         0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_INTKNEPMIS_DEFAULT          (_USB_DIEP_INT_INTKNEPMIS_DEFAULT << 5)  /**< Shifted mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_INEPNAKEFF                  (0x1UL << 6)                             /**< IN Endpoint NAK Effective */
#define _USB_DIEP_INT_INEPNAKEFF_SHIFT           6                                        /**< Shift value for USB_INEPNAKEFF */
#define _USB_DIEP_INT_INEPNAKEFF_MASK            0x40UL                                   /**< Bit mask for USB_INEPNAKEFF */
#define _USB_DIEP_INT_INEPNAKEFF_DEFAULT         0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_INEPNAKEFF_DEFAULT          (_USB_DIEP_INT_INEPNAKEFF_DEFAULT << 6)  /**< Shifted mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_TXFEMP                      (0x1UL << 7)                             /**< Transmit FIFO Empty */
#define _USB_DIEP_INT_TXFEMP_SHIFT               7                                        /**< Shift value for USB_TXFEMP */
#define _USB_DIEP_INT_TXFEMP_MASK                0x80UL                                   /**< Bit mask for USB_TXFEMP */
#define _USB_DIEP_INT_TXFEMP_DEFAULT             0x00000001UL                             /**< Mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_TXFEMP_DEFAULT              (_USB_DIEP_INT_TXFEMP_DEFAULT << 7)      /**< Shifted mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_TXFIFOUNDRN                 (0x1UL << 8)                             /**< Fifo Underrun */
#define _USB_DIEP_INT_TXFIFOUNDRN_SHIFT          8                                        /**< Shift value for USB_TXFIFOUNDRN */
#define _USB_DIEP_INT_TXFIFOUNDRN_MASK           0x100UL                                  /**< Bit mask for USB_TXFIFOUNDRN */
#define _USB_DIEP_INT_TXFIFOUNDRN_DEFAULT        0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_TXFIFOUNDRN_DEFAULT         (_USB_DIEP_INT_TXFIFOUNDRN_DEFAULT << 8) /**< Shifted mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_PKTDRPSTS                   (0x1UL << 11)                            /**< Packet Drop Status */
#define _USB_DIEP_INT_PKTDRPSTS_SHIFT            11                                       /**< Shift value for USB_PKTDRPSTS */
#define _USB_DIEP_INT_PKTDRPSTS_MASK             0x800UL                                  /**< Bit mask for USB_PKTDRPSTS */
#define _USB_DIEP_INT_PKTDRPSTS_DEFAULT          0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_PKTDRPSTS_DEFAULT           (_USB_DIEP_INT_PKTDRPSTS_DEFAULT << 11)  /**< Shifted mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_BBLEERR                     (0x1UL << 12)                            /**< NAK Interrupt */
#define _USB_DIEP_INT_BBLEERR_SHIFT              12                                       /**< Shift value for USB_BBLEERR */
#define _USB_DIEP_INT_BBLEERR_MASK               0x1000UL                                 /**< Bit mask for USB_BBLEERR */
#define _USB_DIEP_INT_BBLEERR_DEFAULT            0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_BBLEERR_DEFAULT             (_USB_DIEP_INT_BBLEERR_DEFAULT << 12)    /**< Shifted mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_NAKINTRPT                   (0x1UL << 13)                            /**<  */
#define _USB_DIEP_INT_NAKINTRPT_SHIFT            13                                       /**< Shift value for USB_NAKINTRPT */
#define _USB_DIEP_INT_NAKINTRPT_MASK             0x2000UL                                 /**< Bit mask for USB_NAKINTRPT */
#define _USB_DIEP_INT_NAKINTRPT_DEFAULT          0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_INT */
#define USB_DIEP_INT_NAKINTRPT_DEFAULT           (_USB_DIEP_INT_NAKINTRPT_DEFAULT << 13)  /**< Shifted mode DEFAULT for USB_DIEP_INT */

/* Bit fields for USB DIEP_TSIZ */
#define _USB_DIEP_TSIZ_RESETVALUE                0x00000000UL                           /**< Default value for USB_DIEP_TSIZ */
#define _USB_DIEP_TSIZ_MASK                      0x7FFFFFFFUL                           /**< Mask for USB_DIEP_TSIZ */
#define _USB_DIEP_TSIZ_XFERSIZE_SHIFT            0                                      /**< Shift value for USB_XFERSIZE */
#define _USB_DIEP_TSIZ_XFERSIZE_MASK             0x7FFFFUL                              /**< Bit mask for USB_XFERSIZE */
#define _USB_DIEP_TSIZ_XFERSIZE_DEFAULT          0x00000000UL                           /**< Mode DEFAULT for USB_DIEP_TSIZ */
#define USB_DIEP_TSIZ_XFERSIZE_DEFAULT           (_USB_DIEP_TSIZ_XFERSIZE_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DIEP_TSIZ */
#define _USB_DIEP_TSIZ_PKTCNT_SHIFT              19                                     /**< Shift value for USB_PKTCNT */
#define _USB_DIEP_TSIZ_PKTCNT_MASK               0x1FF80000UL                           /**< Bit mask for USB_PKTCNT */
#define _USB_DIEP_TSIZ_PKTCNT_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for USB_DIEP_TSIZ */
#define USB_DIEP_TSIZ_PKTCNT_DEFAULT             (_USB_DIEP_TSIZ_PKTCNT_DEFAULT << 19)  /**< Shifted mode DEFAULT for USB_DIEP_TSIZ */
#define _USB_DIEP_TSIZ_MC_SHIFT                  29                                     /**< Shift value for USB_MC */
#define _USB_DIEP_TSIZ_MC_MASK                   0x60000000UL                           /**< Bit mask for USB_MC */
#define _USB_DIEP_TSIZ_MC_DEFAULT                0x00000000UL                           /**< Mode DEFAULT for USB_DIEP_TSIZ */
#define USB_DIEP_TSIZ_MC_DEFAULT                 (_USB_DIEP_TSIZ_MC_DEFAULT << 29)      /**< Shifted mode DEFAULT for USB_DIEP_TSIZ */

/* Bit fields for USB DIEP_DMAADDR */
#define _USB_DIEP_DMAADDR_RESETVALUE             0x00000000UL                             /**< Default value for USB_DIEP_DMAADDR */
#define _USB_DIEP_DMAADDR_MASK                   0xFFFFFFFFUL                             /**< Mask for USB_DIEP_DMAADDR */
#define _USB_DIEP_DMAADDR_DMAADDR_SHIFT          0                                        /**< Shift value for USB_DMAADDR */
#define _USB_DIEP_DMAADDR_DMAADDR_MASK           0xFFFFFFFFUL                             /**< Bit mask for USB_DMAADDR */
#define _USB_DIEP_DMAADDR_DMAADDR_DEFAULT        0x00000000UL                             /**< Mode DEFAULT for USB_DIEP_DMAADDR */
#define USB_DIEP_DMAADDR_DMAADDR_DEFAULT         (_USB_DIEP_DMAADDR_DMAADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DIEP_DMAADDR */

/* Bit fields for USB DIEP_DTXFSTS */
#define _USB_DIEP_DTXFSTS_RESETVALUE             0x00000200UL                              /**< Default value for USB_DIEP_DTXFSTS */
#define _USB_DIEP_DTXFSTS_MASK                   0x0000FFFFUL                              /**< Mask for USB_DIEP_DTXFSTS */
#define _USB_DIEP_DTXFSTS_SPCAVAIL_SHIFT         0                                         /**< Shift value for USB_SPCAVAIL */
#define _USB_DIEP_DTXFSTS_SPCAVAIL_MASK          0xFFFFUL                                  /**< Bit mask for USB_SPCAVAIL */
#define _USB_DIEP_DTXFSTS_SPCAVAIL_DEFAULT       0x00000200UL                              /**< Mode DEFAULT for USB_DIEP_DTXFSTS */
#define USB_DIEP_DTXFSTS_SPCAVAIL_DEFAULT        (_USB_DIEP_DTXFSTS_SPCAVAIL_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DIEP_DTXFSTS */

/* Bit fields for USB DOEP0CTL */
#define _USB_DOEP0CTL_RESETVALUE                 0x00008000UL                           /**< Default value for USB_DOEP0CTL */
#define _USB_DOEP0CTL_MASK                       0xCC3E8003UL                           /**< Mask for USB_DOEP0CTL */
#define _USB_DOEP0CTL_MPS_SHIFT                  0                                      /**< Shift value for USB_MPS */
#define _USB_DOEP0CTL_MPS_MASK                   0x3UL                                  /**< Bit mask for USB_MPS */
#define _USB_DOEP0CTL_MPS_DEFAULT                0x00000000UL                           /**< Mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_MPS_DEFAULT                 (_USB_DOEP0CTL_MPS_DEFAULT << 0)       /**< Shifted mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_USBACTEP                    (0x1UL << 15)                          /**< USB Active Endpoint */
#define _USB_DOEP0CTL_USBACTEP_SHIFT             15                                     /**< Shift value for USB_USBACTEP */
#define _USB_DOEP0CTL_USBACTEP_MASK              0x8000UL                               /**< Bit mask for USB_USBACTEP */
#define _USB_DOEP0CTL_USBACTEP_DEFAULT           0x00000001UL                           /**< Mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_USBACTEP_DEFAULT            (_USB_DOEP0CTL_USBACTEP_DEFAULT << 15) /**< Shifted mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_NAKSTS                      (0x1UL << 17)                          /**< NAK Status */
#define _USB_DOEP0CTL_NAKSTS_SHIFT               17                                     /**< Shift value for USB_NAKSTS */
#define _USB_DOEP0CTL_NAKSTS_MASK                0x20000UL                              /**< Bit mask for USB_NAKSTS */
#define _USB_DOEP0CTL_NAKSTS_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_NAKSTS_DEFAULT              (_USB_DOEP0CTL_NAKSTS_DEFAULT << 17)   /**< Shifted mode DEFAULT for USB_DOEP0CTL */
#define _USB_DOEP0CTL_EPTYPE_SHIFT               18                                     /**< Shift value for USB_EPTYPE */
#define _USB_DOEP0CTL_EPTYPE_MASK                0xC0000UL                              /**< Bit mask for USB_EPTYPE */
#define _USB_DOEP0CTL_EPTYPE_DEFAULT             0x00000000UL                           /**< Mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_EPTYPE_DEFAULT              (_USB_DOEP0CTL_EPTYPE_DEFAULT << 18)   /**< Shifted mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_SNP                         (0x1UL << 20)                          /**< Snoop Mode */
#define _USB_DOEP0CTL_SNP_SHIFT                  20                                     /**< Shift value for USB_SNP */
#define _USB_DOEP0CTL_SNP_MASK                   0x100000UL                             /**< Bit mask for USB_SNP */
#define _USB_DOEP0CTL_SNP_DEFAULT                0x00000000UL                           /**< Mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_SNP_DEFAULT                 (_USB_DOEP0CTL_SNP_DEFAULT << 20)      /**< Shifted mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_STALL                       (0x1UL << 21)                          /**< Handshake */
#define _USB_DOEP0CTL_STALL_SHIFT                21                                     /**< Shift value for USB_STALL */
#define _USB_DOEP0CTL_STALL_MASK                 0x200000UL                             /**< Bit mask for USB_STALL */
#define _USB_DOEP0CTL_STALL_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_STALL_DEFAULT               (_USB_DOEP0CTL_STALL_DEFAULT << 21)    /**< Shifted mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_CNAK                        (0x1UL << 26)                          /**< Clear NAK */
#define _USB_DOEP0CTL_CNAK_SHIFT                 26                                     /**< Shift value for USB_CNAK */
#define _USB_DOEP0CTL_CNAK_MASK                  0x4000000UL                            /**< Bit mask for USB_CNAK */
#define _USB_DOEP0CTL_CNAK_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_CNAK_DEFAULT                (_USB_DOEP0CTL_CNAK_DEFAULT << 26)     /**< Shifted mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_SNAK                        (0x1UL << 27)                          /**< Set NAK */
#define _USB_DOEP0CTL_SNAK_SHIFT                 27                                     /**< Shift value for USB_SNAK */
#define _USB_DOEP0CTL_SNAK_MASK                  0x8000000UL                            /**< Bit mask for USB_SNAK */
#define _USB_DOEP0CTL_SNAK_DEFAULT               0x00000000UL                           /**< Mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_SNAK_DEFAULT                (_USB_DOEP0CTL_SNAK_DEFAULT << 27)     /**< Shifted mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_EPDIS                       (0x1UL << 30)                          /**< Endpoint Disable */
#define _USB_DOEP0CTL_EPDIS_SHIFT                30                                     /**< Shift value for USB_EPDIS */
#define _USB_DOEP0CTL_EPDIS_MASK                 0x40000000UL                           /**< Bit mask for USB_EPDIS */
#define _USB_DOEP0CTL_EPDIS_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_EPDIS_DEFAULT               (_USB_DOEP0CTL_EPDIS_DEFAULT << 30)    /**< Shifted mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_EPENA                       (0x1UL << 31)                          /**< Endpoint Enable */
#define _USB_DOEP0CTL_EPENA_SHIFT                31                                     /**< Shift value for USB_EPENA */
#define _USB_DOEP0CTL_EPENA_MASK                 0x80000000UL                           /**< Bit mask for USB_EPENA */
#define _USB_DOEP0CTL_EPENA_DEFAULT              0x00000000UL                           /**< Mode DEFAULT for USB_DOEP0CTL */
#define USB_DOEP0CTL_EPENA_DEFAULT               (_USB_DOEP0CTL_EPENA_DEFAULT << 31)    /**< Shifted mode DEFAULT for USB_DOEP0CTL */

/* Bit fields for USB DOEP0INT */
#define _USB_DOEP0INT_RESETVALUE                 0x00000000UL                                /**< Default value for USB_DOEP0INT */
#define _USB_DOEP0INT_MASK                       0x0000B97FUL                                /**< Mask for USB_DOEP0INT */
#define USB_DOEP0INT_XFERCOMPL                   (0x1UL << 0)                                /**< Transfer Completed Interrupt */
#define _USB_DOEP0INT_XFERCOMPL_SHIFT            0                                           /**< Shift value for USB_XFERCOMPL */
#define _USB_DOEP0INT_XFERCOMPL_MASK             0x1UL                                       /**< Bit mask for USB_XFERCOMPL */
#define _USB_DOEP0INT_XFERCOMPL_DEFAULT          0x00000000UL                                /**< Mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_XFERCOMPL_DEFAULT           (_USB_DOEP0INT_XFERCOMPL_DEFAULT << 0)      /**< Shifted mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_EPDISBLD                    (0x1UL << 1)                                /**< Endpoint Disabled Interrupt */
#define _USB_DOEP0INT_EPDISBLD_SHIFT             1                                           /**< Shift value for USB_EPDISBLD */
#define _USB_DOEP0INT_EPDISBLD_MASK              0x2UL                                       /**< Bit mask for USB_EPDISBLD */
#define _USB_DOEP0INT_EPDISBLD_DEFAULT           0x00000000UL                                /**< Mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_EPDISBLD_DEFAULT            (_USB_DOEP0INT_EPDISBLD_DEFAULT << 1)       /**< Shifted mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_AHBERR                      (0x1UL << 2)                                /**< AHB Error */
#define _USB_DOEP0INT_AHBERR_SHIFT               2                                           /**< Shift value for USB_AHBERR */
#define _USB_DOEP0INT_AHBERR_MASK                0x4UL                                       /**< Bit mask for USB_AHBERR */
#define _USB_DOEP0INT_AHBERR_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_AHBERR_DEFAULT              (_USB_DOEP0INT_AHBERR_DEFAULT << 2)         /**< Shifted mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_SETUP                       (0x1UL << 3)                                /**< Phase Done */
#define _USB_DOEP0INT_SETUP_SHIFT                3                                           /**< Shift value for USB_SETUP */
#define _USB_DOEP0INT_SETUP_MASK                 0x8UL                                       /**< Bit mask for USB_SETUP */
#define _USB_DOEP0INT_SETUP_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_SETUP_DEFAULT               (_USB_DOEP0INT_SETUP_DEFAULT << 3)          /**< Shifted mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_OUTTKNEPDIS                 (0x1UL << 4)                                /**< OUT Token Received When Endpoint Disabled */
#define _USB_DOEP0INT_OUTTKNEPDIS_SHIFT          4                                           /**< Shift value for USB_OUTTKNEPDIS */
#define _USB_DOEP0INT_OUTTKNEPDIS_MASK           0x10UL                                      /**< Bit mask for USB_OUTTKNEPDIS */
#define _USB_DOEP0INT_OUTTKNEPDIS_DEFAULT        0x00000000UL                                /**< Mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_OUTTKNEPDIS_DEFAULT         (_USB_DOEP0INT_OUTTKNEPDIS_DEFAULT << 4)    /**< Shifted mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_STSPHSERCVD                 (0x1UL << 5)                                /**< Status Phase Received For Control Write */
#define _USB_DOEP0INT_STSPHSERCVD_SHIFT          5                                           /**< Shift value for USB_STSPHSERCVD */
#define _USB_DOEP0INT_STSPHSERCVD_MASK           0x20UL                                      /**< Bit mask for USB_STSPHSERCVD */
#define _USB_DOEP0INT_STSPHSERCVD_DEFAULT        0x00000000UL                                /**< Mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_STSPHSERCVD_DEFAULT         (_USB_DOEP0INT_STSPHSERCVD_DEFAULT << 5)    /**< Shifted mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_BACK2BACKSETUP              (0x1UL << 6)                                /**< Back-to-Back SETUP Packets Received */
#define _USB_DOEP0INT_BACK2BACKSETUP_SHIFT       6                                           /**< Shift value for USB_BACK2BACKSETUP */
#define _USB_DOEP0INT_BACK2BACKSETUP_MASK        0x40UL                                      /**< Bit mask for USB_BACK2BACKSETUP */
#define _USB_DOEP0INT_BACK2BACKSETUP_DEFAULT     0x00000000UL                                /**< Mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_BACK2BACKSETUP_DEFAULT      (_USB_DOEP0INT_BACK2BACKSETUP_DEFAULT << 6) /**< Shifted mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_OUTPKTERR                   (0x1UL << 8)                                /**< OUT Packet Error */
#define _USB_DOEP0INT_OUTPKTERR_SHIFT            8                                           /**< Shift value for USB_OUTPKTERR */
#define _USB_DOEP0INT_OUTPKTERR_MASK             0x100UL                                     /**< Bit mask for USB_OUTPKTERR */
#define _USB_DOEP0INT_OUTPKTERR_DEFAULT          0x00000000UL                                /**< Mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_OUTPKTERR_DEFAULT           (_USB_DOEP0INT_OUTPKTERR_DEFAULT << 8)      /**< Shifted mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_PKTDRPSTS                   (0x1UL << 11)                               /**< Packet Drop Status */
#define _USB_DOEP0INT_PKTDRPSTS_SHIFT            11                                          /**< Shift value for USB_PKTDRPSTS */
#define _USB_DOEP0INT_PKTDRPSTS_MASK             0x800UL                                     /**< Bit mask for USB_PKTDRPSTS */
#define _USB_DOEP0INT_PKTDRPSTS_DEFAULT          0x00000000UL                                /**< Mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_PKTDRPSTS_DEFAULT           (_USB_DOEP0INT_PKTDRPSTS_DEFAULT << 11)     /**< Shifted mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_BBLEERR                     (0x1UL << 12)                               /**< NAK Interrupt */
#define _USB_DOEP0INT_BBLEERR_SHIFT              12                                          /**< Shift value for USB_BBLEERR */
#define _USB_DOEP0INT_BBLEERR_MASK               0x1000UL                                    /**< Bit mask for USB_BBLEERR */
#define _USB_DOEP0INT_BBLEERR_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_BBLEERR_DEFAULT             (_USB_DOEP0INT_BBLEERR_DEFAULT << 12)       /**< Shifted mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_NAKINTRPT                   (0x1UL << 13)                               /**<  */
#define _USB_DOEP0INT_NAKINTRPT_SHIFT            13                                          /**< Shift value for USB_NAKINTRPT */
#define _USB_DOEP0INT_NAKINTRPT_MASK             0x2000UL                                    /**< Bit mask for USB_NAKINTRPT */
#define _USB_DOEP0INT_NAKINTRPT_DEFAULT          0x00000000UL                                /**< Mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_NAKINTRPT_DEFAULT           (_USB_DOEP0INT_NAKINTRPT_DEFAULT << 13)     /**< Shifted mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_STUPPKTRCVD                 (0x1UL << 15)                               /**<  */
#define _USB_DOEP0INT_STUPPKTRCVD_SHIFT          15                                          /**< Shift value for USB_STUPPKTRCVD */
#define _USB_DOEP0INT_STUPPKTRCVD_MASK           0x8000UL                                    /**< Bit mask for USB_STUPPKTRCVD */
#define _USB_DOEP0INT_STUPPKTRCVD_DEFAULT        0x00000000UL                                /**< Mode DEFAULT for USB_DOEP0INT */
#define USB_DOEP0INT_STUPPKTRCVD_DEFAULT         (_USB_DOEP0INT_STUPPKTRCVD_DEFAULT << 15)   /**< Shifted mode DEFAULT for USB_DOEP0INT */

/* Bit fields for USB DOEP0TSIZ */
#define _USB_DOEP0TSIZ_RESETVALUE                0x00000000UL                           /**< Default value for USB_DOEP0TSIZ */
#define _USB_DOEP0TSIZ_MASK                      0x6008007FUL                           /**< Mask for USB_DOEP0TSIZ */
#define _USB_DOEP0TSIZ_XFERSIZE_SHIFT            0                                      /**< Shift value for USB_XFERSIZE */
#define _USB_DOEP0TSIZ_XFERSIZE_MASK             0x7FUL                                 /**< Bit mask for USB_XFERSIZE */
#define _USB_DOEP0TSIZ_XFERSIZE_DEFAULT          0x00000000UL                           /**< Mode DEFAULT for USB_DOEP0TSIZ */
#define USB_DOEP0TSIZ_XFERSIZE_DEFAULT           (_USB_DOEP0TSIZ_XFERSIZE_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DOEP0TSIZ */
#define USB_DOEP0TSIZ_PKTCNT                     (0x1UL << 19)                          /**< Packet Count */
#define _USB_DOEP0TSIZ_PKTCNT_SHIFT              19                                     /**< Shift value for USB_PKTCNT */
#define _USB_DOEP0TSIZ_PKTCNT_MASK               0x80000UL                              /**< Bit mask for USB_PKTCNT */
#define _USB_DOEP0TSIZ_PKTCNT_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for USB_DOEP0TSIZ */
#define USB_DOEP0TSIZ_PKTCNT_DEFAULT             (_USB_DOEP0TSIZ_PKTCNT_DEFAULT << 19)  /**< Shifted mode DEFAULT for USB_DOEP0TSIZ */
#define _USB_DOEP0TSIZ_SUPCNT_SHIFT              29                                     /**< Shift value for USB_SUPCNT */
#define _USB_DOEP0TSIZ_SUPCNT_MASK               0x60000000UL                           /**< Bit mask for USB_SUPCNT */
#define _USB_DOEP0TSIZ_SUPCNT_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for USB_DOEP0TSIZ */
#define USB_DOEP0TSIZ_SUPCNT_DEFAULT             (_USB_DOEP0TSIZ_SUPCNT_DEFAULT << 29)  /**< Shifted mode DEFAULT for USB_DOEP0TSIZ */

/* Bit fields for USB DOEP0DMAADDR */
#define _USB_DOEP0DMAADDR_RESETVALUE             0x00000000UL                             /**< Default value for USB_DOEP0DMAADDR */
#define _USB_DOEP0DMAADDR_MASK                   0xFFFFFFFFUL                             /**< Mask for USB_DOEP0DMAADDR */
#define _USB_DOEP0DMAADDR_DMAADDR_SHIFT          0                                        /**< Shift value for USB_DMAADDR */
#define _USB_DOEP0DMAADDR_DMAADDR_MASK           0xFFFFFFFFUL                             /**< Bit mask for USB_DMAADDR */
#define _USB_DOEP0DMAADDR_DMAADDR_DEFAULT        0x00000000UL                             /**< Mode DEFAULT for USB_DOEP0DMAADDR */
#define USB_DOEP0DMAADDR_DMAADDR_DEFAULT         (_USB_DOEP0DMAADDR_DMAADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DOEP0DMAADDR */

/* Bit fields for USB DOEP_CTL */
#define _USB_DOEP_CTL_RESETVALUE                 0x00000000UL                             /**< Default value for USB_DOEP_CTL */
#define _USB_DOEP_CTL_MASK                       0xFC3F87FFUL                             /**< Mask for USB_DOEP_CTL */
#define _USB_DOEP_CTL_MPS_SHIFT                  0                                        /**< Shift value for USB_MPS */
#define _USB_DOEP_CTL_MPS_MASK                   0x7FFUL                                  /**< Bit mask for USB_MPS */
#define _USB_DOEP_CTL_MPS_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_MPS_DEFAULT                 (_USB_DOEP_CTL_MPS_DEFAULT << 0)         /**< Shifted mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_USBACTEP                    (0x1UL << 15)                            /**< USB Active Endpoint */
#define _USB_DOEP_CTL_USBACTEP_SHIFT             15                                       /**< Shift value for USB_USBACTEP */
#define _USB_DOEP_CTL_USBACTEP_MASK              0x8000UL                                 /**< Bit mask for USB_USBACTEP */
#define _USB_DOEP_CTL_USBACTEP_DEFAULT           0x00000000UL                             /**< Mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_USBACTEP_DEFAULT            (_USB_DOEP_CTL_USBACTEP_DEFAULT << 15)   /**< Shifted mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_DPID                        (0x1UL << 16)                            /**< Endpoint Data PID */
#define _USB_DOEP_CTL_DPID_SHIFT                 16                                       /**< Shift value for USB_DPID */
#define _USB_DOEP_CTL_DPID_MASK                  0x10000UL                                /**< Bit mask for USB_DPID */
#define _USB_DOEP_CTL_DPID_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_DPID_DEFAULT                (_USB_DOEP_CTL_DPID_DEFAULT << 16)       /**< Shifted mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_NAKSTS                      (0x1UL << 17)                            /**< NAK Status */
#define _USB_DOEP_CTL_NAKSTS_SHIFT               17                                       /**< Shift value for USB_NAKSTS */
#define _USB_DOEP_CTL_NAKSTS_MASK                0x20000UL                                /**< Bit mask for USB_NAKSTS */
#define _USB_DOEP_CTL_NAKSTS_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_NAKSTS_DEFAULT              (_USB_DOEP_CTL_NAKSTS_DEFAULT << 17)     /**< Shifted mode DEFAULT for USB_DOEP_CTL */
#define _USB_DOEP_CTL_EPTYPE_SHIFT               18                                       /**< Shift value for USB_EPTYPE */
#define _USB_DOEP_CTL_EPTYPE_MASK                0xC0000UL                                /**< Bit mask for USB_EPTYPE */
#define _USB_DOEP_CTL_EPTYPE_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_EPTYPE_DEFAULT              (_USB_DOEP_CTL_EPTYPE_DEFAULT << 18)     /**< Shifted mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_SNP                         (0x1UL << 20)                            /**< Snoop Mode */
#define _USB_DOEP_CTL_SNP_SHIFT                  20                                       /**< Shift value for USB_SNP */
#define _USB_DOEP_CTL_SNP_MASK                   0x100000UL                               /**< Bit mask for USB_SNP */
#define _USB_DOEP_CTL_SNP_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_SNP_DEFAULT                 (_USB_DOEP_CTL_SNP_DEFAULT << 20)        /**< Shifted mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_STALL                       (0x1UL << 21)                            /**< Handshake */
#define _USB_DOEP_CTL_STALL_SHIFT                21                                       /**< Shift value for USB_STALL */
#define _USB_DOEP_CTL_STALL_MASK                 0x200000UL                               /**< Bit mask for USB_STALL */
#define _USB_DOEP_CTL_STALL_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_STALL_DEFAULT               (_USB_DOEP_CTL_STALL_DEFAULT << 21)      /**< Shifted mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_CNAK                        (0x1UL << 26)                            /**< Clear NAK */
#define _USB_DOEP_CTL_CNAK_SHIFT                 26                                       /**< Shift value for USB_CNAK */
#define _USB_DOEP_CTL_CNAK_MASK                  0x4000000UL                              /**< Bit mask for USB_CNAK */
#define _USB_DOEP_CTL_CNAK_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_CNAK_DEFAULT                (_USB_DOEP_CTL_CNAK_DEFAULT << 26)       /**< Shifted mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_SNAK                        (0x1UL << 27)                            /**< Set NAK */
#define _USB_DOEP_CTL_SNAK_SHIFT                 27                                       /**< Shift value for USB_SNAK */
#define _USB_DOEP_CTL_SNAK_MASK                  0x8000000UL                              /**< Bit mask for USB_SNAK */
#define _USB_DOEP_CTL_SNAK_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_SNAK_DEFAULT                (_USB_DOEP_CTL_SNAK_DEFAULT << 27)       /**< Shifted mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_SETD0PIDEF                  (0x1UL << 28)                            /**< Set DATA0 PID */
#define _USB_DOEP_CTL_SETD0PIDEF_SHIFT           28                                       /**< Shift value for USB_SETD0PIDEF */
#define _USB_DOEP_CTL_SETD0PIDEF_MASK            0x10000000UL                             /**< Bit mask for USB_SETD0PIDEF */
#define _USB_DOEP_CTL_SETD0PIDEF_DEFAULT         0x00000000UL                             /**< Mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_SETD0PIDEF_DEFAULT          (_USB_DOEP_CTL_SETD0PIDEF_DEFAULT << 28) /**< Shifted mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_SETD1PIDOF                  (0x1UL << 29)                            /**< Set DATA1 PID */
#define _USB_DOEP_CTL_SETD1PIDOF_SHIFT           29                                       /**< Shift value for USB_SETD1PIDOF */
#define _USB_DOEP_CTL_SETD1PIDOF_MASK            0x20000000UL                             /**< Bit mask for USB_SETD1PIDOF */
#define _USB_DOEP_CTL_SETD1PIDOF_DEFAULT         0x00000000UL                             /**< Mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_SETD1PIDOF_DEFAULT          (_USB_DOEP_CTL_SETD1PIDOF_DEFAULT << 29) /**< Shifted mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_EPDIS                       (0x1UL << 30)                            /**< Endpoint Disable */
#define _USB_DOEP_CTL_EPDIS_SHIFT                30                                       /**< Shift value for USB_EPDIS */
#define _USB_DOEP_CTL_EPDIS_MASK                 0x40000000UL                             /**< Bit mask for USB_EPDIS */
#define _USB_DOEP_CTL_EPDIS_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_EPDIS_DEFAULT               (_USB_DOEP_CTL_EPDIS_DEFAULT << 30)      /**< Shifted mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_EPENA                       (0x1UL << 31)                            /**< Endpoint Enable */
#define _USB_DOEP_CTL_EPENA_SHIFT                31                                       /**< Shift value for USB_EPENA */
#define _USB_DOEP_CTL_EPENA_MASK                 0x80000000UL                             /**< Bit mask for USB_EPENA */
#define _USB_DOEP_CTL_EPENA_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for USB_DOEP_CTL */
#define USB_DOEP_CTL_EPENA_DEFAULT               (_USB_DOEP_CTL_EPENA_DEFAULT << 31)      /**< Shifted mode DEFAULT for USB_DOEP_CTL */

/* Bit fields for USB DOEP_INT */
#define _USB_DOEP_INT_RESETVALUE                 0x00000000UL                                /**< Default value for USB_DOEP_INT */
#define _USB_DOEP_INT_MASK                       0x0000B97FUL                                /**< Mask for USB_DOEP_INT */
#define USB_DOEP_INT_XFERCOMPL                   (0x1UL << 0)                                /**< Transfer Completed Interrupt */
#define _USB_DOEP_INT_XFERCOMPL_SHIFT            0                                           /**< Shift value for USB_XFERCOMPL */
#define _USB_DOEP_INT_XFERCOMPL_MASK             0x1UL                                       /**< Bit mask for USB_XFERCOMPL */
#define _USB_DOEP_INT_XFERCOMPL_DEFAULT          0x00000000UL                                /**< Mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_XFERCOMPL_DEFAULT           (_USB_DOEP_INT_XFERCOMPL_DEFAULT << 0)      /**< Shifted mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_EPDISBLD                    (0x1UL << 1)                                /**< Endpoint Disabled Interrupt */
#define _USB_DOEP_INT_EPDISBLD_SHIFT             1                                           /**< Shift value for USB_EPDISBLD */
#define _USB_DOEP_INT_EPDISBLD_MASK              0x2UL                                       /**< Bit mask for USB_EPDISBLD */
#define _USB_DOEP_INT_EPDISBLD_DEFAULT           0x00000000UL                                /**< Mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_EPDISBLD_DEFAULT            (_USB_DOEP_INT_EPDISBLD_DEFAULT << 1)       /**< Shifted mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_AHBERR                      (0x1UL << 2)                                /**< AHB Error */
#define _USB_DOEP_INT_AHBERR_SHIFT               2                                           /**< Shift value for USB_AHBERR */
#define _USB_DOEP_INT_AHBERR_MASK                0x4UL                                       /**< Bit mask for USB_AHBERR */
#define _USB_DOEP_INT_AHBERR_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_AHBERR_DEFAULT              (_USB_DOEP_INT_AHBERR_DEFAULT << 2)         /**< Shifted mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_SETUP                       (0x1UL << 3)                                /**< Phase Done */
#define _USB_DOEP_INT_SETUP_SHIFT                3                                           /**< Shift value for USB_SETUP */
#define _USB_DOEP_INT_SETUP_MASK                 0x8UL                                       /**< Bit mask for USB_SETUP */
#define _USB_DOEP_INT_SETUP_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_SETUP_DEFAULT               (_USB_DOEP_INT_SETUP_DEFAULT << 3)          /**< Shifted mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_OUTTKNEPDIS                 (0x1UL << 4)                                /**< OUT Token Received When Endpoint Disabled */
#define _USB_DOEP_INT_OUTTKNEPDIS_SHIFT          4                                           /**< Shift value for USB_OUTTKNEPDIS */
#define _USB_DOEP_INT_OUTTKNEPDIS_MASK           0x10UL                                      /**< Bit mask for USB_OUTTKNEPDIS */
#define _USB_DOEP_INT_OUTTKNEPDIS_DEFAULT        0x00000000UL                                /**< Mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_OUTTKNEPDIS_DEFAULT         (_USB_DOEP_INT_OUTTKNEPDIS_DEFAULT << 4)    /**< Shifted mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_STSPHSERCVD                 (0x1UL << 5)                                /**< Status Phase Received For Control Write */
#define _USB_DOEP_INT_STSPHSERCVD_SHIFT          5                                           /**< Shift value for USB_STSPHSERCVD */
#define _USB_DOEP_INT_STSPHSERCVD_MASK           0x20UL                                      /**< Bit mask for USB_STSPHSERCVD */
#define _USB_DOEP_INT_STSPHSERCVD_DEFAULT        0x00000000UL                                /**< Mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_STSPHSERCVD_DEFAULT         (_USB_DOEP_INT_STSPHSERCVD_DEFAULT << 5)    /**< Shifted mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_BACK2BACKSETUP              (0x1UL << 6)                                /**< Back-to-Back SETUP Packets Received */
#define _USB_DOEP_INT_BACK2BACKSETUP_SHIFT       6                                           /**< Shift value for USB_BACK2BACKSETUP */
#define _USB_DOEP_INT_BACK2BACKSETUP_MASK        0x40UL                                      /**< Bit mask for USB_BACK2BACKSETUP */
#define _USB_DOEP_INT_BACK2BACKSETUP_DEFAULT     0x00000000UL                                /**< Mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_BACK2BACKSETUP_DEFAULT      (_USB_DOEP_INT_BACK2BACKSETUP_DEFAULT << 6) /**< Shifted mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_OUTPKTERR                   (0x1UL << 8)                                /**< OUT Packet Error */
#define _USB_DOEP_INT_OUTPKTERR_SHIFT            8                                           /**< Shift value for USB_OUTPKTERR */
#define _USB_DOEP_INT_OUTPKTERR_MASK             0x100UL                                     /**< Bit mask for USB_OUTPKTERR */
#define _USB_DOEP_INT_OUTPKTERR_DEFAULT          0x00000000UL                                /**< Mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_OUTPKTERR_DEFAULT           (_USB_DOEP_INT_OUTPKTERR_DEFAULT << 8)      /**< Shifted mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_PKTDRPSTS                   (0x1UL << 11)                               /**< Packet Drop Status */
#define _USB_DOEP_INT_PKTDRPSTS_SHIFT            11                                          /**< Shift value for USB_PKTDRPSTS */
#define _USB_DOEP_INT_PKTDRPSTS_MASK             0x800UL                                     /**< Bit mask for USB_PKTDRPSTS */
#define _USB_DOEP_INT_PKTDRPSTS_DEFAULT          0x00000000UL                                /**< Mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_PKTDRPSTS_DEFAULT           (_USB_DOEP_INT_PKTDRPSTS_DEFAULT << 11)     /**< Shifted mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_BBLEERR                     (0x1UL << 12)                               /**< NAK Interrupt */
#define _USB_DOEP_INT_BBLEERR_SHIFT              12                                          /**< Shift value for USB_BBLEERR */
#define _USB_DOEP_INT_BBLEERR_MASK               0x1000UL                                    /**< Bit mask for USB_BBLEERR */
#define _USB_DOEP_INT_BBLEERR_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_BBLEERR_DEFAULT             (_USB_DOEP_INT_BBLEERR_DEFAULT << 12)       /**< Shifted mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_NAKINTRPT                   (0x1UL << 13)                               /**<  */
#define _USB_DOEP_INT_NAKINTRPT_SHIFT            13                                          /**< Shift value for USB_NAKINTRPT */
#define _USB_DOEP_INT_NAKINTRPT_MASK             0x2000UL                                    /**< Bit mask for USB_NAKINTRPT */
#define _USB_DOEP_INT_NAKINTRPT_DEFAULT          0x00000000UL                                /**< Mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_NAKINTRPT_DEFAULT           (_USB_DOEP_INT_NAKINTRPT_DEFAULT << 13)     /**< Shifted mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_STUPPKTRCVD                 (0x1UL << 15)                               /**<  */
#define _USB_DOEP_INT_STUPPKTRCVD_SHIFT          15                                          /**< Shift value for USB_STUPPKTRCVD */
#define _USB_DOEP_INT_STUPPKTRCVD_MASK           0x8000UL                                    /**< Bit mask for USB_STUPPKTRCVD */
#define _USB_DOEP_INT_STUPPKTRCVD_DEFAULT        0x00000000UL                                /**< Mode DEFAULT for USB_DOEP_INT */
#define USB_DOEP_INT_STUPPKTRCVD_DEFAULT         (_USB_DOEP_INT_STUPPKTRCVD_DEFAULT << 15)   /**< Shifted mode DEFAULT for USB_DOEP_INT */

/* Bit fields for USB DOEP_TSIZ */
#define _USB_DOEP_TSIZ_RESETVALUE                0x00000000UL                           /**< Default value for USB_DOEP_TSIZ */
#define _USB_DOEP_TSIZ_MASK                      0x7FFFFFFFUL                           /**< Mask for USB_DOEP_TSIZ */
#define _USB_DOEP_TSIZ_XFERSIZE_SHIFT            0                                      /**< Shift value for USB_XFERSIZE */
#define _USB_DOEP_TSIZ_XFERSIZE_MASK             0x7FFFFUL                              /**< Bit mask for USB_XFERSIZE */
#define _USB_DOEP_TSIZ_XFERSIZE_DEFAULT          0x00000000UL                           /**< Mode DEFAULT for USB_DOEP_TSIZ */
#define USB_DOEP_TSIZ_XFERSIZE_DEFAULT           (_USB_DOEP_TSIZ_XFERSIZE_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DOEP_TSIZ */
#define _USB_DOEP_TSIZ_PKTCNT_SHIFT              19                                     /**< Shift value for USB_PKTCNT */
#define _USB_DOEP_TSIZ_PKTCNT_MASK               0x1FF80000UL                           /**< Bit mask for USB_PKTCNT */
#define _USB_DOEP_TSIZ_PKTCNT_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for USB_DOEP_TSIZ */
#define USB_DOEP_TSIZ_PKTCNT_DEFAULT             (_USB_DOEP_TSIZ_PKTCNT_DEFAULT << 19)  /**< Shifted mode DEFAULT for USB_DOEP_TSIZ */
#define _USB_DOEP_TSIZ_RXDPID_SHIFT              29                                     /**< Shift value for USB_RXDPID */
#define _USB_DOEP_TSIZ_RXDPID_MASK               0x60000000UL                           /**< Bit mask for USB_RXDPID */
#define _USB_DOEP_TSIZ_RXDPID_DEFAULT            0x00000000UL                           /**< Mode DEFAULT for USB_DOEP_TSIZ */
#define USB_DOEP_TSIZ_RXDPID_DEFAULT             (_USB_DOEP_TSIZ_RXDPID_DEFAULT << 29)  /**< Shifted mode DEFAULT for USB_DOEP_TSIZ */

/* Bit fields for USB DOEP_DMAADDR */
#define _USB_DOEP_DMAADDR_RESETVALUE             0x00000000UL                             /**< Default value for USB_DOEP_DMAADDR */
#define _USB_DOEP_DMAADDR_MASK                   0xFFFFFFFFUL                             /**< Mask for USB_DOEP_DMAADDR */
#define _USB_DOEP_DMAADDR_DMAADDR_SHIFT          0                                        /**< Shift value for USB_DMAADDR */
#define _USB_DOEP_DMAADDR_DMAADDR_MASK           0xFFFFFFFFUL                             /**< Bit mask for USB_DMAADDR */
#define _USB_DOEP_DMAADDR_DMAADDR_DEFAULT        0x00000000UL                             /**< Mode DEFAULT for USB_DOEP_DMAADDR */
#define USB_DOEP_DMAADDR_DMAADDR_DEFAULT         (_USB_DOEP_DMAADDR_DMAADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_DOEP_DMAADDR */

/* Bit fields for USB PCGCCTL */
#define _USB_PCGCCTL_RESETVALUE                  0x00000000UL                               /**< Default value for USB_PCGCCTL */
#define _USB_PCGCCTL_MASK                        0x000001CFUL                               /**< Mask for USB_PCGCCTL */
#define USB_PCGCCTL_STOPPCLK                     (0x1UL << 0)                               /**< Stop Pclk */
#define _USB_PCGCCTL_STOPPCLK_SHIFT              0                                          /**< Shift value for USB_STOPPCLK */
#define _USB_PCGCCTL_STOPPCLK_MASK               0x1UL                                      /**< Bit mask for USB_STOPPCLK */
#define _USB_PCGCCTL_STOPPCLK_DEFAULT            0x00000000UL                               /**< Mode DEFAULT for USB_PCGCCTL */
#define USB_PCGCCTL_STOPPCLK_DEFAULT             (_USB_PCGCCTL_STOPPCLK_DEFAULT << 0)       /**< Shifted mode DEFAULT for USB_PCGCCTL */
#define USB_PCGCCTL_GATEHCLK                     (0x1UL << 1)                               /**< Gate Hclk */
#define _USB_PCGCCTL_GATEHCLK_SHIFT              1                                          /**< Shift value for USB_GATEHCLK */
#define _USB_PCGCCTL_GATEHCLK_MASK               0x2UL                                      /**< Bit mask for USB_GATEHCLK */
#define _USB_PCGCCTL_GATEHCLK_DEFAULT            0x00000000UL                               /**< Mode DEFAULT for USB_PCGCCTL */
#define USB_PCGCCTL_GATEHCLK_DEFAULT             (_USB_PCGCCTL_GATEHCLK_DEFAULT << 1)       /**< Shifted mode DEFAULT for USB_PCGCCTL */
#define USB_PCGCCTL_PWRCLMP                      (0x1UL << 2)                               /**< Power Clamp */
#define _USB_PCGCCTL_PWRCLMP_SHIFT               2                                          /**< Shift value for USB_PWRCLMP */
#define _USB_PCGCCTL_PWRCLMP_MASK                0x4UL                                      /**< Bit mask for USB_PWRCLMP */
#define _USB_PCGCCTL_PWRCLMP_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for USB_PCGCCTL */
#define USB_PCGCCTL_PWRCLMP_DEFAULT              (_USB_PCGCCTL_PWRCLMP_DEFAULT << 2)        /**< Shifted mode DEFAULT for USB_PCGCCTL */
#define USB_PCGCCTL_RSTPDWNMODULE                (0x1UL << 3)                               /**< Reset Power-Down Modules */
#define _USB_PCGCCTL_RSTPDWNMODULE_SHIFT         3                                          /**< Shift value for USB_RSTPDWNMODULE */
#define _USB_PCGCCTL_RSTPDWNMODULE_MASK          0x8UL                                      /**< Bit mask for USB_RSTPDWNMODULE */
#define _USB_PCGCCTL_RSTPDWNMODULE_DEFAULT       0x00000000UL                               /**< Mode DEFAULT for USB_PCGCCTL */
#define USB_PCGCCTL_RSTPDWNMODULE_DEFAULT        (_USB_PCGCCTL_RSTPDWNMODULE_DEFAULT << 3)  /**< Shifted mode DEFAULT for USB_PCGCCTL */
#define USB_PCGCCTL_PHYSLEEP                     (0x1UL << 6)                               /**<  */
#define _USB_PCGCCTL_PHYSLEEP_SHIFT              6                                          /**< Shift value for USB_PHYSLEEP */
#define _USB_PCGCCTL_PHYSLEEP_MASK               0x40UL                                     /**< Bit mask for USB_PHYSLEEP */
#define _USB_PCGCCTL_PHYSLEEP_DEFAULT            0x00000000UL                               /**< Mode DEFAULT for USB_PCGCCTL */
#define USB_PCGCCTL_PHYSLEEP_DEFAULT             (_USB_PCGCCTL_PHYSLEEP_DEFAULT << 6)       /**< Shifted mode DEFAULT for USB_PCGCCTL */
#define USB_PCGCCTL_L1SUSPENDED                  (0x1UL << 7)                               /**<  */
#define _USB_PCGCCTL_L1SUSPENDED_SHIFT           7                                          /**< Shift value for USB_L1SUSPENDED */
#define _USB_PCGCCTL_L1SUSPENDED_MASK            0x80UL                                     /**< Bit mask for USB_L1SUSPENDED */
#define _USB_PCGCCTL_L1SUSPENDED_DEFAULT         0x00000000UL                               /**< Mode DEFAULT for USB_PCGCCTL */
#define USB_PCGCCTL_L1SUSPENDED_DEFAULT          (_USB_PCGCCTL_L1SUSPENDED_DEFAULT << 7)    /**< Shifted mode DEFAULT for USB_PCGCCTL */
#define USB_PCGCCTL_RESETAFTERSUSP               (0x1UL << 8)                               /**<  */
#define _USB_PCGCCTL_RESETAFTERSUSP_SHIFT        8                                          /**< Shift value for USB_RESETAFTERSUSP */
#define _USB_PCGCCTL_RESETAFTERSUSP_MASK         0x100UL                                    /**< Bit mask for USB_RESETAFTERSUSP */
#define _USB_PCGCCTL_RESETAFTERSUSP_DEFAULT      0x00000000UL                               /**< Mode DEFAULT for USB_PCGCCTL */
#define USB_PCGCCTL_RESETAFTERSUSP_DEFAULT       (_USB_PCGCCTL_RESETAFTERSUSP_DEFAULT << 8) /**< Shifted mode DEFAULT for USB_PCGCCTL */

/* Bit fields for USB FIFO0D */
#define _USB_FIFO0D_RESETVALUE                   0x00000000UL                      /**< Default value for USB_FIFO0D */
#define _USB_FIFO0D_MASK                         0xFFFFFFFFUL                      /**< Mask for USB_FIFO0D */
#define _USB_FIFO0D_FIFO0D_SHIFT                 0                                 /**< Shift value for USB_FIFO0D */
#define _USB_FIFO0D_FIFO0D_MASK                  0xFFFFFFFFUL                      /**< Bit mask for USB_FIFO0D */
#define _USB_FIFO0D_FIFO0D_DEFAULT               0x00000000UL                      /**< Mode DEFAULT for USB_FIFO0D */
#define USB_FIFO0D_FIFO0D_DEFAULT                (_USB_FIFO0D_FIFO0D_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFO0D */

/* Bit fields for USB FIFO1D */
#define _USB_FIFO1D_RESETVALUE                   0x00000000UL                      /**< Default value for USB_FIFO1D */
#define _USB_FIFO1D_MASK                         0xFFFFFFFFUL                      /**< Mask for USB_FIFO1D */
#define _USB_FIFO1D_FIFO1D_SHIFT                 0                                 /**< Shift value for USB_FIFO1D */
#define _USB_FIFO1D_FIFO1D_MASK                  0xFFFFFFFFUL                      /**< Bit mask for USB_FIFO1D */
#define _USB_FIFO1D_FIFO1D_DEFAULT               0x00000000UL                      /**< Mode DEFAULT for USB_FIFO1D */
#define USB_FIFO1D_FIFO1D_DEFAULT                (_USB_FIFO1D_FIFO1D_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFO1D */

/* Bit fields for USB FIFO2D */
#define _USB_FIFO2D_RESETVALUE                   0x00000000UL                      /**< Default value for USB_FIFO2D */
#define _USB_FIFO2D_MASK                         0xFFFFFFFFUL                      /**< Mask for USB_FIFO2D */
#define _USB_FIFO2D_FIFO2D_SHIFT                 0                                 /**< Shift value for USB_FIFO2D */
#define _USB_FIFO2D_FIFO2D_MASK                  0xFFFFFFFFUL                      /**< Bit mask for USB_FIFO2D */
#define _USB_FIFO2D_FIFO2D_DEFAULT               0x00000000UL                      /**< Mode DEFAULT for USB_FIFO2D */
#define USB_FIFO2D_FIFO2D_DEFAULT                (_USB_FIFO2D_FIFO2D_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFO2D */

/* Bit fields for USB FIFO3D */
#define _USB_FIFO3D_RESETVALUE                   0x00000000UL                      /**< Default value for USB_FIFO3D */
#define _USB_FIFO3D_MASK                         0xFFFFFFFFUL                      /**< Mask for USB_FIFO3D */
#define _USB_FIFO3D_FIFO3D_SHIFT                 0                                 /**< Shift value for USB_FIFO3D */
#define _USB_FIFO3D_FIFO3D_MASK                  0xFFFFFFFFUL                      /**< Bit mask for USB_FIFO3D */
#define _USB_FIFO3D_FIFO3D_DEFAULT               0x00000000UL                      /**< Mode DEFAULT for USB_FIFO3D */
#define USB_FIFO3D_FIFO3D_DEFAULT                (_USB_FIFO3D_FIFO3D_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFO3D */

/* Bit fields for USB FIFO4D */
#define _USB_FIFO4D_RESETVALUE                   0x00000000UL                      /**< Default value for USB_FIFO4D */
#define _USB_FIFO4D_MASK                         0xFFFFFFFFUL                      /**< Mask for USB_FIFO4D */
#define _USB_FIFO4D_FIFO4D_SHIFT                 0                                 /**< Shift value for USB_FIFO4D */
#define _USB_FIFO4D_FIFO4D_MASK                  0xFFFFFFFFUL                      /**< Bit mask for USB_FIFO4D */
#define _USB_FIFO4D_FIFO4D_DEFAULT               0x00000000UL                      /**< Mode DEFAULT for USB_FIFO4D */
#define USB_FIFO4D_FIFO4D_DEFAULT                (_USB_FIFO4D_FIFO4D_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFO4D */

/* Bit fields for USB FIFO5D */
#define _USB_FIFO5D_RESETVALUE                   0x00000000UL                      /**< Default value for USB_FIFO5D */
#define _USB_FIFO5D_MASK                         0xFFFFFFFFUL                      /**< Mask for USB_FIFO5D */
#define _USB_FIFO5D_FIFO5D_SHIFT                 0                                 /**< Shift value for USB_FIFO5D */
#define _USB_FIFO5D_FIFO5D_MASK                  0xFFFFFFFFUL                      /**< Bit mask for USB_FIFO5D */
#define _USB_FIFO5D_FIFO5D_DEFAULT               0x00000000UL                      /**< Mode DEFAULT for USB_FIFO5D */
#define USB_FIFO5D_FIFO5D_DEFAULT                (_USB_FIFO5D_FIFO5D_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFO5D */

/* Bit fields for USB FIFO6D */
#define _USB_FIFO6D_RESETVALUE                   0x00000000UL                      /**< Default value for USB_FIFO6D */
#define _USB_FIFO6D_MASK                         0xFFFFFFFFUL                      /**< Mask for USB_FIFO6D */
#define _USB_FIFO6D_FIFO6D_SHIFT                 0                                 /**< Shift value for USB_FIFO6D */
#define _USB_FIFO6D_FIFO6D_MASK                  0xFFFFFFFFUL                      /**< Bit mask for USB_FIFO6D */
#define _USB_FIFO6D_FIFO6D_DEFAULT               0x00000000UL                      /**< Mode DEFAULT for USB_FIFO6D */
#define USB_FIFO6D_FIFO6D_DEFAULT                (_USB_FIFO6D_FIFO6D_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFO6D */

/* Bit fields for USB FIFO7D */
#define _USB_FIFO7D_RESETVALUE                   0x00000000UL                      /**< Default value for USB_FIFO7D */
#define _USB_FIFO7D_MASK                         0xFFFFFFFFUL                      /**< Mask for USB_FIFO7D */
#define _USB_FIFO7D_FIFO7D_SHIFT                 0                                 /**< Shift value for USB_FIFO7D */
#define _USB_FIFO7D_FIFO7D_MASK                  0xFFFFFFFFUL                      /**< Bit mask for USB_FIFO7D */
#define _USB_FIFO7D_FIFO7D_DEFAULT               0x00000000UL                      /**< Mode DEFAULT for USB_FIFO7D */
#define USB_FIFO7D_FIFO7D_DEFAULT                (_USB_FIFO7D_FIFO7D_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFO7D */

/* Bit fields for USB FIFO8D */
#define _USB_FIFO8D_RESETVALUE                   0x00000000UL                      /**< Default value for USB_FIFO8D */
#define _USB_FIFO8D_MASK                         0xFFFFFFFFUL                      /**< Mask for USB_FIFO8D */
#define _USB_FIFO8D_FIFO8D_SHIFT                 0                                 /**< Shift value for USB_FIFO8D */
#define _USB_FIFO8D_FIFO8D_MASK                  0xFFFFFFFFUL                      /**< Bit mask for USB_FIFO8D */
#define _USB_FIFO8D_FIFO8D_DEFAULT               0x00000000UL                      /**< Mode DEFAULT for USB_FIFO8D */
#define USB_FIFO8D_FIFO8D_DEFAULT                (_USB_FIFO8D_FIFO8D_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFO8D */

/* Bit fields for USB FIFO9D */
#define _USB_FIFO9D_RESETVALUE                   0x00000000UL                      /**< Default value for USB_FIFO9D */
#define _USB_FIFO9D_MASK                         0xFFFFFFFFUL                      /**< Mask for USB_FIFO9D */
#define _USB_FIFO9D_FIFO9D_SHIFT                 0                                 /**< Shift value for USB_FIFO9D */
#define _USB_FIFO9D_FIFO9D_MASK                  0xFFFFFFFFUL                      /**< Bit mask for USB_FIFO9D */
#define _USB_FIFO9D_FIFO9D_DEFAULT               0x00000000UL                      /**< Mode DEFAULT for USB_FIFO9D */
#define USB_FIFO9D_FIFO9D_DEFAULT                (_USB_FIFO9D_FIFO9D_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFO9D */

/* Bit fields for USB FIFO10D */
#define _USB_FIFO10D_RESETVALUE                  0x00000000UL                        /**< Default value for USB_FIFO10D */
#define _USB_FIFO10D_MASK                        0xFFFFFFFFUL                        /**< Mask for USB_FIFO10D */
#define _USB_FIFO10D_FIFO10D_SHIFT               0                                   /**< Shift value for USB_FIFO10D */
#define _USB_FIFO10D_FIFO10D_MASK                0xFFFFFFFFUL                        /**< Bit mask for USB_FIFO10D */
#define _USB_FIFO10D_FIFO10D_DEFAULT             0x00000000UL                        /**< Mode DEFAULT for USB_FIFO10D */
#define USB_FIFO10D_FIFO10D_DEFAULT              (_USB_FIFO10D_FIFO10D_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFO10D */

/* Bit fields for USB FIFO11D */
#define _USB_FIFO11D_RESETVALUE                  0x00000000UL                        /**< Default value for USB_FIFO11D */
#define _USB_FIFO11D_MASK                        0xFFFFFFFFUL                        /**< Mask for USB_FIFO11D */
#define _USB_FIFO11D_FIFO11D_SHIFT               0                                   /**< Shift value for USB_FIFO11D */
#define _USB_FIFO11D_FIFO11D_MASK                0xFFFFFFFFUL                        /**< Bit mask for USB_FIFO11D */
#define _USB_FIFO11D_FIFO11D_DEFAULT             0x00000000UL                        /**< Mode DEFAULT for USB_FIFO11D */
#define USB_FIFO11D_FIFO11D_DEFAULT              (_USB_FIFO11D_FIFO11D_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFO11D */

/* Bit fields for USB FIFO12D */
#define _USB_FIFO12D_RESETVALUE                  0x00000000UL                        /**< Default value for USB_FIFO12D */
#define _USB_FIFO12D_MASK                        0xFFFFFFFFUL                        /**< Mask for USB_FIFO12D */
#define _USB_FIFO12D_FIFO12D_SHIFT               0                                   /**< Shift value for USB_FIFO12D */
#define _USB_FIFO12D_FIFO12D_MASK                0xFFFFFFFFUL                        /**< Bit mask for USB_FIFO12D */
#define _USB_FIFO12D_FIFO12D_DEFAULT             0x00000000UL                        /**< Mode DEFAULT for USB_FIFO12D */
#define USB_FIFO12D_FIFO12D_DEFAULT              (_USB_FIFO12D_FIFO12D_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFO12D */

/* Bit fields for USB FIFO13D */
#define _USB_FIFO13D_RESETVALUE                  0x00000000UL                        /**< Default value for USB_FIFO13D */
#define _USB_FIFO13D_MASK                        0xFFFFFFFFUL                        /**< Mask for USB_FIFO13D */
#define _USB_FIFO13D_FIFO13D_SHIFT               0                                   /**< Shift value for USB_FIFO13D */
#define _USB_FIFO13D_FIFO13D_MASK                0xFFFFFFFFUL                        /**< Bit mask for USB_FIFO13D */
#define _USB_FIFO13D_FIFO13D_DEFAULT             0x00000000UL                        /**< Mode DEFAULT for USB_FIFO13D */
#define USB_FIFO13D_FIFO13D_DEFAULT              (_USB_FIFO13D_FIFO13D_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFO13D */

/* Bit fields for USB FIFORAM */
#define _USB_FIFORAM_RESETVALUE                  0x00000000UL                        /**< Default value for USB_FIFORAM */
#define _USB_FIFORAM_MASK                        0xFFFFFFFFUL                        /**< Mask for USB_FIFORAM */
#define _USB_FIFORAM_FIFORAM_SHIFT               0                                   /**< Shift value for USB_FIFORAM */
#define _USB_FIFORAM_FIFORAM_MASK                0xFFFFFFFFUL                        /**< Bit mask for USB_FIFORAM */
#define _USB_FIFORAM_FIFORAM_DEFAULT             0x00000000UL                        /**< Mode DEFAULT for USB_FIFORAM */
#define USB_FIFORAM_FIFORAM_DEFAULT              (_USB_FIFORAM_FIFORAM_DEFAULT << 0) /**< Shifted mode DEFAULT for USB_FIFORAM */

/** @} */
/** @} End of group EFM32GG11B_USB */
/** @} End of group Parts */

