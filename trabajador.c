//normal

#include <stdio.h>

int main(){


    int Cant_trabajadores,Horas_trabajadas,perc_ganancia,ganancia_total,i;
    int Cant_piedras_total,total_piedras;
    float promedio_piedras;

    printf("ingrese la cantidad de trabajadores: ");
    scanf("%d",&Cant_trabajadores);

    if(Cant_trabajadores > 0){


        Cant_piedras_total = 0;
        for(i = 1;i <= Cant_trabajadores;i++){

            Horas_trabajadas = 0;

            printf("ingrese la cantidad de horas trabajadas del Trabajador_%d: ",i);
            scanf("%d",&Horas_trabajadas);

            if(Horas_trabajadas < 15){

                perc_ganancia = (Horas_trabajadas * 70) * 0;
                ganancia_total = Horas_trabajadas * 70 + perc_ganancia;
                Cant_piedras_total = Cant_piedras_total + ganancia_total;
            }
            else if(Horas_trabajadas >= 15 && Horas_trabajadas < 25){

                perc_ganancia = (Horas_trabajadas * 70) * 0.10;
                ganancia_total = Horas_trabajadas * 70 + perc_ganancia;
                Cant_piedras_total = Cant_piedras_total + ganancia_total;
            }
            else if(Horas_trabajadas >= 25 && Horas_trabajadas < 40){

                perc_ganancia = (Horas_trabajadas * 70) * 0.25;
                ganancia_total = Horas_trabajadas * 70 + perc_ganancia;
                Cant_piedras_total = Cant_piedras_total + ganancia_total;
            }
            else if(Horas_trabajadas >= 40 && Horas_trabajadas < 60){

                perc_ganancia = (Horas_trabajadas * 70) * 0.45;
                ganancia_total = Horas_trabajadas * 70 + perc_ganancia;
                Cant_piedras_total = Cant_piedras_total + ganancia_total;
            }
            else{
                perc_ganancia = (Horas_trabajadas * 70) * 0.50;
                ganancia_total = Horas_trabajadas * 70 + perc_ganancia;
                Cant_piedras_total = Cant_piedras_total + ganancia_total;
            }
            printf("El trabajador Nro. %d gano un total "
            "de: %d piedras preciosas  \n",i,ganancia_total);
        }
        promedio_piedras = (float)Cant_piedras_total/Cant_trabajadores;

        printf("El total de piedras preciosas ganadas "
            "por los trabajadores es de: %d \n",Cant_piedras_total);

        printf("El promedio de piedras preciosas entregadas es de: %.2f \n",promedio_piedras);
    }
    else{
        printf("Entrada invalida \n");
    }

    return 0;
}

//usando funcion

/*
#include <stdio.h>


int CalcularGanancia(int Horas_trabajadas) {
    int perc_ganancia,ganancia_total;


    if(Horas_trabajadas < 15){

        perc_ganancia = (Horas_trabajadas * 70) * 0;
        ganancia_total = Horas_trabajadas * 70 + perc_ganancia;
    }
    else if(Horas_trabajadas >= 15 && Horas_trabajadas < 25){

        perc_ganancia = (Horas_trabajadas * 70) * 0.10;
        ganancia_total = Horas_trabajadas * 70 + perc_ganancia;
    }
    else if(Horas_trabajadas >= 25 && Horas_trabajadas < 40){

        perc_ganancia = (Horas_trabajadas * 70) * 0.25;
        ganancia_total = Horas_trabajadas * 70 + perc_ganancia;
    }
    else if(Horas_trabajadas >= 40 && Horas_trabajadas < 60){

        perc_ganancia = (Horas_trabajadas * 70) * 0.45;
        ganancia_total = Horas_trabajadas * 70 + perc_ganancia;
    }
    else{
        perc_ganancia = (Horas_trabajadas * 70) * 0.50;
        ganancia_total = Horas_trabajadas * 70 + perc_ganancia;
    }
    return ganancia_total;

}

int main(){


    int Cant_trabajadores,Horas_trabajadas,perc_ganancia,ganancia_total,i;
    int Cant_piedras_total,total_piedras;
    float promedio_piedras;

    printf("ingrese la cantidad de trabajadores: ");
    scanf("%d",&Cant_trabajadores);

    if(Cant_trabajadores > 0){
        Cant_piedras_total = 0;


        for(i = 1;i <= Cant_trabajadores;i++){

            

            printf("ingrese la cantidad de horas trabajadas del Trabajador_%d: ",i);
            scanf("%d",&Horas_trabajadas);

            ganancia_total = CalcularGanancia(Horas_trabajadas);
            Cant_piedras_total = Cant_piedras_total + ganancia_total;

            
            printf("El trabajador Nro. %d gano un total "
            "de: %d piedras preciosas  \n",i,ganancia_total);
        }
        promedio_piedras = (float)Cant_piedras_total/Cant_trabajadores;

        printf("El total de piedras preciosas ganadas "
            "por los trabajadores es de: %d \n",Cant_piedras_total);

        printf("El promedio de piedras preciosas entregadas es de: %.2f \n",promedio_piedras);
    }
    else{
        printf("Entrada invalida \n");
    }

    return 0;
}*/

