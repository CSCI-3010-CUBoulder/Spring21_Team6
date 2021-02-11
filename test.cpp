#define CATCH_CONFIG_MAIN
#include "functions_to_implement.cpp"
#include "catch.hpp"

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    //REQUIRE( Factorial(0) == 1 );
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE( "Signs are computed", "[sign]") {
    REQUIRE( Sign(-1) == -1 );
    REQUIRE( Sign(0) == 1 );
    REQUIRE( Sign(1) == 1);
}