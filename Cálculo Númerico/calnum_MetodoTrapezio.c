/*
Calculo Numerico
Nome: Kezia Campos
Data: 21.10.20
Metodo do trapezio
*/

#include <stdio.h>
#include <math.h>

//Variaveis
float a, b, h, y;
int i, n;


//função
double f (float x)
{
	return (pow(x, 2) - x - 9);
}

//Trapezio
double trapezio (float xa, float xb, float xn)
{
	//altura dos trapezios
	h=(xb-xa)/xn;
	
	y = (fabs(f(xa)) + fabs(f(xb))) /2.0;
	
	for (i=1; i<xn; i++)
	{
		y = y +   fabs(f(xa+i*h));
	}
	
	y = h * y;
}

//Principal
main()
{
	do
	{		
		printf("\n a = ");
		scanf("%f", &a);
	
		printf("\n b = ");
		scanf("%f", &b);
		
		if(a > b)
			printf("\n 'a' tem que ser menor que 'b'");
			
	} while (a>b);
	
	
	do
	{
		printf("\nNumero de integracao: ");
		scanf("%d", &n);
		
		if (n<=0)
		{
			printf("\n Nao deve ser menor que 0");
		}
	}while(n<=0);
	
	
	trapezio (a, b, n);
	
	printf("O valor da integral eh: %f \n ", y);	
}