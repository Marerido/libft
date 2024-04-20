/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 02:09:43 by root              #+#    #+#             */
/*   Updated: 2024/04/20 02:09:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t stringlen;
    size_t sizesub;
    char *substr;

    if (s == NULL)
        return (NULL);
    stringlen = ft_strlen(s);
    if (start >= stringlen)
        return (ft_strdup("")); // Wenn start größer oder gleich der Länge des Strings ist, geben Sie einen leeren String zurück
    if (len > stringlen - start)
        len = stringlen - start; // Wenn len größer als der verbleibende Teil des Strings ist, setzen Sie len auf den verbleibenden Teil
    sizesub = len;
    substr = (char *)malloc(sizeof(char) * (sizesub + 1));
    if (!substr)
        return (NULL);
    ft_strlcpy(substr, &s[start], len + 1); // Stellen Sie sicher, dass Sie len + 1 verwenden, um Platz für das Null-Terminator-Zeichen zu schaffen
    return (substr);
}

