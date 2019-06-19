#include "catch.hpp"
#include "main.h"
#include <iostream>

SCENARIO("Matrix multiplication Comparison between Concurrent and Non-concurrent")
{
    GIVEN("Non-Concurrent Algorithm")
    {
        WHEN("Setting size of each matrix")
        {
            // TODO: Get size of each matrix

            // TODO: Set size on both matrices

            THEN("Multiply both matrices")
            {
                REQUIRE(false);
            }
        }
    }
    GIVEN("Concurrent Algorithm")
    {

        WHEN("Setting size of each matrix")
        {

            THEN("Multiply both matrices")
            {
                REQUIRE(false);
            }
        }
    }

}