#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#define NUM_BUCKETS 8

int main(){
    int i = 0;
    int qt, re, nmr;
    int contagem[NUM_BUCKETS] = {0}; // Array de contagem para cada valor de 're'
    int totalAcessos = 0; // Variável para somar o número de acessos

    scanf("%d", &qt);

    for(i; i < qt; i++){
        scanf("%d", &nmr);
        re = nmr % NUM_BUCKETS;

        contagem[re]++; // Incrementa a contagem para o valor de 're'

        printf("%d --- %d \n", re, nmr);
    }

    printf("Quantidade de vezes que cada valor de 're' se repetiu:\n");
    for(i = 0; i < NUM_BUCKETS; i++){
        printf("%d: %d\n", i, contagem[i]);
        totalAcessos += contagem[i]; // Soma o número de acessos a cada bucket
    }

    float mediaAcesso = ((float)totalAcessos / NUM_BUCKETS) + (((float) totalAcessos / NUM_BUCKETS) - 1); // Calcula a média de acesso

    printf("Média de acesso: %.2f\n", mediaAcesso);

    return 0;
}
