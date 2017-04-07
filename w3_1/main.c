/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 3 opdracht 1
/* --------------------------- */

/**
 * @file 
 * @mainpage Author Information
 *  Nick Bout (<a href="https://github.com/BIGduzy">BIGduzy</a>) \n
 *  22/02/2017 \n
 *  Hogeschool Utrecht - Jaar 1 - Blok 3 - ADC
 * @section program_name Program name
 *  Week 3 exercise 1
 */

#include <stdio.h>

/**
 * @brief Counts n in array a
 * @param a The array
 * @param size Size of array
 * @param n Number that needs to be counted
 */
int count(int a[], int size, int n);

/**
 * @brief Main
 * Creates array, uses count function and prints result
 */

int main(int argc, char **argv)
{
    const int ARR_SIZE = 7;
    int arr[] = {1, 1, 1, 2, 3, 12, 6};
    int num = 1;
    printf("%d komt %d keer voor in de array", num, count(arr, ARR_SIZE, num));
    return 0;
}

int count(int a[], int size, int n) {
    int num = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] == n) num++;
    }
    
    return num;
}