#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");
	
	             FILE *arquivo;
	             arquivo = fopen ("arquivo.txt","w");
	             /*O 'W' cria um aquivo, e substitui um arquivo já existente*/
	             
	             printf("Arquivo criado.");
	             
	
	getch();
	return(0);




}

