#include <iostream>
#include <conio.h>
using namespace std;
struct Aluno{
    char nome[20];
    float nota;
};
int main(){
    int t;
    cout<< "Digite o nome e a nota dos 10 alunos:\n";
    Aluno v[10];
    for (int i=0;i<10;i++){
        cout<< "\nDigite o nome: ";
        cin>>v[i].nome;
        cout<< "Digite nota: ";
        cin>>v[i].nota;
    }
    for (int i=0;i<10;i++){
        cout << "\nAluno " << i+1 << " :\n" << v[i].nome << "\nNota: " << v[i].nota << "\n";
    }
getch();}
