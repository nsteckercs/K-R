#include <stdio.h>

int main(void){

    float seconds, minutes, hours, remainder;

    printf("Enter the amount of seconds you want to convert: ");
    scanf("%f", &seconds);

    // 3600 seconds in an hour
    hours = (int)(seconds / 3600);
    
    minutes = (int)((seconds - (hours * 3600))/60);

    remainder =  (seconds - (hours * 3600) - (minutes * 60));

    printf("%.0f seconds is equal to %.0f hours, %.0f minutes, and %.0f seconds!\n", seconds, hours, minutes, remainder);
}
