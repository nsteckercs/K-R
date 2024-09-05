#include <stdio.h>
#define MAX 1000


int main(void)
{
    int i = 5;
    float f = 5.0;
    char c[MAX] = "Five";

    printf("%d is an integer!\n", i);
    printf("%.2f is a float!\n", f);
    printf("%s is a char!\n", c);
}