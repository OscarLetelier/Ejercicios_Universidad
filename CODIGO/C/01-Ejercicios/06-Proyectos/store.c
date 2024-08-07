#include <stdio.h>


//Declaración de Funciones
void registro();
void listarInventario();
void modificarInventario();


//Main

int main ()
{
    int i;
    printf("Bienvenidos al Sistema de Registro de Inventario\n");
    do
    {
        printf("1 - Registro de Inventario\n");
        printf("2 - Listar Inventario\n");
        printf("3 - Modificar Inventario\n");
        printf("4 - Salir del Programa\n");
        scanf("%i", &i);

        switch (i)
    {
        case 1:
            registro();
            break;

        case 2:
            listarInventario();
            break;

        case 3:
            modificarInventario();
            break;
    
        case 4:
            printf("Acaba de Salir Correctamente del Programa");
            break;

        default:
            printf("Opcion no Valida Intentale de nuevo\n");
            break;
    }
    } 
    while (i != 4);
}




//Funciones
//Funcion Registro
void registro()
{
    printf("Bienvenido a la funcionabilidad de Resgistro de Productos\n");
}


//Funcion de Listar Inventario
void listarInventario()
{
    printf("Este es el listado actual de inventario de productos\n");
}

//Funcion Para modificar el inventario actual
void modificarInventario()
{
    printf("Escoja el articulo que desea Modficar");
}

