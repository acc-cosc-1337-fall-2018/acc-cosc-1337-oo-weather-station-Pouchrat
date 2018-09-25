#include "clock.h"
//main screen


int main() 
{
	//display time
	Clock clock;


	int i{ 0 };
	while (i != 100) {
		std::this_thread::sleep_for(std::chrono::seconds(1));
		clock.display_time();
		std::cout << std::endl;
		i++;
	}


	return 0;
}
