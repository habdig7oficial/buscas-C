#include "stdio.h"
#include "ctype.h"

#define STR_LEN 50

char *busca_prouto(char produto[], int externo, int interno, char produtos[externo][interno]){
    printf("%s", produtos[1]);
    for(int i = 0; i < externo; i++){
        for(int j = 0; j < interno; j++){
            if(produto[i][j] == produto[j])
                continue
            else if(produto[i][j] != produto[j])
                break
        }
    }
    printf("%s - %s", produtos[0], produto, );
    return NULL;
}

int main(){
    char produtos[100][STR_LEN] = {"Arroz", "Batata", "Cana", "Dendê"};

    printf("%s", busca_prouto("Arroz", sizeof(produtos) / sizeof(produtos[0]), STR_LEN, produtos));
}