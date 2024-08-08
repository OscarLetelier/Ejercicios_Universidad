#include <stdio.h>
#include <string.h>

#define MAX_ARTICULOS 100

// Estructura para representar un artículo
typedef struct {
    char nombre[100];
    int cantidad;
    float valor;
} Articulo;

// Arreglos globales para almacenar los artículos de cada tipo
Articulo articulosArte[MAX_ARTICULOS];
Articulo articulosEscolares[MAX_ARTICULOS];
Articulo articulosInfantiles[MAX_ARTICULOS];
Articulo articulosOficina[MAX_ARTICULOS];

// Contadores para cada tipo de artículo
int contadorArte = 0;
int contadorEscolares = 0;
int contadorInfantiles = 0;
int contadorOficina = 0;

// Declaración de funciones
void menu();
void registro();
void listarInventario();
void modificarInventario();

// Main
int main() {
    menu();
    return 0;
}

// Funciones
// Función Menu Principal
void menu() {
    int i;
    printf("Bienvenidos al Sistema de Registro de Inventario.\n");
    printf("Este Sistema cuenta con las siguientes Funciones.\n");
    do {
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
                printf("\nOpción no Valida. Intentelo de nuevo\n");
                break;
        }
    } while (i != 4);
}

// Función de Registro
void registro() {
    printf("Indique el Numero de Identificador del Articulo que desea Registrar.\n");
    int c;
    do {
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
                    printf("No se pueden registrar más artículos de Arte.\n");
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
                    printf("No se pueden registrar más artículos Escolares.\n");
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
                    articulosInfantiles[contadorInfantiles].valor = valor;
                    contadorInfantiles++;
                } else {
                    printf("No se pueden registrar más artículos Infantiles.\n");
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
                    printf("No se pueden registrar más artículos de Oficina.\n");
                }
                break;

            case 5:
                menu();
                break;

            default:
                printf("\nOpcion no Valida. Intentelo de nuevo\n");
                break;
        }
    } while (c != 5);
}

// Función de Listar Inventario
void listarInventario() {
    printf("Este es el listado actual de inventario de productos:\n");

    printf("\nArticulos de Arte:\n");
    for (int i = 0; i < contadorArte; i++) {
        printf("Nombre: %s, Cantidad: %d, Valor Unitario: %.2f\n",
               articulosArte[i].nombre, articulosArte[i].cantidad, articulosArte[i].valor);
    }

    printf("\nArticulos Escolares:\n");
    for (int i = 0; i < contadorEscolares; i++) {
        printf("Nombre: %s, Cantidad: %d, Valor Unitario: %.2f\n",
               articulosEscolares[i].nombre, articulosEscolares[i].cantidad, articulosEscolares[i].valor);
    }

    printf("\nArticulos Infantiles:\n");
    for (int i = 0; i < contadorInfantiles; i++) {
        printf("Nombre: %s, Cantidad: %d, Valor Unitario: %.2f\n",
               articulosInfantiles[i].nombre, articulosInfantiles[i].cantidad, articulosInfantiles[i].valor);
    }

    printf("\nArticulos de Oficina:\n");
    for (int i = 0; i < contadorOficina; i++) {
        printf("Nombre: %s, Cantidad: %d, Valor Unitario: %.2f\n",
               articulosOficina[i].nombre, articulosOficina[i].cantidad, articulosOficina[i].valor);
    }
}

// Función de Modificar Inventario (aún no implementada)
void modificarInventario() {
    printf("Función de modificar inventario no implementada.\n");
}
