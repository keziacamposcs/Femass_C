/*
Organização de Computadores 2
Nome: Kezia Campos
Data: 27.10.20
Exercicio 1
*/

#include<stdio.h>
#include<string.h>

int imc;
int i;

struct nutricao
{
	char nome;
	float peso;
	float altura;
};

struct nutricao paciente[100];


void classificacao(float iimc)
{
	if (iimc<16)
		printf("\nMagreza grave");
	else
	if(iimc>=16 && iimc<17)
		printf("\nMagreza moderada");
	else
	if(iimc>=17 && iimc<18.5)
		printf("\nMagreza leve");
	else
	if(iimc>18.5 && iimc<25)
		printf("\nSaudavel");
	else
	if(iimc>=25 && iimc<30)
		printf("\nSobrepeso");
	else
	if(iimc>=30 && iimc<35)
		printf("\nObesidade I");
	else
	if(iimc>=35 && iimc<40)
		printf("\nObesidade II(severa)");
	else
	if(iimc>=40)
		printf("\nObesidade III(morbida)");
}
main()
{
	printf("\nNOME: ");
	scanf("%s", &paciente[i].nome);
	
	while (strcmp("sair", &paciente[i].nome) == 1)
	{
		printf("\nNOME: ");
		scanf("%s", &paciente[i].nome);
		
		printf("\nPESO: ");
		scanf("%f", &paciente[i].peso);
		
		printf("\nALTURA: ");
		scanf("%f", &paciente[i].altura);
		
		imc=paciente[i].peso / (paciente[i].altura * paciente[i].altura);
		
		classificacao(imc);
	}
}