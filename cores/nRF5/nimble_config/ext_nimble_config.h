#if defined(NRF51)
#include "nrf51_nimconfig.h"
#elif defined(NRF52810_XXAA)
#include "nrf52810_nimconfig.h"
#elif defined(NRF52832_XXAA) || defined(NRF52832_XXAB)
#include "nrf52832_nimconfig.h"
#elif defined(NRF52833_XXAA)
#include "nrf52833_nimconfig.h"
#elif defined(NRF52840_XXAA)
#include "nrf52840_nimconfig.h"
#else
#error No supported mcu config specified
#endif

/* NimBLE 1.5 Updated config */
#ifndef MYNEWT_VAL_BLE_LL_CFG_FEAT_PERIPH_INIT_FEAT_XCHG
#define MYNEWT_VAL_BLE_LL_CFG_FEAT_PERIPH_INIT_FEAT_XCHG (MYNEWT_VAL_BLE_LL_CFG_FEAT_SLAVE_INIT_FEAT_XCHG)
#endif

#ifndef MYNEWT_VAL_BLE_LL_DTM
#define MYNEWT_VAL_BLE_LL_DTM (MYNEWT_VAL_BLE_LL_DTM)
#endif

#ifndef MYNEWT_VAL_BLE_LL_SCAN_AUX_SEGMENT_CNT
#define MYNEWT_VAL_BLE_LL_SCAN_AUX_SEGMENT_CNT (MYNEWT_VAL_BLE_LL_EXT_ADV_AUX_PTR_CNT)
#endif

#ifndef MYNEWT_VAL_BLE_LL_MANUFACTURER_ID
#define MYNEWT_VAL_BLE_LL_MANUFACTURER_ID (MYNEWT_VAL_BLE_LL_MFRG_ID)
#endif

#ifndef MYNEWT_VAL_BLE_LL_CONN_STRICT_SCHED
#define MYNEWT_VAL_BLE_LL_CONN_STRICT_SCHED (MYNEWT_VAL_BLE_LL_STRICT_CONN_SCHEDULING)
#endif

#ifndef MYNEWT_VAL_BLE_LL_HCI_VS_EVENT_ON_ASSERT
#define MYNEWT_VAL_BLE_LL_HCI_VS_EVENT_ON_ASSERT (MYNEWT_VAL_BLE_LL_VND_EVENT_ON_ASSERT)
#endif

#ifndef MYNEWT_VAL_BLE_LL_PUBLIC_DEV_ADDR
#define MYNEWT_VAL_BLE_LL_PUBLIC_DEV_ADDR (0x000000000000)
#endif

#ifndef MYNEWT_VAL_BLE_TRANSPORT_ACL_COUNT
#define MYNEWT_VAL_BLE_TRANSPORT_ACL_COUNT (MYNEWT_VAL_BLE_ACL_BUF_COUNT)
#endif

#ifndef MYNEWT_VAL_BLE_TRANSPORT_ACL_SIZE
#define MYNEWT_VAL_BLE_TRANSPORT_ACL_SIZE (MYNEWT_VAL_BLE_ACL_BUF_SIZE)
#endif

#ifndef MYNEWT_VAL_BLE_TRANSPORT_EVT_COUNT
#define MYNEWT_VAL_BLE_TRANSPORT_EVT_COUNT (MYNEWT_VAL_BLE_HCI_ACL_OUT_COUNT)
#endif

#ifndef MYNEWT_VAL_BLE_TRANSPORT_EVT_DISCARDABLE_COUNT
#define MYNEWT_VAL_BLE_TRANSPORT_EVT_DISCARDABLE_COUNT (MYNEWT_VAL_BLE_HCI_EVT_LO_BUF_COUNT)
#endif

#ifndef MYNEWT_VAL_BLE_TRANSPORT_EVT_SIZE
#define MYNEWT_VAL_BLE_TRANSPORT_EVT_SIZE (MYNEWT_VAL_BLE_HCI_EVT_BUF_SIZE)
#endif

#ifndef min
#define min(a, b) ((a)<(b)?(a):(b))
#endif

#ifndef max
#define max(a, b) ((a)>(b)?(a):(b))
#endif

#define CONFIG_BT_NIMBLE_LEGACY_VHCI_ENABLE 1
