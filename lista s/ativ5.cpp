#include<iostream>
using namespace std;
struct Aluno{
	string nome;
	float nota;
	
};
int main(){
    int t = 10;
    Aluno a[t];   
    for(int i=0; i<t;i++){
        cout << "\nNome do aluno:";
        cin>>a[i].nome;    
        cout <<"\n nota : ";
        cin>>a[i].nota;
	}
    for(int i=0;i<t;i++){
		cout<<"\nNome:" << a[i].nome<<" nota:" << a[i].nota;
    }
}
