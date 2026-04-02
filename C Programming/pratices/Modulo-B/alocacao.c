#include <stdio.h>
#include <stdlib.h>

int main(){
    char *p;
    p = (char*)malloc(sizeof(char)*2);
    p[0] = 'a';
    *(p+1) = 'b';
    printf("Ponteiro 0: %c\n Ponteiro 1: %c", *p, p[1]);
    free(p);
    printf("Ponteiro 0: %c\n Ponteiro 1: %c", *p, p[1]);
}