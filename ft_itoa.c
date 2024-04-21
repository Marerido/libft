/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:36:56 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/21 12:36:58 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(long int n)
{
	int	length;

	if (n == 0)
		return (1);
	length = 0;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static char	*digits(char *str, long int n, int length, int is_negative)
{
	while (length > 0)
	{
		str[length + is_negative - 1] = '0' + (n % 10);
		n /= 10;
		length--;
	}
	return (str);
}

char	*ft_itoa(int nbr)
{
	char		*str;
	int			length;
	int			is_negative;
	long int	n;

	n = nbr;
	is_negative = 0;
	length = numlen(n);
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	str = (char *)malloc(sizeof(char) * (length + is_negative + 1));
	if (!str)
		return (NULL);
	if (is_negative)
		str[0] = '-';
	str[length + is_negative] = '\0';
	return (digits(str, n, length, is_negative));
}
