/*
Calculo Numerico
Nome: Kezia Campos
Data: 30.09.20
Metodo de Newton
*/

#include <stdio.h>
#include <math.h>


double erro, x, medio, xk;
int cont, qtdIteracao;


//Função de x_k
double f (double x)
{
	return (pow(x, 2) - 9);
}

//Derivada de f(x_k) 
double df (double x)
{
	return (2*x);
}

//Principal
int main (int argc, char *argv[])
{
	
	printf("Metodo de Newton\n");
	
	printf("\nDigite o X_k: ");
	scanf("%lf", &x);

	printf("\n");
	
	
	
	printf("\nDigite o valor do erro aceitavel: ");
	scanf("%lf", &erro);

	while(erro<0)
	{
		printf("\nO valor do erro tem que ser positivo ou zero!");
		printf("\n");
		printf("Digite o valor do erro aceitavel: ");
		scanf("%lf", &erro);
	}
	
	printf("\n");
	
	
	
	if (fabs(f(x)) < erro)
		printf("O limite inferior e uma raiz");
	else
	{
	
			printf("\nDigite o numero maximo de interacoes: ");
			scanf("%d", &qtdIteracao);
			while(qtdIteracao <= 0 )
			{
				printf("\nA quantidade de iteracoes deve ser positiva\n");
				
				printf("\nDigite o numero maximo de iteracoes: \n");
				scanf("%d", &qtdIteracao);
			}
			while(cont<=qtdIteracao)
			{
				if(cont==qtdIteracao)
				{
					printf("Interacoes insuficientes\n");
					break;
				}
				
				xk=(x-f(x)/df(x));
				
				if(fabs(f(x))<=erro)
				{
					printf("a raiz aproximada eh %f\n", xk);
					break;
				}
				x=xk;
				
			}
		}
	}