/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:58:12 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/08 14:59:05 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char *s1, char *s2);

int main()
{
    char *s1 = "Hallo";
    char *s2 = "Welt";
    

    char *result = ft_strjoin(s1, s2);
    printf("Ergebnis: %s\n", result);
  
    return 0;
}
