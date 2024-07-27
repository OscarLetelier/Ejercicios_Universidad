/*
    Area de un rectangulo - Escribe un programa que calcule el area
    de un rectangulo con base en su largo y ancho proporcionados por el usuario.
*/

#include <stdio.h>

int base, altura;
int result;

int main() {
    printf("Ingrese la base y altura para calcular al area del rectangulo deseado\n");
    scanf("%d", &base);
    scanf("%d", &altura);

    result = base * altura;
    
    printf("el area del rectangulo es\n %d", result); 
}