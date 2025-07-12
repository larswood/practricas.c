#include <stdio.h>

int main(){

    int n_a,x_a;
    long long fact_n_a = 1,fact_x_a = 1;
    long long fact_nx = 1;
    long long comb_a;

    printf("ingrese el numero total de especies de aves: ");
    scanf("%d",&n_a);
    printf("ingrese el numero de especies de aves seleccionadas: ");
    scanf("%d",&x_a);

    if(n_a < 0 || x_a < 0 || x_a > n_a){
        printf("error \n");
        return 1;
    }

    for(int i=1; i <= n_a; i++){
        fact_n_a = fact_n_a * i;
    }

    for(int i=1; i <= x_a; i++){
        fact_x_a = fact_x_a * i;
    }

    for(int i=1; i <= (n_a-x_a); i++){
        fact_nx = fact_nx * i;
    }

    comb_a = fact_n_a/(fact_x_a * fact_nx);

    printf("Hay %lld maneras de seleccionar %d especies de aves de %d disponibles \n",comb_a,x_a,n_a);

    return 0;
}