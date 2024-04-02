int ft_isdigit(char *str)
{
	int	i;
	
	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_isdigit(""));
	printf("%d\n", ft_isdigit("01948987493"));
	printf("%d\n", ft_isdigit("0484882j8995489"));
	printf("%d\n", ft_isdigit("-_jsdsdc67sdlkc,"));
}
