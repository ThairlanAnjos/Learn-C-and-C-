#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define TAM 3

int main()
{

	setlocale(LC_ALL, "Portuguese");
	
	//imprimindo na tela
	
	int vetor[3],cont;
	
	//passando valores para o vetor
	
	vetor[0] = 5;
	vetor[1] = 10;
	vetor[2] = 15;
	
	//exibindo valores do vetor	

	printf ("\nPosi��o 0: %i", vetor[0]);
	printf ("\nPosi��o 1: %i", vetor[1]);
	printf ("\nPosi��o 2: %i", vetor[2]);
	
	//imprimindo vetor num la�o de repeti��o
	
	for(cont = 0; cont < TAM; cont++)	{
		printf("\nPosi��o %d : %d",cont, vetor[cont]);
	}

	system ("pause");


}

