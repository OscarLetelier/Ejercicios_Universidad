#ifndef LIBRO_H
#define LIBRO_H

typedef struct {
    char descripcion[256];
    char autores[256];
    char generos[100];
    float precio;
    int ventas_semanales;
    int ventas_mensuales;
    int ventas_anuales;
    int resenas[100]; 
} Libro;

// Funciones para manejar libros
void agregarLibro(Libro *libro);
void guardarLibro(Libro *libro, const char *archivo);
void leerLibros(const char *archivo);

// Funciones para generar informes
void generarInformeSemanal(const char *archivo);
void generarInformeMensual(const char *archivo);
void generarInformeAnual(const char *archivo);

#endif
