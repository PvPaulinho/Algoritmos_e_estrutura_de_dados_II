#include<iostream>
using namespace std;
struct aluno {
	string nome;
	float prova1;
	float prova2;
};

int main(){
	aluno a[3];
	float result;
		for(int i=0;i<3;i++){
			cout<<"Inserir aluno: ";
			cin>> a[i].nome;
			cout<<"inserir Prova1: ";
			cin>>a[i].prova1;
			cout<<"inserir Prova2: ";
			cin>>a[i].prova2;
		}
		for(int i=0; i<3; i++){			
			result = a[i].prova1+a[i].prova2;
				
			if(result>= 60 ){
				cout << a[i].nome <<" Passou infeliz !!!\n";
				}
			if (result < 60){
				cout << a[i].nome <<" Se ferrou infeliz !!!\n";
				}
		}
	}
