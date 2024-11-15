#include "libro.h"
#include <stdio.h>
#include <stdlib.h>

//Declaración de Funciones
void agregarLibro();
void guardarLibro();
void leerLibros();


void agregarLibro(Libro *libro) {
    // Captura de los datos del libro
    printf("Descripción: ");
    fgets(libro->descripcion, sizeof(libro->descripcion), stdin);
    printf("Autores: ");
    fgets(libro->autores, sizeof(libro->autores), stdin);
    printf("Géneros: ");
    fgets(libro->generos, sizeof(libro->generos), stdin);
    printf("Precio: ");
    scanf("%f", &libro->precio);
    // Resetear ventas
    libro->ventas_semanales = 0;
    libro->ventas_mensuales = 0;
    libro->ventas_anuales = 0;
}

void guardarLibro(Libro *libro, const char *archivo) {
    FILE *f = fopen(archivo, "ab");
    if (f == NULL) {
        printf("Error abriendo archivo\n");
        return;
    }
    fwrite(libro, sizeof(Libro), 1, f);
    fclose(f);
    printf("Libro guardado con éxito.\n");
}

void leerLibros(const char *archivo) {
    FILE *f = fopen(archivo, "rb");
    if (f == NULL) {
        printf("Error abriendo archivo\n");
        return;
    }

    Libro libro;
    while (fread(&libro, sizeof(Libro), 1, f)) {
        printf("Descripción: %s\n", libro.descripcion);
        printf("Autores: %s\n", libro.autores);
        printf("Géneros: %s\n", libro.generos);
        printf("Precio: %.2f\n", libro.precio);
        printf("Ventas semanales: %d\n", libro.ventas_semanales);
        printf("Ventas mensuales: %d\n", libro.ventas_mensuales);
        printf("Ventas anuales: %d\n", libro.ventas_anuales);
    }
    fclose(f);
}
