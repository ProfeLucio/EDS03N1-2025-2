#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int documento;
    struct nodo *ant;
    struct nodo *sig;
} nodo;

nodo *cab;
void registrar();
void mostrar();
void caminando();

int main(){
    int opc;
    do {
        printf("MENU PRINCIPAL\n");
        printf("1. Registrar Ciudadano\n");
        printf("2. Mostrar Ciudadanos\n");
        printf("3. Caminando \n");
        printf("4. Salir\n");
        scanf("%d", &opc);
        switch (opc)
        {
            case 1:
                registrar();
            break;
            case 2:
                mostrar();
            break;
            case 3:
                caminando();
            break;
        }
    } while(opc!=4);
    return 0;
}

void registrar(){
    int numero;
    printf("Cual es su numero de documento: ");
    scanf("%d", &numero);
    if(cab==NULL){
        cab = (nodo *) malloc (sizeof(nodo));
        cab->documento = numero;
        cab->ant = cab->sig = NULL;
    } else {
        nodo *nuevo = (nodo *) malloc (sizeof(nodo));
        nuevo->documento = numero;
        nuevo->sig = cab;
        nuevo->ant = NULL;
        cab->ant = nuevo;
        cab = nuevo;
        nuevo = NULL;
        free(nuevo);
    }
}

void mostrar(){
    nodo *actual = cab;
    while(actual!=NULL){
        printf("%d -> ", actual->documento);
        actual = actual->sig;
    } 
    printf("NULL\n");
    free(actual);
}

void caminando(){
    int opc;
    nodo *actual = cab;
    if(actual!=NULL){
        do{
            printf("1. Siguiente nodo\n");
            printf("2. Anterior nodo\n");
            printf("3. Terminar \n");
            scanf("%d", &opc);
            switch (opc)
            {
                case 1:
                    printf("Antes de ir adelante - Documento: %d\n", actual->documento );
                    actual = actual->sig;    
                break;
                case 2:
                    printf("Antes de ir atras - Documento: %d\n", actual->documento );
                    actual = actual->ant;    
                break;
            }

        }while((opc!=3)&&(actual!=NULL));
        printf("NULL\n");
    }
     
    free(actual);
}