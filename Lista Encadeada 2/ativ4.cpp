#include <iostream>
using namespace std;

struct Pessoa {
	string nome;
	int idade;
};
int main(){
	Pessoa *p = new Pessoa;
	Pessoa x[5];
	p=x;
	for(int i=0; i<5; i++){
	cout <<"Digite o nome: ";
	cin >> p->nome ;
	cout <<" Digite a idade: ";
	cin>> p->idade;
	p++;
	}
	p=x;
	for(int i=0; i<5; i++){
		cout << p->nome <<" "<< p->idade<< endl;
		p++;
	}
}
