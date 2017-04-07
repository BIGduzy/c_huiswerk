/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 2 opdracht 5
/* --------------------------- */

#include <stdio.h>

int main(int argc, char **argv)
{
    const int ROWS = 10;
    const int COLS = 10;
    int matrix[][10] = {{-1,-1,-1,-1,-1,-1, 0, 1,-1, 1},
                        { 1,-1,-1,-1,-1,-1,-1,-1,-1, 1},
                        {-1,-1, 0,-1, 1,-1,-1,-1,-1,-1},
                        {-1,-1,-1,-1, 0,-1,-1,-1,-1,-1},
                        {-1,-1,-1,-1,-1,-1, 0,-1,-1, 1},
                        {-1,-1,-1,-1,-1, 1,-1,-1, 1,-1},
                        {-1,-1,-1,-1,-1,-1, 0,-1,-1, 0},
                        { 0,-1,-1,-1,-1,-1,-1,-1,-1,-1},
                        {-1,-1, 1, 1,-1,-1,-1,-1,-1, 1},
                        { 0,-1, 1,-1,-1,-1,-1,-1, 0,-1}};

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            int current = matrix[i][j];
            printf((current == -1) ? "-" : "%d", current);
        }
        printf("\n");
    }
	return 0;
}
