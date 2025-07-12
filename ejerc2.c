#include <stdio.h>

// defino la constante de max 4 cuentas
#define MAX_CUENTAS 4

int main() {
    int monto, n_cuenta, opc;
    int cuenta_mayor_deposito = 0, cuenta_mayor_retiro = 0;
    int total_transacciones = 0, total_retiros = 0, total_depositos = 0;
    int mayor_retiro = 0, mayor_deposito = 0;
    
    for(int i = 0; i < MAX_CUENTAS; i++) {
        printf("Ingrese su numero de cuenta: ");
        scanf("%d", &n_cuenta);

        printf("Seleccione una opcion (1)Deposito, (2)Retiro o (3)Cancelar: ");
        scanf("%d", &opc);

        if(opc == 3) {
            printf("Operacion cancelada saliendo del sistema...\n");

            // continue: (Saltar esta cuenta)
            continue;  
        }

        printf("Ingrese el monto: ");
        scanf("%d", &monto);

        switch(opc) {
            case 1:
                total_depositos = total_depositos + 1;
                if(monto > mayor_deposito) {
                    mayor_deposito = monto;
                    cuenta_mayor_deposito = n_cuenta;
                }
                break;
                
            case 2:
                total_retiros = total_retiros + 1;
                if(monto > mayor_retiro) {
                    mayor_retiro = monto;
                    cuenta_mayor_retiro = n_cuenta;
                }
                break;
                
            default:
                printf("Opcion invalida. Se cancelara esta operacion.\n");

                // Para no contar esta vuelta como cuenta valida
                i--;  

                // saltamos
                continue;
        }
        
        total_transacciones = total_transacciones + 1;
    }

    printf("Total de transacciones realizadas: %d\n", total_transacciones);
    printf("El mayor retiro fue de (%d) y lo realizo (%d)\n", mayor_retiro, cuenta_mayor_retiro);
    printf("El mayor deposito fue de (%d) y lo realizo (%d)\n", mayor_deposito, cuenta_mayor_deposito);
    printf("Total de retiros: %d\n", total_retiros);
    printf("Total de depositos: %d\n", total_depositos);

    return 0;
}