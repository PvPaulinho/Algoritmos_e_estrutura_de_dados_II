#include <iostream>
#include <conio.h>
using namespace std;
struct solucao{
    char elemento[20];
    float porcentagem;
};
int main(){
    int t;
    float maior=0;
    cout<< "Digite quantas vezes vc deseja vc deseja usar o programa: ";
    cin>>t;
    solucao v[t];
    for (int i=0;i<t;i++){
        cout<< "\nDigite o valor de um elemento: ";
        cin>>v[i].elemento;
        cout<< "Digite o valor da porcentagem: ";
        cin>>v[i].porcentagem;
    }
    for (int i=0;i<t;i++){
        if (maior<v[i].porcentagem){
            maior = v[i].porcentagem;
        }
    }
    cout<< "\n\nO elemento de maior porcentagem e:\n";
    for (int i=0;i<t;i++){
        if (maior == v[i].porcentagem){
            cout << "Elemento: " << v[i].elemento << "\nPorcentagem: " << v[i].porcentagem;
        }
    }
getch();}
