#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[5];

        for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int j = 1;
    for(int i = 0; i < 4; i++){
        array[i] = array[j];
        j++;
    }

    for(int i = 0; i < 4; i++){
        printf("array[%d]: %d\n", i, array[i]);
        }

    return 0;
}