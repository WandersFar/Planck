// Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include <stdint.h>

enum unicode_typing_modes {
    UCTM_NO_MODE,
    UCTM_AUSSIE,
    UCTM_SCRIPT,
    UCTM_DOUBLE_STRUCK,
    UCTM_FRAKTUR,
    UNCODES_MODE_END,
};

void        set_unicode_typing_mode(uint8_t mode);