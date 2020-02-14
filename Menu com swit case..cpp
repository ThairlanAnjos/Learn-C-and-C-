#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");
	
	//Definindo variaveis
	
	int a;
	
	//Definindo menu de opções
	
	printf("Escolha uma opção [1] [2] [3] [4]: ");	
	scanf ("%i",&a);
	
	//Estrutura de decisão baseda em escolha das opções acima.	
	
	switch(a){
		case 1:
			printf ("\n Opção 1");
			
			break;
	    case 2:
			printf ("\nOpção 2");
			break;
		case 3:
			printf ("\nOpção 3");
			break;
			
		default:
			printf("\nInvalidaS");			
	}

	system ("pause");

}
