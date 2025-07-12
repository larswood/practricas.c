/*

Fecha: 17/05/2025
Nombre: Daniel Sanchez
Cedula: 29.530.128
Número Sección: 01
Número del Modelo del Parcial: 02



La entrega de los programas se deberá realizar por medio de un archivo comprimido
(.zip) identificada con su C.I., el cual, debe contener un sub-directorio por cada ejercicio.
Cada sub carpeta deberá tener el archivo fuente (.c) y la entrada del programa
correspondiente.
No adjunte los archivos de salida del programa, ni adjunte los ejecutables generados
por el compilador.

El número total de especies de flores en el bosque.
El número total de especies de pájaros en el bosque.
El número de especies de flores que desean seleccionar para investigar.
El número de especies de pájaros que desean seleccionar para investigar.

*/

#include <stdio.h>

int main() {
    
    int n_f,x_f;
    long long fact_n_f = 1,fact_x_f = 1;
    long long fact_nx_f = 1;
    long long comb_f = 1;
    int n_a,x_a;
    long long fact_n_a = 1,fact_x_a = 1;
    long long fact_nx_a = 1;
    long long comb_a = 1;

    
    printf("ingrese el numero total de especies de flores: ");
    scanf("%d",&n_f);
    printf("ingrese el numero de especies de flores seleccionadas: ");
    scanf("%d",&x_f);
    printf("ingrese el numero total de especies de aves: ");
    scanf("%d",&n_a);
    printf("ingrese el numero de especies de aves seleccionadas: ");
    scanf("%d",&x_a);

    //flores
    if(n_f < 0 || x_f < 0 || x_f > n_f){
        printf("error \n");
        return 1;
    }

    for(int i=1; i <= x_f; i++){
        comb_f = comb_f * (n_f-x_f+i)/i;
    }

    //aves
    if(n_a < 0 || x_a < 0 || x_a > n_a){
        printf("error \n");
        return 1;
    }

    for(int i=1; i <= x_a; i++){
        comb_a = comb_a * (n_a-x_a+i)/i;
    }

    printf("Hay %lld maneras de seleccionar %d especies de flores de %d disponibles \n",comb_f,x_f,n_f);
    printf("Hay %lld maneras de seleccionar %d especies de aves de %d disponibles \n",comb_a,x_a,n_a);

    return 0;
}