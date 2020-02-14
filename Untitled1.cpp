#include <stdio.h>
 
/* function declaration */
int max(int num1, int num2);
int num(int n1, int n2);
 
int main (void) {

   /* local variable definition */
   int a,b;
   int ret;
   int number;
   
   printf ("Digite o valor de a: \n");
   scanf("%i", &a);
   
   printf ("Digite o valor de b: \n");
   scanf("%i", &b);
 
   /* calling a function to get max value */
   ret = max(a, b);
   number = num(a,b);
 
   printf( "\nO numero maior eh : %d\n", ret );
 
   return 0;
}
 
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

int num (int n1, int n2) {

   /* local variable declaration */
   int result_02;
 
   if (n1 > n2)
      printf("\nO numero %i e maior que %i",n1,n2);
   else
      (n2 > n1);
      printf("\nO numero %i e maior que %i",n2,n1);
 
   return result_02; 
}
