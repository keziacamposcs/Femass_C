#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float x, h;
float de2, de3, de5, x0;

float f (float x);
float calcula_de2 (float x, float h);
float calcula_de3 (float x, float h);
float calcula_de5 (float x, float h);


main()
{
	printf("\nDigite o X da funcao: ");
	scanf("%f", &x);
	
	printf("\nDigite o H da funcao: ");
	scanf("%f", &h);
	
	while (h<=0)
	{
		printf("\nFuncao invalida!");
		
		printf("\nDigite o H da funcao: ");
		scanf("%f", &h);
	}
	
	de2= calcula_de2(x, h);
	de3= calcula_de3(x, h);
	de5= calcula_de5(x, h);
	
	printf("\nDerivada utilizando metodo de dois pontos: %f", de2);
	printf("\nDerivada utilizando metodo de tres pontos: %f", de3);
	printf("\nDerivada utilizando metodo de cinco pontos: %f", de5);

}

float f (float x)
{
	return(x*x-9);
}

float calcula_de2 (float x, float h)
{
	return((f(x+h)-f(x))/h);
}

float calcula_de3 (float x, float h)
{
	return((1/(2*h))*(-3*f(x)+4*f(x+h)-f(x+2*h)));
}

float calcula_de5 (float x, float h)
{
	return ( f(x-2*h) - 8*f(x-h) + 8*f(x+h) - f(x+2*h) ) / (12*h);
}