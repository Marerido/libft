#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*));

void my_function(unsigned int index, char *c)
{
    *c = 'A' + (index % 26);
}
int main()
{
    char my_string[] = "Hello, World!";
    printf("Vor der Änderung: %s\n", my_string);

    ft_striteri(my_string, my_function);

    printf("Nach der Änderung: %s\n", my_string);

    return 0;
}
