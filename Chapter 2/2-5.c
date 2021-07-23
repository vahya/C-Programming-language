#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Write the function any(s1,s2), which returns the first 
location in a string s1 where any character from the 
string s2 occurs, or -1 if s1 contains no characters 
from s2. 
(The standard library function strpbrk does the same 
job but returns a pointer to the location.)
*/

#define MAX 1000 /*MAX chars in a string*/

int any(char s1[], char s2[]);
int chomp(char s[], int n);

int main()
{
    char s1[MAX], s2[MAX];
    int index; /*Match index*/

    if (fgets(s1, MAX, stdin) == NULL)
        exit(-1);

    if (fgets(s2, MAX, stdin) == NULL)
        exit(-1);

    chomp(s1, strlen(s1));
    chomp(s2, strlen(s2));

    index = any(s1, s2);

    printf("%d\n", index);

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

/*any: returns the first matching pos if match, else -1*/
int any(char s1[], char s2[])
{
    unsigned i = 0;
    unsigned char_hash[256] = {}; /*A hash table containing count of all characters*/

    for (i = 0; i < (unsigned)strlen(s2); ++i)
        char_hash[(unsigned)s2[i]]++; /*Fill the hash map*/

    for (i = 0; i < (unsigned)strlen(s1); ++i)
        if (char_hash[(unsigned)s1[i]])
            return i;

    return -1;
}
