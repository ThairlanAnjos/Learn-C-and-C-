#include<stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

/*Crie um programa que caucule a 4 notas e retorne a media juntamente com
A maior nota*/

float nota (float nota01, float nota02, float nota3, float nota4);

int main(void)

{
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,n3,n4;	

	printf ("\nDigite a 1° nota: ");
	scanf ("%f",n1);
	
	printf ("\nDigite a 2° nota: ");
	scanf ("%f",n2);
	
	printf ("\nDigite a 3° nota: ");
	scanf ("%f",n3);
	
	printf ("\nDigite a 4° nota: ");
	scanf ("%f",n4);
	
	
	
	printf ("a e igual ah... [%i]");

	system ("pause");


}

float nota (float nota01, float nota02, float nota3, float nota4);

