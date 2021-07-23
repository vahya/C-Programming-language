#include <stdio.h>

/*
Write a program to count blanks, 
tabs, and newlines.
*/

int main()
{
    int blanks, tabs, nl;
    int c;

    blanks = tabs = nl = 0;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case ' ':
            blanks++;
            break;
        case '\t':
            tabs++;
            break;
        case '\n':
            nl++;
            break;
        default:
            break;
        }
    }

    printf("Blanks: %d\nTabs: %d\nNew Lines: %d\n", blanks, tabs, nl);

    return 0;
}
