/*
Escribe un programa que cree una lista con los numeros del 1 al 5 y los imprima
*/

#include <stdio.h>

int main() {
    // Declaración e inicialización del arreglo con los números del 1 al 5
    int numeros[5] = {1, 2, 3, 4, 5};
    
    // Ciclo para imprimir los números del arreglo
    for(int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
