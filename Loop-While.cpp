#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Definindo vari�veis
	int a = 0, b = 10;
	
	//Contando at� 10
	while(a <= 10){
		
		// imprimindo variavel 'a'.
		printf("\n[%d]",a );
		
		//Incrementando o valor de 'a'.
		//a = a + 1;
		a++;
	}
	
		printf("\n----------------------------------",b );
	
	//Contando (regrecivamente) at� 1.
	while(b >= 0){
		
		// imprimindo variavel 'b'.
		printf("\n[%d]",b );
		
		//Incrementando o valor de 'a'.
		//b = b - 1;
		b--;
	}
		
	
	system ("pause");


}

