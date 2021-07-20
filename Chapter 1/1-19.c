#include <stdio.h>

/*
Write a function reverse(s) that reverses the character 
string s. Use it to write a program that reverses its 
input a line at a time. 
*/

#define MAXLINE 1000 /*maximum input line length*/

int get_line(char line[], int maxline);
int chomp(char s[], int n);
int reverse(char s[], int n);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = reverse(line, chomp(line, get_line(line, MAXLINE)))) >= 0)
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

/*chomp: removes a single newline from the end-of-string if present*/
int chomp(char s[], int n)
{
    if (s[n - 1] == '\n')
    {
        s[n - 1] = '\0';
        printf("chomp: %d ", n - 1);
        return n - 1;
    }

    return n;
}

/*reverse: reverses a character string in-place*/
int reverse(char s[], int n)
{
    int i, mid = n / 2;
    char temp;

    for (i = 0; i < mid; ++i)
    {
        temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }

    return n;
}