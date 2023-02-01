#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    string nome;
    int idade;
    int ts;
    int nf;
    int bonusidade;
    int bonusts;
    int bonusnf;
    int bonustotal;
    ofstream x ("BonusNatal.txt");
    while (1){
        int m;
        cout << "\n\nBonus Natal\n";
        cout << "\nDigite 1 para inserir funcionario\nDigite 2 para sair\n";
        cin >> m;
        if (m==1){
            cout << "\nInforme o nome: ";
            cin >> nome;
            cout << "\nInforme a idade: ";
            cin >> idade;
            cout << "\nInforme o tempo de servico: ";
            cin >> ts;
            cout << "\nDigite o numero de filhos: ";
            cin >> nf;
            if (idade>45){
                bonusidade=(idade-45)*5;
            }
            else{
                bonusidade=0;
            }
            if (nf<3){
                bonusnf=nf*15;
            }
            else{
                bonusnf=45;
            }
            bonusts=ts*20;
            bonustotal=bonusidade+bonusnf+bonusts;
            x << nome << "  " << bonustotal << "\n" ;
        }
        else{
            break;
        }
    }
}
