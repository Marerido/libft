/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <tunglaub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:07:10 by tunglaub          #+#    #+#             */
/*   Updated: 2024/03/05 13:13:42 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int str_length(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int total_length(int size, char **strs, char *sep)
{
    int i = 0;
    int total_length = 0;
    int sep_length = str_length(sep);

    while (i < size)
    {
        total_length += str_length(strs[i]);
        if (i < size - 1) 
        {
            total_length += sep_length; 
        }
        i++;
    }
    return total_length;
}

int main()
{
    char *strs[] = {"Hallo", "Welt", "42", NULL};
    char *sep = ",   ";

    int length = total_length(3, strs, sep);
    printf("Gesamtlänge: %d\n", length);

    return 0;
}


