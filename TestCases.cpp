#include <iostream>
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#define CATCH_CONFIG_MAIN   
#include "catch.hpp"
using namespace std;

//--
TEST_CASE("File Conversion")  
{ 
	SECTION("")
	{
		REQUIRE(10 == 10);
	}

	SECTION("")
	{
		REQUIRE(10 == 10);
	}
}