#include <stdio.h>
#define PIE 3.14

int main(void)
{
    float radius;
    printf("Enter a radius length: ");
    scanf("%f", &radius);

    float area = PIE*radius*radius;
    printf("The area of your circle is: %f\n", area);

    return 0;
}