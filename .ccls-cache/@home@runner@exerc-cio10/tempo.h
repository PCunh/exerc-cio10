#ifndef TEMPO_H
#define TEMPO_H
#include <time.h>

double calcular_tempo(clock_t inicio, clock_t fim) {
    return ((double)(fim - inicio)) / CLOCKS_PER_SEC;
}

#endif 

