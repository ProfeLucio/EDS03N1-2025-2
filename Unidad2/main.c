#include <stdio.h>
#include "aritmetica.h"
int main() {
 int x = 10, y = 4;
 printf("x+y=%d\n", sumar(x, y));
 printf("x-y=%d\n", restar(x, y));
 printf("y-x=%d\n", restar(y, x));
 return 0;
}
