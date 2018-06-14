#ifndef BLE_HCI_H__
#define BLE_HCI_H__ 
#ifdef __cplusplus
extern "C" {
#endif
#define BLE_HCI_STATUS_CODE_SUCCESS 0x00
#define BLE_HCI_STATUS_CODE_UNKNOWN_BTLE_COMMAND 0x01
#define BLE_HCI_STATUS_CODE_UNKNOWN_CONNECTION_IDENTIFIER 0x02
#define BLE_HCI_AUTHENTICATION_FAILURE 0x05
#define BLE_HCI_STATUS_CODE_PIN_OR_KEY_MISSING 0x06
#define BLE_HCI_MEMORY_CAPACITY_EXCEEDED 0x07
#define BLE_HCI_CONNECTION_TIMEOUT 0x08
#define BLE_HCI_STATUS_CODE_COMMAND_DISALLOWED 0x0C
#define BLE_HCI_STATUS_CODE_INVALID_BTLE_COMMAND_PARAMETERS 0x12
#define BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION 0x13
#define BLE_HCI_REMOTE_DEV_TERMINATION_DUE_TO_LOW_RESOURCES 0x14
#define BLE_HCI_REMOTE_DEV_TERMINATION_DUE_TO_POWER_OFF 0x15
#define BLE_HCI_LOCAL_HOST_TERMINATED_CONNECTION 0x16
#define BLE_HCI_UNSUPPORTED_REMOTE_FEATURE 0x1A
#define BLE_HCI_STATUS_CODE_INVALID_LMP_PARAMETERS 0x1E
#define BLE_HCI_STATUS_CODE_UNSPECIFIED_ERROR 0x1F
#define BLE_HCI_STATUS_CODE_LMP_RESPONSE_TIMEOUT 0x22
#define BLE_HCI_STATUS_CODE_LMP_PDU_NOT_ALLOWED 0x24
#define BLE_HCI_INSTANT_PASSED 0x28
#define BLE_HCI_PAIRING_WITH_UNIT_KEY_UNSUPPORTED 0x29
#define BLE_HCI_DIFFERENT_TRANSACTION_COLLISION 0x2A
#define BLE_HCI_CONTROLLER_BUSY 0x3A
#define BLE_HCI_CONN_INTERVAL_UNACCEPTABLE 0x3B
#define BLE_HCI_DIRECTED_ADVERTISER_TIMEOUT 0x3C
#define BLE_HCI_CONN_TERMINATED_DUE_TO_MIC_FAILURE 0x3D
#define BLE_HCI_CONN_FAILED_TO_BE_ESTABLISHED 0x3E
#ifdef __cplusplus
}
#endif
#endif
