#include <stdio.h>

/*
Experiment to find out what happens when printf's argument string 
contains \c, where c is some character not listed above
*/

int main()
{
    printf("Nothing bad hap\pens, except that you get a warning");
    return 0;
}