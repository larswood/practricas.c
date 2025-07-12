#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, d;
    bool primo;
    
    printf("Ingrese número: ");
    scanf("%d", &n);
    
    primo = true;
    
    // Casos especiales rápidos
    if (n <= 1) {
        primo = false;
    } else if (n == 2 || n == 3) {
        primo = true;
    } else if (n % 2 == 0 || n % 3 == 0) {
        primo = false;
    } else {
        d = 5;
        while (d * d <= n && primo) {
            if (n % d == 0 || n % (d + 2) == 0) {
                primo = false;
            }
            d += 6;
        }
    }
    
    printf("%d %s\n", n, primo ? "es PRIMO" : "NO es primo");
    
    return 0;
}