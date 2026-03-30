#include <stdio.h>
#include <stdlib.h>

void menu(){
    printf("=========================\n");
    printf("   CALCULADORA SIMPLES   \n");
    printf("=========================\n");
    printf("Selecione uma operacao:\n");
    printf("[1] Adicao\n");
    printf("[2] Subtracao\n");
    printf("[3] Multiplicacao\n");
    printf("[4] Divisao\n");
    printf("[5] Sair\n");
}

void operacao(int a){

    float N1, N2, resultado;

    switch (a){
        case 1:
            printf("Digite o primeiro numero: ");
            scanf("%f", &N1);
            printf("Digite o segundo numero: ");
            scanf("%f", &N2);
            resultado = N1 + N2;
            printf("Resultado: %.2f + %.2f = %.2f\n", N1, N2, resultado);
            break;

        case 2:
            printf("Digite o primeiro numero: ");
            scanf("%f", &N1);
            printf("Digite o segundo numero: ");
            scanf("%f", &N2);
            resultado = N1 - N2;
            printf("Resultado: %.2f - %.2f = %.2f\n", N1, N2, resultado);
            break;

        case 3:
            printf("Digite o primeiro numero: ");
            scanf("%f", &N1);
            printf("Digite o segundo numero: ");
            scanf("%f", &N2);
            resultado = N1 * N2;
            printf("Resultado: %.2f * %.2f = %.2f\n", N1, N2, resultado);
            break;

        case 4:
            printf("Digite o primeiro numero: ");
            scanf("%f", &N1);
            printf("Digite o segundo numero: ");
            scanf("%f", &N2);
            if (N2 == 0){
                printf("Erro: Divisão por zero\n");
            }else {
                resultado = N1 / N2;
                printf("Resultado: %.2f / %.2f = %.2f\n", N1, N2, resultado);
            }
            break;

        case 5:
            printf("Obrigado! Ate a proxima.");
            break;

        default:
            printf("Opcao Invalida\n");
    }
}

int main(){
    char resp = 'S';
    int op;
    do{
    do {
            menu();
            scanf("%d", &op);
            operacao(op);
            printf("Deseja realizar outra operacao? (S/N): ");
            scanf(" %c", &resp);
            system("pause");
            system("cls");
        } while (op != 5);  
    } while (resp == 'S' || resp == 's');
}