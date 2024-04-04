#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	if (!str1 && !str2)
		return (NULL);
	if (!str2 || str1 == str2)
		return (str1);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}

