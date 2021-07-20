#include <stdio.h>
#include <ctype.h>

/*
Write a program to print a histogram of the lengths of words 
in its input. It is easy to draw the histogram with the bars 
horizontal; a vertical orientation is more challenging.
*/

#define MAX_WORDS 1000

void draw_hor_hist(int word[], int n);
void draw_ver_hist(int word[], int n, int max);

int main()
{
    int c, prev, word[MAX_WORDS] = {}, index = 0, max = 0;

    while ((c = getchar()) != EOF)
    {
        if (isalnum(c))
        {
            word[index]++;
        }
        else if (isalnum(prev))
        {
            if (word[index] > max)
                max = word[index];
            index++;
        }
        prev = c;
    }

    printf("\n\n\t\tHorizontal Histogram\t\t\n\n");
    draw_hor_hist(word, index);

    printf("\n\n\t\tVertical Histogram\t\t\n\n");
    draw_ver_hist(word, index, max);

    return 0;
}

void draw_hor_hist(int word[], int n)
{
    int i, j;
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < word[i]; ++j)
            printf("* ");
        printf("\n");
    }
}

void draw_ver_hist(int word[], int n, int max)
{
    int i, j;
    for (i = max; i > 0; --i)
    {
        for (j = 0; j < n; ++j)
        {
            if (word[j] - i >= 0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}