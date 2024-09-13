#include <stdio.h>

int main(void)
{

    int num, den;

    printf("Enter a Numerator to divide: ");
    scanf("%d", &num);

    printf("Enter a Denominator to divide from: ");
    scanf("%d", &den);

    if (num % den != 0)
    {
        printf("They divide to %d with a remainder of %i\n", num/den, num%den);
    }
    else
    {
        printf("They divide evenly to %d\n", num/den);
    }
}