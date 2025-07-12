#include <stdio.h>

int main() {
    // Variables principales
    int numero, original, cuadrado, espejo, temp, digito;
    int contador_curiosos = 0;
    int longitud, potencia;
    int i; // Variable para el bucle for

    // Leer la secuencia
    printf("Ingrese una secuencia de naturales terminada en -1 (ejemplo: 12 10 5 -1):\n");
    scanf("%d", &numero);

    while (numero != -1) {
        // Guardar el número original
        original = numero;

        // ---- Calcular el número espejo ----
        espejo = 0;
        temp = numero;
        while (temp > 0) {
            digito = temp % 10;       // Obtener último dígito
            espejo = espejo * 10 + digito; // Construir espejo
            temp = temp / 10;         // Eliminar último dígito
        }

        // ---- Verificar si es curioso ----
        cuadrado = original * original;
        longitud = 0;
        temp = original;

        // Calcular cantidad de dígitos del número original
        while (temp > 0) {
            longitud = longitud + 1;
            temp = temp / 10;
        }

        // Calcular 10^longitud (ej: si longitud=2 → 100)
        potencia = 1;
        for (i = 1; i <= longitud; i++) {
            potencia = potencia * 10;
        }

        // Comparar últimos dígitos del cuadrado
        if ((cuadrado % potencia) == original) {
            printf("Espejo de %d es %d. %d es curioso (%d)\n", original, espejo, original, cuadrado);
            contador_curiosos = contador_curiosos + 1;
        } else {
            printf("Espejo de %d es %d. %d no es curioso (%d)\n", original, espejo, original, cuadrado);
        }

        // Leer siguiente número
        scanf("%d", &numero);
    }

    // Resultado final
    printf("Total de números curiosos: %d\n", contador_curiosos);

    return 0;
}