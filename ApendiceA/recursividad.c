#include <stdio.h>

int factorial(int n);
int fibonacci(int n);
int main(){
    int opc;
    int numero;
    do{
        printf("Menu:\n");
        printf("1. Pedir Numero\n");
        printf("2. Calcular Factorial\n");
        printf("3. Calcular Fibonacci\n");      
        printf("4. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opc);
        switch (opc)      {
            case 1:
               printf("Digitar numero: ");
               scanf("%d", &numero);
            break;
            case 2:
                printf("El Factorial es: %d\n", factorial(numero));
            break;
            case 3:
                printf("La serie Fibonacci es: %d\n", fibonacci(numero));
            break;
        }
    } while(opc!=4);
}

int factorial(int n) { 
    if (n == 0) // caso base
        return 1; 
    else 
        return n * factorial(n - 1); // caso recursivo
}

int fibonacci(int n) { 
    if (n <= 1) return n; // casos base 
    return fibonacci(n-1) + fibonacci(n-2); // caso recursivo 
}