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
        scanf("%[ˆ\n]s", &end);

        printf("\nSabor da pizza[ Muzzarela, Portuguesa ou Camarao]");
        scanf("%s", &sabor);

        printf("\nRefrigerante [S/N]?");
        scanf("%s", &refri);

        printf("\nTelefone com DDD:");
        scanf("%d", &tel);

        total = calc_pedido(sabor, refri);

        printf("\no total a pagar eh: %.2f", total);

        calc_tot(total);
    }
    //Exibir os resultados
    printf("\no total dos pedidos foi: %d", qtd);
     printf("\no total do faturamento foi: %.2f", totgeral);


}