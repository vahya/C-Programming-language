#include <stdio.h>

/*
Write a loop equivalent to the for loop above without using && or ||.
*/

#define MAXLINE 1000 /*maximum input line length*/

int get_line(char line[], int maxline);

int main()
{
    char line[MAXLINE];

    while (get_line(line, MAXLINE))
    {
        printf("%s", line);
    }

    return 0;
}

/*getline: read a line into s, return length*/
int get_line(char s[], int lim)
{
    int c, i = 0;

    while ((c = getchar()) != EOF)
    {
        if (i >= lim - 1)
            break;

        if (c == '\n')
            break;

        s[i++] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}
