#include<stdio.h>

// Definición de la función para calcular el kn
int calcularKn(int n){

    int kn,k1prev,k2prev,k3prev,i,knext;

        //ponemos los n que ya estan definidos en el enunciado
        if(n == 1){
            kn = 22;
        }
        else if(n == 2){
            kn = 4;
        }
        else if(n == 3){
            kn = 85;
        }  
        //a partir de aqui usaremos la secuencia         
        else{
            //definimos los k como kprev ya que se iran modificando en la secuencia
            k1prev = 85;
            k2prev = 4;
            k3prev = 22;
            
            //bucle que para simular la secuencia kn = k(n-1) + k(n-2) - k(n-3)
            for (i = 4; i <= n; i++){
            knext = k1prev + k2prev - k3prev;

            //paso donde se actualizan los k en la secuencia
            k3prev = k2prev;
            k2prev = k1prev;
            k1prev = knext;
            
            }
            
            //igualamos knext a kn para que lo muestre despues
            kn = knext;
        }       
    return kn;  // Retorna 
}

int main(){

    int n,kn;

    printf("ingresa un numero n entero positivo para calcular el kn: ");

    scanf("%d",&n);

    //validamos que no sea negativo y tampoco cero
    if (n <= 0)
    {
        printf("El numero debe entero ser positivo \n");
    }
    else{

        //llamamos la funcion
        kn = calcularKn(n);

        //mostramos el resultado
        printf("el kn es: %d \n",kn);
    }

    return 0;
}

//bello