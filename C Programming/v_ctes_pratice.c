#include <stdio.h>

// Variável

/*int main(){
    int x;

    x = 5;

    printf("%d\n", x);

    x = 7;
    printf("%d\n", x);
} */

// Constantes

int main(){
    const int x = 123;
    printf("%d\n", x);

    x = 466; // Erro: não é possível modificar o valor de uma constante
    printf("%d\n", x);
}