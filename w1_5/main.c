/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 1 opdracht 5
/* --------------------------- */

char getNumber();
void setNumber(int* current, char newChar);

int main(int argc, char **argv) {
    char ch;
    int number = getNumber();
    printf("%d", number);
    
	return 0;
}

char getNumber() {
    printf("Tik een nummer en druk op ENTER: ");
    int i;
    int sign = 1;
    char ch;
    // Get the first char
    ch = getchar();
    if(ch == '-') { // check for `-` or `+` to determine negative or positive number
       sign = -1;
    // Handle the number as positive when no `-`- of `+` given
    } else if (ch != '+') {
        setNumber(&i, ch);
    }
    
    // get remaining chars
    while ((ch = getchar()) != '\n') {
        setNumber(&i, ch);
    }
    
    i *= sign; // apply sign to value
    return i;
}

void setNumber(int* current, char newChar) {
    // Skip non numbers
    if (newChar > '9' || newChar < '0') return;
    
    *current *= 10; // Multiply by 10 to "Shift left" in base 10 numbers
    *current += newChar - '0'; // convert char to int
}