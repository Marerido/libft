/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tunglaub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:38:01 by tunglaub          #+#    #+#             */
/*   Updated: 2024/04/08 16:38:50 by tunglaub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(char const *s, char c);


int main()
{
    char const *s = "Hallo,Welt,wie,geht,es,dir?";
    char c = ',';
    char **substrings;
    int i = 0;

    // Teile den String s anhand des Trenners c
    substrings = ft_split(s, c);
    if (!substrings)
    {
        printf("Fehler beim Speicherzuweisung.\n");
        return 1;
    }

    // Gib die resultierenden Substrings aus
    while (substrings[i])
    {
        printf("%s\n", substrings[i]);
        i++;
    }

    // Gib den allozierten Speicher frei
    for (i = 0; substrings[i]; i++)
        free(substrings[i]);
    free(substrings);

    return 0;
}

