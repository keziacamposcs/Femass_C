/*
Organização de Computadores 2
Nome: Kezia Campos
Data: 29.10.20
Exercicio 3
*/

#include<stdio.h>

int quarto;

main()
{
	printf("\nDigite o numero do seu quarto: ");
	scanf("%d", &quarto);
	
	if( quarto % 2 == 0)
	{
		printf("Ir para direita");
	}
	else
		printf("Ir para esquerda");
}