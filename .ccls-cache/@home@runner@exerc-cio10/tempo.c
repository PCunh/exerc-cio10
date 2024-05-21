#include <stdio.h>
#include "tempo.h"
#include <time.h>

void codigo_a_ser_medido() {
    // Código a ser medido
    int soma = 0;
    for (int i = 0; i < 1000000; i++) {
        soma += i;
    }
    printf("Soma: %d\n", soma);
}