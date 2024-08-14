/*Escribe un programa que encuentre el mayor
de tres numeros*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Pedir al usuario que introduzca los tres números
    printf("Introduce el primer numero: ");
    scanf("%d", &num1);

    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);

    printf("Introduce el tercer numero: ");
    scanf("%d", &num3);

    // Inicializar la variable mayor con el primer número
    int mayor = num1;

    // Comparar con el segundo número
    if (num2 > mayor) {
        mayor = num2;
    }

    // Comparar con el tercer número
    if (num3 > mayor) {
        mayor = num3;
    }

    // Imprimir el mayor de los tres números
    printf("El mayor de los tres números es: %d\n", mayor);

    return 0;
}
