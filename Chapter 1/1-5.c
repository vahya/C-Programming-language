#include <stdio.h>

/*
Modify the temperature conversion 
program to print the table in 
reverse order, that is, from 300
degrees to 0
*/

/*
print Fahrenheit-Celsius table
for fahr=0, 20,..., 300; 
floating-point version
*/

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   /*lower limit of temperature scale*/
    upper = 300; /*upper limit*/
    step = 20;   /*step size*/

    printf("%10s %10s\n", "Fahrenheit", "Celsius");
    
    for (fahr = upper; fahr >= lower; fahr -= step)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%10.0f %10.1f\n", fahr, celsius);
    }

    return 0;
}
