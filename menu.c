#include <stdio.h>
#include "menu.h"

int menu()
{
    int scelta,i;
    
    printf("-------------------------------------------------\n");
    printf("PROGRAMMA PER LA GESTIONE DI UN ARCHIVIO DI DIPENDENTI\n\n");
    printf("1. Accodamento di in paziente \n");
    printf("2. Visitare un paziente\n");
    printf("3. Terminare una visita\n");
    printf("4. Stampa il numero di pazienti in attesa per ogni coda\n");
    printf("5. Stampa informazioni prossimo paziente\n");
    printf("0. EXIT\n\n");
    printf("-------------------------------------------------\n");
    printf("Selezionare la scelta [0-5]: ");
    scanf("%d", &scelta);
    while((scelta<0)||(scelta>5)){
       printf("ERRORE! valore non consentito\n");                        
       printf("Selezionare la scelta [0-5]: ");
       scanf("%d", &scelta);
    }
    fflush(stdin);
    return scelta;

   pause();
}

void clear_screen()
{
   //system("CLS");
}

void pause()
{
   //system("pause");
}
