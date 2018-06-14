#ifndef NRF_SDM_H__
#define NRF_SDM_H__ 
#include "nrf_svc.h"
#include "nrf51.h"
#include "nrf_soc.h"
#include "nrf_error_sdm.h"
#define SDM_SVC_BASE 0x10
enum NRF_SD_SVCS
{
  SD_SOFTDEVICE_ENABLE = SDM_SVC_BASE,
  SD_SOFTDEVICE_DISABLE,
  SD_SOFTDEVICE_IS_ENABLED,
  SD_SOFTDEVICE_FORWARD_TO_APPLICATION,
  SVC_SDM_LAST
};
enum NRF_CLOCK_LFCLKSRCS
{
  NRF_CLOCK_LFCLKSRC_SYNTH_250_PPM,
  NRF_CLOCK_LFCLKSRC_XTAL_500_PPM,
  NRF_CLOCK_LFCLKSRC_XTAL_250_PPM,
  NRF_CLOCK_LFCLKSRC_XTAL_150_PPM,
  NRF_CLOCK_LFCLKSRC_XTAL_100_PPM,
  NRF_CLOCK_LFCLKSRC_XTAL_75_PPM,
  NRF_CLOCK_LFCLKSRC_XTAL_50_PPM,
  NRF_CLOCK_LFCLKSRC_XTAL_30_PPM,
  NRF_CLOCK_LFCLKSRC_XTAL_20_PPM,
  NRF_CLOCK_LFCLKSRC_RC_250_PPM_250MS_CALIBRATION,
  NRF_CLOCK_LFCLKSRC_RC_250_PPM_500MS_CALIBRATION,
  NRF_CLOCK_LFCLKSRC_RC_250_PPM_1000MS_CALIBRATION,
  NRF_CLOCK_LFCLKSRC_RC_250_PPM_2000MS_CALIBRATION,
  NRF_CLOCK_LFCLKSRC_RC_250_PPM_4000MS_CALIBRATION,
  NRF_CLOCK_LFCLKSRC_RC_250_PPM_8000MS_CALIBRATION,
};
typedef uint32_t nrf_clock_lfclksrc_t;
typedef void (*softdevice_assertion_handler_t)(uint32_t pc, uint16_t line_number, const uint8_t * p_file_name);
SVCALL(SD_SOFTDEVICE_ENABLE, uint32_t, sd_softdevice_enable(nrf_clock_lfclksrc_t clock_source, softdevice_assertion_handler_t assertion_handler));
SVCALL(SD_SOFTDEVICE_DISABLE, uint32_t, sd_softdevice_disable(void));
SVCALL(SD_SOFTDEVICE_IS_ENABLED, uint32_t, sd_softdevice_is_enabled(uint8_t * p_softdevice_enabled));
SVCALL(SD_SOFTDEVICE_FORWARD_TO_APPLICATION, uint32_t, sd_softdevice_forward_to_application(void));
#endif
