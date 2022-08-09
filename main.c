#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"
#include "queue.h"
#include "menu.h"
#include "gestione_pazienti.h"

#define SIZE 70
int main() {
    int scelta;
    TQueue red, yellow, green;
    bool medicolibero = true;

    /* Inizializzo le code */
    red = queueCreate();
    yellow = queueCreate();
    green = queueCreate();

    /* Completare il main */
    scelta = 1;
    
    while(scelta){
        scelta = menu();
        
        if(scelta == 1){
            int res = accoda_paziente(&red, &yellow, &green, SIZE);
            printf("accodamento: %d\n",res);
        }else if(scelta == 2){
            int res =  visita_paziente (&red, &yellow, &green, SIZE, &medicolibero);

            printf("visita: %d\n",res);
        }else if(scelta == 3){

            printf("medico libero: %d\n",termina_visita (&medicolibero));
        }else if(scelta == 4){

            printf("Numero di pazienti in coda: %d\n",calcola_pazienti_accodati(red, yellow, green, SIZE));
        }else if(scelta == 5){
            prossimo_paziente(red, yellow, green, SIZE);

        }
        
        
    }

}   
