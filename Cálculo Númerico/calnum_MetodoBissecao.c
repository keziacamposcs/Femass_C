/*
Calculo Numerico
Nome: Kezia Campos
Data: 26.08.20
Metodo da Bissecao
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
Para testar segue:
suponha que a função seja f(x)=x^2-9
intervalo [0;5]
erro=0,01
a e b = intervalo
*/

//Funcao:
float f(float x)
{
	float y;
	y=pow(x,2)-9;
	return y;
}

//--------------------------------

float bissec(float a, float b, float erro)
{
	float c, fa,fb,fc;
	fa=f(a);
	fb=f(b);
	//modulo = fabs(b-a)
	while(fabs(b-a)>erro)
	{
		c=(a+b)/2;
		fc=f(c);
		if(fa*fc<0)
		{
			b=c;
			fb=fc;
		}
		else
		{
			a=c;
			fa=fc;
		}			
	}
	
	c=(a+b)/2;
	return c;

}

main()
{
	float a, b, erro, c;
	
	printf("Aplicando o metodo da Bissecao\n");
	
	printf("a= ");
	scanf("%f", &a);
	
	printf("\nb= ");
	scanf("%f", &b);
	
	printf("\nerro= ");
	scanf("%f", &erro);	
	
	if(f(a)*f(b)>0)
	{
		printf("O intervalo nao eh aplicavel\n");
		
		printf("Digite o novo intervalo:\n");
		
			printf("a= ");
			scanf("%f", &a);
	
			printf("\nb= ");
			scanf("%f", &b);
			
			printf("\nerro= ");
			scanf("%f", &erro);		
	}
	
	c=bissec(a,b,erro);
	printf("Raiz aproximada = %0.4f", c);
	return 0;
	
}