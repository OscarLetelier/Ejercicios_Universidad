/*
Crea un programa que recorra una lista de numeros y sume todos sus elementos. 
Imprime el resultado.
*/

#include <stdio.h>

int main () {
    int num[5] = {5, 15, 20, 15, 65};
    int longitud = sizeof(num) / sizeof(num[0]);

    int suma = 0;

    for(int i = 0; i < longitud; i++) {
        suma += num[i];
    }

    printf("La suma de los elementos de la lista es: %d\n", suma);

}



