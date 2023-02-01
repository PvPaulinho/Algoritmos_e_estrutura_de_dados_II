#include <iostream>
using namespace std;
struct Endereco{
	string rua;
	int num;
};
struct Pessoa {
	string nome;
	int idade;
	struct end;
	Endereco *end;
};
int main(){ 
	Pessoa *p = new Pessoa;
	Pessoa x[5];
	p=x;
	for(int i=0; i<5; i++){
	cout <<"Digite o nome: ";
	cin >> p->nome ;
	cout <<" Digite a idade: ";
	cin >> p->idade;
	cout<< "Rua: ";
	p -> end = new Endereco;
	cin >> p->end->rua;
	cout << "Numero: ";
	cin>> p->end->num;
	
	p++;
	}
	p=x;
	for(int i=0; i<5; i++){
		cout << p->nome <<" "<< p->idade<< endl;
		p++;
	}
}
