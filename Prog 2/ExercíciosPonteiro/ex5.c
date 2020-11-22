/*
 Faça um programa em C para calcular e exibir a nota final dos alunos da
turma de PROGII.
O programa deverá obter a Matrícula, Nome, Curso, Nota da prova (vale
6 pts), Nota do trabalho (vale 3 pts) e Nota de participação (vale 1
pt).(Utilize Struct)
Para cada aluno, o programa deverá calcular e exibir a nota final.
(Utilize Função com passagem por referência)
Ao final, o programa deverá exibir a quantidade de alunos aprovados e
reprovados (nota 7,0 ou superior = aprovado)
(Utilize Função com passagem por valor)
*/

#include <stdio.h>

int i;
int nota_final;
int totaprovados, totreprovados;
int nf;

struct escola
{
	int matricula;
	char nome;
	char curso;
	int nota_prova;
	int nota_trabalho;
	int nota_participacao;
};

struct escola aluno;

//Funcao c/ passagem por referencia
int aluno_nota_final (int *nprova, int *ntrabalho, int *nparticipacao)
{
	nota_final = (aluno.nota_prova + aluno.nota_trabalho + aluno.nota_participacao)/3;
//	nota_final = (*nprova + *ntrabalho + *nparticipacao)/3;
	return (nota_final);
}

//Funcao c/ passagem por valor
void totaluno (int nfinal)
{
	if (nfinal>= 7)
		totaprovados++;
	else
		totreprovados++;
}

main()
{
	for (i=0; i<30; i++)
	{
		printf("\nMatricula: ");
		scanf("%d", &aluno.matricula);
		
		printf("\nNome: ");
		scanf("%s", &aluno.nome);
		
		printf("\nCurso: ");
		scanf("%s", &aluno.curso);
		
		printf("\nNota da Prova: ");
		scanf("%d", &aluno.nota_prova);
		
		printf("\nNota do trabalho: ");
		scanf("%d", &aluno.nota_trabalho);
		
		printf("\nNota de participacao: ");
		scanf("%d", &aluno.nota_participacao);
		
		nf = aluno_nota_final (aluno.nota_prova, aluno.nota_trabalho, aluno.nota_participacao);
		
		printf("\nNota final: %d", nf);
		
		totaluno(nf);
	}
	
	printf("\nAlunos Aprovados: %d", totaprovados);
	
	printf("\nAlunos Reprovados: %d", totreprovados);
}
