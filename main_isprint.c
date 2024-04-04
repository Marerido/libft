/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:58:28 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/04 14:59:51 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isprint(int a);

#include <stdio.h>
int main(void)
{
        printf("%d\n", ft_isprint('c'));
        printf("%d\n", ft_isprint('1'));
        printf("%d\n", ft_isprint('+'));
}

