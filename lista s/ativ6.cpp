#include<iostream>
using namespace std;
struct Produto{
	string nome;
	float preco;
	int estoque;
};
int main(){
    int t = 3;
    Produto p[t];   
    for(int i=0; i<t;i++){
        cout << "\nNome do produto:";
        cin>>p[i].nome;    
        cout <<"\nPreco: ";
        cin>>p[i].preco;
		cout<<"\nQunatidade no estoque: ";  
		cin>>p[i].estoque;
    }
    int maior = 0; 
    int menor = 0;
    for(int i=1;i<t;i++){
        if (p[i].nome>p[maior].nome)
            maior = i;
        if (p[i].nome<p[menor].nome)
            menor=i;
    }
    cout<<"\nNome:" << p[maior].nome<<" maior preco:" << p[maior].preco<<" estoque: "<<p[maior].estoque;
    cout<<"\nNome:" << p[menor].nome<<" menor preco:" << p[menor].preco<<" estoque: "<<p[menor].estoque;
}
