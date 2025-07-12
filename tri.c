#include<stdio.h>
#include <stdbool.h>

int main(){

    /*realize un algoritmo que que realice el cambio de una temperatura dada, se pregunta primero
    la temperatura y luego se pregunta a que la quiere convertir de farenheit a clesius o viceversa
    */

    float temp_v,conv_f,conv_c;
    int temp_t;

    printf("ingrese el valor de la temperatura: ");
    scanf("%f",&temp_v);

    printf("eliga el tipo de conversion de temperatura: \n");
    printf("(1) Celsius a Fahrenheit \n");
    printf("(2) Fahrenheit a Celsius\n = ");

    scanf("%d",&temp_t);

    switch(temp_t){

        case 1:
        conv_f = (temp_v * 9/5) + 32;
        printf("la temperatura ha sido convertida a %.1f Fahrenheit \n",conv_f);
        break;

        case 2:
        conv_c = (temp_v - 32) * 5/9;
        printf("la temperatura ha sido convertida a %.1f Celsius \n",conv_c);
        break;
    }


    return 0;
}