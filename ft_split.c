/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:34:11 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/20 12:34:13 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**memory_allocation(char const *s, char c)
{
	char	**ptr;

	ptr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!ptr || !s)
		return (NULL);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		start;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	ptr = memory_allocation(s, c);
	if (!ptr)
		return (NULL);
	while (i < count_words(s, c))
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] && s[j] != c)
			j++;
		ptr[i] = ft_substr(s, start, (j - start));
		i++;
	}
	ptr[count_words(s, c)] = NULL;
	return (ptr);
}
