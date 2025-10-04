#include <stdio.h>

int main() {
    int numeros[5];  // memoria estática en el arreglo
    for (int i = 0; i < 5; i++) {
        numeros[i] = i * 10;
        printf("%d ", numeros[i]);
    }
    return 0;
}
