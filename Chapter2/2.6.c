#include <stdio.h>
#define lim 1000

int main(void)
{
    int c, i;
    char s[lim];
    for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; i++)
        s[i] = c;
        printf("%s", s);

    for (i = 0; i < lim - 1; i++)
        if ((c=getchar()) != '\n')
            if (c != EOF)
                s[i] = c;
                printf("%s", s);

    for (i = 0; i < lim - 1; i++)
    {
        c = getchar();
        if (c == '\n')
            break;
        if (c == EOF)
            break;
        s[i] = c;
        printf("%s", s);
    }
}