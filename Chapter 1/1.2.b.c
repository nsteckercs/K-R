#include <stdio.h>

/* print Fahrenheit-Celcius table 
    for faht = 0, 20, ..., 300 */
int main(void) {
int fahr, celsius;
int lower, upper, step;

lower = 0;   /* Lower Limit of temperature scale*/
upper = 80; /* Upper Limit*/
step = 5; /* Step Size */

celsius = lower; 
printf("\n---------------------------\n");
printf("%s\t%s", "| Celsius", "Fahrenheit |\n");
printf("---------------------------\n");
while (celsius <= upper){
    fahr = celsius * (9/5) + 32;
    printf("%d\t\t%d\n", celsius, fahr);
    celsius = celsius + step;
}
printf("\n");
}