/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:17:54 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/04 14:19:23 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int a);

#include <stdio.h>
int main(void)
{
        printf("%d\n", ft_isalnum('c'));
        printf("%d\n", ft_isalnum('1'));
        printf("%d\n", ft_isalnum('+'));
}

