#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *str, char const c)
{
    char *ptr;
    int i;
    int length;
    int start;
    int end;

    length = ft_strlen(str);
    start = 0;
    end = length - 1;
    while (start < length && str[start] == c)
        start++;
    while (end >= 0 && str[end] == c)
        end--;
    ptr = (char *)malloc(sizeof(char) * (end - start + 2));
    if (!ptr)
        return (NULL);
    i = 0;
    while (start <= end)
    {
        ptr[i] = str[start];
        i++;
        start++;
    }
    ptr[i] = '\0';
    return (ptr);
}
