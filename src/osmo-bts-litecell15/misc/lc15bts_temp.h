#ifndef _LC15BTS_TEMP_H
#define _LC15BTS_TEMP_H

enum lc15bts_temp_sensor {
	LC15BTS_TEMP_SUPPLY,
	LC15BTS_TEMP_SOC,
	LC15BTS_TEMP_FPGA,
	LC15BTS_TEMP_MEMORY,
	LC15BTS_TEMP_TX1,
	LC15BTS_TEMP_TX2,
	LC15BTS_TEMP_PA1,
	LC15BTS_TEMP_PA2,
	_NUM_TEMP_SENSORS
};

enum lc15bts_temp_type {
	LC15BTS_TEMP_INPUT,
	LC15BTS_TEMP_LOWEST,
	LC15BTS_TEMP_HIGHEST,
	LC15BTS_TEMP_FAULT,
	_NUM_TEMP_TYPES
};

int lc15bts_temp_get(enum lc15bts_temp_sensor sensor,
		      enum lc15bts_temp_type type);

#endif