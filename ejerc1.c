#include <stdio.h>

//funcion para calcular la prodcutoria del enunciado
float CalcularProductoria(int n){

    int fact,j,i,k;
    float productoria,j_fact,potencia;

    productoria = 1.0;
    for(j = 2;j <= n;j++){

        //incializo los contadores para la potencia y factorial
        potencia = 1;
        j_fact = 1;

        //para calcular el 5 elevado a la(j-1)
        for(i = 1;i <= j-1;i++){
            potencia = potencia * 5;
        }
        
        //para calcular la j!
        for(k=1;k<=j;k++){
            j_fact = j_fact * k;
        }

        //expresion de la productoria
        productoria = productoria * ((potencia + j)/j_fact);
    }
    return productoria;
}

int main(){

    int n;
    float res;

    printf("ingresa un valor n: ");

    scanf("%d",&n);

    //validamos solo positivos mayores a 1
    if(n <= 1){
        printf("Error");
    }
    else{

        //llamo la funcion
        res = CalcularProductoria(n);

        //mostrar resultado
        printf("el valor de la productoria es: %.2f \n",res);
    }

    return 0;
}

//bello