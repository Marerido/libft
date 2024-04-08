/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:28:30 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/08 17:42:20 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	total_length(char *s1, char *s2)
{
	return (str_length(s1) + str_length(s2) + 1);
}

char	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = str_length(dest);
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (*dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		total_l;
	char	*ptr;

	total_l = total_length(s1, s2);
	if (!s1 && !s2)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (total_l));
	if (!ptr)
		return (NULL);
	ft_strcat(ptr, s1);
	ft_strcat(ptr, s2);
	return (ptr);
}
