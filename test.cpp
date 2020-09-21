#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE ("FIB numbers are computed", "[NthFibonacci]")
{
    REQUIRE(Nthfibonacci(0) == 0);
    REQUIRE(Nthfibonacci(1) == 1);
    REQUIRE(Nthfibonacci(2) == 1);
    REQUIRE(Nthfibonacci(3) == 2);
}