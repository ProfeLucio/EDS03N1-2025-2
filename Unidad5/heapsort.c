#include <stdio.h>
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);

int main() {
    int data[] = {6, 2, 4, 1, 5, 8, 12, 3};
    int n = sizeof(data) / sizeof(data[0]);
    heapSort(data, n);
    // Imprimir arreglo ordenado
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}

// Función heapify: asegura la propiedad de montículo en el subárbol en i
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

// Función de Heap Sort
void heapSort(int arr[], int n) {
    // Construir el max-heap
    for (int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    // Extraer elementos del heap uno por uno
    for (int i = n - 1; i > 0; i--) {
        // Mover la raíz actual al final
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        // Llamar a heapify sobre el heap reducido
        heapify(arr, i, 0);
    }
}
