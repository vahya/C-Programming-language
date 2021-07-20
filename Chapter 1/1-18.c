#include <stdio.h>

/*
Write a program to remove trailing blanks and tabs 
from each line of input, and to delete entirely blank 
lines.
*/

#define MAXLINE 1000 /*maximum input line length*/

int get_line(char line[], int maxline);
int remove_trail(char s[], int n);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = remove_trail(line, get_line(line, MAXLINE))) >= 0)
        printf("%d, %s\n", len, line);

    return 0;
}

/*get_line: read a line into s, return length*/
int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i - 1;
}

/*remove_trail: remove trailing blanks and tabs*/
int remove_trail(char s[], int n)
{
    int i;
    for (i = n - 1; i >= 0; --i)
    {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
        {
            s[++i] = '\0';
            break;
        }
    }

    if (i == -1)
        s[++i] = '\0';

    return i;
}