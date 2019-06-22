#include "main.h"


SCENARIO("Matrix multiplication Comparison between Concurrent and Non-concurrent")
{
    GIVEN("Non-Concurrent Algorithm")
    {
        WHEN("Setting size of each matrix")
        {
            int rows_1, columns_1, rows_2, columns_2;
            rows_1 = 150;
            columns_1 = 150;
            rows_2 = 150;
            columns_2 = 150;

            Matrix<int> matrix_1(rows_1, columns_1);
            Matrix<int> matrix_2(rows_2, columns_2);
            matrix_1.fill_random();
            matrix_2.fill_random();

            THEN("Multiply both matrices")
            {
                auto start = std::chrono::high_resolution_clock::now();
                Matrix<int> matrix_3(matrix_1 * matrix_2);
                auto finish = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> elapsed = finish - start;
                std::cout << "Time interval Non-Concurrent: " << elapsed.count() << " s" << std::endl;
                REQUIRE(true);
            }
        }
    }
    GIVEN("Concurrent Algorithm")
    {

        WHEN("Setting size of each matrix")
        {
            int rows_1 = 200;
            int columns_1 = 200;
            int rows_2 = 200;
            int columns_2 = 200;

            CMatrix matrix_1(rows_1, columns_1);
            CMatrix matrix_2(rows_2, columns_2);

            matrix_1.fill_random();
            matrix_2.fill_random();
            if (columns_1 * rows_2 < 10)
            {
                matrix_1.print_values();
                matrix_2.print_values();
            }


            THEN("Multiply both matrices")
            {
                auto start = std::chrono::high_resolution_clock::now();
                CMatrix matrix_3(matrix_1 * matrix_2);
                auto finish = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> elapsed = finish - start;
                std::cout << "Time interval Concurrent: " << elapsed.count() << " s" << std::endl;

                if (columns_1 * rows_2 < 10)
                    matrix_3.print_values();
            }
        }
    }
}