
#include <stdio.h>
#include <string.h>


#define MAX_NOTAS 10


typedef struct
{
    char asignatura[25];
    int notaOne;
    int notaTwo;
    int notaThree;
    int notaFour;
} Notas;


//Arreglo Global Asignaturas
Notas asignaturas[MAX_NOTAS];

//Contador
int contadorAsignaturas = 0;


//Declaracion de Funciones
void menu();
void registro();
void mostrar();
void borrar();


//Main
int main() 
{
    menu();
    return 0;
}


//Funciones
/*
    Menu Principal
    Muestra las opciones a las cuales puede acceder el usuario.
*/
void menu()
{
    int i;
    printf("Bienvenidos, dentro de este sistema podra registrar 2 asignaturas,\n");
    printf("Junto a sus 4 notas obtenidas,\n");
    printf("Tambien podra realizar las siguientes acciones.\n");

    do
    {
        printf("\n1 - Registrar Notas.\n");
        printf("2 - Mostrar Notas.\n");
        printf("3 - Borrar los datos registrados.\n");
        printf("4 - Salir del Sistema de Registro.\n");
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
            printf("\n Acaba de Salir Correctamente del Sistema\n");
            break;
        
        default:
            printf("\n Opcion no validad Intentelo de nuevo \n");
            break;
        }

    } while (i != 4);
    
}

/*
    Funcion Registro
    Otorgar la opcion al usuario poder registrar una asignatura y 4 notas obtenidas dentro de esta.
*/
void registro() 
{
    char asignatura[25];
    int notaOne;
    int notaTwo;
    int notaThree;
    int notaFour;

    FILE *archivo = fopen("registro_notas.txt", "a");

    if(archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    if (contadorAsignaturas < MAX_NOTAS) {
        printf("Ingrese los datos solicitados a continuacion. \n");
        printf("\nNombre de la Asignatura: ");
        scanf("%s", &asignatura);

        printf(" Nota 1: ");
        scanf("%d", &notaOne);
        printf(" Nota 2: ");
        scanf("%d", &notaTwo);
        printf(" Nota 3: ");
        scanf("%d", &notaThree);
        printf(" Nota 4: ");
        scanf("%d", &notaFour);

        fprintf(archivo, "Asignatura: %s\n", asignatura);
        fprintf(archivo, "Nota 1: %d\n", notaOne);
        fprintf(archivo, "Nota 2: %d\n", notaTwo);
        fprintf(archivo, "Nota 3: %d\n", notaThree);
        fprintf(archivo, "Nota 4: %d\n", notaFour);
        fprintf(archivo, "--------------------\n");

        strcpy(asignaturas[contadorAsignaturas].asignatura, asignatura);
        asignaturas[contadorAsignaturas].notaOne = notaOne;
        asignaturas[contadorAsignaturas].notaTwo = notaTwo;
        asignaturas[contadorAsignaturas].notaThree = notaThree;
        asignaturas[contadorAsignaturas].notaFour = notaFour;

        contadorAsignaturas++;

        printf("Los datos se han registrado correctamente.\n");
    } else {
        printf("No se pueden Registrar mas Notas. \n");
    }

    fclose(archivo);

}

/*
    Funcion Mostrar
    Permite al usuario visualizar las notas registradas o indicar si no existen registros dentro del archivo.
*/
void mostrar() 
{
    FILE *archivo = fopen("registro_notas.txt", "r");

    if(archivo == NULL) {
        printf("No se pudo abrir el archivo o no existen registros.\n");
        return;
    }

    char linea[100];

    printf("Registros gurados en el archivo:\n\n");

    while(fgets(linea, sizeof(linea), archivo)) {
        printf("%s", linea);
    }

    fclose(archivo);
}

/*
    Funcion Borrar
    Permite al usuario eliminar todos los registros almacenados dentro del archivo.
*/
void borrar() 
{
    FILE *archivo = fopen("registro_notas.txt", "w");

    if(archivo == NULL) {
        printf("No se pudo abrir el archivo o no existen registros.\n");
        return;
    }

    fclose(archivo);

    printf("Todos los registro han sido eliminados del archivo.\n");
}

