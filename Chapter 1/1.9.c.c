#include <stdio.h>
#define MAX 1000

int getLine(char s[], int lim);
void removeBlanks(char s[], int len);

int main(void) {
    int len;
    char line[MAX];
    while ((len = getLine(line, MAX)) > 0)
    {
        removeBlanks(line, len);
        printf("%s", line);

    }
    return 0;
}

int getLine(char s[], int lim)
{
    int i, c;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c; 
    
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

void removeBlanks(char s[], int len)
{
    for (int i = 0; i <= len; i++)
    {
        if (s[i] == ' ' || s[i] == '\t')
            s[i] = '\b';
        else
            i = len + 1;
    }
}