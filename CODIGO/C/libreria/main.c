#include "libro.h"
#include <stdio.h>


//Declaración de Funciones
void agregarlibro();
void guardarLibro();
void leerLibros();
void generarInformeSemanal();
void generarInformeMensual();
void generarInformeAnual();


int main() {
    Libro libro;
    const char *archivo = "libros.dat";

    agregarLibro(&libro);
    guardarLibro(&libro, archivo);
    leerLibros(archivo);

    // Generar informes
    generarInformeSemanal(archivo);
    generarInformeMensual(archivo);
    generarInformeAnual(archivo);

    return 0;
}


