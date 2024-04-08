/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:44:03 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/08 17:53:53 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	stringlen;
	unsigned int	sizesub;
	unsigned int	end;
	char			*substr;

	stringlen = ft_strlen((char *)s);
	end = 0;
	if (start < stringlen)
		end = len;
	if (end == len)
		end = len;
	if (s == NULL)
		return (NULL);
	sizesub = end - start;
	substr = (char *)malloc(sizeof(char) * (sizesub + 1));
	if (!substr)
		return (NULL);
	ft_memmove(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
