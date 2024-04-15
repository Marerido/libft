#include <stdio.h>
#include <stdlib.h>
/*
int main() {
    int n = 12345;
    printf("Zahl: %d, Länge: %d.\n", n, numlen(n));
    return 0;
}*/

char* ft_itoa(int n);

/*
int main()
{
    int num = 2346345;
    char* str = ft_itoa(num);

    if (str != NULL)
    {
        printf("Die Zahl %d als Zeichenfolge: %s\n", num, str);
        free(str); // Vergessen Sie nicht, den Speicher freizugeben
    }
    else
    {
        printf("Speicher konnte nicht reserviert werden.\n");
    }

    return 0;
}*/

int main() {
    int num = -12345;
    char* str = ft_itoa(num);
    if (str) {
        printf("String: %s\n", str);
        free(str); // Speicher freigeben
    } else {
        printf("Speicherzuweisung fehlgeschlagen.\n");
    }
    return 0;
}
