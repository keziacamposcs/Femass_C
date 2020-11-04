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

//Metodo de Simpson
double simpson (float xa, float xb, float xn)
{
	double x;
	double sum;
	//altura 
	h=(xb-xa)/xn;
	
	for (i=1; i<xn; i++)
	{
		x=xa+i*h;
		if (i%2==0)
		{
			sum = sum + 2 * fabs(f(x));
		}
		else
			sum = sum+4*fabs(f(x));
	}
	
	y = h/3 *(fabs(f(xa))+sum+fabs(f(xb)));
	
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
	
	
	simpson (a, b, n);
	
	printf("O valor da integral eh: %f \n ", y);	
}