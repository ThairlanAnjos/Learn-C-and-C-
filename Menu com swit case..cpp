#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");
	
	//Definindo variaveis
	
	int a;
	
	//Definindo menu de op��es
	
	printf("Escolha uma op��o [1] [2] [3] [4]: ");	
	scanf ("%i",&a);
	
	//Estrutura de decis�o baseda em escolha das op��es acima.	
	
	switch(a){
		case 1:
			printf ("\n Op��o 1");
			
			break;
	    case 2:
			printf ("\nOp��o 2");
			break;
		case 3:
			printf ("\nOp��o 3");
			break;
			
		default:
			printf("\nInvalidaS");			
	}

	system ("pause");

}
