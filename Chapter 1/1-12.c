#include <stdio.h>
#include <ctype.h>

/*
Write a program that prints its input one word per line
*/

int main()
{
    char prev;
    int c;

    while ((c = getchar()) != EOF)
    {
        if (isalpha(c))
            putchar(c);
        else if (isalpha(prev))
            putchar('\n');
        prev = c;
    }

    return 0;
}