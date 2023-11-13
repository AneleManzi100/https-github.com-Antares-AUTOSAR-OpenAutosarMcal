/**
 * @file    Adc_Cfg.h
 * @brief   **Adc Driver**
 * @author  Naim Leon
 *
 * Configuration for ADC driver, this file as per AUTOSAR indication is not application dependant
 * and shall be generated by a configuration tool. for the moment the files shall be written
 * manually by the user according its application. Also the user is responsible for setting the
 * parameter in the right way.
 */
#ifndef ADC_CFG_H__
#define ADC_CFG_H__

#include "Adc_Types.h"

/**
 * @defgroup ADC_SWC_Ids ADC software Ids
 *
 * {@ */
#define ADC_MODULE_ID        0u /*!< ADC Module ID */
#define ADC_INSTANCE_ID      0u /*!< ADC Instance ID */
#define ADC_VENDOR_ID        0u /*!< ADC Module Vendor ID */
/**
 * @} */

/**
 * @defgroup ADC_SWC_Ids ADC software version
 *
 * {@ */
#define ADC_SW_MAJOR_VERSION 0u /*!< ADC Module Major Version */
#define ADC_SW_MINOR_VERSION 0u /*!< ADC Module Minor Version */
#define ADC_SW_PATCH_VERSION 0u /*!< ADC Module Patch Version */
/**
 * @} */

extern const Adc_ConfigType AdcConfig;

#endif /* CAN_CFG_H__ */
