#include <iostream>
#include <conio.h>
using namespace std;
struct veiculo{
    string chassi;
    string placa;
    int fabricacao;
};
    int x=0;
    veiculo v[100];
bool insereveiculo(){
    cout<< "\nDigite o chassi: ";
    cin>>v[x].chassi;
    cout<< "Digite a placa: ";
    cin>>v[x].placa;
    cout<< "Digite a data de fabricacao: ";
    cin>>v[x].fabricacao;
    x++;
    if (x<=100){
        return true;
    }
    else
        return false;
}
veiculo buscaporplaca (string p){
    for (int i=0;i<x;i++){
        if (p==v[i].placa){
            return v[i];
        }
    }
}
int main(){
    int menu;
    veiculo bp;
    string pl;
    for (int i=1;i>0;i++){
        cout<< "\n1 - Inserir veiculo.\n2 - Buscar veiculo pela placa.\n3 - Sair.\n";
        cin>>menu;
        if (menu==1){
            bool is;
            is=insereveiculo();
            if (is==true){
                cout<<"\nTrue.\n";
            }
            if (is==false){
                cout<<"\nFalse.\n";
            }
        }
        if (menu==2){
            cout<< "\nDigite a placa do veiculo: ";
            cin>>pl;
            bp=buscaporplaca(pl);
            cout<< "\nChassi: "<<bp.chassi<< "\nPlaca: "<<bp.placa<< "\nData de Fabricacao: "<<bp.fabricacao<< "\n\n";
        }
        if (menu==3){
            break;
        }
    }
getch();}
