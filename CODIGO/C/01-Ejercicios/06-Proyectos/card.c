//Calculo de la Frecuencia Cardiaca Maxima (FCM)
/*
    Desarrolla un programa en C que calcule la Frecuencia Cardiaca Maxima (FCM)
    Segun la formula FCM = 220 - edad. Implementa una funcion calcularFCM que reciba
    la edad del paciente y retorne la FCM.
*/

#include <stdio.h>

//Declaracion de Funciones
int calcularFCM();

//Main
int main()
{
    printf("Bienvenido a su Calculadora de Frecuencia Cardiaca Maxima\n");
    calcularFCM();
    return 0;
}


//Funciones
//Funcion Calcular FCM
/*
    Este toma como parametro la edad del paciente y retorna su FCM.
*/
int calcularFCM()
{
    int edad;
    int fcm = 220;

    printf("\nIngrese su edad para calcular su Frecuencia Cardiaca Maxima: ");
    scanf("%i", &edad);

    int result = (fcm - edad);

    printf("Su FCM es de %iMaxima: ", result);

}
