/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 2 opdracht 2
/* --------------------------- */
#include <stdio.h>

int main(int argc, char **argv)
{
    const int STRING_SIZE = 80;
    char string1[STRING_SIZE], string2[STRING_SIZE];
    printf("Tik string 1 in: ");
    fgets(string1, 100, stdin);
    printf("Tik string 2 in: ");
    fgets(string2, 100, stdin);
    
    for (int i = 0; i < STRING_SIZE; i++) {
        if (string1[i] != string2[i]) {
            printf("Het verschil in tekst begint bij index: %d", i);
            break; // Exit loop
        }
    }
    
	return 0;
}
