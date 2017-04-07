/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 3 opdracht 5
/* --------------------------- */

/**
 * @file 
 * @mainpage Author Information
 *  Nick Bout (<a href="https://github.com/BIGduzy">BIGduzy</a>) \n
 *  24/02/2017 \n
 *  Hogeschool Utrecht - Jaar 1 - Blok 3 - ADC
 * @section program_name Program name
 *  Week 3 exercise 5
 */

#include <stdio.h>

/**
 * @brief Prints byte in binary
 * @param ch The byte
 */
void bitprint(char ch);

/**
 * @brief gets bit value at position n in byte
 * 
 *  Gets the value of the bit using bitwise and operator using (1 << n) as the mask
 * 
 * @param ch The byte
 * @param n The position of the bit
 * @return int The bit at position n
 */
int get_bit(char ch, int n);

/**
 * @brief Shifts byte n positions
 * 
 *  Uses bitshift operator to shift byte n times\n
 *  If n is negative it shifts right else it shifts left.
 * 
 * @param ch The byte
 * @param n The number of times te byte needs to be shifted
 */
char verschuif_cyclisch(char ch, int n);

/**
 * @brief Main
 * Creates byte, gets the bit at position 3, shifts the byte and prints te results
 */

int main(int argc, char **argv)
{
    char byte = 0x08;
    bitprint(byte);
    
    int bit = get_bit(byte, 3);
    printf("%d\n", bit);
    
    byte = verschuif_cyclisch(byte, 1);
    bitprint(byte);
    byte = verschuif_cyclisch(byte, -2);
    bitprint(byte);
    
	return 0;
}

void bitprint(char ch) {
    for (int i = 0; i < 8; i++) {
        if (ch & 0x80) { // check meest linkse bit
            putchar('1');
        } else {
            putchar('0');
        }
        ch <<=1; // schuif 1 positie naar links
    }
    putchar('\n');
}


int get_bit(char ch, int n) {
    return (ch & (1 << n)) ? 1 : 0;
}

char verschuif_cyclisch(char ch, int n) {
    if (n > 0) ch <<= n;
    else ch >>= n * -1;
    
    return ch;
}