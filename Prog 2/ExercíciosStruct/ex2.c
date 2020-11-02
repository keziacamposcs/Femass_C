/*
Faça um programa em C para registrar as lavagens de veículos de um
Lava-Jato.
Deseja-se registrar a Placa, Nome do proprietário, a Categoria (Moto,
Carro ou Caminhão), o Tipo de Lavagem (Básica ou Geral) e o valor
segundo a tabela abaixo:
TIPO DE VEÍCULO     TIPO DE LAVAGEM
                     BÁSICA  GERAL
MOTO                 10,00   15,00
CARRO                30,00   45,00
CAMINHÃO             70,00  100,00
O programa deverá ser finalizado quanto for informado “SAIR” na placa
do veículo.
Para cada veículo, o programa deverá exibir os dados do mesmo e o
valor à pagar pelo cliente. Exemplo:
PLACA: LLS8788
CATEGORIA: Carro
TIPO LAVAGEM: Geral
VALOR À PAGAR: 45,00
Ao final, o programa deverá exibir:
a) A Quantidade de lavagens efetuadas.
b) O Total de carros que fizeram a lavagem geral.
Deve-se utilizar obrigatoriamente Struct e Função.
*/

#include<stdio.h>
#include<string.h>

int totquant;
int totgeral;
float valor_pagar;

struct lavajato
{
	char placa[20];
	char nome[20];
	char categoria[15];
	char tipo[20];
	float valor;	
}; 

struct lavajato autocar;


void quant_lav(char tipo)
{
	totquant++;
}

void quant_geral(char tipo, char categoria)
{
	if(tipo == 'geral' && categoria == 'carro')
		totgeral++;
}

void dados_lavagem(char tipo, char categoria)
{
	if(tipo =='basica' && categoria =='moto')
		valor_pagar = 10;
	else
	if(tipo =='basica' && categoria =='carro')
		valor_pagar = 30;
	else
	if(tipo =='basica' && categoria =='caminhao')
		valor_pagar = 70;
	else
	if(tipo =='geral' && categoria =='moto')
		valor_pagar = 15;
	else
	if(tipo =='geral' && categoria =='carro')
		valor_pagar = 45;
	else
	if(tipo =='geral' && categoria =='caminhao')
		valor_pagar = 100;
}

main()
{	
	printf("\nPLACA: ");
	scanf("%s", &autocar.placa);	
	
	
	while (strcmp("sair", autocar.placa) == 1)
	{
		printf("\nPLACA: ");
		scanf("%s", &autocar.placa);
		
		printf("\nNOME: ");
		scanf("%s", &autocar.nome);
		
		printf("\nCATEGORIA: ");
		scanf("%s", &autocar.categoria);
		
		printf("\nTIPO: ");
		scanf("%s", &autocar.tipo);
		
		quant_lav(autocar.tipo);
			
		quant_geral(autocar.tipo, autocar.categoria);	
		
		dados_lavagem(autocar.tipo, autocar.categoria);
		
		printf("\nPlaca: %s", autocar.placa);
		printf("\nCategoria: %s", autocar.categoria);
		printf("\nTipo Lavagem: %s", autocar.tipo);
		printf("\nValor a pagar: %.2f", valor_pagar);
	}
	
	printf("Total de lavagens efetuadas = %d", totquant);
	printf("Total de carros que fizeram lavagem geral = %d", totgeral);
	
}