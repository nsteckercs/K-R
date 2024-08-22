#include <stdio.h>

int main(void) {
    int c;
    printf("%d", EOF);
    printf("%s", " is the value of EOF.\n");
    printf("%d", c = getchar() != EOF);
    printf("%s", " is the value of c = getchar() != EOF.\n");

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}