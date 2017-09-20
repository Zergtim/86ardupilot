#pragma once

#include "ap_version.h" // header generated by build system

#include <stdint.h>
#include <GCS_MAVLink/GCS_MAVLink.h>

typedef struct {
    uint8_t major;
    uint8_t minor;
    uint8_t patch;
    FIRMWARE_VERSION_TYPE fw_type;
    const char *fw_string;
} AP_FWVersion;
