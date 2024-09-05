#include <stdio.h>
#include <stdlib.h>

#define TAB 9

int main(void) {
    int c, i;

    i = 0;

    while ((c = getchar()) != EOF)
    {
        i++;
        if (c == '\n')
        {
            i = 0; //resets column counter
        }
        if (c == '\t')
        {
            while ((i % TAB) != 0)
            {
                putchar(' ');
                i++;
            }
        } else {
            putchar(c);
        }
    }
    return 0;
}