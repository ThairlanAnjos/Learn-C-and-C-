#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<stdlib.h>

main(){
    
    int vet[10], aux1, aux2, i, j, menu;
    i=0;
    aux1=0;
    aux2=0;
    for(i=0; i<10; i++){
      vet[i]=0;
    }
    printf("########################################\n");
    printf("\t Estrutura de Dados\n");
    printf("########################################\n");
    
          printf("\nDigite 1 para Inserir:\n       2 Para Visualizar:\n       3 para Excluir:\n       4 para Sair:\n\n");
          scanf("%i", &menu);    
    
    while(menu!=4){
                   
    if(menu==1){
                
      if((vet[0]!=0)&&(vet[1]!=0)&&(vet[2]!=0)&&(vet[3]!=0)&&(vet[4]!=0)&&(vet[5]!=0)&&(vet[6]!=0)&&(vet[7]!=0)&&(vet[8]!=0)&&(vet[9]!=0)){     
          printf(" O vertor esta cheio, exclua uma posicao do vetor para inserir mais.\n");
      }
      else{
          printf(" Insira um numero: ");
          scanf("%i", &vet[aux1]);      
          aux1=aux1+1;
          if(aux1==10){
          aux1=0;
          
          if((vet[0]!=0)&&(vet[1]!=0)&&(vet[2]!=0)&&(vet[3]!=0)&&(vet[4]!=0)&&(vet[5]!=0)&&(vet[6]!=0)&&(vet[7]!=0)&&(vet[8]!=0)&&(vet[9]!=0)){
          printf(" O vertor esta cheio, exclua uma posicao do vetor para inserir mais.\n");                 
            } 
         }     
      }
   }
   
   else if(menu==2){
    for(i=0; i<10; i++){
          printf(" Vetor: %i\n",vet[i]); 
      }
   }
    else if(menu==3){
         vet[aux2]=0;
         aux2=aux2+1;         
         printf("Excluido!\n");
       if(aux2==10){
           aux2=0; 
         }  
     }
    else{
         printf("Erro!\n");
         }
         
         printf("\nDigite 1 para Inserir:\n       2 para Visualizar:\n       3 para Excluir:\n       4 para Sair:\n\n");
         scanf("%i", &menu);
     }
      
     system("pause");
}
