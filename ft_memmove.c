#include <stddef.h>

void *ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	unsigned char *dest;
	unsigned char *src;

	i = 0;
	dest = (unsigned char *)str1;
	src = (unsigned char *)str2;
	if(!dest && !src)
		return (NULL);
	if(dest < src)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		while(n >= 0)
		{
			dest[n] = src[n];
		 	n++;
		}
	}
	return (dest);
}
