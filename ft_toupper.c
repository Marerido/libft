int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}


#include <stdio.h>
int main(void)
{
	printf("%c\n", ft_toupper('h'));
}

