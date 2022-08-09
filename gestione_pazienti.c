#include <stdio.h>
#include <stdlib.h>
#include "gestione_pazienti.h"


/*La funzione accoda un paziente e restituisce 1 se il paziente viene accodato,
0 se non c'� spazio nel pronto soccorso.*/
int accoda_paziente(TQueue *red, TQueue *yellow, TQueue *green, int size)
{
    TInfo info = read_info();
    int colour = 0;
    printf("Inserisci il colore (1 red, 2 yellow, 3 green):\n");
    scanf("%d",&colour);
    
    if(colour==1){
        if(red->n >= 70)
            return 0;
        else{
            queueAdd(red,info);
            return 1;
        }
            
    }
    if(colour==2){
        if(yellow->n >= 70)
            return 0;
        else{
            queueAdd(yellow,info);
            return 1;
        }
    }
    if(colour==3){
        if(green->n >= 70)
            return 0;
        else{
            queueAdd(green,info);
            return 1;
        }
    }
    
    
}

/*La funzione, se ci sono medici liberi, estrae il paziente da visitare, decrementa
mediciliberi di uno e restituisce 1, se non ci sono medici liberi oppure non ci
sono pazienti in attesa la funzione restituisce 0.*/
int visita_paziente (TQueue *red, TQueue *yellow, TQueue *green, int size, bool *medicolibero)
{
    TInfo info;
    if(*medicolibero){
        if(red->n > 0){
            info = queueRemove(red);
            *medicolibero = false;
            return 1;
        }
        if(yellow->n > 0){
            info = queueRemove(yellow);
            *medicolibero = false;
            return 1;
        }
        if(green->n > 0){
            info = queueRemove(green);
            *medicolibero = false;
            return 1;
        }
    }
    return 0;
}

/*La funzione, se c'� almeno un medico occupato, incrementa di uno il valore di
mediciliberi e restituisce 1, se nessun medico � occupato restituisce 0.*/
int termina_visita (bool *medicolibero)
{
    if(!(*medicolibero)){
        *medicolibero = true;
        return 1;   
    }
    return 0;   
    
}

/*La funzione stampa a video il numero di pazienti in attesa per ogni coda e
restituisce il numero totale di pazienti in coda al pronto soccorso.*/
int calcola_pazienti_accodati(TQueue red, TQueue yellow, TQueue green, int size)
{
    printf("red queue: \n");
    queuePrint(red);

    printf("yellow queue: \n");
    queuePrint(yellow);
    
    printf("green queue: \n");
    queuePrint(green);
    
    
    return red.n + yellow.n + green.n;
}
void prossimo_paziente(TQueue red, TQueue yellow, TQueue green, int size)
{
    if(red.n != 0){
        print_info(red.a.items[red.f]);
        return;
    }
    if(yellow.n != 0){
        print_info(yellow.a.items[yellow.f]);
        return;
    }
    if(green.n != 0){
        print_info(green.a.items[green.f]);
        return;
    }
    
    return;
}
