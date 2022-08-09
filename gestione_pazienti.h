#ifndef GESTIONE_PAZIENTI_H
#define GESTIONE_PAZIENTI_H

#include "bool.h"
#include "queue.h"
#define MAXDOCTOR 2

/*La funzione accoda un paziente e restituisce 1 se il paziente viene accodato,
0 se non c'� spazio nel pronto soccorso.*/
int accoda_paziente(TQueue *red, TQueue *yellow, TQueue *green, int size);

/*La funzione, se il medico � libero, estrae il paziente da visitare, e pone
  la variabile medicolibero a false; la funzione restituisce 1. Se non ci sono
  medici liberi oppure non ci sono pazienti in coda la funzione restituisce 0
  senza estrarre alcun paziente.*/
int visita_paziente (TQueue *red, TQueue *yellow, TQueue *green, int size, bool *medicolibero);

/*La funzione, se il medico � occupato, pone la variabile medicolibero a true
  e restituisce 1, se il medico non � occupato restituisce 0.*/
int termina_visita (bool *medicolibero);

/*La funzione stampa a video il numero di pazienti in attesa per ogni coda e
restituisce il numero totale di pazienti in coda al pronto soccorso.*/
int calcola_pazienti_accodati(TQueue red, TQueue yellow, TQueue green, int size);

void prossimo_paziente(TQueue red, TQueue yellow, TQueue green, int size);



#endif
