#include <stdio.h>
#include <string.h>

void menu(){
    printf("=========================");
    printf("   CALCULADORA SIMPLES   ");
    printf("=========================");
    printf("Selecione uma operação:");
    printf("[1] Adição");
    printf("[2] Subtração");
    printf("[3] Multiplicação");
    printf("[4] Divisão");
    printf("[5] Sair");
}

int main(){
    menu();
    return 0;
}