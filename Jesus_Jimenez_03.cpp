#include <stdio.h>
#include <string.h>

int main() {
    char cadena[120];
    char cadenaJunt[120] = ""; // Inicializa la cadena resultante

    printf("Introduce una cadena con espacios: ");
    gets(cadena); // Lee la cadena desde la entrada estándar

    char *apuntador = strtok(cadena, " "); // Separa la cadena por espacios
    while (apuntador != NULL) {
        strcat(cadenaJunt, apuntador); // Concatena las palabras sin espacios
        apuntador = strtok(NULL, " "); // Siguiente palabra
    }

    printf("Cadena sin espacios al final: %s\n", cadenaJunt);
    return 0;
}
