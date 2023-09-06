#include<stdio.h>

int main(void){

    /*Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuário que deverá informar o prato,
     a sobremesa e a bebida (veja a tabela a seguir). */

     int caloriasTotal, prato, sobremesa, bebida;

        printf("Digite o numero da opção de prato: ");
        scanf("%d", &prato);

        printf("Digite o numero da opção de sobremesa: ");
        scanf("%d", &sobremesa);

        printf("Digite o numero da opção de bebida: ");
        scanf("%d", &bebida);

        
    switch (prato){
        case 1:
            printf("Vegetariano: 180cal\n"); // vegetariano 180
            break;
        case 2:
            printf("Peixe: 230cal\n"); // peixe 230
            break;
        case 3:
            printf("Frango: 250cal\n"); // frango 250
            break;
        case 4:
            printf("Carne: 350cal\n"); // carne 350
            break;
        
    }
    switch (sobremesa){
        case 1:
            printf("Abacaxi: 75cal\n"); // abacaxi 75
            break;
        case 2:
            printf("Sorvete Diet: 110cal\n"); //sorvete diet 110
            break;
        case 3:
            printf("Mouse Diet: 170cal\n"); //mouse diet 170
            break;
        case 4:
            printf("Mouse de chocolate: 200cal\n"); //mouse de chocolate 200
            break;
    }
    
    switch (bebida){
        case 1:
            printf("Chá: 30cal\n"); // chá 20
            break;
        case 2:
            printf("Suco de Laranja: 70cal\n"); // suco de laranja 70
             break;
        case 3:
            printf("Suco de Melão: 100cal\n"); // suco melão 100
            break;
        case 4:
            printf("Refrigerante Diet: 65cal\n"); // refrigerante diet 65
            break;

    }
    caloriasTotal = prato + sobremesa + bebida;
    printf("Total de calorias da refeição é: %d %d %d\n",caloriasTotal);


}
    

