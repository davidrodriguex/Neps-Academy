#include <stdio.h>

int main() {
    // Entrada de uma string (sem espaços).
    char S[50];
    scanf("%s", S);

    // Declarando variáveis para armazenar o comprimento da string, as vogais e as consoantes.
    int length = 0;
    int vowels[50] = {};
    int consonants[50] = {};

    // Analisando cada caractere da string para identificar vogais e consoantes.
    for (int i = 0; S[i] != '\0'; i++) {

        char ch = S[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels[length] = ch;
                length++;
            } else {
                consonants[length] = ch;
                length++;
            }
        }
    
    // Imprimindo as vogais e consoantes encontradas na string.
    printf("Vogais: ");
    for (int i = 0; i < length; i++) {
        printf("%c", vowels[i]);
    }

    printf("\n");

    printf("Consoantes: ");
    for (int i = 0; i < length; i++) {
        printf("%c", consonants[i]);
    }
    printf("\n");

    return 0;
}