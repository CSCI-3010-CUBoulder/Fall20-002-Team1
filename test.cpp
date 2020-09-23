#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>


TEST_CASE ("FIB numbers are computed", "[NthFibonacci]")
{
    REQUIRE(Nthfibonacci(0) == 0);
    REQUIRE(Nthfibonacci(1) == 1);
    REQUIRE(Nthfibonacci(2) == 1);
    REQUIRE(Nthfibonacci(3) == 2);
}
TEST_CASE( "Factorials tested", "[factorial]"){
  REQUIRE( Factorial(0) == 1);
  REQUIRE( Factorial(1) == 1);
  REQUIRE( Factorial(2) == 2);
}
TEST_CASE( "Checking the sign of a number", "[Sign]") {
    REQUIRE( Sign(0) == 1);
    REQUIRE( Sign(-9) == -1);
    REQUIRE( Sign(1) == 1);

}