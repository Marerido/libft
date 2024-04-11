#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_to_split(char const *s, char c)
{
    int i;

    i = 0;
    while (s[i] != c && s[i])
        i++;
    return (i);
}

int number_of_substrings(char const *s, char c)
{
    int number_of_strings;
    int i;

    i = 0;
    number_of_strings = 0;
    while (s[i])
    {
        if (s[i] == c)
            number_of_strings++;
        i++;
    }
    return (number_of_strings + 1);
}

char **ft_split(char const *s, char c)
{
    char **ptr;
    int k;
    int j;
    int l;
    int i;

    i = 0;
    l = 0;
    ptr = malloc(sizeof(char*) * (number_of_substrings(s,c) + 1));
    if (!ptr || !s)
        return (NULL);

    while (s[i])
    {
        k = count_to_split(s + i, c);
        ptr[l] = malloc(sizeof(char) * (k + 1)); // Speicher für den String allozieren
        if (!ptr[l]) // Überprüfen, ob die Speicherzuweisung erfolgreich war
        {
            // Speicher freigeben, falls vorherige Zuweisungen erfolgreich waren
            for (int m = 0; m < l; m++)
                free(ptr[m]);
            free(ptr);
            return NULL;
        }
        j = 0;
        while (j < k)
        {
            ptr[l][j] = s[i + j];
            j++;
        }
        ptr[l][k] = '\0';
        i += k + 1;
        l++;
    }
    ptr[l] = NULL; // Das Ende des Arrays mit NULL markieren
    return (ptr);
}

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

