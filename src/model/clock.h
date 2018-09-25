#ifndef CLOCK_H
#define CLOCK_H
#include<chrono>

class Clock 
{
public:
	Clock() 
	{
		seconds = std::chrono::system_clock::now().time_since_epoch() /
			std::chrono::seconds(1);
	}
	Clock(long long sec) : seconds(sec) {}
	int get_hours() const;
	int get_minutes() const;
	int get_seconds() const;
	void display_time();

private:
	long long seconds;
	void update_time();

};

#endif // CLOCK_H