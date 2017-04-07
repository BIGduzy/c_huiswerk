/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 3 opdracht 4
/* --------------------------- */

/**
 * @file 
 * @mainpage Author Information
 *  Nick Bout (<a href="https://github.com/BIGduzy">BIGduzy</a>) \n
 *  24/02/2017 \n
 *  Hogeschool Utrecht - Jaar 1 - Blok 3 - ADC
 * @section program_name Program name
 *  Week 3 exercise 4
 */

#include <stdio.h>

/**
 * @brief Prints matrix
 * 
 *  Prints given matrix, e.g. {{1, 1, 1}, {2, 2, 2}}:\n
 *      1 1 1\n
 *      2 2 2\n
 * 
 * @param rows Number of rows
 * @param cols Number of columns
 * @param matrix The matrix
 */
void printMatrix(int rows, int cols, int matrix[rows][cols]);

/**
 * @brief Transposes matrix
 * 
 *  Transposes given matrix
 * 
 * @param rows Number of rows
 * @param cols Number of columns
 * @param matrix The matrix
 */
void transpose_matrix(int rows, int cols, int matrix[rows][cols]);

/**
 * @brief Main
 * Creates matrix, prints it using the printMatrix function, transposes it and then prints it again.
 */

int main(int argc, char **argv)
{
    const int ROWS = 3;
    const int COLS = 3;
    int mt[3][3] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3},
    };
    
    printMatrix(ROWS, COLS, mt);
    transpose_matrix(ROWS, COLS, mt);
    printf("\n");
    printMatrix(ROWS, COLS, mt);
    
	return 0;
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transpose_matrix(int rows, int cols, int matrix[rows][cols]) {
    int mt[rows][cols];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mt[i][j] = matrix[j][i];
        }
    }
    
    // Overwrite matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = mt[i][j];
        }
    }
}