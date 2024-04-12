/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:29:10 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/12 21:27:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//int ft_isalpha(int a);

#include <stdio.h>

#include "libft.h"

int main(void)
{
    char c = 'w';
    printf("%d\n", ft_isalpha(c));
    printf("%d\n", ft_isalpha('1'));
    printf("%d\n", ft_isalpha('G'));
}

