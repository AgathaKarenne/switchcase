#include<stdio.h>

int main(void){

    //Escrever um algoritmo que leia o código do item pedido,
    // a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item.

    int codigoPedido, quantidade, valorPago;

        printf("Informe o codigo do pedido: ");
        scanf("%d", &codigoPedido);

        printf("Informe a quantidade:");
        scanf("%d", &quantidade);

    switch (codigoPedido){

        case 100:
            printf("Cachorro Quente = R$10,10\n ");
            break;
        case 101:
            printf("Bauru Simples = R$8,30\n ");
            break;
        case 102:
            printf("Bauru com ovo = R$8,50\n ");
            break;
        case 103:
            printf("Hamburguer = R$12,50\n ");
            break;
        case 104:
            printf("CheeseBurguer = R$13,25\n ");
            break;
    }   
    

}