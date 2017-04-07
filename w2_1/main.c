/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 2 opdracht 1
/* --------------------------- */
#include <stdio.h>

int askNumber(int min, int max) {
    int i;
    printf("Geef een getal (%d, %d): ", min, max);
    
    while(!scanf("%d", &i) || i < min || i > max) {
        printf("Scrub!!!!\n");
        while(getchar() != '\n'); //sla rest van regel over
        
        printf("Geef een getal: ");
    }
    
    return i;
}

int main(int argc, char **argv)
{
	const int ARRAY_LENGTH = 10;
    int arr[ARRAY_LENGTH];
    int ones = 0, zeros = 0;
    
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        int value = askNumber(0, 1);
        arr[i] = value;
        
        if (value == 0) zeros++;
        else ones++;
    }
    
    printf((ones == zeros) ? "Aantal enen gelijk aan het aantal nullen" : "Aantal enen niet gelijk aan het aantal nullen");
    
	return 0;
}
