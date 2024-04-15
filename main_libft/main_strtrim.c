#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *str, char const c);

int main()
{
    char const *test_str = " Hello, World! ";
    char const trim_char = ' ';

    //trimmed_str = ft_strtrim(test_str, trim_char);
    printf("Trimmed string: \"%s\"\n", ft_strtrim(test_str, trim_char));
    //free(trimmed_str); // Free the allocated memory
    return 0;
}
