#include <stdio.h>

int main() {
    char cadena[100];
    int n;

    printf("Ingresa una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    printf("Ingresa el número de caracteres a extraer: ");
    scanf("%d", &n);

    if (n > strlen(cadena)) {
        printf("Error: La cadena es más corta que el número de caracteres a extraer.\n");
        return 1;
    }

    printf("Los primeros %d caracteres de la cadena son: ", n);
    for (int i = 0; i < n; i++) {
        printf("%c", cadena[i]);
    }
    printf("\n");

    return 0;
}
