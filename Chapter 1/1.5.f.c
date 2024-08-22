#include <stdio.h>

int main() {
    int c;
    int lastChar = ' ';

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
            lastChar = c;
        } else if (lastChar != ' ') {
            putchar(c);
            lastChar = c;
        }
    }

    return 0;
}
