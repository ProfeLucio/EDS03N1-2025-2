#include <stdio.h>
int capturarPuntuaciones(int vector[8]);
int mostrarPuntuaciones(int vector[8]);
void bubbleSort(int arr[8], int n);
int main(){
    int arreglo[8];
    capturarPuntuaciones(arreglo);
    mostrarPuntuaciones(arreglo);
    bubbleSort(arreglo, 8);
    
}

int capturarPuntuaciones(int vector[8]){
    for(int i=0; i<8; i++){
        printf("Digite un numero para la posicion %d ", i+1);
        scanf("%d", &vector[i]);
    }
}

int mostrarPuntuaciones(int vector[8]){
    for(int i=0; i<8; i++){
        printf("El valor de la posicion %d es %d\n", i+1, vector[i]);
    }
}

void bubbleSort(int arr[8], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
        // Si el elemento actual es mayor que el siguiente, intercambiarlos
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                mostrarPuntuaciones(arr);
                printf("Pasada %d - Paso %d\n", i+1, j+1);
            }
    }
    }
}
