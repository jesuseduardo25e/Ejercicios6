#include <stdio.h>
#include <string.h>

int contarApariciones(const char *cadena, const char *subcadena) {
    int contador = 0;
    const char *apuntador = cadena;

    while ((apuntador = strstr(apuntador, subcadena)) != NULL) {
        contador++;
        apuntador++; // Avanza al siguiente posible inicio de subcadena
    }

    return contador;
}

int main() {
    char cadena[] = "12, 15, 26, 26, 30, 37, 50, 50, 15, 25, 37, 15 50";
    char subcadena[] = "15";

    int apariciones = contarApariciones(cadena, subcadena);

    printf("La subcadena \"%s\" aparece %d veces en la cadena.\n", subcadena, apariciones);
    return 0;
}
