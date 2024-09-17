#include <stdio.h>

void myprintBinary(int num);
unsigned rightRot(int x, int n);

int main(void)
{

    unsigned int x = 95;
    // 0101 1111
    int n = 3;
    // 0000 1011

    unsigned test = rightRot(x, n);
    myprintBinary(test);
    return 0;
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

unsigned rightRot(int x, int n)
{
    x = x>>n;
    return x;
}