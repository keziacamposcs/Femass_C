/*
Faça um programa em C para registrar as doações realizadas no evento
beneficente Baile da 3ª idade. Os dados a serem registrados são: Nome,
Sexo e Valor da doação. (3,0)
Ao final das inscrições o programa deverá exibir:
a) A quantidade de pessoas que doaram acima de 50 reais.
b) A média do valor da doação por pessoa.
Obs.: O evento será "fechado" e terá a participação de apenas 150
convidados. 
*/
//ex. 2 da prova de Prog 2
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define qtd_pessoas 150
//variaveis

char nome[100];
char sexo;
float valor=0, totvalor=0;
int i, qtd50;

void calc_tot(float pvalor)
{
    if (pvalor>50)
        qtd50++;

        totvalor+=pvalor;
}


main()
{
    for ( i = 0; i < qtd_pessoas; i++)
    {
        printf("Nome: ");
        scanf("%s", &nome);

        printf("Sexo: ");
        scanf("%s", &sexo);

        printf("valor da doacao");
        scanf("%f", &valor);
        
        calc_tot(valor);
    }
    //exibir resultados
    printf("\nA quantadade de pessoas que doaram acima de 50 foi %d", qtd50);
    printf("\nA media de doacao por pessoa foi %.2f", totvalor/qtd_pessoas);

}
