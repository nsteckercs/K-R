#include <stdio.h>

int bitcount(unsigned int x);

int main(void) {
    unsigned int x = 190;
    printf("Number of 1's in %u is %d\n", x, bitcount(x));
}

int bitcount(unsigned int x)
{
    int b;
    for (b = 0; x != 0; x &= (x-1)) {
            b++;
    }
    return b;
}
