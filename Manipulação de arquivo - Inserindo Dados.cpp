#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");
	            
	            
	            FILE *arquivo; 
	            
	            char nome[500];	            
	            int  idade;
	            
	             arquivo = fopen ("arquivo2.txt","a"); /*Abrindo arquivo*/
	            /*O 'a' cria um arquivo ou abre um existente*/
	            
	            printf("Digite seu nome:");
	            scanf("%s",&nome); /*'%s' pois a variável é uma string*/
	            
	            printf("Digite sua idade:");
	            scanf("%d",&idade); /*'%s' pois a variável é uma string*/
	            
	            fprintf(arquivo,"%s %d", nome, idade);
	            
	getch();
	return(0);


}

