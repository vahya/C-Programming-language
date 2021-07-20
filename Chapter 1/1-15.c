#include <stdio.h>

/*
Rewrite the temperature conversion program of 
Section1.2 to use a functionfor conversion.
*/

float fahr_to_cel(float fahr);

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   /*lower limit of temperature scale*/
    upper = 300; /*upper limit*/
    step = 20;   /*step size*/

    fahr = lower;
    
    printf("%10s %10s\n", "Fahrenheit", "Celsius");
    
    while (fahr <= upper)
    {
        celsius = fahr_to_cel(fahr);
        printf("%10.0f %10.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}

float fahr_to_cel(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}
