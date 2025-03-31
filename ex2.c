#include "stdio.h"


struct BuscaBin{
    int min;
    int mid;
    int max;
};

long int *busca_matriculas(long int matricula, int lenght, long int matriculas[]){
    struct BuscaBin ctrl= {
        .min = 0,
        .max = lenght
    };
    printf("%d\n", lenght);
    while(ctrl.min <= ctrl.max){
        ctrl.mid = (ctrl.max + ctrl.min) / 2;
         printf("mid = %d, min = %d, max = %d ctrl = %ld, matricula = %ld\n", ctrl.mid,ctrl.min, ctrl.max, matriculas[ctrl.mid], matricula);
       if(matriculas[ctrl.mid] == matricula){
//         printf("Achou %ld\n", matriculas[ctrl.mid]);
         return &matriculas[ctrl.mid];
       }
        else if(matriculas[ctrl.mid] < matricula){
            ctrl.min = ctrl.mid + 1;
        }
        else{
            ctrl.max = ctrl.mid - 1;
        }      
    }
    return NULL;
}

int main(){
    //{1111111111, 1234567890, 123459876, 987654321}
    long int matriculas[2000];
    int size = sizeof(matriculas) / sizeof(matriculas[0]);
    printf("%d\n", size);
    for(int i = 0; i < size; i++){
        matriculas[i] = 1000000000 + (i + 1);
        printf("%ld\n", matriculas[i]);
    }


    long int *res = busca_matriculas(1000000001 , size, matriculas);
    printf("%ld\n", res == NULL? -1: *res);
    //busca_matriculas(1, size, matriculas);
}   