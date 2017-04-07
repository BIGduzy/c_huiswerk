/* --------------------------- */
// Nick Bout - V1C
// 1709217
// Jorn Bunk
// Week 5 opdracht 2
/* --------------------------- */

/**
 * @file 
 * @mainpage Author Information
 *  Nick Bout (<a href="https://github.com/BIGduzy">BIGduzy</a>) \n
 *  19/03/2017 \n
 *  Hogeschool Utrecht - Jaar 1 - Blok 3 - ADC
 * @section program_name Program name
 *  Week 5 exercise 2
 */


#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#define STACKSIZE 100
typedef struct {
    char a[STACKSIZE];
    int top;
} Stack;

/**
 * @brief pushes to stack
 * @param pstack pointer to stack Struct
 * @param data char that needs to be pushed
 */
void push(Stack* pstack, char data) {
    // Stack overflow
    assert(pstack->top < STACKSIZE - 1);
    
    pstack->top++;
    pstack->a[pstack->top] = data;
}

/**
 * @brief removes and returns last char in stack
 * @param pstack pointer to stack Struct
 * @return last element of stack
 */
char pop(Stack* pstack) {
    assert(pstack->top > -1);
    char data = pstack->a[pstack->top];
    pstack->top--;
    return data;
}

/**
 * @brief Displays stack in console
 * @param s stack struct
 */
void showStack(Stack s) {
    if (s.top > -1) {
        printf("%c", s.a[s.top]);
        for (int i = s.top - 1; i > -1; i--) {
            printf("->%c", s.a[i]);
        }
        putchar('\n');
    } else {
        puts("Stack Empty");
    }
}

/**
 * @brief Validates string parenthesis
 * 
 *  • als een ingelezen karakter een openingshaakje is, wordt het op de stack geplaatst.
 *  • als een ingelezen haakje een sluitingshaakje is, wordt nagegaan wat het karakter op de
 *    top van de stack is.
 *      ◦ is de stack leeg of is het karakter niet het corresponderende openingshaakje, dan is de
 *        haakjesexpressie niet geldig.
 *      ◦ is het karakter het corresponderende openingshaakje, dan wordt dit karakter van de
 *        stack verwijderd.
 *  • Nadat de hele haakjesexpressie is verwerkt, moet de stack leeg zijn
 * 
 * @param str the sting
 * @return if valid
 */
bool validateHaakjes(char *str) {
    Stack s = {{0}, -1};
    
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        char cur = str[i];
        // If cur == open
        if (cur == '(' || cur == '[' || cur == '{' || cur == '<') {
            // Place on stack
            push(&s, cur);
            continue;
        // Else if cur == close
        } else if (cur == ')' || cur == ']' || cur == '}' || cur == '>') {
            // check top stack
            char top = pop(&s);
            // if cur != corrensponding
            switch (top) {
                case '(':
                    if (cur != ')') return false; 
                    break;
                case '[':
                    if (cur != ']') return false;
                    break;
                case '{':
                    if (cur != '}') return false;
                    break;
                case '<':
                    if (cur != '>') return false;
                    break;
            }
            continue;
        }
        
        // Invalid char
        return false;
    }
    // stack should be empty
    return s.top == -1;
}

/**
 * @brief Ask for a string and validate it 
 */
int main(int argc, char **argv)
{
    // Get input
    char str[100];
    printf("Geen die haakjes maar:\n");
    scanf("%s", &str);
    
    printf("String is %s valid", validateHaakjes(str) ? "wel" : "niet");
	return 0;
}
