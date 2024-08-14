/*
Escribe un programa que sume, reste, multiplique 
y divida dos numeros dados y muestre los resultados.
*/

#include <stdio.h>
#include <string.h>


main () {
    int operation;
    int numOne;
    int numTwo;
    int resultSum, resultRest, resultMult, resultDiv;


    printf("Escoja el numero de operacion que desea utilizar \n1.Suma \n2.Resta \n3.Multiplicacion \n4.Division\n");
    scanf("%i", &operation);

    switch (operation)
    {
    case 1:
        printf("Escoja los numeros que desea Sumar\n");
        scanf("%i", &numOne);
        scanf("%i", &numTwo);
        resultSum = (numOne + numTwo);
        printf("El resultado de su operacion es %i ", resultSum);
        break;

    case 2:
        printf("Escoja los numeros que desea Restar\n");
        scanf("%i", &numOne);
        scanf("%i", &numTwo);
        resultRest = (numOne - numTwo);
        printf("El resultado de su operacion es %i ", resultRest);
        break;

    case 3:
        printf("Escoja los numeros que desea Multiplicar\n");
        scanf("%i", &numOne);
        scanf("%i", &numTwo);
        resultMult = (numOne * numTwo);
        printf("El resultado de su operacion es %i ", resultMult);
        break;

    case 4:
        printf("Escoja los numeros que desea Dividir\n");
        scanf("%i", &numOne);
        scanf("%i", &numTwo);
        resultDiv = (numOne / numTwo);
        printf("El resultado de su operacion es %i ", resultDiv);
        break;
    
    default:
        printf("No existe el numero de operacion que desea utilizar");
        break;
    }

    return 0;
}