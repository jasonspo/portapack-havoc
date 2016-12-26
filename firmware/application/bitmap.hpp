/*
 * Copyright (C) 2015 Jared Boone, ShareBrained Technology, Inc.
 * Copyright (C) 2016 Furrtek
 *
 * This file is part of PortaPack.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __BITMAP_HPP__
#define __BITMAP_HPP__

#include "ui.hpp"

namespace ui {

// Use firmware/tools/make_bitmap.py !

static constexpr uint8_t bitmap_icon_adsb_data[] = {
	0x80, 0x01, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xE8, 0x17, 
	0xFA, 0x5F, 
	0xFE, 0x7F, 
	0xFF, 0xFF, 
	0xC7, 0xE3, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xE0, 0x07, 
	0xF8, 0x1F, 
	0x38, 0x1C, 
};

static constexpr Bitmap bitmap_icon_adsb {
	{ 16, 16 }, bitmap_icon_adsb_data
};

static constexpr uint8_t bitmap_icon_bht_data[] = {
	0x00, 0x00, 
	0xE0, 0x07, 
	0xF8, 0x08, 
	0x9C, 0x07, 
	0x0C, 0x00, 
	0x8E, 0x0A, 
	0x46, 0x12, 
	0x26, 0x22, 
	0x06, 0x02, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x00, 0x00, 
};

static constexpr Bitmap bitmap_icon_bht {
	{ 16, 16 }, bitmap_icon_bht_data
};

static constexpr uint8_t bitmap_icon_closecall_data[] = {
	0x00, 0x00, 
	0x00, 0x10, 
	0x00, 0x38, 
	0x00, 0x7C, 
	0x00, 0x00, 
	0x3E, 0x00, 
	0xE3, 0x00, 
	0x80, 0x01, 
	0x1C, 0x03, 
	0x22, 0x02, 
	0x41, 0x06, 
	0x88, 0x04, 
	0x9C, 0x04, 
	0x88, 0x04, 
	0x41, 0x06, 
	0x22, 0x02, 
};

static constexpr Bitmap bitmap_icon_closecall {
	{ 16, 16 }, bitmap_icon_closecall_data
};

static constexpr uint8_t bitmap_icon_foxhunt_data[] = {
	0x18, 0x18, 
	0x28, 0x14, 
	0x68, 0x16, 
	0x68, 0x16, 
	0xC8, 0x13, 
	0x88, 0x11, 
	0x04, 0x20, 
	0x24, 0x24, 
	0x22, 0x44, 
	0x01, 0x80, 
	0x06, 0x60, 
	0x98, 0x19, 
	0x20, 0x04, 
	0x40, 0x02, 
	0x80, 0x01, 
	0x00, 0x00, 
};

static constexpr Bitmap bitmap_icon_foxhunt {
	{ 16, 16 }, bitmap_icon_foxhunt_data
};

static constexpr uint8_t bitmap_icon_hackrf_data[] = {
	0x80, 0x00, 
	0xC0, 0x01, 
	0xE0, 0x03, 
	0x80, 0x00, 
	0x80, 0x0E, 
	0x90, 0x0E, 
	0xB8, 0x0E, 
	0x90, 0x04, 
	0x90, 0x02, 
	0xA0, 0x01, 
	0xC0, 0x00, 
	0x80, 0x00, 
	0xC0, 0x01, 
	0xE0, 0x03, 
	0xE0, 0x03, 
	0xC0, 0x01, 
};

static constexpr Bitmap bitmap_icon_hackrf {
	{ 16, 16 }, bitmap_icon_hackrf_data
};

static constexpr uint8_t bitmap_icon_jammer_data[] = {
	0xA6, 0x2C, 
	0x73, 0x47, 
	0x2E, 0xB9, 
	0x55, 0xD7, 
	0x7E, 0xAE, 
	0xD3, 0x45, 
	0xCA, 0xBA, 
	0x71, 0x15, 
	0xDA, 0xBE, 
	0xF5, 0xAB, 
	0xAD, 0x98, 
	0x48, 0x77, 
	0xAD, 0xCA, 
	0x58, 0x7D, 
	0xBF, 0xAF, 
	0x5A, 0x65, 
};

static constexpr Bitmap bitmap_icon_jammer {
	{ 16, 16 }, bitmap_icon_jammer_data
};

static constexpr uint8_t bitmap_icon_lcr_data[] = {
	0x0C, 0x00, 
	0xFF, 0x7F, 
	0x01, 0x80, 
	0xC1, 0x9B, 
	0xFF, 0x7F, 
	0x0C, 0x00, 
	0xFF, 0x7F, 
	0x01, 0x80, 
	0xC1, 0x9D, 
	0xFF, 0x7F, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
};

static constexpr Bitmap bitmap_icon_lcr {
	{ 16, 16 }, bitmap_icon_lcr_data
};

static constexpr uint8_t bitmap_icon_microphone_data[] = {
	0xC0, 0x03, 
	0x60, 0x05, 
	0xB0, 0x0A, 
	0x50, 0x0D, 
	0xB0, 0x0E, 
	0x60, 0x05, 
	0xE0, 0x07, 
	0x20, 0x04, 
	0x20, 0x04, 
	0xE0, 0x04, 
	0xE0, 0x04, 
	0xC0, 0x02, 
	0x40, 0x02, 
	0x40, 0x02, 
	0x40, 0x02, 
	0xC0, 0x03, 
};

static constexpr Bitmap bitmap_icon_microphone {
	{ 16, 16 }, bitmap_icon_microphone_data
};

static constexpr uint8_t bitmap_icon_morse_data[] = {
	0x00, 0x00, 
	0x18, 0x00, 
	0x18, 0x00, 
	0x18, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x1F, 
	0x06, 0x1F, 
	0x06, 0x00, 
	0x66, 0xC0, 
	0x66, 0xC0, 
	0x03, 0x00, 
	0x03, 0x00, 
	0x03, 0x00, 
	0x00, 0x00, 
};

static constexpr Bitmap bitmap_icon_morse {
	{ 16, 16 }, bitmap_icon_morse_data
};

static constexpr uint8_t bitmap_icon_numbers_data[] = {
	0x00, 0x00, 
	0x68, 0x1B, 
	0x48, 0x09, 
	0x48, 0x1A, 
	0x48, 0x5B, 
	0x08, 0x00, 
	0x14, 0x00, 
	0x1C, 0x00, 
	0x14, 0x00, 
	0x14, 0x00, 
	0x1C, 0x00, 
	0x14, 0x00, 
	0x22, 0x00, 
	0x3E, 0x00, 
	0x22, 0x00, 
	0x00, 0x00, 
};

static constexpr Bitmap bitmap_icon_numbers {
	{ 16, 16 }, bitmap_icon_numbers_data
};

static constexpr uint8_t bitmap_icon_nuoptix_data[] = {
	0x80, 0x01, 
	0x80, 0x01, 
	0x40, 0x02, 
	0x40, 0x1A, 
	0x40, 0x1A, 
	0x20, 0x0C, 
	0x20, 0x0F, 
	0x20, 0x1E, 
	0x10, 0x0E, 
	0x10, 0x0B, 
	0x10, 0x0B, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
};

static constexpr Bitmap bitmap_icon_nuoptix {
	{ 16, 16 }, bitmap_icon_nuoptix_data
};

static constexpr uint8_t bitmap_icon_rds_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x3C, 0x3C, 
	0x7E, 0x7E, 
	0x67, 0xE7, 
	0x83, 0xC3, 
	0xC7, 0xE1, 
	0xFD, 0xBC, 
	0x42, 0x42, 
	0x3C, 0x3C, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
};

static constexpr Bitmap bitmap_icon_rds {
	{ 16, 16 }, bitmap_icon_rds_data
};

static constexpr uint8_t bitmap_icon_remote_data[] = {
	0x20, 0x00, 
	0x20, 0x00, 
	0x20, 0x00, 
	0x20, 0x00, 
	0xF0, 0x03, 
	0x10, 0x04, 
	0xD0, 0x08, 
	0xD0, 0x08, 
	0x10, 0x08, 
	0xD0, 0x08, 
	0xD0, 0x08, 
	0x10, 0x08, 
	0x10, 0x08, 
	0x10, 0x08, 
	0x10, 0x08, 
	0xE0, 0x07, 
};

static constexpr Bitmap bitmap_icon_remote {
	{ 16, 16 }, bitmap_icon_remote_data
};

static constexpr uint8_t bitmap_icon_soundboard_data[] = {
	0x00, 0x00, 
	0xDE, 0x7B, 
	0x63, 0x8C, 
	0x21, 0x84, 
	0x21, 0x84, 
	0xDE, 0x7B, 
	0x63, 0x8C, 
	0x21, 0x84, 
	0x21, 0x84, 
	0xDE, 0x7B, 
	0x63, 0x8C, 
	0x21, 0x84, 
	0x21, 0x84, 
	0xDE, 0x7B, 
	0x00, 0x00, 
	0x00, 0x00, 
};

static constexpr Bitmap bitmap_icon_soundboard {
	{ 16, 16 }, bitmap_icon_soundboard_data
};

static constexpr uint8_t bitmap_icon_whistle_data[] = {
	0x00, 0x00, 
	0x60, 0x00, 
	0xFC, 0x01, 
	0xFF, 0x03, 
	0xFF, 0x0F, 
	0xF9, 0x11, 
	0x66, 0x30, 
	0x88, 0x3C, 
	0x10, 0x7F, 
	0x10, 0x7E, 
	0x08, 0x7C, 
	0x08, 0x7C, 
	0x10, 0x3C, 
	0x20, 0x0E, 
	0xC0, 0x03, 
	0x00, 0x00, 
};

static constexpr Bitmap bitmap_icon_whistle {
	{ 16, 16 }, bitmap_icon_whistle_data
};

static constexpr uint8_t bitmap_stealth_data[] = {
	0x00, 0x00,
	0x00, 0x00,
	0xE0, 0x07,
	0xF8, 0x1F,
	0xFC, 0x3F,
	0xFC, 0x3F,
	0xE4, 0x27,
	0xC4, 0x23,
	0xEC, 0x37,
	0x7C, 0x3E,
	0x7C, 0x1E,
	0x2C, 0x0C,
	0x0C, 0x00,
	0x0C, 0x00,
	0x0C, 0x00,
	0x00, 0x00
};

static constexpr Bitmap bitmap_stealth {
	{ 16, 16 }, bitmap_stealth_data
};

static constexpr uint8_t bitmap_speaker_data[] = {
	0x00, 0x00,
	0x00, 0x20,
	0x00, 0x30,
	0x00, 0x38,
	0x00, 0x3C,
	0xDC, 0x3E,
	0xDC, 0x3F,
	0xDC, 0x3F,
	0xDC, 0x3F,
	0xDC, 0x3F,
	0xDC, 0x3E,
	0x00, 0x3C,
	0x00, 0x38,
	0x00, 0x30,
	0x00, 0x20,
	0x00, 0x00
};

static constexpr Bitmap bitmap_speaker {
	{ 16, 16 }, bitmap_speaker_data
};

static constexpr uint8_t bitmap_more_data[] = {
	0x18, 
	0x18, 
	0x18, 
	0x18, 
	0xFF, 
	0x7E, 
	0x3C, 
	0x18, 
};

static constexpr Bitmap bitmap_more {
	{ 8, 8 }, bitmap_more_data
};

static constexpr uint8_t bitmap_rssipwm_data[] = {
	0x00, 0x00, 0x00,
	0x8F, 0xE7, 0x7D,
	0x51, 0x10, 0x10,
	0x51, 0x10, 0x10,
	0x8F, 0xE3, 0x10,
	0x09, 0x04, 0x11,
	0x11, 0x04, 0x11,
	0xD1, 0xF3, 0x7C,
	0x00, 0x00, 0x00,
	0x3F, 0x1E, 0x1E,
	0x21, 0x12, 0x12,
	0x21, 0x12, 0x12,
	0x21, 0x12, 0x12,
	0x21, 0x12, 0x12,
	0x21, 0x12, 0x12,
	0xE1, 0xF3, 0x73
};

static constexpr Bitmap bitmap_rssipwm {
	{ 24, 16 }, bitmap_rssipwm_data
};

static constexpr uint8_t bitmap_keyboard_data[] = {
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00,
	0xF0, 0x1F,
	0x10, 0x11,
	0x10, 0x11,
	0x10, 0x11,
	0xFC, 0x7F,
	0x44, 0x44,
	0x44, 0x44,
	0x44, 0x44,
	0xFC, 0x7F,
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00,
};

static constexpr Bitmap bitmap_keyboard {
	{ 16, 16 }, bitmap_keyboard_data
};

static constexpr uint8_t bitmap_unistroke_data[] = {
	0x33, 0xC0,
	0x33, 0x00,
	0xB3, 0xCD,
	0xB3, 0xDF,
	0xB3, 0xD9,
	0xB3, 0xD9,
	0x9E, 0xD9,
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x1C,
	0x06, 0x3E,
	0x06, 0x67,
	0xCE, 0x43,
	0xFC, 0x01,
	0x78, 0x40,
	0x00, 0x00
};

static constexpr Bitmap bitmap_unistroke {
	{ 16, 16 }, bitmap_unistroke_data
};

static constexpr uint8_t bitmap_record_data[] = {
	0x00, 0x00,
	0x00, 0x00,
	0xc0, 0x03,
	0xf0, 0x0f,
	0xf8, 0x1f,
	0xf8, 0x1f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xf8, 0x1f,
	0xf8, 0x1f,
	0xf0, 0x0f,
	0xc0, 0x03,
	0x00, 0x00,
	0x00, 0x00,
};

static constexpr Bitmap bitmap_record {
	{ 16, 16 }, bitmap_record_data
};

static constexpr uint8_t bitmap_stop_data[] = {
	0x00, 0x00,
	0x00, 0x00,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0xfc, 0x3f,
	0x00, 0x00,
	0x00, 0x00,
};

static constexpr Bitmap bitmap_stop {
	{ 16, 16 }, bitmap_stop_data
};

static constexpr uint8_t bitmap_sleep_data[] = {
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x04,
	0x00, 0x08,
	0x00, 0x18,
	0x00, 0x18,
	0x00, 0x38,
	0x00, 0x3c,
	0x00, 0x3c,
	0x00, 0x3e,
	0x84, 0x1f,
	0xf8, 0x1f,
	0xf0, 0x0f,
	0xc0, 0x03,
	0x00, 0x00,
	0x00, 0x00,
};

static constexpr Bitmap bitmap_sleep {
	{ 16, 16 }, bitmap_sleep_data
};

static constexpr uint8_t bitmap_camera_data[] = {
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00,
	0xcc, 0x03,
	0xe8, 0x07,
	0xfc, 0x3f,
	0x3c, 0x3c,
	0x9c, 0x39,
	0xdc, 0x3b,
	0xdc, 0x3b,
	0x9c, 0x39,
	0x3c, 0x3c,
	0xfc, 0x3f,
	0x00, 0x00,
	0x00, 0x00,
	0x00, 0x00,
};

static constexpr Bitmap bitmap_camera {
	{ 16, 16 }, bitmap_camera_data
};

static constexpr uint8_t bitmap_sd_card_ok_data[] = {
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 0xf0, 0x1f,
	0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
	0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
	0xf8, 0x1f, 0xf8, 0x1f, 0x00, 0x00, 0x00, 0x00,
};

static constexpr Bitmap bitmap_sd_card_ok {
	{ 16, 16 }, bitmap_sd_card_ok_data
};

static constexpr uint8_t bitmap_sd_card_unknown_data[] = {
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 0xf0, 0x1f,
	0x38, 0x1c, 0x98, 0x19, 0xf8, 0x19, 0xf8, 0x1c,
	0x78, 0x1e, 0x78, 0x1e, 0xf8, 0x1f, 0x78, 0x1e,
	0xf8, 0x1f, 0xf8, 0x1f, 0x00, 0x00, 0x00, 0x00,
};

static constexpr Bitmap bitmap_sd_card_unknown {
	{ 16, 16 }, bitmap_sd_card_unknown_data
};

static constexpr uint8_t bitmap_sd_card_error_data[] = {
	0x00, 0x00, 0x00, 0x00, 0xe0, 0x1f, 0xf0, 0x1f,
	0xf8, 0x1f, 0xd8, 0x1b, 0x98, 0x19, 0x38, 0x1c,
	0x78, 0x1e, 0x38, 0x1c, 0x98, 0x19, 0xd8, 0x1b,
	0xf8, 0x1f, 0xf8, 0x1f, 0x00, 0x00, 0x00, 0x00,
};

static constexpr Bitmap bitmap_sd_card_error {
	{ 16, 16 }, bitmap_sd_card_error_data
};

static constexpr uint8_t bitmap_target_calibrate_data[] = {
	0x02, 0x00, 0x00, 0x40,
	0x07, 0x00, 0x00, 0xe0,
	0x0e, 0x00, 0x00, 0x70,
	0x1c, 0x00, 0x00, 0x38,

	0x38, 0x00, 0x00, 0x1c,
	0x70, 0x00, 0x00, 0x0e,
	0xe0, 0x00, 0x00, 0x07,
	0xc0, 0x01, 0x80, 0x03,
	
	0x80, 0x03, 0xc0, 0x01,
	0x00, 0x07, 0xe0, 0x00,
	0x00, 0x0e, 0x70, 0x00,
	0x00, 0x1c, 0x38, 0x00,

	0x00, 0x38, 0x1c, 0x00,
	0x00, 0x30, 0x0c, 0x00,
	0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,

	0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
	0x00, 0x30, 0x0c, 0x00,
	0x00, 0x38, 0x1c, 0x00,

	0x00, 0x1c, 0x38, 0x00,
	0x00, 0x0e, 0x70, 0x00,
	0x00, 0x07, 0xe0, 0x00,
	0x80, 0x03, 0xc0, 0x01,

	0xc0, 0x01, 0x80, 0x03,
	0xe0, 0x00, 0x00, 0x07,
	0x70, 0x00, 0x00, 0x0e,
	0x38, 0x00, 0x00, 0x1c,

	0x1c, 0x00, 0x00, 0x38,
	0x0e, 0x00, 0x00, 0x70,
	0x07, 0x00, 0x00, 0xe0,
	0x02, 0x00, 0x00, 0x40,
};

static constexpr Bitmap bitmap_target_calibrate {
	{ 32, 32 }, bitmap_target_calibrate_data
};

static constexpr uint8_t bitmap_target_verify_data[] = {
	0x00, 0xe0, 0x07, 0x00,
	0x00, 0xfc, 0x3f, 0x00,
	0x00, 0x1f, 0xf8, 0x00,
	0xc0, 0x03, 0xc0, 0x03,

	0xe0, 0x00, 0x00, 0x07,
	0x70, 0x00, 0x00, 0x0e,
	0x38, 0x00, 0x00, 0x1c,
	0x18, 0x00, 0x00, 0x18,

	0x0c, 0x00, 0x00, 0x30,
	0x0c, 0x00, 0x00, 0x30,
	0x06, 0x00, 0x00, 0x60,
	0x06, 0x00, 0x00, 0x60,

	0x06, 0x00, 0x00, 0x60,
	0x03, 0x80, 0x01, 0xc0,
	0x03, 0x80, 0x01, 0xc0,
	0x03, 0xe0, 0x07, 0xc0,

	0x03, 0xe0, 0x07, 0xc0,
	0x03, 0x80, 0x01, 0xc0,
	0x03, 0x80, 0x01, 0xc0,
	0x06, 0x00, 0x00, 0x60,

	0x06, 0x00, 0x00, 0x60,
	0x06, 0x00, 0x00, 0x60,
	0x0c, 0x00, 0x00, 0x30,
	0x0c, 0x00, 0x00, 0x30,

	0x18, 0x00, 0x00, 0x18,
	0x38, 0x00, 0x00, 0x1c,
	0x70, 0x00, 0x00, 0x0e,
	0xe0, 0x00, 0x00, 0x07,

	0xc0, 0x03, 0xc0, 0x03,
	0x00, 0x1f, 0xf8, 0x00,
	0x00, 0xfc, 0x3f, 0x00,
	0x00, 0xe0, 0x07, 0x00,
};

static constexpr Bitmap bitmap_target_verify {
	{ 32, 32 }, bitmap_target_verify_data
};

} /* namespace ui */

#endif/*__BITMAP_HPP__*/
