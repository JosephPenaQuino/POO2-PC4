#include "main.h"


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
            rows_1 = 55;
            columns_1 = 10;
            rows_2 = 10;
            columns_2 = 10;
            // TODO: Set size on both matrices
//            Matrix matrix_1(rows_1, columns_1);
//            Matrix matrix_2(rows_2, columns_2);

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
            rows_1 = 2;
            columns_1 = 2;
            rows_2 = 2;
            columns_2 = 2;

            CMatrix matrix_1(rows_1, columns_1);
            CMatrix matrix_2(rows_2, columns_2);

            matrix_1.fill_random();
            matrix_2.fill_random();

            matrix_1.print_values();
            matrix_2.print_values();
            THEN("Multiply both matrices")
            {
                CMatrix matrix_3(matrix_1 * matrix_2);
                matrix_3.print_values();
                REQUIRE(true);
            }
        }
    }
}