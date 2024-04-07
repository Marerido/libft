#include <stddef.h>

char	*ft_strnstr(const char *str,const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (str[i] == '\0' && len == 0)
		return (0);
	if (to_find[i] == '\0' || to_find == str)
		return ((char *)str);

	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j] && (i + j) < len)
		{
			if (str[i + j])
				return ((char *)&str[i]);
			++j;
		}
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		++i;
	}
	return (0);
}
