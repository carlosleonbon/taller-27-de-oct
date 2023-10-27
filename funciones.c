#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include "estructuras.h"

int intento(int n){
    

}
float numrand(int min, int max){
    float num = min + ((float)rand() / (float)(RAND_MAX)) * (max - min);
    return num;
}

void calcularLanz(int num,struct jugadores jugador,int j){
    
    if (num>30){
       
       if(jugador.intentos[j]>=13){
            jugador.intentos[j] = 0;
            //lf
       }
       else{
            jugador.intentos[j] = num;
       } 
    }
    else{
        jugador.intentos[j] = 1;
        //nl
    }
}

void calcularPuntos(float metros, int j){
    struct jugadores jugadores;
    float centinela = 0;
    if (jugadores.intentos[j] >= jugadores.intentos[j+1]){
        centinela = jugadores.intentos[j+1];
        jugadores.intentos[j+1] = jugadores.intentos[j];
        jugadores.intentos[j] = centinela;
    }
}

void ordenarTabla(char nombre, float intento){
    struct jugadores jugadores;
    printf ("Nombre   |     intento 1    |    intento 2|    intento 3|    intento 4|    intento 5|    puntos");
    for(int i = 0; i < 10; i++){
        printf("%s", jugadores.jug);
    }
}



