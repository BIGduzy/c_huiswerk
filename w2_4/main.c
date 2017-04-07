/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 2 opdracht 4
/* --------------------------- */
#include <stdio.h>
#include <string.h>

/**
 * @file main.c
 * @author Nick Bout
 * @date 16/02/2017
 * @brief Exercise 4 for week 2.
 *
 * Here typically goes a more extensive explanation of what the header
 * defines. Doxygens tags are words preceeded by either a backslash @\
 * or by an at symbol @@.
 * @see http://www.stack.nl/~dimitri/doxygen/docblocks.html
 * @see http://www.stack.nl/~dimitri/doxygen/commands.html
 */
 
/**
 * @brief Struct named voorwerp
 *
 * Voorwerp struct is used to do stuff
 */
typedef struct voorwerp
{
 int nummer; /**< voorwerp ID */
 char naam[20]; /**< Name of the voorwerp */
 double gewicht, lengte; /**< Weight and size of the voorwerp */ /**< Weight and size of the voorwerp */
} VOORWERP;


int main(int argc, char **argv)
{
    VOORWERP v;
    
    printf("Nummer: ");
    scanf("%d", &v.nummer);
    
    // Clear buffer
    char ch;
    while((ch = getchar()) != '\n');
    
    printf("Naam: ");
    fgets(v.naam, 20, stdin);
    int len = strlen(v.naam);
    if (v.naam[len-1] == '\n') {
        v.naam[len-1] = '\0'; // Remove newline
    }
    
    printf("Gewicht: ");
    scanf("%lf", &v.gewicht);
    
    printf("Lengte: ");
    scanf("%lf", &v.lengte);
    
	printf("%s heeft nummer %i, weegt %f kg, en is %f cm\n", v.naam, v.nummer, v.gewicht, v.lengte);
	return 0;
}
