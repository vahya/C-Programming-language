#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Write an alternative version of squeeze(s1,s2) that 
deletes each character in s1 that matches any 
character in the string s2 .
*/

#define MAX 1000 /*MAX characters in a string*/

int chomp(char s[], int n);
void squeeze(char s1[], char s2[]);

int main()
{
    char s1[MAX], s2[MAX];

    if (fgets(s1, MAX, stdin) == NULL)
        exit(-1);

    if (fgets(s2, MAX, stdin) == NULL)
        exit(-1);

    chomp(s1, strlen(s1));
    chomp(s2, strlen(s2));

    squeeze(s1, s2);

    printf("%s\n", s1);

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

/*squeeze: remove any character from s1 that is also in s2*/
void squeeze(char s1[], char s2[])
{
    unsigned i, j;
    unsigned char_hash[256] = {}; /*A hash table containing count of all characters*/

    for (i = 0; i < (unsigned)strlen(s2); ++i)
        char_hash[(unsigned)s2[i]]++;

    for (i = j = 0; i < (unsigned)strlen(s1); ++i)
        if (!char_hash[(unsigned)s1[i]])
            s1[j++] = s1[i];

    s1[j] = '\0';
}
