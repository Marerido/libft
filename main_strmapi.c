#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* ft_strmapi(char const* s, char (*f)(unsigned int, char));

char exampleFunction(unsigned int index, char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    }
    return c;
}

int main() {
    char const* originalString = "hello world";
    char* newString = ft_strmapi(originalString, exampleFunction);

    if (newString == NULL) {
        printf("Fehler beim Speichern des neuen Strings.\n");
        return 1;
    }

    printf("Originaler String: %s\n", originalString);
    printf("Neuer String: %s\n", newString);

    free(newString);

    return 0;
}

