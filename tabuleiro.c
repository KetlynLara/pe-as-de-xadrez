#include <stdio.h>

int main(){
    //Mover a torre 5 casas para a direita
    printf("Torre se move 5 casas para a direita\n");

    for (int i = 0; i < 5; i++){
        printf("DIREITA\n");
    }
        printf("------------------------\n");


    //mover a rainha 8 casas para a esquerda
    
    int i = 0;

    printf("Rainha se move 8 casas para a esquerda\n");
    while (i < 8){
        printf("ESQUERDA\n");
        i++;
    }
    printf("------------------------\n");

    // mover o bispo 5 casas na diagonal para cima e à direita

    printf("Bispo se move 5 casas na diagonal para cima a direita\n");

    int k = 1;

    do {
        printf("DIAGONAL CIMA DIREITA\n");
        k++;
        
    } while (k <= 5);{
    printf("------------------------\n");
    }



    return 0;

}