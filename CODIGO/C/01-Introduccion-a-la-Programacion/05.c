/*
    Conversión de Celsius a Fahrenheit - Escribe un programa
    que convierta una temperatura dada en grados Celsius a grados Fahrenhei
*/

#include <stdio.h>


float celsius;
float result;

int main() {
    
    printf("Para obtener la conversion de Celsius a Fahrenheit Ingrese los Grados Celsius que desea convertir\n");
    scanf("%f", &celsius);

    printf("Los", celsius);
    printf("Grados Celcius\n");
    
    result = ((celsius * 1.8) + 32);

    printf("Son %f", result);
    printf("\nGrados Fahrenheit");

}