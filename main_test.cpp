#include "catch.hpp"
#include "main.h"
#include <iostream>
#include "Matrix.h"
#include "CMatrix.h"
#include "Matrix.cpp"
#include "CMatrix.cpp"

SCENARIO("Matrix multiplication Comparison between Concurrent and Non-concurrent")
{
    GIVEN("Non-Concurrent Algorithm")
    {
        WHEN("Setting size of each matrix")
        {
            int rows_1, columns_1, rows_2, columns_2;
            // TODO: Get size of each matrix
//            std::cout << "Insert Rows and columns of the first matrix";
//            std::cin >> rows_1 >> columns_1;
//            std::cout << "Insert Rows and columns of the second matrix";
//            std::cin >> rows_2 >> columns_2;
            rows_1 = 10;
            columns_1 = 10;
            rows_2 = 10;
            columns_2 = 10;
            // TODO: Set size on both matrices
            Matrix matrix_1(rows_1, columns_1);
            Matrix matrix_2(rows_2, columns_2);

            THEN("Multiply both matrices")
            {
                REQUIRE(true);
            }
        }
    }
    GIVEN("Concurrent Algorithm")
    {

        WHEN("Setting size of each matrix")
        {
            // TODO: Get size of each matrix
            int rows_1, columns_1, rows_2, columns_2;
//            std::cout << "Insert Rows and columns of the first matrix";
//            std::cin >> rows_1 >> columns_1;
//            std::cout << "Insert Rows and columns of the second matrix";
//            std::cin >> rows_2 >> columns_2;
            rows_1 = 10;
            columns_1 = 10;
            rows_2 = 10;
            columns_2 = 10;

            // TODO: Set size on both matrices
            CMatrix matrix_1(rows_1, columns_1);
            CMatrix matrix_2(rows_2, columns_2);

            THEN("Multiply both matrices")
            {
                REQUIRE(true);
            }
        }
    }

}