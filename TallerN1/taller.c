#include <stdio.h>
#define MAX 10 //constante
void llenarArray(int vector[MAX], int n);
void mostrarArray(int vector[MAX], int n);
int main(){
    int arreglo[MAX];
    int opc;
    do{
        printf("Menu:\n");
        printf("1. Llenar array\n");
        printf("2. Mostrar array\n");
        printf("3. Ordenar array Select Sort\n");
        printf("4. Ordenar array Insert Sort\n");        
        printf("5. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opc);
        switch (opc)      {
            case 1:
                llenarArray(arreglo, MAX);
            break;
            case 2:
                mostrarArray(arreglo, MAX);
            break;
        }
    } while(opc!=5);    
    return 0;
}

void llenarArray(int vector[MAX], int n){
    for(int i=0; i<n; i++){
        printf("Ingrese el valor de la posicion %d: ", i);
        scanf("%d", &vector[i]);
        while(vector[i]<0){
            printf("Error, ingrese un valor positivo: ");
            scanf("%d", &vector[i]);
        }
    }
}

void mostrarArray(int vector[MAX], int n){
    for(int i=0; i<n; i++){
        printf("%d  ", vector[i]);
    }
    printf("\n");
}