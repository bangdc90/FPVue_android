/** @file
 *  @brief MAVLink comm protocol generated from uAvionix.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_UAVIONIX_H
#define MAVLINK_UAVIONIX_H

#ifndef MAVLINK_H
#error Wrong include order: MAVLINK_UAVIONIX.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{10001, 209, 20, 0, 0, 0}, {10002, 186, 41, 0, 0, 0}, {10003, 4, 1, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_UAVIONIX

// ENUM DEFINITIONS


/** @brief State flags for ADS-B transponder dynamic report */
#ifndef HAVE_ENUM_UAVIONIX_ADSB_OUT_DYNAMIC_STATE
#define HAVE_ENUM_UAVIONIX_ADSB_OUT_DYNAMIC_STATE
typedef enum UAVIONIX_ADSB_OUT_DYNAMIC_STATE {
    UAVIONIX_ADSB_OUT_DYNAMIC_STATE_INTENT_CHANGE = 1, /*  | */
    UAVIONIX_ADSB_OUT_DYNAMIC_STATE_AUTOPILOT_ENABLED = 2, /*  | */
    UAVIONIX_ADSB_OUT_DYNAMIC_STATE_NICBARO_CROSSCHECKED = 4, /*  | */
    UAVIONIX_ADSB_OUT_DYNAMIC_STATE_ON_GROUND = 8, /*  | */
    UAVIONIX_ADSB_OUT_DYNAMIC_STATE_IDENT = 16, /*  | */
    UAVIONIX_ADSB_OUT_DYNAMIC_STATE_ENUM_END = 17, /*  | */
} UAVIONIX_ADSB_OUT_DYNAMIC_STATE;
#endif

/** @brief Transceiver RF control flags for ADS-B transponder dynamic reports */
#ifndef HAVE_ENUM_UAVIONIX_ADSB_OUT_RF_SELECT
#define HAVE_ENUM_UAVIONIX_ADSB_OUT_RF_SELECT
typedef enum UAVIONIX_ADSB_OUT_RF_SELECT {
    UAVIONIX_ADSB_OUT_RF_SELECT_STANDBY = 0, /*  | */
    UAVIONIX_ADSB_OUT_RF_SELECT_RX_ENABLED = 1, /*  | */
    UAVIONIX_ADSB_OUT_RF_SELECT_TX_ENABLED = 2, /*  | */
    UAVIONIX_ADSB_OUT_RF_SELECT_ENUM_END = 3, /*  | */
} UAVIONIX_ADSB_OUT_RF_SELECT;
#endif

/** @brief Status for ADS-B transponder dynamic input */
#ifndef HAVE_ENUM_UAVIONIX_ADSB_OUT_DYNAMIC_GPS_FIX
#define HAVE_ENUM_UAVIONIX_ADSB_OUT_DYNAMIC_GPS_FIX
typedef enum UAVIONIX_ADSB_OUT_DYNAMIC_GPS_FIX {
    UAVIONIX_ADSB_OUT_DYNAMIC_GPS_FIX_NONE_0 = 0, /*  | */
    UAVIONIX_ADSB_OUT_DYNAMIC_GPS_FIX_NONE_1 = 1, /*  | */
    UAVIONIX_ADSB_OUT_DYNAMIC_GPS_FIX_2D = 2, /*  | */
    UAVIONIX_ADSB_OUT_DYNAMIC_GPS_FIX_3D = 3, /*  | */
    UAVIONIX_ADSB_OUT_DYNAMIC_GPS_FIX_DGPS = 4, /*  | */
    UAVIONIX_ADSB_OUT_DYNAMIC_GPS_FIX_RTK = 5, /*  | */
    UAVIONIX_ADSB_OUT_DYNAMIC_GPS_FIX_ENUM_END = 6, /*  | */
} UAVIONIX_ADSB_OUT_DYNAMIC_GPS_FIX;
#endif

/** @brief Status flags for ADS-B transponder dynamic output */
#ifndef HAVE_ENUM_UAVIONIX_ADSB_RF_HEALTH
#define HAVE_ENUM_UAVIONIX_ADSB_RF_HEALTH
typedef enum UAVIONIX_ADSB_RF_HEALTH {
    UAVIONIX_ADSB_RF_HEALTH_INITIALIZING = 0, /*  | */
    UAVIONIX_ADSB_RF_HEALTH_OK = 1, /*  | */
    UAVIONIX_ADSB_RF_HEALTH_FAIL_TX = 2, /*  | */
    UAVIONIX_ADSB_RF_HEALTH_FAIL_RX = 16, /*  | */
    UAVIONIX_ADSB_RF_HEALTH_ENUM_END = 17, /*  | */
} UAVIONIX_ADSB_RF_HEALTH;
#endif

/** @brief Definitions for aircraft size */
#ifndef HAVE_ENUM_UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE
#define HAVE_ENUM_UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE
typedef enum UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE {
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_NO_DATA = 0, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L15M_W23M = 1, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L25M_W28P5M = 2, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L25_34M = 3, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L35_33M = 4, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L35_38M = 5, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L45_39P5M = 6, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L45_45M = 7, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L55_45M = 8, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L55_52M = 9, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L65_59P5M = 10, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L65_67M = 11, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L75_W72P5M = 12, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L75_W80M = 13, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L85_W80M = 14, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_L85_W90M = 15, /*  | */
    UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE_ENUM_END = 16, /*  | */
} UAVIONIX_ADSB_OUT_CFG_AIRCRAFT_SIZE;
#endif

/** @brief GPS lataral offset encoding */
#ifndef HAVE_ENUM_UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LAT
#define HAVE_ENUM_UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LAT
typedef enum UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LAT {
    UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LAT_NO_DATA = 0, /*  | */
    UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LAT_LEFT_2M = 1, /*  | */
    UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LAT_LEFT_4M = 2, /*  | */
    UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LAT_LEFT_6M = 3, /*  | */
    UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LAT_RIGHT_0M = 4, /*  | */
    UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LAT_RIGHT_2M = 5, /*  | */
    UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LAT_RIGHT_4M = 6, /*  | */
    UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LAT_RIGHT_6M = 7, /*  | */
    UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LAT_ENUM_END = 8, /*  | */
} UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LAT;
#endif

/** @brief GPS longitudinal offset encoding */
#ifndef HAVE_ENUM_UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LON
#define HAVE_ENUM_UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LON
typedef enum UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LON {
    UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LON_NO_DATA = 0, /*  | */
    UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LON_APPLIED_BY_SENSOR = 1, /*  | */
    UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LON_ENUM_END = 2, /*  | */
} UAVIONIX_ADSB_OUT_CFG_GPS_OFFSET_LON;
#endif

/** @brief Emergency status encoding */
#ifndef HAVE_ENUM_UAVIONIX_ADSB_EMERGENCY_STATUS
#define HAVE_ENUM_UAVIONIX_ADSB_EMERGENCY_STATUS
typedef enum UAVIONIX_ADSB_EMERGENCY_STATUS {
    UAVIONIX_ADSB_OUT_NO_EMERGENCY = 0, /*  | */
    UAVIONIX_ADSB_OUT_GENERAL_EMERGENCY = 1, /*  | */
    UAVIONIX_ADSB_OUT_LIFEGUARD_EMERGENCY = 2, /*  | */
    UAVIONIX_ADSB_OUT_MINIMUM_FUEL_EMERGENCY = 3, /*  | */
    UAVIONIX_ADSB_OUT_NO_COMM_EMERGENCY = 4, /*  | */
    UAVIONIX_ADSB_OUT_UNLAWFUL_INTERFERANCE_EMERGENCY = 5, /*  | */
    UAVIONIX_ADSB_OUT_DOWNED_AIRCRAFT_EMERGENCY = 6, /*  | */
    UAVIONIX_ADSB_OUT_RESERVED = 7, /*  | */
    UAVIONIX_ADSB_EMERGENCY_STATUS_ENUM_END = 8, /*  | */
} UAVIONIX_ADSB_EMERGENCY_STATUS;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_uavionix_adsb_out_cfg.h"
#include "./mavlink_msg_uavionix_adsb_out_dynamic.h"
#include "./mavlink_msg_uavionix_adsb_transceiver_health_report.h"

// base include
#include "../common/common.h"

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 2

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_UAVIONIX_ADSB_OUT_CFG, MAVLINK_MESSAGE_INFO_UAVIONIX_ADSB_OUT_DYNAMIC, MAVLINK_MESSAGE_INFO_UAVIONIX_ADSB_TRANSCEIVER_HEALTH_REPORT}
# define MAVLINK_MESSAGE_NAMES {{ "UAVIONIX_ADSB_OUT_CFG", 10001 }, { "UAVIONIX_ADSB_OUT_DYNAMIC", 10002 }, { "UAVIONIX_ADSB_TRANSCEIVER_HEALTH_REPORT", 10003 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_UAVIONIX_H
