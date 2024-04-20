/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:14:36 by root              #+#    #+#             */
/*   Updated: 2024/04/19 01:09:34 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	i;
	size_t	j;

	i = 0;
	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);
	j = dest_length;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] != '\0' && dest_length + i < size - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}
