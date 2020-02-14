#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <time.h>

   /*Gerador de numeros aleatorio pode ser util na geração de
    codigos de segurança ou de aprovaçã estatanea.*/


int main()
{

	setlocale(LC_ALL, "Portuguese");
	
	//Parte resposável por alimentar o 'rand' (radon = aleatório).
	srand((unsigned)time(NULL));
	
	//Gerando apenas valor aleátorio.
	int aleatorio = rand();
	
	//Variavel que recebe o resto da divisão do numero 3 (entre 0 e 2).
	int aleatorio_fist = rand() % 3;
	
	//Variavel que recebe o resto da divisão do numero 5 (entre 1 e 5).
	int aleatorio_last = (rand() % 3) + 1;
	
	//imprime o valor
	printf("\n");
	printf("\t[  %d  ]\t\n",aleatorio);
	printf("\t[ %d ]",aleatorio_fist);
	printf("[ %d ]\n\n",aleatorio_last);
	
	
	
	
	
	
	
	
	
	
    //Pausa apor execultar
	system ("pause");


}

