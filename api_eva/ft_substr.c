/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:32:11 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/20 12:32:15 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	stringlen;
	size_t	sizesub;
	char	*substr;

	if (s == NULL)
		return (NULL);
	stringlen = ft_strlen(s);
	if (start >= stringlen)
		return (ft_strdup(""));
	if (len > stringlen - start)
		len = stringlen - start;
	sizesub = len;
	substr = (char *)malloc(sizeof(char) * (sizesub + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}
