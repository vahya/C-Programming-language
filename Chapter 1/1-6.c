#include <stdio.h>

/*
Verify that the expression 
getchar() != EOF is 0 or 1
*/

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c != '\n')
            printf("%c is not EOF, %d\n", c, c != EOF); /* Prints 1 (true), as c is not EOF*/
    }

    printf("Found EOF, %d\n", c != EOF); /*Prints 0 (false), as c is EOF*/

    return 0;
}