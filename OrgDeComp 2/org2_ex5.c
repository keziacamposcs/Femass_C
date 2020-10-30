/*
Organização de Computadores 2
Nome: Kezia Campos
Data: 29.10.20
Exercicio 5
*/

#include<stdio.h>

float lag, alt, comp;
float complad, laglad;
float areapiscina, areaazul, tot;

main()
{
	printf("\nDigite a largura da piscina: ");
	scanf("%f", &lag);
	
	printf("\nDigite a altura da piscina: ");
	scanf("%f", &alt);
	
	printf("\nDigite o comprimento da piscina: ");
	scanf("%f", &comp);
	
	printf("\nDigite a largura do ladrilho: ");
	scanf("%f", &laglad);
	
	printf("\nDigite o comprimento do ladrilho: ");
	scanf("%f", &complad);
	
	areapiscina = 2*(lag * alt) + 2*(comp *alt) + (lag * comp);
	
	areaazul = laglad * complad;
	
	tot = areapiscina / areaazul;
	
	printf("\n%f", areapiscina);
	
	printf("\nTotal de ladrilhos que precisa eh: %.2f", tot);
}