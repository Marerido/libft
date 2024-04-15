/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:31:00 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/14 00:12:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}*/

char	*ft_strdup(char *src)
{
	char	*place;
	int		i;

	i = 0;
	place = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!place)
		return (NULL);
	while (src[i] != '\0')
	{
		place[i] = src[i];
		i++;
	}
	place[i] = '\0';
	return (place);
}
