#include<stdio.h>
#include <stdbool.h>

int main(){

    /*realize un algoritmo que indique si el usuario tiene la edad para conducir, votar o apostar, 
    para conducir minimo debe tener 16, para votar 18 y para apostar 21
    */

    int edad;


    printf("ingresa la edad del usuario: ");
    scanf("%d",&edad);

    if(edad < 16){
        printf("El usuario no tiene permiso legal para ninguna de estas actividades \n");
    }
    else if(edad >=16 && edad < 18){
        printf("El usuario tiene permiso legal para conducir \n");
    }
    else if(edad >=18 && edad < 21){
        printf("El usuario tiene permiso legal para conducir y votar \n");
    }
    else{
        printf("El usuario tiene permiso legal para conducir,votar y apostar \n");
    }

    return 0;
}
