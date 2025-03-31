#include "stdio.h"
#include "ctype.h"
#include "strings.h"
#include "stdbool.h"

#define STR_LEN 50

bool compara_str(char str1[], char str2[]){
    for(int i = 0; (str1[i] != '\0' || str2[i] != '\0'); i++)
        if(tolower(str1[i]) != tolower(str2[i]))
            return false;

    return true;
}


int busca_prouto(char produto[STR_LEN], int externo, int interno, char produtos[externo][interno]){
    for(int i = 0; i < externo; i++){
        if(compara_str(produtos[i], produto))
            return i;
    }
    return -1;
}

int main(){
    char produtos[200][STR_LEN] = {"Arroz", "Batata", "Cana", "Dendê"};
    char produtos2[200][STR_LEN] = {"Arroz", "Melancia" , "Dendê", "Limão", "Manga", "Pera"};

    for(int i = 0; i < sizeof(produtos2) / sizeof(produtos2[0]); i++){
        int produto = busca_prouto(produtos2[i], sizeof(produtos) / sizeof(produtos[0]), STR_LEN, produtos);
        printf("Produto %s: - %s encontrado[%d]\n", produtos2[i], produto == -1? "não": "", produto );
    }

   
   
}