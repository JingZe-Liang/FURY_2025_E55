/*
 * Code generated for Simulink model E55_1030.
 *
 * FILE    : s32k344_cancfg.c
 *
 * VERSION : 1.759
 *
 * DATE    : Sat Dec 13 14:30:39 2025
 *
 * Copyright 2011-2023 ECUCoder. All Rights Reserved.
 */

#include "s32k344_cancfg.h"
#include "Mcal.h"
#include "FlexCAN_Ip_Types.h"

extern void ec_can3_callback(uint8 instance, Flexcan_Ip_EventType eventType,
  uint32 buffIdx, const Flexcan_Ip_StateType * flexcanState);
const Flexcan_Ip_ConfigType ECUCoderFlexCAN_Config0 = {
  /* Number Of Message Buffer used .max_num_mb  */
  (uint8)96,

  /*Can Hw filter count* .num_id_filters*- aici exista variatna sa generez toate filtrele si sa referentiezi tu in cod */
  FLEXCAN_RX_FIFO_ID_FILTERS_8,

  /* Legacy FIFO ENABLED .is_rx_fifo_needed*/
  (boolean)FALSE,

#if (FLEXCAN_IP_FEATURE_HAS_ENHANCED_RX_FIFO == STD_ON)

  /* The number of standard ID filter elements */
  0U,

  /* The number of extended ID filter elements */
  0U,

  /* The number of enhanced Rx FIFO watermark */
  0U,

  /* The Enhanced Rx FIFO feature is enabled or not. */
  (boolean)FALSE,

#endif

#if (FLEXCAN_IP_FEATURE_HAS_TS_ENABLE == STD_ON)

  /* TimeStamp Structure Configuration */
  {
    /* timeStampSurce Timer Source */
    FLEXCAN_CAN_CLK_TIMESTAMP_SRC
#if (FLEXCAN_IP_FEATURE_HAS_HR_TIMER == STD_ON)
    /* msgBuffTimeStampType Timestamp MB Type  */
    , FLEXCAN_MSGBUFFTIMESTAMP_TIMER
    /* hrConfigType Timestamp HR capture configuration */
    , FLEXCAN_TIMESTAMPCAPTURE_DISABLE
    /* hrSrc HT Timer Source */
    , FLEXCAN_HRTIMERSRC_EMAC
#endif
  },

#endif                        /* (FLEXCAN_IP_FEATURE_HAS_TS_ENABLE == STD_ON) */

  FLEXCAN_NORMAL_MODE,

  /*ctrlOptions*/
  (uint32)(FLEXCAN_IP_ISO_U32 | FLEXCAN_IP_BUSOFF_RECOVERY_U32 | 0U),

  /* Can FD RamBlock specified */
  /*.payload*/
  {
    FLEXCAN_PAYLOAD_SIZE_8,
    FLEXCAN_PAYLOAD_SIZE_8,
    FLEXCAN_PAYLOAD_SIZE_8
  },

  /*Can FD enabled .fd_enable*/
  (boolean)0,

  /*Enhance CBT support . extCbtEnable*/
  (boolean)FALSE,

  /*BRS for FD .bitRateSwitch*/
  (boolean)0,

  /*values for normal baudrate .bitrate*/
  {                                    /* Prop Seg */
    (6U),

    /* Phase Seg 1 */
    (7U),

    /* Phase Seg 2*/
    (3U),

    /* Pre Divider */
    (1U),

    /* Resync jump width */
    (1U)
  },

  /*values for FD baudrate .bitrate*/
  {                                    /* Prop Seg */
    (3U),

    /* Phase Seg 1 */
    (3U),

    /* Phase Seg 2*/
    (1U),

    /* Pre Divider */
    (0U),

    /* Resync jump width */
    (1U)
  },

  /*transfer_type*/
  FLEXCAN_RXFIFO_USING_INTERRUPTS,

#if (FLEXCAN_IP_FEATURE_HAS_DMA_ENABLE == STD_ON)

  /* DMA channel number used for transfers. */
  0,

#endif

  /* Controller Callback */
  NULL_PTR,

  /* Error Callback */
  NULL_PTR
};

const Flexcan_Ip_ConfigType ECUCoderFlexCAN_Config1 = {
  /* Number Of Message Buffer used .max_num_mb  */
  (uint8)64,

  /*Can Hw filter count* .num_id_filters*- aici exista variatna sa generez toate filtrele si sa referentiezi tu in cod */
  FLEXCAN_RX_FIFO_ID_FILTERS_8,

  /* Legacy FIFO ENABLED .is_rx_fifo_needed*/
  (boolean)FALSE,

#if (FLEXCAN_IP_FEATURE_HAS_ENHANCED_RX_FIFO == STD_ON)

  /* The number of standard ID filter elements */
  0U,

  /* The number of extended ID filter elements */
  0U,

  /* The number of enhanced Rx FIFO watermark */
  0U,

  /* The Enhanced Rx FIFO feature is enabled or not. */
  (boolean)FALSE,

#endif

#if (FLEXCAN_IP_FEATURE_HAS_TS_ENABLE == STD_ON)

  /* TimeStamp Structure Configuration */
  {
    /* timeStampSurce Timer Source */
    FLEXCAN_CAN_CLK_TIMESTAMP_SRC
#if (FLEXCAN_IP_FEATURE_HAS_HR_TIMER == STD_ON)
    /* msgBuffTimeStampType Timestamp MB Type  */
    , FLEXCAN_MSGBUFFTIMESTAMP_TIMER
    /* hrConfigType Timestamp HR capture configuration */
    , FLEXCAN_TIMESTAMPCAPTURE_DISABLE
    /* hrSrc HT Timer Source */
    , FLEXCAN_HRTIMERSRC_EMAC
#endif
  },

#endif                        /* (FLEXCAN_IP_FEATURE_HAS_TS_ENABLE == STD_ON) */

  FLEXCAN_NORMAL_MODE,

  /*ctrlOptions*/
  (uint32)(FLEXCAN_IP_ISO_U32 | FLEXCAN_IP_BUSOFF_RECOVERY_U32 | 0U),

  /* Can FD RamBlock specified */
  /*.payload*/
  {
    FLEXCAN_PAYLOAD_SIZE_8,
    FLEXCAN_PAYLOAD_SIZE_8,
    FLEXCAN_PAYLOAD_SIZE_8
  },

  /*Can FD enabled .fd_enable*/
  (boolean)0,

  /*Enhance CBT support . extCbtEnable*/
  (boolean)FALSE,

  /*BRS for FD .bitRateSwitch*/
  (boolean)0,

  /*values for normal baudrate .bitrate*/
  {                                    /* Prop Seg */
    (6U),

    /* Phase Seg 1 */
    (7U),

    /* Phase Seg 2*/
    (3U),

    /* Pre Divider */
    (1U),

    /* Resync jump width */
    (1U)
  },

  /*values for FD baudrate .bitrate*/
  {                                    /* Prop Seg */
    (3U),

    /* Phase Seg 1 */
    (3U),

    /* Phase Seg 2*/
    (1U),

    /* Pre Divider */
    (0U),

    /* Resync jump width */
    (1U)
  },

  /*transfer_type*/
  FLEXCAN_RXFIFO_USING_INTERRUPTS,

#if (FLEXCAN_IP_FEATURE_HAS_DMA_ENABLE == STD_ON)

  /* DMA channel number used for transfers. */
  0,

#endif

  /* Controller Callback */
  NULL_PTR,

  /* Error Callback */
  NULL_PTR
};

const Flexcan_Ip_ConfigType ECUCoderFlexCAN_Config2 = {
  /* Number Of Message Buffer used .max_num_mb  */
  (uint8)64,

  /*Can Hw filter count* .num_id_filters*- aici exista variatna sa generez toate filtrele si sa referentiezi tu in cod */
  FLEXCAN_RX_FIFO_ID_FILTERS_8,

  /* Legacy FIFO ENABLED .is_rx_fifo_needed*/
  (boolean)FALSE,

#if (FLEXCAN_IP_FEATURE_HAS_ENHANCED_RX_FIFO == STD_ON)

  /* The number of standard ID filter elements */
  0U,

  /* The number of extended ID filter elements */
  0U,

  /* The number of enhanced Rx FIFO watermark */
  0U,

  /* The Enhanced Rx FIFO feature is enabled or not. */
  (boolean)FALSE,

#endif

#if (FLEXCAN_IP_FEATURE_HAS_TS_ENABLE == STD_ON)

  /* TimeStamp Structure Configuration */
  {
    /* timeStampSurce Timer Source */
    FLEXCAN_CAN_CLK_TIMESTAMP_SRC
#if (FLEXCAN_IP_FEATURE_HAS_HR_TIMER == STD_ON)
    /* msgBuffTimeStampType Timestamp MB Type  */
    , FLEXCAN_MSGBUFFTIMESTAMP_TIMER
    /* hrConfigType Timestamp HR capture configuration */
    , FLEXCAN_TIMESTAMPCAPTURE_DISABLE
    /* hrSrc HT Timer Source */
    , FLEXCAN_HRTIMERSRC_EMAC
#endif
  },

#endif                        /* (FLEXCAN_IP_FEATURE_HAS_TS_ENABLE == STD_ON) */

  FLEXCAN_NORMAL_MODE,

  /*ctrlOptions*/
  (uint32)(FLEXCAN_IP_ISO_U32 | FLEXCAN_IP_BUSOFF_RECOVERY_U32 | 0U),

  /* Can FD RamBlock specified */
  /*.payload*/
  {
    FLEXCAN_PAYLOAD_SIZE_8,
    FLEXCAN_PAYLOAD_SIZE_8,
    FLEXCAN_PAYLOAD_SIZE_8
  },

  /*Can FD enabled .fd_enable*/
  (boolean)0,

  /*Enhance CBT support . extCbtEnable*/
  (boolean)FALSE,

  /*BRS for FD .bitRateSwitch*/
  (boolean)0,

  /*values for normal baudrate .bitrate*/
  {                                    /* Prop Seg */
    (6U),

    /* Phase Seg 1 */
    (7U),

    /* Phase Seg 2*/
    (3U),

    /* Pre Divider */
    (1U),

    /* Resync jump width */
    (1U)
  },

  /*values for FD baudrate .bitrate*/
  {                                    /* Prop Seg */
    (3U),

    /* Phase Seg 1 */
    (3U),

    /* Phase Seg 2*/
    (1U),

    /* Pre Divider */
    (0U),

    /* Resync jump width */
    (1U)
  },

  /*transfer_type*/
  FLEXCAN_RXFIFO_USING_INTERRUPTS,

#if (FLEXCAN_IP_FEATURE_HAS_DMA_ENABLE == STD_ON)

  /* DMA channel number used for transfers. */
  0,

#endif

  /* Controller Callback */
  NULL_PTR,

  /* Error Callback */
  NULL_PTR
};

const Flexcan_Ip_ConfigType ECUCoderFlexCAN_Config3 = {
  /* Number Of Message Buffer used .max_num_mb  */
  (uint8)32,

  /*Can Hw filter count* .num_id_filters*- aici exista variatna sa generez toate filtrele si sa referentiezi tu in cod */
  FLEXCAN_RX_FIFO_ID_FILTERS_8,

  /* Legacy FIFO ENABLED .is_rx_fifo_needed*/
  (boolean)FALSE,

#if (FLEXCAN_IP_FEATURE_HAS_ENHANCED_RX_FIFO == STD_ON)

  /* The number of standard ID filter elements */
  0U,

  /* The number of extended ID filter elements */
  0U,

  /* The number of enhanced Rx FIFO watermark */
  0U,

  /* The Enhanced Rx FIFO feature is enabled or not. */
  (boolean)FALSE,

#endif

#if (FLEXCAN_IP_FEATURE_HAS_TS_ENABLE == STD_ON)

  /* TimeStamp Structure Configuration */
  {
    /* timeStampSurce Timer Source */
    FLEXCAN_CAN_CLK_TIMESTAMP_SRC
#if (FLEXCAN_IP_FEATURE_HAS_HR_TIMER == STD_ON)
    /* msgBuffTimeStampType Timestamp MB Type  */
    , FLEXCAN_MSGBUFFTIMESTAMP_TIMER
    /* hrConfigType Timestamp HR capture configuration */
    , FLEXCAN_TIMESTAMPCAPTURE_DISABLE
    /* hrSrc HT Timer Source */
    , FLEXCAN_HRTIMERSRC_EMAC
#endif
  },

#endif                        /* (FLEXCAN_IP_FEATURE_HAS_TS_ENABLE == STD_ON) */

  FLEXCAN_NORMAL_MODE,

  /*ctrlOptions*/
  (uint32)(FLEXCAN_IP_ISO_U32 | FLEXCAN_IP_BUSOFF_RECOVERY_U32 | 0U),

  /* Can FD RamBlock specified */
  /*.payload*/
  {
    FLEXCAN_PAYLOAD_SIZE_8,
    FLEXCAN_PAYLOAD_SIZE_8,
    FLEXCAN_PAYLOAD_SIZE_8
  },

  /*Can FD enabled .fd_enable*/
  (boolean)FALSE,

  /*Enhance CBT support . extCbtEnable*/
  (boolean)FALSE,

  /*BRS for FD .bitRateSwitch*/
  (boolean)FALSE,

  /*values for normal baudrate .bitrate*/
  {                                    /* Prop Seg */
    (6U),

    /* Phase Seg 1 */
    (7U),

    /* Phase Seg 2*/
    (3U),

    /* Pre Divider */
    (1U),

    /* Resync jump width */
    (1U)
  },

  /*values for FD baudrate .bitrate*/
  {                                    /* Prop Seg */
    (3U),

    /* Phase Seg 1 */
    (3U),

    /* Phase Seg 2*/
    (1U),

    /* Pre Divider */
    (0U),

    /* Resync jump width */
    (1U)
  },

  /*transfer_type*/
  FLEXCAN_RXFIFO_USING_INTERRUPTS,

#if (FLEXCAN_IP_FEATURE_HAS_DMA_ENABLE == STD_ON)

  /* DMA channel number used for transfers. */
  0,

#endif

  /* Controller Callback */
  ec_can3_callback,

  /* Error Callback */
  NULL_PTR
};

const Flexcan_Ip_ConfigType ECUCoderFlexCAN_Config4 = {
  /* Number Of Message Buffer used .max_num_mb  */
  (uint8)4,

  /*Can Hw filter count* .num_id_filters*- aici exista variatna sa generez toate filtrele si sa referentiezi tu in cod */
  FLEXCAN_RX_FIFO_ID_FILTERS_8,

  /* Legacy FIFO ENABLED .is_rx_fifo_needed*/
  (boolean)FALSE,

#if (FLEXCAN_IP_FEATURE_HAS_ENHANCED_RX_FIFO == STD_ON)

  /* The number of standard ID filter elements */
  0U,

  /* The number of extended ID filter elements */
  0U,

  /* The number of enhanced Rx FIFO watermark */
  0U,

  /* The Enhanced Rx FIFO feature is enabled or not. */
  (boolean)FALSE,

#endif

#if (FLEXCAN_IP_FEATURE_HAS_TS_ENABLE == STD_ON)

  /* TimeStamp Structure Configuration */
  {
    /* timeStampSurce Timer Source */
    FLEXCAN_CAN_CLK_TIMESTAMP_SRC
#if (FLEXCAN_IP_FEATURE_HAS_HR_TIMER == STD_ON)
    /* msgBuffTimeStampType Timestamp MB Type  */
    , FLEXCAN_MSGBUFFTIMESTAMP_TIMER
    /* hrConfigType Timestamp HR capture configuration */
    , FLEXCAN_TIMESTAMPCAPTURE_DISABLE
    /* hrSrc HT Timer Source */
    , FLEXCAN_HRTIMERSRC_EMAC
#endif
  },

#endif                        /* (FLEXCAN_IP_FEATURE_HAS_TS_ENABLE == STD_ON) */

  FLEXCAN_NORMAL_MODE,

  /*ctrlOptions*/
  (uint32)(FLEXCAN_IP_ISO_U32 | FLEXCAN_IP_BUSOFF_RECOVERY_U32 | 0U),

  /* Can FD RamBlock specified */
  /*.payload*/
  {
    FLEXCAN_PAYLOAD_SIZE_64,
    FLEXCAN_PAYLOAD_SIZE_64,
    FLEXCAN_PAYLOAD_SIZE_64
  },

  /*Can FD enabled .fd_enable*/
  (boolean)1,

  /*Enhance CBT support . extCbtEnable*/
  (boolean)FALSE,

  /*BRS for FD .bitRateSwitch*/
  (boolean)1,

  /*values for normal baudrate .bitrate*/
  {                                    /* Prop Seg */
    (6U),

    /* Phase Seg 1 */
    (7U),

    /* Phase Seg 2*/
    (3U),

    /* Pre Divider */
    (1U),

    /* Resync jump width */
    (1U)
  },

  /*values for FD baudrate .bitrate*/
  {                                    /* Prop Seg */
    (3U),

    /* Phase Seg 1 */
    (3U),

    /* Phase Seg 2*/
    (1U),

    /* Pre Divider */
    (0U),

    /* Resync jump width */
    (1U)
  },

  /*transfer_type*/
  FLEXCAN_RXFIFO_USING_INTERRUPTS,

#if (FLEXCAN_IP_FEATURE_HAS_DMA_ENABLE == STD_ON)

  /* DMA channel number used for transfers. */
  0,

#endif

  /* Controller Callback */
  NULL_PTR,

  /* Error Callback */
  NULL_PTR
};

const Flexcan_Ip_ConfigType ECUCoderFlexCAN_Config5 = {
  /* Number Of Message Buffer used .max_num_mb  */
  (uint8)4,

  /*Can Hw filter count* .num_id_filters*- aici exista variatna sa generez toate filtrele si sa referentiezi tu in cod */
  FLEXCAN_RX_FIFO_ID_FILTERS_8,

  /* Legacy FIFO ENABLED .is_rx_fifo_needed*/
  (boolean)FALSE,

#if (FLEXCAN_IP_FEATURE_HAS_ENHANCED_RX_FIFO == STD_ON)

  /* The number of standard ID filter elements */
  0U,

  /* The number of extended ID filter elements */
  0U,

  /* The number of enhanced Rx FIFO watermark */
  0U,

  /* The Enhanced Rx FIFO feature is enabled or not. */
  (boolean)FALSE,

#endif

#if (FLEXCAN_IP_FEATURE_HAS_TS_ENABLE == STD_ON)

  /* TimeStamp Structure Configuration */
  {
    /* timeStampSurce Timer Source */
    FLEXCAN_CAN_CLK_TIMESTAMP_SRC
#if (FLEXCAN_IP_FEATURE_HAS_HR_TIMER == STD_ON)
    /* msgBuffTimeStampType Timestamp MB Type  */
    , FLEXCAN_MSGBUFFTIMESTAMP_TIMER
    /* hrConfigType Timestamp HR capture configuration */
    , FLEXCAN_TIMESTAMPCAPTURE_DISABLE
    /* hrSrc HT Timer Source */
    , FLEXCAN_HRTIMERSRC_EMAC
#endif
  },

#endif                        /* (FLEXCAN_IP_FEATURE_HAS_TS_ENABLE == STD_ON) */

  FLEXCAN_NORMAL_MODE,

  /*ctrlOptions*/
  (uint32)(FLEXCAN_IP_ISO_U32 | FLEXCAN_IP_BUSOFF_RECOVERY_U32 | 0U),

  /* Can FD RamBlock specified */
  /*.payload*/
  {
    FLEXCAN_PAYLOAD_SIZE_64,
    FLEXCAN_PAYLOAD_SIZE_64,
    FLEXCAN_PAYLOAD_SIZE_64
  },

  /*Can FD enabled .fd_enable*/
  (boolean)1,

  /*Enhance CBT support . extCbtEnable*/
  (boolean)FALSE,

  /*BRS for FD .bitRateSwitch*/
  (boolean)1,

  /*values for normal baudrate .bitrate*/
  {                                    /* Prop Seg */
    (6U),

    /* Phase Seg 1 */
    (7U),

    /* Phase Seg 2*/
    (3U),

    /* Pre Divider */
    (1U),

    /* Resync jump width */
    (1U)
  },

  /*values for FD baudrate .bitrate*/
  {                                    /* Prop Seg */
    (3U),

    /* Phase Seg 1 */
    (3U),

    /* Phase Seg 2*/
    (1U),

    /* Pre Divider */
    (0U),

    /* Resync jump width */
    (1U)
  },

  /*transfer_type*/
  FLEXCAN_RXFIFO_USING_INTERRUPTS,

#if (FLEXCAN_IP_FEATURE_HAS_DMA_ENABLE == STD_ON)

  /* DMA channel number used for transfers. */
  0,

#endif

  /* Controller Callback */
  NULL_PTR,

  /* Error Callback */
  NULL_PTR
};

/* File trailer for ECUCoder generated file s32k344_cancfg.c.
 *
 * [EOF]
 */
