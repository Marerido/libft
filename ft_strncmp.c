/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:23:50 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/15 18:10:27 by tunglaub         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && (str1[i] != '\0'
			&& str2[i] != '\0') && i < n - 1)
	{
		++i;
	}
	return ((unsigned char) str1[i] - (unsigned char)str2[i]);
}
