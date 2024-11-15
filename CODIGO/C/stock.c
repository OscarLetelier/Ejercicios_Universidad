#include <stdio.h>
#include <string.h>

// Definir estructura para un artículo
typedef struct {
    char nombre[20];
    int stock;
} Articulo;

// Función para mostrar la lista de artículos
void mostrarInventario(Articulo inventario[], int tamano) {
    printf("Inventario actual:\n");
    for (int i = 0; i < tamano; i++) {
        printf("%d. %s - %d unidades\n", i + 1, inventario[i].nombre, inventario[i].stock);
    }
}

// Permite al usuario seleccionar un articulo y restar la cantidad
void comprarArticulo(Articulo inventario[], int tamano) {
    int opcion, cantidad;

    mostrarInventario(inventario, tamano);

    printf("Seleccione el articulo que desea comprar (1-%d): ", tamano);
    scanf("%d", &opcion);

    if (opcion < 1 || opcion > tamano) {
        printf("Opción no valida.\n");
        return;
    }

    printf("Ingrese la cantidad que desea restar: ");
    scanf("%d", &cantidad);

    if (cantidad > inventario[opcion - 1].stock) {
        printf("No hay suficiente stock disponible.\n");
        return;
    }

    inventario[opcion - 1].stock -= cantidad;
    printf("Compra realizada con exito.\n");
}


//Retipe el proceso hasta que el usuario decida no Comprar Mas
int main() {
    Articulo inventario[3] = {
        {"Pera", 15},
        {"Manzana", 15},
        {"Uva", 15}
    };
    int continuar = 1;

    while (continuar) {
        comprarArticulo(inventario, 3);
        printf("¿Desea comprar otro articulo? (1: Si, 0: No): ");
        scanf("%d", &continuar);
    }

    printf("Inventario final:\n");
    mostrarInventario(inventario, 3);

    return 0;
}

