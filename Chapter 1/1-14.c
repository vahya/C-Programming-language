#include <stdio.h>

/*
Write a program to print a histogram of the 
frequencies of different characters in its 
input.
*/

#define MAX_CHARS 255

int main()
{
    int c, characters[MAX_CHARS] = {}, i, j;

    while ((c = getchar()) != EOF)
    {
        characters[c]++;
    }

    for (i = 0; i < MAX_CHARS; ++i)
    {
        printf("%c: ", (char)i);
        for (j = 0; j < characters[i]; ++j)
            printf("* ");
        printf("\n");
    }

    return 0;
}