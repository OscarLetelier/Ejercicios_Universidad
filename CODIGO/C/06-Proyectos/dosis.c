/*
    Calculo de la dosis de medicamento

    Crea un programa en C que calcule la dosis de un medicamento en funcion del peso
    del paciente. La dosis recomendada es de 10mg por cada kg de peso.
    Implementa una funcion calcularDosis que reciba el peso del paciente y retorno la dosis necesaria

*/


#include <stdio.h>

//Declaración de Funciones
float calcularDosis();

//Main
int main()
{
    printf("Bienvenido a su Programa de Calculo de Dosis de Medicamento\n");
    calcularDosis();
    return 0;
}

//Funciones
//Funcion Calcular Dosis
/*
    Esta toma como parametro el peso del paciente y
    retorna la dosis necesaria.
*/

float calcularDosis()
{
    float mg = 10.0;
    float kg;

    printf("Ingresa tu peso en kilogramos: ");
    scanf("%f", &kg);

    float dosis = kg * mg;

    printf("La dosis a utilizar es de %.2fmg: ", dosis);
    
}