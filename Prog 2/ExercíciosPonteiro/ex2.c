/*
Faça um programa em C para registrar as inscrições para o evento
beneficente EAD NAS ESCOLAS.
Os dados são: CPF, Nome, Sexo, Idade, Profissão e Valor da doação.
Ao final das inscrições o programa deverá exibir:
a) A quantidade de homens e mulheres inscritos.
b) A quantidade de pessoas acima de 60 anos.
c) A quantidade de pessoas que doaram acima de 50 reais.
d) Valor total arrecadado.
Obs1.: O evento é "fechado" e apenas 150 pessoas foram convidadas a
participar.
Obs2.: Deve-se utilizar obrigatoriamente Struct, Ponteiro, Vetor e
Função.
*/

#include <stdio.h>

int i;
int totF, totM;
int tot60;
int tot50;
int totvalor;

int *ptF;
int *ptM;
int *pt60;
int *pt50;


struct evento
{
	int cpf;
	char nome;
	char sexo;
	int idade;
	char profissao;
	float valor;
};

struct evento inscricao[150];


// A quantidade de homens e mulheres inscritos
void quant_sexo (int sexo)
{
	if (sexo == 'F' || sexo == 'f')
	{
		totF++;
	}
	else
		totM++;
}

// A quantidade de pessoas acima de 60 anos.
void quant_60 (int idade)
{
	if (idade >=60)
		tot60++;
	
}

// A quantidade de pessoas que doaram acima de 50 reais.
void quant_50 (float valor)
{
	if (valor > 50)
		tot50++;
}

// Valor total arrecadado.
void quant_tot (float valor)
{
	totvalor = totvalor + valor;
}

main()
{
	for (i=0; i<150; i++)
	{
		printf("\nCPF: ");
		scanf("%d", &inscricao[i].cpf);
		
		printf("\nNome: ");
		scanf("%s", &inscricao[i].nome);
		
		printf("\nSexo: ");
		scanf("%s", &inscricao[i].sexo);
		
		printf("\nIdade: ");
		scanf("%d", &inscricao[i].idade);
		
		printf("\nProfissao: ");
		scanf("%s", &inscricao[i].profissao);
		
		printf("\nValor da Doacao: ");
		scanf("%f", &inscricao[i].valor);
		
		printf("\n---------------------------");
	
		//Funcao total sexo	
		quant_sexo (inscricao[i].sexo);
		
		//Funcao acima de 60
		quant_60 (inscricao[i].idade);
		
		//Funcao Acima de 50 reais
		quant_50 (inscricao[i].valor);
		
		//Funcao total arrecadado
		quant_tot(inscricao[i].valor);
	
	}
	
ptF = &totF;
ptM = &totM;
pt60 = &tot60;
pt50 = &tot50;

printf("\nTotal de Mulheres: %d", *ptF);
printf("\nTotal de Homens: %d", *ptM);
printf("\nTotal com mais de 60 anos: %d", *pt60);
printf("\nTotal que doaram mais de 50 reais: %d", *pt50);
printf("\nTotal das doacoes: R$ %.2f", totvalor);

}