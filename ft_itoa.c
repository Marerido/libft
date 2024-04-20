/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 22:28:17 by root              #+#    #+#             */
/*   Updated: 2024/04/19 23:26:51 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	numlen(int n) 
{
	int	length;

	length = 1;
	while (n /= 10)
		length++;
	return (length);
}

char	*ft_itoa(int nbr)
{
	char	*str;	
	int	length;
	int	is_negative;
	long int	n;

	n = nbr;
	is_negative = 0;
	length = numlen(n);
	if (n < 0)
		is_negative = 1;
	str = (char *)malloc(sizeof(char) * (length + is_negative + 1));
	if (!str)
		return (NULL);
	if (is_negative)
	{
		str[0] = '-';
		n = -n;
	}
	str[length + is_negative] = '\0';
	while (length > 0)
	{
		str[length + is_negative - 1] = '0' + (n % 10);
		n /= 10;
		length--;
	}
	return (str);
}
