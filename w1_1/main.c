/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 1 opdracht 1
/* --------------------------- */

int askNumber() {
    int i;
    printf("Geef een getal: ");
    
    while(!scanf("%d", &i)) {
        printf("Scrub!!!!\n");
        while(getchar() != '\n'); // Clear input buffer
        
        printf("Geef een getal2: ");
    }
    
    return i;
}

int main(int argc, char **argv) {
    int x = askNumber();
    int y = askNumber();
    
    printf("Het nummer is: %d\n", x + y);
    
	return 0;
}
