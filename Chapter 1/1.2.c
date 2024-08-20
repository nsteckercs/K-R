#include <stdio.h>

/* print Fahrenheit-Celcius table 
    for faht = 0, 20, ..., 300 */
int main(void) {
float fahr, celsius;
float lower, upper, step;

lower = 0;   /* Lower Limit of temperature scale*/
upper = 300; /* Upper Limit*/
step = 20; /* Step Size */

fahr = lower; 
printf("\n------------------------\n");
printf("%s\t%s", "| Fahrenheit", "Celsius |\n");
printf("------------------------\n");
while (fahr <= upper){
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%.0f\t\t%.2f\n", fahr, celsius);
    fahr = fahr + step;
}
printf("\n");
}
