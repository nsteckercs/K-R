#include <stdio.h>
#define MINLINE 80
#define MAXLINE 1000

int my_getline(char line[], int minline);
void copy(char to[], char from[]);

int main(void)
{
    int len;
    int max;
    int min;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;
    min = MINLINE;

    while ((len = my_getline(line, MAXLINE)) > 0) { // Continue loop only if a valid line is read
        if (len > MINLINE) {
            if (len > max) {
                max = len;
                copy(longest, line);
            }
        } else {
            printf("Input more than 80 characters per line.\n");
        }
    }

    if (max > 0) {
        printf("\nYour longest sentence greater than 80 characters is %d characters long.\n Your sentence is: %s\n", max, longest);
    }

    return 0;
}



int my_getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c=getchar())!=EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}