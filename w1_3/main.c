/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 1 opdracht 3
/* --------------------------- */
#include <stdbool.h>

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

int main(int argc, char **argv) {
    int num = askNumber(0, 81);
    
    // Print with for loop
    // Build-up
    for (int i = 0; i < num; i++) {
        // Output * times i
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        // New line
        printf("\n");
    }
    // Build-down
    for (int i = num; i > 0; i--) {
        // Output * times i
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        // New line
        printf("\n");
    }
    
    // Add some space
    printf("\n\n\n");
    
    // Print with while loop
    int i = 0;
    bool up = true;
    while (i >= 0) {
        // Draw * times i
        int j = 0;
        while (++j <= i) {
            printf("*");
        }
        // New line
        printf("\n");
        
        i = (up) ? i + 1 : i - 1; // Add to i if going up else lower by one
        if (i >= num) up = false; // pyramid top reached, let's go down again
    }
	return 0;
}
