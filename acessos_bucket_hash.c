#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#define NUM_BUCKETS 8

int main(){
    int i = 0;
    int qt, re, nmr;
    int contagem[NUM_BUCKETS] = {0}; // Array de contagem para cada valor de 'respostas'

    scanf("%d", &qt);

    for(i; i < qt; i++){
        scanf("%d", &nmr);
        re = nmr % NUM_BUCKETS;

        contagem[re]++; // Incrementa a contagem para o valor de 'resposta'

        printf("%d --- %d \n", re, nmr);
    }

    printf("Quantidade de vezes que cada valor de 're' se repetiu:\n");
    for(i = 0; i < NUM_BUCKETS; i++){
        printf("%d: %d\n", i, contagem[i]);
    }

    return 0;
}
