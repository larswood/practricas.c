#include<stdio.h>
#include <stdbool.h>
#include <math.h> 

int main(){

    //sea una circunferencia C descrita por un punto de orige A(x,y) 
    //y sea punto P(x,y) determinar si P esta dentro de C

    float Ax = 2.0,Ay = 2.0; // punto de orgien A(x,y) de la circuferencia
    float Px = 4.0,Py = 2.0; // punto P(x,y)
    float r = 2;
    
    if(r <= 0){
        printf("Error el radio debe ser positivo \n");
        return 1;
    }

    //calcular distancia al cuadrado entre P y el punto de orgie de C
    float distancia_cuadrado = (Px - Ax)*(Px - Ax) + (Py - Ay)*(Py - Ay);

    float radio_cuadrado = r * r;

    bool esta_dentro = distancia_cuadrado < radio_cuadrado;      
    bool esta_en_borde = distancia_cuadrado == radio_cuadrado; 
    bool esta_fuera = distancia_cuadrado > radio_cuadrado; 

    //mostrar datos usados y resultados
    printf("Resultados; \n");
    printf("Circunferencia C:(%.1f %.1f), Radio:%.1f \n",Ax,Ay,r);
    printf("Punto P:(%.1f %.1f) \n",Px,Py);
    printf("Distancia al cuadrado: %.1f \n",distancia_cuadrado);
    printf("radio al cuadrado: %.1f \n",radio_cuadrado);

    if(esta_dentro){
        printf("El punto P esta dentro de la circunferencia \n");
    }
    else if(esta_en_borde){
        printf("El punto P esta en el borde de la circunferencia \n");
    }
    else{
        printf("El punto P esta fuera de la circunferencia \n");
    }



    return 0;
}

//bello