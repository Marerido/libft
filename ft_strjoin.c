/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:28:30 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/16 18:18:09 by tunglaub         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int	total_length(const char *s1, const char *s2)
{
	return (ft_strlen(s1) + ft_strlen(s2) + 1);
}

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		total_l;
	char	*ptr;

	total_l = total_length(s1, s2);
	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (total_l));
	if (!ptr)
		return (NULL);
	ft_strcat(ptr, s1);
	ft_strcat(ptr, s2);
	return (ptr);
}
