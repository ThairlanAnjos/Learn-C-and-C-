
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX 12

struct DADOS {
	char nome[30];
	char cpf[11];
	int apartamento;
	float condominio;
};

struct DADOS dados[MAX];
int i, j, contador = 0, flag;

//Fun��o 1 - cadastrar
void cadastrar() {
	
		do {
		system ("cls");
		printf("***CADASTRAR NOVO MORADOR***\n");
		printf("Informe o nome do morador: ");
		fflush(stdin);
		gets(dados[i].nome);
		
		printf("Informe o cpf do morador: ");
		fflush(stdin);
		gets(dados[i].cpf);
		
		printf("Informe o n�mero do apartamento: ");
		scanf("%i", &dados[i].apartamento);
		
		printf("Informe a taxa de condom�nio: ");
		scanf("%i", &dados[i].condominio);
		
		printf ("\nDeseja cadastrar outro morador? \n1 - Sim \n2 - N�o\nOp��o: ");
		scanf ("%i", &flag);
		while (flag != 1 || flag != 2) {
			printf ("Op��o inv�lida\n");
			flag = 2;
		}
	contador++;
	} while (flag == 1);
}

//Fun��o 2 - alterar
void alterar(void) {
	
	char nome[30], cpf[11];
	int apartamento;
	float condominio;
	
	printf("***ALTERA��O DE CADASTRO***\n");
	printf("Informe o nome: ");
	fflush(stdin);
	gets(nome);
	
		if (strcmp(dados[i].nome, dados[j + 1].nome) == 0) {
			printf("\nNome: %c\nCPF: %c\nApartamento: %i\nCondominio: %f\n\n", dados[i].nome, dados[i].cpf, dados[i].apartamento, dados[i].condominio);
			printf("\nDeseja alterar este cadastro? \n 1 - sim\n2 - n�o\nOp��o: ");
			scanf("%i", &flag);
			
			if (flag == 1) {
				printf("Informe o nome do morador: ");
				fflush(stdin);
				gets(nome);
				strcpy(nome, dados[i].nome);
				
				printf("Informe o cpf do morador: ");
				fflush(stdin);
				gets(cpf);
				strcpy(cpf, dados[i].cpf);
				
				printf("Informe o n�mero do apartamento: ");
				scanf("%i", &apartamento);
				dados[i].apartamento = apartamento;
				
				printf("Informe a taxa de condom�nio: ");
				scanf("%i", &condominio);
				dados[i].condominio = condominio;
			}
		}
		else{
			printf("Nenhum contrato encontrado!");
		}
	return;
}

//Fun��o 3 - listar
void listar(void) {
	char auxChar[30];
	int auxInt;
	
	printf("***LISTAR MORADORES***\n");
	for(i = 0; i < MAX; i++) {
		for(j = i + 1; j < MAX; j++) {
			if(strcmp(dados[i].nome, dados[j + 1].nome) > 1) {
			strcpy(auxChar, dados[i].nome);
			strcpy(dados[i].nome, dados[j].nome);
			strcpy(dados[j].nome, auxChar);
			
			strcpy(auxChar, dados[i].cpf);
			strcpy(dados[i].cpf, dados[j].cpf);
			strcpy(dados[j].cpf, auxChar);
			
			auxInt = dados[i].apartamento;
			dados[i].apartamento = dados[j].apartamento;
			dados[j].apartamento = auxInt;
			
			auxInt = dados[i].condominio;
			dados[i].condominio = dados[j].condominio;
			dados[j].condominio = auxInt;
			}
		}
	}
	return;
}


//Fun��o menu
void menu (void) {
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	
	printf ("***CADASTRO DE MORADORES***\n");
	printf ("Selecione a op��o desejada \n1 - Cadastrar \n2 - Alterar \n3 - Listar \n0 - Sair \nOp��o:");
	scanf("%i", &opcao);
	
	switch (opcao) {
		case 1: {
			cadastrar();
			break;
			menu();
		}
		
		case 2: {
			alterar();
			menu();
		}
		
		case 3: {
			listar();
			menu();
		}
		
		case 0: {
			
			break;
			menu();
		}
		default: {
			printf ("\nOp��o inv�lida!");
			system("pause");
			menu();
		}
			
	}
	return;
}

//Fun��o principal
main (void) {
	menu();
}
