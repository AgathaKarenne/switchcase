#include<stdio.h>

int main(void){

    /*Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuário que deverá informar o prato,
     a sobremesa e a bebida (veja a tabela a seguir). */

     int caloriasTotal, prato, sobremesa, bebida;

        printf("Prato: vegetarino-1, peixe-2, frango-3, carne-4");
        printf("Digite o numero da opção de prato: ");
        scanf("%d", &prato);

        printf("Sobremesa: abacaxi-1, sorvete diet-2, mouse diet-3, mouse chocolate-4");
        printf("Digite o numero da opção de sobremesa");
        scanf("%d", &sobremesa);

        printf("Bebida: chá-1, suco de laranja-2, suco de melão-3, refrigerante diet-4");
        printf("Digite o numero da opção de bebida");
        scanf("%d", &bebida);

        printf("Informe a quantidade de calorias:");
        scanf("%d", &caloriasTotal);

    switch (caloriasTotal = prato){
        case 180:
            printf("Opção 1: Vegetariano"); // vegetariano 180
            break;
        case 230:
            printf("Opção 2: Peixe"); // peixe 230
            break;
        case 250:
            printf("Opção 3: Frango"); // frango 250
            break;
        case 350:
            printf("Opção 4: Carne"); // carne 350
            break;
        
    }
    switch (caloriasTotal = sobremesa){
        case 75:
            printf("Opção 1: Abacaxi"); // abacaxi 75
            break;
        case 110:
            printf("Opção 2: Sorvete Diet"); //sorvete diet 110
            break;
        case 170:
            printf("Opção 3: Mouse Diet"); //mouse diet 170
            break;
        case 350:
            printf("Opção 4: Mouse de chocolate"); //mouse de chocolate 200
            break;
    }
    
    switch (caloriasTotal = bebida){
        case 20:
            printf("Opção 1: Chá"); // chá 20
            break;
        case 70:
            printf("Opção 2: Suco de Laranja"); // suco de laranja 70
             break;
        case 100:
            printf("Opção 3: Suco de Melão"); // suco melão 100
            break;
        case 65:
            printf("Opção 4: Refrigerante Diet"); // refrigerante diet 65
            break;

    }

}
    

