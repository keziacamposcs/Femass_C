/*
O programa deverá obter o Telefone (com o DDD), Endereço de entrega,
Sabor da pizza e o se deseja ou não o refrigerante. Para cada pedido,
o programa deverá calcular e exibir o valor a pagar com base na tabela
de preços abaixo. Ao final do expediente, o programa deverá exibir o
total de pedidos e o total do faturamento.
Muzzarela  R$ 20,00
Portuguesa  R$ 25,00
Camarão  R$ 35,00
Refrigerante  R$ 5,00
O programa deverá obter os dados da seguinte forma:
Telefone com DDD (apenas números):
Endereço de Entrega:
Sabor da Pizza [Muzzarela, Portuguesa ou Camarão]:
Refrigerante? [S/N]:
Obs1: O programa deverá ser finalizado ao digitar 0 (zero) no telefone.
Obs2: O programa deverá conter 2 funções: uma função para calcular e
retornar o valor a pagar e outra para contabilizar a quantidade de
pedidos e o total do faturamento.
Obs3: O sabor da pizza deverá ser digitado, exemplo: “Muzzarela”. Favor
não troque a opção da escolha do sabor por números, exemplo:1-Muzzarela.
*/

//ex. 1 da prova de Prog 2
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//variaveis
long int tel;
char end[100], sabor[20];
char refri;
float total=0, totgeral=0;
int qtd=0;
//


float calc_pedido(char psabor[20], char prefri)
{
    if (strcmp(psabor, "Muzzarela") == 0)
        val=20;
    else if (strcmp(psabor, "Portuguesa") == 0)
        val = 25;
    else if (strcmp(psabor, "Camarao") == 0)
        val = 35;
    
    if (refri == 'S')
        val=val+5;

    return val;
}


void calc_tot (float ptotal)
{
    qtd++;
    totgeral=totgeral+ptotal;
}


main()
{
    printf("Telefone: ");
    scanf("%d", &tel);
    while(tel!=0)
    {
        printf("\nEndereco: ");
        scanf("%s", &end);

        printf("\nSabor da pizza[ Muzzarela, Portuguesa ou Camarao]");
        scanf("%s", &sabor);

        printf("\nRefrigerante [S/N]?");
        scanf("%s", &refri);

        total = calc_pedido(sabor, refri);

        printf("\no total a pagar eh: %.2f", total);

        calc_tot(total);

        printf("\nTelefone com DDD:");
        scanf("%d", &tel);
    }

    //Exibir os resultados
    printf("\no total dos pedidos foi: %d", qtd);
    printf("\no total do faturamento foi: %.2f", totgeral);
}
