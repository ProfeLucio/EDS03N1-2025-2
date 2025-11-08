/*
Logica de Insertar
Si no existe la raíz. Solo asignamos el nodo a la raíz y terminamos, de lo contrario pasamos al punto 2
Verificar si el nuevo nodo es mayor o menor que la raíz 
Si es menor. Verificar si la raíz en su apuntador izquierdo esta vacío. 
Si esta vacío, la raíz en su apuntador izquierdo apunta a nuevo
Sino llamamos nuevamente este proceso, pero la nueva raíz será el nodo izquierdo
Si es mayor.  Verificar si la raíz en su apuntador derecho esta vacío. 
Si esta vacío, la raíz en su apuntador derecho apunta a nuevo
Sino llamamos nuevamente este proceso, pero la nueva raíz será el nodo derecha
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int valor;
    struct nodo *izq;
    struct nodo *der;
} nodo;

nodo *raiz;


void crearNodo();
void posicionar(nodo * nuevaRaiz, nodo *nuevo);
void recorrerArbol();

int main(){
    int opc;
    do {
        printf("MENU PRINCIPAL\n");
        printf("1. Registrar Nodo\n");
        printf("2. Mostrar Nodos\n");
        printf("4. Salir\n");
        scanf("%d", &opc);
        switch (opc)
        {
            case 1:
                crearNodo();
            break;
            case 2:
                recorrerArbol(raiz);
            break;
        }
    } while(opc!=4);
    return 0;
}

void crearNodo(){
    nodo *nuevo = (nodo *) malloc (sizeof(nodo));
    printf("Digite el valor del nodo: ");
    scanf("%d", &nuevo->valor);
    nuevo->der = nuevo->izq = NULL;    
    if(raiz==NULL){
        raiz = nuevo;
    } else {
        posicionar(raiz, nuevo);
    }
    nuevo = NULL;
    free(nuevo);
}

void posicionar(nodo * nuevaRaiz, nodo *nuevo){
    if(nuevo->valor<nuevaRaiz->valor) {
        if(nuevaRaiz->izq==NULL){
            nuevaRaiz->izq = nuevo;
        } else {
            posicionar(nuevaRaiz->izq, nuevo);
        }

    }  else if(nuevo->valor>nuevaRaiz->valor) {
        if(nuevaRaiz->der==NULL){
            nuevaRaiz->der = nuevo;
        } else {
            posicionar(nuevaRaiz->der, nuevo);
        }
    }
 }

//PreOrder-InOrder-PostOrder
 void recorrerArbol(nodo * nuevaRaiz) {
    if(nuevaRaiz!=NULL){
        printf("Nodo: %d\n", nuevaRaiz->valor);
        if(nuevaRaiz->izq!=NULL){
            recorrerArbol(nuevaRaiz->izq);
        }
        if(nuevaRaiz->der!=NULL){
            recorrerArbol(nuevaRaiz->der);
        }
    }
 }


