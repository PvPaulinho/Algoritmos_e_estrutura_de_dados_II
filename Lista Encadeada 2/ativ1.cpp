#include <iostream>
using namespace std;

struct Pessoa{
	string nome;
	int idade;
};
int main(){
	Pessoa p;
	cout <<"Digite o nome: ";
	cin >> p.nome;
	cout <<"Digite a idade: ";
	cin>> p.idade;
	cout << p.nome <<" "<< p.idade<< endl;
	
}
