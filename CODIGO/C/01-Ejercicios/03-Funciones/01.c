/*
Escribe una funcion que tome dos numeros como argumentos y devuelva su suma.
Llama a la funcion y muestra el resultado
*/

#include <stdio.h>

// Declaración de la función suma
int suma(int a, int b);

int main() {
    int a, b, resultado;

    printf("Escoje los dos numeros:\n");
    printf("Primer numero: ");
    scanf("%d", &a);
    printf("Segundo numero: ");
    scanf("%d", &b);

    // Llamada a la función suma
    resultado = suma(a, b);

    // Muestra el resultado
    printf("La suma de %d y %d es: %d\n", a, b, resultado);

    return 0;
}

// Definición de la función suma
int suma(int a, int b) {
    return a + b;
}
