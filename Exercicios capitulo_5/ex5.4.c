#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[2][2];
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    int D = array[0][0] * array[1][1] - (array[0][1] * array[1][0]);

    printf("Determinante: %d", D);

    return 0;
}