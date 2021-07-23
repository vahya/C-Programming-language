#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Write an alternative version of squeeze(s1,s2) that 
deletes each character in s1 that matches any 
character in the string s2 .
*/

#define MAX 1000 /*MAX characters in a string*/

void squeeze(char s1[], char s2[]);

int main()
{
    char s1[MAX], s2[MAX];

    if (fgets(s1, MAX, stdin) == NULL)
        exit(-1);

    if (fgets(s2, MAX, stdin) == NULL)
        exit(-1);

    squeeze(s1, s2);

    printf("%s\n", s1);

    return 0;
}

/*squeeze: remove any character from s1 that is also in s2*/
void squeeze(char s1[], char s2[])
{
    unsigned int i, j;
    unsigned int char_hash[256] = {}; /*A hash table containing count of all characters*/

    for (i = 0; i < (unsigned int)strlen(s2); ++i)
        char_hash[(unsigned int)s2[i]]++;

    for (i = j = 0; i < (unsigned int)strlen(s1); ++i)
        if (!char_hash[(unsigned int)s1[i]])
            s1[j++] = s1[i];

    s1[j] = '\0';
}