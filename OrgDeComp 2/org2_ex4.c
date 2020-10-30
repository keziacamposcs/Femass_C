/*
Organização de Computadores 2
Nome: Kezia Campos
Data: 29.10.20
Exercicio 4
*/

#include<stdio.h>

float salario_bruto;


void imposto (float sb)
{	
	if (sb <= 1903.98)
	{
		printf("\n aliquota 0 \t parcela a deduzir IRPF: R$ 0");
	}
	else
	if (sb > 1903.98 && sb <= 2826.65)
	{
		printf("\n aliquota 7.5 % \t parcela a deduzir IRPF: R$ %.2f", sb * 0.075);
	}
	else
	if (sb > 2826,65 && sb <= 3751.05)
	{
		printf("\n aliquota 15 % \t parcela a deduzir IRPF: R$ %.2f", sb * 0.15);
	}
	else
	if (sb > 3751.05 && sb <= 4664.68)
	{
		printf("\n aliquota 22.5 % \t parcela a deduzir IRPF: R$ %.2f", sb * 0.225);
	}
	else
	if (sb > 4664.68)
	{
		printf("\n aliquota 27.5 % \t parcela a deduzir IRPF: R$ %.2f", sb * 0.275);
	}
}

main()
{
	printf("Digite o salario bruto: ");
	scanf("%f", &salario_bruto);
	
	imposto(salario_bruto);
}