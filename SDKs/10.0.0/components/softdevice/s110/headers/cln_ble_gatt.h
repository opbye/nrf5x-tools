#ifndef BLE_GATT_H__
#define BLE_GATT_H__ 
#include "ble_types.h"
#include "ble_ranges.h"
#define GATT_MTU_SIZE_DEFAULT 23
#define GATT_RX_MTU 23
#define BLE_GATT_HANDLE_INVALID 0x0000
#define BLE_GATT_TIMEOUT_SRC_PROTOCOL 0x00
#define BLE_GATT_OP_INVALID 0x00
#define BLE_GATT_OP_WRITE_REQ 0x01
#define BLE_GATT_OP_WRITE_CMD 0x02
#define BLE_GATT_OP_SIGN_WRITE_CMD 0x03
#define BLE_GATT_OP_PREP_WRITE_REQ 0x04
#define BLE_GATT_OP_EXEC_WRITE_REQ 0x05
#define BLE_GATT_EXEC_WRITE_FLAG_PREPARED_CANCEL 0x00
#define BLE_GATT_EXEC_WRITE_FLAG_PREPARED_WRITE 0x01
#define BLE_GATT_HVX_INVALID 0x00
#define BLE_GATT_HVX_NOTIFICATION 0x01
#define BLE_GATT_HVX_INDICATION 0x02
#define BLE_GATT_STATUS_SUCCESS 0x0000
#define BLE_GATT_STATUS_UNKNOWN 0x0001
#define BLE_GATT_STATUS_ATTERR_INVALID 0x0100
#define BLE_GATT_STATUS_ATTERR_INVALID_HANDLE 0x0101
#define BLE_GATT_STATUS_ATTERR_READ_NOT_PERMITTED 0x0102
#define BLE_GATT_STATUS_ATTERR_WRITE_NOT_PERMITTED 0x0103
#define BLE_GATT_STATUS_ATTERR_INVALID_PDU 0x0104
#define BLE_GATT_STATUS_ATTERR_INSUF_AUTHENTICATION 0x0105
#define BLE_GATT_STATUS_ATTERR_REQUEST_NOT_SUPPORTED 0x0106
#define BLE_GATT_STATUS_ATTERR_INVALID_OFFSET 0x0107
#define BLE_GATT_STATUS_ATTERR_INSUF_AUTHORIZATION 0x0108
#define BLE_GATT_STATUS_ATTERR_PREPARE_QUEUE_FULL 0x0109
#define BLE_GATT_STATUS_ATTERR_ATTRIBUTE_NOT_FOUND 0x010A
#define BLE_GATT_STATUS_ATTERR_ATTRIBUTE_NOT_LONG 0x010B
#define BLE_GATT_STATUS_ATTERR_INSUF_ENC_KEY_SIZE 0x010C
#define BLE_GATT_STATUS_ATTERR_INVALID_ATT_VAL_LENGTH 0x010D
#define BLE_GATT_STATUS_ATTERR_UNLIKELY_ERROR 0x010E
#define BLE_GATT_STATUS_ATTERR_INSUF_ENCRYPTION 0x010F
#define BLE_GATT_STATUS_ATTERR_UNSUPPORTED_GROUP_TYPE 0x0110
#define BLE_GATT_STATUS_ATTERR_INSUF_RESOURCES 0x0111
#define BLE_GATT_STATUS_ATTERR_RFU_RANGE1_BEGIN 0x0112
#define BLE_GATT_STATUS_ATTERR_RFU_RANGE1_END 0x017F
#define BLE_GATT_STATUS_ATTERR_APP_BEGIN 0x0180
#define BLE_GATT_STATUS_ATTERR_APP_END 0x019F
#define BLE_GATT_STATUS_ATTERR_RFU_RANGE2_BEGIN 0x01A0
#define BLE_GATT_STATUS_ATTERR_RFU_RANGE2_END 0x01DF
#define BLE_GATT_STATUS_ATTERR_RFU_RANGE3_BEGIN 0x01E0
#define BLE_GATT_STATUS_ATTERR_RFU_RANGE3_END 0x01FC
#define BLE_GATT_STATUS_ATTERR_CPS_CCCD_CONFIG_ERROR 0x01FD
#define BLE_GATT_STATUS_ATTERR_CPS_PROC_ALR_IN_PROG 0x01FE
#define BLE_GATT_STATUS_ATTERR_CPS_OUT_OF_RANGE 0x01FF
#define BLE_GATT_CPF_FORMAT_RFU 0x00
#define BLE_GATT_CPF_FORMAT_BOOLEAN 0x01
#define BLE_GATT_CPF_FORMAT_2BIT 0x02
#define BLE_GATT_CPF_FORMAT_NIBBLE 0x03
#define BLE_GATT_CPF_FORMAT_UINT8 0x04
#define BLE_GATT_CPF_FORMAT_UINT12 0x05
#define BLE_GATT_CPF_FORMAT_UINT16 0x06
#define BLE_GATT_CPF_FORMAT_UINT24 0x07
#define BLE_GATT_CPF_FORMAT_UINT32 0x08
#define BLE_GATT_CPF_FORMAT_UINT48 0x09
#define BLE_GATT_CPF_FORMAT_UINT64 0x0A
#define BLE_GATT_CPF_FORMAT_UINT128 0x0B
#define BLE_GATT_CPF_FORMAT_SINT8 0x0C
#define BLE_GATT_CPF_FORMAT_SINT12 0x0D
#define BLE_GATT_CPF_FORMAT_SINT16 0x0E
#define BLE_GATT_CPF_FORMAT_SINT24 0x0F
#define BLE_GATT_CPF_FORMAT_SINT32 0x10
#define BLE_GATT_CPF_FORMAT_SINT48 0x11
#define BLE_GATT_CPF_FORMAT_SINT64 0x12
#define BLE_GATT_CPF_FORMAT_SINT128 0x13
#define BLE_GATT_CPF_FORMAT_FLOAT32 0x14
#define BLE_GATT_CPF_FORMAT_FLOAT64 0x15
#define BLE_GATT_CPF_FORMAT_SFLOAT 0x16
#define BLE_GATT_CPF_FORMAT_FLOAT 0x17
#define BLE_GATT_CPF_FORMAT_DUINT16 0x18
#define BLE_GATT_CPF_FORMAT_UTF8S 0x19
#define BLE_GATT_CPF_FORMAT_UTF16S 0x1A
#define BLE_GATT_CPF_FORMAT_STRUCT 0x1B
#define BLE_GATT_CPF_NAMESPACE_BTSIG 0x01
#define BLE_GATT_CPF_NAMESPACE_DESCRIPTION_UNKNOWN 0x0000
typedef struct
{
  uint8_t broadcast :1;
  uint8_t read :1;
  uint8_t write_wo_resp :1;
  uint8_t write :1;
  uint8_t notify :1;
  uint8_t indicate :1;
  uint8_t auth_signed_wr :1;
} ble_gatt_char_props_t;
typedef struct
{
  uint8_t reliable_wr :1;
  uint8_t wr_aux :1;
} ble_gatt_char_ext_props_t;
#endif
