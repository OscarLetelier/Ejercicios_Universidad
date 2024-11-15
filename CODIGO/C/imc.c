/*
    Escribe un programa en C que calcule el Indice de masa corporal de un paciente. El IMC
    se calcula dividiendo el peso en kilogramos por el cuadrado de la altura en metros.
    Implementa una funcion calcularIMC que tome como parametros el peso y la altura, y retorno
    el IMC, Ademas, el programa debe indicar si el IMC se encuentra en un rango saludable, bajo peso, sobrepeso o si se trata de obesidad.

*/

#include <stdio.h>
#include <math.h>

//Declaración de Funciones
float calcularIMC();


//Main
int main()
{
    printf("Bienvenido a la Calculadora de IMC");
    calcularIMC();
    return 0;

}



//Funciones
//Funcion Calcular IMC
/*
    Esta realiza toma los parametros de Peso, Altura Y
    Retorna el IMC
*/
float calcularIMC()
{
    float peso;
    float altura;

    printf("\nPara comenzar necesito que ingreses tu peso, por ejemplo 70.4: ");
    scanf("%f", &peso);

    printf("\nAhora necesito que ingreses tu altura, por ejemplo 1.71: ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);
    printf("\nSu IMC Corresponde a %.2f: ", imc);

    if (imc < 18.5)
    {
        printf("\nUd se encuentra  'Bajo Peso'\n");
    } else if (imc >= 18.5 && imc < 24.9)
    {
        printf("\nUd se encuentra 'Saludable'\n");
    } else if (imc >= 25 && imc < 29.9)
    {
        printf("\nUd se encuentra 'Sobre Peso'\n");
    } else
    {
        printf("\nUd se encuentra 'Obesidad'\n");
    }
    
}

