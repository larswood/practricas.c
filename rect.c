#include <stdio.h>
#include <stdbool.h>

//Sea un punto P(x,y) y un rectangulo R con un punto de origen A(x,y) dado el ancho 
//y el alto determinar si el punto P esta dentro de la region del rectangulo R

/*                                     
// Función que verifica si el punto esta dentro de un rectangulo
bool pto_en_rectangulo(float Px,float Py,float Ax,float Ay,float Aw,float Ah){
    float x_final = Ax + Aw; //  (Ax) representan la coordenada (x) inicial
    float y_final = Ay + Ah; //  (Ay) representan la coordenada (y) inicial

    // Verifica si el punto está dentro del rectángulo
    if((Px >= Ax && Px <= x_final)&&(Py >= Ay && Py <= y_final)){
        return true;
    }
    else{
        return false;
    }

}
*/


int main(){

    float Px = 1.0, Py = 1.0;  // Coordenadas del punto P(x,y)
    float Ax = 2.0, Ay = 2.0;  // Punto de origen A(x,y) del rectangulo
    float Aw = 3.0, Ah = 3.0; // ancho(w) y altura(h) del rectangulo

    //definir los limites del rectangulo
    float Ax_izq = Ax;
    float Ax_der = Ax + Aw;
    float Ay_inf = Ay;
    float Ay_sup = Ay + Ah;

    //verifica si el punto esta dentro del rectangulo
    if((Px >= Ax_izq && Px <= Ax_der)&&(Py >= Ay_inf && Py <= Ay_sup)){
        printf("el punto P(%.1f,%.1f) esta dentro del rectangulo \n",Px,Py);
    }
    else{
        printf("el punto P(%.1f,%.1f) no esta dentro del rectangulo \n",Px,Py);
    }
    
    //(usando la funcion)
    /*
    if(pto_en_rectangulo(Px,Py,Ax,Ay,Aw,Ah)){
        printf("el punto P(%.1f,%.1f) esta dentro del rectangulo \n",Px,Py);
    }
    else{
        printf("el punto P(%.1f,%.1f) No esta dentro del rectangulo \n",Px,Py);
    }
*/
    return 0;
}

//BELLO