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

	printf ("\nPosição 0: %i", vetor[0]);
	printf ("\nPosição 1: %i", vetor[1]);
	printf ("\nPosição 2: %i", vetor[2]);
	
	//imprimindo vetor num laço de repetição
	
	for(cont = 0; cont < TAM; cont++)	{
		printf("\nPosição %d : %d",cont, vetor[cont]);
	}

	system ("pause");


}

