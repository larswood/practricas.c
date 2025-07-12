#include <stdio.h>
#include <stdbool.h>

//funcion


int main(){

    //realize un algoritmo que sea 2 rectangulos R1 y R2 calcule su interseccion R3, en codigo c

    
    float R1x = 1.0,R1y = 1.0,R1w = 5.0,R1h = 4.0; // (x,y) es punto de origen del rectangulo, w es (ancho) y h es(altura) 
    float R2x = 3.0,R2y = 2.0,R2w = 6.0,R2h = 3.0;
    float R3x,R3y,R3w,R3h;
    bool interseccion = false;

    //definir los limites del rectangulo R1 
    float R1_izq = R1x;
    float R1_der = R1x + R1w;
    float R1_inf = R1y;
    float R1_sup = R1y + R1h;

    //definir los limites del rectangulo R2
    float R2_izq = R2x;
    float R2_der = R2x + R2w;
    float R2_inf = R2y;
    float R2_sup = R2y + R2h;

    //definir la interseccion, el fomato es ej:( (var1>var2) ? (var1)true : (var2)false )
    float izq = (R1_izq > R2_izq) ? R1_izq : R2_izq;
    float der = (R1_der < R2_der) ? R1_der : R2_der;
    float inf = (R1_inf > R2_inf) ? R1_inf : R2_inf;
    float sup = (R1_sup < R2_sup) ? R1_sup : R2_sup;



    //verficar si hay interseccion
    if(izq < der && inf < sup){
        interseccion = true;
        R3x = izq;
        R3y = inf;
        R3w = der - izq;
        R3h = sup - inf;
    }

    //denifir los limites del rectangulo R3
    float R3_izq = R3x;
    float R3_der = R3x + R3w;
    float R3_inf = R3y;
    float R3_sup = R3y + R3h;

    //Mostrar resultados
    printf("Resultados: \n");
    printf("R1:(%.1f,%.1f), ancho(w):%.1f, altura(h):%.1f  \n",R1x,R1y,R1w,R1h);
    printf("R2:(%.1f,%.1f), ancho(w):%.1f, altura(h):%.1f  \n",R2x,R2y,R2w,R2h);

    if(interseccion){
        printf("Existe una interseccion \n");
        printf("R3:(%.1f,%.1f), ancho(w):%.1f, altura(h):%.1f  \n",R3x,R3y,R3w,R3h);

        //determinar tipo de interseccion
        if (R3x == R1x && R3y == R1y && R3w == R1w && R3h == R1h) {
            printf("R2 contiene completamente a R1\n");
        }
        else if (R3x == R2x && R3y == R2y && R3w == R2w && R3h == R2h) {
            printf("R1 contiene completamente a R2\n");
        }
        else {
            printf("R1 y R2 se interceptan parcialmente (con área compartida)\n");
        }
    }
    else
    {
        printf("No hay interseccion \n");
    }

    return 0;
}

//Bello