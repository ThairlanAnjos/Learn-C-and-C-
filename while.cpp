#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");
	
	//definindo variaveis
	
	int a = 1, b = 10;
	
	//contando até 10
	while (a<=10){
		printf("\n%d",a);
		
		
		//incremento
		a++;
		
		a = 1;
		
	//a = a + 1;
			
	}
	
	do{
		
		//imprimindo 'a' na tela
		print("\n%d",a);
 	}
	
	
     // contagem regreciva
     
     /*	while (b>=1){
		printf("\n%d",b);
		*/
		
		//incremento
		
	b = b - 1;
		
	}
     
	

	system ("pause");


}

