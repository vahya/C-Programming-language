#include <stdio.h>

/*
Write a program to print the corresponding 
Celsius to Fahrenheit table.
*/

/*
print Celsius-Fahrenheit table
for celsius=0, 20,..., 300; 
floating-point version
*/

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   /*lower limit of temperature scale*/
    upper = 300; /*upper limit*/
    step = 20;   /*step size*/

    printf("%10s %10s\n", "Celsius", "Fahrenheit");
    
    for (celsius = lower; celsius <= upper; celsius += step)
    {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%10.0f %10.1f\n", celsius, fahr);
    }

    return 0;
}