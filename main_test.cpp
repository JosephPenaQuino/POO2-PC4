#include "catch.hpp"
#include "main.h"
#include <iostream>

SCENARIO("Matrix multiplication Comparison between Concurrent and Non-concurrent")
{
    GIVEN("Non-Concurrent Algorithm")
    {
        NMatrix my_matrix_1;
        NMatrix my_matrix_2;
        NMatrix my_matrix_result;
        WHEN("Setting size of each matrix")
        {
            // TODO: Get size of each matrix

            // TODO: Set size on both matrices

            THEN("Multiply both matrices")
            {
                my_matrix_result = my_matrix_1 * my_matrix_2;
                REQUIRE(my_matrix_result.print_values());
            }
        }
    }
    GIVEN("Concurrent Algorithm")
    {

        WHEN("Setting size of each matrix")
        {
            CMatrix my_matrix_1;
            CMatrix my_matrix_2;
            CMatrix my_matrix_result;

            // TODO: Get size of each matrix

            // TODO: Set size on both matrices

            THEN("Multiply both matrices")
            {

                my_matrix_result = my_matrix_1 * my_matrix_2;
                REQUIRE(my_matrix_result.print_values());
            }
        }
    }

}