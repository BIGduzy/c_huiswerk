/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 1 opdracht 4
/* --------------------------- */

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
    int num = askNumber(0, 100);
    
    printf("Tafel van: %d\n", num);
    for (int i = 0; i <= 12; i++) {
        // Add space for length of number
        int space = 2;
        if (num >= 10) space = 0;
        else if (num >= 100) space = 1;
        // Add space for length of i
        if (i >= 10) space--;
        
        // Print table row (%*d right align answers)
        printf("%d x %d = %*d\n", num, i, 5 + space, num * i);
    }    
    
	return 0;
}
