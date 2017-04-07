/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 4 opdracht 2
/* --------------------------- */

/**
 * @file 
 * @mainpage Author Information
 *  Nick Bout (<a href="https://github.com/BIGduzy">BIGduzy</a>) \n
 *  04/03/2017 \n
 *  Hogeschool Utrecht - Jaar 1 - Blok 3 - ADC
 * @section program_name Program name
 *  Week 4 exercise 2
 */


#include <stdio.h>

/**
 * @brief Reads file and puts content in matrix
 * 
 *  Content can only be -, 0 of 1.
 *  - results in empty
 * 
 * @param filename Name of the file that needs to be red
 * @param size Size of matrix
 * @param matrix the matrix to put content in
 * @return if success
 */

int read_matrix(const char* filename, int size, int matrix[][size]) {
    FILE *fp;
    fp = fopen(filename, "r");
    char ch;
    
    if (fp == NULL) {
        printf("Cannot open %s for reading", filename);
        return 0;
    }
    
    for (int i = 0; i < size; i++) {
        int j = 0;
        while (j < size || ch == EOF) {
            ch = fgetc(fp);
            if (ch == '1' || ch == '0' || ch == '-') {
                matrix[i][j] = ch;
                j++;
            } else if (ch != '\n' && ch != '\r') {
                printf("%c \n", ch);
                return 0;
            }
        }
    }
    
    fclose(fp);
    
    return 1;
}

/**
 * @brief reads matrix from file and prints if success
 */

int main(int argc, char **argv)
{
    int size = 10;
	int matrix[size][size];    
    int success = read_matrix("binary_sudoku_puzzle.txt", size, matrix);
    
    
    printf((success) ? "Success:\n" : "Failed");
    if (success) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf("%c ", matrix[i][j]);
            }
            printf("\n");
        }
    }
	return 0;
}
