/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:39:42 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/04 14:41:03 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int a);

#include <stdio.h>
int main(void)
{
        char c = 'a';
        printf("%d\n", ft_isdigit(c));
        printf("%d\n",ft_isdigit('1'));
        printf("%d\n", ft_isdigit('G'));
}

