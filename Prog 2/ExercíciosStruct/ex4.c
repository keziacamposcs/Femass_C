/*
Faça um programa em C para registrar uma Enquete de votação para um
concurso de Bandas de Rock n Roll.
As 5 bandas que irão se apresentar são: Thunderstruck, COVID-21,
Transgressão, Epic e Overdrive.
Para cada pessoa que irá votar, o programa deverá registrar o CPF,
Nome, Sexo, Idade e a nota da votação.
As notas terão o seguinte formato:
[1] – Péssima
[2] – Ruim
[3] – Regular
[4] – Boa
[5] – Excelente
O programa termina quando digitar “SAIR” no nome da pessoa.
Ao final, o programa deverá exibir:
a) A média da avaliação das 5 bandas
b) A quantidade de pessoas votantes
c) O Nome da banda vencedora
*/

#include<stdio.h>
#include<string.h>

struct banda
{
	char nome;
	int cpf;
	char sexo;
	int idade;
	int thunderstruck;
	int covid21;
	int transgressao;
	int epic;
	int overdrive;
};

struct banda pessoa;

int meddia;
int totpessoas;
int notaov, notaep, notatr, notaco, notath;


void media (int over, int epi, int trans, int cov, int thund)
{
	meddia = (thund+cov+trans+epi+over)/5;
}

void quant_pessoas (int cpf)
{
	totpessoas++;
}

void banda (int ov, int ep, int tr, int co, int th)
{
	notaov=notaov+ov;
	notaep=notaep+ep;
	notatr=notatr+tr;
	notaco=notaco+co;
	notath=notath+th;
	
	if(notaov > notaep && notatr && notaco && notath)
		vencedor = notaov;
	else
	if(notaep> notaov && notatr && notaco && notath)
		vencedor = notaep;
	else
	if(notatr>notaov&&notaep&&notaco&&notath)
		vencedor = notatr;
	else
	if(notaco>notaov&&notaep&&notatr&&notath)
		vencedor = notaco;
	else
	if(notath>notaov&&notaep&&notatr&&notaco)
		vencedor = notath;
}

main()
{
	printf("\nNOME: ");
	scanf("%s", &pessoa.nome);
	
	while (strcmp("sair", &pessoa.nome) == 1)
	{
		printf("\nNOME: ");
		scanf("%s", &pessoa.nome);		
		
		printf("\nCPF: ");
		scanf("%d", &pessoa.cpf);
		
		printf("\nSEXO: ");
		scanf("%s", &pessoa.sexo);
		
		printf("\nIDADE: ");
		scanf("%d", &pessoa.idade);
		
		printf("\nNOTAS");
		printf("\n[1] – Péssima");
		printf("\n[2] – Ruim");
		printf("\n[3] – Regular");
		printf("\n[4] – Boa");
		printf("\n[5] – Excelente");
		
		printf("\nNota do Thunderstruck: ");
		scanf("%d", &pessoa.thunderstruck);
		
		printf("\nNota do COVID-21: ");
		scanf("%d", &pessoa.covid21);
		
		printf("\nNota do Transgressão: ");
		scanf("%d", &pessoa.transgressao);
		
		printf("\nNota do Epic: ");
		scanf("%d", &pessoa.epic);
		
		printf("\nNota do Overdrive: ");
		scanf("%d", &pessoa.overdrive);
		
		media (pessoa.overdrive, pessoa.epic, pessoa.transgressao, pessoa.covid21, pessoa.thunderstruck);
		
		quant_pessoas(pessoa.cpf);
	
		banda(pessoa.overdrive, pessoa.epic, pessoa.transgressao, pessoa.covid21, pessoa.thunderstruck);
	}

	printf("\n Media da avaliacao das 5 bandas: %d", meddia);
	printf("\n Quantidade de pessoas votantes: %d", totpessoas);
}
