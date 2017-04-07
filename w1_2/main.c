/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 1 opdracht 2
/* --------------------------- */

char getChar() {
    printf("tik tekst in en druk daarna op Enter-toets: ");
    int tmpCh;
    int ch = getchar();
    // Clear input buffer
    while ((tmpCh = getchar()) != '\n') {}
    return ch;
}

int main(int argc, char **argv) {
    char c = getChar();
    if (c >= 'a' && c <= 'z') { // Lower case
        printf("Gegeven getal in hex: %#x", c);
    } else if (c >= 'A' && c <= 'Z') { // Upper case
        printf("Gegeven getal in deciamal: %d", c);
    } else { // Non alphabet 
        printf("Gegeven char = %c\n", c);
    }
    
	return 0;
}
