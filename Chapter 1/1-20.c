#include <stdio.h>

/*
Write a program detab that replaces tabs in the input 
with the proper number of blanks to space to the next 
tab stop. Assume a fixed set of tab stops, say every 
n columns.
Should n be a variable or a symbolic parameter?
*/

#define N 8 /*tab stops after every N columns*/

int main()
{
    int c, col = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            col = 0;
            putchar(c);
            continue;
        }

        if (c == '\t')
        {
            do
            {
                putchar(' ');
                col++;
            } while (col % N != 0);
        }
        else
        {
            putchar(c);
            col++;
        }
    }

    putchar('\n');

    return 0;
}
