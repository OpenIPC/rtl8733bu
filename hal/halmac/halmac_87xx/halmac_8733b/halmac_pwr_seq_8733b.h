/******************************************************************************
 *
 * Copyright(c) 2017 - 2019 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 ******************************************************************************/

#ifndef HALMAC_POWER_SEQUENCE_8733B
#define HALMAC_POWER_SEQUENCE_8733B

#include "../../halmac_pwr_seq_cmd.h"
#include "../../halmac_hw_cfg.h"

#if HALMAC_8733B_SUPPORT

#define HALMAC_8733B_PWR_SEQ_VER  "V14"

extern struct halmac_wlan_pwr_cfg *card_en_flow_8733b[];
extern struct halmac_wlan_pwr_cfg *card_dis_flow_8733b[];

#if HALMAC_PLATFORM_TESTPROGRAM
extern struct halmac_wlan_pwr_cfg *suspend_flow_8733b[];
extern struct halmac_wlan_pwr_cfg *resume_flow_8733b[];
extern struct halmac_wlan_pwr_cfg *hwpdn_flow_8733b[];
extern struct halmac_wlan_pwr_cfg *enter_lps_flow_8733b[];
extern struct halmac_wlan_pwr_cfg *enter_dlps_flow_8733b[];
extern struct halmac_wlan_pwr_cfg *leave_lps_flow_8733b[];
extern struct halmac_wlan_pwr_cfg *lps_8733b[];
extern struct halmac_wlan_pwr_cfg *lps_32k_8733b[];
extern struct halmac_wlan_pwr_cfg *lps_lv_8733b[];
extern struct halmac_wlan_pwr_cfg *lps_pg_8733b[];
extern struct halmac_wlan_pwr_cfg *lps_lv_pg_8733b[];
#endif

#endif /* HALMAC_8733B_SUPPORT*/

#endif
