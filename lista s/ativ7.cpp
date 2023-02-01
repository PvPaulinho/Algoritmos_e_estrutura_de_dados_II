#include<iostream>
using namespace std;
int c=0;
struct Projeto{
    string nome;
    int horastrabalhadas;
    float valorhora;	
};
float valorProjeto(Projeto p){
	double valorProjeto = p.horastrabalhadas*p.valorhora;
}
void cadastra(Projeto v[], int c, string n, int ht, float vh){
	v[c].nome = n;
	v[c].horastrabalhadas = ht;
	v[c].valorhora = vh;
}
void funcionario(Projeto p[]){
	int achei =0;
	string aux;
        cout << "\nNome:" ;
		    cin >> aux;
		    for(int i=0; i<c; i++){
		        if(aux==p[i].nome){
		            achei = 1;
		            cout << "\n\nNome:"<< p[i].nome;
		            cout << "\nhorastrabalhadas:" << p[i].horastrabalhadas;
		            cout << "\nvalorhora:" << p[i].valorhora;
		        }
		    }
		    if(achei==0) cout << "\nNao encontrado";
	}
void exibir(Projeto p []){
   	for(int i=0; i<c; i++){
         cout << "\nNome: "<< p[i].nome;
         cout << "\nHoras trabalhadas: " << p[i].horastrabalhadas;
         cout << "\nValor da hora: " << p[i].valorhora;
	   	}
}
int main(){
	Projeto p[3];
	while(1){
         int op;
         cout << "\n\n1-Inserir um projeto\n2-Exibir dados\n3-Listar dados\n4-Sair\n\n";
         cin >> op;
         if(op==1){
            cin.ignore();
			string n;
			int ht;
			float vhora;
			cout << "\nNome:" ;
			getline(cin,n);
			cout << "\nhoras trabalhadas:" ;
			cin >> ht;
			cout << "\nvalor da hora:" ;
			cin >> vhora;
			cadastra(p,c,n,ht,vhora);
			}
			if(op==2){
            	funcionario(p);
        }
        if(op==3){
        	exibir(p);
        }
		if(op==4){
		 break;
		}
    }
}
