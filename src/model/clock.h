#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::cerr; using std::string; using std::vector;

// makes it so clock class only gets used once:
#ifndef CLOCK_H
#define CLOCK_H

class Clock {
	public:
		int get_hours(long long seconds); //long long allows for REALLY big numbers
		int get_minutes(long long seconds);
		int get_seconds(long long seconds);
		void display_time();
};

#endif // CLOCK_H