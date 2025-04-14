#include <stdio.h>
#include <string.h>

int main() {
    char contrasena[50]; 
    const char contrasenaCorrecta[] = "lili123"; 

    do {
        printf("Ingrese la contraseña: ");
        scanf("%s", contrasena); 

        if (strcmp(contrasena, contrasenaCorrecta) != 0) {
            printf("Contraseña incorrecta. Intente de nuevo.\n");
        }
    } while (strcmp(contrasena, contrasenaCorrecta) != 0);

    printf("¡Contraseña correcta! Acceso concedido.\n");

    return 0;
}