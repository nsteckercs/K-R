#include <stdio.h>

/* print Fahrenheit-Celcius table 
    for faht = 0, 20, ..., 300 */
int convert(int s);

int main(void) 
{
    #define LOWER -25
    #define UPPER 35
    #define STEP 5

    int fahr, celsius, i;
    for (i = LOWER; i < UPPER; i += STEP)
    {
        printf("%d %d\n", i, convert(i)); 
    }
    return 0;
}

int convert(int s)
{
    int f = (s * 9 / 5) + 32;
    return f;
}