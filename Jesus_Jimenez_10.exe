#include <stdio.h>
#include <string.h>

void eliminarApariciones(char *cadena, const char *subcadena) {
    char *apuntador = strstr(cadena, subcadena);

    while (apuntador != NULL) {
        memmove(apuntador, apuntador + strlen(subcadena), strlen(apuntador + strlen(subcadena)) + 1);
        apuntador = strstr(cadena, subcadena);
    }
}

int main() {
    char cadena[100] = "12, 13, 15, 16, 20, 11, 13, 12, 12, 12, 18";
    const char subcadena[] = "12";

    eliminarApariciones(cadena, subcadena);

    printf("Cadena resultante: %s\n", cadena);
    return 0;
}
