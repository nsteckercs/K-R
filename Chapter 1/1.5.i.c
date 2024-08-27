#include <stdio.h>

int main(void) {

    int c, inspace;
    inspace = 0;

    while ((c = getchar()) != EOF) 
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            putchar('\n');
            inspace = 1;
        }
        else
        {
            putchar(c);
            inspace = 0;
        }
    }
}