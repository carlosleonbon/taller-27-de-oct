#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include "estructuras.h"

int main(void){
    srand(time(NULL));
    int num = 0;
    float lanz = 0;
    struct jugadores jugador[10];
    for(int i = 0; i <10;i++){
        printf("Ingrese al jugador: ");
        scanf("%s", jugador[i].jug);
        for(int j = 0; j < 5; j++){
            num = numrand(0,100);
            jugador[i].intentos[j] = numrand(5.5,15);
            calcularLanz(num,jugador[i].intentos[j] ,j);
            calcularPuntos(jugador[i].intentos[j], j);
        }
    }

}