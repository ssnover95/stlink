/*
 * File:   stlink.h
 *
 * This should contain all the common top level stlink interfaces, regardless
 * of how the backend does the work....
 */
#ifndef STLINK_FLASH_LOADER_H_
#define STLINK_FLASH_LOADER_H_

#include <stddef.h>
#include <stdint.h>

#include "stlink.h"

int stlink_flash_loader_init(stlink_t * sl, flash_loader_t * fl);
int stlink_flash_loader_write_to_sram(stlink_t * sl, stm32_addr_t * addr, size_t * size);
int stlink_flash_loader_run(stlink_t * sl,
                            flash_loader_t * fl,
                            stm32_addr_t target,
                            const uint8_t * buf,
                            size_t size);

#endif /* STLINK_FLASH_LOADER_H_ */
