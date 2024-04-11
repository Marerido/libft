#include <stdlib.h>
#include <string.h>

int numlen(int n)
{
	if (n < 10)
		return (1);
	else
		return (1 + numlen(n / 10));
}

char*	ft_itoa(int n)
{
	int	length;
	int	check_negative;
	char	*ptr;

	check_negative = 0;
	if (n < 0)
	{
		check_negative = 1;
		n = -n;
	}
	length = numlen(n);
	ptr = (char *)malloc(sizeof(char) * (length + check_negative + 1));
	if (!ptr)
		return (NULL);
	ptr[length + check_negative] = '\0';
	while (n > 0)
	{
		length--;
		ptr[length + check_negative] = 48 + n % 10;
		n = n / 10;
	}
	if (check_negative)
		ptr[0] = '-';
	return (ptr);
}

