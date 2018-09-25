#include "clock.h"
#include <chrono>

int Clock::get_hours(long long seconds)
{
	return seconds / 3600 % 24;
}

int Clock::get_minutes(long long seconds) {

	return seconds / 60 % 60;
}

int Clock::get_seconds(long long seconds)
{
	return seconds % 60;
}

void Clock::display_time()
{
	auto seconds = std::chrono::system_clock::now().time_since_epoch() /
		std::chrono::seconds(1);

	cout << get_hours(seconds) << " " << get_minutes(seconds) << " " << get_seconds(seconds);
}
