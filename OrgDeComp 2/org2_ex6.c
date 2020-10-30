/*
Organização de Computadores 2
Nome: Kezia Campos
Data: 29.10.20
Exercicio 6
*/
#include<stdio.h>

int cod_vendedor;
float tot_venda;
float totfinal;

tot_final( float totvenda)
{
	if (totvenda<=1500)
		totfinal = 1200 + (totvenda * 0.10);
	else
		totfinal = 1200 + (1500 * 0.10) + ( (totvenda - 1500) * 0.20);
}

main()
{
	printf("\nPara encerrar o programa, digite '0' em Cod Vendedor...");
	
	printf("\nCod Vendedor:");
	scanf("%d", &cod_vendedor);
	
	while (cod_vendedor!=0)
	{
		printf("\nCod Vendedor:");
		scanf("%d", &cod_vendedor);
		
		printf("\nTotal de venda: ");
		scanf("%f", &tot_venda);
		
		tot_final(tot_venda);
		
		printf("\nSalario final eh: R$ %2.f", totfinal);
		printf("\n--------------------");
	}
}