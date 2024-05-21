#include <stdio.h>
#include <time.h>
#include "tempo.h"

void codigo_a_ser_medido(int iteracoes) {
    // Código a ser medido
    int soma = 0;
    for (int i = 0; i < iteracoes; i++) {
        soma += i;
    }
    printf("Soma: %d\n", soma);
}

int main() {
    int iteracoes;
    printf("Informe o número de iterações para calcular a soma: ");
    scanf("%d", &iteracoes);

    clock_t inicio, fim;
    double tempo_decorrido;

    inicio = clock(); // Marca o tempo de início

    codigo_a_ser_medido(iteracoes); // Chama a função a ser medida

    fim = clock(); // Marca o tempo de fim

    tempo_decorrido = calcular_tempo(inicio, fim);
    printf("Tempo de execucao: %f segundos\n", tempo_decorrido);

    return 0;
}
