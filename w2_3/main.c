/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 2 opdracht 3
/* --------------------------- */
#include <stdio.h>

int main(int argc, char **argv)
{
    const int STRING_SIZE = 80;
    char string1[STRING_SIZE];
    printf("Tik string 1 in: ");
    fgets(string1, 100, stdin);
    
    // Invert string with indices
    char string2[strlen(string1)+1];
    for (int i = 0; i < strlen(string1) - 1; i++) { // Exclude '\0' since we need that as the last char
        string2[i] = string1[strlen(string1) - 2 - i]; // - 2 because we count from 0 and exluce '\0'
    }
    printf("%s\n", string2);
    
    // Invert using pointers
    char* p1 = string1;
    char* p2 = string2;
    while((*p1++ = *p2++) != '\0');
    
    printf("%s\n", string1);
    
	return 0;
}
