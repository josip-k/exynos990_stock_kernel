#ifndef IS_EEPROM_REAR_2L4_V010_H
#define IS_EEPROM_REAR_2L4_V010_H

/* Beyond_Rear_Cal_Map_V010_20180816_for_ALL */

#define IS_MAX_CAL_SIZE					(64 * 1024)

/* PAF calibration Data */
#define ROM_PAF_CAL_DATA_START_ADDR				0x4400 /* WIDE F1.5 */
#define ROM_F2_PAF_CAL_DATA_START_ADDR			0x5C10 /* WIDE2 F2.4 */
#define ROM_REAR3_PAF_CAL_DATA_START_ADDR			0xA000 /* TELE */

/********* TELE = REAR3 *********/

#define ROM_REAR3_FLAG_DUMMY_ADDR				0xB696
#define ROM_REAR3_IMAGE_CROP_NUM_ADDR			0xB697

#endif /* IS_EEPROM_REAR_2L4_V010_H */