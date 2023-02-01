#include <iostream>
using namespace std;

struct Pessoa {
	string nome;
	int idade;
};
int main(){
	Pessoa p[5];
	for(int i=0; i<5; i++){
	cout <<"Digite o nome: ";
	cin >> p[i].nome ;
	cout <<" Digite a idade: ";
	cin>> p[i].idade;
	}
	for(int i=0; i<5; i++){
		cout << p[i].nome <<" "<< p[i].idade<< endl;
	}
	
}
