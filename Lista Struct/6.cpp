#include <iostream>
#include <conio.h>
using namespace std;
struct produto{
    char nome[20];
    float preco;
    int estoque;
};
int main(){
    int x;
    cout<< "Digite a quantidade de produtos a serem registrados: ";
    cin>>x;
    produto p[x];
    for (int i=0;i<x;i++){
        cout<< "\nDigite o nome do produto: ";
        cin>>p[i].nome;
        cout<< "Digite o preco do produto: ";
        cin>>p[i].preco;
        cout<< "Digite o numero do estoque: ";
        cin>>p[i].estoque;
    }
    int maior=0,menor=0;
    for (int i=0;i<x;i++){
        if (p[maior].preco<p[i].preco){
            maior=i;
        }
        if (p[menor].preco<p[i].preco){
            menor=i;
        }
    }
    cout<< "\nO produto mais caro e: "<<p[maior].nome<< ", de preco: "<<p[maior].preco<< ", e numero de estoque: "<<p[maior].estoque<< "\n";
    cout<< "\nO produto mais barato e: "<<p[menor].nome<< ", de preco: "<<p[menor].preco<< ", e numero de estoque: "<<p[menor].estoque<< "\n";
getch();}
