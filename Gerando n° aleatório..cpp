#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <time.h>

   /*Gerador de numeros aleatorio pode ser util na gera��o de
    codigos de seguran�a ou de aprova�� estatanea.*/


int main()
{

	setlocale(LC_ALL, "Portuguese");
	
	//Parte respos�vel por alimentar o 'rand' (radon = aleat�rio).
	srand((unsigned)time(NULL));
	
	//Gerando apenas valor ale�torio.
	int aleatorio = rand();
	
	//Variavel que recebe o resto da divis�o do numero 3 (entre 0 e 2).
	int aleatorio_fist = rand() % 3;
	
	//Variavel que recebe o resto da divis�o do numero 5 (entre 1 e 5).
	int aleatorio_last = (rand() % 3) + 1;
	
	//imprime o valor
	printf("\n");
	printf("\t[  %d  ]\t\n",aleatorio); //apenas valor aleat�rio.
	printf("\t[ %d ]",aleatorio_fist); //resto da divis�o por 3.
	printf("[ %d ]\n\n",aleatorio_last); //resto da divis�o por 5 de 1 a 5.
	
    //Pausa apor execultar
	system ("pause");


}

