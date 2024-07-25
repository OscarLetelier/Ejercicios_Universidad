#include <stdio.h>
#include <string.h>


int main () {
    int i, bathroom_counter, seat_counter, parking_counter, cafe_counter;
    int result; 
    float seat_a, seat_l, result_seat;
    
    // Dimensiones en metros (m)
    int field_a = 90;
    int field_l = 120;
    int result_field = (field_l * field_a);

    int bathroom_a = 2;
    int bathroom_l = 2;
    int result_bathroom = (bathroom_l * bathroom_a);

    seat_a = 0,4;
    seat_l = 0,5;
    result_seat = (seat_l * seat_a);

    int parking_a = 5;
    int parking_l = 3;
    int result_parking = (parking_l * parking_a);

    int cafe_a = 8;
    int cafe_l = 6;
    int result_cafe = (cafe_l * cafe_a);

    printf("Bienvenido a su Calculadora de Metros Cuadros\n");
    printf("Dentro de este programa podemos encontrar dimesiones prevemiente establecidas para el calculo de metros cuadrados de su estadio\n1. Banos 2x2m\n2. Butacas 0.4x0.5m\n3. Estacionamientos 5x3m\n4. Cafeterias 8x6m\n5. Cancha 90x120m\n");
    printf("Para realizar los calculos ingrese las cantidades deseadas de cada elemento\n");

    do  {
        printf("Cantidad deseada de Baños\n");
        scanf("%i", &bathroom_counter);
        
        printf("Cantidad deseada de Butacas\n");
        scanf("%f", &seat_counter);
        
        printf("Cantidad deseada de Estacionamientos\n");
        scanf("%i", &parking_counter);
         
        printf("Cantidad deseada de Cafeterias\n");
        scanf("%i", &cafe_counter);

        printf(" ¿Desea Volver a ingresar todo de nuevo? (0-NO / 1-SI)\n");
        scanf("%i", &i);
        }
    while(i != 0);

    result = ((result_field) + (result_bathroom * bathroom_counter) + (result_seat * seat_counter) + (result_parking * parking_counter) + (result_cafe * cafe_counter));

    printf("|---------------|\n");
    printf("|               |\n");
    printf("|               |\n");
    printf("|               |\n");
    printf("|               |\n");
    printf("|               |\n");
    printf("|---------------|\n");

    printf("La cantiadd de Metros cuadrados minimos para la construccion\nde su estadio es de %i ", result);

}

