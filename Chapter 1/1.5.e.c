#include <stdio.h>

int main(void) {
    long c, nl, nt, nb;

    nl = 0;
    nt = 0;
    nb = 0;

    while((c = getchar()) != EOF) 
        if (c == '\n')
            ++nl;
        else if(c == '\t')
            ++nt;
        else if(c == ' ')
            ++nb;

    printf("You have:\n%ld lines,\n%ld tabs,\n%ld blanks.\n", nl, nt, nb);
    }