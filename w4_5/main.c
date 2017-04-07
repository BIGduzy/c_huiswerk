/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 4 opdracht 5
/* --------------------------- */

/**
 * @file 
 * @mainpage Author Information
 *  Nick Bout (<a href="https://github.com/BIGduzy">BIGduzy</a>) \n
 *  04/03/2017 \n
 *  Hogeschool Utrecht - Jaar 1 - Blok 3 - ADC
 * @section program_name Program name
 *  Week 4 exercise 5
 */

#include <stdio.h>

int getWordSize(char* filename) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    if (fp == NULL) {
        printf("Cannot open %s for reading", filename);
        return -1;
    }
    
    int wordSize = 1;
    int count = 0;
    char ch;

    while (ch != EOF) {
        ch = fgetc(fp);
        if (ch == ' ' || ch == ',' || ch == '.') { // End of word
            if (wordSize < count) wordSize = count;
            count = 0;
        }
        count++;
    }
    
    return wordSize;
}

int getWords(char* filename, int wordSize, char a[][wordSize]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    if (fp == NULL) {
        printf("Cannot open %s for reading", filename);
        return -1;
    }
    
    int numWords = 0;
    char s[100] = "";
    char ch;

    while (ch != EOF) {
        ch = fgetc(fp);
        if (isalpha(ch) && ch != ' ') {
            s[strlen(s)] = ch;
        } else if (strlen(s) > 0) {
            strcpy(a[numWords++], s);
            
            // Clear string
            memset(s, 0, sizeof(s));
        }
    }
    
    return numWords;
}

int main(void) {
    char filename[] = "text.txt";
    int wordSize;
    // lees de hele file voor het bepalen van de lengte van het langste woord
    wordSize = getWordSize(filename);
    
    char a[1000][wordSize];
    int n = getWords(filename, wordSize, a);
    if (n > 0){
        puts("gevonden woorden:");
        for (int i = 0;i < n; i++){
            printf("%3d %s\n", i, a[i]);
        }
    }

    return 0;
}