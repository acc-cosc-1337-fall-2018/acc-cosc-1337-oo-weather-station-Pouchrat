#include<chrono>
#include <iostream>
#include <thread>
#include <vector>
#include "temperature_observation.h"

#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H


class TemperatureSensor {
public:
	void get_temperature_keyboard();
	void get_temperature_file();
	void get_temperature_web();

private:
	std::vector<TemperatureObseration> observations;
	int interval; //reading interval in seconds

};



#endif //TEMPERATURE_SENSOR_H