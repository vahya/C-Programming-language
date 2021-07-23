#include <stdio.h>

/*
Write a program to copy its input to its 
output, replacing each string of one or 
more blanks by a single blank.
*/

int main()
{
    char prev;
    int c;

    while((c = getchar()) != EOF)
    {
        if (prev != ' ' || c != ' ')
        {
            putchar(c);
        }
        prev = c;
    }

    return 0;
}
