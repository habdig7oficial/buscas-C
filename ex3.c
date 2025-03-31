#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "stdbool.h"

bool repetidos(int repetido, int vec[], int lenght){
    int counter = 0;
    for(int i = 0; i < lenght; i++)
        if(vec[i] == repetido)
            counter++;
    
    if(counter > 1)
        return true;
    else
        return false;
}

int main(){
    srand(time(NULL));
    int vec[1000];
    int size = sizeof(vec) / sizeof(vec[0]);
    for(int i = 0; i < size; i++)
        vec[i] = rand() % 100 + 1;

    vec[0] = 25;
    vec[1] = 25;

    printf("\n");
    for(int i = 0; i < size; i++)
        printf("%d\n", vec[i]);

    
    int valor;
    printf("O valor a procurar: ");
    scanf("%d", &valor);

    bool v = repetidos(valor, vec, size);
    printf("O valor %s está dupluicado (%s)", v == false? "não": "", v? "true": "false");
}