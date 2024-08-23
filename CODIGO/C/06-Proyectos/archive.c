
/*
Crear una Interfaz de consola que solicite al usuario ingresar datos para ser guardados en un archivo de texto.
Una opcion para mostrar los datos almacendos en el archivo de texto en consola
Una funcion que permita guardas los datos introducidos por el usuario en el archivo de texto
Una funcion que permita borrar los datos del archivo.
*/

#include <stdio.h>
#include <string.h>



// Estructura de Alumnos
typedef struct 
{
    char nombre[50];
    char apellido[50];
    int edad;
    char curso[50];
} Alumno;

// Declaración de Funciones
void menu();
void registro();
void mostrar();
void borrar();

// Main
int main ()
{
    menu();
    return 0;
}

// Funciones
// Función Menu Principal
void menu()
{
    int i;
    printf("Bienvenido al Sistema de Registro de Alumnos. \n");
    printf("Dentro de este Sistema podrá realizar las siguientes acciones. \n");
    printf("Ingrese el numero de la opcion que desea utilizar. \n");
    do
    {
        printf("\n1. Registrar Alumno Nuevo y Almacenarlo en un Archivo de Texto\n");
        printf("2. Mostrar los Alumnos Registrados dentro del Archivo de Texto.\n");
        printf("3. Borrar los Datos Almacenados dentro del Archivo de Texto.\n");
        printf("4. Salir del Sistema de Registro de Alumnos. \n");
        scanf("%i", &i);

        switch (i)
        {
        case 1:
            registro();
            break;

        case 2:
            mostrar();
            break;

        case 3:
            borrar();
            break;

        case 4:
            printf("\nAcaba de Salir Correctamente del Sistema de Registro\n");
            break;
        
        default:
            printf("\n Opción no válida, inténtelo de nuevo \n");
            break;
        }
    } while (i != 4);
}




// Función de Registro
/*
Esta función cumple con el objetivo de registrar un alumno nuevo 
*/
void registro() 
{
    Alumno alumno;

    printf("\nIngrese los siguientes datos paso a paso. \n");

    printf("Nombre del Alumno: ");
    scanf("%s", alumno.nombre);

    printf("Apellido del Alumno: ");
    scanf("%s", alumno.apellido);

    printf("Edad del Alumno: ");
    scanf("%d", &alumno.edad);

    printf("Curso del Alumno: ");
    scanf("%s", alumno.curso);

    // Aquí puedes añadir código para guardar los datos en un archivo o almacenarlos en una lista
    printf("\nRegistro Completo: \n");
    printf("Nombre: %s\n", alumno.nombre);
    printf("Apellido: %s\n", alumno.apellido);
    printf("Edad: %d\n", alumno.edad);
    printf("Curso: %s\n", alumno.curso); 

}

//Funcion de Mostrar
/*

*/
void mostrar() 
{

}


//Funcion de Borrar
/*

*/
void borrar() 
{

}

