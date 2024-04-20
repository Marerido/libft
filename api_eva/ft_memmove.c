/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:52:24 by root              #+#    #+#             */
/*   Updated: 2024/04/20 01:03:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	copy_data(void *dest, const void *src, size_t n)
{
	char		*destination;
	const char	*source;
	size_t		i;

	i = 0;
	destination = dest;
	source = src;
	if (destination < source)
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			destination[n - 1] = source[n - 1];
			n--;
		}
	}
}

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	if (!str1 && !str2)
		return (NULL);
	copy_data(str1, str2, n);
	return (str1);
}
