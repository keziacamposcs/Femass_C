#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#define Picadinho 15
#define Frango 12
#define Espaguete 10
#define Sobremesa 5

/* Variáveis Globais */

typedef struct 
{
	long int matr;
	char nome[30];
	int curso;	
	int cod_ref;
	char sobremesa;
} alunos;

alunos refeicoes;
alunos *p = &refeicoes;

int tot_picadinho=0, tot_frango=0, tot_espaguete=0;
float valor_a_pagar=0, tot_fat=0;
/*
char *Retorna_nome_prato (int p_cod_prato)
{
	if (p_cod_prato == 10)
		return "Picadinho";
}*/

void calc_qtd_pratos(int p_prato_escolhido, float p_tot_a_pagar)
{
	if (p_prato_escolhido == 10) //Picadinho
		tot_picadinho++;
	else if (p_prato_escolhido == 20) //Frango
		tot_frango++;
	else
		tot_espaguete++;
	
	// Soma o total a pagar de cada pedido (Total do faturamento)
	tot_fat = tot_fat + p_tot_a_pagar;
}

float calc_valor_a_pagar(int *p_prato_escolhido, char *p_sobremesa )
{					
	if (*p_prato_escolhido == 10) //Picadinho
	{
		if(*p_sobremesa == 'S') // Escolheu sobremesa
         	return(Picadinho + Sobremesa);
        else // Sem sobremesa
        	return(Picadinho);
	}		
	else if (*p_prato_escolhido == 20) //Frango
	{
		if(*p_sobremesa == 'S') // Escolheu sobremesa
         	return(Frango + Sobremesa);
        else // Sem sobremesa
        	return(Frango);
	}		
	else if (*p_prato_escolhido == 30) //Espaguete
	{
		if(*p_sobremesa == 'S') // Escolheu sobremesa
         	return(Espaguete + Sobremesa);
        else // Sem sobremesa
        	return(Espaguete);
	}		
}

main()
{
	setlocale(LC_ALL,"portuguese");
	printf("\nBEM-VINDO AO BANDEJÃO DA FEMASS!");
	printf("\n\nInforme a sua matrícula: ");
	scanf("%d",&p->matr);

	while(p->matr!=0)
	{		
		printf("\nNome : ");	
		scanf("%s",&p->nome);
		printf("\n[1]-Sistemas de Informação [2]-Engenharia de Produção [3]-Administração : ");	
		scanf("%s",&p->curso);
		printf("\n[10]-Picadinho de Carne [20]-Frango à Parmegiana [30]-Espaguete à Bolonhesa : ");	
		scanf("%d",&p->cod_ref);
		printf("\nDeseja Sobremesa por apenas 5 reais? [S/N] : ");	
		scanf("%s",&p->sobremesa);	
		printf("\n\nSua matrícula é %d.",p->matr);	
		printf("\nO prato escolhido foi %d.",p->cod_ref);			
		// Chama a função para calcular o valor a pagar
		valor_a_pagar = calc_valor_a_pagar(&p->cod_ref,&p->sobremesa);
		printf("\nO total a pagar é: %.2f",valor_a_pagar);					
		calc_qtd_pratos(p->cod_ref,valor_a_pagar);
		printf("\n\n");
		printf("\n\nInforme a matrícula do próximo aluno: ");
		scanf("%d",&p->matr);
	}
		printf("\nO total de Picadinho de Carne foi: %d",tot_picadinho);
		printf("\nO total de Frango à Parmegiana foi: %d",tot_frango);
		printf("\nO total de Espaguete à Bologuesa foi: %d",tot_espaguete);				
		printf("\nO total do Faturamento foi: %.2f",tot_fat);						
}
