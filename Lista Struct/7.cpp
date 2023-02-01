#include <iostream>
#include <conio.h>
using namespace std;
struct projeto {
    char nome[20];
    int horastrabalhadas;
    float valorhora;
};
int x=0;
projeto v[100];
float valorprojeto(projeto z){
    float m;
    m=z.horastrabalhadas*z.valorhora;
    return m;
}
void inserir(){
    cout<< "Digite o nome do projeto: ";
    cin>>v[x].nome;
    cout<< "Digite as horas trabalhadas: ";
    cin>>v[x].horastrabalhadas;
    cout<< "Digite o valor das horas: ";
    cin>>v[x].valorhora;
}
void exibir(){
    string np;
    cout<< "Digite o nome do projeto desejado: ";
    cin>>np;
    for (int u=0;u<x;u++){
        if(v[u].nome==np){
            cout<< "\nProjeto: " <<v[u].nome<< "\nHoras Trabalhadas: " <<v[u].horastrabalhadas<< "\nValor hora: "<<v[u].valorhora<< "\n\n";
        }
    }
}
float vp[100];
void listar(){
    for(int i=0;i<x;i++){
        int num=i+1;
        cout<< "\nProjeto " <<num<< ":\nNome: " <<v[i].nome<< ", Horas Trabalhadas: "<<v[i].horastrabalhadas<< ", Valor por Hora:"<<v[i].valorhora<< ", Valor Projeto: "<<vp[i]<< "\n\n";
        }
    }
int main(){
    int menu;
    for (int i=1;i>0;i++){
        cout<< "1 - Inserir\n2 - Exibir os dados do projeto cujo o nome e informado pelo usuario\n3 - Listar todos dados dos projetos, inclusive o valor do projeto\n4 - Sair\n";
        cin>>menu;
        if (menu==1){
            inserir();
            vp[x]=valorprojeto(v[x]);
            x++;
        }
        if (menu==2){
            exibir();
        }
        if (menu==3){
            listar();
        }
        if (menu==4){
            break;
        }
    }
getch();}
