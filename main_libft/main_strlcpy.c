#include <stdio.h>
#include "libft.h"

int main() {
    char src[] = "Hello, World!";
    char dest[20]; // Zielzeichenkette mit ausreichend Platz
    unsigned int size = sizeof(dest) / sizeof(dest[0]); // Größe der Zielzeichenkette

    // Kopiere die Quellzeichenkette in die Zielzeichenkette
    unsigned int copied_length = ft_strlcpy(dest, src, size);

    // Drucke die kopierte Zeichenkette und ihre Länge
    printf("Kopierte Zeichenkette: %s\n", dest);
    printf("Länge der kopierten Zeichenkette: %u\n", copied_length);

    // Testen mit einer kleineren Größe
    char src2[] = "Short";
    char dest2[5]; // Zielzeichenkette mit begrenztem Platz
    unsigned int size2 = sizeof(dest2) / sizeof(dest2[0]); // Größe der Zielzeichenkette

    // Kopiere die Quellzeichenkette in die Zielzeichenkette
    unsigned int copied_length2 = ft_strlcpy(dest2, src2, size2);

    // Drucke die kopierte Zeichenkette und ihre Länge
    printf("Kopierte Zeichenkette (klein): %s\n", dest2);
    printf("Länge der kopierten Zeichenkette (klein): %u\n", copied_length2);

    return 0;
}
