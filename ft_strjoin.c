/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:34:31 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/20 12:34:32 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, (ft_strlen(s1) + ft_strlen(s2) + 1));
	ft_strlcpy(ptr + ft_strlen(s1), s2, (ft_strlen(s2) + 1));
	return (ptr);
}
