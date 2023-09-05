#include<stdio.h>

int main (void){

    /*Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence,
     considerando só os seguintes valores: */

    int numeroDDD;

    printf("Digite o numero de DDD");
    scanf("%d", &numeroDDD);

    switch (numeroDDD){

        case 61:
            printf("\n O DDD é de Brasilia");
            break;
        case 71:
            printf("\n O DDD é de Salvador");
            break;
        case 11:
            printf("\n O DDD é de São Paulo");
            break;
        case 21:
            printf("\n O DDD é de Rio de Janeiro");
            break;
        case 32:
            printf("\n O DDD é de Juiz de Fora");
            break;
        case 19:
            printf("\n O DDD é de Campinas");
            break;
        case 27:
            printf("\n O DDD é de Vitoria");
            break;
        case 31:
            printf("\n O DDD é de Belo Horizonte");
            break;
        
        default:
            printf("\nUma cidade no Brasil sem identificação");
        
        
    }
    

}