/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 02:27:16 by root              #+#    #+#             */
/*   Updated: 2024/04/20 02:33:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	to_find_len;

	if (to_find[0] == '\0')
		return ((char *)str);
	to_find_len = ft_strlen(to_find);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len && to_find[j] != '\0')
			++j;
		if (j == to_find_len)
			return ((char *)&str[i]);
		++i;
	}
	return (NULL);
}
