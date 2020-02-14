#include<stdio.h>
#include<stdlib.h>
#include <locale.h> 

int main()
{
	
	/*Requisitos: Um algorotimo que faça, a iserção do aluno no banco de dados e seus respectivos dados, :
	 - Nome / CPF / Endereço / Telefone
	 - Matricula / Matéria / Notas / Curso / Periodo
	*/

	setlocale(LC_ALL, "Portuguese");	
	//Definindo variaveis
	
	int a;
	char aluno [5] [500];
	
	printf("\n\n\n\t\t\t###################################");	
	printf("\n\t\t\t--------Escolha uma opção-------- ");
	
	printf("\n\t\t\t# [1] - Adicionar Aluno"); // Adiciona aluno e seus respectivos dados.
	printf("\n\t\t\t# [2] - Adicionar Curso"); // Adiciona curso e suas respectivas matérias.
	printf("\n\t\t\t# [3] - Adicionar Nota");
	printf("\n\t\t\t# [4] - Alterar Dados (Aluno / Curso)");
	printf("\n\t\t\t# [5] - Excluir (Aluno / Curso)");	
		
	scanf ("%i",&a);	
	
	switch(a){
		case 1:
			printf ("\n\t\t\t[1- Adicionar Aluno]\n\n\n");
			printf ("Digite o nome do aluno:");
			scanf("%c",aluno);
			printf ("Digite o endereço do aluno:");
			scanf("%c",aluno);
			printf ("Digite o CPF do aluno:");
			scanf("%c",aluno);
			printf ("Digite o telefone do aluno:");
			scanf("%c",aluno);
			break;
	    case 2:
			printf ("\n\t\t\t[2- Adicionar Curso]\n\n\n");
			break;
			
		case 3:
			printf ("\n\t\t\t[3 - Adicionar Nota]\n\n\n");
			break;
			
		case 4:
			printf ("\n\t\t\t[4 - Alterar dados]\n\n\n");
			break;
			
		case 5:
			printf ("\n\t\t\t[5 - Excluir (Aluno / Curso)]\n\n\n");
			break;
			
		default:
			printf("\t\t\t#########################################################",a);
			printf("\n\t\t\t# A opção [%i] não foi encontrada, escolha outra opção. #\n",a);
			printf("\t\t\t#########################################################\n\n",a);			
	}

	system ("pause");


}
