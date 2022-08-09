#ifndef INFO_H
#define INFO_H

#define MAXCODFIS 17
#define MAXCHAR 21


/*Definzione della struttura per l'informazione*/
struct SInfo {
  char cf [MAXCODFIS];       //Codice Fiscale del Paziente
  char surname[MAXCHAR];     //Cognome del Paziente
  char name[MAXCHAR];        //Nome del Paziente
  int age;                   //Età del paziente
};

/*Definizione del tipo per l'informazione*/
typedef struct SInfo TInfo;

/*Legge da tastiera i dati dell'info. Restituisce l'info letta*/
TInfo read_info();


/*Stampa l'informazione*/
void print_info(TInfo x);

#endif
