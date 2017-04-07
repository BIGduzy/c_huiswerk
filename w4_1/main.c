/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 4 opdracht 1
/* --------------------------- */

/**
 * @file 
 * @mainpage Author Information
 *  Nick Bout (<a href="https://github.com/BIGduzy">BIGduzy</a>) \n
 *  04/03/2017 \n
 *  Hogeschool Utrecht - Jaar 1 - Blok 3 - ADC
 * @section program_name Program name
 *  Week 4 exercise 1
 */

#include<stdio.h>

/**
 * @brief Reads two files and compares them
 * 
 *  Outputs 1 if the files are not the same, outputs 0 if they are.
 * 
 * @param fname1 The name of the first file
 * @param fname2 The name of the second file
 * @return if the files are the same
 */

int findDiff(char fname1[], char fname2[]) {
    FILE *fp1, *fp2;
    int ch1, ch2, index = 0;
    fp1 = fopen(fname1, "r");
    fp2 = fopen(fname2, "r");
 
    if (fp1 == NULL) {
        fprintf(stderr, "Cannot open %s for reading ", fname1);
        exit(1);
    } else if (fp2 == NULL) {
        fprintf(stderr, "Cannot open %s for reading ", fname2);
        exit(1);
    }
   
    ch1 = getc(fp1);
    ch2 = getc(fp2);

    while ((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2)) {
        ch1 = getc(fp1);
        ch2 = getc(fp2);
        ++index;
    }

    if (ch1 == ch2) {
        printf("Files are identical \n");
        return 0;
    } else if (ch1 != ch2) {
        printf("Files are Not identical \n");
        fprintf(stderr, "Error at %d", index);
        return 1;
    }

    fclose(fp1);
    fclose(fp2);
   
   return 1;
}
 

/**
 * @brief Asks for 2 files names and uses findDiff function to compare them. 
 */

int main() {
    char fname1[40], fname2[40];

    printf("Enter name of first file: ");
    gets(fname1);

    printf("Enter name of second file: ");
    gets(fname2);

    int index = findDiff(fname1, fname2);\
   return (0);
}