#include<stdio.h>


int main(){

    /*realize un algoritmo que al ingresar una cedula a el ultimo digito se le suma 3 si es
    par y menor a 5 , se le suma 2 si es impar y menor a 5
    */

    int num,ult_dig;

    printf("ingresa un numero :");

    scanf("%d",&num);

    if(num % 2 == 0 && num < 5){
        ult_dig = num + 3;
        printf("el numero (%d) es par y menor a 5 se le suma 3 al ultimo digito \n"
            "y su resultado es :%d \n",num,ult_dig);
    }
    else{
        ult_dig = num + 2;
        printf("el numero (%d) es impar y menor a 5 se le suma 2 al ultimo digito \n"
            "y su resultado es :%d \n",num,ult_dig);
    }

    return 0;
}