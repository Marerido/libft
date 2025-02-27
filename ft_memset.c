/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:40:09 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/19 00:56:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;
	char	*str;

	i = 0;
	str = pointer;
	while (i < count)
	{
		str[i] = value;
		i++;
	}
	return (pointer);
}
