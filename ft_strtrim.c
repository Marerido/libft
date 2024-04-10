/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:04:14 by root              #+#    #+#             */
/*   Updated: 2024/04/09 11:32:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	check(const char *str, const char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != c)
			return (0);
		i++;
	}
	return (1);
}

char *ft_strtrim (char const *str, char const c)
{
	char	*ptr;
	int	i;
	int	length;
	int	start;

	length = strlen(str) - 1;
	
	start = 0;
	while (check(&str[start], c) == 0 && start < length)
		start++;
	while (check(&str[length], c) == 0 && length >= start)
	      length--;	
	ptr = (char *)malloc(sizeof(char) * (length - start + 2));
	if (!ptr)
		return (NULL);
	i = 0;
	while (start < length)
	{
		ptr[i] = str[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
