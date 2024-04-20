/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 03:56:42 by root              #+#    #+#             */
/*   Updated: 2024/04/19 23:59:50 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	find_start(char const *str, char const *set)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_set(str[i], set) == 0)
			return (i);
		i++;
	}
	return (i);
}

int	find_end(char const *str, char const *set)
{
	int	length;
	int	i;

	length = ft_strlen(str);
	i = length - 1;
	while (i >= 0)
	{
		if (check_set(str[i], set) == 0)
			return (i + 1);
		i--;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	int	start;
	int	end;
	char	*ptr;
	char	*c;

	if (!str || !set)
		return (NULL);
	start = find_start(str, set);
	end = find_end(str, set);
	if (start >= end)
	{
		ptr = (char *)malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (!ptr)
		return (NULL);
	c = (char *)str + start;
	ft_strlcpy(ptr, c, end - start + 1);
	return (ptr);
}
