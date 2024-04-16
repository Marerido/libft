/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:03:14 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/16 17:18:13 by tunglaub         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int	count_to_split(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

int	number_of_substrings(char const *s, char c)
{
	int	number_of_strings;
	int	i;

	i = 0;
	number_of_strings = 0;
	while (s[i])
	{
		if (s[i] == c)
			number_of_strings++;
		i++;
	}
	return (number_of_strings + 1);
}

char	**memory_allocation(char const *s, char c)
{
	char	**ptr;

	ptr = malloc(sizeof(char *) * (number_of_substrings(s, c) + 1));
	if (!ptr || !s)
		return (NULL);
	return (ptr);
}

void	copy(char *dest, char const *source, int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		dest[i] = source[i];
		i++;
	}
	dest[c] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		k;
	int		l;
	int		i;

	i = 0;
	l = 0;
	ptr = memory_allocation(s, c);
	while (s[i])
	{
		k = count_to_split(s + i, c);
		ptr[l] = malloc(sizeof(char) * (k + 1));
		if (!ptr[l])
			return (NULL);
		copy(ptr[l], s + i, k);
		i += k + 1;
		l++;
	}
	ptr[l] = NULL;
	return (ptr);
}
