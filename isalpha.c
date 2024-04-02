int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') 
				|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	printf("%d\n, isalpha %d\n", ft_isalpha(""), isalpha(""));
	printf("%d\n, isalpha %d\n", ft_isalpha("abcdefghijkl"), isalpha("abcdefghijkl"));
	printf("%d\n, isalpha %d\n", ft_isalpha("abc1defghijkl"), isalpha("abc1defghijkl"));
        printf("%d\n, isalpha %d\n", ft_isalpha("-_134556efghij67"), isalpha("-_134556efghij67"));
}
*/
#include <stdio.h>
#include <ctype.h>
int     main()
{
        printf("%d\n", ft_isalpha("1"));
}
