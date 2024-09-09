#include <stdio.h>

/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
    if (s[i] != c)
        s[j++] = s[i];
        s[j] = '\0';
}

/* We want to make a new function that checks squeeze (s1, s2) and deletes each character in s1 that matches s2 */