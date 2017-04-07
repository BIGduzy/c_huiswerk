/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 5 opdracht 1
/* --------------------------- */

/**
 * @file 
 * @mainpage Author Information
 *  Nick Bout (<a href="https://github.com/BIGduzy">BIGduzy</a>) \n
 *  19/03/2017 \n
 *  Hogeschool Utrecht - Jaar 1 - Blok 3 - ADC
 * @section program_name Program name
 *  Week 5 exercise 1
 */


#include <stdio.h>
#include <stdbool.h>


/**
 * @brief Checks recursively if array is sorted
 * 
 *  Small to large
 * 
 * @param a The array
 * @param size The size of the array
 * @return if sorted
 */
bool is_sorted(int a[], int size) {
    if (size <= 1) {
        return true;
    }
    
    bool tmp = is_sorted(a, size - 1);
    return tmp && a[size-2] <= a[size-1];
}

/**
 * @brief Create array for every scenario and then use is_sorted function on them
 */
int main(int argc, char **argv)
{
	int arr0[] = { 0 };
	int arr1[] = {0, 1};
	int arr2[] = {1, 0};
	int arr3[] = {2, 3, 4};
	int arr4[] = {2, 4, 3};
	int arr5[] = {1, 2, 3, 4, 4, 6, 8, 8, 9};
	int arr6[] = {1, 2, 3, 4, 4, 6, 8, 8, 7};
    int arr7[] = { 1, 7, 8, 1, 6 };
    
    printf("Arr0 %s sorted\n", is_sorted(arr0, 1) ? "is" : "is not");
    printf("Arr1 %s sorted\n", is_sorted(arr1, 2) ? "is" : "is not");
    printf("Arr2 %s sorted\n", is_sorted(arr2, 2) ? "is" : "is not");
    printf("Arr3 %s sorted\n", is_sorted(arr3, 3) ? "is" : "is not");
    printf("Arr4 %s sorted\n", is_sorted(arr4, 3) ? "is" : "is not");
    printf("Arr5 %s sorted\n", is_sorted(arr5, 9) ? "is" : "is not");
    printf("Arr6 %s sorted\n", is_sorted(arr6, 9) ? "is" : "is not");
    printf("Arr7 %s sorted\n", is_sorted(arr7, 5) ? "is" : "is not");
    
	return 0;
}
