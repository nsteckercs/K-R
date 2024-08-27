/**
 * Write a program to print a histogram of the frequencies of different characters in its input.
*/

#include <stdio.h>

#define ASCII 128 // number of ASCII characters

int main(void) {
    int c, i, j, max_freq = 0;
    int freq[ASCII]; // frequency of the characters

    for(i = 0; i < ASCII; freq[i++] = 0); // initialize the array

    /**
     * Count the frequency of the characters in the input
    */
    while((c = getchar()) != EOF) {
        if(c != ' ' && c != '\n' && c != '\t')
            freq[c]++;
    }

    /**
     * Determine the maximum frequency of the characters
    */
    for(i = 0; i < ASCII; i++) {
        if(freq[i] > max_freq)
            max_freq = freq[i];
    }

    printf("Histogram of the frequencies of different characters in its input:\n");

    /**
     * Print the y-axis of the histogram with the characters
    */
    for(i = 0; i < ASCII; i++) {
        if(freq[i] > 0) {
            printf("%c | ", i);
            for(j = 0; j < freq[i]; j++)
                printf("\u25A0  ");
            printf("\n");
        }
    }

    /**
     * Print the x-axis of the histogram with the frequency of the characters
    */
    printf("   +");
    for(i = 1; i <= max_freq; i++) // print the horizontal line
        printf("———");

    printf("\nW/F "); // print the label of the x-axis (Frequency/Length)

    for(i = 1; i <= max_freq; i++) // print the frequency of the characters
        printf("%02d ", i);
    
    return 0;
}