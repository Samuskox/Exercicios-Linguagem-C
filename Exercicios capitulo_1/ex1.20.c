#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero1;
    int numero2;

    printf("Primeiro numero: ");
    scanf("%d", &numero1);
    printf("Segundo numero: ");
    scanf("%d", &numero2);

    int mediaArit = (numero1 + numero2)/2;

    printf("Media aritmetica: %d", mediaArit);

    return 0;
}