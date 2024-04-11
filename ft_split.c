#include <stdio.h>
#include <stdlib.h>

int count_to_split(char const *s, char c)
{
    int i;

    i = 0;
    while (s[i] != c && s[i])
        i++;
    return (i);
}

int number_of_substrings(char const *s, char c)
{
    int number_of_strings;
    int i;

    i = 0;
    number_of_strings = 0;
    while (s[i])
    {
        if (s[i] == c)
            number_of_strings++;
        i++;
    }
    return (number_of_strings + 1);
}

char **ft_split(char const *s, char c)
{
    char **ptr;
    int k;
    int j;
    int l;
    int i;

    i = 0;
    l = 0;
    ptr = malloc(sizeof(char*) * (number_of_substrings(s,c) + 1));
    if (!ptr || !s)
        return (NULL);

    while (s[i])
    {
        k = count_to_split(s + i, c);
        ptr[l] = malloc(sizeof(char) * (k + 1));
        if (!ptr[l])
        {
            for (int m = 0; m < l; m++)
                free(ptr[m]);
            free(ptr);
            return NULL;
        }
        j = 0;
        while (j < k)
        {
            ptr[l][j] = s[i + j];
            j++;
        }
        ptr[l][k] = '\0';
        i += k + 1;
        l++;
    }
    ptr[l] = NULL;
    return (ptr);
}

