#include <stdio.h>
#include <stdlib.h> // importando a biblioteca para alocação dinâmica de memória

int main(){
    int *p1, *p2; // declarando dois ponteiros para inteiros

    p1 = malloc(sizeof(int)*5); // alocando memória para 5 inteiros usando malloc
    p2 = calloc(10, sizeof(int)); // alocando memória para 10 inteiros do tamanho de um inteiro usando calloc

    printf("Endereco de p1: %p\n", p1); // imprimindo o endereço de p1
    printf("Endereco de p2: %p\n", p2); // imprimindo o endereço de p2

    printf("Endereco 2 de p1: %p\n", p1+1); // imprimindo o 2º endereço de p1
    printf("Endereco 2 de p2: %p\n", p2+1); // imprimindo o 2º endereço de p2

    printf("Ponteiro 1 de P1: %d\n", p1[0]); // imprimindo o valor do primeiro elemento de p1 (pode conter lixo de memória)
    printf("Ponteiro 2 de P1: %d\n", p1[1]); // imprimindo o valor do segundo elemento de p1
    printf("Ponteiro 1 de P2: %d\n", p2[0]); // imprimindo o valor do primeiro elemento de p2 (inicializado com zero)
    printf("Ponteiro 2 de P2: %d\n", p2[1]); // imprimindo o valor do segundo elemento de p2 (inicializado com zero)
}