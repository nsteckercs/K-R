#include <stdio.h>

/* Write a function setbits(x,p,n,y) that returns x with the n bits that begin at position p set
to the rightmost n bits of y, leaving the other bits unchanged. */

unsigned setBits(unsigned x, int p, int n);
void myprintBinary(int num);

int main(void)
{
    unsigned x = 95;
    // 0101 1111
    int p = 6;
    int n = 3;
    unsigned test = setBits(x, 6, 3);
    myprintBinary(test);
    return 0;
}

unsigned setBits(unsigned x, int p, int n)
{
    // ~0 << n makes all of the bits 1 except for the n bits. 1111 1000
    // ~(~0 << n) flips again 0000 0111
    // << (p-n) shifts to the bits that we want to change 0011 1000
    unsigned int flipBits = ~((~0 << n)) << (p - n); 

    // XOR to then flip the bits that are targeted in x.
    // 0101 1111
    // 0011 1000
    // 0110 0111
    // The function now returns x with n bits inverted at the p postion (x, n, p)
    x = x ^ flipBits;
    return x;
}

void myprintBinary(int num)
{
    int size = sizeof(num) * 2;
    for (int i = size - 1; i >= 0; i--)
    {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}