#pragma once

/**
 * Chip IDs are explained in the appropriate programming manual for the
 * DBGMCU_IDCODE register (0xE0042000)
 * stm32 chipids, only lower 12 bits..
 */
enum class STLinkSTM32ChipId
{
    UNKNOWN = 0x000,

    F1_MEDIUM = 0x410,
    F2 = 0x411,
    F1_LOW = 0x412,
    F4 = 0x413,
    F1_HIGH = 0x414,
    L4 = 0x415,
    L1_MEDIUM = 0x416,
    L0 = 0x417,
    F1_CONN = 0x418,
    F4_HD = 0x419,
    F1_VL_MEDIUM_LOW = 0x420,
    F446 = 0x421,
    F3 = 0x422,
    F4_LP = 0x423,
    L0_CAT2 = 0x425,
    L1_MEDIUM_PLUS = 0x427,
    F1_VL_HIGH = 0x428,
    L1_CAT2 = 0x429,
    F1_XL = 0x430,
    F411RE = 0x431,
    F37x = 0x432,
    F4_DE = 0x433,
    F4_DSI = 0x434,
    /*
     * 0x435 covers STM32L43xxx and STM32L44xxx devices
     * 0x461 covers STM32L496xx and STM32L4A6xx devices
     * 0x462 covers STM32L45xxx and STM32L46xxx devices
     * 0x464 covers STM32L41xxx and STM32L42xxx devices
     */
    L43X = 0x435,
    L496X = 0x461,
    L46X = 0x462,
    L41X = 0x464,
    /*
     * 0x436 is actually assigned to some L1 chips that are called "Medium-Plus"
     * and some that are called "High".  0x427 is assigned to the other "Medium-
     * plus" chips.  To make it a bit simpler we just call 427 MEDIUM_PLUS and
     * 0x436 HIGH.
     */
    L1_HIGH = 0x436,
    L152_RE = 0x437,
    F334 = 0x438,
    F3_SMALL = 0x439,
    F0 = 0x440,
    F412 = 0x441,
    F09X = 0x442,
    F0_SMALL = 0x444,
    F04 = 0x445,
    F303_HIGH = 0x446,
    L0_CAT5 = 0x447,
    F0_CAN = 0x448,
    F7 = 0x449, /* This ID is found on the NucleoF746ZG board */
    F7XXXX = 0x451,
    F72XXX = 0x452, /* This ID is found on the NucleoF722ZE board */
    L011 = 0x457,
    F410 = 0x458,
    F413 = 0x463,
    L4RX = 0x470, // taken from the STM32L4R9I-DISCO board
    G0X1 = 0x460,
    WB55 = 0x495
};