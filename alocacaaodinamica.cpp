#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<iostream>

using namespace std;

struct client{
	char nome[100];
	char endereco;
	char fone;
	int codigo;
};
client *cli;
struct recebimento{
	int nun_doc;
	int codigo;
	int valordoc;
	int dataentradia;
	int dataentrames;
	int dataentraano;
	int datasaidia;
	int datasaimes;
	int datasaiano;
};
recebimento *re;

int tam=2;
int tam1=6;

int man(){
	
	int n=0, nuncod, i,u;
	char nom;
	cout << "digite o nome do cliente para buscar";
	cin >> nom;
	for( i>0; i<tam; i++){
		if (nom == cli[i].codigo){
			cout << "cliente encontrado";
			for(u>0; u<tam1; u++)
				if (cli[i].codigo=re[u].codigo){
					nuncod= i;
					n++;
				}
					if (n<3){
					
						int cod;	
							re[i].codigo=cli[nuncod].codigo;
							cout << "insira o numero do codigo";
							cin >> re[u].nun_doc;
							cout << "insira o valor do documento";
							cin >> re[u].valordoc;
							cout << "insira o dia da emisao";
							cin >> re[u].dataentradia;
							cout << "insira o mes da emissao";
							cin >> re[u].dataentrames;
							cout << "insira o ano da emissao";
							cin >> re[u].dataentraano;
							cout << "insira o dia do vensimento";
							cin >> re[u].datasaidia;
							cout << "insira o mes do vensimento";
							cin >> re[u].datasaimes;
							cout << "insira o ano do vensimento";
							cin >> re[u].datasaiano;
							}
		}
		else {
		int u, i;
	cout << "issira o codigo do cliente";
	cli[i].codigo;
	cout << "issira o telefone do cliente";
	cli[i].fone;
	cout << "issira o nome do cliente";
	cli[i].nome;
	cout << "issira o endereco do cliente";
	cli[i].endereco;
		}
	}
return 0;
}

void alterarcadastro(){
	int cad,i;
	cout << "Numero do cadastro:";
	cin >> cad;
	for (i>0; i<tam;i++){
		if (cli[i].codigo==cad){
			cout << "Insira os novos dados do cliente:" << cli[i].codigo << ":" << cli[i].nome;
			cout << "isira o telefone do cliente";
			cli[i].fone;
			cout << "isira o endereco do cliente";
			cli[i].endereco;
		}
		
	}
}
