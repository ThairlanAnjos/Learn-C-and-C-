#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");
	
	//Definindo variaveis
	char letra [10];
	
	//Atribuindo valores a variavel 'letra'.
	printf("\nDigite uma letra:\n");
	scanf("%c",&letra);
	
	//condicional simples
	if (letra == x){
		printf ("\n\tA 'letra' � x.\n");
		
	}

    else(letra != x){
    	printf (" \n\t A letra %c, e diferente de 'x'.\n\n");
	}
	
	//Condicional num�rica
	printf("\n\tCodigo da letra = %d. \n\n",letra);
	
	system ("pause");


}

