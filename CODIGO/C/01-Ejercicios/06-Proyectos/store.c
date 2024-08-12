#include <stdio.h>
#include <string.h>

//Constante - Maximo de Articulos a Almacenar.
#define MAX_ARTICULOS 50

//Estructura para los articulos.
typedef struct
{
    char nombre[50];
    int cantidad;
    float valor;
} Articulo;

//Arreglos Globales para almacenar los articulos.
Articulo articulosArte[MAX_ARTICULOS];
Articulo articulosEscolares[MAX_ARTICULOS];
Articulo articulosInfantiles[MAX_ARTICULOS];
Articulo articulosOficina[MAX_ARTICULOS];

//Contadores para tipo de articulo
int contadorArte = 0;
int contadorEscolares = 0;
int contadorInfantiles = 0;
int contadorOficina = 0;

//Declaración de Funciones.
void menu();
void registro();
void listarInventario();
void modificarInventario();


//Main
int main ()
{
    menu();
    return 0;
}

//Funciones
//Funcion Menu Principal
/*
Esta función cumple con el objetivo de mostrar al usuario 
las opciones que presenta para ejecutar el programa.
*/
void menu()
{
    int i;
    printf("Bienvenidos al Sistema de Libreria. \n");
    printf("Este Sistema cuenta con las siguientes Funciones. \n");
    do
    {
        printf("\n1 - Registrar Inventario.\n");
        printf("2 - Listar Inventario.\n");
        printf("3 - Modificar Inventario.\n");
        printf("4 - Salir del Programa.\n");
        scanf("%i", &i);

        switch (i) {
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
            printf("\nAcaba de Salir Correctamente del Programa\n");
            break;

        default:
            printf("\n Opcion no Valida Intentale de nuevo \n");
            break;
        }
    } while (i != 4);
}

//Funcion de Registro
/*
Esta funcion cumple con el objetivo de registrar el inventario que desea el usuario
y almacenarlo dentro de un arreglo.
*/
void registro()
{
    printf("Indique el Numero de Identificador del Articulo que desea Registrar. \n");
    int c;
    do
    {
        printf("\n1 - Articulos de Arte.\n");
        printf("2 - Articulos Escolares.\n");
        printf("3 - Articulos Infantiles.\n");
        printf("4 - Articulos de Oficina.\n");
        printf("5 - Volver al Menu Principal.\n");
        scanf("%d", &c);

        char nombre[100];
        int cantidad;
        float valor;

        switch (c) {
            case 1:
                if (contadorArte < MAX_ARTICULOS) {
                    printf("\nSiga paso a paso para registrar sus Articulos de Arte.\n");
                    printf("\nNombre del Articulo de Arte que desea Registrar: ");
                    scanf("%s", nombre);
                    printf("\nCantidad: ");
                    scanf("%d", &cantidad);
                    printf("\nValor Unitario: ");
                    scanf("%f", &valor);

                    strcpy(articulosArte[contadorArte].nombre, nombre);
                    articulosArte[contadorArte].cantidad = cantidad;
                    articulosArte[contadorArte].valor = valor;
                    contadorArte++;
                } else {
                    printf("No se pueden registrar mas Articulos de Arte. \n");
                }
                break;

            case 2:
                if (contadorEscolares < MAX_ARTICULOS) {
                    printf("\nSiga paso a paso para registrar sus Articulos Escolares.\n");
                    printf("\nNombre del Articulo Escolar que desea Registrar: ");
                    scanf("%s", nombre);
                    printf("\nCantidad: ");
                    scanf("%d", &cantidad);
                    printf("\nValor Unitario: ");
                    scanf("%f", &valor);

                    strcpy(articulosEscolares[contadorEscolares].nombre, nombre);
                    articulosEscolares[contadorEscolares].cantidad = cantidad;
                    articulosEscolares[contadorEscolares].valor = valor;
                    contadorEscolares++;
                } else {
                    printf("No se pueden registrar mas Articulos Escolares. \n");
                }
                break;
            
            case 3:
                if (contadorInfantiles < MAX_ARTICULOS) {
                    printf("\nSiga paso a paso para registrar sus Articulos Infantiles.\n");
                    printf("\nNombre del Articulo Infantil que desea Registrar: ");
                    scanf("%s", nombre);
                    printf("\nCantidad: ");
                    scanf("%d", &cantidad);
                    printf("\nValor Unitario: ");
                    scanf("%f", &valor);

                    strcpy(articulosInfantiles[contadorInfantiles].nombre, nombre);
                    articulosInfantiles[contadorInfantiles].cantidad = cantidad;
                    articulosArte[contadorInfantiles].valor = valor;
                    contadorInfantiles++;
                } else {
                    printf("No se pueden registrar mas Articulos Infantiles. \n");
                }
                break;

            case 4:
                if (contadorOficina < MAX_ARTICULOS) {
                    printf("\nSiga paso a paso para registrar sus Articulos de Oficina.\n");
                    printf("\nNombre del Articulo de Oficina que desea Registrar: ");
                    scanf("%s", nombre);
                    printf("\nCantidad: ");
                    scanf("%d", &cantidad);
                    printf("\nValor Unitario: ");
                    scanf("%f", &valor);

                    strcpy(articulosOficina[contadorOficina].nombre, nombre);
                    articulosOficina[contadorOficina].cantidad = cantidad;
                    articulosOficina[contadorOficina].valor = valor;
                    contadorOficina++;
                } else {
                    printf("No se pueden registrar mas Articulos de Oficina. \n");
                }
                break;

            case 5:
                menu();
                break;
            
            default:
                printf("\n Opcion no valida. Intentelo de Nuevo\n");
                break;
        }
    } while (c != 5);
    
}

//Funcion de Listar Inventario
/*
Esta función cumple con el objetivo de listar el inventario actual que cuenta el programa.
de cada uno de los productos registrados.
*/
void listarInventario()
{
    printf("Este es el listado actual de inventario de productos \n");

    printf("\n Articulos de Arte:\n");
    for (int i = 0; i < contadorArte; i++) {
        printf("Nombre: %s, Cantidad: %d, Valor Unitario: %.2f\n",
            articulosArte[i].nombre, articulosArte[i].cantidad, articulosArte[i].valor);
    }


    printf("\n Articulos Escolares:\n");
    for (int i = 0; i < contadorEscolares; i++) {
        printf("Nombre: %s, Cantidad: %d, Valor Unitario: %.2f\n",
            articulosEscolares[i].nombre, articulosEscolares[i].cantidad, articulosEscolares[i].valor);
    }


    printf("\n Articulos Infantiles:\n");
    for (int i = 0; i < contadorInfantiles; i++) {
        printf("Nombre: %s, Cantidad: %d, Valor Unitario: %.2f\n",
            articulosInfantiles[i].nombre, articulosInfantiles[i].cantidad, articulosInfantiles[i].valor);
    }


    printf("\n Articulos de Oficina:\n");
    for (int i = 0; i < contadorOficina; i++) {
        printf("Nombre: %s, Cantidad: %d, Valor Unitario: %.2f\n",
            articulosOficina[i].nombre, articulosOficina[i].cantidad, articulosOficina[i].valor);
    }
}

//Funcion Para modificar el inventario actual
/*
Esta función cumple con el objetivo de poder modificar el inventario creado dentro del programa
en caso de haber registrado mal, la cantidad total o el valor total de los productos.
*/
void modificarInventario() 
{
    int tipo, indice;
    printf("\nSeleccione el tipo de articulo que desea modificar:\n");
    printf("1 - Articulos de Arte\n");
    printf("2 - Articulos Escolares\n");
    printf("3 - Articulos Infantiles\n");
    printf("4 - Articulos de Oficina\n");
    scanf("%d", &tipo);

    switch (tipo) {
        case 1:
            if (contadorArte > 0) {
                printf("\nSeleccione el indice del articulo de Arte a modificar (0-%d): ", contadorArte - 1);
                scanf("%d", &indice);
                if (indice >= 0 && indice < contadorArte) {
                    printf("Nombre: %s, Cantidad actual: %d, Valor Unitario actual: %.2f\n",
                           articulosArte[indice].nombre, articulosArte[indice].cantidad, articulosArte[indice].valor);
                    printf("Ingrese la nueva cantidad: ");
                    scanf("%d", &articulosArte[indice].cantidad);
                    printf("Ingrese el nuevo valor unitario: ");
                    scanf("%f", &articulosArte[indice].valor);
                    printf("Articulo modificado correctamente.\n");
                } else {
                    printf("Indice invalido.\n");
                }
            } else {
                printf("No hay articulos de Arte para modificar.\n");
            }
            break;

        case 2:
            if (contadorEscolares > 0) {
                printf("\nSeleccione el indice del articulo Escolar a modificar (0-%d): ", contadorEscolares - 1);
                scanf("%d", &indice);
                if (indice >= 0 && indice < contadorEscolares) {
                    printf("Nombre: %s, Cantidad actual: %d, Valor Unitario actual: %.2f\n",
                           articulosEscolares[indice].nombre, articulosEscolares[indice].cantidad, articulosEscolares[indice].valor);
                    printf("Ingrese la nueva cantidad: ");
                    scanf("%d", &articulosEscolares[indice].cantidad);
                    printf("Ingrese el nuevo valor unitario: ");
                    scanf("%f", &articulosEscolares[indice].valor);
                    printf("Articulo modificado correctamente.\n");
                } else {
                    printf("Indice invalido.\n");
                }
            } else {
                printf("No hay articulos Escolares para modificar.\n");
            }
            break;

        case 3:
            if (contadorInfantiles > 0) {
                printf("\nSeleccione el indice del articulo Infantil a modificar (0-%d): ", contadorInfantiles - 1);
                scanf("%d", &indice);
                if (indice >= 0 && indice < contadorInfantiles) {
                    printf("Nombre: %s, Cantidad actual: %d, Valor Unitario actual: %.2f\n",
                           articulosInfantiles[indice].nombre, articulosInfantiles[indice].cantidad, articulosInfantiles[indice].valor);
                    printf("Ingrese la nueva cantidad: ");
                    scanf("%d", &articulosInfantiles[indice].cantidad);
                    printf("Ingrese el nuevo valor unitario: ");
                    scanf("%f", &articulosInfantiles[indice].valor);
                    printf("Articulo modificado correctamente.\n");
                } else {
                    printf("Indice invalido.\n");
                }
            } else {
                printf("No hay articulos Infantiles para modificar.\n");
            }
            break;

        case 4:
            if (contadorOficina > 0) {
                printf("\nSeleccione el indice del articulo de Oficina a modificar (0-%d): ", contadorOficina - 1);
                scanf("%d", &indice);
                if (indice >= 0 && indice < contadorOficina) {
                    printf("Nombre: %s, Cantidad actual: %d, Valor Unitario actual: %.2f\n",
                           articulosOficina[indice].nombre, articulosOficina[indice].cantidad, articulosOficina[indice].valor);
                    printf("Ingrese la nueva cantidad: ");
                    scanf("%d", &articulosOficina[indice].cantidad);
                    printf("Ingrese el nuevo valor unitario: ");
                    scanf("%f", &articulosOficina[indice].valor);
                    printf("Articulo modificado correctamente.\n");
                } else {
                    printf("Indice invalido.\n");
                }
            } else {
                printf("No hay articulos de Oficina para modificar.\n");
            }
            break;

        default:
            printf("Opcion no valida.\n");
            break;
    }
}