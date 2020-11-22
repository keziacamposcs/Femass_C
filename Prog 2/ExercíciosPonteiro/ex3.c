/*
Faça um programa em C para calcular o valor total a pagar ao vendedor
de acordo com a tabela de Bônus abaixo:
Tabela de Bônus com base no total de vendas do mês:
Até R$5.000,00 --> Bonus de R$100,00
Entre R$5.000,01 e R$10.000,00 --> Bonus de R$300,00
Entre R$10.000,01 e R$50.000,00 --> Bonus de R$500,00
Acima de R$50.000,00 --> Bonus de R$1.000,00
O programa de verá obter a matrícula do vendedor, o salário e o total
de vendas realizadas no mês.
Ao final, o programa deverá exibir a quantidade de vendedores que
venderam acima de 50.000.
O programa termina quando informar 0 para a matrícula do vendedor.
Neste exercício deverá conter 2 funções:
- Para calcular a quantidade de vendedores que venderam acima de 50.000
reais construa com passagem por valor.
- Para calcular o valor do bônus, construa com passagem por referência.
*/

#include <stdio.h>

int i;
int tot50;
float valor_bonus;


struct bonus
{
	char matricula;
	float salario;
	float totvendas;
};

struct bonus vendedor[10];

// Passagem por referencia
float bonus_vendas (float *vendas)
{	
	if (*vendas <= 5000)
		return (valor_bonus = 100);
	
	else
	if (*vendas >= 5000.01 && *vendas < 10000)
		return (300);

	else
	if (*vendas >= 10000.01 && *vendas < 50000)
		return (500);
		
	else
	if (*vendas >=50000)
		return (1000);
}


// Passagem por valor
void acima50 (float vendas)
{
	if (vendas>50000)
		tot50++;
}


main()
{
	printf("\nPara encerrar digite 0 na matricula...");
	
	printf("\nMatricula: ");
	scanf("%s", &vendedor[i].matricula);

	while (vendedor[i].matricula != '0')
	{
		printf("\nMatricula: ");
		scanf("%s", &vendedor[i].matricula);
		
		printf("\nSalario: ");
		scanf("%f", &vendedor[i].salario);
		
		printf("\nTotal de vendas do mes: ");
		scanf("%f", &vendedor[i].totvendas);
		
		//FUNÇÕES
				
		valor_bonus = bonus_vendas (&vendedor[i].totvendas);
		
		acima50 (vendedor[i].totvendas);
		
		printf("\nValor do bonus eh: %.2f", valor_bonus);
	}
	
	printf("\nTotal que venderam acima de R$ 50.000: %d", tot50);
	
}