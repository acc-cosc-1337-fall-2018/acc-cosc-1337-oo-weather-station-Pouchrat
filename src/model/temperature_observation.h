#ifndef TEMPERATURE_OBSERVATION_H
#define TEMPERATURE_OBSERVATION_H

#include<chrono>
#include <iostream>
#include <thread>

class TemperatureObseration {
public:
	TemperatureObservation(int t, long long s) : temperature(t), seconds(s) {}
	int get_temperature() const;

private:
	int temperature;
	long long seconds;
};



#endif //TEMPERATURE_OBSERVATION_H