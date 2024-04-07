#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len);
	
int main()
{
    char const *s = "Hallo Welt";
    char *substr = ft_substr(s, 0, 5);
    if (substr)
    {
        printf("%s\n", substr); // Gibt "Hallo" aus
        free(substr); // Vergessen Sie nicht, den reservierten Speicher freizugeben
    }
    return 0;
}
