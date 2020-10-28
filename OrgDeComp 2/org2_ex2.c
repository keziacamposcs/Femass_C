/*
Organização de Computadores 2
Nome: Kezia Campos
Data: 27.10.20
Exercicio 2
*/
#include<stdio.h>

float salario_bruto;
float salario_liquido;
float desconto;

calcula (float sb)
{
	if(sb<1659.38)
	{
		desconto = sb * 0.08;
		salario_liquido = sb - desconto;
		printf("\nSalario Liquido: %.2f", salario_liquido);
		printf("\nDesconto: %.2f", desconto);
	}
	else
	if(sb>=1659.38 && sb<2765.66)
	{
		desconto = sb * 0.09;
		salario_liquido = sb - desconto;
		printf("\nSalario Liquido: %.2f", salario_liquido);
		printf("\nDesconto: %.2f", desconto);
	}
	else
	if(sb>=2765.67 && sb<5531.31)
	{
		desconto = sb * 0.08;
		salario_liquido = sb - desconto;
		printf("\nSalario Liquido: %.2f", salario_liquido);
		printf("\nDesconto: %.2f", desconto);
	}
}

main()
{
	printf("\nDigite seu salario bruto: ");
	scanf("%f",&salario_bruto);
	
	calcula(salario_bruto);
}