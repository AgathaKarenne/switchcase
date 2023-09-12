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
            printf("Vegetariano: 180"); // vegetariano 180
            caloriasTotal = 180;
            break;
        case 2:
            printf("Peixe: 230"); // peixe 230
            caloriasTotal = 230;
            break;
        case 3:
            printf("Frango"); // frango 250
            caloriaaTotal = 250;
            break;
        case 4:
            printf("Carne"); // carne 350
            caloriasTotal = 350;
            break;
        
    }
    switch (sobremesa){
        case 1:
            printf("Abacaxi"); // abacaxi 75
            caloriasTotal += 75;
            break;
        case 2:
            printf("Sorvete Diet"); //sorvete diet 110
            caloriasTotal += 110;
            break;
        case 3:
            printf("Mouse Diet"); //mouse diet 170
            caloriasTotal += 170;
            break;
        case 4:
            printf("Mouse de chocolate"); //mouse de chocolate 200
            caloriasTotal += 200;
            break;
    }
    
    switch (bebida){
        case 1:
            printf("Chá"); // chá 20
            caloriasTotal += 20;
            break;
        case 2:
            printf("Suco de Laranja"); // suco de laranja 70
            caloriasTotal += 70;
             break;
        case 3:
            printf("Suco de Melão: 100cal\n"); // suco melão 100
            caloriasTotal += 100;
            break;
        case 4:
            printf("Refrigerante Diet"); // refrigerante diet 65
            caloriasTotal += 65;
            break;

    }
    caloriasTotal = prato + sobremesa + bebida;
    printf("Total de calorias da refeição é: %d %d %d\n",caloriasTotal);


}
    

