#include <stdio.h>
#define tarifa 60

int main(){

    int Cant_trabajadores,Horas_trabajadas,perc_ganancia,ganancia_total,i;
    int Cant_piedras_horas,total_piedras;
    float promedio_piedras;

    printf("ingrese la cantidad de trabajadores: ");
    scanf("%d",&Cant_trabajadores);

    if(Cant_trabajadores > 0){



        for(i = 1;i <= Cant_trabajadores;i++){

            Horas_trabajadas = 0;

            printf("ingrese la cantidad de horas trabajadas del Trabajador_%d: ",i);
            scanf("%d",&Horas_trabajadas);

            if(Horas_trabajadas < 15){

                perc_ganancia = (Horas_trabajadas * 70) * 0;
                ganancia_total = Horas_trabajadas * 70 + perc_ganancia;

            }
            else if(Horas_trabajadas >= 15 && Horas_trabajadas < 25){

                perc_ganancia = (Horas_trabajadas * 70) * 0.10;
                ganancia_total = Horas_trabajadas * 70 + perc_ganancia;

            }

            printf("El trabajador Nro. %d gano un total "
            "de: %d piedras preciosas  \n",i,ganancia_total);

        }

    }
    else{
        printf("entrada invalida \n");
    }

    return 0;
}