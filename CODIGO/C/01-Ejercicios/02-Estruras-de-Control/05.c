/*Escribe un programa que imprima la tabla
de multiplicar de un numero dado por el usuario*/

#include <stdio.h>

int main() {
    int numero, i;

    // Pedir al usuario que introduzca el número
    printf("Introduce un numero para ver su tabla de multiplicar: ");
    scanf("%d", &numero);

    // Imprimir la tabla de multiplicar
    printf("Tabla de multiplicar del %d:\n", numero);
    for (i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
