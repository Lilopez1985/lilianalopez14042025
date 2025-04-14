#include <stdio.h>

int main() {
    int numero;
    int contador = 0;
    int suma = 0; 

    while (1) {
        printf("Ingresar número entero (-1 para terminar): ");
        scanf("%d", &numero);

        if (numero == -1) {
            break; 
        }

        contador++; 
        suma += numero; 
    }

    printf("Cantidad de números ingresados: %d\n", contador);
    printf("Suma de los números ingresados: %d\n", suma);

    return 0;
}