#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    int *numeros = (int*) malloc(n * sizeof(int));
    if (numeros == NULL) {
        printf("Error en la asignación de memoria\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        numeros[i] = i * 10;
        printf("%d ", numeros[i]);
    }

    free(numeros);  // liberar memoria
    return 0;
}
