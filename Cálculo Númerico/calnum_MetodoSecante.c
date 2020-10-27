/*
Calculo Numerico
Nome: Kezia Campos
Data: 14.09.20
Metodo da secante
*/

#include <stdio.h>
#include <math.h>

using namespace std;

/*
Para testar segue:
suponha que a função seja f(x)=x^2-9
intervalo [0;5]
erro=0,01
a e b = intervalo
*/

double funcao (double x)
{
	return (pow(x, 2) - 9);
}

int main (int argc, char *argv[])
{
	double erro, a, b, x, medio;
	int cont, qtdIteracao;
	
	printf("Metodo da Secante\n");
	
	printf("\nDigite o limite inferior: ");
	scanf("%lf", &a);
	
	printf("\nDigite o limite superior: ");
	scanf("%lf", &b);
	
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
	
	if (fabs(funcao(a)) < erro)
		printf("O limite inferior e uma raiz");
	else
	{
		if(fabs(funcao(b)) < erro)
			printf("O limite superior e uma raiz");
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
				x=((a*funcao(b))-(b*funcao(a)))/(funcao(b)-funcao(a));
				if(fabs(funcao(x))<=erro)
				{
					printf("a raiz aproximada eh %f\n", x);
					break;
				}
				a=b;
				b=x;
			}
		}
	}
	printf("\n\n");
	
	return 0;
}