#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE( "Checking the sign of a number", "[Sign]") {
    REQUIRE( Sign(0) == 1);
    REQUIRE( Sign(-9) == -1);
    REQUIRE( Sign(1) == 1);
}

