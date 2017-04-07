/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 4 opdracht 3
/* --------------------------- */

/**
 * @file 
 * @mainpage Author Information
 *  Nick Bout (<a href="https://github.com/BIGduzy">BIGduzy</a>) \n
 *  04/03/2017 \n
 *  Hogeschool Utrecht - Jaar 1 - Blok 3 - ADC
 * @section program_name Program name
 *  Week 4 exercise 3
 */

#include <stdio.h>

/**
 * @brief Compresses file
 * 
 *  Removes leading spaces, tabs and line breaks. (this will also remove empty lines)
 * 
 * @param src_filename Source file that needs to be compressed
 * @param dest_filename Destination and file name of compressed file
 */
void compress(char *src_filename, char *dest_filename) {
    FILE *fp1, *fp2;
    fp1 = fopen(src_filename, "r");
    fp2 = fopen(dest_filename, "w");
    
    if (fp1 == NULL) {
        printf("Cannot open %s for reading", src_filename);
    }
    if (fp2 == NULL) {
        printf("Cannot open %s for writing", dest_filename);
    }
    
    char s[100]; // max line length
    while (fgets(s, 100, fp1)) {// EOF
        char *ps = s; // Copy string so we can edit
        
        // strip leading whitespace
        while(*ps != '\0' && (*ps == ' ' || *ps == '\n' || *ps == '\t')) {
            ++ps;
        }
        
        for (int i = 0; i < strlen(ps); i++) {
            printf("%c", ps[i]); // Print char in console
            fputc(ps[i], fp2); // Write to file
        }
    }
    
    fclose(fp1);
    fclose(fp2);
}

/**
 * @brief Use compress function on main file
 */
int main(int argc, char **argv)
{
    compress("main.c", "main_compressed.c");
    return 0;
}
