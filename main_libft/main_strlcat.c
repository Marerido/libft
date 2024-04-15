#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, const char *src, unsigned int size);

int main() {
    char dest[20] = "Hallo, ";
    const char *src = "Welt!";
    unsigned int size = sizeof(dest);

    // Füge src zu dest hinzu, aber nicht mehr als size Zeichen
    unsigned int result = ft_strlcat(dest, src, size);

    // Drucke das Ergebnis
    printf("Ergebnis: %s\n", dest);
    printf("Gesamtlänge, die benötigt wurde: %u\n", result);

    return 0;
}
