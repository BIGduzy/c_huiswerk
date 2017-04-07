/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 3 opdracht 2
/* --------------------------- */

/**
 * @file 
 * @mainpage Author Information
 *  Nick Bout (<a href="https://github.com/BIGduzy">BIGduzy</a>) \n
 *  22/02/2017 \n
 *  Hogeschool Utrecht - Jaar 1 - Blok 3 - ADC
 * @section program_name Program name
 *  Week 3 exercise 2
 */

#include <stdio.h>
#include <stdbool.h>

/**
 * @brief Checks if 2 arrays are the same
 * 
 * Checks if the 2 arrays given have the same elements in the same order
 * 
 * @param a1 Array 1
 * @param a2 Array 2
 * @param size Size of the arrays (Both arrays need to have the same size)
 * @return bool
 */
bool equal_rows(int a1[], int a2[], int size);


/**
 * @brief Main
 * Creates 3 arrays, uses equal_rows function and prints results
 */
int main(int argc, char **argv)
{
    const int ARR_SIZE = 5;
    int arr1[] = {1, 1, 2, 5, 3};
    int arr2[] = {1, 1, 2, 5, 3};
    int arr3[] = {1, 1, 5, 5, 3};
    
    printf("Array 1 is %s aan array 2\n", (equal_rows(arr1, arr2, ARR_SIZE)) ? "gelijk" : "niet gelijk");
    printf("Array 1 is %s aan array 3\n", (equal_rows(arr1, arr3, ARR_SIZE)) ? "gelijk" : "niet gelijk");
    
	return 0;
}

bool equal_rows(int a1[], int a2[], int size) {
    for (int i = 0; i < size; i++) {
        if (a1[i] != a2[i]) return false;
    }
    
    
    return true;
}