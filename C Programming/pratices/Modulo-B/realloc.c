#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int i;

    // Allocating memory for 5 integers
    ptr = (int*)malloc(5 * sizeof(int));
    if(ptr == NULL){
        printf("Memory not allocated.\n");
        return 1;
    }
    for(i = 0; i < 5; i++){
        ptr[i] = i+1;
    }
    printf("Original array: ");
    for(i = 0; i < 5; i++){
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Reallocating memory for 10 integers
    int *aux = (int*)realloc(ptr, 10 * sizeof(int));
    if(aux != NULL){
        ptr = aux;
    }else{
        printf("Memory reallocation failed.\n");
        free(ptr);
        return 1;
    }
    for(i = 5; i < 10; i++){
        ptr[i] = i;
    }
    printf("Reallocated array: ");
    for(i = 0; i < 10; i++){
        ptr[i] = i+1;
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
    free(aux);

    // Reallocating after freeing the pointer
    printf("Ponteiro após liberação: %d\n", ptr[0]);
    return 0;
}