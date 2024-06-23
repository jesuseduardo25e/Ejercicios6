#include <stdio.h>
#include <string.h>

void extraerUltimosCaracteres(char cadena[], int n) {
    int longitud = strlen(cadena);
    
    if (n >= longitud) {
        printf("Error: la cantidad de caracteres a extraer es mayor o igual a la longitud de la cadena.\n");
        return;
    }
    
    printf("Los últimos %d caracteres de la cadena son: %s\n", n, &cadena[longitud - n]);
}

int main() {
    char cadena[100];
    int n;
    
    printf("Ingresa una cadena de texto: ");
    scanf("%s", cadena);
    
    printf("Ingresa la cantidad de caracteres a extraer: ");
    scanf("%d", &n);
    
    extraerUltimosCaracteres(cadena, n);
    
    return 0;
}
