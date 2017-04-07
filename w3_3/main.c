/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 3 opdracht 3
/* --------------------------- */

/**
 * @file 
 * @mainpage Author Information
 *  Nick Bout (<a href="https://github.com/BIGduzy">BIGduzy</a>) \n
 *  24/02/2017 \n
 *  Hogeschool Utrecht - Jaar 1 - Blok 3 - ADC
 * @section program_name Program name
 *  Week 3 exercise 3
 */

#include <stdio.h>
#include <stdbool.h>

/**
 * @brief Checks if array is valid
 * 
 * An array is valid when:
 *  1. The array contains only ones or zeros
 *  2. The number of zeros equals the number of ones
 *  3. There are not 3 of the same number in a row
 * 
 * @param a The array
 * @param size The size of the array
 * @return bool
 */
bool valid_row(int a[], int size);

/**
 * @brief Main
 * Creates four arrays, uses valid_row function and prints result
 */
int main(int argc, char **argv)
{
    const int ARR_SIZE = 6;
	int arr1[] = { 1, 2, 1, 0, 0, 1, 0};
    int arr2[] = { 1, 0, 1, 1, 0, 1} ;
    int arr3[] = { 0, 1, 1, 1, 0, 0 };
    int arr4[] = { 1, 0, 1, 1, 0, 0 };
    
    printf("Array 1 is %s\n", (valid_row(arr1, ARR_SIZE + 1)) ? "valid" : "niet valid");
    printf("Array 2 is %s\n", (valid_row(arr2, ARR_SIZE)) ? "valid" : "niet valid");
    printf("Array 3 is %s\n", (valid_row(arr3, ARR_SIZE)) ? "valid" : "niet valid");
    printf("Array 4 is %s\n", (valid_row(arr4, ARR_SIZE)) ? "valid" : "niet valid");
    
	return 0;
}

bool valid_row(int a[], int size) {
    int numOnes = 0;
    int numZeros = 0;
    int count = 0;
    int last = -1;
    for (int i = 0; i < size; i++) {
        int cur = a[i];
        
        if (cur != 0 && cur != 1) {
            return false; // Not a 1 or 0
        }
        
        if (cur == 1) numOnes++;
        else numZeros++;
        
        if (cur == last) {
            if (++count > 2) return false; // More than 3 of the same number in a row
        }
        
        last = cur;
        
    }
    
    return numOnes == numZeros; // Return if ones even to zeros
}