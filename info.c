#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "info.h"

TInfo read_info()
{
    TInfo info;
    printf("Inserisci il cod. fiscale (4 caratteri): \n");
    scanf("%s",info.cf);
    while(getchar()!='\n');
    
    printf("Inserisci il cognome: (20 caratteri): \n");
    scanf("%s",info.surname);
    while(getchar()!='\n');
    
    printf("Inserisci il nome (20 caratteri): \n");
    scanf("%s",info.name);
    while(getchar()!='\n');
    
    printf("Inserisci età: \n");
    scanf("%d",&info.age);
    while(getchar()!='\n');
    
    return info;
}


void print_info(TInfo x)
{
   printf ("%16s  %20s  %20s  %3d", x.cf, x.surname, x.name, x.age);
   printf("\n");
}


