//Fila Com Alocação Dinamica

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

struct cliente{
	int  codigo;
	int  fone;
	char nome;
	char ende;

};
cliente *ci;


struct recibo{
	int codigo;
	int nundoc;
	int valordoc;
	int dataentradia;
	int dataentrames;
	int dataentraano;
	int datasaidia;
	int datasaimes;
	int datasaiano;
	
};

recibo *re;


int tam, nuncod=0;


int iserir();
void add();
void add();
int addcli();

int main(){

//	int opcao,valor;
	//bool i=true;
	
//	Cliente *ci
	//ci = (Cliente*) malloc (sizeof(Client));
	
	//Recibo *re
	//re = (Recibo*) malloc (sizeof(Recibo));	
	iserir;

}

int iserir() {
	int n=0,i=0, u=0;
	char nom;
	cout << "digite o nome do cliente para buscar";
	cin >> nom;
	for( i>0;i<tam;i++){
		if (nom=ci[i].nome){
			cout << "cliente encontrado";
			for( u>0;u<tam;u++)
			if (ci[i].codigo=re[u].codigo){
				n++;
				nuncod= i;
			}
			if (n<3)
				add();
		}
		else {
			cout << "cliente nao encontrado.";
				addcli();
		}
	}
	return nuncod;
}


void add(){
 int cod, u ,i;	
	re[u].codigo = ci[cod].codigo;
	cout << "insira o numero do codigo";
	cin >> re[u].nundoc;
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


int addcli(){
	int u, i;
	cout << "issira o codigo do cliente";
	ci[i].codigo;
	cout << "issira o telefone do cliente";
	ci[i].fone;
	cout << "issira o nome do cliente";
	ci[i].nome;
	cout << "issira o endereco do cliente";
	ci[i].ende;
	
	add();
	
	nuncod= i;
	
	return nuncod;
}

void data(){
	

	
}

void menu() {

	cout << "\t\t        -----> oi <-----" << endl << endl;
    cout << "\t\t\t\t   OPCOES"<< endl;
    cout << "\t\t    1 - inserir dado " << endl;
    cout << "\t\t    2 - remover um dado" << endl;
    cout << "\t\t    3 - imprimir o dado" << endl;
    cout << "\t\t    4 - sair" << endl;
}

/*
void mostrar_primeiro() {
	if(inicio==NULL) {
		cout << "\tERRO: Fila vazia";	
		return;
	}
	cout << "\nO primeiro elemento da fila = " << inicio->dado;
}
*/
