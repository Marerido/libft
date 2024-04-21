/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:33:26 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/21 12:33:31 by tunglaub         ###   ########.fr       */
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

static char	**memory_allocation(char const *s, char c)
{
	char	**ptr;

	ptr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!ptr)
		return (NULL);
	return (ptr);
}

void	ft_free(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

static char	**find(char **ptr, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (i < count_words(s, c))
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] && s[j] != c)
			j++;
		ptr[i] = ft_substr(s, start, (j - start));
		if (!ptr[i])
		{
			ft_free(ptr);
			return (NULL);
		}
		i++;
	}
	ptr[count_words(s, c)] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = memory_allocation(s, c);
	if (!ptr)
		return (NULL);
	ptr = find(ptr, s, c);
	return (ptr);
}
