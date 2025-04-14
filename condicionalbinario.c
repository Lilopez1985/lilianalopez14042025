#include <stdio.h>

int main() {
    int numero;

    printf("Ingresar número entero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El número %d es positivo.\n", numero);
    } else if (numero < 0) {
        printf("El número %d es negativo.\n", numero);
    } else {
        printf("El número es cero.\n");
    }

    return 0;
}