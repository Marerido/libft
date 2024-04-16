/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:31 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/16 15:58:06 by tunglaub         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
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

