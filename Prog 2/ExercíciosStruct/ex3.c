/*
Faça um programa em C para calcular o IMC dos pacientes de uma clínica
de Nutrição.
Para cada paciente será registrado o Nome, Sexo, Peso e Altura.
O programa deverá terminar quando digitar “SAIR” para o nome do
paciente.
Para cada paciente, o programa deverá exibir a classificação de acordo
com a tabela acima.
Quando o programa for finalizado, deve-se exibir o Nome e o Peso de
todos os pacientes Obesos e abaixo do peso.
Deve-se utilizar Struct, Vetor e Função.
*/

#include<stdio.h>
#include<string.h>

int imc;
int i;

struct nutricao
{
	char nome;
	char sexo;
	float peso;
	float altura;
};

struct nutricao paciente[100];


void classificacao(float iimc)
{
	if (iimc<18.5)
		printf("\nAbaixo do peso");
	else
	if(iimc>=18.6 && iimc<=24.9)
		printf("\nPeso Ideal");
	else
	if(iimc>=25 && iimc<=29.9)
		printf("\nLevemente acima do peso");
	else
	if(iimc>=30 && iimc<34.9)
		printf("\nObesidade grau I");
	else
	if(iimc>=35 && iimc<39.9)
		printf("\nObesidade grau II (severa)");
	else
	if(iimc>=40)
		printf("\nObesidade III (morbida)");
}
main()
{
	printf("\nNOME: ");
	scanf("%s", &paciente[i].nome);
	
	while (strcmp("sair", &paciente[i].nome) == 1)
	{
		printf("\nNOME: ");
		scanf("%s", &paciente[i].nome);
		
		printf("\nSEXO: ");
		scanf("%s", &paciente[i].sexo);
		
		printf("\nPESO: ");
		scanf("%f", &paciente[i].peso);
		
		printf("\nALTURA: ");
		scanf("%f", &paciente[i].altura);
		
		imc=paciente[i].peso/(paciente[i].altura * paciente[i].altura);
		
		classificacao(imc);
	}
}