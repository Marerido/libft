#include <stddef.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	int i;
	char *c;

	i = 0;
	c = (char *)pointer;
	while (i < count)
	{
		c[i] = (char)value;
		i++;
	}
	pointer = (void *)c;
	return (pointer);
}

#include <stdio.h>
int main(void)
{
	char str[10];
        printf("%s\n", ft_memset(str, 'a', 7));
}
