#include <stdio.h>
#include <string.h>

//Constante - Maximo de Articulos a Almacenar
#define MAX_ARTICULOS 100

//Estructura para los articulos
typedef struct
{
    char nombre[100];
    int cantidad;
    float valor;
} Articulo;

//Arreglos Globales para almacenar los articulos de cada Tipo
Articulo articulosArte[MAX_ARTICULOS];
Articulo articulosEscolares[MAX_ARTICULOS];
Articulo articulosInfantiles[MAX_ARTICULOS];
Articulo articulosOficina[MAX_ARTICULOS];

//Contadores para tipo de articulo
int contadorArte = 0;
int contadorEscolares = 0;
int contadorInfantiles = 0;
int contadorOficina = 0;

//Declaración de Funciones
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
void menu()
{
    int i;
    printf("Bienvenidos al Sistema de Registro de Inventario. \n");
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
void modificarInventario()
{
    printf("\n Escoja el articulo que desea Modficar \n");
}
