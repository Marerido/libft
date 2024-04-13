/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:57 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/13 12:01:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void copy_data(unsigned char *dest, const unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
    if (dest < src)
    {
        while (i < n)
        {
            dest[i] = src[i];
            i++;
        }
    }
    else
    {
        while (i < n)
        {
            dest[n] = src[n];
            i++;
        }
    }
}

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
//	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;

//	i = 0;
	dest = (unsigned char *)str1;
	src = (unsigned char *)str2;
	if (!dest && !src)
		return (NULL);
/*	if (dest < src)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		while (n >= 0)
		{
			dest[n] = src[n];
			n++;
		}
	}*/ 
	copy_data(str1, str2, n);
	return (dest);
}
