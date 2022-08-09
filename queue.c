#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#include "info.h"
#include "queue.h"

void queuePrint(TQueue q){
    for(int i = q.f; i!=q.b; i = (i+1)%q.a.length){
        print_info(q.a.items[i]);
        printf("\n");
    }
}


TQueue queueCreate(){
    TQueue q;
    q.n=q.f=q.b=0;
    q.a= arrayCreate(0);
    return q;
}

void queueDestroy(TQueue *q){
    q->n=q->f=q->b=0;
    arrayDestroy(&q->a);
}
void queueAdd(TQueue *q, TInfo x){
    
    if(q->n == q->a.length){
        int len=q->a.length;
        arrayResize(&q->a, (len*2)+1); 
        
        if(q->n > 0 && q->f >= q->b){ 

            int n= len - q->f;
            for(int i=1; i<=n; i++){ 
                q->a.items[q->a.length - i]= q->a.items[len -i];
                }
           
            q->f = q->a.length - n;
        }
    }
    q->a.items[q->b] =x;
    q->b =(q->b+1)%q->a.length;
    (q->n)++;
}
/*
    if(q->n == q->a.size){
        int len = q->n;
        arrayResize(&q->a,(q->n*2+1));
        if(q->n > 0 && q->f >= q->b){
            int n = len - q->f;
            
            for(int i = 1;i <= n; i++){
                q->a.items[q->a.length - i] = q->a.items[len - i];
            }
            
           q->f = q->a.length -n; 
        }
        
        q->a.items[q->b]= x;
        q->b = (q->b+1) % q->n;
        q->n++;
        
    }
    
    
    
}
*/
TInfo queueRemove(TQueue *q){
    TInfo x = q->a.items[q->f];
    //o il successivo o 0 se sono all'ultimo
    q->f= (q->f+1)%q->a.length;
    q->n--;
    return x;
}
TInfo queueFront(TQueue *q){
    return(q->a.items[q->f]);
}
int queueIsEmpty(TQueue *q){
    return(q->n ==0);
}



void queueReverse(TQueue *q) {
    if (queueIsEmpty(q)) return;
    TInfo elemento = queueRemove(q);
    queueReverse(q);
    queueAdd(q, elemento);
}