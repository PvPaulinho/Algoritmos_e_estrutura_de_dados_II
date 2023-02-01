#include<iostream>
using namespace std;
struct veiculo{
	string chassi;
	string placa;
	int fabricacao;
};
void inserirveiculo(veiculo v[100], string c, string p, int f ){
	int x =100;
	int achei=0;
	string aux;
		for(int i=0;i<100;i++){
			if(aux==v[i].placa){
				cout<<"Inserir placa: ";
				cin>> v[i].placa;
				cout<<"inserir chassi: ";
				cin>>v[i].chassi;
				cout<<"\nAno de fabricacao: ";
				cin>>v[i].fabricacao;
			}
		}
		if (achei==0)
			cout<<"\nInvalido.";
}
void buscaporplaca( veiculo v[]){
		int achei =0;
		string aux;
        cout << "\nNome:" ;
		    cin >> aux;
		    for(int i=0; i<100; i++){
		        if(aux==v[i].placa){
		            achei = 1;
		    }
		}
	for(int i=0; i<100; i++){
		cout<<"\nPlaca: "<<v[i].placa;
		cout<< "\nChassi: " <<v[i].chassi;
        cout<< "\n:Ano de fabricacao: " << v[i].fabricacao;
	}
}
int main(){
	veiculo v[100];
	while(1){
        int op;
        cout << "\n\n1-Inserir veiculo \n2-Exibir dados\n3-Sair\n\n";
        cin >> op;
        if(op==1){
         	string p;
         	string ch;
         	int f;
         	int a;
         	cout << "\nPlaca:" ;
			cin>> p;
			cout << "\nchassi:" ;
			cin >> ch ;
			cout << "\nAno de fabricacao:" ;
			cin >>f;
			inserirveiculo(v,ch,p,f);
		}
	    if(op==2){
			buscaporplaca (v) ;
		}
		if (op==3){
			break;
		}
	}
}
