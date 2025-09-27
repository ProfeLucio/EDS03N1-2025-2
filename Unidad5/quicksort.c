#include <stdio.h>

void swap(int *a, int *b);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

int main() {
 int data[] = {6, 2, 4, 1, 5, 8, 12, 3, 9, 7};
 int n = sizeof(data) / sizeof(data[0]);
 quickSort(data, 0, n - 1);
 // Imprimir arreglo ordenado
 for (int i = 0; i < n; i++) {
    printf("%d ", data[i]);
 }
 return 0;
}
// Función para intercambiar dos elementos
void swap(int *a, int *b) {
 int temp = *a;
 *a = *b;
 *b = temp;
}
// Función partición: coloca el pivote en su posición correcta
int partition(int arr[], int low, int high) {
 int pivot = arr[high]; // elegimos el último elemento como pivote
 int i = low;
 for (int j = low; j < high; j++) {
 if (arr[j] < pivot) {
 swap(&arr[i], &arr[j]);
 i++;
 }
 }
 swap(&arr[i], &arr[high]);
 return i;
}
// Función recursiva de Quicksort
void quickSort(int arr[], int low, int high) {
 if (low < high) {
 int p = partition(arr, low, high);
 quickSort(arr, low, p - 1);
 quickSort(arr, p + 1, high);
 }
}