#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int documento;
    struct nodo *sig;
} nodo;
nodo *primero;
void registrar();
void mostrar();

int main(){
    int opc;
    do {
        printf("MENU PRINCIPAL\n");
        printf("1. Registrar Ciudadano\n");
        printf("2. Mostrar Ciudadanos\n");
        printf("3. Salir\n");
        scanf("%d", &opc);
        switch (opc)
        {
            case 1:
                registrar();
            break;
            case 2:
                mostrar();
            break;
        }
    } while(opc!=3);
    return 0;
}

void registrar(){
    int numero;
    printf("Cual es su numero de documento: ");
    scanf("%d", &numero);
    if(primero==NULL){
        primero = (nodo *) malloc (sizeof(nodo));
        primero->documento = numero;
        primero->sig = NULL;
    } else {
        nodo *nuevo = (nodo *) malloc (sizeof(nodo));
        nuevo->documento = numero;
        nuevo->sig = primero;
        primero = nuevo;
        nuevo = NULL;
        free(nuevo);
    }
}

void mostrar(){
    nodo *actual = primero;
    while(actual!=NULL){
        printf("%d -> ", actual->documento);
        actual = actual->sig;
    } 
    printf("NULL\n");
    free(actual);
}