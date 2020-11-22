/*
Faça um programa em C para obter a largura e comprimento de um terreno
e calcular a sua área em m2.

Para calcular a área do terreno, construa uma função com passagem por
referência.
*/

#include <stdio.h>

int larg, comp;
int area;
int *ptr;


int calcula_area ( int larg, int comp)
{
	return (larg * comp);
}


main()
{
	printf("\nDigite a largura do terreno: ");
	scanf("%d", &larg);
	
	printf("\nDigite o comprimento do terreno: ");
	scanf("%d", &comp);
	
		
	area = calcula_area( larg, comp);
	
	ptr = &area;


	printf("\n A Area do terreno eh: %d", *ptr);
}