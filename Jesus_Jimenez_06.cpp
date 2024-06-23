#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[100];
    char cadena2[100];
    char nuevaCadena[100];
    char *apuntador;

    printf("Introduce la cadena original: ");
    gets(cadena1); // Lee la cadena desde la entrada estándar

    printf("Introduce la cadena a buscar: ");
    gets(cadena2); // Lee la cadena a buscar desde la entrada estándar

    apuntador = strstr(cadena1, cadena2); // Busca la primera aparición

    if (apuntador != NULL) {
        strncpy(nuevaCadena, cadena1, apuntador - cadena1); // Copia la parte antes de la aparición
        strcpy(nuevaCadena + (apuntador - cadena1), apuntador + strlen(cadena2)); // Copia la parte después de la aparición
        printf("Nueva cadena: %s\n", nuevaCadena);
    } else {
        printf("La cadena a buscar no se encontró en la cadena original.\n");
    }

    return 0;
}
