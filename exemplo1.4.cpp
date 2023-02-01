#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Registro{
    string nomeproduto;
    string quantidade;
    string marca;
    string preco;
} ;

void split(string linha, char at, string S[]){
    int pos = 0, fim, i=0;
    do {
        fim=linha.find(at, pos);
        if (fim == -1)
            S[i] = linha.substr(pos);
        else
            S[i++] = linha.substr(pos, fim - pos);
            pos = fim+1;
    } while (fim != -1);
}

void carregaRegistros(vector<Registro> &R){
    string linha;
    ifstream arquivo;
    Registro T;
    arquivo.open("agenda.csv");
    if (arquivo.is_open()){
    while (getline (arquivo,linha)){
         cout << linha << '\n';
         string S[4];
         split(linha, ',', S);
         T.nomeproduto = S[0];
         T.quantidade = S[1];
         T.marca = S[2];
         T.preco = S[3];
         R.push_back(T);
    }
    arquivo.close();
    } else {
        cout << "Unable to open file";
    }
}

void salvaRegistros(vector<Registro> R){
    ofstream arquivo;
    arquivo.open("agenda.csv", ios::trunc );
    for(int i = 0; i < R.size(); i++){
        arquivo << R[i].nomeproduto << "," << R[i].quantidade
         << "," << R[i].marca << "," << R[i].preco
         << endl;
    }
    arquivo.close();
}

int main() {
    vector<Registro> R;
    carregaRegistros(R);
    salvaRegistros(R);
    return 0;
}
