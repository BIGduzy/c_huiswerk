/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 4 opdracht 4
/* --------------------------- */

/**
 * @file 
 * @mainpage Author Information
 *  Nick Bout (<a href="https://github.com/BIGduzy">BIGduzy</a>) \n
 *  04/03/2017 \n
 *  Hogeschool Utrecht - Jaar 1 - Blok 3 - ADC
 * @section program_name Program name
 *  Week 4 exercise 4
 */


#include <stdio.h>
#include <stdbool.h>


/**
 * @brief gets intergets from file
 * 
 *  ignores every other character (max intergers = 100)
 * 
 * @param filename name of file
 * @param a array to put intergers in
 * @param size size of array (max 100)
 * @return returns number of intergers found
 */

int getIntergers(char* filename, int *a, int size) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    if (fp == NULL) {
        printf("Cannot open %s for reading", filename);
        return -1;
    }
    
    int number = 0;
    int count = 0;
    char ch;
    bool negative = false;
    
    while(ch != EOF) {
        ch = fgetc(fp);
        
        if (isdigit(ch)) {
            number = number * 10 + (ch - 48); // char - 48 to get number
        } else if (ch == '-') {
            negative = true;
        } else {
            if (negative) {
                number *= -1;
                negative = false;
            }
            if (number != 0) {
                // Add to array
                a[count++] = number;
                number = 0; // Clear number
            }
        }
    }     
    
    return count;
}

/**
 * @brief Creates interger array, usses getInterger function to fill it and then prints it
 */
int main(int argc, char **argv)
{
    int a[100];
    int n = getIntergers("w4_4.txt", a, 100);
    
    if (n > 0) {
        puts("gevonden getallen: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        putchar('\n');
    }
    
    return 0;
}
