#include <stdio.h>
#define MAXLINE 1000
int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
    int len;
    char line[MAXLINE];
    char firstname[MAXLINE];
    char lastname[MAXLINE];
    
    printf("Enter your first name: \n");

    if ((len = my_getline(line, MAXLINE)) > 0) {
        copy(firstname, line);
        printf("Enter your last name: \n");
        /* While line is above 0
                if last character on line equals '\n'
                    copy into new line named "firstname"
                when you hit the next line with '\n' as last character
                    copy into new line named "lastname"
            printf("You are %s %s," firstname, lastname);
        */
    }
    if ((len = my_getline(line, MAXLINE)) > 0) {
        copy(lastname, line); // Copy the second line into "lastname"
    }

    printf("You are %s %s.\n", firstname, lastname);

    return 0;
}


int my_getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c=getchar())!=EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
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
