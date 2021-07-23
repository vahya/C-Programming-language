#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. The 
allowable digits are 0 through 9, a through f, and A through F.
*/

#define MAX 1000 /*MAX Digits in hexadecimal number*/

int reverse(char s[], int n);
int chomp(char s[], int n);
long long htoi(char s[], int n);

int main()
{
    char input[MAX]; /*Hexadecimal input String*/
    char hex[MAX];   /*Copy of Input*/
    int length;      /*length of input string*/

    if (fgets(input, MAX, stdin) == NULL) /*Get a line of input from stdin*/
    {
        printf("Some error occured!\n");
        return -1;
    }

    length = chomp(input, strlen(input));

    strcpy(hex, input);

    printf("%s_16 = %lld_10\n", input, htoi(hex, length));

    return 0;
}

/*chomp: removes a single newline from the end-of-string if present*/
int chomp(char s[], int n)
{
    if (s[n - 1] == '\n')
    {
        s[n - 1] = '\0';
        return n - 1;
    }

    return n;
}

/*reverse: reverses a character string in-place*/
int reverse(char s[], int n)
{
    int i, mid = n / 2;
    char temp;

    for (i = 0; i < mid; ++i)
    {
        temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }

    return n;
}

/*htoi: converts a hexadecimal string to its integer value*/
long long htoi(char s[], int n)
{
    int i, digit;
    long long value = 0, power = 1;

    reverse(s, n);

    for (i = 0; i < n; ++i)
    {
        if (i != 0)
            power *= 16;

        if (s[i] >= '0' && s[i] <= '9')
            digit = s[i] - 0;
        else if (s[i] >= 'a' && s[i] <= 'f')
            digit = s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'F')
            digit = s[i] - 'A' + 10;
        else if (s[i] == 'x' || s[i] == 'X')
            break;
        else
        {
            fprintf(stderr, "Undefined character %c in string", s[i]);
            exit(-1);
        }

        value += digit * power;
    }

    return value;
}
