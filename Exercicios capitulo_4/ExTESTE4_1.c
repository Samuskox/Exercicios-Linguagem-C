#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[5];
    int arrayCubo[5];

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 5; i++){
        array[i] = array[i] * array[i] * array[i];
        printf("arrayCubo[%d] = %d\n", i, array[i]);
    }


}