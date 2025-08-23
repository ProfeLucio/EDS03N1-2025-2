#include <stdio.h>

void intercambiar(int *a, int *b);
int main(){
    int x = 5, y = 8; 
    intercambiar(&x, &y); 
    printf("x = %d, y = %d\n", x, y); // Imprime: x = 8, y = 5
}
void intercambiar(int *a, int *b)
{ 
    int temp = *a; *a = *b; *b = temp; 
}