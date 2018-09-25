#include "clock.h"
#include<iostream>

int Clock::get_hours() const
{
	return seconds / 3600 % 24;
}

int Clock::get_minutes()const
{
	return seconds / 60 % 60;
}

int Clock::get_seconds()const
{
	return seconds % 60;
}

void Clock::display_time()
{
	std::cout << get_hours() << " " << get_minutes() << " " << get_seconds();
	update_time();
}

void Clock::update_time()
{
	seconds += 1;
}
