/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:07 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/08 16:41:03 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_to_split(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

int number_of_substrings(char const *s, char c)
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

char **ft_split(char const *s, char c)
{
	char **ptr;
	int k;
	int j;
	int	l;
	int i;

	i = 0;
	l = 0;
	ptr = malloc(sizeof(char) * (number_of_substrings(s,c) + 1));
	if (!ptr || !s)
		return (NULL);
	while (s[i])
	{
		k = count_to_split(s + i, c);
		j = 0;
		while (j < k)
		{
			ptr[l][j] = s[i + j];
			j++;
		}
		ptr[l][k] = '\0';
		i += k + 1;
		l++;
	}
	return (ptr);
}
