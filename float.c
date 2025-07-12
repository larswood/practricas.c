#include <stdio.h>
#include <math.h>

int main(){

    float num;
    
    printf("ingresa un numero :");

    scanf("%f",&num);

    if (num < 0) {
        printf("El numero es negativo\n");
        if (num <= -100) {
            printf("El numero es inferior o igual a -100\n");
        }
        else {
            printf("El numero es mayor que -100 (pero sigue siendo negativo)\n");
        }
        // Verificación de decimales para todos los negativos
        if (num != floor(num)) {
            printf("El numero tiene decimales\n");
        }
        else {
            printf("El numero no tiene decimales\n");
        }
    } 
    else if (num == 0) {
        printf("El numero es 0\n");
        printf("El numero no tiene decimales\n");
    }
    else {
        printf("El numero es positivo\n");
        if (num >= 100) {
            printf("El numero es superior o igual a 100\n");
        }
        else {
            printf("El numero es menor que 100\n"); 
        }
        // Verificación de decimales para todos los positivos
        if (num != floor(num)) {
            printf("El numero tiene decimales\n");
        }
        else {
            printf("El numero no tiene decimales\n");
        }
    }

    return 0;
}

//bello