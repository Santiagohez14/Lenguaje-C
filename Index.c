#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    printf("Bienvenido al desarrollo del juego de Adivinanza\n\"Adivina el numero\"\n");

    int opcion = 0;
    printf("Seleccione:\n1. Iniciar Juego.\n2. Salir del juego.\n");
    scanf("%d", &opcion);

    // Fase 1: Elegir si jugar o alir del juego.

    switch (opcion) {
        case 1: {

        char nombre [16];
        //Se le pide el nombre al jugador para permitir una interfaz de juego más personal.
            printf("Dame tu Nombre para poder ofrecerte un mejor experincia.\n");
            scanf("%s",nombre);

            printf("Bienvenido %s \n",nombre);
            printf("A que nivel deseas Jugar? Selecciona un nivel: \n");

            int level;
            printf("Nivel 1 / Rango (1-50) / Intentos: 10 / Dificultad: Principiante \n");
            printf("Nivel 2 / Rango (1-90) / Intentos: 15 / Dificultad: Avanzado \n");
            printf("Nivel 3 / Rango (1-130) / Intentos: 10 / Dificultad: Legendario \n");
            printf("Para salir del juego pulse 0 \n");
            scanf("%d" ,&level);

            switch (level)
            {
            case 1:
            printf("Exelente %s, Seleccionaste el Nivel Principiante, Empecemos!!! \n",nombre);
            break;
            
            case 2:
            printf("Exelente %s, Seleccionaste el Nivel Avanzado, Empecemos!!! \n",nombre);
            
                break;
            case 3:
            printf("Exelente %s, Seleccionaste el Nivel Legendario, Empecemos!!! \n",nombre);
             
                break;
            case 0:
            printf("Saliste del jugeo. Vuelve pronto.");
                break;
        
            default:
            printf("Error.\n");
                break;
            }

            break;
        }  

        case 2:
            printf("El juego termino.\n");
            break;     
    
        default:
            printf("Error.\n");
            break;
    }

    return 0;
}


