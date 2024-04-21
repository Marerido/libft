/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:08:21 by root              #+#    #+#             */
/*   Updated: 2024/04/14 13:40:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*mem;

	if (nitems && size && nitems > SIZE_MAX / size)
		return (NULL);
	mem = (void *)malloc(nitems * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (nitems * size));
	return (mem);
}
