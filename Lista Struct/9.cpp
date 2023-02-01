#include <iostream>
#include <conio.h>
using namespace std;

struct Aluno{
    string nome;
    float prova1;
    float prova2;
};

Aluno v[4];

void CadastrarAluno( string n, float p1, float p2, int i){
    v[i].nome = n;
    v[i].prova1 = p1;
    v[i].prova2 = p2;
}

int main(){
    string n;
    float p1;
    float p2;
    float media=60;
    cout << "Cadastre os 40 aluno:\n";
    for (int i=0;i<4;i++){
        cout << "\nDigite o nome: ";
        cin >> n;
        cout << "\nDigite a nota da prova 1: ";
        cin >> p1;
        cout << "\nDigite a nota da prova 2: ";
        cin >> p2;
        CadastrarAluno(n, p1, p2, i);
    }
    cout << "\n\nAlunos aprovados:\n";
    for (int i=0;i<4;i++){
        if (media <v[i].prova1 + v[i].prova2){
            cout << "\n" << v[i].nome;
        }
    }
    cout << "\n\nAlunos reprovados:\n";
    for (int i=0;i<4;i++){
        if (media >(v[i].prova1 + v[i].prova2)){
            cout << "\n" << v[i].nome;
        }
    }
getch();}
