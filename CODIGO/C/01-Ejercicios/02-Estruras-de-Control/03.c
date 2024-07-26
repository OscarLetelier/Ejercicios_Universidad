/*
    Crea un programa que imprima los numeros pares del 1 al 20 usando un bucle while
*/


#include <stdio.h>

int i = 0;

int main() {
    printf("Aqui solo se mostraran los numeros pares que se encuentran entre el 1 y el 20\n");

    while (i <= 20)
    {
        if(i % 2 == 0){
            printf("%i\n", i);
        }
        i++;
    }

    return 0;
}