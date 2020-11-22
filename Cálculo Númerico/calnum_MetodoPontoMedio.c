/*
Calculo Numerico
Nome: Kezia Campos
Data: 11.11.20
Metodo do Ponto Medio
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

//Metodo do Ponto Medio
double ponto_medio (float xa, float xb, float xn)
{
	double x;
	double totfun;
	float ih;

	//altura 
	h=(xb-xa)/xn;
	
	ih = xa;
	
	
	for (i=0; i<xn; i++)
	{		
		if (i%2 != 0)
		{
			totfun = totfun + fabs(f(ih));
		}	
		
		ih = ih + h;
	}
	
	y = fabs (2 * h * fabs(totfun));
	
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
		
		if (n<=0 && n%2!=0)
		{
			printf("\n Nao deve ser menor que 0");
		}
		
	}while((n<=0 ) && (n%2!=0));
	
	
	ponto_medio (a, b, n);
	
	printf("O valor da integral eh: %f \n ", y);	
}