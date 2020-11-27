/*
Calculo Numerico
Nome: Kezia Campos (Feat. Igor Cavalcante & Nicolas)
Data: 22.09.20
Metodo de Gauss-Jacobi
*/


#include <stdio.h>
#include <math.h>
#include<stdlib.h>


//Prototipagem
void VerMatriz (float** a, float* b, int tamanho);

void CopiarMatriz (float** copiada, float** copia, int tamanho);

void MultMatriz ( float** x, float** y, float** mult, int tamanho);

void MultMatVetor  (float** x, float* y, float* mult, int tamanho);

float* jacobi (float** j, float* e, int tam, float erro, float** x, float* b);

bool Condicao (float* xk1, float* xk0, int tamanho, float erro, float** mat, float* b);

float* Soma (float* k1, float* jx, float* xk, int tamanho);

int main ()
{
	 int i, j;
	 float aux;
	 
	
	float erro=0;
	int tam=0;
	
	while (tam <= 0  || erro <=0)
	{
		printf("\nQuantas variaveis sao?");
		scanf("%d", &tam);
	
		printf("\nDigite o erro: ");
		scanf("%f", &erro);		
	}		
	 
	 float** x;
	 x= (float **) malloc (tam*sizeof(float*));
	 for(i=0; i<tam; i++){
	 	x[i] = (float *) malloc (tam*sizeof(float));
	 }
	
	float* b;
	b = (float*) malloc (tam*sizeof(float));
		
	
	for (i=0; i<tam; i++)
	{
		for (j=0; j<tam; j++)
		{
			printf("\nDigite o valores da matriz a[%d][%d]: ", i, j);
			scanf("%f", &aux);
			
			x[i][j]=aux;
			
		}
		
		printf("\nDigite o valor independente da linha a[%d]", i);
		scanf("%f", &aux);
			
		b[i] = aux;
	}
	
	printf("\n\nMatriz:\n");
	
	VerMatriz (x, b, tam);
	
	float** d;
	 d = (float **) malloc (tam*sizeof(float*));
	 for(i=0; i<tam; i++){
	 	d[i] = (float *) malloc (tam*sizeof(float));
	 }
	
	CopiarMatriz (x, d, tam);
	for(i=0; i<tam; i++)
	{
		for (j=0; j<tam; j++)
		{
			if(i==j)
			{
				d[i][j]	= -(1/d[i][j]);
			}
			else
			{
				d[i][j] = 0;
			}
		}
	}
	
	
	float** si;
	 si = (float **) malloc (tam*sizeof(float*));
	 for(i=0; i<tam; i++){
	 	si[i] = (float *) malloc (tam*sizeof(float));
	 }
	
	CopiarMatriz (x, si, tam);

		for(i=0; i<tam; i++)
	{
		for (j=0; j<tam; j++)
		{
			if(i==j)
			{
				si[i][j]= 0;
			}
		}
	}

	float** jj;
	jj = (float **) malloc (tam*sizeof(float*));
	 
	 for(i=0; i<tam; i++)
	{
		jj[i] = (float *) malloc (tam*sizeof(float));
	}	
	
	MultMatriz(d,si,jj,tam);
	
	
	float* e;
	e= (float*) malloc (tam*sizeof(float));	
			
	for(i=0; i<tam; i++)
	{
		for (j=0; j<tam; j++)
		{
			if(i==j)
			{
				d[i][j]	= -(d[i][j]);
			}
		}
	}
	
	MultMatVetor(d, b, e, tam);
		
	float* jac;
	
	jac = (float*) malloc(tam* sizeof(float));
	
	jac = jacobi(jj,e,tam,erro,x,b);
	
	
	for(i=0; i<tam; i++)
	{
		printf("\nResultado: %.3f", jac[i]);
	}
	
}


//Funcao

void VerMatriz (float** a, float* b, int tamanho)
{
	int i, j;
	
	for (i=0; i<tamanho; i++)
	{
		for (j=0; j<tamanho; j++)
		{
			printf("%.3f \t", a[i][j]);
			
		}
		
		printf("|%.3f \n", b[i]);
		
	}
	
}

void CopiarMatriz (float** copiada, float** copia, int tamanho)
{
	int i, j;
	float aux;
	
	printf("\n\n");
	
	for (i=0; i<tamanho; i++)
	{
		for (j=0; j<tamanho; j++)
		{
				aux = copiada[i][j];
				
				copia[i][j] = aux;		
		}
		
	}
}

void MultMatriz ( float** x, float** y, float** mult, int tamanho)
{
	int i, j, k; float aux;
	
	for (i=0;i<tamanho; i++) {
      for (j=0; j<tamanho; j++) {
      	aux=0;
        for (k=0; k<tamanho; k++) {
         aux = aux + (x[i][k] * y[k][j]); 

        }
        mult[i][j] = aux;

      }
    }
}

 void MultMatVetor  (float** x, float* y, float* mult, int tamanho)

{
	int i, j, k; float aux;
	
	for (i=0;i<tamanho; i++) {
      for (j=0; j<tamanho; j++) {
      	aux=0;
        for (k=0; k<tamanho; k++) {
         aux = aux + (x[i][k] * y[k]); 

        }
        mult[i] = aux;

      }
    }
}

float* jacobi (float** j, float* e, int tam, float erro, float** x, float* b)
{
	float* xk;
	float* k1;
	int i;
	float* jx;
	
	
	xk = (float*) malloc(tam* sizeof(float));
	k1 = (float*) malloc(tam* sizeof(float));
	
	for(i=0; i<tam; i++)
	{
		k1[i]=0;
	}
	
	jx = (float*) malloc(tam* sizeof(float));
	
	while (Condicao(xk, k1, tam, erro, x,b ) == false)
	{
		MultMatVetor  (j,k1,jx,tam);
		Soma (jx,e,xk,tam);
		k1=xk;
	}

	
	return xk;
}

bool Condicao (float* xk1, float* xk0, int tam, float erro, float** mat, float* b)
{
	int i;
	
	for (i=0; i<tam; i++)
	{
		if(fabs(xk1[i]-xk0[i]) > erro) return false;
	}
	
	float soma =0;
	
    for(int i=0; i<tam; i++){
        soma = 0;
        for(int j=0; j<tam; j++){
            
            soma = soma + mat[i][j]*xk1[j];
        
        }
        soma = soma - b[i];
        if(fabs(soma) > erro) return false;
    }

	return true;
}

float* Soma (float* k1, float* jx, float* xk, int tam)
{
	int i;
	
	for (i=0; i<tam; i++)
	{
		xk[i] = k1[i]+ jx[i];
	}
}
