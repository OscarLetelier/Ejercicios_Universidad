//Crea un programa que declare una variable para almacenar
//tu nombre, edad y si eres estudiante(verdadero o falto) imprime estos valores en consola

#include <stdio.h>
#include <string.h>

main () {
    int edad;
    char name[20];
    char student[20];

    printf("Ingrese su edad\n");
    scanf("%i", &edad);
    printf("Ingrese su nombre\n");
    scanf("%s", &name);
    printf("Ingrese Verdadero si es estudiante o Falso si no lo es\n");
    scanf("%s", &student);

    printf("Sus datos son los siguientes \n1. %i \n2. %s \n3. %s", edad, name, student);

    return 0;
}