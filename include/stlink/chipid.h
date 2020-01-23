#ifndef STLINK_CHIPID_H_
#define STLINK_CHIPID_H_

#include "stlink-flash-type.h"
#include "stlink-stm32-chip-id.h"
#include <string>

/**
 * Chipid parameters
 */
struct stlink_chipid_params
{
    STLinkSTM32ChipId chip_id;
    std::string description;
    STLinkFlashType flash_type;
    uint32_t flash_size_reg;
    uint32_t flash_pagesize;
    uint32_t sram_size;
    uint32_t bootrom_base;
    uint32_t bootrom_size;
};

const struct stlink_chipid_params * stlink_chipid_get_params(STLinkSTM32ChipId chipid);

#endif /* STLINK_CHIPID_H_ */
