/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memeset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:36:07 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/04 16:04:35 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>

void    *ft_memset(void *pointer, int value, size_t count);
/*
int main(void)
{
    char str[10];
    printf("%p\n", ft_memset(str, 'a', 7));
}*/

int main(void)
{
    char str[10];
    ft_memset(str, 'a', 7);
    for (size_t i = 0; i < 7; i++)
    {
        printf("%c ", str[i]);
    }
    printf("\n");
}
/*
int	main(void)
{
	char buffer[10];
	printf("%c\n", ft_memset(buffer, 'A', sizeof(buffer)));

}*/
