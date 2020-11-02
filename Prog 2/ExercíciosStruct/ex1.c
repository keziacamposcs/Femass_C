/*
Faça um programa em C para registrar as inscrições para o evento
beneficente Criança Esperança.
Os dados são: CPF, Nome, Sexo, Idade, Profissão e Valor da doação.
Ao final das inscrições o programa deverá exibir:
a) A quantidade de homens e mulheres inscritos.
b) A quantidade de pessoas acima de 60 anos.
c) A quantidade de pessoas que doaram acima de 1.000 reais.
d) Valor total arrecadado.
O programa termina quando digitar 0 (zero) para o CPF.
Deve-se utilizar obrigatoriamente Struct, Vetor e Função.
*/

#include<stdio.h>
#include<string.h>

int totM, totF;
int i;
int tot60;
int totvalor;
float tot_arre;

struct doacao
{
	int cpf;
	char nome;
	char sexo;
	int idade;
	char profissao;
	float valor;
};

struct doacao ce[100];	


void verifica_sexo(char sexo)
{
	if(sexo=='f' || sexo=='F')
		totF++;
	else
		totM++;
}

void verifica_idade(int idade)
{
	if(idade>=60)
		tot60++;
}

void verifica_valor (float valor)
{
	if(valor>1000)
		totvalor++;
}

void tot_arrecadado(float valor)
{
	tot_arre=tot_arre+valor;
}


main()
{	
	printf("\nCPF: ");
	scanf("%d", &ce[i].cpf);
	
	while (ce[i].cpf =! 0)
	{
		printf("\nCPF: ");
		scanf("%d", &ce[i].cpf);
		
		printf("\nNOME: ");
		scanf("%s", &ce[i].nome);
		
		printf("\nSEXO: ");
		scanf("%s", &ce[i].sexo);
		
		printf("\nIDADE: ");
		scanf("%d", &ce[i].idade);
		
		printf("\nPROFISSAO: ");
		scanf("%s", &ce[i].profissao);
		
		printf("\nVALOR: ");
		scanf("%f", &ce[i].valor);
		
		
		verifica_sexo(ce[i].sexo);
		
		verifica_idade(ce[i].idade);
		
		verifica_valor(ce[i].valor);
		
		tot_arrecadado(ce[i].valor);

	}
	printf("\nO total de homens eh %d.",totM);
	printf("\nO total de mulheres eh %d.",totF);
	printf("\nO total de pessoa com mais de 60 eh %d.",tot60);
	printf("\nO total de pessoas que doaram acima de 1000 eh %d.",totvalor);
	printf("\nValor total arreacadado eh: %.2f", tot_arre);
}