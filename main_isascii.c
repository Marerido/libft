/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:48:47 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/04 14:51:37 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int a);

#include <stdio.h>
int main(void)
{
        printf("%d\n", ft_isascii('c'));
        printf("%d\n", ft_isascii('1'));
        printf("%d\n", ft_isascii('+'));
}

