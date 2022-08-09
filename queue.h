#ifndef QUEUE_H
#define QUEUE_H

#include "info.h"
#include "bool.h"

#include "TArray.h"

#define SIZE 70

typedef struct{
    int n;  //numero di elmenti
    int f;  //indice front
    int b;  //indice back
    TArray a;
} TQueue;

TQueue queueCreate();
void queueDestroy(TQueue *q);
void queueAdd(TQueue *q, TInfo x);
TInfo queueRemove(TQueue *q);
TInfo queueFront(TQueue *q);
int queueIsEmpty(TQueue *q);
void queueReverse(TQueue *q);
void queuePrint(TQueue q);


#endif
