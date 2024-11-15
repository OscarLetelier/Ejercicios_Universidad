#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Definicion de estructura para doctor
typedef struct {
    int idDoctor;
    char nombre[50];
    char especialidad[50];
} Doctor;

// Definicion de estructura para pacientelea
typedef struct {
    int idPaciente;
    char nombre[50];
    char diagnostico[100];
} Paciente;

//Definicion de la estrudtura para la peticion del quirofano
typedef struct {
    int idPeticion;
    char quirofano[20];
    Doctor doctor;
    Paciente paciente;
} PeticionQuirofano;

//Declaracion de Funciones
void almacenarPeticion();
void eliminarPeticion();
void actualizarPeticion();
void buscarPeticion();
void mostrarMenu();

//Main
int main()
{

}

//Funciones
/*
    Menu Principal
    Muestra las opciones a las cuales puede acceder el usuario.
*/



