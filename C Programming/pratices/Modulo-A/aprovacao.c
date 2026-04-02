#include <stdio.h>

int main(){
    float N1, N2, M;
    scanf("%f", &N1);
    scanf("%f", &N2);
    M = ((N1*2) + (N2*3)) / 5;
    if (M >= 7){
        printf("Aprovado");
    } 
    else if (M < 3){
        printf("Reprovado");
    } 
    else {
        printf("Final");
    }
}