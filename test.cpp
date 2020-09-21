#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implment.cpp"
#include <vector>

TEST_CASE( "Factorials tested", "[factorial]"){
  REQUIRE( Factorial(0) == 1);
  REQUIRE( Factorial(1) == 1);
  REQUIRE( Factorial(2) == 2);
}
