 
  #include<stdio.h> 
  #include<stdlib.h> 
  #include <locale.h> 
  #define TAM 5 
 
  void values(int *valuesPtr);
  
  int long array_name (!NULL);
 
  int main(){ 
 
  setlocale(LC_ALL, "Portuguese"); 
 
  unsigned int values [5];
  int i=2 ;
 
  //int *vPtr = values; 
     
      
    for(i=2;i<11;i++) 
	{
      	 values [0] = i; 
         values [1] = i; 
         values [2] = i; 
         values [3] = i; 
         values [4] = i;
	}


  printf("\nPosi��o 0: [%d]", values [0]  -=8); 
  printf("\nPosi��o 1: [%d]", values [1]  -=6); 
  printf("\nPosi��o 2: [%d]", values [2]  -=4); 
  printf("\nPosi��o 3: [%d]", values [3]  -=2); 
  printf("\nPosi��o 4: [%d]", values [4]  -=0); 
 
  system("pause"); 
 
 
 }
