#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "clock.h"

TEST_CASE("Test get hours from seconds") 
{
	Clock clock(3600);
	REQUIRE(clock.get_hours() == 1);

	Clock clock1(34950);
	REQUIRE(clock1.get_hours() == 9);

	Clock clock2(68950);
	REQUIRE(clock2.get_hours() == 19);

	Clock clock3(150000);
	REQUIRE(clock3.get_hours() == 17);
}

TEST_CASE("Test get minutes from seconds") 
{
	Clock clock(3900);
	REQUIRE(clock.get_minutes() == 0);

	Clock clock1(3800);
	REQUIRE(clock1.get_minutes() == 3);

	Clock clock2(34950);
	REQUIRE(clock2.get_minutes() == 42);
}

TEST_CASE("Test get seconds from seconds since 1970") 
{
	Clock clock(3600);
	REQUIRE(clock.get_seconds() == 0);

	Clock clock1(3800);
	REQUIRE(clock1.get_seconds() == 20);

	Clock clock2(34950);
	REQUIRE(clock2.get_seconds() == 30);
}
