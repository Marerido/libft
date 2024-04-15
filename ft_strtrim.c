/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:33:31 by root              #+#    #+#             */
/*   Updated: 2024/04/13 12:33:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *str, char const c)
{
    char *ptr;
    int i;
    int length;
    int start;
    int end;

    length = ft_strlen(str);
    start = 0;
    end = length - 1;
    while (start < length && str[start] == c)
        start++;
    while (end >= 0 && str[end] == c)
        end--;
    ptr = (char *)malloc(sizeof(char) * (end - start + 2));
    if (!ptr)
        return (NULL);
    i = 0;
    while (start <= end)
    {
        ptr[i] = str[start];
        i++;
        start++;
    }
    ptr[i] = '\0';
    return (ptr);
}
