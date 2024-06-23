#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    char nuevaCadena[100];
    int p, n, i, j = 0;

    printf("Introduce una cadena: ");
    gets(cadena); // Lee la cadena desde la entrada estándar

    printf("Introduce la posición (p): ");
    scanf("%d", &p);

    printf("Introduce el número de caracteres a eliminar (n): ");
    scanf("%d", &n);

    // Copia los caracteres hasta la posición p
    for (i = 0; i < p; i++) {
        nuevaCadena[j] = cadena[i];
        j++;
    }

    // Omite los siguientes n caracteres
    for (i = p + n; i < strlen(cadena); i++) {
        nuevaCadena[j] = cadena[i];
        j++;
    }

    nuevaCadena[j] = '\0'; // Asegúrate de terminar la cadena

    printf("Nueva cadena: %s\n", nuevaCadena);
    return 0;
}
