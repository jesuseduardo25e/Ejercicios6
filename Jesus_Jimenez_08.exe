#include <stdio.h>
#include <string.h>

void sustituirSubcadena(char *original, char *subcadena, char *reemplazo) {
    char *apuntador = strstr(original, subcadena);

    if (apuntador != NULL) {
        char nuevaCadena[100];
        strncpy(nuevaCadena, original, apuntador - original); // Parte antes de la subcadena
        nuevaCadena[apuntador - original] = '\0'; // Asegúrate de terminar la cadena
        strcat(nuevaCadena, reemplazo); // Subcadena de reemplazo
        strcat(nuevaCadena, apuntador + strlen(subcadena)); // Parte después de la subcadena
        strcpy(original, nuevaCadena); // Copia el resultado a la cadena original
    }
}

int main() {
    char cadena[100] = "1234567890";
    char subcadena[] = "12345";
    char reemplazo[] = "2468";

    sustituirSubcadena(cadena, subcadena, reemplazo);

    printf("Cadena resultante: %s\n", cadena);
    return 0;
}
