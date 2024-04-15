#include <stdio.h>
#include <stddef.h>

char *ft_strnstr(const char *str, const char *to_find, size_t len);

int main()
{
    const char *str = "Hello, world!";
    const char *to_find = "world";
    size_t len = 13; // Die maximale Anzahl von Zeichen, die durchsucht werden soll

    char *found = ft_strnstr(str, to_find, len);

    if (found)
    {
        printf("Substring gefunden: %s\n", found);
    }
    else
    {
        printf("Substring nicht gefunden.\n");
    }

    return 0;
}
