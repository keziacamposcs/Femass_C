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
