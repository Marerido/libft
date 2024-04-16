/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:57 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/16 15:48:31 by tunglaub         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	copy_data(unsigned char *dest, const unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest <= src)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			dest[n - 1] = src[n - 1];
			n--;
		}
	}
}

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *)str1;
	src = (unsigned char *)str2;
	if (!dest)
		return (NULL);
	copy_data(dest, src, n);
	return (dest);
}
