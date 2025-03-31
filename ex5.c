#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int min(int vec[], int lenght){
    if(lenght == 0)
        return -1;
    int v_min = vec[0];
    for(int i = 0; i < lenght; i++)
        if(vec[i] < v_min)
            v_min = vec[i];
    return v_min;
}

int main(){
    srand(time(NULL));
    int vec[100];
    int size = sizeof(vec) / sizeof(vec[0]);
    for(int i = 0; i < size; i++)
        vec[i] = rand() % 100 + 1;

    printf("\n");
    for(int i = 0; i < size; i++)
        printf("%d\n", vec[i]);

    int v = min(vec, size);
    printf("O valor mínimo é: %d", v);
}