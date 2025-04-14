int main() {
    int numero;

    do {
        printf("Ingrese un número del 1 al 7: ");
        scanf("%d", &numero);

        if (!(numero >= 1 && numero <= 7)) {
            printf("Número no válido. Por favor, ingrese un número del 1 al 7.\n");
        }
    } while (!(numero >= 1 && numero <= 7));

    
    if (numero == 1) {
        printf("Lunes\n");
    } else if (numero == 2) {
        printf("Martes\n");
    } else if (numero == 3) {
        printf("Miércoles\n");
    } else if (numero == 4) {
        printf("Jueves\n");
    } else if (numero == 5) {
        printf("Viernes\n");
    } else if (numero == 6) {
        printf("Sábado\n");
    } else if (numero == 7) {
        printf("Domingo\n");
    }

    return 0;
}
