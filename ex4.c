#include "stdio.h"
#include "stdbool.h"
#include "ctype.h"

#define STR_LEN 50

struct BuscaBin{
    int min;
    int mid;
    int max;
};

int compara_str(char str1[], char str2[]){
    for(int i = 0; (str1[i] != '\0' || str2[i] != '\0'); i++)
        if(tolower(str1[i]) == tolower(str2[i]))
            continue;
        else if(tolower(str1[i]) < tolower(str2[i]))
            return -1;
        else if(tolower(str1[i]) > tolower(str2[i]))
            return 1;
    return 0;
}

int busca_funcionarios(char funcionario[], int lenght, char funcionarios[][STR_LEN]){
    struct BuscaBin ctrl= {
        .min = 0,
        .max = lenght
    };
    printf("%d\n", lenght);
    while(ctrl.min <= ctrl.max){
        ctrl.mid = (ctrl.max + ctrl.min) / 2;
         printf("mid = %d, min = %d, max = %d ctrl = %s, funcionario = %s\n", ctrl.mid,ctrl.min, ctrl.max, funcionarios[ctrl.mid], funcionario);
       int compara = compara_str(funcionarios[ctrl.mid], funcionario);
       if(compara == 0){
            return ctrl.mid;
       }
        else if(compara == -1){
            ctrl.min = ctrl.mid + 1;
        }
        else{
            ctrl.max = ctrl.mid - 1;
        }      
    }
    return -1;
}

int main(){

    char funcionarios[][STR_LEN] = {"Alexandre", "Cidinha", "Karen", "Marco", "Mateus", "Vitor"};
    int size = sizeof(funcionarios) / sizeof(funcionarios[0]);
    printf("%d\n", size);



    int res = busca_funcionarios("vitor" , size, funcionarios);
    printf("%d\n", res);
}   