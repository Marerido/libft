char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
#include <stdio.h>
int main(void)
{
    const char *str = "Hallo Welt!";
    char *found = ft_strchr(str, 'W');

    if (found)
    {
        printf("Zeichen gefunden: %c\n", *found);
    }
    else
    {
        printf("Zeichen nicht gefunden.\n");
    }

    return 0;
}
