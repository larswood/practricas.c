#include<stdio.h>
#include <stdbool.h>

int main(){

    /*realize un algoritmo que ingrsada una cedula indique que dia de la semana 
    esta asignado para asistir a un cita basandose en el ultimo digito de la cedula
    */

    int cedula;
    int ult_dig;

    printf("ingresa la cedula del usuario fomato ej:(12345678): ");
    scanf("%d",&cedula);
    
    ult_dig = cedula % 10;

    switch(ult_dig){

        case 0:
        printf("le toca cita el lunes \n");
        break;

        case 1:
        printf("le toca cita el lunes   \n");
        break;

        case 2:
        printf("le toca cita el martes \n");
        break;

        case 3:
        printf("le toca cita el martes \n");
        break;

        case 4:
        printf("le toca cita el miercoles \n");
        break;

        case 5:
        printf("le toca cita el miercoles \n");
        break;
        
        case 6:
        printf("le toca cita el jueves \n");
        break;

        case 7:
        printf("le toca cita el jueves \n");
        break;

        case 8:
        printf("le toca cita el viernes \n");
        break;

        case 9:
        printf("le toca cita el viernes \n");
        break;

    }

    return 0;
}
//bello