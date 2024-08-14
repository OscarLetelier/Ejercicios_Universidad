/*
Crea una función que determine si un numero es par o impar.
Llama a la función con varios numeros y muestra los resultados
*/

#include <stdio.h>

//Declaracion de la funcion numero par o impar.
void inicio();
int esPar(int numero);


//Main
int main(){
    inicio();

    int numero;

    printf("Ingresa un Numero: ");
    scanf("%d", &numero);

    if(esPar(numero)){
        printf("%d es par. \n", numero);
    } else {
        printf("%d es impar. \n", numero);
    }

    return 0;
}



// Funciones
void inicio() {
    printf("Bienvenido a Este Prograna\n");
}

int esPar(int numero){
    return (numero % 2 == 0);
}
