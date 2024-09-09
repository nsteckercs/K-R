#include <stdio.h>
void squeeze(char s[], int c);

int main(void)
{
    char s[] = "hhhhhellhohhh h hh h h";
    int c = 'h';

    squeeze(s, c);
    printf("%s\n", s);
}
// This function copies over characters in a string that do not match 'c'. 
void squeeze(char s[], int c)
{
    int i, j;
    // iterate through string until null
    for (i = j = 0; s[i] != '\0'; i++)
        // if string does not equal c 
        if (s[i] != c)
            // copy character 'i' THEN increment through the string
            s[j++] = s[i];
    // when null is hit, end the loop.
    s[j] = '\0';
}

/* We want to make a new function that checks squeeze (s1, s2) and deletes each character in s1 that matches s2 */

/* This is the function we started with:

void squeeze(char s[], int c)
{
int i, j;
for (i = j = 0; s[i] != '\0'; i++)
if (s[i] != c)
s[j++] = s[i];
s[j] = '\0';
}

*/ 