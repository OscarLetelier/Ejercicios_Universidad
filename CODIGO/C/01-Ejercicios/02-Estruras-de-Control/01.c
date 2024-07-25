/*
    Crea un programa que pregunte al usuario por su edad y 
    determine si es menor o mayor de edad.
*/

#include <stdio.h>

//Declaracion
int age;
void saludo();



int main() {
    saludo();
    scanf("%d", &age);
    
    if (age >= 18){
        printf("Puedes Ingresar Eres Mayor de Edad");
    } else {
        printf("No puedes Ingresar lo siento");
    }
    
    return 0;
}


//Funciones
void saludo(){
    printf("Bienvenido Ingrese Su Edad\n");
}