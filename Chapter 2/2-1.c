#include <stdio.h>
#include <limits.h>
#include <float.h>

/*
Write a program to determine the ranges of char, short, int, 
and long variables, both signed and unsigned, by printing 
appropriate values from standard headers and by direct 
computation. 
Harder if you compute them: determine the ranges of the 
various floating-point types.
*/

int main()
{
    printf("char: \n");
    printf("\t\tunsigned:\t %d\t\t to\t\t %d\n", 0, UCHAR_MAX);
    printf("\t\tsigned:\t\t %d\t\t to\t\t %d\n", SCHAR_MIN, SCHAR_MAX);
    
    printf("short: \n");
    printf("\t\tunsigned:\t %d\t\t to\t\t %d\n", 0, USHRT_MAX);
    printf("\t\tsigned:\t\t %d\t\t to\t\t %d\n", SHRT_MIN, SHRT_MAX);
    
    printf("int: \n");
    printf("\t\tunsigned:\t %d\t\t to\t\t %lu\n", 0, (unsigned long)UINT_MAX);
    printf("\t\tsigned:\t\t %d\t\t to\t\t %d\n", INT_MIN, INT_MAX);
    
    printf("long: \n");
    printf("\t\tunsigned:\t %lu\t\t to\t\t %lu\n", 0L, ULONG_MAX);
    printf("\t\tsigned:\t\t %ld\t\t to\t\t %ld\n", LONG_MIN, LONG_MAX);
    
    printf("float: \n");
    printf("\t\tsigned:\t\t %f\t\t to\t\t %f\n", FLT_MIN, FLT_MAX);
    
    return 0;
}
