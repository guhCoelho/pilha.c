#include <stdlib.h>
#include <stdio.h>

#define TAM 50

typedef struct {
    int item[TAM];
    int topo;
}tPilha;

void pilhaStart(tPilha *p){
    p->topo = -1;
}