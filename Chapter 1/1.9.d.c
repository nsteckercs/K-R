#include <stdio.h>
#define MAX 1000

int getLine(char s[], int lim);
void reverse(char line[], int len);

int main(void) {
    int len;
    char line[MAX];
    while ((len = getLine(line, MAX)) > 0)
    {
        reverse(line, len);
        printf("%s\n", line);
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

void reverse(char line[], int len){
    int i, j;
    char temp;
    for(i = 0, j = len-1 ; i<j; ++i){
        temp = line[i];
        line[i] = line[j];
        line[j] = temp; 
        j--;
    }

}