#include "libro.h"
#include <stdio.h>
#include <stdlib.h>

//Declaración de Funciones
void generarInformeSemanal();
void generarInformeMensual();
void generarInformeAnual();


// Generar informe de ventas semanales
void generarInformeSemanal(const char *archivo) {
    FILE *f = fopen(archivo, "rb");
    if (f == NULL) {
        printf("Error abriendo archivo\n");
        return;
    }

    FILE *informe = fopen("informe_semanal.txt", "w");
    if (informe == NULL) {
        printf("Error creando informe\n");
        fclose(f);
        return;
    }

    Libro libro;
    fprintf(informe, "Informe de Ventas Semanales\n\n");
    while (fread(&libro, sizeof(Libro), 1, f)) {
        fprintf(informe, "Descripción: %s", libro.descripcion);
        fprintf(informe, "Ventas semanales: %d\n", libro.ventas_semanales);
        fprintf(informe, "------------------------------------\n");
    }
    
    fclose(f);
    fclose(informe);
    printf("Informe semanal generado.\n");
}

// Generar informe de ventas mensuales
void generarInformeMensual(const char *archivo) {
    FILE *f = fopen(archivo, "rb");
    if (f == NULL) {
        printf("Error abriendo archivo\n");
        return;
    }

    FILE *informe = fopen("informe_mensual.txt", "w");
    if (informe == NULL) {
        printf("Error creando informe\n");
        fclose(f);
        return;
    }

    Libro libro;
    fprintf(informe, "Informe de Ventas Mensuales\n\n");
    while (fread(&libro, sizeof(Libro), 1, f)) {
        fprintf(informe, "Descripción: %s", libro.descripcion);
        fprintf(informe, "Ventas mensuales: %d\n", libro.ventas_mensuales);
        fprintf(informe, "------------------------------------\n");
    }
    
    fclose(f);
    fclose(informe);
    printf("Informe mensual generado.\n");
}

// Generar informe de ventas anuales
void generarInformeAnual(const char *archivo) {
    FILE *f = fopen(archivo, "rb");
    if (f == NULL) {
        printf("Error abriendo archivo\n");
        return;
    }

    FILE *informe = fopen("informe_anual.txt", "w");
    if (informe == NULL) {
        printf("Error creando informe\n");
        fclose(f);
        return;
    }

    Libro libro;
    fprintf(informe, "Informe de Ventas Anuales\n\n");
    while (fread(&libro, sizeof(Libro), 1, f)) {
        fprintf(informe, "Descripción: %s", libro.descripcion);
        fprintf(informe, "Ventas anuales: %d\n", libro.ventas_anuales);
        fprintf(informe, "------------------------------------\n");
    }
    
    fclose(f);
    fclose(informe);
    printf("Informe anual generado.\n");
}
