#include <stdio.h>

// Function to print binary representation of an unsigned int
void printBinary(unsigned int x) {
    // Assuming 32-bit unsigned int
    int i;
    for (i = 31; i >= 0; i--) {
        // Check if the i-th bit is set (1) or not (0)
        unsigned int mask = 1 << i;
        if (x & mask)  // If the bit is 1
            printf("1");
        else           // If the bit is 0
            printf("0");
        
        // Add space every 4 bits
        if (i % 4 == 0 && i != 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main(void)
{
    unsigned int x, y;
    printf("\nEnter a number whos binary you want to flip: \n");
    scanf("%u", &x);
    

    printf("\nOriginal Number: %u\n\n", x);
    printf("The binary representation of %u\n", x);
    printBinary(x);
    printf("\nAfter Flipping Bits using ~ bitwise operator %u\n", ~x);
    printf("\nThe binary representation of flipped %u\n", ~x);
    y = ~x;
    printBinary(y);
    printf("\n");
}