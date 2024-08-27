#include <stdio.h>

int main(void) {

    #define IN 1
    #define OUT 0

    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state ==  IN)
            state = IN; 
            ++nw;
    }
    printf("%d %d %d\n", nl, nw, nc);
}