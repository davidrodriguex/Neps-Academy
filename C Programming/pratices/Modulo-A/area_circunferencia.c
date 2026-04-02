#include <stdio.h>

int main(){
    float R, area;
    float pi = 3.1416;
    scanf("%f", &R);
    area = pi * R * R;
    printf("%.2f", area);
}