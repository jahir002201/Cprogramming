// Knuth Morris Pratt algorithm (KMP String Matching)

// Output
// Enter your target string:cprograms
// Enter your pattern string:grams
// grams located at the index 5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *computeTemporaryArray(char *pattern)
{
    int *lps = (int *)malloc(sizeof(int) * strlen(pattern));
    int index = 0;
    for (int i = 1; i < strlen(pattern);)
    {
        if (pattern[i] == pattern[index])
        {
            lps[i] = index + 1;
            index++;
            i++;
        }
        else
        {
            if (index != 0)
            {
                index = lps[index - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

void kmp(char *text, char *pattern)
{
    int *lps = computeTemporaryArray(pattern);
    int i = 0;
    int j = 0;
    while (i < strlen(text) && j < strlen(pattern))
    {
        if (text[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
    }
    if (j == strlen(pattern))
    {
        printf("Pattern found at index %d\n", i - j);
    }
    else
    {
        printf("Pattern not found\n");
    }
}

int main()
{
    char *text = (char *)malloc(sizeof(char) * 100);
    char *pattern = (char *)malloc(sizeof(char) * 100);
    printf("Enter your target string:");
    scanf("%s", text);
    printf("Enter your pattern string:");
    scanf("%s", pattern);
    kmp(text, pattern);
    return 0;
}