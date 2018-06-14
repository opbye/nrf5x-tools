#ifndef NRF_BLE_ERR_H__
#define NRF_BLE_ERR_H__ 
#include "nrf_error.h"
#define BLE_ERROR_NOT_ENABLED (NRF_ERROR_STK_BASE_NUM+0x001)
#define BLE_ERROR_INVALID_CONN_HANDLE (NRF_ERROR_STK_BASE_NUM+0x002)
#define BLE_ERROR_INVALID_ATTR_HANDLE (NRF_ERROR_STK_BASE_NUM+0x003)
#define BLE_ERROR_NO_TX_BUFFERS (NRF_ERROR_STK_BASE_NUM+0x004)
#define BLE_ERROR_INVALID_ROLE (NRF_ERROR_STK_BASE_NUM+0x005)
#define NRF_L2CAP_ERR_BASE (NRF_ERROR_STK_BASE_NUM+0x100)
#define NRF_GAP_ERR_BASE (NRF_ERROR_STK_BASE_NUM+0x200)
#define NRF_GATTC_ERR_BASE (NRF_ERROR_STK_BASE_NUM+0x300)
#define NRF_GATTS_ERR_BASE (NRF_ERROR_STK_BASE_NUM+0x400)
#endif
